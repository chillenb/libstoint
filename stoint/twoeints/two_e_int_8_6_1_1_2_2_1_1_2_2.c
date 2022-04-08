#include <tgmath.h>

double two_e_int_8_6_1_1_2_2_1_1_2_2(double z12, double z34) {
  return (34560 *
          (140 * pow(z12, 12) + 1820 * pow(z12, 11) * z34 + 10956 * pow(z12, 10) * pow(z34, 2) +
           40508 * pow(z12, 9) * pow(z34, 3) + 102908 * pow(z12, 8) * pow(z34, 4) + 190476 * pow(z12, 7) * pow(z34, 5) +
           185900 * pow(z12, 6) * pow(z34, 6) + 137423 * pow(z12, 5) * pow(z34, 7) + 75699 * pow(z12, 4) * pow(z34, 8) +
           30134 * pow(z12, 3) * pow(z34, 9) + 8198 * pow(z12, 2) * pow(z34, 10) + 1365 * z12 * pow(z34, 11) +
           105 * pow(z34, 12))) /
         (pow(z12, 8) * pow(z34, 6) * pow(z12 + z34, 13));
}