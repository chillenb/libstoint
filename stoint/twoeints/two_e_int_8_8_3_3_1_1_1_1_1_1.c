#include <tgmath.h>

double two_e_int_8_8_3_3_1_1_1_1_1_1(double z12, double z34) {
  return (5806080 * (35 * pow(z12, 14) + 525 * pow(z12, 13) * z34 + 3672 * pow(z12, 12) * pow(z34, 2) +
                     15880 * pow(z12, 11) * pow(z34, 3) + 47460 * pow(z12, 10) * pow(z34, 4) +
                     103740 * pow(z12, 9) * pow(z34, 5) + 171080 * pow(z12, 8) * pow(z34, 6) +
                     216216 * pow(z12, 7) * pow(z34, 7) + 171080 * pow(z12, 6) * pow(z34, 8) +
                     103740 * pow(z12, 5) * pow(z34, 9) + 47460 * pow(z12, 4) * pow(z34, 10) +
                     15880 * pow(z12, 3) * pow(z34, 11) + 3672 * pow(z12, 2) * pow(z34, 12) + 525 * z12 * pow(z34, 13) +
                     35 * pow(z34, 14))) /
         (pow(z12, 8) * pow(z34, 8) * pow(z12 + z34, 15));
}