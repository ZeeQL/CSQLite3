#ifndef __CSQLITE3_SHIM_H__
#define __CSQLITE3_SHIM_H__

#if defined(__APPLE__) && defined(__MACH__)
#  if TARGET_OS_IPHONE && TARGET_IPHONE_SIMULATOR
#    if __clang_major__ >= 11 // Xcode 11 Beta
#      include "/Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/include/sqlite3.h"
#    else
#      include "/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/include/sqlite3.h"
#    endif
#  elif TARGET_OS_IPHONE
#    if __clang_major__ >= 11 // Xcode 11 Beta
#      include "/Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS.sdk/usr/include/sqlite3.h"
#    else
#      include "/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS.sdk/usr/include/sqlite3.h"
#    endif
#  else
#    if __clang_major__ >= 11 // Xcode 11 Beta
#      include "/Applications/Xcode-beta.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sqlite3.h"
#    elif __clang_major__ >= 9 // released now. assume Xcode 9.
#      include "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sqlite3.h"
#    else
#      if 0
#        include "/Applications/Xcode 8.3.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sqlite3.h"
#        include "/usr/include/sqlite3.h"
#      else
  //     I guess we always want this in the SPM package.
#        include "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sqlite3.h"
#      endif
#    endif
#  endif
#else
#  include "/usr/include/sqlite3.h"
#endif

#endif /* __CSQLITE3_SHIM_H__ */
