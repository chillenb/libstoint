#include <tgmath.h>

double two_e_int_8_6_3_3_2_2_0_0_1_1(double z12, double z34) {
  return (11520 * (4620 * pow(z12, 12) + 60060 * pow(z12, 11) * z34 + 361152 * pow(z12, 10) * pow(z34, 2) +
                   1331616 * pow(z12, 9) * pow(z34, 3) + 3349236 * pow(z12, 8) * pow(z34, 4) +
                   5966532 * pow(z12, 7) * pow(z34, 5) + 6015620 * pow(z12, 6) * pow(z34, 6) +
                   4500431 * pow(z12, 5) * pow(z34, 7) + 2490483 * pow(z12, 4) * pow(z34, 8) +
                   993278 * pow(z12, 3) * pow(z34, 9) + 270446 * pow(z12, 2) * pow(z34, 10) +
                   45045 * z12 * pow(z34, 11) + 3465 * pow(z34, 12))) /
         (11. * pow(z12, 8) * pow(z34, 6) * pow(z12 + z34, 13));
}