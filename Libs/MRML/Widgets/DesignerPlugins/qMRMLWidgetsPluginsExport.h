

// .NAME __qMRMLWidgetsPluginsExport - manage Windows system differences
// .SECTION Description
// The __qMRMLWidgetsPluginsExport captures some system differences between Unix
// and Windows operating systems. 

#ifndef __qMRMLWidgetsPluginsExport_h
#define __qMRMLWidgetsPluginsExport_h

#include "ctkCompatibility_p.h"
#include "ctkCompilerDetections_p.h"

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(qMRMLWidgetsPlugins_EXPORTS)
#    define QMRML_WIDGETS_PLUGINS_EXPORT Q_DECL_EXPORT
#  else
#    define QMRML_WIDGETS_PLUGINS_EXPORT Q_DECL_IMPORT
#  endif
#endif

#if !defined(QMRML_WIDGETS_PLUGINS_EXPORT)
//#  if defined(CTK_SHARED)
#    define QMRML_WIDGETS_PLUGINS_EXPORT Q_DECL_EXPORT
//#  else
//#    define QMRML_WIDGETS_PLUGINS_EXPORT
//#  endif
#endif



#endif

