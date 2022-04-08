#include <tgmath.h>

double two_e_int_8_8_3_3_3_1_1_1_0_0(double z12, double z34) {
  return (276480 * sqrt(21) *
          (27 * pow(z12, 10) + 405 * pow(z12, 9) * z34 + 2855 * pow(z12, 8) * pow(z34, 2) +
           12585 * pow(z12, 7) * pow(z34, 3) + 38955 * pow(z12, 6) * pow(z34, 4) + 90181 * pow(z12, 5) * pow(z34, 5) +
           38955 * pow(z12, 4) * pow(z34, 6) + 12585 * pow(z12, 3) * pow(z34, 7) + 2855 * pow(z12, 2) * pow(z34, 8) +
           405 * z12 * pow(z34, 9) + 27 * pow(z34, 10))) /
         (pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 15));
}