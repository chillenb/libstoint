#include <tgmath.h>

double two_e_int_6_4_3_1_1_1_2_1_0_1(double z12, double z34) {
  return (864 * sqrt(0.05714285714285714) *
          (28 * pow(z12, 4) + 252 * pow(z12, 3) * z34 + 108 * pow(z12, 2) * pow(z34, 2) + 27 * z12 * pow(z34, 3) +
           3 * pow(z34, 4))) /
         (pow(z12, 4) * pow(z34, 2) * pow(z12 + z34, 9));
}