// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsDisplayableManager(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsDisplayableManagerHelper(PyObject *dict); }

static PyMethodDef PyvtkSlicerMarkupsModuleMRMLDisplayableManagerPython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkSlicerMarkupsModuleMRMLDisplayableManagerPython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkSlicerMarkupsModuleMRMLDisplayableManagerPython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkSlicerMarkupsModuleMRMLDisplayableManagerPython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkSlicerMarkupsModuleMRMLDisplayableManagerPython(const char * /*unused*/); }

PyObject *real_initvtkSlicerMarkupsModuleMRMLDisplayableManagerPython(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkSlicerMarkupsModuleMRMLDisplayableManagerPython_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkSlicerMarkupsModuleMRMLDisplayableManagerPython");
  }

  const char *depends[14] = {
    "MRMLCorePython",
    "vtkAddonPython",
    "vtkITKPython",
    "vtkSegmentationCorePython",
    "vtkTeemPython",
    "MRMLLogicPython",
    "MRMLDisplayableManagerPython",
    "MRMLCLIPython",
    "vtkSlicerMarkupsModuleLogicPython",
    "vtkSlicerMarkupsModuleMRMLPython",
    "vtkSlicerMarkupsModuleVTKWidgetsPython",
    "qSlicerBaseQTCLIPython",
    "SlicerBaseLogicPython",
    "vtkSlicerAnnotationsModuleMRMLPython",
  };

  for (int i = 0; i < 14; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkSlicerMarkupsModuleMRMLDisplayableManagerPython: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkSlicerMarkupsModuleMRMLDisplayableManagerPython, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory(d);
  PyVTKAddFile_vtkMRMLMarkupsDisplayableManager(d);
  PyVTKAddFile_vtkMRMLMarkupsDisplayableManagerHelper(d);

  vtkPythonUtil::AddModule("vtkSlicerMarkupsModuleMRMLDisplayableManagerPython");

  return m;
}

