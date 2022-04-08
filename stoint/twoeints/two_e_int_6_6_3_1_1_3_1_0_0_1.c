#include <tgmath.h>

double two_e_int_6_6_3_1_1_3_1_0_0_1(double z12, double z34) {
  return (2304 * (72 * pow(z12, 6) + 792 * pow(z12, 5) * z34 + 4585 * pow(z12, 4) * pow(z34, 2) +
                  18755 * pow(z12, 3) * pow(z34, 3) + 4585 * pow(z12, 2) * pow(z34, 4) + 792 * z12 * pow(z34, 5) +
                  72 * pow(z34, 6))) /
         (5. * pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 11));
}