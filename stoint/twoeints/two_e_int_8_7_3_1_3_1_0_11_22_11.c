#include <tgmath.h>

double two_e_int_8_7_3_1_3_1_0_11_22_11(double z12, double z34) {
  return (-4608 * sqrt(30) *
          (324 * pow(z12, 9) + 4536 * pow(z12, 8) * z34 + 30584 * pow(z12, 7) * pow(z34, 2) +
           133336 * pow(z12, 6) * pow(z34, 3) + 424424 * pow(z12, 5) * pow(z34, 4) +
           187187 * pow(z12, 4) * pow(z34, 5) + 62818 * pow(z12, 3) * pow(z34, 6) + 15017 * pow(z12, 2) * pow(z34, 7) +
           2268 * z12 * pow(z34, 8) + 162 * pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 14));
}