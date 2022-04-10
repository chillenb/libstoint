#include <tgmath.h>
#include <assert.h>
#define NDEBUG

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__GNUC__) || defined(__clang__)
#define likely(x)      __builtin_expect(!!(x), 1)
#define unlikely(x)    __builtin_expect(!!(x), 0)
#else
#define likely(x)      (x)
#define unlikely(x)    (x)
#endif

extern const double factorial[41];
extern const double sqrtfactorial[41];
extern const double halfint_gamma[81];
extern const double halfint_recip_gamma[81];
extern const double neg_halfint_recip_gamma[81];
extern const double neg_halfint_gamma[81];

static inline double half_gamma(int i) { // return Gamma(i/2)
    if(unlikely(i>80||i<-80)) {
        return gamma(0.5*i);
    }
    assert(i!=0); // infinity
    assert(i>0 || (i%2));
    return (i>0) ? halfint_gamma[i] : neg_halfint_gamma[-i];
}

static inline double half_recip_gamma(int i) {
    if(unlikely(i>80||i<-80)) {
        return 1./gamma(0.5*i);
    }
    return (i>=0) ? halfint_recip_gamma[i] : neg_halfint_recip_gamma[-i];
}

#ifdef __cplusplus
}
#endif
