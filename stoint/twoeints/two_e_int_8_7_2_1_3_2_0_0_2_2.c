#include <tgmath.h>

double two_e_int_8_7_2_1_3_2_0_0_2_2(double z12, double z34) {
  return (138240 * sqrt(2.142857142857143) *
          (42 * pow(z12, 9) + 504 * pow(z12, 8) * z34 + 2673 * pow(z12, 7) * pow(z34, 2) +
           8052 * pow(z12, 6) * pow(z34, 3) + 14256 * pow(z12, 5) * pow(z34, 4) + 11484 * pow(z12, 4) * pow(z34, 5) +
           5728 * pow(z12, 3) * pow(z34, 6) + 1812 * pow(z12, 2) * pow(z34, 7) + 336 * z12 * pow(z34, 8) +
           28 * pow(z34, 9))) /
         (pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 12));
}