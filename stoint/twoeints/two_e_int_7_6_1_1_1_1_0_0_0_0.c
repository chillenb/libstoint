#include <tgmath.h>

double two_e_int_7_6_1_1_1_1_0_0_0_0(double z12, double z34) {
  return (3456 * (875 * pow(z12, 11) + 10500 * pow(z12, 10) * z34 + 58254 * pow(z12, 9) * pow(z34, 2) +
                  198548 * pow(z12, 8) * pow(z34, 3) + 466389 * pow(z12, 7) * pow(z34, 4) +
                  803880 * pow(z12, 6) * pow(z34, 5) + 643280 * pow(z12, 5) * pow(z34, 6) +
                  386034 * pow(z12, 4) * pow(z34, 7) + 167688 * pow(z12, 3) * pow(z34, 8) +
                  49724 * pow(z12, 2) * pow(z34, 9) + 9000 * z12 * pow(z34, 10) + 750 * pow(z34, 11))) /
         (5. * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 12));
}