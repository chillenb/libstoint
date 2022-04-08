#include <tgmath.h>

double two_e_int_7_7_3_2_1_2_0_11_11_0(double z12, double z34) {
  return (138240 *
          (7 * pow(z12, 10) + 91 * pow(z12, 9) * z34 + 555 * pow(z12, 8) * pow(z34, 2) +
           2119 * pow(z12, 7) * pow(z34, 3) + 5707 * pow(z12, 6) * pow(z34, 4) + 11583 * pow(z12, 5) * pow(z34, 5) +
           5707 * pow(z12, 4) * pow(z34, 6) + 2119 * pow(z12, 3) * pow(z34, 7) + 555 * pow(z12, 2) * pow(z34, 8) +
           91 * z12 * pow(z34, 9) + 7 * pow(z34, 10))) /
         (sqrt(7) * pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 13));
}