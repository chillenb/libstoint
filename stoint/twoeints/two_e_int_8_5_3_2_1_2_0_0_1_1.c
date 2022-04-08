#include <tgmath.h>

double two_e_int_8_5_3_2_1_2_0_0_1_1(double z12, double z34) {
  return (6912 * (189 * pow(z12, 9) + 2268 * pow(z12, 8) * z34 + 11814 * pow(z12, 7) * pow(z34, 2) +
                  33660 * pow(z12, 6) * pow(z34, 3) + 32120 * pow(z12, 5) * pow(z34, 4) +
                  21219 * pow(z12, 4) * pow(z34, 5) + 9708 * pow(z12, 3) * pow(z34, 6) +
                  2954 * pow(z12, 2) * pow(z34, 7) + 540 * z12 * pow(z34, 8) + 45 * pow(z34, 9))) /
         (sqrt(7) * pow(z12, 7) * pow(z34, 4) * pow(z12 + z34, 12));
}