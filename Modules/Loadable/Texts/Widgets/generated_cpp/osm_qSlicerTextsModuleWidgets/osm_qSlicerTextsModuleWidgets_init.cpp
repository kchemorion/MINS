
//
// File auto-generated by ctkWrapPythonQt.py
//

#include <PythonQt.h>
// XXX Avoid  warning: "HAVE_XXXX" redefined
#undef HAVE_STAT
#undef HAVE_FTIME
#undef HAVE_GETPID
#undef HAVE_IO_H
#undef HAVE_STRERROR
#undef HAVE_SYS_UTIME_H
#undef HAVE_TEMPNAM
#undef HAVE_TMPNAM
#undef HAVE_LONG_LONG
#undef HAVE_INT64_T
#include "osm_qSlicerTextsModuleWidgets.h"

void PythonQt_init_osm_qSlicerTextsModuleWidgets(PyObject* module)
{
  Q_UNUSED(module);
  
  PythonQt::self()->registerClass(
  &qMRMLTextWidget::staticMetaObject, "qSlicerTextsModuleWidgets",
  PythonQtCreateObject<PythonQtWrapper_qMRMLTextWidget>);
  
}
