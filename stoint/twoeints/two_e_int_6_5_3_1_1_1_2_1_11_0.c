#include <tgmath.h>

double two_e_int_6_5_3_1_1_1_2_1_11_0(double z12, double z34) {
  return (-864 * sqrt(2.8) *
          (8 * pow(z12, 5) + 80 * pow(z12, 4) * z34 + 360 * pow(z12, 3) * pow(z34, 2) +
           135 * pow(z12, 2) * pow(z34, 3) + 30 * z12 * pow(z34, 4) + 3 * pow(z34, 5))) /
         (pow(z12, 4) * pow(z34, 3) * pow(z12 + z34, 10));
}