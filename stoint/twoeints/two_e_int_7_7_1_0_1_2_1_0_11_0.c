#include <tgmath.h>

double two_e_int_7_7_1_0_1_2_1_0_11_0(double z12, double z34) {
  return (322560 * sqrt(5) *
          (pow(z12, 10) + 13 * pow(z12, 9) * z34 + 78 * pow(z12, 8) * pow(z34, 2) + 286 * pow(z12, 7) * pow(z34, 3) +
           715 * pow(z12, 6) * pow(z34, 4) + 1287 * pow(z12, 5) * pow(z34, 5) + 715 * pow(z12, 4) * pow(z34, 6) +
           286 * pow(z12, 3) * pow(z34, 7) + 78 * pow(z12, 2) * pow(z34, 8) + 13 * z12 * pow(z34, 9) + pow(z34, 10))) /
         (pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 13));
}