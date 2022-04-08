#include <tgmath.h>

double two_e_int_8_6_3_3_2_2_3_3_0_0(double z12, double z34) {
  return (57600 * (924 * pow(z12, 12) + 12012 * pow(z12, 11) * z34 + 71676 * pow(z12, 10) * pow(z34, 2) +
                   259116 * pow(z12, 9) * pow(z34, 3) + 632148 * pow(z12, 8) * pow(z34, 4) +
                   1106820 * pow(z12, 7) * pow(z34, 5) + 1134692 * pow(z12, 6) * pow(z34, 6) +
                   868127 * pow(z12, 5) * pow(z34, 7) + 488739 * pow(z12, 4) * pow(z34, 8) +
                   197054 * pow(z12, 3) * pow(z34, 9) + 53966 * pow(z12, 2) * pow(z34, 10) + 9009 * z12 * pow(z34, 11) +
                   693 * pow(z34, 12))) /
         (11. * pow(z12, 8) * pow(z34, 6) * pow(z12 + z34, 13));
}