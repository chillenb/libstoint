#include <tgmath.h>

double two_e_int_6_6_3_0_1_2_3_0_11_2(double z12, double z34) {
  return (-311040 * (pow(z12, 4) + 11 * pow(z12, 3) * z34 + 55 * pow(z12, 2) * pow(z34, 2) + 11 * z12 * pow(z34, 3) +
                     pow(z34, 4))) /
         (sqrt(7) * pow(z12, 3) * pow(z34, 3) * pow(z12 + z34, 11));
}