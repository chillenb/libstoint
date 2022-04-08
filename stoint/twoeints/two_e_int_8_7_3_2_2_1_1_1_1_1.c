#include <tgmath.h>

double two_e_int_8_7_3_2_2_1_1_1_1_1(double z12, double z34) {
  return (207360 * sqrt(0.2857142857142857) *
          (84 * pow(z12, 11) + 1176 * pow(z12, 10) * z34 + 7611 * pow(z12, 9) * pow(z34, 2) +
           30114 * pow(z12, 8) * pow(z34, 3) + 81081 * pow(z12, 7) * pow(z34, 4) + 156156 * pow(z12, 6) * pow(z34, 5) +
           107744 * pow(z12, 5) * pow(z34, 6) + 54964 * pow(z12, 4) * pow(z34, 7) + 20216 * pow(z12, 3) * pow(z34, 8) +
           5084 * pow(z12, 2) * pow(z34, 9) + 784 * z12 * pow(z34, 10) + 56 * pow(z34, 11))) /
         (pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 14));
}