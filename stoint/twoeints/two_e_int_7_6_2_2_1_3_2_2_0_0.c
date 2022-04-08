#include <tgmath.h>

double two_e_int_7_6_2_2_1_3_2_2_0_0(double z12, double z34) {
  return (-1536 * sqrt(0.42857142857142855) *
          (243 * pow(z12, 7) + 2916 * pow(z12, 6) * z34 + 15488 * pow(z12, 5) * pow(z34, 2) +
           46860 * pow(z12, 4) * pow(z34, 3) + 22560 * pow(z12, 3) * pow(z34, 4) + 7028 * pow(z12, 2) * pow(z34, 5) +
           1296 * z12 * pow(z34, 6) + 108 * pow(z34, 7))) /
         (pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 12));
}