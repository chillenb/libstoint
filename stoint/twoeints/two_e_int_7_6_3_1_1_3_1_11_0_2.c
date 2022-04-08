#include <tgmath.h>

double two_e_int_7_6_3_1_1_3_1_11_0_2(double z12, double z34) {
  return (2304 * (81 * pow(z12, 7) + 972 * pow(z12, 6) * z34 + 2596 * pow(z12, 5) * pow(z34, 2) -
                  15180 * pow(z12, 4) * pow(z34, 3) + 1920 * pow(z12, 3) * pow(z34, 4) +
                  1876 * pow(z12, 2) * pow(z34, 5) + 432 * z12 * pow(z34, 6) + 36 * pow(z34, 7))) /
         (sqrt(5) * pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 12));
}