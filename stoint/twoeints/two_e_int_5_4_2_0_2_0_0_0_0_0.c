#include <tgmath.h>

double two_e_int_5_4_2_0_2_0_0_0_0_0(double z12, double z34) {
  return (144 * (7 * pow(z12, 3) + 56 * pow(z12, 2) * z34 + 16 * z12 * pow(z34, 2) + 2 * pow(z34, 3))) /
         (pow(z12, 3) * pow(z34, 2) * pow(z12 + z34, 8));
}