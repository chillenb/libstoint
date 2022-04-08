#include <tgmath.h>

double two_e_int_8_8_3_3_1_3_1_22_0_3(double z12, double z34) {
  return (9676800 * sqrt(42) *
          (pow(z12, 6) + 15 * pow(z12, 5) * z34 + 105 * pow(z12, 4) * pow(z34, 2) + 455 * pow(z12, 3) * pow(z34, 3) +
           105 * pow(z12, 2) * pow(z34, 4) + 15 * z12 * pow(z34, 5) + pow(z34, 6))) /
         (pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 15));
}