/*
 * Here is where system computed values get stored.
 * These values should only change when the target compile platform changes.
 */

#ifndef __vtkSlicerConfigure_h
#define __vtkSlicerConfigure_h

#define Slicer_ORGANIZATION_DOMAIN "disc4all.eu"
#define Slicer_ORGANIZATION_NAME "DISC4ALL"

#define SLICER_REVISION_SPECIFIC_USER_SETTINGS_FILEBASENAME ""

#define Slicer_DEFAULT_HOME_MODULE "Home"
#define Slicer_DEFAULT_FAVORITE_MODULES "Data, Volumes, Models, Transforms, Markups, SegmentEditor"

#define Slicer_DISCLAIMER_AT_STARTUP "Thank you for using %1!<br><br>This software is not intended for clinical use."

#if defined(WIN32) && !defined(VTKSLICER_STATIC)
#pragma warning ( disable : 4275 )
#endif

/* #undef CMAKE_WORDS_BIGENDIAN */
#ifdef CMAKE_WORDS_BIGENDIAN
  #define WORDS_BIGENDIAN
#else
  #define WORDS_LITTLEENDIAN
#endif

#define BUILD_SHARED_LIBS
#ifndef BUILD_SHARED_LIBS
#define VTKSLICER_STATIC
#endif

#define Slicer_STORE_SETTINGS_IN_APPLICATION_HOME_DIR

/* #undef Slicer_USE_IGSTK */
/* #undef Slicer_USE_NAVITRACK */
#define Slicer_USE_NUMPY
#define Slicer_USE_PYTHONQT
#define Slicer_USE_PYTHONQT_WITH_OPENSSL
/* #undef Slicer_USE_QtTesting */
/* #undef Slicer_USE_OPENTRACKER */

#define Slicer_HAVE_QT5
/* #undef Slicer_HAVE_WEBKIT_SUPPORT */

#define VTKSLICER_CONFIGURATION_TYPES ""
/* #undef Slicer_BUILD_WIN32_CONSOLE */
/* #undef Slicer_BUILD_WIN32_CONSOLE_LAUNCHER */

#define Slicer_MAIN_PROJECT_APPLICATION_NAME "MINS"
#define Slicer_BIN_DIR "bin"
#define Slicer_LIB_DIR "lib/MINS-5.6"
#define Slicer_INCLUDE_DIR "include/MINS-5.6"
#define Slicer_SHARE_DIR "share/MINS-5.6"
#define Slicer_ITKFACTORIES_DIR "lib/MINS-5.6/ITKFactories"

#define Slicer_QtPlugins_DIR "lib/QtPlugins"

#define Slicer_BUNDLE_LOCATION "MINS.app/Contents"

/* #undef Slicer_BUILD_EXTENSIONMANAGER_SUPPORT */
#ifdef Slicer_BUILD_EXTENSIONMANAGER_SUPPORT
#  define Slicer_EXTENSIONS_DIRBASENAME "Extensions"
#  define Slicer_EXTENSIONS_DIRNAME "" // Deprecated - Remove in Slicer 5.5
#endif

/* #undef Slicer_BUILD_APPLICATIONUPDATE_SUPPORT */

#define Slicer_BUILD_DICOM_SUPPORT
/* #undef Slicer_BUILD_DIFFUSION_SUPPORT */
#define Slicer_BUILD_I18N_SUPPORT
#define Slicer_BUILD_MULTIMEDIA_SUPPORT
/* #undef Slicer_BUILD_PARAMETERSERIALIZER_SUPPORT */
#define Slicer_BUILD_WEBENGINE_SUPPORT

#define Slicer_BUILD_CLI_SUPPORT
#define Slicer_BUILD_CLI
#define Slicer_CLIMODULES_SUBDIR "cli-modules"
#define Slicer_CLIMODULES_BIN_DIR "lib/MINS-5.6/cli-modules"
#define Slicer_CLIMODULES_LIB_DIR "lib/MINS-5.6/cli-modules"
#define Slicer_CLIMODULES_SHARE_DIR "share/MINS-5.6/cli-modules"

#define Slicer_CLI_PREFER_EXECUTABLE_DEFAULT true

#define Slicer_USE_PYTHONQT
#ifdef Slicer_USE_PYTHONQT
#  define Slicer_PYTHON_VERSION_DOT "3.9"
#  define Slicer_PYTHON_VERSION "39"
#  define PYTHON_SITE_PACKAGES_SUBDIR "lib/python3.9/site-packages"
#endif //Slicer_USE_PYTHONQT

#define Slicer_BUILD_QTLOADABLEMODULES
#define Slicer_QTLOADABLEMODULES_SUBDIR "qt-loadable-modules"
#define Slicer_QTLOADABLEMODULES_BIN_DIR "lib/MINS-5.6/qt-loadable-modules"
#define Slicer_QTLOADABLEMODULES_LIB_DIR "lib/MINS-5.6/qt-loadable-modules"
#define Slicer_QTLOADABLEMODULES_INCLUDE_DIR "include/MINS-5.6/qt-loadable-modules"
#define Slicer_QTLOADABLEMODULES_SHARE_DIR "share/MINS-5.6/qt-loadable-modules"
#ifdef Slicer_USE_PYTHONQT
#  define Slicer_QTLOADABLEMODULES_PYTHON_LIB_DIR "lib/MINS-5.6/qt-loadable-modules/Python"
#endif

#define Slicer_BUILD_QTSCRIPTEDMODULES
#ifdef Slicer_USE_PYTHONQT
#  define Slicer_QTSCRIPTEDMODULES_SUBDIR "qt-scripted-modules"
#  define Slicer_QTSCRIPTEDMODULES_BIN_DIR "lib/MINS-5.6/qt-scripted-modules"
#  define Slicer_QTSCRIPTEDMODULES_LIB_DIR "lib/MINS-5.6/qt-scripted-modules"
#  define Slicer_QTSCRIPTEDMODULES_INCLUDE_DIR "include/MINS-5.6/qt-scripted-modules"
#  define Slicer_QTSCRIPTEDMODULES_SHARE_DIR "share/MINS-5.6/qt-scripted-modules"
#endif //Slicer_USE_PYTHONQT

// ThirdParty: Corresponds to superbuild projects built
// in Slicer extension.
#define Slicer_THIRDPARTY_BIN_DIR "bin"
#define Slicer_THIRDPARTY_LIB_DIR "lib/MINS-5.6"

/* #undef Slicer_VTK_RENDERING_USE_OpenGL_BACKEND */
#define Slicer_VTK_RENDERING_USE_OpenGL2_BACKEND
#define Slicer_VTK_USE_QVTKOPENGLWIDGET

// Library sub-directory - The following macros define directories only valid for a given build tree.
#define VTK_DIR "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK-build"
#define CTK_DIR "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build"
//#define Teem_DIR "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/teem-build"

#define Slicer_QM_DIR "bin/translations"
#define Slicer_QM_OUTPUT_DIRS ""
#define Slicer_LANGUAGES "fr"

#endif
