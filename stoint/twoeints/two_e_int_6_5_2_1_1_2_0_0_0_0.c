#include <tgmath.h>

double two_e_int_6_5_2_1_1_2_0_0_0_0(double z12, double z34) {
  return (1152 * (49 * pow(z12, 7) + 490 * pow(z12, 6) * z34 + 2448 * pow(z12, 5) * pow(z34, 2) +
                  8310 * pow(z12, 4) * pow(z34, 3) + 3900 * pow(z12, 3) * pow(z34, 4) +
                  1314 * pow(z12, 2) * pow(z34, 5) + 280 * z12 * pow(z34, 6) + 28 * pow(z34, 7))) /
         (7. * pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 10));
}