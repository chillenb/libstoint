#include <tgmath.h>

double two_e_int_8_7_3_3_2_2_2_1_0_1(double z12, double z34) {
  return (138240 * sqrt(15) *
          (6 * pow(z12, 9) + 84 * pow(z12, 8) * z34 + 626 * pow(z12, 7) * pow(z34, 2) +
           3304 * pow(z12, 6) * pow(z34, 3) + 13286 * pow(z12, 5) * pow(z34, 4) + 4823 * pow(z12, 4) * pow(z34, 5) +
           1372 * pow(z12, 3) * pow(z34, 6) + 293 * pow(z12, 2) * pow(z34, 7) + 42 * z12 * pow(z34, 8) +
           3 * pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 14));
}