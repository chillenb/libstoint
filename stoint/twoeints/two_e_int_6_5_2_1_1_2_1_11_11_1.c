#include <tgmath.h>

double two_e_int_6_5_2_1_1_2_1_11_11_1(double z12, double z34) {
    return (34560*(9*pow(z12,3) + 90*pow(z12,2)*z34 + 20*z12*pow(z34,2) + 2*pow(z34,3)))/(7.*pow(z12,3)*pow(z34,2)*pow(z12 + z34,10));
}