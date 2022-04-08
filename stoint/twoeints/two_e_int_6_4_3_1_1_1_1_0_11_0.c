#include <tgmath.h>

double two_e_int_6_4_3_1_1_1_1_0_11_0(double z12, double z34) {
  return (-1728 * sqrt(0.2857142857142857) *
          (28 * pow(z12, 4) + 252 * pow(z12, 3) * z34 + 108 * pow(z12, 2) * pow(z34, 2) + 27 * z12 * pow(z34, 3) +
           3 * pow(z34, 4))) /
         (5. * pow(z12, 4) * pow(z34, 2) * pow(z12 + z34, 9));
}