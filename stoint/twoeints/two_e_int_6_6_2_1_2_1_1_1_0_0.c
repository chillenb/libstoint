#include <tgmath.h>

double two_e_int_6_6_2_1_2_1_1_1_0_0(double z12, double z34) {
  return (2304 * sqrt(3) *
          (49 * pow(z12, 8) + 539 * pow(z12, 7) * z34 + 2614 * pow(z12, 6) * pow(z34, 2) +
           7194 * pow(z12, 5) * pow(z34, 3) + 11715 * pow(z12, 4) * pow(z34, 4) + 7194 * pow(z12, 3) * pow(z34, 5) +
           2614 * pow(z12, 2) * pow(z34, 6) + 539 * z12 * pow(z34, 7) + 49 * pow(z34, 8))) /
         (7. * pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 11));
}