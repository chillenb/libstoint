#include <tgmath.h>

double two_e_int_7_6_2_2_2_2_0_11_11_0(double z12, double z34) {
  return (34560 * (9 * pow(z12, 7) + 108 * pow(z12, 6) * z34 + 1144 * pow(z12, 5) * pow(z34, 2) +
                   8580 * pow(z12, 4) * pow(z34, 3) + 2080 * pow(z12, 3) * pow(z34, 4) +
                   364 * pow(z12, 2) * pow(z34, 5) + 48 * z12 * pow(z34, 6) + 4 * pow(z34, 7))) /
         (7. * pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 12));
}