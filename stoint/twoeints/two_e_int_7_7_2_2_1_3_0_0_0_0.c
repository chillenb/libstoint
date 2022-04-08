#include <tgmath.h>

double two_e_int_7_7_2_2_1_3_0_0_0_0(double z12, double z34) {
  return (18432 * sqrt(0.42857142857142855) *
          (81 * pow(z12, 8) + 1053 * pow(z12, 7) * z34 + 6868 * pow(z12, 6) * pow(z34, 2) +
           30316 * pow(z12, 5) * pow(z34, 3) + 100815 * pow(z12, 4) * pow(z34, 4) + 30316 * pow(z12, 3) * pow(z34, 5) +
           6868 * pow(z12, 2) * pow(z34, 6) + 1053 * z12 * pow(z34, 7) + 81 * pow(z34, 8))) /
         (pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 13));
}