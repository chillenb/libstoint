#include <tgmath.h>

double two_e_int_7_7_2_2_2_2_1_1_22_22(double z12, double z34) {
  return (11520 * (2205 * pow(z12, 12) + 28665 * pow(z12, 11) * z34 + 171774 * pow(z12, 10) * pow(z34, 2) +
                   627822 * pow(z12, 9) * pow(z34, 3) + 1559287 * pow(z12, 8) * pow(z34, 4) +
                   2770339 * pow(z12, 7) * pow(z34, 5) + 3595020 * pow(z12, 6) * pow(z34, 6) +
                   2770339 * pow(z12, 5) * pow(z34, 7) + 1559287 * pow(z12, 4) * pow(z34, 8) +
                   627822 * pow(z12, 3) * pow(z34, 9) + 171774 * pow(z12, 2) * pow(z34, 10) +
                   28665 * z12 * pow(z34, 11) + 2205 * pow(z34, 12))) /
         (7. * pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 13));
}