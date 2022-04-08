#include <tgmath.h>

double two_e_int_7_6_2_1_1_0_1_1_0_0(double z12, double z34) {
  return (8064 * sqrt(15) *
          (8 * pow(z12, 9) + 96 * pow(z12, 8) * z34 + 528 * pow(z12, 7) * pow(z34, 2) +
           1760 * pow(z12, 6) * pow(z34, 3) + 3960 * pow(z12, 5) * pow(z34, 4) + 2475 * pow(z12, 4) * pow(z34, 5) +
           1100 * pow(z12, 3) * pow(z34, 6) + 330 * pow(z12, 2) * pow(z34, 7) + 60 * z12 * pow(z34, 8) +
           5 * pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 12));
}