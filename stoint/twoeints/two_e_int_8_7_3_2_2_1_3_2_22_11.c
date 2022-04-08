#include <tgmath.h>

double two_e_int_8_7_3_2_2_1_3_2_22_11(double z12, double z34) {
  return (-207360 * sqrt(4.285714285714286) *
          (42 * pow(z12, 11) + 588 * pow(z12, 10) * z34 + 3833 * pow(z12, 9) * pow(z34, 2) +
           15442 * pow(z12, 8) * pow(z34, 3) + 43043 * pow(z12, 7) * pow(z34, 4) + 88088 * pow(z12, 6) * pow(z34, 5) +
           57512 * pow(z12, 5) * pow(z34, 6) + 28392 * pow(z12, 4) * pow(z34, 7) + 10248 * pow(z12, 3) * pow(z34, 8) +
           2552 * pow(z12, 2) * pow(z34, 9) + 392 * z12 * pow(z34, 10) + 28 * pow(z34, 11))) /
         (pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 14));
}