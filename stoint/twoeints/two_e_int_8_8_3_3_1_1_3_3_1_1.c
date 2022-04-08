#include <tgmath.h>

double two_e_int_8_8_3_3_1_1_3_3_1_1(double z12, double z34) {
  return (29030400 *
          (7 * pow(z12, 14) + 105 * pow(z12, 13) * z34 + 736 * pow(z12, 12) * pow(z34, 2) +
           3200 * pow(z12, 11) * pow(z34, 3) + 9660 * pow(z12, 10) * pow(z34, 4) + 21476 * pow(z12, 9) * pow(z34, 5) +
           36400 * pow(z12, 8) * pow(z34, 6) + 48048 * pow(z12, 7) * pow(z34, 7) + 36400 * pow(z12, 6) * pow(z34, 8) +
           21476 * pow(z12, 5) * pow(z34, 9) + 9660 * pow(z12, 4) * pow(z34, 10) + 3200 * pow(z12, 3) * pow(z34, 11) +
           736 * pow(z12, 2) * pow(z34, 12) + 105 * z12 * pow(z34, 13) + 7 * pow(z34, 14))) /
         (pow(z12, 8) * pow(z34, 8) * pow(z12 + z34, 15));
}