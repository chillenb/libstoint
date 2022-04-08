#include <tgmath.h>

double two_e_int_8_6_3_3_1_3_0_22_1_3(double z12, double z34) {
  return (-69120 * sqrt(7) *
          (198 * pow(z12, 8) + 2574 * pow(z12, 7) * z34 + 15334 * pow(z12, 6) * pow(z34, 2) +
           55198 * pow(z12, 5) * pow(z34, 3) + 31070 * pow(z12, 4) * pow(z34, 4) + 12519 * pow(z12, 3) * pow(z34, 5) +
           3427 * pow(z12, 2) * pow(z34, 6) + 572 * z12 * pow(z34, 7) + 44 * pow(z34, 8))) /
         (11. * pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 13));
}