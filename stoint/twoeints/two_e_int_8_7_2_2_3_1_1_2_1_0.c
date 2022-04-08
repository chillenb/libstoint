#include <tgmath.h>

double two_e_int_8_7_2_2_3_1_1_2_1_0(double z12, double z34) {
  return (69120 * (432 * pow(z12, 9) + 6048 * pow(z12, 8) * z34 + 38212 * pow(z12, 7) * pow(z34, 2) +
                   141848 * pow(z12, 6) * pow(z34, 3) + 332332 * pow(z12, 5) * pow(z34, 4) +
                   191191 * pow(z12, 4) * pow(z34, 5) + 74774 * pow(z12, 3) * pow(z34, 6) +
                   19381 * pow(z12, 2) * pow(z34, 7) + 3024 * z12 * pow(z34, 8) + 216 * pow(z34, 9))) /
         (sqrt(7) * pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 14));
}