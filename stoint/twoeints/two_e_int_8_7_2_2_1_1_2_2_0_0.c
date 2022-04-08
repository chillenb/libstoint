#include <tgmath.h>

double two_e_int_8_7_2_2_1_1_2_2_0_0(double z12, double z34) {
  return (103680 * (280 * pow(z12, 13) + 3920 * pow(z12, 12) * z34 + 25384 * pow(z12, 11) * pow(z34, 2) +
                    100576 * pow(z12, 10) * pow(z34, 3) + 271544 * pow(z12, 9) * pow(z34, 4) +
                    525616 * pow(z12, 8) * pow(z34, 5) + 744744 * pow(z12, 7) * pow(z34, 6) +
                    687687 * pow(z12, 6) * pow(z34, 7) + 473018 * pow(z12, 5) * pow(z34, 8) +
                    240877 * pow(z12, 4) * pow(z34, 9) + 88508 * pow(z12, 3) * pow(z34, 10) +
                    22247 * pow(z12, 2) * pow(z34, 11) + 3430 * z12 * pow(z34, 12) + 245 * pow(z34, 13))) /
         (pow(z12, 8) * pow(z34, 7) * pow(z12 + z34, 14));
}