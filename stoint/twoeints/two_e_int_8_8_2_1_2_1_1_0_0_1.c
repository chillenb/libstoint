#include <tgmath.h>

double two_e_int_8_8_2_1_2_1_1_0_0_1(double z12, double z34) {
  return (-2488320 * sqrt(3) *
          (49 * pow(z12, 12) + 735 * pow(z12, 11) * z34 + 5013 * pow(z12, 10) * pow(z34, 2) +
           20315 * pow(z12, 9) * pow(z34, 3) + 53025 * pow(z12, 8) * pow(z34, 4) + 87087 * pow(z12, 7) * pow(z34, 5) +
           65065 * pow(z12, 6) * pow(z34, 6) + 87087 * pow(z12, 5) * pow(z34, 7) + 53025 * pow(z12, 4) * pow(z34, 8) +
           20315 * pow(z12, 3) * pow(z34, 9) + 5013 * pow(z12, 2) * pow(z34, 10) + 735 * z12 * pow(z34, 11) +
           49 * pow(z34, 12))) /
         (7. * pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 15));
}