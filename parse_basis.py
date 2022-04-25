#!/usr/bin/env python3
import pandas as pd
import marshal
import argparse

def readbasis(filename):
    df = pd.read_csv(filename, delim_whitespace=True, header=None)
    return df.values.tolist()

amdict = {'S':0, 'P':1, 'D':2, 'F':3, 'G':4}

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description = "process a basis set")
    parser.add_argument('filename')
    args = parser.parse_args()
    shells = readbasis(args.filename)

    functions = []
    for shell in shells:
        nl = shell[0]
        zeta = shell[1]
        n = int(nl[0])
        l = amdict[nl[1]]
        # print(f'({n},{l})')
        for m in range(-l, l+1):
            functions.append((n, l, m, zeta))
    print(functions)
    with open(args.filename + '.bin', 'wb') as fo:
        marshal.dump(functions, fo)