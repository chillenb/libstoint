#!/usr/bin/env python3


import argparse
from pathlib import Path
import sys

def qlookupsize(l1, l2, l3, l4):
    return (l1+1)*(2*l2+1)*(2*l3+1)*(2*l4+1)


def getsize(n12, n34, MAXAM):
    acc = 0
    for l1 in range(min(n12-2, MAXAM) +1 ):
        for l2 in range(min(n12-l1-2, MAXAM) + 1):
            for l3 in range(min(n34-2, MAXAM) + 1):
                for l4 in range(min(n34-l3-2, MAXAM) + 1):
                    acc += qlookupsize(l1,l2,l3,l4)
    return acc

def totsize(MAXN, MAXAM):
    acc = 0
    for n12 in range(1, MAXN*2+1):
        for n34 in range(1, n12):
            acc += getsize(n12,n34, MAXAM)
    return acc

def mfmt(m):
    if m < 0:
        return 11*abs(m)
    else:
        return m

def gen_declare_inner_tbl(output, pre, namestub, n12, n34, l1, l2, l3, l4):
    name = f"{namestub}_{n12}_{n34}_{l1}_{l2}_{l3}_{l4}"
    output.write(f"// {pre}two_e_func {name}_lookup[{l1+1}][{2*l2+1}][{2*l3+1}][{2*l4+1}];\n")
    output.write(f"{pre}two_e_func {name}_lookup[{qlookupsize(l1, l2, l3, l4)}];\n")

def gen_inner_tbl(output, dir, namestub, n12, n34, l1, l2, l3, l4):
    # index [m1>=0, m2+l2, m3+l3, m4+l4]
    name = f"{namestub}_{n12}_{n34}_{l1}_{l2}_{l3}_{l4}"
    gen_declare_inner_tbl(output, "", namestub, n12, n34, l1, l2, l3, l4)
    output.write(f"void setup_{name}() {{\n")
    for m1 in range(0,l1+1):
        for m2 in range(-l2, l2+1):
            for m3 in range(-l3, l3+1):
                for m4 in range(-l4, l4+1):
                    fname = f"{name}_{mfmt(m1)}_{mfmt(m2)}_{mfmt(m3)}_{mfmt(m4)}"
                    fpath = Path(dir) / Path(fname + ".c")
                    if fpath.is_file():
                        output.write(f"    {name}_lookup[LIDX({l1},{l2},{l3},{l4},{m1},{m2},{m3},{m4})] = {fname};\n")
                    else:
                        # print(str(fpath) + " does not exist")
                        output.write(f"    {name}_lookup[LIDX({l1},{l2},{l3},{l4},{m1},{m2},{m3},{m4})] = retzero;\n")
    output.write("}\n")
    output.flush()

#def gen1tbl(n12, n34):

def gen_tbl_init(output, dir, namestub, MAXN, MAXAM):
    output.write("#include \"two_e_tables.h\"\n")
    output.write("#include \"two_e_ints.h\"\n")
    output.write("typedef double (*two_e_func) (double, double);\n")
    output.write("double retzero(double z12, double z34) {return 0.;}\n")
    for n12 in range(2, 2*MAXN+1):
        for n34 in range(2, 2*MAXN + 1):
            for l1 in range(min(n12-2, MAXAM) +1 ):
                for l2 in range(min(n12-l1-2, MAXAM) + 1):
                    for l3 in range(min(n34-2, MAXAM) + 1):
                        for l4 in range(min(n34-l3-2, MAXAM) + 1):
                            gen_inner_tbl(output, dir, namestub, n12, n34, l1, l2, l3, l4)
    output.flush()

