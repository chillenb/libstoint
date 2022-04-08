#include <tgmath.h>

double two_e_int_8_8_3_2_2_3_2_1_22_11(double z12, double z34) {
  return (829440 * sqrt(10) *
          (99 * pow(z12, 12) + 1485 * pow(z12, 11) * z34 + 10153 * pow(z12, 10) * pow(z34, 2) +
           41415 * pow(z12, 9) * pow(z34, 3) + 109075 * pow(z12, 8) * pow(z34, 4) + 177437 * pow(z12, 7) * pow(z34, 5) +
           96915 * pow(z12, 6) * pow(z34, 6) + 177437 * pow(z12, 5) * pow(z34, 7) + 109075 * pow(z12, 4) * pow(z34, 8) +
           41415 * pow(z12, 3) * pow(z34, 9) + 10153 * pow(z12, 2) * pow(z34, 10) + 1485 * z12 * pow(z34, 11) +
           99 * pow(z34, 12))) /
         (11. * pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 15));
}