#include <tgmath.h>

double two_e_int_7_7_3_2_2_3_0_0_0_0(double z12, double z34) {
  return (138240 *
          (99 * pow(z12, 10) + 1287 * pow(z12, 9) * z34 + 7810 * pow(z12, 8) * pow(z34, 2) +
           29458 * pow(z12, 7) * pow(z34, 3) + 80149 * pow(z12, 6) * pow(z34, 4) + 185081 * pow(z12, 5) * pow(z34, 5) +
           80149 * pow(z12, 4) * pow(z34, 6) + 29458 * pow(z12, 3) * pow(z34, 7) + 7810 * pow(z12, 2) * pow(z34, 8) +
           1287 * z12 * pow(z34, 9) + 99 * pow(z34, 10))) /
         (11. * pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 13));
}