def gen_header(output, namestub, MAXN, MAXAM):
    output.write("#include \"util.h\"\n")
    output.write("#ifdef __cplusplus\n")
    output.write("extern \"C\" {\n")
    output.write("#endif\n")
    output.write("typedef double (*two_e_func) (double, double);\n")
    output.write("typedef two_e_func* two_e_funcarray;\n")
    output.write(f"typedef two_e_funcarray two_e_funcblk[{MAXAM+1}][{MAXAM+1}][{MAXAM+1}][{MAXAM+1}];\n")

    output.write(f"extern two_e_funcarray* two_e_master[{2*MAXN+1}][{2*MAXN+1}];\n")

    output.write("void two_int_init();\n")

    for n12 in range(2, 2*MAXN+1):
        for n34 in range(2, 2*MAXN + 1):
            #for l1 in range(min(n12-2, MAXAM) +1 ):
            #    for l2 in range(min(n12-l1-2, MAXAM) + 1):
            #        for l3 in range(min(n34-2, MAXAM) + 1):
            #            for l4 in range(min(n34-l3-2, MAXAM) + 1):
            # gen_declare_inner_tbl(output, "extern ", namestub, n12, n34, l1, l2, l3, l4)
            name = f"{namestub}_{n12}_{n34}"
            amsize12 = MAXAM + 1
            amsize34 = MAXAM + 1
            output.write(f"extern two_e_funcarray {name}_lookup[{amsize12}][{amsize12}][{amsize34}][{amsize34}];\n")
    
    for n12 in range(2, 2*MAXN+1):
        for n34 in range(2, 2*MAXN + 1):
            for l1 in range(min(n12-2, MAXAM) +1 ):
                for l2 in range(min(n12-l1-2, MAXAM) + 1):
                    for l3 in range(min(n34-2, MAXAM) + 1):
                        for l4 in range(min(n34-l3-2, MAXAM) + 1):
                            gen_declare_inner_tbl(output, "extern ", namestub, n12, n34, l1, l2, l3, l4)
                            output.write(f"extern void setup_{namestub}_{n12}_{n34}_{l1}_{l2}_{l3}_{l4}();\n")
    
    output.write("#ifdef __cplusplus\n")
    output.write("}\n")
    output.write("#endif\n")
    output.flush()

def gen_master_init(output, namestub, MAXN, MAXAM):
    output.write("#include \"two_e_tables.h\"\n")
    output.write(f"two_e_funcarray* two_e_master[{2*MAXN+1}][{2*MAXN+1}];\n")
    for n12 in range(2, 2*MAXN+1):
        for n34 in range(2, 2*MAXN + 1):
            amsize12 = MAXAM + 1
            amsize34 = MAXAM + 1
            mname = f"{namestub}_{n12}_{n34}"
            output.write(f"two_e_func* {mname}_lookup[{amsize12}][{amsize12}][{amsize34}][{amsize34}];\n")
            output.write(f"void setup_{mname}() {{\n")

            for l1 in range(min(n12-2, MAXAM) +1 ):
                for l2 in range(min(n12-l1-2, MAXAM) + 1):
                    for l3 in range(min(n34-2, MAXAM) + 1):
                        for l4 in range(min(n34-l3-2, MAXAM) + 1):
                            output.write(f"    setup_{mname}_{l1}_{l2}_{l3}_{l4}();\n")
                            output.write(f"    {mname}_lookup[{l1}][{l2}][{l3}][{l4}] = {mname}_{l1}_{l2}_{l3}_{l4}_lookup;\n")
            output.write(f"}}\n")
    
    output.write("\n")

    output.write("void two_int_init() {\n")
    for n12 in range(2, 2*MAXN+1):
        for n34 in range(2, 2*MAXN + 1):
            mname = f"{namestub}_{n12}_{n34}"
            output.write(f"    setup_{mname}();\n")
            output.write(f"    two_e_master[{n12}][{n34}] = (two_e_funcarray*) {mname}_lookup;\n")
    output.write("}\n")
    output.flush()


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Generate lookup tables')
    parser.add_argument('MAXN', metavar='N', type=int, help='maximum value of n')
    parser.add_argument('MAXAM', metavar='L', type=int, help='max angular momentum')
    parser.add_argument('fstub', type=str, help='Function name stub', default='two_e_int')
    parser.add_argument('intdir', type=str, help='Directory containing integral .c files')
    parser.add_argument('-hf', dest='hfile', type=str, help="output file for table header")
    parser.add_argument('-if', dest='ifile', type=str, help="output file for initialization functions")
    parser.add_argument('-imf', dest='imffile', type=str, help="output file for master init file")

    args = parser.parse_args()
    if args.hfile:
        with open(args.hfile, "w") as f:
            gen_header(f, args.fstub, args.MAXN, args.MAXAM)

    if args.ifile:
        with open(args.ifile, "w") as f:
            gen_tbl_init(f, args.intdir, args.fstub, args.MAXN, args.MAXAM)

    if args.imffile:
        with open(args.imffile, "w") as f:
            gen_master_init(f, args.fstub, args.MAXN, args.MAXAM)