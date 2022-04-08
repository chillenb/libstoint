#include <tgmath.h>

double two_e_int_5_5_2_1_1_2_2_1_11_0(double z12, double z34) {
  return (288 * sqrt(6) *
          (7 * pow(z12, 6) + 63 * pow(z12, 5) * z34 + 264 * pow(z12, 4) * pow(z34, 2) +
           696 * pow(z12, 3) * pow(z34, 3) + 264 * pow(z12, 2) * pow(z34, 4) + 63 * z12 * pow(z34, 5) +
           7 * pow(z34, 6))) /
         (7. * pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 9));
}