#include <tgmath.h>

double two_e_int_8_7_3_3_3_1_3_1_11_1(double z12, double z34) {
  return (-41472 * sqrt(210) *
          (4 * pow(z12, 9) + 56 * pow(z12, 8) * z34 + 464 * pow(z12, 7) * pow(z34, 2) +
           2856 * pow(z12, 6) * pow(z34, 3) + 13104 * pow(z12, 5) * pow(z34, 4) + 4277 * pow(z12, 4) * pow(z34, 5) +
           1078 * pow(z12, 3) * pow(z34, 6) + 207 * pow(z12, 2) * pow(z34, 7) + 28 * z12 * pow(z34, 8) +
           2 * pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 14));
}