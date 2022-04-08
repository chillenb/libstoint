#include <tgmath.h>

double two_e_int_7_4_3_1_1_1_1_0_0_1(double z12, double z34) {
  return (20736 * sqrt(0.2857142857142857) *
          (21 * pow(z12, 5) + 210 * pow(z12, 4) * z34 + 120 * pow(z12, 3) * pow(z34, 2) +
           45 * pow(z12, 2) * pow(z34, 3) + 10 * z12 * pow(z34, 4) + pow(z34, 5))) /
         (5. * pow(z12, 5) * pow(z34, 2) * pow(z12 + z34, 10));
}