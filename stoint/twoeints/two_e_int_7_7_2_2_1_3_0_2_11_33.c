#include <tgmath.h>

double two_e_int_7_7_2_2_1_3_0_2_11_33(double z12, double z34) {
  return (-4608 * sqrt(0.7142857142857143) *
          (324 * pow(z12, 8) + 4212 * pow(z12, 7) * z34 + 25547 * pow(z12, 6) * pow(z34, 2) +
           96239 * pow(z12, 5) * pow(z34, 3) + 253110 * pow(z12, 4) * pow(z34, 4) + 96239 * pow(z12, 3) * pow(z34, 5) +
           25547 * pow(z12, 2) * pow(z34, 6) + 4212 * z12 * pow(z34, 7) + 324 * pow(z34, 8))) /
         (pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 13));
}