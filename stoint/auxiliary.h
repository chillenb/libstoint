#ifndef aux_H
#define aux_H

#include <cmath>

#define FACTORIAL(N) tgamma(N+1)
using std::pow;
using std::sqrt;

template<int n>
inline double NormCoef(double zeta) {
    return pow(2*zeta, 0.5*(2*n+1)) / sqrt(FACTORIAL(2*n));
}

template<int n1, int n2, int n3, int n4>
inline double QNormCoef(double zeta1, double zeta2, double zeta3, double zeta4) {
    return NormCoef<n1>(zeta1) * NormCoef<n2>(zeta2) * NormCoef<n3>(zeta3) * NormCoef<n4>(zeta4);
}

template<int n1, int n2>
double OneCenterOverlap(double zeta1, double zeta2) {
    return (pow(2,1 + n1 + n2)*FACTORIAL(n1 + n2))/(sqrt(FACTORIAL(2*n1))*sqrt(FACTORIAL(2*n2))) *
        pow(zeta1,0.5 + n1)*pow(zeta2, 0.5 + n2)*pow(zeta1 + zeta2,-1 - n1 - n2);
}


#endif  // aux_H
