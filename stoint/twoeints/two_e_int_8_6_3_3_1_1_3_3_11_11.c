#include <tgmath.h>

double two_e_int_8_6_3_3_1_1_3_3_11_11(double z12, double z34) {
  return (80640 *
          (60 * pow(z12, 12) + 780 * pow(z12, 11) * z34 + 4698 * pow(z12, 10) * pow(z34, 2) +
           17394 * pow(z12, 9) * pow(z34, 3) + 44304 * pow(z12, 8) * pow(z34, 4) + 82368 * pow(z12, 7) * pow(z34, 5) +
           80080 * pow(z12, 6) * pow(z34, 6) + 59059 * pow(z12, 5) * pow(z34, 7) + 32487 * pow(z12, 4) * pow(z34, 8) +
           12922 * pow(z12, 3) * pow(z34, 9) + 3514 * pow(z12, 2) * pow(z34, 10) + 585 * z12 * pow(z34, 11) +
           45 * pow(z34, 12))) /
         (pow(z12, 8) * pow(z34, 6) * pow(z12 + z34, 13));
}