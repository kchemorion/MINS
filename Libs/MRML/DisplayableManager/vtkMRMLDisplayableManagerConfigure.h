/*
 * Here is where system computed values get stored.
 * These values should only change when the target compile platform changes.
 */

#if defined(WIN32) && !defined(VTKMRMLDisplayableManager_STATIC)
#pragma warning ( disable : 4275 )
#endif

#define MRMLDisplayableManager_USE_PYTHON
#define BUILD_SHARED_LIBS
#ifndef BUILD_SHARED_LIBS
#define VTKMRMLDisplayableManager_STATIC
#endif
