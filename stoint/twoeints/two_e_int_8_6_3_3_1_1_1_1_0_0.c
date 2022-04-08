#include <tgmath.h>

double two_e_int_8_6_3_3_1_1_1_1_0_0(double z12, double z34) {
  return (48384 *
          (100 * pow(z12, 12) + 1300 * pow(z12, 11) * z34 + 7836 * pow(z12, 10) * pow(z34, 2) +
           29068 * pow(z12, 9) * pow(z34, 3) + 74308 * pow(z12, 8) * pow(z34, 4) + 138996 * pow(z12, 7) * pow(z34, 5) +
           134420 * pow(z12, 6) * pow(z34, 6) + 98813 * pow(z12, 5) * pow(z34, 7) + 54249 * pow(z12, 4) * pow(z34, 8) +
           21554 * pow(z12, 3) * pow(z34, 9) + 5858 * pow(z12, 2) * pow(z34, 10) + 975 * z12 * pow(z34, 11) +
           75 * pow(z34, 12))) /
         (pow(z12, 8) * pow(z34, 6) * pow(z12 + z34, 13));
}