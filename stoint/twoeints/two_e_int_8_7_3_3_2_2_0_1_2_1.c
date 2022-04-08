#include <tgmath.h>

double two_e_int_8_7_3_3_2_2_0_1_2_1(double z12, double z34) {
  return (69120 * sqrt(3) *
          (24 * pow(z12, 9) + 336 * pow(z12, 8) * z34 + 2084 * pow(z12, 7) * pow(z34, 2) +
           7336 * pow(z12, 6) * pow(z34, 3) + 14924 * pow(z12, 5) * pow(z34, 4) + 9737 * pow(z12, 4) * pow(z34, 5) +
           4018 * pow(z12, 3) * pow(z34, 6) + 1067 * pow(z12, 2) * pow(z34, 7) + 168 * z12 * pow(z34, 8) +
           12 * pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 14));
}