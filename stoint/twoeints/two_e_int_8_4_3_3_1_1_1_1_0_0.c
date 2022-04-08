#include <tgmath.h>

double two_e_int_8_4_3_3_1_1_1_1_0_0(double z12, double z34) {
  return (3456 *
          (70 * pow(z12, 10) + 770 * pow(z12, 9) * z34 + 3934 * pow(z12, 8) * pow(z34, 2) +
           12474 * pow(z12, 7) * pow(z34, 3) + 16830 * pow(z12, 6) * pow(z34, 4) + 16500 * pow(z12, 5) * pow(z34, 5) +
           11660 * pow(z12, 4) * pow(z34, 6) + 5797 * pow(z12, 3) * pow(z34, 7) + 1927 * pow(z12, 2) * pow(z34, 8) +
           385 * z12 * pow(z34, 9) + 35 * pow(z34, 10))) /
         (pow(z12, 8) * pow(z34, 4) * pow(z12 + z34, 11));
}