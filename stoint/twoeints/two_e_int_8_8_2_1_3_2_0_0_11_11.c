#include <tgmath.h>

double two_e_int_8_8_2_1_3_2_0_0_11_11(double z12, double z34) {
  return (2488320 * sqrt(0.8571428571428571) *
          (28 * pow(z12, 12) + 420 * pow(z12, 11) * z34 + 2951 * pow(z12, 10) * pow(z34, 2) +
           12905 * pow(z12, 9) * pow(z34, 3) + 39375 * pow(z12, 8) * pow(z34, 4) + 89089 * pow(z12, 7) * pow(z34, 5) +
           155155 * pow(z12, 6) * pow(z34, 6) + 89089 * pow(z12, 5) * pow(z34, 7) + 39375 * pow(z12, 4) * pow(z34, 8) +
           12905 * pow(z12, 3) * pow(z34, 9) + 2951 * pow(z12, 2) * pow(z34, 10) + 420 * z12 * pow(z34, 11) +
           28 * pow(z34, 12))) /
         (pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 15));
}