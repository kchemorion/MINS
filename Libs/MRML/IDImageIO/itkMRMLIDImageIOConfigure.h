/*
 * Here is where system computed values get stored.
 * These values should only change when the target compile platform changes.
 */

#if defined(WIN32) && !defined(MRMIDIO_STATIC)
#pragma warning ( disable : 4275 )
#endif

#define BUILD_SHARED_LIBS
#ifndef BUILD_SHARED_LIBS
#define MRMLIDIO_STATIC
#endif