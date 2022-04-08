#include <tgmath.h>

double two_e_int_8_7_2_2_1_3_1_11_1_3(double z12, double z34) {
  return (-46080 * sqrt(4.285714285714286) *
          (162 * pow(z12, 9) + 2268 * pow(z12, 8) * z34 + 14522 * pow(z12, 7) * pow(z34, 2) +
           55888 * pow(z12, 6) * pow(z34, 3) + 142142 * pow(z12, 5) * pow(z34, 4) + 76076 * pow(z12, 4) * pow(z34, 5) +
           28714 * pow(z12, 3) * pow(z34, 6) + 7316 * pow(z12, 2) * pow(z34, 7) + 1134 * z12 * pow(z34, 8) +
           81 * pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 14));
}