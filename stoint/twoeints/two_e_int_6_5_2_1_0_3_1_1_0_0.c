#include <tgmath.h>

double two_e_int_6_5_2_1_0_3_1_1_0_0(double z12, double z34) {
  return (-3456 * sqrt(0.7142857142857143) *
          (9 * pow(z12, 3) + 90 * pow(z12, 2) * z34 + 20 * z12 * pow(z34, 2) + 2 * pow(z34, 3))) /
         (pow(z12, 3) * pow(z34, 2) * pow(z12 + z34, 10));
}