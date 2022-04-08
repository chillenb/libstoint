#include <tgmath.h>

double two_e_int_7_7_1_1_1_1_0_0_0_0(double z12, double z34) {
  return (145152 *
          (125 * pow(z12, 12) + 1625 * pow(z12, 11) * z34 + 9798 * pow(z12, 10) * pow(z34, 2) +
           36374 * pow(z12, 9) * pow(z34, 3) + 93119 * pow(z12, 8) * pow(z34, 4) + 174603 * pow(z12, 7) * pow(z34, 5) +
           248820 * pow(z12, 6) * pow(z34, 6) + 174603 * pow(z12, 5) * pow(z34, 7) + 93119 * pow(z12, 4) * pow(z34, 8) +
           36374 * pow(z12, 3) * pow(z34, 9) + 9798 * pow(z12, 2) * pow(z34, 10) + 1625 * z12 * pow(z34, 11) +
           125 * pow(z34, 12))) /
         (5. * pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 13));
}