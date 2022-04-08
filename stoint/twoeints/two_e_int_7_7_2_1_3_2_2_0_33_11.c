#include <tgmath.h>

double two_e_int_7_7_2_1_3_2_2_0_33_11(double z12, double z34) {
  return (1036800 * sqrt(2.142857142857143) *
          (pow(z12, 6) + 13 * pow(z12, 5) * z34 + 78 * pow(z12, 4) * pow(z34, 2) + 286 * pow(z12, 3) * pow(z34, 3) +
           78 * pow(z12, 2) * pow(z34, 4) + 13 * z12 * pow(z34, 5) + pow(z34, 6))) /
         (pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 13));
}