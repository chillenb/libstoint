#include <tgmath.h>

double two_e_int_8_8_2_2_2_2_0_0_2_2(double z12, double z34) {
  return (4147200 * (343 * pow(z12, 14) + 5145 * pow(z12, 13) * z34 + 35955 * pow(z12, 12) * pow(z34, 2) +
                     155165 * pow(z12, 11) * pow(z34, 3) + 461961 * pow(z12, 10) * pow(z34, 4) +
                     1003719 * pow(z12, 9) * pow(z34, 5) + 1641745 * pow(z12, 8) * pow(z34, 6) +
                     2057055 * pow(z12, 7) * pow(z34, 7) + 1641745 * pow(z12, 6) * pow(z34, 8) +
                     1003719 * pow(z12, 5) * pow(z34, 9) + 461961 * pow(z12, 4) * pow(z34, 10) +
                     155165 * pow(z12, 3) * pow(z34, 11) + 35955 * pow(z12, 2) * pow(z34, 12) +
                     5145 * z12 * pow(z34, 13) + 343 * pow(z34, 14))) /
         (7. * pow(z12, 8) * pow(z34, 8) * pow(z12 + z34, 15));
}