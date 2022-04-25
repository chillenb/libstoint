#include "auxiliary.h"
#include "stoint.h"
#include "twoehelper/two_e_tables.h"
#include <array>
#include <cassert>
#include <csignal>
#include <tgmath.h>

inline void cswap(orbital &one, orbital &two) {
  if (one.l < two.l) {
    std::swap(one, two);
  }
}

void sortq(quartet &q) {
  if(q[2].n + q[3].n > q[0].n + q[1].n) {
    std::swap(q[0],q[2]);
    std::swap(q[1],q[3]);
  }
  cswap(q[0], q[1]);
  cswap(q[2], q[3]);
  //if (q[0].l < q[2].l) {
  //  std::swap(q[0], q[2]);
  //  std::swap(q[1], q[3]);
  //}
}

void checko(orbital o) {
  assert(o.n > 0);
  assert(o.l >= 0 && o.l < o.n);
  assert(o.m <= o.l && -o.m <= o.l);
  assert(o.z > 0);
}

void checkq(quartet q) {
  checko(q[0]);
  checko(q[1]);
  checko(q[2]);
  checko(q[3]);
}

double two_e_int(quartet q) {
  sortq(q);
  checkq(q);
  const short n12 = q[0].n + q[1].n;
  const short n34 = q[2].n + q[3].n;
  const two_e_funcarray *select_n = two_e_master[n12][n34];

  const int idx = NIDX(q[0].l, q[1].l, q[2].l, q[3].l);
  const two_e_func *shellq = select_n[idx];
  const int sgn = (q[0].m < 0) ? -1 : 1;
  const int lidx = LIDX(q[0].l, q[1].l, q[2].l, q[3].l, sgn * q[0].m, sgn * q[1].m, sgn * q[2].m, sgn * q[3].m);
  const two_e_func f = shellq[lidx];
  return (*f)(q[0].z + q[1].z, q[2].z + q[3].z) *
         QNormCoef(q[0].n, q[1].n, q[2].n, q[3].n, q[0].z, q[1].z, q[2].z, q[3].z);
}
