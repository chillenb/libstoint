#include <tgmath.h>

double two_e_int_8_6_2_2_1_3_0_11_11_0(double z12, double z34) {
  return (-69120 *
          (27 * pow(z12, 8) + 351 * pow(z12, 7) * z34 + 1006 * pow(z12, 6) * pow(z34, 2) -
           6578 * pow(z12, 5) * pow(z34, 3) + 390 * pow(z12, 4) * pow(z34, 4) + 1066 * pow(z12, 3) * pow(z34, 5) +
           418 * pow(z12, 2) * pow(z34, 6) + 78 * z12 * pow(z34, 7) + 6 * pow(z34, 8))) /
         (sqrt(7) * pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 13));
}