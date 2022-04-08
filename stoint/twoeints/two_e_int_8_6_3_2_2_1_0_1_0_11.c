#include <tgmath.h>

double two_e_int_8_6_3_2_2_1_0_1_0_11(double z12, double z34) {
  return (-20736 *
          (84 * pow(z12, 10) + 1092 * pow(z12, 9) * z34 + 6772 * pow(z12, 8) * pow(z34, 2) +
           26884 * pow(z12, 7) * pow(z34, 3) + 77220 * pow(z12, 6) * pow(z34, 4) + 51909 * pow(z12, 5) * pow(z34, 5) +
           26897 * pow(z12, 4) * pow(z34, 6) + 10322 * pow(z12, 3) * pow(z34, 7) + 2754 * pow(z12, 2) * pow(z34, 8) +
           455 * z12 * pow(z34, 9) + 35 * pow(z34, 10))) /
         (sqrt(7) * pow(z12, 7) * pow(z34, 5) * pow(z12 + z34, 13));
}