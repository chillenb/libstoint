#include <tgmath.h>

double two_e_int_6_6_2_2_0_0_22_22_0_0(double z12, double z34) {
    return (86400*(pow(z12,10) + 11*pow(z12,9)*z34 + 55*pow(z12,8)*pow(z34,2) + 165*pow(z12,7)*pow(z34,3) + 330*pow(z12,6)*pow(z34,4) + 462*pow(z12,5)*pow(z34,5) + 330*pow(z12,4)*pow(z34,6) + 165*pow(z12,3)*pow(z34,7) + 55*pow(z12,2)*pow(z34,8) + 11*z12*pow(z34,9) + pow(z34,10)))/(pow(z12,6)*pow(z34,6)*pow(z12 + z34,11));
}