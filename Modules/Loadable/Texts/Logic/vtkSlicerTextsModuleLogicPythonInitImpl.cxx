// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkSlicerTextsLogic(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerTextsLogic(PyObject *dict); }

static PyMethodDef PyvtkSlicerTextsModuleLogicPython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkSlicerTextsModuleLogicPython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkSlicerTextsModuleLogicPython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkSlicerTextsModuleLogicPython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkSlicerTextsModuleLogicPython(const char * /*unused*/); }

PyObject *real_initvtkSlicerTextsModuleLogicPython(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkSlicerTextsModuleLogicPython_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkSlicerTextsModuleLogicPython");
  }

  const char *depends[11] = {
    "MRMLCorePython",
    "vtkAddonPython",
    "vtkITKPython",
    "vtkSegmentationCorePython",
    "vtkTeemPython",
    "vtkSlicerMarkupsModuleMRMLPython",
    "MRMLLogicPython",
    "MRMLDisplayableManagerPython",
    "MRMLCLIPython",
    "qSlicerBaseQTCLIPython",
    "SlicerBaseLogicPython",
  };

  for (int i = 0; i < 11; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkSlicerTextsModuleLogicPython: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkSlicerTextsModuleLogicPython, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkSlicerTextsLogic(d);
  PyVTKAddFile_vtkSlicerTextsLogic(d);

  vtkPythonUtil::AddModule("vtkSlicerTextsModuleLogicPython");

  return m;
}
