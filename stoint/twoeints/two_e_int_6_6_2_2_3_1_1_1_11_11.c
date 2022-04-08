#include <tgmath.h>

double two_e_int_6_6_2_2_3_1_1_1_11_11(double z12, double z34) {
  return (2304 * sqrt(0.2857142857142857) *
          (9 * pow(z12, 6) + 99 * pow(z12, 5) * z34 + 595 * pow(z12, 4) * pow(z34, 2) +
           2585 * pow(z12, 3) * pow(z34, 3) + 595 * pow(z12, 2) * pow(z34, 4) + 99 * z12 * pow(z34, 5) +
           9 * pow(z34, 6))) /
         (pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 11));
}