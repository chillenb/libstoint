#include <tgmath.h>

double two_e_int_7_5_3_2_1_2_1_1_0_0(double z12, double z34) {
  return (2304 * sqrt(0.8571428571428571) *
          (28 * pow(z12, 8) + 308 * pow(z12, 7) * z34 + 1585 * pow(z12, 6) * pow(z34, 2) +
           5115 * pow(z12, 5) * pow(z34, 3) + 3465 * pow(z12, 4) * pow(z34, 4) + 1683 * pow(z12, 3) * pow(z34, 5) +
           553 * pow(z12, 2) * pow(z34, 6) + 110 * z12 * pow(z34, 7) + 10 * pow(z34, 8))) /
         (pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 11));
}