#include <tgmath.h>

double two_e_int_8_6_3_2_1_2_1_1_11_11(double z12, double z34) {
  return (41472 * sqrt(0.2857142857142857) *
          (84 * pow(z12, 10) + 1092 * pow(z12, 9) * z34 + 6497 * pow(z12, 8) * pow(z34, 2) +
           23309 * pow(z12, 7) * pow(z34, 3) + 55770 * pow(z12, 6) * pow(z34, 4) + 43329 * pow(z12, 5) * pow(z34, 5) +
           24557 * pow(z12, 4) * pow(z34, 6) + 9932 * pow(z12, 3) * pow(z34, 7) + 2724 * pow(z12, 2) * pow(z34, 8) +
           455 * z12 * pow(z34, 9) + 35 * pow(z34, 10))) /
         (pow(z12, 7) * pow(z34, 5) * pow(z12 + z34, 13));
}