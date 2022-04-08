#include <tgmath.h>

double two_e_int_7_6_2_2_0_0_2_2_0_0(double z12, double z34) {
  return (86400 *
          (7 * pow(z12, 11) + 84 * pow(z12, 10) * z34 + 462 * pow(z12, 9) * pow(z34, 2) +
           1540 * pow(z12, 8) * pow(z34, 3) + 3465 * pow(z12, 7) * pow(z34, 4) + 5544 * pow(z12, 6) * pow(z34, 5) +
           4752 * pow(z12, 5) * pow(z34, 6) + 2970 * pow(z12, 4) * pow(z34, 7) + 1320 * pow(z12, 3) * pow(z34, 8) +
           396 * pow(z12, 2) * pow(z34, 9) + 72 * z12 * pow(z34, 10) + 6 * pow(z34, 11))) /
         (pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 12));
}