#include <tgmath.h>

double two_e_int_6_3_2_1_0_1_0_1_0_11(double z12, double z34) {
  return (48 * (35 * pow(z12, 5) + 280 * pow(z12, 4) * z34 + 224 * pow(z12, 3) * pow(z34, 2) +
                112 * pow(z12, 2) * pow(z34, 3) + 32 * z12 * pow(z34, 4) + 4 * pow(z34, 5))) /
         (sqrt(5) * pow(z12, 5) * pow(z34, 2) * pow(z12 + z34, 8));
}