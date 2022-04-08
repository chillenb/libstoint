#include <tgmath.h>

double two_e_int_8_7_3_1_1_3_1_11_11_1(double z12, double z34) {
  return (13824 * (108 * pow(z12, 9) + 1512 * pow(z12, 8) * z34 + 15328 * pow(z12, 7) * pow(z34, 2) +
                   116312 * pow(z12, 6) * pow(z34, 3) + 608608 * pow(z12, 5) * pow(z34, 4) +
                   179179 * pow(z12, 4) * pow(z34, 5) + 38906 * pow(z12, 3) * pow(z34, 6) +
                   6289 * pow(z12, 2) * pow(z34, 7) + 756 * z12 * pow(z34, 8) + 54 * pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 14));
}