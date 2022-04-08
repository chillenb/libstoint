#include <tgmath.h>

double two_e_int_6_6_3_1_1_3_0_11_1_2(double z12, double z34) {
    return (768*sqrt(1.2)*(27*pow(z12,6) + 297*pow(z12,5)*z34 + 1610*pow(z12,4)*pow(z34,2) + 5830*pow(z12,3)*pow(z34,3) + 1610*pow(z12,2)*pow(z34,4) + 297*z12*pow(z34,5) + 27*pow(z34,6)))/(pow(z12,4)*pow(z34,4)*pow(z12 + z34,11));
}