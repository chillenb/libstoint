#include <tgmath.h>

double two_e_int_5_5_3_0_2_1_2_0_22_0(double z12, double z34) {
  return (5760 * sqrt(0.42857142857142855) * (pow(z12, 2) + 9 * z12 * z34 + pow(z34, 2))) /
         (pow(z12, 2) * pow(z34, 2) * pow(z12 + z34, 9));
}