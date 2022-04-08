#include <tgmath.h>

double two_e_int_6_6_2_1_1_2_0_0_0_0(double z12, double z34) {
  return (2304 *
          (98 * pow(z12, 8) + 1078 * pow(z12, 7) * z34 + 5633 * pow(z12, 6) * pow(z34, 2) +
           18843 * pow(z12, 5) * pow(z34, 3) + 45705 * pow(z12, 4) * pow(z34, 4) + 18843 * pow(z12, 3) * pow(z34, 5) +
           5633 * pow(z12, 2) * pow(z34, 6) + 1078 * z12 * pow(z34, 7) + 98 * pow(z34, 8))) /
         (7. * pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 11));
}