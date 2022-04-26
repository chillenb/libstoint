#!/usr/bin/env wolframscript
(* ::Package:: *)

ILL[L_,n1_,n2_,\[Alpha]1_,\[Alpha]2_] := 1/\[Alpha]1 ((n2+L)!(n1-L-1)!)/(\[Alpha]1+\[Alpha]2)^(n1+n2) \!\(
\*SubsuperscriptBox[\(\[Sum]\), \(k = 0\), \(n1 - L - 1\)]\((Binomial[n1 + n2, n1 - L - 1 - k]*
\*SuperscriptBox[\((
\*FractionBox[\(\[Alpha]2\), \(\[Alpha]1\)])\), \(\(k\)\(\ \)\)])\)\)
ILG[L_,n1_,n2_,\[Alpha]1_,\[Alpha]2_] := (\[Alpha]2^(L-n2) (n2-L-1)!)/(\[Alpha]1+\[Alpha]2)^(n1+L+1)*\!\(
\*SubsuperscriptBox[\(\[Sum]\), \(j = 0\), \(n2 - L - 1\)]\(
\*FractionBox[\(\((n1 + L + j)\)!\), \(j!\)] 
\*SuperscriptBox[\((
\*FractionBox[\(\[Alpha]2\), \(\[Alpha]1 + \[Alpha]2\)])\), \(j\)]\)\)
INT[n12_, n34_, l1_, l2_, l3_, l4_, m1_, m2_, m3_, m4_, \[Zeta]12_, \[Zeta]34_] := (-1)^(m1+m3) Sqrt[((2 l1+1)(2 l2+1) (2 l3+1) (2 l4+1)) ]\!\(
\*SubsuperscriptBox[\(\[Sum]\), \(L = Max[Abs[l1 - l2], Abs[l3 - l4]]\), \(Min[l1 + l2, l3 + l4]\)]\(ThreeJSymbol[{l1, 0}, {L, 0}, {l2, 0}]\ ThreeJSymbol[{l3, 0}, {L, 0}, {l4, 0}]\ \((ILG[L, n12, n34, \[Zeta]12, \[Zeta]34]\  + \ ILL[L, n12, n34, \[Zeta]12, \[Zeta]34])\)\ *\(
\*SubsuperscriptBox[\(\[Sum]\), \(M = \(-L\)\), \(M = L\)]
\*SuperscriptBox[\((\(-1\))\), \(M\)] ThreeJSymbol[{l1, \(-m1\)}, {L, \(-M\)}, {l2, m2}] ThreeJSymbol[{l3, \(-m3\)}, {L, M}, {l4, m4}]\)\)\)
COEF[l1_,l2_,l3_,l4_,m1_,m2_,m3_,m4_,L_]:=\!\(
\*SubsuperscriptBox[\(\[Sum]\), \(M = \(-L\)\), \(M = L\)]\(
\*SuperscriptBox[\((\(-1\))\), \(M\)] ThreeJSymbol[{l1, \(-m1\)}, {L, \(-M\)}, {l2, m2}] ThreeJSymbol[{l3, \(-m3\)}, {L, M}, {l4, m4}]\)\)


 FullSimplify[ILL[L,n1,n2,\[Alpha]1,\[Alpha]2]+ILG[L,n1,n2,\[Alpha]1,\[Alpha]2],Assumptions->{Element[n1,PositiveIntegers],Element[n2,PositiveIntegers],\[Alpha]1>0,\[Alpha]2>0,Element[L,NonNegativeIntegers],L<n2,L<n1}]


IL[L_,n1_,n2_,\[Alpha]1_,\[Alpha]2_] := 1/\[Alpha]1 (\[Alpha]1^(-L-n1) \[Alpha]2^(L-n2) (L+n1)! Gamma[-L+n2]+(\[Alpha]1+\[Alpha]2)^(-1-n1-n2) (n1+n2)! ((\[Alpha]1+\[Alpha]2) (L+n2)! Hypergeometric2F1Regularized[1,1+L-n1,2+L+n2,-(\[Alpha]2/\[Alpha]1)]-\[Alpha]1 Gamma[-L+n2] Hypergeometric2F1Regularized[1,1+n1+n2,1-L+n2,\[Alpha]2/(\[Alpha]1+\[Alpha]2)]))


