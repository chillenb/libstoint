#include <tgmath.h>

double two_e_int_7_6_2_2_2_2_2_1_1_2(double z12, double z34) {
    return (11520*(162*pow(z12,7) + 1944*pow(z12,6)*z34 + 10967*pow(z12,5)*pow(z34,2) + 38940*pow(z12,4)*pow(z34,3) + 16440*pow(z12,3)*pow(z34,4) + 4802*pow(z12,2)*pow(z34,5) + 864*z12*pow(z34,6) + 72*pow(z34,7)))/(7.*pow(z12,5)*pow(z34,4)*pow(z12 + z34,12));
}