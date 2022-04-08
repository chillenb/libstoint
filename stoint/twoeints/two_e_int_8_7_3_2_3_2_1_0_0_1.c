#include <tgmath.h>

double two_e_int_8_7_3_2_3_2_1_0_0_1(double z12, double z34) {
  return (-207360 * sqrt(2) *
          (198 * pow(z12, 11) + 2772 * pow(z12, 10) * z34 + 17897 * pow(z12, 9) * pow(z34, 2) +
           70378 * pow(z12, 8) * pow(z34, 3) + 174187 * pow(z12, 7) * pow(z34, 4) + 170352 * pow(z12, 6) * pow(z34, 5) +
           220248 * pow(z12, 5) * pow(z34, 6) + 126128 * pow(z12, 4) * pow(z34, 7) + 47432 * pow(z12, 3) * pow(z34, 8) +
           11968 * pow(z12, 2) * pow(z34, 9) + 1848 * z12 * pow(z34, 10) + 132 * pow(z34, 11))) /
         (11. * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 14));
}