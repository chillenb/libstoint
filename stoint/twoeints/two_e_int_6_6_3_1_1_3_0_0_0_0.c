#include <tgmath.h>

double two_e_int_6_6_3_1_1_3_0_0_0_0(double z12, double z34) {
  return (768 * (243 * pow(z12, 6) + 2673 * pow(z12, 5) * z34 + 15365 * pow(z12, 4) * pow(z34, 2) +
                 62095 * pow(z12, 3) * pow(z34, 3) + 15365 * pow(z12, 2) * pow(z34, 4) + 2673 * z12 * pow(z34, 5) +
                 243 * pow(z34, 6))) /
         (5. * pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 11));
}