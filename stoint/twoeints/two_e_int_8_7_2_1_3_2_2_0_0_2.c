#include <tgmath.h>

double two_e_int_8_7_2_1_3_2_2_0_0_2(double z12, double z34) {
  return (-2073600 * sqrt(0.42857142857142855) *
          (11 * pow(z12, 7) + 154 * pow(z12, 6) * z34 + 1001 * pow(z12, 5) * pow(z34, 2) +
           4004 * pow(z12, 4) * pow(z34, 3) + 1456 * pow(z12, 3) * pow(z34, 4) + 364 * pow(z12, 2) * pow(z34, 5) +
           56 * z12 * pow(z34, 6) + 4 * pow(z34, 7))) /
         (pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 14));
}