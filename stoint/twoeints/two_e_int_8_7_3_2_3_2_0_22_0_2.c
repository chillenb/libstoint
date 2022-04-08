#include <tgmath.h>

double two_e_int_8_7_3_2_3_2_0_22_0_2(double z12, double z34) {
  return (691200 * (242 * pow(z12, 7) + 3388 * pow(z12, 6) * z34 + 24297 * pow(z12, 5) * pow(z34, 2) +
                    119938 * pow(z12, 4) * pow(z34, 3) + 36932 * pow(z12, 3) * pow(z34, 4) +
                    8358 * pow(z12, 2) * pow(z34, 5) + 1232 * z12 * pow(z34, 6) + 88 * pow(z34, 7))) /
         (11. * pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 14));
}