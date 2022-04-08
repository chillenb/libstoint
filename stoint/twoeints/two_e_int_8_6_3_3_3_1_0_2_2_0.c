#include <tgmath.h>

double two_e_int_8_6_3_3_3_1_0_2_2_0(double z12, double z34) {
  return (-46080 * sqrt(21) *
          (99 * pow(z12, 8) + 1287 * pow(z12, 7) * z34 + 8052 * pow(z12, 6) * pow(z34, 2) +
           32604 * pow(z12, 5) * pow(z34, 3) + 16900 * pow(z12, 4) * pow(z34, 4) + 6487 * pow(z12, 3) * pow(z34, 5) +
           1731 * pow(z12, 2) * pow(z34, 6) + 286 * z12 * pow(z34, 7) + 22 * pow(z34, 8))) /
         (11. * pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 13));
}