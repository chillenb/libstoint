#include <tgmath.h>

double two_e_int_7_6_2_1_1_2_0_11_1_2(double z12, double z34) {
  return (1152 * sqrt(6) *
          (392 * pow(z12, 9) + 4704 * pow(z12, 8) * z34 + 26412 * pow(z12, 7) * pow(z34, 2) +
           92720 * pow(z12, 6) * pow(z34, 3) + 229680 * pow(z12, 5) * pow(z34, 4) + 131967 * pow(z12, 4) * pow(z34, 5) +
           55844 * pow(z12, 3) * pow(z34, 6) + 16332 * pow(z12, 2) * pow(z34, 7) + 2940 * z12 * pow(z34, 8) +
           245 * pow(z34, 9))) /
         (7. * pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 12));
}