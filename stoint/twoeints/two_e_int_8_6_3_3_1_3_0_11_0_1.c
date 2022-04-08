#include <tgmath.h>

double two_e_int_8_6_3_3_1_3_0_11_0_1(double z12, double z34) {
  return (-4608 * sqrt(21) *
          (396 * pow(z12, 8) + 5148 * pow(z12, 7) * z34 + 39138 * pow(z12, 6) * pow(z34, 2) +
           220506 * pow(z12, 5) * pow(z34, 3) + 92170 * pow(z12, 4) * pow(z34, 4) + 30043 * pow(z12, 3) * pow(z34, 5) +
           7239 * pow(z12, 2) * pow(z34, 6) + 1144 * z12 * pow(z34, 7) + 88 * pow(z34, 8))) /
         (11. * pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 13));
}