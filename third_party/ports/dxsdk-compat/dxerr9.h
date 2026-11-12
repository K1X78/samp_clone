#ifndef OPENSAMP_DXERR9_COMPAT_H
#define OPENSAMP_DXERR9_COMPAT_H

// The transferred SA-MP client was written against the DirectX 9.0 SDK
// (April 2005).  DXUT's precompiled header includes <dxerr9.h>, which that SDK
// shipped and which the installed DirectX SDK (June 2010) does not: the same
// implementation lives there as <DxErr.h> and links dxerr.lib instead of
// dxerr9.lib.  Redirecting the include keeps the ported tree untouched.

#include <DxErr.h>

#endif
