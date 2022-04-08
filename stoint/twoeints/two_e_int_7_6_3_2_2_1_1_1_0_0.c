#include <tgmath.h>

double two_e_int_7_6_3_2_2_1_1_1_0_0(double z12, double z34) {
  return (2304 * sqrt(0.8571428571428571) *
          (112 * pow(z12, 9) + 1344 * pow(z12, 8) * z34 + 7482 * pow(z12, 7) * pow(z34, 2) +
           25720 * pow(z12, 6) * pow(z34, 3) + 61380 * pow(z12, 5) * pow(z34, 4) + 36432 * pow(z12, 4) * pow(z34, 5) +
           15724 * pow(z12, 3) * pow(z34, 6) + 4647 * pow(z12, 2) * pow(z34, 7) + 840 * z12 * pow(z34, 8) +
           70 * pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 12));
}