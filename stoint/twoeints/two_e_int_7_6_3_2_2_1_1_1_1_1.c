#include <tgmath.h>

double two_e_int_7_6_3_2_2_1_1_1_1_1(double z12, double z34) {
  return (6912 * sqrt(0.2857142857142857) *
          (56 * pow(z12, 9) + 672 * pow(z12, 8) * z34 + 3666 * pow(z12, 7) * pow(z34, 2) +
           11960 * pow(z12, 6) * pow(z34, 3) + 25740 * pow(z12, 5) * pow(z34, 4) + 16731 * pow(z12, 4) * pow(z34, 5) +
           7592 * pow(z12, 3) * pow(z34, 6) + 2301 * pow(z12, 2) * pow(z34, 7) + 420 * z12 * pow(z34, 8) +
           35 * pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 12));
}