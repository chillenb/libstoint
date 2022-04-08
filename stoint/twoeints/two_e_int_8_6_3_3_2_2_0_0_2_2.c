#include <tgmath.h>

double two_e_int_8_6_3_3_2_2_0_0_2_2(double z12, double z34) {
  return (11520 * (4620 * pow(z12, 12) + 60060 * pow(z12, 11) * z34 + 358776 * pow(z12, 10) * pow(z34, 2) +
                   1300728 * pow(z12, 9) * pow(z34, 3) + 3183708 * pow(z12, 8) * pow(z34, 4) +
                   5544396 * pow(z12, 7) * pow(z34, 5) + 5708300 * pow(z12, 6) * pow(z34, 6) +
                   4361123 * pow(z12, 5) * pow(z34, 7) + 2450199 * pow(z12, 4) * pow(z34, 8) +
                   986414 * pow(z12, 3) * pow(z34, 9) + 269918 * pow(z12, 2) * pow(z34, 10) +
                   45045 * z12 * pow(z34, 11) + 3465 * pow(z34, 12))) /
         (11. * pow(z12, 8) * pow(z34, 6) * pow(z12 + z34, 13));
}