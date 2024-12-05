#ifdef __AVX__
#define AVX_SUPPORTED 1
#else
#define AVX_SUPPORTED 0
#endif

#ifdef __AVX2__
#define AVX2_SUPPORTED 1
#else
#define AVX2_SUPPORTED 0
#endif

#ifdef __AVX512F__
#define AVX512F_SUPPORTED 1
#else
#define AVX512F_SUPPORTED 0
#endif

#ifdef __AVX512PF__
#define AVX512PF_SUPPORTED 1
#else
#define AVX512PF_SUPPORTED 0
#endif

#ifdef __AVX512CD__
#define AVX512CD_SUPPORTED 1
#else
#define AVX512CD_SUPPORTED 0
#endif

#ifdef __AVX512ER__
#define AVX512ER_SUPPORTED 1
#else
#define AVX512ER_SUPPORTED 0
#endif

#ifdef __AVX512BW__
#define AVX512BW_SUPPORTED 1
#else
#define AVX512BW_SUPPORTED 0
#endif

#ifdef __AVX512DQ__
#define AVX512DQ_SUPPORTED 1
#else
#define AVX512DQ_SUPPORTED 0
#endif

#ifdef __AVX512VL__
#define AVX512VL_SUPPORTED 1
#else
#define AVX512VL_SUPPORTED 0
#endif

#ifdef __SSE__
#define SSE_SUPPORTED 1
#else
#define SSE_SUPPORTED 0
#endif

#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "AVX: " << AVX_SUPPORTED << std::endl;
    std::cout << "AVX2: " << AVX2_SUPPORTED << std::endl;
    std::cout << "AVX512F: " << AVX512F_SUPPORTED << std::endl;
    std::cout << "AVX512CD: " << AVX512CD_SUPPORTED << std::endl;
    std::cout << "AVX512PF: " << AVX512PF_SUPPORTED << std::endl;
    std::cout << "AVX512ER: " << AVX512ER_SUPPORTED << std::endl;
    std::cout << "AVX512BW: " << AVX512BW_SUPPORTED << std::endl;
    std::cout << "AVX512DQ: " << AVX512DQ_SUPPORTED << std::endl;
    std::cout << "AVX512VL: " << AVX512VL_SUPPORTED << std::endl;
    std::cout << "SSE: " << SSE_SUPPORTED << std::endl;

    return 0;

}

// https://en.wikichip.org/wiki/x86/avx-512

// -mavx:      (1, 0, 0, 0, 0, 0, 0, 0, 0, 1)
// -mavx2:     (1, 1, 0, 0, 0, 0, 0, 0, 0, 1)
// -mavx512f:  (1, 1, 1, 0, 0, 0, 0, 0, 0, 1)
// -mavx512cd: (1, 1, 1, 1, 0, 0, 0, 0, 0, 1)
// -mavx512pf: (1, 1, 1, 0, 1, 0, 0, 0, 0, 1)
// -mavx512er: (1, 1, 1, 0, 0, 1, 0, 0, 0, 1)
// -mavx512er: (1, 1, 1, 0, 0, 0, 1, 0, 0, 1)
// -mavx512dq: (1, 1, 1, 0, 0, 0, 0, 1, 0, 1)
// -mavx512vl: (1, 1, 1, 0, 0, 0, 0, 0, 1, 1)
