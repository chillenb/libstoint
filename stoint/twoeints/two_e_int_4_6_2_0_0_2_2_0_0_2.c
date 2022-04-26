#include <tgmath.h>

double two_e_int_4_6_2_0_0_2_2_0_0_2(double z12, double z34) {
    return (288*(3*pow(z12,4) + 27*pow(z12,3)*z34 + 108*pow(z12,2)*pow(z34,2) + 252*z12*pow(z34,3) + 28*pow(z34,4)))/(pow(z12,2)*pow(z34,4)*pow(z12 + z34,9));
}