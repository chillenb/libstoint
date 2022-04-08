#include <tgmath.h>

double two_e_int_8_8_2_2_3_1_0_1_2_1(double z12, double z34) {
  return (4147200 * sqrt(4.285714285714286) *
          (3 * pow(z12, 8) + 39 * pow(z12, 7) * z34 + 223 * pow(z12, 6) * pow(z34, 2) +
           715 * pow(z12, 5) * pow(z34, 3) + 1287 * pow(z12, 4) * pow(z34, 4) + 715 * pow(z12, 3) * pow(z34, 5) +
           223 * pow(z12, 2) * pow(z34, 6) + 39 * z12 * pow(z34, 7) + 3 * pow(z34, 8))) /
         (pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 13));
}