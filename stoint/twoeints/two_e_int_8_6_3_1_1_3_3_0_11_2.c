#include <tgmath.h>

double two_e_int_8_6_3_1_1_3_3_0_11_2(double z12, double z34) {
  return (-806400 * sqrt(3) *
          (22 * pow(z12, 4) + 286 * pow(z12, 3) * z34 + 78 * pow(z12, 2) * pow(z34, 2) + 13 * z12 * pow(z34, 3) +
           pow(z34, 4))) /
         (pow(z12, 4) * pow(z34, 2) * pow(z12 + z34, 13));
}