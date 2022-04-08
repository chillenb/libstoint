#include <tgmath.h>

double two_e_int_7_7_2_2_3_1_1_11_11_1(double z12, double z34) {
  return (-9216 * sqrt(0.2857142857142857) *
          (81 * pow(z12, 8) + 1053 * pow(z12, 7) * z34 + 4943 * pow(z12, 6) * pow(z34, 2) +
           5291 * pow(z12, 5) * pow(z34, 3) - 49335 * pow(z12, 4) * pow(z34, 4) + 5291 * pow(z12, 3) * pow(z34, 5) +
           4943 * pow(z12, 2) * pow(z34, 6) + 1053 * z12 * pow(z34, 7) + 81 * pow(z34, 8))) /
         (pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 13));
}