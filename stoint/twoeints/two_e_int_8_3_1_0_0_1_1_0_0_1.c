#include <tgmath.h>

double two_e_int_8_3_1_0_0_1_1_0_0_1(double z12, double z34) {
    return (5760*(21*pow(z12,7) + 210*pow(z12,6)*z34 + 252*pow(z12,5)*pow(z34,2) + 210*pow(z12,4)*pow(z34,3) + 120*pow(z12,3)*pow(z34,4) + 45*pow(z12,2)*pow(z34,5) + 10*z12*pow(z34,6) + pow(z34,7)))/(pow(z12,7)*pow(z34,2)*pow(z12 + z34,10));
}