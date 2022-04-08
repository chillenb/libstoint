#include <tgmath.h>

double two_e_int_7_5_3_2_2_1_2_1_0_1(double z12, double z34) {
  return (-1152 * sqrt(4.285714285714286) *
          (14 * pow(z12, 6) + 126 * pow(z12, 5) * z34 + 414 * pow(z12, 4) * pow(z34, 2) +
           366 * pow(z12, 3) * pow(z34, 3) + 174 * pow(z12, 2) * pow(z34, 4) + 45 * z12 * pow(z34, 5) +
           5 * pow(z34, 6))) /
         (pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 9));
}