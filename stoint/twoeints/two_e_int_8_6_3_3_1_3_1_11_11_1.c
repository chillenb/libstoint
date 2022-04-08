#include <tgmath.h>

double two_e_int_8_6_3_3_1_3_1_11_11_1(double z12, double z34) {
  return (-27648 * sqrt(14) *
          (99 * pow(z12, 8) + 1287 * pow(z12, 7) * z34 + 4972 * pow(z12, 6) * pow(z34, 2) -
           7436 * pow(z12, 5) * pow(z34, 3) + 5980 * pow(z12, 4) * pow(z34, 4) + 4667 * pow(z12, 3) * pow(z34, 5) +
           1591 * pow(z12, 2) * pow(z34, 6) + 286 * z12 * pow(z34, 7) + 22 * pow(z34, 8))) /
         (11. * pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 13));
}