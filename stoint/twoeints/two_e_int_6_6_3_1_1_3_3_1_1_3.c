#include <tgmath.h>

double two_e_int_6_6_3_1_1_3_3_1_1_3(double z12, double z34) {
  return (768 * (81 * pow(z12, 6) + 891 * pow(z12, 5) * z34 + 4480 * pow(z12, 4) * pow(z34, 2) +
                 13640 * pow(z12, 3) * pow(z34, 3) + 4480 * pow(z12, 2) * pow(z34, 4) + 891 * z12 * pow(z34, 5) +
                 81 * pow(z34, 6))) /
         (pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 11));
}