#include <tgmath.h>

double two_e_int_8_8_3_1_3_1_2_1_11_0(double z12, double z34) {
  return (-829440 * sqrt(5) *
          (36 * pow(z12, 10) + 540 * pow(z12, 9) * z34 + 3725 * pow(z12, 8) * pow(z34, 2) +
           15555 * pow(z12, 7) * pow(z34, 3) + 43365 * pow(z12, 6) * pow(z34, 4) + 83083 * pow(z12, 5) * pow(z34, 5) +
           43365 * pow(z12, 4) * pow(z34, 6) + 15555 * pow(z12, 3) * pow(z34, 7) + 3725 * pow(z12, 2) * pow(z34, 8) +
           540 * z12 * pow(z34, 9) + 36 * pow(z34, 10))) /
         (pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 15));
}