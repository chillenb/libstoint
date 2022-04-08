#include <tgmath.h>

double two_e_int_4_3_1_0_0_1_1_0_0_1(double z12, double z34) {
  return (8 * (5 * pow(z12, 3) + 30 * pow(z12, 2) * z34 + 12 * z12 * pow(z34, 2) + 2 * pow(z34, 3))) /
         (pow(z12, 3) * pow(z34, 2) * pow(z12 + z34, 6));
}