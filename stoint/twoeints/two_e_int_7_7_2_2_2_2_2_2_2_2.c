#include <tgmath.h>

double two_e_int_7_7_2_2_2_2_2_2_2_2(double z12, double z34) {
  return (11520 * (2205 * pow(z12, 12) + 28665 * pow(z12, 11) * z34 + 172422 * pow(z12, 10) * pow(z34, 2) +
                   636246 * pow(z12, 9) * pow(z34, 3) + 1610381 * pow(z12, 8) * pow(z34, 4) +
                   2962817 * pow(z12, 7) * pow(z34, 5) + 4101240 * pow(z12, 6) * pow(z34, 6) +
                   2962817 * pow(z12, 5) * pow(z34, 7) + 1610381 * pow(z12, 4) * pow(z34, 8) +
                   636246 * pow(z12, 3) * pow(z34, 9) + 172422 * pow(z12, 2) * pow(z34, 10) +
                   28665 * z12 * pow(z34, 11) + 2205 * pow(z34, 12))) /
         (7. * pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 13));
}