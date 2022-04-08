#include <tgmath.h>

double two_e_int_8_6_3_2_2_1_2_1_0_1(double z12, double z34) {
  return (-6912 * sqrt(4.285714285714286) *
          (84 * pow(z12, 8) + 924 * pow(z12, 7) * z34 + 4290 * pow(z12, 6) * pow(z34, 2) +
           10230 * pow(z12, 5) * pow(z34, 3) + 9570 * pow(z12, 4) * pow(z34, 4) + 5379 * pow(z12, 3) * pow(z34, 5) +
           1889 * pow(z12, 2) * pow(z34, 6) + 385 * z12 * pow(z34, 7) + 35 * pow(z34, 8))) /
         (pow(z12, 7) * pow(z34, 5) * pow(z12 + z34, 11));
}