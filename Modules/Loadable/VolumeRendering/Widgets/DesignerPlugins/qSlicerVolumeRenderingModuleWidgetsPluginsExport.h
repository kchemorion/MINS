

// .NAME __qSlicerVolumeRenderingModuleWidgetsPluginsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerVolumeRenderingModuleWidgetsPluginsExport captures some system differences between Unix
// and Windows operating systems. 

#ifndef __qSlicerVolumeRenderingModuleWidgetsPluginsExport_h
#define __qSlicerVolumeRenderingModuleWidgetsPluginsExport_h

#include "ctkCompatibility_p.h"
#include "ctkCompilerDetections_p.h"

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(qSlicerVolumeRenderingModuleWidgetsPlugins_EXPORTS)
#    define Q_SLICER_MODULE_VOLUMERENDERING_WIDGETS_PLUGINS_EXPORT Q_DECL_EXPORT
#  else
#    define Q_SLICER_MODULE_VOLUMERENDERING_WIDGETS_PLUGINS_EXPORT Q_DECL_IMPORT
#  endif
#endif

#if !defined(Q_SLICER_MODULE_VOLUMERENDERING_WIDGETS_PLUGINS_EXPORT)
//#  if defined(CTK_SHARED)
#    define Q_SLICER_MODULE_VOLUMERENDERING_WIDGETS_PLUGINS_EXPORT Q_DECL_EXPORT
//#  else
//#    define Q_SLICER_MODULE_VOLUMERENDERING_WIDGETS_PLUGINS_EXPORT
//#  endif
#endif



#endif

