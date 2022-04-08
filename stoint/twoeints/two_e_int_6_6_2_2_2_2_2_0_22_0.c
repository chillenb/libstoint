#include <tgmath.h>

double two_e_int_6_6_2_2_2_2_2_0_22_0(double z12, double z34) {
  return (34560 * (pow(z12, 2) + 7 * z12 * z34 + pow(z34, 2)) *
          (4 * pow(z12, 4) + 16 * pow(z12, 3) * z34 + 129 * pow(z12, 2) * pow(z34, 2) + 16 * z12 * pow(z34, 3) +
           4 * pow(z34, 4))) /
         (7. * pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 11));
}