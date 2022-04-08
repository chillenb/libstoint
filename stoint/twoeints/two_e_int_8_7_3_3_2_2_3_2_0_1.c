#include <tgmath.h>

double two_e_int_8_7_3_3_2_2_3_2_0_1(double z12, double z34) {
  return (2073600 *
          (2 * pow(z12, 9) + 28 * pow(z12, 8) * z34 + 162 * pow(z12, 7) * pow(z34, 2) +
           448 * pow(z12, 6) * pow(z34, 3) + 182 * pow(z12, 5) * pow(z34, 4) + 546 * pow(z12, 4) * pow(z34, 5) +
           294 * pow(z12, 3) * pow(z34, 6) + 86 * pow(z12, 2) * pow(z34, 7) + 14 * z12 * pow(z34, 8) + pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 14));
}