/***
*wfndfi32.c - C find file functions (wchar_t version)
*
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       Defines _wfindfirst64i32() and _wfindnext64i32().
*
*******************************************************************************/

#define WPRFLAG     1

#ifndef _UNICODE
#define _UNICODE    1
#endif  /* _UNICODE */

#ifndef UNICODE
#define UNICODE     1
#endif  /* UNICODE */

#undef  _MBCS        /* UNICODE not _MBCS */

#define _USE_INT64  0

#include "findf64.c"
