#ifndef COMPILER_H
#define COMPILER_H

#if __GNUC__ > 2 || (__GNUC__ == 2 && _GNUC_MINOR__ == 96)
#define likely(x) __builtin_expect(!!(x), 1)
#define unlikely(x) __builtin_expect(!!(x), 0)
#else
#define likely(x) (x)
#define unlikely(x) (x)
#endif

#endif // COMPILER_H
