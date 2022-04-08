#include <tgmath.h>

double two_e_int_7_5_3_2_2_1_3_2_0_1(double z12, double z34) {
  return (-3456 * sqrt(0.7142857142857143) *
          (14 * pow(z12, 8) + 154 * pow(z12, 7) * z34 + 830 * pow(z12, 6) * pow(z34, 2) +
           2970 * pow(z12, 5) * pow(z34, 3) + 1870 * pow(z12, 4) * pow(z34, 4) + 869 * pow(z12, 3) * pow(z34, 5) +
           279 * pow(z12, 2) * pow(z34, 6) + 55 * z12 * pow(z34, 7) + 5 * pow(z34, 8))) /
         (pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 11));
}