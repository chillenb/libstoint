#include <tgmath.h>

double two_e_int_8_8_3_2_3_2_0_0_11_11(double z12, double z34) {
  return (552960 * sqrt(2) *
          (891 * pow(z12, 12) + 13365 * pow(z12, 11) * z34 + 93797 * pow(z12, 10) * pow(z34, 2) +
           409035 * pow(z12, 9) * pow(z34, 3) + 1233500 * pow(z12, 8) * pow(z34, 4) +
           2663908 * pow(z12, 7) * pow(z34, 5) + 3936660 * pow(z12, 6) * pow(z34, 6) +
           2663908 * pow(z12, 5) * pow(z34, 7) + 1233500 * pow(z12, 4) * pow(z34, 8) +
           409035 * pow(z12, 3) * pow(z34, 9) + 93797 * pow(z12, 2) * pow(z34, 10) + 13365 * z12 * pow(z34, 11) +
           891 * pow(z34, 12))) /
         (11. * pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 15));
}