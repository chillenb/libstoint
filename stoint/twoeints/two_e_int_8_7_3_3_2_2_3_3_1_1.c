#include <tgmath.h>

double two_e_int_8_7_3_3_2_2_3_3_1_1(double z12, double z34) {
  return (518400 *
          (56 * pow(z12, 13) + 784 * pow(z12, 12) * z34 + 5088 * pow(z12, 11) * pow(z34, 2) +
           20272 * pow(z12, 10) * pow(z34, 3) + 55296 * pow(z12, 9) * pow(z34, 4) + 108752 * pow(z12, 8) * pow(z34, 5) +
           157248 * pow(z12, 7) * pow(z34, 6) + 142415 * pow(z12, 6) * pow(z34, 7) + 96530 * pow(z12, 5) * pow(z34, 8) +
           48677 * pow(z12, 4) * pow(z34, 9) + 17780 * pow(z12, 3) * pow(z34, 10) + 4455 * pow(z12, 2) * pow(z34, 11) +
           686 * z12 * pow(z34, 12) + 49 * pow(z34, 13))) /
         (pow(z12, 8) * pow(z34, 7) * pow(z12 + z34, 14));
}