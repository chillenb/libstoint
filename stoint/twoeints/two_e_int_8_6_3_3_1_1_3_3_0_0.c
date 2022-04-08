#include <tgmath.h>

double two_e_int_8_6_3_3_1_1_3_3_0_0(double z12, double z34) {
  return (80640 *
          (60 * pow(z12, 12) + 780 * pow(z12, 11) * z34 + 4644 * pow(z12, 10) * pow(z34, 2) +
           16692 * pow(z12, 9) * pow(z34, 3) + 40092 * pow(z12, 8) * pow(z34, 4) + 66924 * pow(z12, 7) * pow(z34, 5) +
           71500 * pow(z12, 6) * pow(z34, 6) + 55627 * pow(z12, 5) * pow(z34, 7) + 31551 * pow(z12, 4) * pow(z34, 8) +
           12766 * pow(z12, 3) * pow(z34, 9) + 3502 * pow(z12, 2) * pow(z34, 10) + 585 * z12 * pow(z34, 11) +
           45 * pow(z34, 12))) /
         (pow(z12, 8) * pow(z34, 6) * pow(z12 + z34, 13));
}