#include <stdlib.h>

#if CHILLBUFF_PLATFORM_MALLOC_ALT
extern void *(*chillbuff_malloc) (size_t size);
#else
#define chillbuff_malloc malloc
#endif

#if CHILLBUFF_PLATFORM_CALLOC_ALT
extern void *(*chillbuff_calloc) (size_t nmemb, size_t size);
#else
#define chillbuff_calloc calloc
#endif

#if CHILLBUFF_PLATFORM_REALLOC_ALT
extern void *(*chillbuff_realloc) (void *ptr, size_t size);
#else
#define chillbuff_realloc realloc
#endif
