/*
 * Here is where system computed values get stored.
 * These values should only change when the target compile platform changes.
 */

#if defined(WIN32) && !defined(VTKITK_STATIC)
#pragma warning ( disable : 4275 )
#endif

#define BUILD_SHARED_LIBS
#ifndef BUILD_SHARED_LIBS
#define VTKITK_STATIC
#endif

#define VTKITK_BUILD_DICOM_SUPPORT
