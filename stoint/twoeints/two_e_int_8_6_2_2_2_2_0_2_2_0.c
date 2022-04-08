#include <tgmath.h>

double two_e_int_8_6_2_2_2_2_0_2_2_0(double z12, double z34) {
  return (345600 *
          (36 * pow(z12, 8) + 468 * pow(z12, 7) * z34 + 3138 * pow(z12, 6) * pow(z34, 2) +
           14586 * pow(z12, 5) * pow(z34, 3) + 6890 * pow(z12, 4) * pow(z34, 4) + 2483 * pow(z12, 3) * pow(z34, 5) +
           639 * pow(z12, 2) * pow(z34, 6) + 104 * z12 * pow(z34, 7) + 8 * pow(z34, 8))) /
         (7. * pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 13));
}