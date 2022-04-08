#include <tgmath.h>

double two_e_int_8_6_3_3_2_2_0_0_0_0(double z12, double z34) {
  return (11520 * (4620 * pow(z12, 12) + 60060 * pow(z12, 11) * z34 + 361944 * pow(z12, 10) * pow(z34, 2) +
                   1341912 * pow(z12, 9) * pow(z34, 3) + 3450612 * pow(z12, 8) * pow(z34, 4) +
                   6707844 * pow(z12, 7) * pow(z34, 5) + 6281860 * pow(z12, 6) * pow(z34, 6) +
                   4574167 * pow(z12, 5) * pow(z34, 7) + 2506011 * pow(z12, 4) * pow(z34, 8) +
                   995566 * pow(z12, 3) * pow(z34, 9) + 270622 * pow(z12, 2) * pow(z34, 10) +
                   45045 * z12 * pow(z34, 11) + 3465 * pow(z34, 12))) /
         (11. * pow(z12, 8) * pow(z34, 6) * pow(z12 + z34, 13));
}