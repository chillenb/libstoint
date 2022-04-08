#include <tgmath.h>

double two_e_int_6_6_2_2_3_1_2_0_22_0(double z12, double z34) {
  return (-4608 * sqrt(2.142857142857143) *
          (3 * pow(z12, 4) + 27 * pow(z12, 3) * z34 + 83 * pow(z12, 2) * pow(z34, 2) + 27 * z12 * pow(z34, 3) +
           3 * pow(z34, 4))) /
         (pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 9));
}