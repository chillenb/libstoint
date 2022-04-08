#include <tgmath.h>

double two_e_int_6_5_1_0_0_1_0_0_0_0(double z12, double z34) {
    return (1440*(7*pow(z12,7) + 70*pow(z12,6)*z34 + 315*pow(z12,5)*pow(z34,2) + 840*pow(z12,4)*pow(z34,3) + 480*pow(z12,3)*pow(z34,4) + 180*pow(z12,2)*pow(z34,5) + 40*z12*pow(z34,6) + 4*pow(z34,7)))/(pow(z12,5)*pow(z34,4)*pow(z12 + z34,10));
}