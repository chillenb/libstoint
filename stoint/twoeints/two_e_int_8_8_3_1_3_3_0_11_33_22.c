#include <tgmath.h>

double two_e_int_8_8_3_1_3_3_0_11_33_22(double z12, double z34) {
  return (-4147200 * sqrt(7) *
          (3 * pow(z12, 10) + 45 * pow(z12, 9) * z34 + 325 * pow(z12, 8) * pow(z34, 2) +
           1515 * pow(z12, 7) * pow(z34, 3) + 5145 * pow(z12, 6) * pow(z34, 4) + 13559 * pow(z12, 5) * pow(z34, 5) +
           5145 * pow(z12, 4) * pow(z34, 6) + 1515 * pow(z12, 3) * pow(z34, 7) + 325 * pow(z12, 2) * pow(z34, 8) +
           45 * z12 * pow(z34, 9) + 3 * pow(z34, 10))) /
         (pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 15));
}