#include <tgmath.h>

double two_e_int_6_6_3_1_3_1_3_0_22_1(double z12, double z34) {
  return (134400 * sqrt(3) * (pow(z12, 2) + 11 * z12 * z34 + pow(z34, 2))) /
         (pow(z12, 2) * pow(z34, 2) * pow(z12 + z34, 11));
}