#include <tgmath.h>

double two_e_int_8_5_3_2_2_1_1_0_0_1(double z12, double z34) {
  return (-20736 * sqrt(0.2857142857142857) *
          (21 * pow(z12, 7) + 210 * pow(z12, 6) * z34 + 780 * pow(z12, 5) * pow(z34, 2) +
           870 * pow(z12, 4) * pow(z34, 3) + 560 * pow(z12, 3) * pow(z34, 4) + 221 * pow(z12, 2) * pow(z34, 5) +
           50 * z12 * pow(z34, 6) + 5 * pow(z34, 7))) /
         (pow(z12, 7) * pow(z34, 4) * pow(z12 + z34, 10));
}