#include <tgmath.h>

double two_e_int_5_2_1_1_0_0_1_1_0_0(double z12, double z34) {
    return (24*(5*pow(z12,5) + 30*pow(z12,4)*z34 + 40*pow(z12,3)*pow(z34,2) + 30*pow(z12,2)*pow(z34,3) + 12*z12*pow(z34,4) + 2*pow(z34,5)))/(pow(z12,5)*pow(z34,2)*pow(z12 + z34,6));
}