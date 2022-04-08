#include <tgmath.h>

double two_e_int_8_6_2_1_2_1_1_0_11_0(double z12, double z34) {
  return (-20736 *
          (588 * pow(z12, 10) + 7644 * pow(z12, 9) * z34 + 48504 * pow(z12, 8) * pow(z34, 2) +
           202488 * pow(z12, 7) * pow(z34, 3) + 626340 * pow(z12, 6) * pow(z34, 4) +
           397683 * pow(z12, 5) * pow(z34, 5) + 197639 * pow(z12, 4) * pow(z34, 6) + 73814 * pow(z12, 3) * pow(z34, 7) +
           19398 * pow(z12, 2) * pow(z34, 8) + 3185 * z12 * pow(z34, 9) + 245 * pow(z34, 10))) /
         (7. * pow(z12, 7) * pow(z34, 5) * pow(z12 + z34, 13));
}