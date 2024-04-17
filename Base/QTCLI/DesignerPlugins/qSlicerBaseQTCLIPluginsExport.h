

// .NAME __qSlicerBaseQTCLIPluginsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerBaseQTCLIPluginsExport captures some system differences between Unix
// and Windows operating systems. 

#ifndef __qSlicerBaseQTCLIPluginsExport_h
#define __qSlicerBaseQTCLIPluginsExport_h

#include "ctkCompatibility_p.h"
#include "ctkCompilerDetections_p.h"

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(qSlicerBaseQTCLIPlugins_EXPORTS)
#    define Q_SLICER_BASE_QTCLI_PLUGINS_EXPORT Q_DECL_EXPORT
#  else
#    define Q_SLICER_BASE_QTCLI_PLUGINS_EXPORT Q_DECL_IMPORT
#  endif
#endif

#if !defined(Q_SLICER_BASE_QTCLI_PLUGINS_EXPORT)
//#  if defined(CTK_SHARED)
#    define Q_SLICER_BASE_QTCLI_PLUGINS_EXPORT Q_DECL_EXPORT
//#  else
//#    define Q_SLICER_BASE_QTCLI_PLUGINS_EXPORT
//#  endif
#endif



#endif

