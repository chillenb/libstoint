#include <tgmath.h>

double two_e_int_7_6_2_2_2_2_0_1_11_22(double z12, double z34) {
  return (-11520 * sqrt(6) *
          (27 * pow(z12, 5) + 270 * pow(z12, 4) * z34 + 940 * pow(z12, 3) * pow(z34, 2) +
           490 * pow(z12, 2) * pow(z34, 3) + 120 * z12 * pow(z34, 4) + 12 * pow(z34, 5))) /
         (7. * pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 10));
}