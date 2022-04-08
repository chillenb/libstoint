#include <tgmath.h>

double two_e_int_8_5_2_2_0_0_1_1_0_0(double z12, double z34) {
  return (120960 *
          (8 * pow(z12, 11) + 96 * pow(z12, 10) * z34 + 528 * pow(z12, 9) * pow(z34, 2) +
           1760 * pow(z12, 8) * pow(z34, 3) + 3960 * pow(z12, 7) * pow(z34, 4) + 4620 * pow(z12, 6) * pow(z34, 5) +
           3960 * pow(z12, 5) * pow(z34, 6) + 2475 * pow(z12, 4) * pow(z34, 7) + 1100 * pow(z12, 3) * pow(z34, 8) +
           330 * pow(z12, 2) * pow(z34, 9) + 60 * z12 * pow(z34, 10) + 5 * pow(z34, 11))) /
         (pow(z12, 8) * pow(z34, 5) * pow(z12 + z34, 12));
}