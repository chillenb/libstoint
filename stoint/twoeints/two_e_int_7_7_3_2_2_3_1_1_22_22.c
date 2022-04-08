#include <tgmath.h>

double two_e_int_7_7_3_2_2_3_1_1_22_22(double z12, double z34) {
  return (138240 * sqrt(10) *
          (22 * pow(z12, 10) + 286 * pow(z12, 9) * z34 + 1705 * pow(z12, 8) * pow(z34, 2) +
           6149 * pow(z12, 7) * pow(z34, 3) + 14747 * pow(z12, 6) * pow(z34, 4) + 23543 * pow(z12, 5) * pow(z34, 5) +
           14747 * pow(z12, 4) * pow(z34, 6) + 6149 * pow(z12, 3) * pow(z34, 7) + 1705 * pow(z12, 2) * pow(z34, 8) +
           286 * z12 * pow(z34, 9) + 22 * pow(z34, 10))) /
         (11. * pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 13));
}