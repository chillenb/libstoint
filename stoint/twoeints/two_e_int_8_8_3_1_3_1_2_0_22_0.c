#include <tgmath.h>

double two_e_int_8_8_3_1_3_1_2_0_22_0(double z12, double z34) {
  return (4147200 *
          (9 * pow(z12, 10) + 135 * pow(z12, 9) * z34 + 989 * pow(z12, 8) * pow(z34, 2) +
           4755 * pow(z12, 7) * pow(z34, 3) + 16905 * pow(z12, 6) * pow(z34, 4) + 47047 * pow(z12, 5) * pow(z34, 5) +
           16905 * pow(z12, 4) * pow(z34, 6) + 4755 * pow(z12, 3) * pow(z34, 7) + 989 * pow(z12, 2) * pow(z34, 8) +
           135 * z12 * pow(z34, 9) + 9 * pow(z34, 10))) /
         (pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 15));
}