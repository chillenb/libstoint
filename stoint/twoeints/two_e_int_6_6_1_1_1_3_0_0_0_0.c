#include <tgmath.h>

double two_e_int_6_6_1_1_1_3_0_0_0_0(double z12, double z34) {
  return (41472 * sqrt(21) *
          (pow(z12, 6) + 11 * pow(z12, 5) * z34 + 55 * pow(z12, 4) * pow(z34, 2) + 165 * pow(z12, 3) * pow(z34, 3) +
           55 * pow(z12, 2) * pow(z34, 4) + 11 * z12 * pow(z34, 5) + pow(z34, 6))) /
         (5. * pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 11));
}