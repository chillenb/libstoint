#include <tgmath.h>

double two_e_int_7_7_3_1_3_1_0_0_0_0(double z12, double z34) {
  return (3072 * (2187 * pow(z12, 8) + 28431 * pow(z12, 7) * z34 + 181586 * pow(z12, 6) * pow(z34, 2) +
                  768482 * pow(z12, 5) * pow(z34, 3) + 2421705 * pow(z12, 4) * pow(z34, 4) +
                  768482 * pow(z12, 3) * pow(z34, 5) + 181586 * pow(z12, 2) * pow(z34, 6) + 28431 * z12 * pow(z34, 7) +
                  2187 * pow(z34, 8))) /
         (5. * pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 13));
}