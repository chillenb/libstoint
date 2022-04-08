#include <tgmath.h>

double two_e_int_8_7_3_2_2_3_3_0_11_2(double z12, double z34) {
  return (1728000 * (121 * pow(z12, 7) + 1694 * pow(z12, 6) * z34 + 9555 * pow(z12, 5) * pow(z34, 2) +
                     23660 * pow(z12, 4) * pow(z34, 3) + 12880 * pow(z12, 3) * pow(z34, 4) +
                     3780 * pow(z12, 2) * pow(z34, 5) + 616 * z12 * pow(z34, 6) + 44 * pow(z34, 7))) /
         (11. * pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 14));
}