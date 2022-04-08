#include <tgmath.h>

double two_e_int_8_4_2_2_1_1_2_2_1_1(double z12, double z34) {
  return (17280 *
          (98 * pow(z12, 10) + 1078 * pow(z12, 9) * z34 + 5474 * pow(z12, 8) * pow(z34, 2) +
           17094 * pow(z12, 7) * pow(z34, 3) + 23298 * pow(z12, 6) * pow(z34, 4) + 22968 * pow(z12, 5) * pow(z34, 5) +
           16280 * pow(z12, 4) * pow(z34, 6) + 8107 * pow(z12, 3) * pow(z34, 7) + 2697 * pow(z12, 2) * pow(z34, 8) +
           539 * z12 * pow(z34, 9) + 49 * pow(z34, 10))) /
         (7. * pow(z12, 8) * pow(z34, 4) * pow(z12 + z34, 11));
}