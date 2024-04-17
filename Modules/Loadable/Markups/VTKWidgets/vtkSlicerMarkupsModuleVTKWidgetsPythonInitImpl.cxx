// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkMarkupsGlyphSource2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMarkupsGlyphSource2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFastSelectVisiblePoints(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFastSelectVisiblePoints(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerMarkupsWidget(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerMarkupsWidget(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerAngleRepresentation2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerAngleRepresentation2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerAngleRepresentation3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerAngleRepresentation3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerAngleWidget(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerAngleWidget(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerCurveRepresentation2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerCurveRepresentation2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerCurveRepresentation3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerCurveRepresentation3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerCurveWidget(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerCurveWidget(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerLineRepresentation3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerLineRepresentation3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerLineRepresentation2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerLineRepresentation2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerLineWidget(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerLineWidget(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerPointsRepresentation3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerPointsRepresentation3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerPointsRepresentation2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerPointsRepresentation2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerPointsWidget(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerPointsWidget(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerPlaneRepresentation2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerPlaneRepresentation2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerPlaneRepresentation3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerPlaneRepresentation3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerPlaneWidget(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerPlaneWidget(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerROIRepresentation2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerROIRepresentation2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerROIRepresentation3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerROIRepresentation3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerROIWidget(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerROIWidget(PyObject *dict); }

static PyMethodDef PyvtkSlicerMarkupsModuleVTKWidgetsPython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkSlicerMarkupsModuleVTKWidgetsPython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkSlicerMarkupsModuleVTKWidgetsPython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkSlicerMarkupsModuleVTKWidgetsPython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkSlicerMarkupsModuleVTKWidgetsPython(const char * /*unused*/); }

PyObject *real_initvtkSlicerMarkupsModuleVTKWidgetsPython(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkSlicerMarkupsModuleVTKWidgetsPython_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkSlicerMarkupsModuleVTKWidgetsPython");
  }

  const char *depends[11] = {
    "vtkSlicerMarkupsModuleMRMLPython",
    "MRMLCorePython",
    "vtkAddonPython",
    "vtkITKPython",
    "vtkSegmentationCorePython",
    "vtkTeemPython",
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
        "Failed to load vtkSlicerMarkupsModuleVTKWidgetsPython: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkSlicerMarkupsModuleVTKWidgetsPython, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkMarkupsGlyphSource2D(d);
  PyVTKAddFile_vtkMarkupsGlyphSource2D(d);
  PyVTKAddFile_vtkFastSelectVisiblePoints(d);
  PyVTKAddFile_vtkFastSelectVisiblePoints(d);
  PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation(d);
  PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation(d);
  PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation3D(d);
  PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation3D(d);
  PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation2D(d);
  PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation2D(d);
  PyVTKAddFile_vtkSlicerMarkupsWidget(d);
  PyVTKAddFile_vtkSlicerMarkupsWidget(d);
  PyVTKAddFile_vtkSlicerAngleRepresentation2D(d);
  PyVTKAddFile_vtkSlicerAngleRepresentation2D(d);
  PyVTKAddFile_vtkSlicerAngleRepresentation3D(d);
  PyVTKAddFile_vtkSlicerAngleRepresentation3D(d);
  PyVTKAddFile_vtkSlicerAngleWidget(d);
  PyVTKAddFile_vtkSlicerAngleWidget(d);
  PyVTKAddFile_vtkSlicerCurveRepresentation2D(d);
  PyVTKAddFile_vtkSlicerCurveRepresentation2D(d);
  PyVTKAddFile_vtkSlicerCurveRepresentation3D(d);
  PyVTKAddFile_vtkSlicerCurveRepresentation3D(d);
  PyVTKAddFile_vtkSlicerCurveWidget(d);
  PyVTKAddFile_vtkSlicerCurveWidget(d);
  PyVTKAddFile_vtkSlicerLineRepresentation3D(d);
  PyVTKAddFile_vtkSlicerLineRepresentation3D(d);
  PyVTKAddFile_vtkSlicerLineRepresentation2D(d);
  PyVTKAddFile_vtkSlicerLineRepresentation2D(d);
  PyVTKAddFile_vtkSlicerLineWidget(d);
  PyVTKAddFile_vtkSlicerLineWidget(d);
  PyVTKAddFile_vtkSlicerPointsRepresentation3D(d);
  PyVTKAddFile_vtkSlicerPointsRepresentation3D(d);
  PyVTKAddFile_vtkSlicerPointsRepresentation2D(d);
  PyVTKAddFile_vtkSlicerPointsRepresentation2D(d);
  PyVTKAddFile_vtkSlicerPointsWidget(d);
  PyVTKAddFile_vtkSlicerPointsWidget(d);
  PyVTKAddFile_vtkSlicerPlaneRepresentation2D(d);
  PyVTKAddFile_vtkSlicerPlaneRepresentation2D(d);
  PyVTKAddFile_vtkSlicerPlaneRepresentation3D(d);
  PyVTKAddFile_vtkSlicerPlaneRepresentation3D(d);
  PyVTKAddFile_vtkSlicerPlaneWidget(d);
  PyVTKAddFile_vtkSlicerPlaneWidget(d);
  PyVTKAddFile_vtkSlicerROIRepresentation2D(d);
  PyVTKAddFile_vtkSlicerROIRepresentation2D(d);
  PyVTKAddFile_vtkSlicerROIRepresentation3D(d);
  PyVTKAddFile_vtkSlicerROIRepresentation3D(d);
  PyVTKAddFile_vtkSlicerROIWidget(d);
  PyVTKAddFile_vtkSlicerROIWidget(d);

  vtkPythonUtil::AddModule("vtkSlicerMarkupsModuleVTKWidgetsPython");

  return m;
}
