#include <tgmath.h>

double two_e_int_8_8_3_3_1_1_3_1_11_1(double z12, double z34) {
  return (11612160 * sqrt(15) *
          (pow(z12, 10) + 15 * pow(z12, 9) * z34 + 105 * pow(z12, 8) * pow(z34, 2) + 455 * pow(z12, 7) * pow(z34, 3) +
           1365 * pow(z12, 6) * pow(z34, 4) + 3003 * pow(z12, 5) * pow(z34, 5) + 1365 * pow(z12, 4) * pow(z34, 6) +
           455 * pow(z12, 3) * pow(z34, 7) + 105 * pow(z12, 2) * pow(z34, 8) + 15 * z12 * pow(z34, 9) + pow(z34, 10))) /
         (pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 15));
}