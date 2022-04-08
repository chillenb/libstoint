#include <tgmath.h>

double two_e_int_8_8_3_3_3_3_2_3_3_2(double z12, double z34) {
  return (48384000 *
          (143 * pow(z12, 10) + 2145 * pow(z12, 9) * z34 + 15249 * pow(z12, 8) * pow(z34, 2) +
           68575 * pow(z12, 7) * pow(z34, 3) + 220010 * pow(z12, 6) * pow(z34, 4) + 539574 * pow(z12, 5) * pow(z34, 5) +
           220010 * pow(z12, 4) * pow(z34, 6) + 68575 * pow(z12, 3) * pow(z34, 7) + 15249 * pow(z12, 2) * pow(z34, 8) +
           2145 * z12 * pow(z34, 9) + 143 * pow(z34, 10))) /
         (143. * pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 15));
}