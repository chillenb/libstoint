#include <tgmath.h>

double two_e_int_8_8_2_2_3_3_0_0_1_1(double z12, double z34) {
  return (4147200 * (49 * pow(z12, 14) + 735 * pow(z12, 13) * z34 + 5151 * pow(z12, 12) * pow(z34, 2) +
                     22385 * pow(z12, 11) * pow(z34, 3) + 67521 * pow(z12, 10) * pow(z34, 4) +
                     149967 * pow(z12, 9) * pow(z34, 5) + 254065 * pow(z12, 8) * pow(z34, 6) +
                     336063 * pow(z12, 7) * pow(z34, 7) + 254065 * pow(z12, 6) * pow(z34, 8) +
                     149967 * pow(z12, 5) * pow(z34, 9) + 67521 * pow(z12, 4) * pow(z34, 10) +
                     22385 * pow(z12, 3) * pow(z34, 11) + 5151 * pow(z12, 2) * pow(z34, 12) + 735 * z12 * pow(z34, 13) +
                     49 * pow(z34, 14))) /
         (pow(z12, 8) * pow(z34, 8) * pow(z12 + z34, 15));
}