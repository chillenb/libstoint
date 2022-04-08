#include <tgmath.h>

double two_e_int_7_7_2_1_2_1_2_1_22_11(double z12, double z34) {
  return (-69120 *
          (196 * pow(z12, 10) + 2548 * pow(z12, 9) * z34 + 15315 * pow(z12, 8) * pow(z34, 2) +
           56407 * pow(z12, 7) * pow(z34, 3) + 142246 * pow(z12, 6) * pow(z34, 4) + 259974 * pow(z12, 5) * pow(z34, 5) +
           142246 * pow(z12, 4) * pow(z34, 6) + 56407 * pow(z12, 3) * pow(z34, 7) + 15315 * pow(z12, 2) * pow(z34, 8) +
           2548 * z12 * pow(z34, 9) + 196 * pow(z34, 10))) /
         (7. * pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 13));
}