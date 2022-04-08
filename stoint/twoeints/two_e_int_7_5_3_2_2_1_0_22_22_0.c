#include <tgmath.h>

double two_e_int_7_5_3_2_2_1_0_22_22_0(double z12, double z34) {
  return (-23040 * sqrt(0.42857142857142855) *
          (15 * pow(z12, 4) + 165 * pow(z12, 3) * z34 + 55 * pow(z12, 2) * pow(z34, 2) + 11 * z12 * pow(z34, 3) +
           pow(z34, 4))) /
         (pow(z12, 4) * pow(z34, 2) * pow(z12 + z34, 11));
}