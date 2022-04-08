#include <tgmath.h>

double two_e_int_8_7_3_2_2_3_0_1_2_1(double z12, double z34) {
  return (138240 * sqrt(3) *
          (99 * pow(z12, 11) + 1386 * pow(z12, 10) * z34 + 9251 * pow(z12, 9) * pow(z34, 2) +
           39424 * pow(z12, 8) * pow(z34, 3) + 114621 * pow(z12, 7) * pow(z34, 4) + 195286 * pow(z12, 6) * pow(z34, 5) +
           150164 * pow(z12, 5) * pow(z34, 6) + 73074 * pow(z12, 4) * pow(z34, 7) + 25256 * pow(z12, 3) * pow(z34, 8) +
           6094 * pow(z12, 2) * pow(z34, 9) + 924 * z12 * pow(z34, 10) + 66 * pow(z34, 11))) /
         (11. * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 14));
}