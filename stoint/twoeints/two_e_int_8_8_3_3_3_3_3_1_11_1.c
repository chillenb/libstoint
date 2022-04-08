#include <tgmath.h>

double two_e_int_8_8_3_3_3_3_3_1_11_1(double z12, double z34) {
  return (7741440 * sqrt(15) *
          (143 * pow(z12, 10) + 2145 * pow(z12, 9) * z34 + 14430 * pow(z12, 8) * pow(z34, 2) +
           56290 * pow(z12, 7) * pow(z34, 3) + 139895 * pow(z12, 6) * pow(z34, 4) + 255129 * pow(z12, 5) * pow(z34, 5) +
           139895 * pow(z12, 4) * pow(z34, 6) + 56290 * pow(z12, 3) * pow(z34, 7) + 14430 * pow(z12, 2) * pow(z34, 8) +
           2145 * z12 * pow(z34, 9) + 143 * pow(z34, 10))) /
         (143. * pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 15));
}