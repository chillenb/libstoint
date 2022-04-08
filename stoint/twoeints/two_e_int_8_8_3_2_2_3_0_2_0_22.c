#include <tgmath.h>

double two_e_int_8_8_3_2_2_3_0_2_0_22(double z12, double z34) {
  return (1886976000 * sqrt(5) *
          (pow(z12, 4) + 15 * pow(z12, 3) * z34 + 105 * pow(z12, 2) * pow(z34, 2) + 15 * z12 * pow(z34, 3) +
           pow(z34, 4))) /
         (11. * pow(z12, 3) * pow(z34, 3) * pow(z12 + z34, 15));
}