#include <tgmath.h>

double two_e_int_8_7_3_3_2_2_0_0_1_1(double z12, double z34) {
  return (103680 * (280 * pow(z12, 13) + 3920 * pow(z12, 12) * z34 + 25512 * pow(z12, 11) * pow(z34, 2) +
                    102368 * pow(z12, 10) * pow(z34, 3) + 282872 * pow(z12, 9) * pow(z34, 4) +
                    567728 * pow(z12, 8) * pow(z34, 5) + 843752 * pow(z12, 7) * pow(z34, 6) +
                    744471 * pow(z12, 6) * pow(z34, 7) + 495194 * pow(z12, 5) * pow(z34, 8) +
                    246621 * pow(z12, 4) * pow(z34, 9) + 89404 * pow(z12, 3) * pow(z34, 10) +
                    22311 * pow(z12, 2) * pow(z34, 11) + 3430 * z12 * pow(z34, 12) + 245 * pow(z34, 13))) /
         (pow(z12, 8) * pow(z34, 7) * pow(z12 + z34, 14));
}