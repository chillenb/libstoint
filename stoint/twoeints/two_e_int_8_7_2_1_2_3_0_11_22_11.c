#include <tgmath.h>

double two_e_int_8_7_2_1_2_3_0_11_22_11(double z12, double z34) {
  return (138240 * sqrt(0.42857142857142855) *
          (21 * pow(z12, 11) + 294 * pow(z12, 10) * z34 + 2109 * pow(z12, 9) * pow(z34, 2) +
           10416 * pow(z12, 8) * pow(z34, 3) + 39039 * pow(z12, 7) * pow(z34, 4) + 114114 * pow(z12, 6) * pow(z34, 5) +
           54236 * pow(z12, 5) * pow(z34, 6) + 20566 * pow(z12, 4) * pow(z34, 7) + 6104 * pow(z12, 3) * pow(z34, 8) +
           1346 * pow(z12, 2) * pow(z34, 9) + 196 * z12 * pow(z34, 10) + 14 * pow(z34, 11))) /
         (pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 14));
}