#include <tgmath.h>

double two_e_int_8_8_3_3_3_3_1_3_0_22(double z12, double z34) {
  return (9676800 * sqrt(2) *
          (286 * pow(z12, 10) + 4290 * pow(z12, 9) * z34 + 29679 * pow(z12, 8) * pow(z34, 2) +
           124865 * pow(z12, 7) * pow(z34, 3) + 343735 * pow(z12, 6) * pow(z34, 4) +
           552153 * pow(z12, 5) * pow(z34, 5) + 343735 * pow(z12, 4) * pow(z34, 6) +
           124865 * pow(z12, 3) * pow(z34, 7) + 29679 * pow(z12, 2) * pow(z34, 8) + 4290 * z12 * pow(z34, 9) +
           286 * pow(z34, 10))) /
         (143. * pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 15));
}