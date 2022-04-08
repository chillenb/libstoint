#include <tgmath.h>

double two_e_int_8_5_3_2_2_1_1_2_0_11(double z12, double z34) {
  return (-6912 * sqrt(0.42857142857142855) *
          (21 * pow(z12, 9) + 252 * pow(z12, 8) * z34 + 2046 * pow(z12, 7) * pow(z34, 2) +
           12540 * pow(z12, 6) * pow(z34, 3) + 7480 * pow(z12, 5) * pow(z34, 4) + 3531 * pow(z12, 4) * pow(z34, 5) +
           1292 * pow(z12, 3) * pow(z34, 6) + 346 * pow(z12, 2) * pow(z34, 7) + 60 * z12 * pow(z34, 8) +
           5 * pow(z34, 9))) /
         (pow(z12, 7) * pow(z34, 4) * pow(z12 + z34, 12));
}