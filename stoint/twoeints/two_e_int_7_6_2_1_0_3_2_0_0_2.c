#include <tgmath.h>

double two_e_int_7_6_2_1_0_3_2_0_0_2(double z12, double z34) {
  return (103680 * sqrt(0.42857142857142855) *
          (10 * pow(z12, 5) + 120 * pow(z12, 4) * z34 + 660 * pow(z12, 3) * pow(z34, 2) +
           198 * pow(z12, 2) * pow(z34, 3) + 36 * z12 * pow(z34, 4) + 3 * pow(z34, 5))) /
         (pow(z12, 4) * pow(z34, 3) * pow(z12 + z34, 12));
}