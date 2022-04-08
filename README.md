# libstoint

Computes atomic (one-center) 1- and 2-electron integrals over Slater-type orbitals. The code has just started to work and is very immature.

### Capabilities

Currently, libstoint can calculate all one-center one-electron integrals--overlap, nuclear attraction, and kinetic energy--and all one-center two-electron integrals up to $n=8$ and $l=3$.

### Method

All one-electron integrals are formed as linear combinations of overlap integrals, see [2]. Expressions for the two-electron integrals are calculated in Mathematica using the general formula from [1] (supplementary info) and exported as C functions. Because there is one such expression for each value of $(n_1+n_2, n_3+n_4, l_1, l_2, l_3, l_4, m_1, m_2, m_3, m_4)$, they are accessed via a (n automatically generated) lookup table. Symmetry and selection rules cut the number of functions down, but there are still a lot. The combinatorial explosion means this method is not really appropriate for large $l$.

The inspiration for this approach was [3].

### Building
If you have a modern C/C++ compiler and a *nix operating system you should be able to type `make -j [jobs]; make tests` as long as GoogleTest is installed. Unfortunately this project is not yet big enough to benefit from CMake. If you don't want to install GoogleTest system-wide, you may modify the Makefile to use a local copy, or just not run the tests.

## References
[1] M. Lesiuk and R. Moszynski, Reexamination of the Calculation of Two-Center, Two-Electron Integrals over Slater-Type Orbitals. I. Coulomb and Hybrid Integrals, Phys. Rev. E 90, (2014).

[2] J. Fernández Rico, R. López, and G. Ramírez, Molecular Integrals with Slater Basis. I. General Approach, The Journal of Chemical Physics 91, 4204 (1989).

[3] S. Gümüş and T. Özdoǧan, Symbolic Calculation of Two-Center Overlap Integrals Over Slater-Type Orbitals, Jnl Chinese Chemical Soc 51, 243 (2004).