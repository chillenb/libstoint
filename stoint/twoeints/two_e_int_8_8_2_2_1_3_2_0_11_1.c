#include <tgmath.h>

double two_e_int_8_8_2_2_1_3_2_0_11_1(double z12, double z34) {
  return (-4147200 * sqrt(0.42857142857142855) *
          (6 * pow(z12, 10) + 90 * pow(z12, 9) * z34 + 685 * pow(z12, 8) * pow(z34, 2) +
           3555 * pow(z12, 7) * pow(z34, 3) + 13965 * pow(z12, 6) * pow(z34, 4) + 43043 * pow(z12, 5) * pow(z34, 5) +
           13965 * pow(z12, 4) * pow(z34, 6) + 3555 * pow(z12, 3) * pow(z34, 7) + 685 * pow(z12, 2) * pow(z34, 8) +
           90 * z12 * pow(z34, 9) + 6 * pow(z34, 10))) /
         (pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 15));
}