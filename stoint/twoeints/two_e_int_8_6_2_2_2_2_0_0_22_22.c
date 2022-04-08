#include <tgmath.h>

double two_e_int_8_6_2_2_2_2_0_0_22_22(double z12, double z34) {
  return (172800 *
          (196 * pow(z12, 12) + 2548 * pow(z12, 11) * z34 + 15216 * pow(z12, 10) * pow(z34, 2) +
           55120 * pow(z12, 9) * pow(z34, 3) + 134788 * pow(z12, 8) * pow(z34, 4) + 235092 * pow(z12, 7) * pow(z34, 5) +
           241748 * pow(z12, 6) * pow(z34, 6) + 184769 * pow(z12, 5) * pow(z34, 7) +
           103869 * pow(z12, 4) * pow(z34, 8) + 41834 * pow(z12, 3) * pow(z34, 9) + 11450 * pow(z12, 2) * pow(z34, 10) +
           1911 * z12 * pow(z34, 11) + 147 * pow(z34, 12))) /
         (7. * pow(z12, 8) * pow(z34, 6) * pow(z12 + z34, 13));
}