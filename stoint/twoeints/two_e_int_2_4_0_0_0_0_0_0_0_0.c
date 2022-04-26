#include <tgmath.h>

double two_e_int_2_4_0_0_0_0_0_0_0_0(double z12, double z34) {
    return (12*(pow(z12,4) + 5*pow(z12,3)*z34 + 10*pow(z12,2)*pow(z34,2) + 10*z12*pow(z34,3) + 2*pow(z34,4)))/(pow(z12,2)*pow(z34,4)*pow(z12 + z34,5));
}