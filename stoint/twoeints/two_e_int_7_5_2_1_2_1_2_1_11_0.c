#include <tgmath.h>

double two_e_int_7_5_2_1_2_1_2_1_11_0(double z12, double z34) {
  return (-3456 * sqrt(2) *
          (98 * pow(z12, 8) + 1078 * pow(z12, 7) * z34 + 5210 * pow(z12, 6) * pow(z34, 2) +
           14190 * pow(z12, 5) * pow(z34, 3) + 10890 * pow(z12, 4) * pow(z34, 4) + 5643 * pow(z12, 3) * pow(z34, 5) +
           1913 * pow(z12, 2) * pow(z34, 6) + 385 * z12 * pow(z34, 7) + 35 * pow(z34, 8))) /
         (7. * pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 11));
}