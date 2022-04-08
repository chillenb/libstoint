#include <tgmath.h>

double two_e_int_8_7_2_1_1_2_1_0_1_2(double z12, double z34) {
  return (414720 * sqrt(2) *
          (147 * pow(z12, 11) + 2058 * pow(z12, 10) * z34 + 13278 * pow(z12, 9) * pow(z34, 2) +
           52122 * pow(z12, 8) * pow(z34, 3) + 138138 * pow(z12, 7) * pow(z34, 4) + 258258 * pow(z12, 6) * pow(z34, 5) +
           183092 * pow(z12, 5) * pow(z34, 6) + 94822 * pow(z12, 4) * pow(z34, 7) + 35168 * pow(z12, 3) * pow(z34, 8) +
           8882 * pow(z12, 2) * pow(z34, 9) + 1372 * z12 * pow(z34, 10) + 98 * pow(z34, 11))) /
         (7. * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 14));
}