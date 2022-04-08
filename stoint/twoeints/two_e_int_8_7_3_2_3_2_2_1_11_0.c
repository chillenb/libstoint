#include <tgmath.h>

double two_e_int_8_7_3_2_3_2_2_1_11_0(double z12, double z34) {
  return (-207360 * sqrt(15) *
          (132 * pow(z12, 11) + 1848 * pow(z12, 10) * z34 + 12133 * pow(z12, 9) * pow(z34, 2) +
           49742 * pow(z12, 8) * pow(z34, 3) + 140543 * pow(z12, 7) * pow(z34, 4) + 271908 * pow(z12, 6) * pow(z34, 5) +
           186592 * pow(z12, 5) * pow(z34, 6) + 91692 * pow(z12, 4) * pow(z34, 7) + 32648 * pow(z12, 3) * pow(z34, 8) +
           8052 * pow(z12, 2) * pow(z34, 9) + 1232 * z12 * pow(z34, 10) + 88 * pow(z34, 11))) /
         (11. * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 14));
}