#include <tgmath.h>

double two_e_int_6_6_2_1_3_0_1_0_11_0(double z12, double z34) {
  return (-41472 * sqrt(4.285714285714286) *
          (pow(z12, 4) + 11 * pow(z12, 3) * z34 + 55 * pow(z12, 2) * pow(z34, 2) + 11 * z12 * pow(z34, 3) +
           pow(z34, 4))) /
         (pow(z12, 3) * pow(z34, 3) * pow(z12 + z34, 11));
}