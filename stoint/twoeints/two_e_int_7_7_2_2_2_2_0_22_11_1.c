#include <tgmath.h>

double two_e_int_7_7_2_2_2_2_0_22_11_1(double z12, double z34) {
  return (46080 * sqrt(6) *
          (54 * pow(z12, 6) + 594 * pow(z12, 5) * z34 + 2695 * pow(z12, 4) * pow(z34, 2) +
           5885 * pow(z12, 3) * pow(z34, 3) + 2695 * pow(z12, 2) * pow(z34, 4) + 594 * z12 * pow(z34, 5) +
           54 * pow(z34, 6))) /
         (7. * pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 11));
}