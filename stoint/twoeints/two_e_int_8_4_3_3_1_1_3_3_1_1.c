#include <tgmath.h>

double two_e_int_8_4_3_3_1_1_3_3_1_1(double z12, double z34) {
    return (5760*(42*pow(z12,10) + 462*pow(z12,9)*z34 + 2352*pow(z12,8)*pow(z34,2) + 7392*pow(z12,7)*pow(z34,3) + 10032*pow(z12,6)*pow(z34,4) + 9867*pow(z12,5)*pow(z34,5) + 6985*pow(z12,4)*pow(z34,6) + 3476*pow(z12,3)*pow(z34,7) + 1156*pow(z12,2)*pow(z34,8) + 231*z12*pow(z34,9) + 21*pow(z34,10)))/(pow(z12,8)*pow(z34,4)*pow(z12 + z34,11));
}