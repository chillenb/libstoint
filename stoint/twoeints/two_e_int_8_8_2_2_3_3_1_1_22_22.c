#include <tgmath.h>

double two_e_int_8_8_2_2_3_3_1_1_22_22(double z12, double z34) {
  return (29030400 *
          (7 * pow(z12, 14) + 105 * pow(z12, 13) * z34 + 735 * pow(z12, 12) * pow(z34, 2) +
           3185 * pow(z12, 11) * pow(z34, 3) + 9559 * pow(z12, 10) * pow(z34, 4) + 21081 * pow(z12, 9) * pow(z34, 5) +
           35455 * pow(z12, 8) * pow(z34, 6) + 46865 * pow(z12, 7) * pow(z34, 7) + 35455 * pow(z12, 6) * pow(z34, 8) +
           21081 * pow(z12, 5) * pow(z34, 9) + 9559 * pow(z12, 4) * pow(z34, 10) + 3185 * pow(z12, 3) * pow(z34, 11) +
           735 * pow(z12, 2) * pow(z34, 12) + 105 * z12 * pow(z34, 13) + 7 * pow(z34, 14))) /
         (pow(z12, 8) * pow(z34, 8) * pow(z12 + z34, 15));
}