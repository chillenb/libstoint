#include <tgmath.h>

double two_e_int_7_7_3_2_1_2_1_0_11_0(double z12, double z34) {
  return (69120 * sqrt(0.2857142857142857) *
          (14 * pow(z12, 8) + 154 * pow(z12, 7) * z34 + 743 * pow(z12, 6) * pow(z34, 2) +
           2013 * pow(z12, 5) * pow(z34, 3) + 3135 * pow(z12, 4) * pow(z34, 4) + 2013 * pow(z12, 3) * pow(z34, 5) +
           743 * pow(z12, 2) * pow(z34, 6) + 154 * z12 * pow(z34, 7) + 14 * pow(z34, 8))) /
         (pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 11));
}