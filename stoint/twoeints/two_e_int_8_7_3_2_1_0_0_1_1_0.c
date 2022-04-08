#include <tgmath.h>

double two_e_int_8_7_3_2_1_0_0_1_1_0(double z12, double z34) {
  return (-414720 * sqrt(35) *
          (3 * pow(z12, 11) + 42 * pow(z12, 10) * z34 + 273 * pow(z12, 9) * pow(z34, 2) +
           1092 * pow(z12, 8) * pow(z34, 3) + 3003 * pow(z12, 7) * pow(z34, 4) + 6006 * pow(z12, 6) * pow(z34, 5) +
           4004 * pow(z12, 5) * pow(z34, 6) + 2002 * pow(z12, 4) * pow(z34, 7) + 728 * pow(z12, 3) * pow(z34, 8) +
           182 * pow(z12, 2) * pow(z34, 9) + 28 * z12 * pow(z34, 10) + 2 * pow(z34, 11))) /
         (pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 14));
}