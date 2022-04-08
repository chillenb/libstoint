#include <tgmath.h>

double two_e_int_8_6_3_1_2_0_0_1_1_0(double z12, double z34) {
  return (-41472 * sqrt(35) *
          (9 * pow(z12, 8) + 117 * pow(z12, 7) * z34 + 702 * pow(z12, 6) * pow(z34, 2) +
           2574 * pow(z12, 5) * pow(z34, 3) + 1430 * pow(z12, 4) * pow(z34, 4) + 572 * pow(z12, 3) * pow(z34, 5) +
           156 * pow(z12, 2) * pow(z34, 6) + 26 * z12 * pow(z34, 7) + 2 * pow(z34, 8))) /
         (pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 13));
}