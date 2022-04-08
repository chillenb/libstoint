#include <tgmath.h>

double two_e_int_8_8_3_3_3_3_2_33_33_2(double z12, double z34) {
  return (71124480000 * (pow(z12, 2) + 15 * z12 * z34 + pow(z34, 2))) /
         (13. * pow(z12, 2) * pow(z34, 2) * pow(z12 + z34, 15));
}