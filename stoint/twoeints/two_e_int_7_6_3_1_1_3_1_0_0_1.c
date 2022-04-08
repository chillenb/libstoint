#include <tgmath.h>

double two_e_int_7_6_3_1_1_3_1_0_0_1(double z12, double z34) {
  return (2304 * (648 * pow(z12, 7) + 7776 * pow(z12, 6) * z34 + 49643 * pow(z12, 5) * pow(z34, 2) +
                  225060 * pow(z12, 4) * pow(z34, 3) + 78360 * pow(z12, 3) * pow(z34, 4) +
                  20258 * pow(z12, 2) * pow(z34, 5) + 3456 * z12 * pow(z34, 6) + 288 * pow(z34, 7))) /
         (5. * pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 12));
}