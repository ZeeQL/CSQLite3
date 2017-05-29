#ifndef __CSQLITE3_SHIM_H__
#define __CSQLITE3_SHIM_H__

#if defined(__APPLE__) && defined(__MACH__)
#  include "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sqlite3.h"
#else
#  include "/usr/include/sqlite3.h"
#endif

#endif /* __CSQLITE3_SHIM_H__ */
