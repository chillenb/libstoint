#include <tgmath.h>

double two_e_int_4_6_1_0_0_1_1_0_0_1(double z12, double z34) {
    return (480*(2*pow(z12,6) + 18*pow(z12,5)*z34 + 72*pow(z12,4)*pow(z34,2) + 168*pow(z12,3)*pow(z34,3) + 252*pow(z12,2)*pow(z34,4) + 63*z12*pow(z34,5) + 7*pow(z34,6)))/(pow(z12,3)*pow(z34,5)*pow(z12 + z34,9));
}