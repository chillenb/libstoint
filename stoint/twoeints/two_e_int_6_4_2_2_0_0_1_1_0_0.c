#include <tgmath.h>

double two_e_int_6_4_2_2_0_0_1_1_0_0(double z12, double z34) {
  return (1440 * (3 * pow(z12, 8) + 27 * pow(z12, 7) * z34 + 108 * pow(z12, 6) * pow(z34, 2) +
                  252 * pow(z12, 5) * pow(z34, 3) + 252 * pow(z12, 4) * pow(z34, 4) + 168 * pow(z12, 3) * pow(z34, 5) +
                  72 * pow(z12, 2) * pow(z34, 6) + 18 * z12 * pow(z34, 7) + 2 * pow(z34, 8))) /
         (pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 9));
}