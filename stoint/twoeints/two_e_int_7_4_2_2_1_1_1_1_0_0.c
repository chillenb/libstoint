#include <tgmath.h>

double two_e_int_7_4_2_2_1_1_1_1_0_0(double z12, double z34) {
  return (864 * (245 * pow(z12, 9) + 2450 * pow(z12, 8) * z34 + 11193 * pow(z12, 7) * pow(z34, 2) +
                 31080 * pow(z12, 6) * pow(z34, 3) + 36240 * pow(z12, 5) * pow(z34, 4) +
                 29760 * pow(z12, 4) * pow(z34, 5) + 16880 * pow(z12, 3) * pow(z34, 6) +
                 6308 * pow(z12, 2) * pow(z34, 7) + 1400 * z12 * pow(z34, 8) + 140 * pow(z34, 9))) /
         (7. * pow(z12, 7) * pow(z34, 4) * pow(z12 + z34, 10));
}