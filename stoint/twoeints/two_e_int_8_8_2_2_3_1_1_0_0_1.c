#include <tgmath.h>

double two_e_int_8_8_2_2_3_1_1_0_0_1(double z12, double z34) {
  return (-4147200 *
          (9 * pow(z12, 10) + 135 * pow(z12, 9) * z34 + 835 * pow(z12, 8) * pow(z34, 2) +
           2445 * pow(z12, 7) * pow(z34, 3) + 735 * pow(z12, 6) * pow(z34, 4) - 23023 * pow(z12, 5) * pow(z34, 5) +
           735 * pow(z12, 4) * pow(z34, 6) + 2445 * pow(z12, 3) * pow(z34, 7) + 835 * pow(z12, 2) * pow(z34, 8) +
           135 * z12 * pow(z34, 9) + 9 * pow(z34, 10))) /
         (sqrt(7) * pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 15));
}