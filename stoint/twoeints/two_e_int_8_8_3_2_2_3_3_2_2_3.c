#include <tgmath.h>

double two_e_int_8_8_3_2_2_3_3_2_2_3(double z12, double z34) {
  return (1382400 * (891 * pow(z12, 12) + 13365 * pow(z12, 11) * z34 + 93797 * pow(z12, 10) * pow(z34, 2) +
                     409035 * pow(z12, 9) * pow(z34, 3) + 1241690 * pow(z12, 8) * pow(z34, 4) +
                     2786758 * pow(z12, 7) * pow(z34, 5) + 4796610 * pow(z12, 6) * pow(z34, 6) +
                     2786758 * pow(z12, 5) * pow(z34, 7) + 1241690 * pow(z12, 4) * pow(z34, 8) +
                     409035 * pow(z12, 3) * pow(z34, 9) + 93797 * pow(z12, 2) * pow(z34, 10) +
                     13365 * z12 * pow(z34, 11) + 891 * pow(z34, 12))) /
         (11. * pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 15));
}