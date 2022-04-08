#include <tgmath.h>

double two_e_int_8_6_2_1_1_2_0_11_11_0(double z12, double z34) {
  return (6912 *
          (588 * pow(z12, 10) + 7644 * pow(z12, 9) * z34 + 51804 * pow(z12, 8) * pow(z34, 2) +
           245388 * pow(z12, 7) * pow(z34, 3) + 883740 * pow(z12, 6) * pow(z34, 4) +
           500643 * pow(z12, 5) * pow(z34, 5) + 225719 * pow(z12, 4) * pow(z34, 6) + 78494 * pow(z12, 3) * pow(z34, 7) +
           19758 * pow(z12, 2) * pow(z34, 8) + 3185 * z12 * pow(z34, 9) + 245 * pow(z34, 10))) /
         (7. * pow(z12, 7) * pow(z34, 5) * pow(z12 + z34, 13));
}