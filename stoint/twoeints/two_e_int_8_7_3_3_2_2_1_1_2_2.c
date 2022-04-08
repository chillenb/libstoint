#include <tgmath.h>

double two_e_int_8_7_3_3_2_2_1_1_2_2(double z12, double z34) {
    return (34560*(840*pow(z12,13) + 11760*pow(z12,12)*z34 + 76296*pow(z12,11)*pow(z34,2) + 303744*pow(z12,10)*pow(z34,3) + 827776*pow(z12,9)*pow(z34,4) + 1629824*pow(z12,8)*pow(z34,5) + 2382016*pow(z12,7)*pow(z34,6) + 2136043*pow(z12,6)*pow(z34,7) + 1445402*pow(z12,5)*pow(z34,8) + 729193*pow(z12,4)*pow(z34,9) + 266532*pow(z12,3)*pow(z34,10) + 66813*pow(z12,2)*pow(z34,11) + 10290*z12*pow(z34,12) + 735*pow(z34,13)))/(pow(z12,8)*pow(z34,7)*pow(z12 + z34,14));
}