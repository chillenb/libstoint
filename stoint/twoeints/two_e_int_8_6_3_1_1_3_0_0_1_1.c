#include <tgmath.h>

double two_e_int_8_6_3_1_1_3_0_0_1_1(double z12, double z34) {
  return (4608 * sqrt(6) *
          (243 * pow(z12, 8) + 3159 * pow(z12, 7) * z34 + 16754 * pow(z12, 6) * pow(z34, 2) +
           40898 * pow(z12, 5) * pow(z34, 3) + 30810 * pow(z12, 4) * pow(z34, 4) + 14144 * pow(z12, 3) * pow(z34, 5) +
           4112 * pow(z12, 2) * pow(z34, 6) + 702 * z12 * pow(z34, 7) + 54 * pow(z34, 8))) /
         (pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 13));
}