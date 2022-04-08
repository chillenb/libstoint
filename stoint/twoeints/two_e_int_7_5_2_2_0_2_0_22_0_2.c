#include <tgmath.h>

double two_e_int_7_5_2_2_0_2_0_22_0_2(double z12, double z34) {
  return (-6912 * sqrt(5) *
          (6 * pow(z12, 6) + 66 * pow(z12, 5) * z34 + 330 * pow(z12, 4) * pow(z34, 2) +
           165 * pow(z12, 3) * pow(z34, 3) + 55 * pow(z12, 2) * pow(z34, 4) + 11 * z12 * pow(z34, 5) + pow(z34, 6))) /
         (pow(z12, 5) * pow(z34, 3) * pow(z12 + z34, 11));
}