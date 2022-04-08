#include <tgmath.h>

double two_e_int_8_8_1_1_2_2_1_1_1_1(double z12, double z34) {
  return (4147200 * (49 * pow(z12, 14) + 735 * pow(z12, 13) * z34 + 5142 * pow(z12, 12) * pow(z34, 2) +
                     22250 * pow(z12, 11) * pow(z34, 3) + 66570 * pow(z12, 10) * pow(z34, 4) +
                     145782 * pow(z12, 9) * pow(z34, 5) + 241150 * pow(z12, 8) * pow(z34, 6) +
                     306306 * pow(z12, 7) * pow(z34, 7) + 241150 * pow(z12, 6) * pow(z34, 8) +
                     145782 * pow(z12, 5) * pow(z34, 9) + 66570 * pow(z12, 4) * pow(z34, 10) +
                     22250 * pow(z12, 3) * pow(z34, 11) + 5142 * pow(z12, 2) * pow(z34, 12) + 735 * z12 * pow(z34, 13) +
                     49 * pow(z34, 14))) /
         (pow(z12, 8) * pow(z34, 8) * pow(z12 + z34, 15));
}