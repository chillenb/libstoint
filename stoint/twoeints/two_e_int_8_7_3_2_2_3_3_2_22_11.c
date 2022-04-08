#include <tgmath.h>

double two_e_int_8_7_3_2_2_3_3_2_22_11(double z12, double z34) {
  return (138240 * sqrt(15) *
          (99 * pow(z12, 11) + 1386 * pow(z12, 10) * z34 + 9251 * pow(z12, 9) * pow(z34, 2) +
           39424 * pow(z12, 8) * pow(z34, 3) + 121446 * pow(z12, 7) * pow(z34, 4) + 290836 * pow(z12, 6) * pow(z34, 5) +
           164864 * pow(z12, 5) * pow(z34, 6) + 74124 * pow(z12, 4) * pow(z34, 7) + 25256 * pow(z12, 3) * pow(z34, 8) +
           6094 * pow(z12, 2) * pow(z34, 9) + 924 * z12 * pow(z34, 10) + 66 * pow(z34, 11))) /
         (11. * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 14));
}