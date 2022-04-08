#include <tgmath.h>

double two_e_int_5_4_1_1_0_0_1_1_0_0(double z12, double z34) {
  return (144 * (5 * pow(z12, 7) + 40 * pow(z12, 6) * z34 + 140 * pow(z12, 5) * pow(z34, 2) +
                 280 * pow(z12, 4) * pow(z34, 3) + 224 * pow(z12, 3) * pow(z34, 4) + 112 * pow(z12, 2) * pow(z34, 5) +
                 32 * z12 * pow(z34, 6) + 4 * pow(z34, 7))) /
         (pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 8));
}