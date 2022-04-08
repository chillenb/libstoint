#include <tgmath.h>

double two_e_int_8_6_3_1_2_2_0_11_1_2(double z12, double z34) {
  return (23040 * sqrt(0.8571428571428571) *
          (81 * pow(z12, 8) + 1053 * pow(z12, 7) * z34 + 6868 * pow(z12, 6) * pow(z34, 2) +
           30316 * pow(z12, 5) * pow(z34, 3) + 14820 * pow(z12, 4) * pow(z34, 4) + 5473 * pow(z12, 3) * pow(z34, 5) +
           1429 * pow(z12, 2) * pow(z34, 6) + 234 * z12 * pow(z34, 7) + 18 * pow(z34, 8))) /
         (pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 13));
}