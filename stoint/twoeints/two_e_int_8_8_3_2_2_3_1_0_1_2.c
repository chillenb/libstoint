#include <tgmath.h>

double two_e_int_8_8_3_2_2_3_1_0_1_2(double z12, double z34) {
    return (829440*sqrt(15)*(198*pow(z12,12) + 2970*pow(z12,11)*z34 + 20911*pow(z12,10)*pow(z34,2) + 91905*pow(z12,9)*pow(z34,3) + 281675*pow(z12,8)*pow(z34,4) + 630149*pow(z12,7)*pow(z34,5) + 1019655*pow(z12,6)*pow(z34,6) + 630149*pow(z12,5)*pow(z34,7) + 281675*pow(z12,4)*pow(z34,8) + 91905*pow(z12,3)*pow(z34,9) + 20911*pow(z12,2)*pow(z34,10) + 2970*z12*pow(z34,11) + 198*pow(z34,12)))/(11.*pow(z12,7)*pow(z34,7)*pow(z12 + z34,15));
}