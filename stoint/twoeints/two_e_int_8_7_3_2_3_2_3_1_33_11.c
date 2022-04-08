#include <tgmath.h>

double two_e_int_8_7_3_2_3_2_3_1_33_11(double z12, double z34) {
  return (1728000 * (121 * pow(z12, 7) + 1694 * pow(z12, 6) * z34 + 11193 * pow(z12, 5) * pow(z34, 2) +
                     46592 * pow(z12, 4) * pow(z34, 3) + 16408 * pow(z12, 3) * pow(z34, 4) +
                     4032 * pow(z12, 2) * pow(z34, 5) + 616 * z12 * pow(z34, 6) + 44 * pow(z34, 7))) /
         (11. * pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 14));
}