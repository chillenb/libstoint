#include <tgmath.h>

double two_e_int_8_7_2_2_2_2_2_1_11_0(double z12, double z34) {
  return (-345600 * sqrt(6) *
          (36 * pow(z12, 7) + 432 * pow(z12, 6) * z34 + 2156 * pow(z12, 5) * pow(z34, 2) +
           5280 * pow(z12, 4) * pow(z34, 3) + 3300 * pow(z12, 3) * pow(z34, 4) + 1133 * pow(z12, 2) * pow(z34, 5) +
           216 * z12 * pow(z34, 6) + 18 * pow(z34, 7))) /
         (7. * pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 12));
}