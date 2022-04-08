#include <tgmath.h>

double two_e_int_8_6_3_3_2_2_1_1_1_1(double z12, double z34) {
  return (34560 * (1540 * pow(z12, 12) + 20020 * pow(z12, 11) * z34 + 120318 * pow(z12, 10) * pow(z34, 2) +
                   443014 * pow(z12, 9) * pow(z34, 3) + 1115664 * pow(z12, 8) * pow(z34, 4) +
                   2027168 * pow(z12, 7) * pow(z34, 5) + 2010320 * pow(z12, 6) * pow(z34, 6) +
                   1498549 * pow(z12, 5) * pow(z34, 7) + 829217 * pow(z12, 4) * pow(z34, 8) +
                   330902 * pow(z12, 3) * pow(z34, 9) + 90134 * pow(z12, 2) * pow(z34, 10) +
                   15015 * z12 * pow(z34, 11) + 1155 * pow(z34, 12))) /
         (11. * pow(z12, 8) * pow(z34, 6) * pow(z12 + z34, 13));
}