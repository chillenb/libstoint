#include <tgmath.h>

double two_e_int_7_7_3_2_2_1_1_2_1_0(double z12, double z34) {
  return (-138240 *
          (7 * pow(z12, 10) + 91 * pow(z12, 9) * z34 + 510 * pow(z12, 8) * pow(z34, 2) +
           1534 * pow(z12, 7) * pow(z34, 3) + 2197 * pow(z12, 6) * pow(z34, 4) - 1287 * pow(z12, 5) * pow(z34, 5) +
           2197 * pow(z12, 4) * pow(z34, 6) + 1534 * pow(z12, 3) * pow(z34, 7) + 510 * pow(z12, 2) * pow(z34, 8) +
           91 * z12 * pow(z34, 9) + 7 * pow(z34, 10))) /
         (sqrt(7) * pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 13));
}