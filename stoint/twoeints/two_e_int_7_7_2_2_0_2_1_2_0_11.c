#include <tgmath.h>

double two_e_int_7_7_2_2_0_2_1_2_0_11(double z12, double z34) {
  return (-248832 * sqrt(30) *
          (pow(z12, 8) + 13 * pow(z12, 7) * z34 + 78 * pow(z12, 6) * pow(z34, 2) + 286 * pow(z12, 5) * pow(z34, 3) +
           715 * pow(z12, 4) * pow(z34, 4) + 286 * pow(z12, 3) * pow(z34, 5) + 78 * pow(z12, 2) * pow(z34, 6) +
           13 * z12 * pow(z34, 7) + pow(z34, 8))) /
         (pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 13));
}