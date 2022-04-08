#include <tgmath.h>

double two_e_int_7_2_2_2_0_0_1_1_0_0(double z12, double z34) {
  return (720 * (7 * pow(z12, 7) + 56 * pow(z12, 6) * z34 + 112 * pow(z12, 5) * pow(z34, 2) +
                 140 * pow(z12, 4) * pow(z34, 3) + 112 * pow(z12, 3) * pow(z34, 4) + 56 * pow(z12, 2) * pow(z34, 5) +
                 16 * z12 * pow(z34, 6) + 2 * pow(z34, 7))) /
         (pow(z12, 7) * pow(z34, 2) * pow(z12 + z34, 8));
}