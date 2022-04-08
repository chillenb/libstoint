#include <tgmath.h>

double two_e_int_8_6_3_1_3_1_2_0_22_0(double z12, double z34) {
  return (69120 *
          (27 * pow(z12, 8) + 351 * pow(z12, 7) * z34 + 2546 * pow(z12, 6) * pow(z34, 2) +
           13442 * pow(z12, 5) * pow(z34, 3) + 5850 * pow(z12, 4) * pow(z34, 4) + 1976 * pow(z12, 3) * pow(z34, 5) +
           488 * pow(z12, 2) * pow(z34, 6) + 78 * z12 * pow(z34, 7) + 6 * pow(z34, 8))) /
         (pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 13));
}