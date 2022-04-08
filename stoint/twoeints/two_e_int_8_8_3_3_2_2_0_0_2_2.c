#include <tgmath.h>

double two_e_int_8_8_3_3_2_2_0_0_2_2(double z12, double z34) {
  return (4147200 * (49 * pow(z12, 14) + 735 * pow(z12, 13) * z34 + 5137 * pow(z12, 12) * pow(z34, 2) +
                     22175 * pow(z12, 11) * pow(z34, 3) + 66051 * pow(z12, 10) * pow(z34, 4) +
                     143597 * pow(z12, 9) * pow(z34, 5) + 234955 * pow(z12, 8) * pow(z34, 6) +
                     294021 * pow(z12, 7) * pow(z34, 7) + 234955 * pow(z12, 6) * pow(z34, 8) +
                     143597 * pow(z12, 5) * pow(z34, 9) + 66051 * pow(z12, 4) * pow(z34, 10) +
                     22175 * pow(z12, 3) * pow(z34, 11) + 5137 * pow(z12, 2) * pow(z34, 12) + 735 * z12 * pow(z34, 13) +
                     49 * pow(z34, 14))) /
         (pow(z12, 8) * pow(z34, 8) * pow(z12 + z34, 15));
}