#include <tgmath.h>

double two_e_int_3_4_1_0_1_0_0_0_0_0(double z12, double z34) {
    return (8*(2*pow(z12,3) + 12*pow(z12,2)*z34 + 30*z12*pow(z34,2) + 5*pow(z34,3)))/(pow(z12,2)*pow(z34,3)*pow(z12 + z34,6));
}