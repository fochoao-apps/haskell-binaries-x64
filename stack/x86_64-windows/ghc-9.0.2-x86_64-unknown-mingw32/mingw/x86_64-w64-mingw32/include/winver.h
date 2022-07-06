/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef VER_H
#define VER_H

#include <_mingw.h>
#include <_mingw_unicode.h>

#ifdef __cplusplus
extern "C" {
#endif

#define VS_FILE_INFO RT_VERSION
#define VS_VERSION_INFO 1
#define VS_USER_DEFINED 100

#define VS_FFI_SIGNATURE __MSABI_LONG(0xFEEF04BD)
#define VS_FFI_STRUCVERSION __MSABI_LONG(0x00010000)
#define VS_FFI_FILEFLAGSMASK __MSABI_LONG(0x0000003F)

#define VS_FF_DEBUG __MSABI_LONG(0x00000001)
#define VS_FF_PRERELEASE __MSABI_LONG(0x00000002)
#define VS_FF_PATCHED __MSABI_LONG(0x00000004)
#define VS_FF_PRIVATEBUILD __MSABI_LONG(0x00000008)
#define VS_FF_INFOINFERRED __MSABI_LONG(0x00000010)
#define VS_FF_SPECIALBUILD __MSABI_LONG(0x00000020)

#define VOS_UNKNOWN __MSABI_LONG(0x00000000)
#define VOS_DOS __MSABI_LONG(0x00010000)
#define VOS_OS216 __MSABI_LONG(0x00020000)
#define VOS_OS232 __MSABI_LONG(0x00030000)
#define VOS_NT __MSABI_LONG(0x00040000)
#define VOS_WINCE __MSABI_LONG(0x00050000)

#define VOS__BASE __MSABI_LONG(0x00000000)
#define VOS__WINDOWS16 __MSABI_LONG(0x00000001)
#define VOS__PM16 __MSABI_LONG(0x00000002)
#define VOS__PM32 __MSABI_LONG(0x00000003)
#define VOS__WINDOWS32 __MSABI_LONG(0x00000004)

#define VOS_DOS_WINDOWS16 __MSABI_LONG(0x00010001)
#define VOS_DOS_WINDOWS32 __MSABI_LONG(0x00010004)
#define VOS_OS216_PM16 __MSABI_LONG(0x00020002)
#define VOS_OS232_PM32 __MSABI_LONG(0x00030003)
#define VOS_NT_WINDOWS32 __MSABI_LONG(0x00040004)

#define VFT_UNKNOWN __MSABI_LONG(0x00000000)
#define VFT_APP __MSABI_LONG(0x00000001)
#define VFT_DLL __MSABI_LONG(0x00000002)
#define VFT_DRV __MSABI_LONG(0x00000003)
#define VFT_FONT __MSABI_LONG(0x00000004)
#define VFT_VXD __MSABI_LONG(0x00000005)
#define VFT_STATIC_LIB __MSABI_LONG(0x00000007)

#define VFT2_UNKNOWN __MSABI_LONG(0x00000000)
#define VFT2_DRV_PRINTER __MSABI_LONG(0x00000001)
#define VFT2_DRV_KEYBOARD __MSABI_LONG(0x00000002)
#define VFT2_DRV_LANGUAGE __MSABI_LONG(0x00000003)
#define VFT2_DRV_DISPLAY __MSABI_LONG(0x00000004)
#define VFT2_DRV_MOUSE __MSABI_LONG(0x00000005)
#define VFT2_DRV_NETWORK __MSABI_LONG(0x00000006)
#define VFT2_DRV_SYSTEM __MSABI_LONG(0x00000007)
#define VFT2_DRV_INSTALLABLE __MSABI_LONG(0x00000008)
#define VFT2_DRV_SOUND __MSABI_LONG(0x00000009)
#define VFT2_DRV_COMM __MSABI_LONG(0x0000000A)
#define VFT2_DRV_INPUTMETHOD __MSABI_LONG(0x0000000B)
#define VFT2_DRV_VERSIONED_PRINTER __MSABI_LONG(0x0000000C)

#define VFT2_FONT_RASTER __MSABI_LONG(0x00000001)
#define VFT2_FONT_VECTOR __MSABI_LONG(0x00000002)
#define VFT2_FONT_TRUETYPE __MSABI_LONG(0x00000003)

#define VFFF_ISSHAREDFILE 0x0001

#define VFF_CURNEDEST 0x0001
#define VFF_FILEINUSE 0x0002
#define VFF_BUFFTOOSMALL 0x0004

#define VIFF_FORCEINSTALL 0x0001
#define VIFF_DONTDELETEOLD 0x0002

#define VIF_TEMPFILE __MSABI_LONG(0x00000001)
#define VIF_MISMATCH __MSABI_LONG(0x00000002)
#define VIF_SRCOLD __MSABI_LONG(0x00000004)

#define VIF_DIFFLANG __MSABI_LONG(0x00000008)
#define VIF_DIFFCODEPG __MSABI_LONG(0x00000010)
#define VIF_DIFFTYPE __MSABI_LONG(0x00000020)

#define VIF_WRITEPROT __MSABI_LONG(0x00000040)
#define VIF_FILEINUSE __MSABI_LONG(0x00000080)
#define VIF_OUTOFSPACE __MSABI_LONG(0x00000100)
#define VIF_ACCESSVIOLATION __MSABI_LONG(0x00000200)
#define VIF_SHARINGVIOLATION __MSABI_LONG(0x00000400)
#define VIF_CANNOTCREATE __MSABI_LONG(0x00000800)
#define VIF_CANNOTDELETE __MSABI_LONG(0x00001000)
#define VIF_CANNOTRENAME __MSABI_LONG(0x00002000)
#define VIF_CANNOTDELETECUR __MSABI_LONG(0x00004000)
#define VIF_OUTOFMEMORY __MSABI_LONG(0x00008000)

#define VIF_CANNOTREADSRC __MSABI_LONG(0x00010000)
#define VIF_CANNOTREADDST __MSABI_LONG(0x00020000)

#define VIF_BUFFTOOSMALL __MSABI_LONG(0x00040000)
#define VIF_CANNOTLOADLZ32 __MSABI_LONG(0x00080000)
#define VIF_CANNOTLOADCABINET __MSABI_LONG(0x00100000)

#ifndef RC_INVOKED

  typedef struct tagVS_FIXEDFILEINFO
  {
    DWORD dwSignature;
    DWORD dwStrucVersion;
    DWORD dwFileVersionMS;
    DWORD dwFileVersionLS;
    DWORD dwProductVersionMS;
    DWORD dwProductVersionLS;
    DWORD dwFileFlagsMask;
    DWORD dwFileFlags;
    DWORD dwFileOS;
    DWORD dwFileType;
    DWORD dwFileSubtype;
    DWORD dwFileDateMS;
    DWORD dwFileDateLS;
  } VS_FIXEDFILEINFO;

#define VerFindFile __MINGW_NAME_AW(VerFindFile)
#define VerInstallFile __MINGW_NAME_AW(VerInstallFile)
#define GetFileVersionInfoSize __MINGW_NAME_AW(GetFileVersionInfoSize)
#define GetFileVersionInfo __MINGW_NAME_AW(GetFileVersionInfo)
#define VerLanguageName __MINGW_NAME_AW(VerLanguageName)
#define VerQueryValue __MINGW_NAME_AW(VerQueryValue)

#if WINAPI_FAMILY_PARTITION (WINAPI_PARTITION_DESKTOP)
  DWORD WINAPI VerFindFileA(DWORD uFlags,LPSTR szFileName,LPSTR szWinDir,LPSTR szAppDir,LPSTR szCurDir,PUINT lpuCurDirLen,LPSTR szDestDir,PUINT lpuDestDirLen);
  DWORD WINAPI VerFindFileW(DWORD uFlags,LPWSTR szFileName,LPWSTR szWinDir,LPWSTR szAppDir,LPWSTR szCurDir,PUINT lpuCurDirLen,LPWSTR szDestDir,PUINT lpuDestDirLen);
  DWORD WINAPI VerInstallFileA(DWORD uFlags,LPSTR szSrcFileName,LPSTR szDestFileName,LPSTR szSrcDir,LPSTR szDestDir,LPSTR szCurDir,LPSTR szTmpFile,PUINT lpuTmpFileLen);
  DWORD WINAPI VerInstallFileW(DWORD uFlags,LPWSTR szSrcFileName,LPWSTR szDestFileName,LPWSTR szSrcDir,LPWSTR szDestDir,LPWSTR szCurDir,LPWSTR szTmpFile,PUINT lpuTmpFileLen);
  DWORD WINAPI GetFileVersionInfoSizeA(LPCSTR lptstrFilename,LPDWORD lpdwHandle);
  DWORD WINAPI GetFileVersionInfoSizeW(LPCWSTR lptstrFilename,LPDWORD lpdwHandle);
  WINBOOL WINAPI GetFileVersionInfoA(LPCSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData);
  WINBOOL WINAPI GetFileVersionInfoW(LPCWSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData);
#endif

#if WINAPI_FAMILY_PARTITION (WINAPI_PARTITION_APP)
  DWORD WINAPI VerLanguageNameA(DWORD wLang,LPSTR szLang,DWORD nSize);
  DWORD WINAPI VerLanguageNameW(DWORD wLang,LPWSTR szLang,DWORD nSize);
  WINBOOL WINAPI VerQueryValueA(LPCVOID pBlock,LPCSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen);
  WINBOOL WINAPI VerQueryValueW(LPCVOID pBlock,LPCWSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen);
#endif
#endif

#ifdef __cplusplus
}
#endif
#endif