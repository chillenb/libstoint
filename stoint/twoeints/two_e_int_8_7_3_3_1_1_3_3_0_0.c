#include <tgmath.h>

double two_e_int_8_7_3_3_1_1_3_3_0_0(double z12, double z34) {
  return (725760 *
          (40 * pow(z12, 13) + 560 * pow(z12, 12) * z34 + 3624 * pow(z12, 11) * pow(z34, 2) +
           14336 * pow(z12, 10) * pow(z34, 3) + 38584 * pow(z12, 9) * pow(z34, 4) + 74256 * pow(z12, 8) * pow(z34, 5) +
           104104 * pow(z12, 7) * pow(z34, 6) + 97097 * pow(z12, 6) * pow(z34, 7) + 67158 * pow(z12, 5) * pow(z34, 8) +
           34307 * pow(z12, 4) * pow(z34, 9) + 12628 * pow(z12, 3) * pow(z34, 10) + 3177 * pow(z12, 2) * pow(z34, 11) +
           490 * z12 * pow(z34, 12) + 35 * pow(z34, 13))) /
         (pow(z12, 8) * pow(z34, 7) * pow(z12 + z34, 14));
}