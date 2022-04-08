#include <tgmath.h>

double two_e_int_7_7_2_2_1_1_0_0_1_1(double z12, double z34) {
  return (20736 *
          (175 * pow(z12, 12) + 2275 * pow(z12, 11) * z34 + 13626 * pow(z12, 10) * pow(z34, 2) +
           49738 * pow(z12, 9) * pow(z34, 3) + 123253 * pow(z12, 8) * pow(z34, 4) + 218361 * pow(z12, 7) * pow(z34, 5) +
           283140 * pow(z12, 6) * pow(z34, 6) + 218361 * pow(z12, 5) * pow(z34, 7) +
           123253 * pow(z12, 4) * pow(z34, 8) + 49738 * pow(z12, 3) * pow(z34, 9) + 13626 * pow(z12, 2) * pow(z34, 10) +
           2275 * z12 * pow(z34, 11) + 175 * pow(z34, 12))) /
         (pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 13));
}