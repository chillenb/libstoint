#include <tgmath.h>

double two_e_int_8_8_3_2_3_2_3_0_11_2(double z12, double z34) {
  return (-1382400 * sqrt(10) *
          (121 * pow(z12, 8) + 1815 * pow(z12, 7) * z34 + 13615 * pow(z12, 6) * pow(z34, 2) +
           68705 * pow(z12, 5) * pow(z34, 3) + 260715 * pow(z12, 4) * pow(z34, 4) + 68705 * pow(z12, 3) * pow(z34, 5) +
           13615 * pow(z12, 2) * pow(z34, 6) + 1815 * z12 * pow(z34, 7) + 121 * pow(z34, 8))) /
         (11. * pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 15));
}