#include <tgmath.h>

double two_e_int_7_3_3_2_1_0_2_2_0_0(double z12, double z34) {
  return (960 * sqrt(0.42857142857142855) *
          (14 * pow(z12, 6) + 126 * pow(z12, 5) * z34 + 126 * pow(z12, 4) * pow(z34, 2) +
           84 * pow(z12, 3) * pow(z34, 3) + 36 * pow(z12, 2) * pow(z34, 4) + 9 * z12 * pow(z34, 5) + pow(z34, 6))) /
         (pow(z12, 6) * pow(z34, 2) * pow(z12 + z34, 9));
}