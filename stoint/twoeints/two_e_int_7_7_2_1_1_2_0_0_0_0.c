#include <tgmath.h>

double two_e_int_7_7_2_1_1_2_0_0_0_0(double z12, double z34) {
  return (23040 * (392 * pow(z12, 10) + 5096 * pow(z12, 9) * z34 + 31305 * pow(z12, 8) * pow(z34, 2) +
                   121589 * pow(z12, 7) * pow(z34, 3) + 337142 * pow(z12, 6) * pow(z34, 4) +
                   712998 * pow(z12, 5) * pow(z34, 5) + 337142 * pow(z12, 4) * pow(z34, 6) +
                   121589 * pow(z12, 3) * pow(z34, 7) + 31305 * pow(z12, 2) * pow(z34, 8) + 5096 * z12 * pow(z34, 9) +
                   392 * pow(z34, 10))) /
         (7. * pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 13));
}