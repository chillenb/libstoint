#include <tgmath.h>

double two_e_int_5_6_2_1_0_3_2_0_0_2(double z12, double z34) {
    return (5760*sqrt(0.42857142857142855)*(2*pow(z12,3) + 20*pow(z12,2)*z34 + 90*z12*pow(z34,2) + 9*pow(z34,3)))/(pow(z12,2)*pow(z34,3)*pow(z12 + z34,10));
}