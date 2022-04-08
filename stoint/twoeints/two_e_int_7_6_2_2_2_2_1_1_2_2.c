#include <tgmath.h>

double two_e_int_7_6_2_2_2_2_1_1_2_2(double z12, double z34) {
  return (5760 * (735 * pow(z12, 11) + 8820 * pow(z12, 10) * z34 + 48402 * pow(z12, 9) * pow(z34, 2) +
                  160404 * pow(z12, 8) * pow(z34, 3) + 356257 * pow(z12, 7) * pow(z34, 4) +
                  553080 * pow(z12, 6) * pow(z34, 5) + 487440 * pow(z12, 5) * pow(z34, 6) +
                  308602 * pow(z12, 4) * pow(z34, 7) + 138024 * pow(z12, 3) * pow(z34, 8) +
                  41532 * pow(z12, 2) * pow(z34, 9) + 7560 * z12 * pow(z34, 10) + 630 * pow(z34, 11))) /
         (7. * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 12));
}