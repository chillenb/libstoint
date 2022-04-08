#include <tgmath.h>

double two_e_int_8_5_3_3_1_1_0_11_11_0(double z12, double z34) {
  return (8064 * sqrt(6) *
          (12 * pow(z12, 7) + 144 * pow(z12, 6) * z34 + 792 * pow(z12, 5) * pow(z34, 2) +
           495 * pow(z12, 4) * pow(z34, 3) + 220 * pow(z12, 3) * pow(z34, 4) + 66 * pow(z12, 2) * pow(z34, 5) +
           12 * z12 * pow(z34, 6) + pow(z34, 7))) /
         (pow(z12, 6) * pow(z34, 3) * pow(z12 + z34, 12));
}