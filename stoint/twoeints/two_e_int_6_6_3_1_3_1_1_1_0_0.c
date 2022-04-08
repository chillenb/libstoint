#include <tgmath.h>

double two_e_int_6_6_3_1_3_1_1_1_0_0(double z12, double z34) {
  return (768 * sqrt(6) *
          (81 * pow(z12, 6) + 891 * pow(z12, 5) * z34 + 3955 * pow(z12, 4) * pow(z34, 2) +
           7865 * pow(z12, 3) * pow(z34, 3) + 3955 * pow(z12, 2) * pow(z34, 4) + 891 * z12 * pow(z34, 5) +
           81 * pow(z34, 6))) /
         (5. * pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 11));
}