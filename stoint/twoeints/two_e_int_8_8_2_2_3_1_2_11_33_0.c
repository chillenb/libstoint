#include <tgmath.h>

double two_e_int_8_8_2_2_3_1_2_11_33_0(double z12, double z34) {
  return (15206400 * sqrt(105) *
          (pow(z12, 6) + 15 * pow(z12, 5) * z34 + 105 * pow(z12, 4) * pow(z34, 2) + 455 * pow(z12, 3) * pow(z34, 3) +
           105 * pow(z12, 2) * pow(z34, 4) + 15 * z12 * pow(z34, 5) + pow(z34, 6))) /
         (pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 15));
}