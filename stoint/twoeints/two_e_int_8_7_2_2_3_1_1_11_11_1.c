#include <tgmath.h>

double two_e_int_8_7_2_2_3_1_1_11_11_1(double z12, double z34) {
  return (-138240 * sqrt(0.2857142857142857) *
          (54 * pow(z12, 9) + 756 * pow(z12, 8) * z34 + 3814 * pow(z12, 7) * pow(z34, 2) +
           4256 * pow(z12, 6) * pow(z34, 3) - 46046 * pow(z12, 5) * pow(z34, 4) + 2002 * pow(z12, 4) * pow(z34, 5) +
           5978 * pow(z12, 3) * pow(z34, 6) + 2182 * pow(z12, 2) * pow(z34, 7) + 378 * z12 * pow(z34, 8) +
           27 * pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 14));
}