#!/usr/bin/env python
#
# Author: Qiming Sun <osirpt.sun@gmail.com>
#

import numpy
from pyscf import gto, scf, ao2mo, fci
import pyscf.scf.jk
import stoint
import marshal
import sys
import numpy as np
def eprint(*args, **kwargs):
    print(*args, file=sys.stderr, **kwargs)

'''
Customizing Hamiltonian for SCF module.

Three steps to define Hamiltonian for SCF:
1. Specify the number of electrons. (Note mole object must be "built" before doing this step)
2. Overwrite three attributes of scf object
    .get_hcore
    .get_ovlp
    ._eri
3. Specify initial guess (to overwrite the default atomic density initial guess)

Note you will see warning message on the screen:

        Overwritten attributes  get_ovlp get_hcore  of <class 'pyscf.scf.hf.RHF'>

'''

basfile = 'basis/o.dzn.bin'
Z = 7
spinmul = 1
charge = 0


with open(basfile, 'rb') as f:
    bas = marshal.load(f)
nbf = len(bas)
eprint("STO functions: ", nbf)


S = stoint.ao_overlap(bas)
#print(S)

#print(V)
V = np.asarray(stoint.ao_nuc(bas, Z))
#print(V)

#print(T)
T = -0.5*np.asarray(stoint.ao_laplacian(bas))
print(T)
I = stoint.ao_eri(bas, True)
#print(np.linalg.eigvals(I))
H = T + V


mol = gto.M()
n = nbf
mol.nelectron = Z - charge
mol.spin = spinmul
mol.charge = charge

mf = scf.uhf.UHF(mol)
# h1 = numpy.zeros((n,n))
# for i in range(n-1):
#     h1[i,i+1] = h1[i+1,i] = -1.0
# h1[n-1,0] = h1[0,n-1] = -1.0  # PBC
# eri = numpy.zeros((n,n,n,n))
# for i in range(n):
#     eri[i,i,i,i] = 4.0

mf.get_hcore = lambda *args: H
mf.get_ovlp = lambda *args: S
# ao2mo.restore(8, eri, n) to get 8-fold permutation symmetry of the integrals
# ._eri only supports the two-electron integrals in 4-fold or 8-fold symmetry.
I = np.abs(I)
mf._eri = ao2mo.restore(4, I, n)


mf.kernel()

# If you need to run post-HF calculations based on the customized Hamiltonian,
# setting incore_anyway=True to ensure the customized Hamiltonian (the _eri
# attribute) to be used.  Without this parameter, some post-HF method
# (particularly in the MO integral transformation) may ignore the customized
# Hamiltonian if memory is not enough.
mol.incore_anyway = True

mf.spin_square()

# cisolver = fci.FCI(mf)
# print('E(FCI) = %.12f' % cisolver.kernel()[0])

# dm1 = mf.make_rdm1()
# vj, vk = mf.get_jk()

# vj1 = vk[0,:,:]
# print(np.linalg.norm(vj1-vj1.T))

# print(np.linalg.eigvals(vj[1,:,:]))
# print(np.linalg.eigvals(vk[1,:,:]))
