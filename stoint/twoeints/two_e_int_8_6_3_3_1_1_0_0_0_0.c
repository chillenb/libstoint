#include <tgmath.h>

double two_e_int_8_6_3_3_1_1_0_0_0_0(double z12, double z34) {
  return (16128 *
          (300 * pow(z12, 12) + 3900 * pow(z12, 11) * z34 + 23544 * pow(z12, 10) * pow(z34, 2) +
           87672 * pow(z12, 9) * pow(z34, 3) + 225732 * pow(z12, 8) * pow(z34, 4) + 427284 * pow(z12, 7) * pow(z34, 5) +
           408980 * pow(z12, 6) * pow(z34, 6) + 298727 * pow(z12, 5) * pow(z34, 7) +
           163371 * pow(z12, 4) * pow(z34, 8) + 64766 * pow(z12, 3) * pow(z34, 9) + 17582 * pow(z12, 2) * pow(z34, 10) +
           2925 * z12 * pow(z34, 11) + 225 * pow(z34, 12))) /
         (pow(z12, 8) * pow(z34, 6) * pow(z12 + z34, 13));
}