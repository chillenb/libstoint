#include <tgmath.h>

double two_e_int_8_6_3_3_1_3_1_1_11_11(double z12, double z34) {
  return (13824 * sqrt(14) *
          (297 * pow(z12, 8) + 3861 * pow(z12, 7) * z34 + 22616 * pow(z12, 6) * pow(z34, 2) +
           77792 * pow(z12, 5) * pow(z34, 3) + 45240 * pow(z12, 4) * pow(z34, 4) + 18551 * pow(z12, 3) * pow(z34, 5) +
           5123 * pow(z12, 2) * pow(z34, 6) + 858 * z12 * pow(z34, 7) + 66 * pow(z34, 8))) /
         (11. * pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 13));
}