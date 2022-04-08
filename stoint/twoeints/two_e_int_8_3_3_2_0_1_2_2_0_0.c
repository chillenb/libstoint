#include <tgmath.h>

double two_e_int_8_3_3_2_0_1_2_2_0_0(double z12, double z34) {
    return (5760*sqrt(0.42857142857142855)*(21*pow(z12,7) + 210*pow(z12,6)*z34 + 252*pow(z12,5)*pow(z34,2) + 210*pow(z12,4)*pow(z34,3) + 120*pow(z12,3)*pow(z34,4) + 45*pow(z12,2)*pow(z34,5) + 10*z12*pow(z34,6) + pow(z34,7)))/(pow(z12,7)*pow(z34,2)*pow(z12 + z34,10));
}