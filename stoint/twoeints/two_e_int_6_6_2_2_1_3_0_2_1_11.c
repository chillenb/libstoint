#include <tgmath.h>

double two_e_int_6_6_2_2_1_3_0_2_1_11(double z12, double z34) {
  return (-2304 * sqrt(0.42857142857142855) *
          (6 * pow(z12, 6) + 66 * pow(z12, 5) * z34 + 455 * pow(z12, 4) * pow(z34, 2) +
           2365 * pow(z12, 3) * pow(z34, 3) + 455 * pow(z12, 2) * pow(z34, 4) + 66 * z12 * pow(z34, 5) +
           6 * pow(z34, 6))) /
         (pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 11));
}