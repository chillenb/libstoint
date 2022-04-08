#include <tgmath.h>

double two_e_int_6_6_3_1_1_3_1_0_11_0(double z12, double z34) {
    return (768*sqrt(6)*(54*pow(z12,6) + 594*pow(z12,5)*z34 + 2345*pow(z12,4)*pow(z34,2) + 2035*pow(z12,3)*pow(z34,3) + 2345*pow(z12,2)*pow(z34,4) + 594*z12*pow(z34,5) + 54*pow(z34,6)))/(5.*pow(z12,4)*pow(z34,4)*pow(z12 + z34,11));
}