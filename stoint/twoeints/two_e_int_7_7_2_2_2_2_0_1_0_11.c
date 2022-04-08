#include <tgmath.h>

double two_e_int_7_7_2_2_2_2_0_1_0_11(double z12, double z34) {
  return (-138240 *
          (9 * pow(z12, 8) + 117 * pow(z12, 7) * z34 + 977 * pow(z12, 6) * pow(z34, 2) +
           6149 * pow(z12, 5) * pow(z34, 3) + 27885 * pow(z12, 4) * pow(z34, 4) + 6149 * pow(z12, 3) * pow(z34, 5) +
           977 * pow(z12, 2) * pow(z34, 6) + 117 * z12 * pow(z34, 7) + 9 * pow(z34, 8))) /
         (7. * pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 13));
}