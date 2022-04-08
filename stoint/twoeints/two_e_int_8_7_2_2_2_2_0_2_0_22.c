#include <tgmath.h>

double two_e_int_8_7_2_2_2_2_0_2_0_22(double z12, double z34) {
  return (1036800 * (48 * pow(z12, 9) + 672 * pow(z12, 8) * z34 + 4588 * pow(z12, 7) * pow(z34, 2) +
                     20552 * pow(z12, 6) * pow(z34, 3) + 68068 * pow(z12, 5) * pow(z34, 4) +
                     29029 * pow(z12, 4) * pow(z34, 5) + 9506 * pow(z12, 3) * pow(z34, 6) +
                     2239 * pow(z12, 2) * pow(z34, 7) + 336 * z12 * pow(z34, 8) + 24 * pow(z34, 9))) /
         (7. * pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 14));
}