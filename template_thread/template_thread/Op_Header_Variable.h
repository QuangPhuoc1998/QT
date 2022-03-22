#ifndef OP_HEADER_VARIABLE_H
#define OP_HEADER_VARIABLE_H

#include <iostream>

#ifndef VAR_DECLS
# define _DECL extern
# define _INIT(x)
#else
# define _DECL
# define _INIT(x)  = x
#endif

_DECL  uint8_t g_ubVar1;
_DECL  uint8_t g_ubVar2;

#endif // OP_HEADER_VARIABLE_H
