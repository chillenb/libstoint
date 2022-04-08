#include <tgmath.h>

double two_e_int_8_4_2_2_1_1_2_2_0_0(double z12, double z34) {
  return (17280 *
          (98 * pow(z12, 10) + 1078 * pow(z12, 9) * z34 + 5222 * pow(z12, 8) * pow(z34, 2) +
           14322 * pow(z12, 7) * pow(z34, 3) + 21318 * pow(z12, 6) * pow(z34, 4) + 21978 * pow(z12, 5) * pow(z34, 5) +
           15950 * pow(z12, 4) * pow(z34, 6) + 8041 * pow(z12, 3) * pow(z34, 7) + 2691 * pow(z12, 2) * pow(z34, 8) +
           539 * z12 * pow(z34, 9) + 49 * pow(z34, 10))) /
         (7. * pow(z12, 8) * pow(z34, 4) * pow(z12 + z34, 11));
}