#include <tgmath.h>

double two_e_int_8_6_2_2_1_1_0_0_0_0(double z12, double z34) {
  return (34560 *
          (140 * pow(z12, 12) + 1820 * pow(z12, 11) * z34 + 10992 * pow(z12, 10) * pow(z34, 2) +
           40976 * pow(z12, 9) * pow(z34, 3) + 105716 * pow(z12, 8) * pow(z34, 4) + 200772 * pow(z12, 7) * pow(z34, 5) +
           191620 * pow(z12, 6) * pow(z34, 6) + 139711 * pow(z12, 5) * pow(z34, 7) + 76323 * pow(z12, 4) * pow(z34, 8) +
           30238 * pow(z12, 3) * pow(z34, 9) + 8206 * pow(z12, 2) * pow(z34, 10) + 1365 * z12 * pow(z34, 11) +
           105 * pow(z34, 12))) /
         (pow(z12, 8) * pow(z34, 6) * pow(z12 + z34, 13));
}