#include <tgmath.h>

double two_e_int_4_4_1_1_0_0_0_0_0_0(double z12, double z34) {
    return (144*(pow(z12,6) + 7*pow(z12,5)*z34 + 21*pow(z12,4)*pow(z34,2) + 35*pow(z12,3)*pow(z34,3) + 21*pow(z12,2)*pow(z34,4) + 7*z12*pow(z34,5) + pow(z34,6)))/(pow(z12,4)*pow(z34,4)*pow(z12 + z34,7));
}