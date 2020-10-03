#ifndef _WAR_CompressedTexturePlatform_h_
#define _WAR_CompressedTexturePlatform_h_

#ifdef PLATFORM_WIN
#define WAR_TEXFMT_INCLUDE_DXT1                        1
#define WAR_TEXFMT_INCLUDE_DXT5A                       1
#define WAR_TEXFMT_INCLUDE_BC7                         1
#define WAR_TEXFMT_INCLUDE_BC7_MODE5                   1
#define WAR_TEXFMT_INCLUDE_PVRTC1                      0
#define WAR_TEXFMT_INCLUDE_ETC2_EAC_A8                 0
#define WAR_TEXFMT_INCLUDE_ASTC                        0
#define WAR_TEXFMT_INCLUDE_ATC                         0
#define WAR_TEXFMT_INCLUDE_ASTC_HIGHER_OPAQUE_QUALITY  0
#define WAR_TEXFMT_INCLUDE_ETC2_EAC_RG11               0
#define WAR_TEXFMT_INCLUDE_FXT1                        0
#define WAR_TEXFMT_INCLUDE_PVRTC2                      0
#elif defined(__EMSCRIPTEN__) || defined(USING_ANGLE)
#define WAR_TEXFMT_INCLUDE_DXT1                        1
#define WAR_TEXFMT_INCLUDE_DXT5A                       1
#define WAR_TEXFMT_INCLUDE_BC7                         1
#define WAR_TEXFMT_INCLUDE_BC7_MODE5                   1
#define WAR_TEXFMT_INCLUDE_PVRTC1                      1
#define WAR_TEXFMT_INCLUDE_ETC2_EAC_A8                 1
#define WAR_TEXFMT_INCLUDE_ASTC                        1
#define WAR_TEXFMT_INCLUDE_ATC                         1
#define WAR_TEXFMT_INCLUDE_ASTC_HIGHER_OPAQUE_QUALITY  0
#define WAR_TEXFMT_INCLUDE_ETC2_EAC_RG11               1
#define WAR_TEXFMT_INCLUDE_FXT1                        0
#define WAR_TEXFMT_INCLUDE_PVRTC2                      1
#else
#error Not implemented
#endif

#endif // _WAR_CompressedTexturePlatform_h_
