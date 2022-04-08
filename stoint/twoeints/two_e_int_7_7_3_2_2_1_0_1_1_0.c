#include <tgmath.h>

double two_e_int_7_7_3_2_2_1_0_1_1_0(double z12, double z34) {
  return (-138240 * sqrt(0.42857142857142855) *
          (7 * pow(z12, 10) + 91 * pow(z12, 9) * z34 + 540 * pow(z12, 8) * pow(z34, 2) +
           1924 * pow(z12, 7) * pow(z34, 3) + 4537 * pow(z12, 6) * pow(z34, 4) + 7293 * pow(z12, 5) * pow(z34, 5) +
           4537 * pow(z12, 4) * pow(z34, 6) + 1924 * pow(z12, 3) * pow(z34, 7) + 540 * pow(z12, 2) * pow(z34, 8) +
           91 * z12 * pow(z34, 9) + 7 * pow(z34, 10))) /
         (pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 13));
}