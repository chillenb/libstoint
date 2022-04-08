#include <tgmath.h>

double two_e_int_7_7_3_2_2_3_1_1_0_0(double z12, double z34) {
  return (276480 * sqrt(2) *
          (33 * pow(z12, 10) + 429 * pow(z12, 9) * z34 + 2585 * pow(z12, 8) * pow(z34, 2) +
           9581 * pow(z12, 7) * pow(z34, 3) + 23828 * pow(z12, 6) * pow(z34, 4) + 37492 * pow(z12, 5) * pow(z34, 5) +
           23828 * pow(z12, 4) * pow(z34, 6) + 9581 * pow(z12, 3) * pow(z34, 7) + 2585 * pow(z12, 2) * pow(z34, 8) +
           429 * z12 * pow(z34, 9) + 33 * pow(z34, 10))) /
         (11. * pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 13));
}