#include <tgmath.h>

double two_e_int_8_7_3_3_3_1_2_2_0_0(double z12, double z34) {
  return (-3225600 * sqrt(21) *
          (4 * pow(z12, 5) + 56 * pow(z12, 4) * z34 + 364 * pow(z12, 3) * pow(z34, 2) + 91 * pow(z12, 2) * pow(z34, 3) +
           14 * z12 * pow(z34, 4) + pow(z34, 5))) /
         (pow(z12, 4) * pow(z34, 3) * pow(z12 + z34, 14));
}