#include <tgmath.h>

double two_e_int_4_4_1_1_0_2_1_0_0_1(double z12, double z34) {
    return (144*sqrt(0.6)*(pow(z12,2) + 7*z12*z34 + pow(z34,2)))/(pow(z12,2)*pow(z34,2)*pow(z12 + z34,7));
}