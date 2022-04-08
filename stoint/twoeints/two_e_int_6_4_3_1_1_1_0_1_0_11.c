#include <tgmath.h>

double two_e_int_6_4_3_1_1_1_0_1_0_11(double z12, double z34) {
  return (864 * sqrt(0.42857142857142855) *
          (28 * pow(z12, 4) + 252 * pow(z12, 3) * z34 + 108 * pow(z12, 2) * pow(z34, 2) + 27 * z12 * pow(z34, 3) +
           3 * pow(z34, 4))) /
         (5. * pow(z12, 4) * pow(z34, 2) * pow(z12 + z34, 9));
}