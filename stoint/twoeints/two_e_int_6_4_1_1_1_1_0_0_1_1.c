#include <tgmath.h>

double two_e_int_6_4_1_1_1_1_0_0_1_1(double z12, double z34) {
  return (288 *
          (75 * pow(z12, 8) + 675 * pow(z12, 7) * z34 + 2644 * pow(z12, 6) * pow(z34, 2) +
           5796 * pow(z12, 5) * pow(z34, 3) + 6084 * pow(z12, 4) * pow(z34, 4) + 4146 * pow(z12, 3) * pow(z34, 5) +
           1794 * pow(z12, 2) * pow(z34, 6) + 450 * z12 * pow(z34, 7) + 50 * pow(z34, 8))) /
         (5. * pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 9));
}