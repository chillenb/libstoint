#include <tgmath.h>

double two_e_int_8_6_2_1_2_1_0_0_0_0(double z12, double z34) {
  return (13824 * (1176 * pow(z12, 10) + 15288 * pow(z12, 9) * z34 + 96183 * pow(z12, 8) * pow(z34, 2) +
                   394251 * pow(z12, 7) * pow(z34, 3) + 1188330 * pow(z12, 6) * pow(z34, 4) +
                   769626 * pow(z12, 5) * pow(z34, 5) + 388258 * pow(z12, 4) * pow(z34, 6) +
                   146458 * pow(z12, 3) * pow(z34, 7) + 38706 * pow(z12, 2) * pow(z34, 8) + 6370 * z12 * pow(z34, 9) +
                   490 * pow(z34, 10))) /
         (7. * pow(z12, 7) * pow(z34, 5) * pow(z12 + z34, 13));
}