#include <tgmath.h>

double two_e_int_7_5_3_2_2_1_1_0_22_11(double z12, double z34) {
  return (-6912 * sqrt(0.42857142857142855) *
          (14 * pow(z12, 8) + 154 * pow(z12, 7) * z34 + 755 * pow(z12, 6) * pow(z34, 2) +
           2145 * pow(z12, 5) * pow(z34, 3) + 1595 * pow(z12, 4) * pow(z34, 4) + 814 * pow(z12, 3) * pow(z34, 5) +
           274 * pow(z12, 2) * pow(z34, 6) + 55 * z12 * pow(z34, 7) + 5 * pow(z34, 8))) /
         (pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 11));
}