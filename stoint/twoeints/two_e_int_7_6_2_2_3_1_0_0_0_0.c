#include <tgmath.h>

double two_e_int_7_6_2_2_3_1_0_0_0_0(double z12, double z34) {
  return (4608 * sqrt(0.42857142857142855) *
          (81 * pow(z12, 7) + 972 * pow(z12, 6) * z34 + 6446 * pow(z12, 5) * pow(z34, 2) +
           31020 * pow(z12, 4) * pow(z34, 3) + 10320 * pow(z12, 3) * pow(z34, 4) + 2576 * pow(z12, 2) * pow(z34, 5) +
           432 * z12 * pow(z34, 6) + 36 * pow(z34, 7))) /
         (pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 12));
}