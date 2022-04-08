#include <tgmath.h>

double two_e_int_8_8_3_2_3_2_1_1_22_22(double z12, double z34) {
  return (276480 * sqrt(10) *
          (594 * pow(z12, 12) + 8910 * pow(z12, 11) * z34 + 62128 * pow(z12, 10) * pow(z34, 2) +
           266640 * pow(z12, 9) * pow(z34, 3) + 783775 * pow(z12, 8) * pow(z34, 4) +
           1649297 * pow(z12, 7) * pow(z34, 5) + 2472015 * pow(z12, 6) * pow(z34, 6) +
           1649297 * pow(z12, 5) * pow(z34, 7) + 783775 * pow(z12, 4) * pow(z34, 8) +
           266640 * pow(z12, 3) * pow(z34, 9) + 62128 * pow(z12, 2) * pow(z34, 10) + 8910 * z12 * pow(z34, 11) +
           594 * pow(z34, 12))) /
         (11. * pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 15));
}