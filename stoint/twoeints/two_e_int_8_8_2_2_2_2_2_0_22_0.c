#include <tgmath.h>

double two_e_int_8_8_2_2_2_2_2_0_22_0(double z12, double z34) {
  return (62208000 *
          (4 * pow(z12, 10) + 60 * pow(z12, 9) * z34 + 431 * pow(z12, 8) * pow(z34, 2) +
           1985 * pow(z12, 7) * pow(z34, 3) + 6615 * pow(z12, 6) * pow(z34, 4) + 17017 * pow(z12, 5) * pow(z34, 5) +
           6615 * pow(z12, 4) * pow(z34, 6) + 1985 * pow(z12, 3) * pow(z34, 7) + 431 * pow(z12, 2) * pow(z34, 8) +
           60 * z12 * pow(z34, 9) + 4 * pow(z34, 10))) /
         (7. * pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 15));
}