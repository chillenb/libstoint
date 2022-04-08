#include <tgmath.h>

double two_e_int_7_7_3_2_2_3_0_1_22_33(double z12, double z34) {
  return (138240 * sqrt(5) *
          (33 * pow(z12, 10) + 429 * pow(z12, 9) * z34 + 2585 * pow(z12, 8) * pow(z34, 2) +
           9581 * pow(z12, 7) * pow(z34, 3) + 24353 * pow(z12, 6) * pow(z34, 4) + 44317 * pow(z12, 5) * pow(z34, 5) +
           24353 * pow(z12, 4) * pow(z34, 6) + 9581 * pow(z12, 3) * pow(z34, 7) + 2585 * pow(z12, 2) * pow(z34, 8) +
           429 * z12 * pow(z34, 9) + 33 * pow(z34, 10))) /
         (11. * pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 13));
}