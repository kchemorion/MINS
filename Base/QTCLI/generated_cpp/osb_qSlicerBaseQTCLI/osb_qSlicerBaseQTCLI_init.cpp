
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
#include "osb_qSlicerBaseQTCLI.h"

void PythonQt_init_osb_qSlicerBaseQTCLI(PyObject* module)
{
  Q_UNUSED(module);
  
  PythonQt::self()->registerClass(
  &qSlicerCLIModule::staticMetaObject, "qSlicerBaseQTCLI",
  PythonQtCreateObject<PythonQtWrapper_qSlicerCLIModule>);
  

  PythonQt::self()->registerClass(
  &qSlicerCLIModuleWidget::staticMetaObject, "qSlicerBaseQTCLI",
  PythonQtCreateObject<PythonQtWrapper_qSlicerCLIModuleWidget>);
  

  PythonQt::self()->registerClass(
  &qSlicerCLIProgressBar::staticMetaObject, "qSlicerBaseQTCLI",
  PythonQtCreateObject<PythonQtWrapper_qSlicerCLIProgressBar>);
  
}