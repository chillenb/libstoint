#include <tgmath.h>

double two_e_int_8_6_3_3_2_2_3_3_2_2(double z12, double z34) {
  return (57600 * (924 * pow(z12, 12) + 12012 * pow(z12, 11) * z34 + 72468 * pow(z12, 10) * pow(z34, 2) +
                   269412 * pow(z12, 9) * pow(z34, 3) + 691944 * pow(z12, 8) * pow(z34, 4) +
                   1307592 * pow(z12, 7) * pow(z34, 5) + 1253512 * pow(z12, 6) * pow(z34, 6) +
                   917293 * pow(z12, 5) * pow(z34, 7) + 502377 * pow(z12, 4) * pow(z34, 8) +
                   199342 * pow(z12, 3) * pow(z34, 9) + 54142 * pow(z12, 2) * pow(z34, 10) + 9009 * z12 * pow(z34, 11) +
                   693 * pow(z34, 12))) /
         (11. * pow(z12, 8) * pow(z34, 6) * pow(z12 + z34, 13));
}