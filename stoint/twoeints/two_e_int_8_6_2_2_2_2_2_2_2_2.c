#include <tgmath.h>

double two_e_int_8_6_2_2_2_2_2_2_2_2(double z12, double z34) {
  return (172800 *
          (196 * pow(z12, 12) + 2548 * pow(z12, 11) * z34 + 15360 * pow(z12, 10) * pow(z34, 2) +
           56992 * pow(z12, 9) * pow(z34, 3) + 145800 * pow(z12, 8) * pow(z34, 4) + 273416 * pow(z12, 7) * pow(z34, 5) +
           263848 * pow(z12, 6) * pow(z34, 6) + 193791 * pow(z12, 5) * pow(z34, 7) +
           106355 * pow(z12, 4) * pow(z34, 8) + 42250 * pow(z12, 3) * pow(z34, 9) + 11482 * pow(z12, 2) * pow(z34, 10) +
           1911 * z12 * pow(z34, 11) + 147 * pow(z34, 12))) /
         (7. * pow(z12, 8) * pow(z34, 6) * pow(z12 + z34, 13));
}