#include <tgmath.h>

double two_e_int_7_4_3_1_0_2_0_11_0_1(double z12, double z34) {
  return (10368 * (21 * pow(z12, 5) + 210 * pow(z12, 4) * z34 + 120 * pow(z12, 3) * pow(z34, 2) +
                   45 * pow(z12, 2) * pow(z34, 3) + 10 * z12 * pow(z34, 4) + pow(z34, 5))) /
         (sqrt(35) * pow(z12, 5) * pow(z34, 2) * pow(z12 + z34, 10));
}