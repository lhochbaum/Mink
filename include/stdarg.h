#ifndef MINK_STDARG_H
#define MINK_STDARG_H

/* This implements varargs support.
 * It is implemented by GCC. The custom defines are made to strip the __builtin_ prefix. */
#define va_start(v, l)   __builtin_va_start(v, l)
#define va_arg(v, l)     __builtin_va_arg(v, l)
#define va_end(v)        __builtin_va_end(v)

typedef __builtin_va_list va_list;

#endif //MINK_STDARG_H
