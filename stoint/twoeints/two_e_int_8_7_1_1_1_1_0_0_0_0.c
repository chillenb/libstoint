#include <tgmath.h>

double two_e_int_8_7_1_1_1_1_0_0_0_0(double z12, double z34) {
  return (145152 * (200 * pow(z12, 13) + 2800 * pow(z12, 12) * z34 + 18296 * pow(z12, 11) * pow(z34, 2) +
                    74144 * pow(z12, 10) * pow(z34, 3) + 208936 * pow(z12, 9) * pow(z34, 4) +
                    435344 * pow(z12, 8) * pow(z34, 5) + 696696 * pow(z12, 7) * pow(z34, 6) +
                    573573 * pow(z12, 6) * pow(z34, 7) + 367822 * pow(z12, 5) * pow(z34, 8) +
                    179543 * pow(z12, 4) * pow(z34, 9) + 64372 * pow(z12, 3) * pow(z34, 10) +
                    15973 * pow(z12, 2) * pow(z34, 11) + 2450 * z12 * pow(z34, 12) + 175 * pow(z34, 13))) /
         (pow(z12, 8) * pow(z34, 7) * pow(z12 + z34, 14));
}