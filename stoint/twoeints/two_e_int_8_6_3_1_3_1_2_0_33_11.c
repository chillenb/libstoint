#include <tgmath.h>

double two_e_int_8_6_3_1_3_1_2_0_33_11(double z12, double z34) {
  return (23040 * sqrt(3) *
          (81 * pow(z12, 8) + 1053 * pow(z12, 7) * z34 + 6098 * pow(z12, 6) * pow(z34, 2) +
           20306 * pow(z12, 5) * pow(z34, 3) + 12090 * pow(z12, 4) * pow(z34, 4) + 5018 * pow(z12, 3) * pow(z34, 5) +
           1394 * pow(z12, 2) * pow(z34, 6) + 234 * z12 * pow(z34, 7) + 18 * pow(z34, 8))) /
         (pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 13));
}