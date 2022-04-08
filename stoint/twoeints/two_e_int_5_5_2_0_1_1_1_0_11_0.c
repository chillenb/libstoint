#include <tgmath.h>

double two_e_int_5_5_2_0_1_1_1_0_11_0(double z12, double z34) {
  return (-2016 * sqrt(0.6) *
          (pow(z12, 4) + 9 * pow(z12, 3) * z34 + 36 * pow(z12, 2) * pow(z34, 2) + 9 * z12 * pow(z34, 3) +
           pow(z34, 4))) /
         (pow(z12, 3) * pow(z34, 3) * pow(z12 + z34, 9));
}