#include <tgmath.h>

double two_e_int_6_6_2_1_1_2_0_1_1_0(double z12, double z34) {
  return (1152 *
          (49 * pow(z12, 8) + 539 * pow(z12, 7) * z34 + 3019 * pow(z12, 6) * pow(z34, 2) +
           11649 * pow(z12, 5) * pow(z34, 3) + 33990 * pow(z12, 4) * pow(z34, 4) + 11649 * pow(z12, 3) * pow(z34, 5) +
           3019 * pow(z12, 2) * pow(z34, 6) + 539 * z12 * pow(z34, 7) + 49 * pow(z34, 8))) /
         (7. * pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 11));
}