genmtab[maxam_]:=Flatten[Table[{l1,l2,l3,l4,m1,m2,m3,m4,L},{l1,0,maxam},{l2,0,maxam},{l3,0,maxam},{l4,0,maxam},{m1,-l1,l1},{m2,-l2,l2},{m3,-l3,l3},{m4,-l4,l4},{L,Max[Abs[l1-l2],Abs[l3-l4]], Min[l1+l2,l3+l4]}],8]
tabl=genmtab[3];
ParallelEvaluate @ Off[ClebschGordan::phy];
fm = ParallelMap[COEF@@#&, tabl];
cc =Association@MapThread[#1->#2&,{tabl,fm}];
cc = DeleteCases[cc,0];
cc = FullSimplify /@ cc;


INTZ[n12_, n34_, l1_, l2_, l3_, l4_, m1_, m2_, m3_, m4_, \[Zeta]12_, \[Zeta]34_] := (-1)^(m1+m3) \[Sqrt]((2 l1+1)(2 l2+1) (2 l3+1) (2 l4+1)) \!\(
\*SubsuperscriptBox[\(\[Sum]\), \(L = Max[Abs[l1 - l2], Abs[l3 - l4]]\), \(Min[l1 + l2, l3 + l4]\)]\(ThreeJSymbol[{l1, 0}, {L, 0}, {l2, 0}]\ ThreeJSymbol[{l3, 0}, {L, 0}, {l4, 0}]\ \((ILG[L, n12, n34, \[Zeta]12, \[Zeta]34]\  + \ ILL[L, n12, n34, \[Zeta]12, \[Zeta]34])\)\ *Lookup[cc, \ Key[{l1, l2, l3, l4, m1, m2, m3, m4, L}], \ 0]\)\)


INTZ2[n12_, n34_, l1_, l2_, l3_, l4_, m1_, m2_, m3_, m4_, \[Zeta]12_, \[Zeta]34_] := (-1)^(m1+m3) \[Sqrt]((2 l1+1)(2 l2+1) (2 l3+1) (2 l4+1)) \!\(
\*SubsuperscriptBox[\(\[Sum]\), \(L = Max[Abs[l1 - l2], Abs[l3 - l4]]\), \(Min[l1 + l2, l3 + l4]\)]\(ThreeJSymbol[{l1, 0}, {L, 0}, {l2, 0}]\ ThreeJSymbol[{l3, 0}, {L, 0}, {l4, 0}]\ \((IL[L, n12, n34, \[Zeta]12, \[Zeta]34])\)\ *Lookup[cc, \ Key[{l1, l2, l3, l4, m1, m2, m3, m4, L}], \ 0]\)\)


Unprotect[Power];
Unprotect[Cosh];
Unprotect[Sinh];
Format[Power[E, a_], CForm] := exp[a]
Format[Power[a_, 1/2], CForm] := sqrt[a]
Format[Power[a_, b_], CForm] := pow[a, b]
Format[Cosh[a_], CForm]:=cosh[a]
Format[Sinh[a_], CForm]:=sinh[a]
Protect[Power];
Protect[Cosh];
Protect[Sinh];
SimplifyCount[p_]:=
Which[Head[p]===Symbol,1,
IntegerQ[p],If[p==0,1,Floor[N[Log[2,Abs[p]]/Log[2,10]]]+If[p>0,1,2]],
Head[p]===Rational,SimplifyCount[Numerator[p]]+SimplifyCount[Denominator[p]]+1,
Head[p]===Complex,SimplifyCount[Re[p]]+SimplifyCount[Im[p]]+1,NumberQ[p],2,
True,SimplifyCount[Head[p]]+If[Length[p]==0,0,Plus@@(SimplifyCount/@(List@@p))]]
f[e_]:= 10 Count[e,_Exp,{0,Infinity}] + 20 Count[e,_Cosh,{0,Infinity}] + 20 Count[e,_Sinh,{0,Infinity}]+SimplifyCount[e] + 6 Count[e,Power[__,Rational[__,__]], Infinity]  + 6 Count[e,Power[_?Negative],Infinity]
CustSimp[e_]:=FullSimplify[e, ComplexityFunction->f]


nmax = 3;
genintparams[maxam_]:=Flatten[Table[{n12,n34,l1,l2,l3,l4,m1,m2,m3,m4,z12,z34},{n12,2,2*nmax},{n34,2,2*nmax},{l1,0,Min[maxam,n12-2]},{l2,0,Min[l1,n12-l1-2]},{l3,0,Min[maxam,n34-2]},{l4,0,Min[n34-l3-2]},{m1,-l1,l1},{m2,-l2,l2},{m3,-l3,l3},{m4,-l4,l4}],9]



INTZ[n12_, n34_, l1_, l2_, l3_, l4_, m1_, m2_, m3_, m4_, \[Zeta]12_, \[Zeta]34_] := (-1)^(m1+m3) \[Sqrt]((2 l1+1)(2 l2+1) (2 l3+1) (2 l4+1)) \!\(
\*SubsuperscriptBox[\(\[Sum]\), \(L = Max[Abs[l1 - l2], Abs[l3 - l4]]\), \(Min[l1 + l2, l3 + l4]\)]\(ThreeJSymbol[{l1, 0}, {L, 0}, {l2, 0}]\ ThreeJSymbol[{l3, 0}, {L, 0}, {l4, 0}]\ \((ILG[L, n12, n34, \[Zeta]12, \[Zeta]34]\  + \ ILL[L, n12, n34, \[Zeta]12, \[Zeta]34])\)\ *Lookup[cc, \ Key[{l1, l2, l3, l4, m1, m2, m3, m4, L}], \ 0]\)\)


fn = Parallelize[INTZ @@@ TAB];


Export["TAB.dat", TAB];


Export["integ.dat", fn];


fnsimp = Parallelize[CustSimp /@ fn];


Export["integsimp_lite.dat",fnsimp];


cforms = CForm /@ fnsimp;


pmap = MapThread[{#1->#2}& ,{TAB,cforms}];


assn1 = Association[pmap];
smallfnames = TAB /. assn1;


ParallelNeeds["CCodeGenerator`"];


ParallelEvaluate[{Unprotect[Power],Format[Power[a_, 1/2], CForm] := sqrt[a],Format[Power[a_, b_], CForm] := pow[a, b],Protect[Power]}]

msign[m_]:=If[m<0, Abs[m]*11, m];
makecode[args_, expr_] := 
Module[{n12,n34,l1,l2,l3,l4,m1,m2,m3,m4,z12,z34},
{n12,n34,l1,l2,l3,l4,m1,m2,m3,m4,z12,z34} := args;


fname = ToString[StringForm["two_e_int_``_``_``_``_``_``_``_``_``_``",n12,n34,l1,l2,l3,l4,msign[m1],msign[m2],msign[m3],msign[m4]]];
cf = CFunction[double, fname, {{double, z12}, {double, z34}}, CReturn[CExpression[expr]]];
(*filename = StringJoin["two_e_int/",fname,".c"];*)
If[expr === 0, "", ToCCodeString[cf]]
];


makecode1[args_, expr_] := 
Module[{n12,n34,l1,l2,l3,l4,m1,m2,m3,m4,z12,z34},
{n12,n34,l1,l2,l3,l4,m1,m2,m3,m4,z12,z34} := args;


fname = ToString[StringForm["two_e_int_``_``_``_``_``_``_``_``_``_``",n12,n34,l1,l2,l3,l4,msign[m1],msign[m2],msign[m3],msign[m4]]];
fstring = StringJoin["double ", fname, "(double z12, double z34) {\n    return ", ToString[expr], ";\n}"];

(*cf = CFunction[double, fname, {{double, z12}, {double, z34}}, CReturn[expr]];*)
(*filename = StringJoin["two_e_int/",fname,".c"];*)
If[expr === CForm[0], "", fstring]
];


makenames[args_, expr_] := 
Module[{n12,n34,l1,l2,l3,l4,m1,m2,m3,m4,z12,z34},
{n12,n34,l1,l2,l3,l4,m1,m2,m3,m4,z12,z34} := args;


fname = ToString[StringForm["two_e_int_``_``_``_``_``_``_``_``_``_``",n12,n34,l1,l2,l3,l4,msign[m1],msign[m2],msign[m3],msign[m4]]];
If[expr === CForm[0], "", fname]
];


makecode1[TAB[[1]],smallfnames[[1]]];
smallfnames[[100]]===CForm[0];
Length[TAB];


cfns = MapThread[makecode1,{TAB,smallfnames}];


ParallelNeeds["CCodeGenerator`"]
ctx`tmpdir = ToString[Hold[StringForm["/tmp/k``",$KernelID]]];
DistributeDefinitions[ctx`tmpdir];
ParallelEvaluate[ToString[$TemporaryDirectory = ReleaseHold[tmpdir]]];

cstrs = Parallelize @ ToCCodeString /@ cfns;


cfns=Cases[cfns,Except[""]];
(*Export["file.c", StringRiffle[cfns, "\n"], "Text"]*)


fnames = MapThread[makenames,{TAB,smallfnames}];
fnames = Cases[fnames, Except[""]];


writeout[fname_, str_]:= Export[StringJoin["twoeints/", fname, ".c"], StringJoin["#include <tgmath.h>\n\n",str], "Text"];


MapThread[writeout, {fnames, cfns}];


proto[fname_]:=StringJoin["extern double ", fname, "(double z12, double z34);\n"];
allprotos = StringJoin[proto /@ fnames];
Export["twoeints.h", allprotos, "Text"];


proto /@ fnames


S[n_,\[Zeta]_] := (2 \[Zeta])^(n+1/2)/\[Sqrt]((2n)!);

