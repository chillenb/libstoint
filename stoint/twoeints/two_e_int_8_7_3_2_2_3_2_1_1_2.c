#include <tgmath.h>

double two_e_int_8_7_3_2_2_3_2_1_1_2(double z12, double z34) {
  return (1036800 *
          (132 * pow(z12, 11) + 1848 * pow(z12, 10) * z34 + 12133 * pow(z12, 9) * pow(z34, 2) +
           49742 * pow(z12, 8) * pow(z34, 3) + 144183 * pow(z12, 7) * pow(z34, 4) + 322868 * pow(z12, 6) * pow(z34, 5) +
           194432 * pow(z12, 5) * pow(z34, 6) + 92252 * pow(z12, 4) * pow(z34, 7) + 32648 * pow(z12, 3) * pow(z34, 8) +
           8052 * pow(z12, 2) * pow(z34, 9) + 1232 * z12 * pow(z34, 10) + 88 * pow(z34, 11))) /
         (11. * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 14));
}