#include <tgmath.h>

double two_e_int_3_6_1_0_2_1_0_0_0_0(double z12, double z34) {
    return (96*(4*pow(z12,5) + 32*pow(z12,4)*z34 + 112*pow(z12,3)*pow(z34,2) + 224*pow(z12,2)*pow(z34,3) + 280*z12*pow(z34,4) + 35*pow(z34,5)))/(sqrt(5)*pow(z12,2)*pow(z34,5)*pow(z12 + z34,8));
}