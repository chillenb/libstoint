#include <tgmath.h>

double two_e_int_3_5_1_0_1_2_0_0_11_11(double z12, double z34) {
    return (48*sqrt(0.6)*(pow(z12,4) + 7*pow(z12,3)*z34 + 21*pow(z12,2)*pow(z34,2) + 35*z12*pow(z34,3) + 5*pow(z34,4)))/(pow(z12,2)*pow(z34,4)*pow(z12 + z34,7));
}