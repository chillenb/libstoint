#include <tgmath.h>

double two_e_int_7_7_1_1_1_1_1_1_1_1(double z12, double z34) {
  return (145152 *
          (125 * pow(z12, 12) + 1625 * pow(z12, 11) * z34 + 9762 * pow(z12, 10) * pow(z34, 2) +
           35906 * pow(z12, 9) * pow(z34, 3) + 90311 * pow(z12, 8) * pow(z34, 4) + 164307 * pow(z12, 7) * pow(z34, 5) +
           223080 * pow(z12, 6) * pow(z34, 6) + 164307 * pow(z12, 5) * pow(z34, 7) + 90311 * pow(z12, 4) * pow(z34, 8) +
           35906 * pow(z12, 3) * pow(z34, 9) + 9762 * pow(z12, 2) * pow(z34, 10) + 1625 * z12 * pow(z34, 11) +
           125 * pow(z34, 12))) /
         (5. * pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 13));
}