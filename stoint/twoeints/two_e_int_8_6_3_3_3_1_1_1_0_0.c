#include <tgmath.h>

double two_e_int_8_6_3_3_3_1_1_1_0_0(double z12, double z34) {
  return (4608 * sqrt(21) *
          (891 * pow(z12, 8) + 11583 * pow(z12, 7) * z34 + 71698 * pow(z12, 6) * pow(z34, 2) +
           283426 * pow(z12, 5) * pow(z34, 3) + 149370 * pow(z12, 4) * pow(z34, 4) + 57928 * pow(z12, 3) * pow(z34, 5) +
           15544 * pow(z12, 2) * pow(z34, 6) + 2574 * z12 * pow(z34, 7) + 198 * pow(z34, 8))) /
         (11. * pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 13));
}