#include <tgmath.h>

double two_e_int_8_4_3_1_0_2_2_1_0_1(double z12, double z34) {
  return (17280 * sqrt(0.8571428571428571) *
          (42 * pow(z12, 6) + 462 * pow(z12, 5) * z34 + 330 * pow(z12, 4) * pow(z34, 2) +
           165 * pow(z12, 3) * pow(z34, 3) + 55 * pow(z12, 2) * pow(z34, 4) + 11 * z12 * pow(z34, 5) + pow(z34, 6))) /
         (pow(z12, 6) * pow(z34, 2) * pow(z12 + z34, 11));
}