#include <tgmath.h>

double two_e_int_6_6_3_1_1_3_1_11_11_1(double z12, double z34) {
  return (2304 * (9 * pow(z12, 6) + 99 * pow(z12, 5) * z34 + 1120 * pow(z12, 4) * pow(z34, 2) +
                  8360 * pow(z12, 3) * pow(z34, 3) + 1120 * pow(z12, 2) * pow(z34, 4) + 99 * z12 * pow(z34, 5) +
                  9 * pow(z34, 6))) /
         (5. * pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 11));
}