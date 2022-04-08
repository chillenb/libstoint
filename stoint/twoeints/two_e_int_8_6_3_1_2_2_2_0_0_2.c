#include <tgmath.h>

double two_e_int_8_6_3_1_2_2_2_0_0_2(double z12, double z34) {
  return (-138240 * sqrt(2.142857142857143) *
          (9 * pow(z12, 6) + 99 * pow(z12, 5) * z34 + 385 * pow(z12, 4) * pow(z34, 2) +
           275 * pow(z12, 3) * pow(z34, 3) + 105 * pow(z12, 2) * pow(z34, 4) + 22 * z12 * pow(z34, 5) +
           2 * pow(z34, 6))) /
         (pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 11));
}