#include <tgmath.h>

double two_e_int_6_6_3_1_2_2_0_0_1_1(double z12, double z34) {
    return (768*sqrt(0.42857142857142855)*(27*pow(z12,6) + 297*pow(z12,5)*z34 + 1085*pow(z12,4)*pow(z34,2) + 55*pow(z12,3)*pow(z34,3) + 1085*pow(z12,2)*pow(z34,4) + 297*z12*pow(z34,5) + 27*pow(z34,6)))/(pow(z12,4)*pow(z34,4)*pow(z12 + z34,11));
}