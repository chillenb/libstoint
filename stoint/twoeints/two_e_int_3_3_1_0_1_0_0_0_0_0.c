#include <tgmath.h>

double two_e_int_3_3_1_0_1_0_0_0_0_0(double z12, double z34) {
  return (8 * (pow(z12, 2) + 5 * z12 * z34 + pow(z34, 2))) / (pow(z12, 2) * pow(z34, 2) * pow(z12 + z34, 5));
}