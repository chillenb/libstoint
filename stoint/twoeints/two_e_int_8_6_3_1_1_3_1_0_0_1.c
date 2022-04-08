#include <tgmath.h>

double two_e_int_8_6_3_1_1_3_1_0_0_1(double z12, double z34) {
  return (13824 *
          (216 * pow(z12, 8) + 2808 * pow(z12, 7) * z34 + 19598 * pow(z12, 6) * pow(z34, 2) +
           97526 * pow(z12, 5) * pow(z34, 3) + 44070 * pow(z12, 4) * pow(z34, 4) + 15353 * pow(z12, 3) * pow(z34, 5) +
           3869 * pow(z12, 2) * pow(z34, 6) + 624 * z12 * pow(z34, 7) + 48 * pow(z34, 8))) /
         (pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 13));
}