/* Generated by Cython 0.29.16 */

#ifndef __PYX_HAVE__dc__util
#define __PYX_HAVE__dc__util

#include "Python.h"

#ifndef __PYX_HAVE_API__dc__util

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

__PYX_EXTERN_C int PRIME_COUNT;

#endif /* !__PYX_HAVE_API__dc__util */

/* WARNING: the interface of the module init function changed in CPython 3.5. */
/* It now returns a PyModuleDef instance instead of a PyModule instance. */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initutil(void);
#else
PyMODINIT_FUNC PyInit_util(void);
#endif

#endif /* !__PYX_HAVE__dc__util */
