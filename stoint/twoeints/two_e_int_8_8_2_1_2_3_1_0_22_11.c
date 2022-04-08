#include <tgmath.h>

double two_e_int_8_8_2_1_2_3_1_0_22_11(double z12, double z34) {
  return (2488320 *
          (21 * pow(z12, 12) + 315 * pow(z12, 11) * z34 + 2117 * pow(z12, 10) * pow(z34, 2) +
           8235 * pow(z12, 9) * pow(z34, 3) + 19425 * pow(z12, 8) * pow(z34, 4) + 23023 * pow(z12, 7) * pow(z34, 5) -
           15015 * pow(z12, 6) * pow(z34, 6) + 23023 * pow(z12, 5) * pow(z34, 7) + 19425 * pow(z12, 4) * pow(z34, 8) +
           8235 * pow(z12, 3) * pow(z34, 9) + 2117 * pow(z12, 2) * pow(z34, 10) + 315 * z12 * pow(z34, 11) +
           21 * pow(z34, 12))) /
         (sqrt(7) * pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 15));
}