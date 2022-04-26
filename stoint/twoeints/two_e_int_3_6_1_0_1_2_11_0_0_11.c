#include <tgmath.h>

double two_e_int_3_6_1_0_1_2_11_0_0_11(double z12, double z34) {
    return (48*sqrt(0.6)*(4*pow(z12,5) + 32*pow(z12,4)*z34 + 112*pow(z12,3)*pow(z34,2) + 224*pow(z12,2)*pow(z34,3) + 280*z12*pow(z34,4) + 35*pow(z34,5)))/(pow(z12,2)*pow(z34,5)*pow(z12 + z34,8));
}