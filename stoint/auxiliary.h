#ifndef aux_H
#define aux_H

#include "stoint/tables.h"
#include <cmath>

using std::pow;
using std::sqrt;

// Normalization constant for X_nlm(r;zeta) is S(n,zeta)=(2 zeta)^(n+1/2) / sqrt((2n)!)
//
static double NormCoef(int n, double zeta) { return sqrt(2 * zeta) * pow(2 * zeta, n) / sqrtfactorial[2 * n]; }

// Product of four normalization constants; used for 2e-ERI
static double QNormCoef(int n1, int n2, int n3, int n4, double zeta1, double zeta2, double zeta3, double zeta4) {
  return NormCoef(n1, zeta1) * NormCoef(n2, zeta2) * NormCoef(n3, zeta3) * NormCoef(n4, zeta4);
}

// Overlap between X_nlm and X_n'l'm' is zero if l!=l' or m!=m', otherwise: (normalized)
static double OneCenterOverlap(int n1, int n2, double zeta1, double zeta2) {
  return (double(1L << (n1 + n2 + 1)) * factorial[n1 + n2]) * sqrt(zeta1 * zeta2) * pow(zeta1, n1) * pow(zeta2, n2) /
         (pow(zeta1 + zeta2, n1 + n2 + 1) * (sqrtfactorial[2 * n1] * sqrtfactorial[2 * n2]));
}

static double NonNormalizedOneCenterOverlap(int n12, double zeta1, double zeta2) {
  return n12 < -1 ? 0 : factorial[n12] / pow(zeta1 + zeta2, n12 + 1);
}

static double NonNormalizedNuc(int n12, double zeta1, double zeta2, int Z) { // n12 = n1 + n2
  return -Z * NonNormalizedOneCenterOverlap(n12 - 1, zeta1, zeta2);
}

// normalized
static double OneCenterNuclearAttraction(int n1, int n2, double zeta1, double zeta2, int Z) {
  return -Z * OneCenterOverlap(n1, n2, zeta1, zeta2) * (zeta1 + zeta2) / (n1 + n2);
}

static double NonNormalizedOneCenterKE(int n1, int n2, int zeta1, int zeta2, int l) {
  return 0.5 * (l * (l + 1) - n1 * (n1 - 1)) * NonNormalizedOneCenterOverlap(n1 + n2 - 2, zeta1, zeta2) +
         zeta1 * n1 * NonNormalizedOneCenterOverlap(n1 + n2 - 1, zeta1, zeta2) -
         0.5 * zeta1 * zeta1 * NonNormalizedOneCenterOverlap(n1 + n2, zeta1, zeta2);
}

static double OneCenterKineticEnergy(int n1, int n2, int zeta1, int zeta2, int l) {
  const double normalization = NormCoef(n1, zeta1) * NormCoef(n2, zeta2);
  return normalization * NonNormalizedOneCenterKE(n1, n2, zeta1, zeta1, l);
}

#endif // aux_H
