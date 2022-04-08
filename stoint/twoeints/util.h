#ifndef UTIL_H
#define UTIL_H

#ifdef __cplusplus
extern "C" {
#endif

#define MAXAM 3

inline int LIDX(int l1, int l2, int l3, int l4, int m1, int m2, int m3, int m4) {
    return ((m4+l4) + (2*l4+1)*((m3+l3) + (2*l3 + 1)*((m2+l2) + (2*l2+1)*(m1))));
}

inline int NIDX(int l1, int l2, int l3, int l4) {
    const int AMSIZE = MAXAM + 1;
    return l4 + AMSIZE * (l3 + AMSIZE * (l2 + AMSIZE * l1));
}

#define MIN(a,b) ((a)<(b) ? (a) : (b))
#define MAX(a,b) ((a)>(b) > (a) : (b))

#ifdef __cplusplus
}
#endif

#endif // UTIL_H