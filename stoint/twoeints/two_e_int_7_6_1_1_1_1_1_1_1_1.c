#include <tgmath.h>

double two_e_int_7_6_1_1_1_1_1_1_1_1(double z12, double z34) {
  return (3456 * (875 * pow(z12, 11) + 10500 * pow(z12, 10) * z34 + 57876 * pow(z12, 9) * pow(z34, 2) +
                  194012 * pow(z12, 8) * pow(z34, 3) + 441441 * pow(z12, 7) * pow(z34, 4) +
                  720720 * pow(z12, 6) * pow(z34, 5) + 606320 * pow(z12, 5) * pow(z34, 6) +
                  374946 * pow(z12, 4) * pow(z34, 7) + 165672 * pow(z12, 3) * pow(z34, 8) +
                  49556 * pow(z12, 2) * pow(z34, 9) + 9000 * z12 * pow(z34, 10) + 750 * pow(z34, 11))) /
         (5. * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 12));
}