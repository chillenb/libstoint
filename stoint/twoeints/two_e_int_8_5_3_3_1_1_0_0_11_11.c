#include <tgmath.h>

double two_e_int_8_5_3_3_1_1_0_0_11_11(double z12, double z34) {
  return (8064 *
          (120 * pow(z12, 11) + 1440 * pow(z12, 10) * z34 + 7872 * pow(z12, 9) * pow(z34, 2) +
           25824 * pow(z12, 8) * pow(z34, 3) + 56232 * pow(z12, 7) * pow(z34, 4) + 67320 * pow(z12, 6) * pow(z34, 5) +
           58520 * pow(z12, 5) * pow(z34, 6) + 36861 * pow(z12, 4) * pow(z34, 7) + 16452 * pow(z12, 3) * pow(z34, 8) +
           4946 * pow(z12, 2) * pow(z34, 9) + 900 * z12 * pow(z34, 10) + 75 * pow(z34, 11))) /
         (pow(z12, 8) * pow(z34, 5) * pow(z12 + z34, 12));
}