#include <tgmath.h>

double two_e_int_8_8_3_1_1_3_1_1_0_0(double z12, double z34) {
  return (276480 * sqrt(6) *
          (81 * pow(z12, 10) + 1215 * pow(z12, 9) * z34 + 8285 * pow(z12, 8) * pow(z34, 2) +
           33555 * pow(z12, 7) * pow(z34, 3) + 87465 * pow(z12, 6) * pow(z34, 4) + 143143 * pow(z12, 5) * pow(z34, 5) +
           87465 * pow(z12, 4) * pow(z34, 6) + 33555 * pow(z12, 3) * pow(z34, 7) + 8285 * pow(z12, 2) * pow(z34, 8) +
           1215 * z12 * pow(z34, 9) + 81 * pow(z34, 10))) /
         (pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 15));
}