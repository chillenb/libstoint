#include <tgmath.h>

double two_e_int_5_5_2_1_0_1_0_0_0_0(double z12, double z34) {
    return (576*sqrt(5)*(pow(z12,6) + 9*pow(z12,5)*z34 + 36*pow(z12,4)*pow(z34,2) + 84*pow(z12,3)*pow(z34,3) + 36*pow(z12,2)*pow(z34,4) + 9*z12*pow(z34,5) + pow(z34,6)))/(pow(z12,4)*pow(z34,4)*pow(z12 + z34,9));
}