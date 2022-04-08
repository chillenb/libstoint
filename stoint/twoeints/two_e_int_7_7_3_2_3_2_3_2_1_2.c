#include <tgmath.h>

double two_e_int_7_7_3_2_3_2_3_2_1_2(double z12, double z34) {
  return (-138240 * sqrt(15) *
          (11 * pow(z12, 10) + 143 * pow(z12, 9) * z34 + 880 * pow(z12, 8) * pow(z34, 2) +
           3432 * pow(z12, 7) * pow(z34, 3) + 9606 * pow(z12, 6) * pow(z34, 4) + 20774 * pow(z12, 5) * pow(z34, 5) +
           9606 * pow(z12, 4) * pow(z34, 6) + 3432 * pow(z12, 3) * pow(z34, 7) + 880 * pow(z12, 2) * pow(z34, 8) +
           143 * z12 * pow(z34, 9) + 11 * pow(z34, 10))) /
         (11. * pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 13));
}