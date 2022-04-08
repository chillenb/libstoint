#include <tgmath.h>

double two_e_int_8_8_1_1_1_1_0_0_0_0(double z12, double z34) {
  return (5806080 * (35 * pow(z12, 14) + 525 * pow(z12, 13) * z34 + 3687 * pow(z12, 12) * pow(z34, 2) +
                     16105 * pow(z12, 11) * pow(z34, 3) + 49035 * pow(z12, 10) * pow(z34, 4) +
                     110565 * pow(z12, 9) * pow(z34, 5) + 191555 * pow(z12, 8) * pow(z34, 6) +
                     261261 * pow(z12, 7) * pow(z34, 7) + 191555 * pow(z12, 6) * pow(z34, 8) +
                     110565 * pow(z12, 5) * pow(z34, 9) + 49035 * pow(z12, 4) * pow(z34, 10) +
                     16105 * pow(z12, 3) * pow(z34, 11) + 3687 * pow(z12, 2) * pow(z34, 12) + 525 * z12 * pow(z34, 13) +
                     35 * pow(z34, 14))) /
         (pow(z12, 8) * pow(z34, 8) * pow(z12 + z34, 15));
}