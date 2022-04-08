#include <tgmath.h>

double two_e_int_8_6_3_2_0_3_1_11_0_2(double z12, double z34) {
  return (-69120 * sqrt(3) *
          (55 * pow(z12, 6) + 715 * pow(z12, 5) * z34 + 4290 * pow(z12, 4) * pow(z34, 2) +
           1716 * pow(z12, 3) * pow(z34, 3) + 468 * pow(z12, 2) * pow(z34, 4) + 78 * z12 * pow(z34, 5) +
           6 * pow(z34, 6))) /
         (pow(z12, 5) * pow(z34, 3) * pow(z12 + z34, 13));
}