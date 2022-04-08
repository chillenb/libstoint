#include <tgmath.h>

double two_e_int_8_8_3_2_2_3_2_11_0_3(double z12, double z34) {
    return (6912000*(121*pow(z12,8) + 1815*pow(z12,7)*z34 + 11977*pow(z12,6)*pow(z34,2) + 44135*pow(z12,5)*pow(z34,3) + 88725*pow(z12,4)*pow(z34,4) + 44135*pow(z12,3)*pow(z34,5) + 11977*pow(z12,2)*pow(z34,6) + 1815*z12*pow(z34,7) + 121*pow(z34,8)))/(11.*pow(z12,5)*pow(z34,5)*pow(z12 + z34,15));
}