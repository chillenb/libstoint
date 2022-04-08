#include <tgmath.h>

double two_e_int_8_8_3_0_1_2_2_0_11_1(double z12, double z34) {
  return (-136857600 * sqrt(0.8571428571428571) *
          (pow(z12, 8) + 15 * pow(z12, 7) * z34 + 105 * pow(z12, 6) * pow(z34, 2) + 455 * pow(z12, 5) * pow(z34, 3) +
           1365 * pow(z12, 4) * pow(z34, 4) + 455 * pow(z12, 3) * pow(z34, 5) + 105 * pow(z12, 2) * pow(z34, 6) +
           15 * z12 * pow(z34, 7) + pow(z34, 8))) /
         (pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 15));
}