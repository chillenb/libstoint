#include <tgmath.h>

double two_e_int_8_8_3_2_2_3_1_2_2_1(double z12, double z34) {
    return (829440*(99*pow(z12,12) + 1485*pow(z12,11)*z34 + 11363*pow(z12,10)*pow(z34,2) + 59565*pow(z12,9)*pow(z34,3) + 238400*pow(z12,8)*pow(z34,4) + 762112*pow(z12,7)*pow(z34,5) + 1987440*pow(z12,6)*pow(z34,6) + 762112*pow(z12,5)*pow(z34,7) + 238400*pow(z12,4)*pow(z34,8) + 59565*pow(z12,3)*pow(z34,9) + 11363*pow(z12,2)*pow(z34,10) + 1485*z12*pow(z34,11) + 99*pow(z34,12)))/(11.*pow(z12,7)*pow(z34,7)*pow(z12 + z34,15));
}