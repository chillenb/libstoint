#include <tgmath.h>

double two_e_int_8_7_3_3_1_1_1_1_1_1(double z12, double z34) {
  return (145152 * (200 * pow(z12, 13) + 2800 * pow(z12, 12) * z34 + 18176 * pow(z12, 11) * pow(z34, 2) +
                    72464 * pow(z12, 10) * pow(z34, 3) + 198016 * pow(z12, 9) * pow(z34, 4) +
                    391664 * pow(z12, 8) * pow(z34, 5) + 576576 * pow(z12, 7) * pow(z34, 6) +
                    513513 * pow(z12, 6) * pow(z34, 7) + 345982 * pow(z12, 5) * pow(z34, 8) +
                    174083 * pow(z12, 4) * pow(z34, 9) + 63532 * pow(z12, 3) * pow(z34, 10) +
                    15913 * pow(z12, 2) * pow(z34, 11) + 2450 * z12 * pow(z34, 12) + 175 * pow(z34, 13))) /
         (pow(z12, 8) * pow(z34, 7) * pow(z12 + z34, 14));
}