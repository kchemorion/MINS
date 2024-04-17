

// .NAME __qSlicerMarkupsModuleWidgetsPluginsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerMarkupsModuleWidgetsPluginsExport captures some system differences between Unix
// and Windows operating systems. 

#ifndef __qSlicerMarkupsModuleWidgetsPluginsExport_h
#define __qSlicerMarkupsModuleWidgetsPluginsExport_h

#include "ctkCompatibility_p.h"
#include "ctkCompilerDetections_p.h"

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(qSlicerMarkupsModuleWidgetsPlugins_EXPORTS)
#    define Q_SLICER_MODULE_MARKUPS_WIDGETS_PLUGINS_EXPORT Q_DECL_EXPORT
#  else
#    define Q_SLICER_MODULE_MARKUPS_WIDGETS_PLUGINS_EXPORT Q_DECL_IMPORT
#  endif
#endif

#if !defined(Q_SLICER_MODULE_MARKUPS_WIDGETS_PLUGINS_EXPORT)
//#  if defined(CTK_SHARED)
#    define Q_SLICER_MODULE_MARKUPS_WIDGETS_PLUGINS_EXPORT Q_DECL_EXPORT
//#  else
//#    define Q_SLICER_MODULE_MARKUPS_WIDGETS_PLUGINS_EXPORT
//#  endif
#endif



#endif

