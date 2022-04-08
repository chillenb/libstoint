#include <tgmath.h>

double two_e_int_7_7_2_2_1_3_1_1_0_0(double z12, double z34) {
  return (3072 * sqrt(0.42857142857142855) *
          (243 * pow(z12, 8) + 3159 * pow(z12, 7) * z34 + 16754 * pow(z12, 6) * pow(z34, 2) +
           40898 * pow(z12, 5) * pow(z34, 3) + 2145 * pow(z12, 4) * pow(z34, 4) + 40898 * pow(z12, 3) * pow(z34, 5) +
           16754 * pow(z12, 2) * pow(z34, 6) + 3159 * z12 * pow(z34, 7) + 243 * pow(z34, 8))) /
         (pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 13));
}