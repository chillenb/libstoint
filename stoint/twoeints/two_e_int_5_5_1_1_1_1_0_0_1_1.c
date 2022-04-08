#include <tgmath.h>

double two_e_int_5_5_1_1_1_1_0_0_1_1(double z12, double z34) {
  return (576 *
          (25 * pow(z12, 8) + 225 * pow(z12, 7) * z34 + 893 * pow(z12, 6) * pow(z34, 2) +
           2037 * pow(z12, 5) * pow(z34, 3) + 2898 * pow(z12, 4) * pow(z34, 4) + 2037 * pow(z12, 3) * pow(z34, 5) +
           893 * pow(z12, 2) * pow(z34, 6) + 225 * z12 * pow(z34, 7) + 25 * pow(z34, 8))) /
         (5. * pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 9));
}