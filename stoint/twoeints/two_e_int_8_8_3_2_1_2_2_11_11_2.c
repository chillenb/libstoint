#include <tgmath.h>

double two_e_int_8_8_3_2_1_2_2_11_11_2(double z12, double z34) {
    return (136857600*sqrt(0.7142857142857143)*(pow(z12,8) + 15*pow(z12,7)*z34 + 105*pow(z12,6)*pow(z34,2) + 455*pow(z12,5)*pow(z34,3) + 1365*pow(z12,4)*pow(z34,4) + 455*pow(z12,3)*pow(z34,5) + 105*pow(z12,2)*pow(z34,6) + 15*z12*pow(z34,7) + pow(z34,8)))/(pow(z12,5)*pow(z34,5)*pow(z12 + z34,15));
}