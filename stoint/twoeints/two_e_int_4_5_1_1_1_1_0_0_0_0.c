#include <tgmath.h>

double two_e_int_4_5_1_1_1_1_0_0_0_0(double z12, double z34) {
    return (144*(20*pow(z12,7) + 160*pow(z12,6)*z34 + 568*pow(z12,5)*pow(z34,2) + 1184*pow(z12,4)*pow(z34,3) + 1624*pow(z12,3)*pow(z34,4) + 728*pow(z12,2)*pow(z34,5) + 200*z12*pow(z34,6) + 25*pow(z34,7)))/(5.*pow(z12,4)*pow(z34,5)*pow(z12 + z34,8));
}