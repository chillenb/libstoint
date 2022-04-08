#include <tgmath.h>

double two_e_int_5_4_1_1_1_1_1_1_1_1(double z12, double z34) {
    return (144*(25*pow(z12,7) + 200*pow(z12,6)*z34 + 707*pow(z12,5)*pow(z34,2) + 1456*pow(z12,4)*pow(z34,3) + 1136*pow(z12,3)*pow(z34,4) + 562*pow(z12,2)*pow(z34,5) + 160*z12*pow(z34,6) + 20*pow(z34,7)))/(5.*pow(z12,5)*pow(z34,4)*pow(z12 + z34,8));
}