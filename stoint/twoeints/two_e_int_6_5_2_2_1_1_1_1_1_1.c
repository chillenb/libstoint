#include <tgmath.h>

double two_e_int_6_5_2_2_1_1_1_1_1_1(double z12, double z34) {
  return (288 * (60 * pow(z12, 9) + 600 * pow(z12, 8) * z34 + 2692 * pow(z12, 7) * pow(z34, 2) +
                 7120 * pow(z12, 6) * pow(z34, 3) + 12240 * pow(z12, 5) * pow(z34, 4) +
                 10365 * pow(z12, 4) * pow(z34, 5) + 5970 * pow(z12, 3) * pow(z34, 6) +
                 2247 * pow(z12, 2) * pow(z34, 7) + 500 * z12 * pow(z34, 8) + 50 * pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 10));
}