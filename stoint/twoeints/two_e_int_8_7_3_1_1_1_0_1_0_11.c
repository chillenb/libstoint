#include <tgmath.h>

double two_e_int_8_7_3_1_1_1_0_1_0_11(double z12, double z34) {
  return (746496 * sqrt(21) *
          (2 * pow(z12, 9) + 28 * pow(z12, 8) * z34 + 182 * pow(z12, 7) * pow(z34, 2) +
           728 * pow(z12, 6) * pow(z34, 3) + 2002 * pow(z12, 5) * pow(z34, 4) + 1001 * pow(z12, 4) * pow(z34, 5) +
           364 * pow(z12, 3) * pow(z34, 6) + 91 * pow(z12, 2) * pow(z34, 7) + 14 * z12 * pow(z34, 8) + pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 14));
}