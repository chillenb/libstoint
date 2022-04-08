#include <tgmath.h>

double two_e_int_8_7_3_2_2_1_0_1_0_11(double z12, double z34) {
  return (-414720 *
          (21 * pow(z12, 11) + 294 * pow(z12, 10) * z34 + 1944 * pow(z12, 9) * pow(z34, 2) +
           8106 * pow(z12, 8) * pow(z34, 3) + 24024 * pow(z12, 7) * pow(z34, 4) + 54054 * pow(z12, 6) * pow(z34, 5) +
           32396 * pow(z12, 5) * pow(z34, 6) + 15106 * pow(z12, 4) * pow(z34, 7) + 5264 * pow(z12, 3) * pow(z34, 8) +
           1286 * pow(z12, 2) * pow(z34, 9) + 196 * z12 * pow(z34, 10) + 14 * pow(z34, 11))) /
         (sqrt(7) * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 14));
}