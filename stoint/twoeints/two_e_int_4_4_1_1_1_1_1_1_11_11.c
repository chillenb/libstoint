#include <tgmath.h>

double two_e_int_4_4_1_1_1_1_1_1_11_11(double z12, double z34) {
    return (144*(5*pow(z12,6) + 35*pow(z12,5)*z34 + 106*pow(z12,4)*pow(z34,2) + 182*pow(z12,3)*pow(z34,3) + 106*pow(z12,2)*pow(z34,4) + 35*z12*pow(z34,5) + 5*pow(z34,6)))/(5.*pow(z12,4)*pow(z34,4)*pow(z12 + z34,7));
}