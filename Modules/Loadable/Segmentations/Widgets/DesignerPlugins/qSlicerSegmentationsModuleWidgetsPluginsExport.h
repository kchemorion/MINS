

// .NAME __qSlicerSegmentationsModuleWidgetsPluginsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerSegmentationsModuleWidgetsPluginsExport captures some system differences between Unix
// and Windows operating systems. 

#ifndef __qSlicerSegmentationsModuleWidgetsPluginsExport_h
#define __qSlicerSegmentationsModuleWidgetsPluginsExport_h

#include "ctkCompatibility_p.h"
#include "ctkCompilerDetections_p.h"

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(qSlicerSegmentationsModuleWidgetsPlugins_EXPORTS)
#    define Q_SLICER_MODULE_SEGMENTATIONS_WIDGETS_PLUGINS_EXPORT Q_DECL_EXPORT
#  else
#    define Q_SLICER_MODULE_SEGMENTATIONS_WIDGETS_PLUGINS_EXPORT Q_DECL_IMPORT
#  endif
#endif

#if !defined(Q_SLICER_MODULE_SEGMENTATIONS_WIDGETS_PLUGINS_EXPORT)
//#  if defined(CTK_SHARED)
#    define Q_SLICER_MODULE_SEGMENTATIONS_WIDGETS_PLUGINS_EXPORT Q_DECL_EXPORT
//#  else
//#    define Q_SLICER_MODULE_SEGMENTATIONS_WIDGETS_PLUGINS_EXPORT
//#  endif
#endif



#endif

