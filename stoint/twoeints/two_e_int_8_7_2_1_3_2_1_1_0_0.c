#include <tgmath.h>

double two_e_int_8_7_2_1_3_2_1_1_0_0(double z12, double z34) {
  return (1244160 *
          (21 * pow(z12, 11) + 294 * pow(z12, 10) * z34 + 1889 * pow(z12, 9) * pow(z34, 2) +
           7336 * pow(z12, 8) * pow(z34, 3) + 19019 * pow(z12, 7) * pow(z34, 4) + 34034 * pow(z12, 6) * pow(z34, 5) +
           25116 * pow(z12, 5) * pow(z34, 6) + 13286 * pow(z12, 4) * pow(z34, 7) + 4984 * pow(z12, 3) * pow(z34, 8) +
           1266 * pow(z12, 2) * pow(z34, 9) + 196 * z12 * pow(z34, 10) + 14 * pow(z34, 11))) /
         (sqrt(7) * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 14));
}