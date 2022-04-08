#include <tgmath.h>

double two_e_int_7_7_2_1_1_2_1_0_0_1(double z12, double z34) {
  return (138240 *
          (49 * pow(z12, 10) + 637 * pow(z12, 9) * z34 + 3930 * pow(z12, 8) * pow(z34, 2) +
           15418 * pow(z12, 7) * pow(z34, 3) + 43459 * pow(z12, 6) * pow(z34, 4) + 93951 * pow(z12, 5) * pow(z34, 5) +
           43459 * pow(z12, 4) * pow(z34, 6) + 15418 * pow(z12, 3) * pow(z34, 7) + 3930 * pow(z12, 2) * pow(z34, 8) +
           637 * z12 * pow(z34, 9) + 49 * pow(z34, 10))) /
         (7. * pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 13));
}