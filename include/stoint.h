#ifdef __cplusplus
extern "C" {
#endif

extern void two_int_init();



#ifdef __cplusplus
}

#include <array>

typedef struct {short n; short l; short m; double z;} orbital;
typedef std::array<orbital, 4> quartet;

extern double two_e_int(quartet q);



#endif