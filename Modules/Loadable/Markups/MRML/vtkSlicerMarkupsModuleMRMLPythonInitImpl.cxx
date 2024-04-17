// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkMRMLMarkupsAngleNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsAngleNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsClosedCurveNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsClosedCurveNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsCurveNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsCurveNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsDisplayNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsDisplayNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsFiducialDisplayNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsFiducialDisplayNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsFiducialStorageNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsFiducialStorageNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsFiducialNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsFiducialNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsJsonElement(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsJsonElement(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsJsonStorageNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsJsonStorageNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsLineNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsLineNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsPlaneDisplayNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsPlaneDisplayNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsPlaneJsonStorageNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsPlaneJsonStorageNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsPlaneNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsPlaneNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsROIDisplayNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsROIDisplayNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsROIJsonStorageNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsROIJsonStorageNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsROINode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMarkupsROINode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCurveMeasurementsCalculator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCurveMeasurementsCalculator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMeasurementAngle(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMeasurementAngle(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMeasurementArea(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMeasurementArea(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMeasurementLength(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMeasurementLength(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMeasurementVolume(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRMLMeasurementVolume(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkProjectMarkupsCurvePointsFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkProjectMarkupsCurvePointsFilter(PyObject *dict); }

static PyMethodDef PyvtkSlicerMarkupsModuleMRMLPython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkSlicerMarkupsModuleMRMLPython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkSlicerMarkupsModuleMRMLPython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkSlicerMarkupsModuleMRMLPython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkSlicerMarkupsModuleMRMLPython(const char * /*unused*/); }

PyObject *real_initvtkSlicerMarkupsModuleMRMLPython(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkSlicerMarkupsModuleMRMLPython_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkSlicerMarkupsModuleMRMLPython");
  }

  const char *depends[8] = {
    "MRMLCorePython",
    "vtkAddonPython",
    "vtkITKPython",
    "vtkSegmentationCorePython",
    "vtkTeemPython",
    "MRMLLogicPython",
    "MRMLDisplayableManagerPython",
    "MRMLCLIPython",
  };

  for (int i = 0; i < 8; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkSlicerMarkupsModuleMRMLPython: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkSlicerMarkupsModuleMRMLPython, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkMRMLMarkupsAngleNode(d);
  PyVTKAddFile_vtkMRMLMarkupsAngleNode(d);
  PyVTKAddFile_vtkMRMLMarkupsClosedCurveNode(d);
  PyVTKAddFile_vtkMRMLMarkupsClosedCurveNode(d);
  PyVTKAddFile_vtkMRMLMarkupsCurveNode(d);
  PyVTKAddFile_vtkMRMLMarkupsCurveNode(d);
  PyVTKAddFile_vtkMRMLMarkupsDisplayNode(d);
  PyVTKAddFile_vtkMRMLMarkupsDisplayNode(d);
  PyVTKAddFile_vtkMRMLMarkupsFiducialDisplayNode(d);
  PyVTKAddFile_vtkMRMLMarkupsFiducialDisplayNode(d);
  PyVTKAddFile_vtkMRMLMarkupsFiducialStorageNode(d);
  PyVTKAddFile_vtkMRMLMarkupsFiducialStorageNode(d);
  PyVTKAddFile_vtkMRMLMarkupsFiducialNode(d);
  PyVTKAddFile_vtkMRMLMarkupsFiducialNode(d);
  PyVTKAddFile_vtkMRMLMarkupsJsonElement(d);
  PyVTKAddFile_vtkMRMLMarkupsJsonElement(d);
  PyVTKAddFile_vtkMRMLMarkupsJsonStorageNode(d);
  PyVTKAddFile_vtkMRMLMarkupsJsonStorageNode(d);
  PyVTKAddFile_vtkMRMLMarkupsLineNode(d);
  PyVTKAddFile_vtkMRMLMarkupsLineNode(d);
  PyVTKAddFile_vtkMRMLMarkupsNode(d);
  PyVTKAddFile_vtkMRMLMarkupsNode(d);
  PyVTKAddFile_vtkMRMLMarkupsPlaneDisplayNode(d);
  PyVTKAddFile_vtkMRMLMarkupsPlaneDisplayNode(d);
  PyVTKAddFile_vtkMRMLMarkupsPlaneJsonStorageNode(d);
  PyVTKAddFile_vtkMRMLMarkupsPlaneJsonStorageNode(d);
  PyVTKAddFile_vtkMRMLMarkupsPlaneNode(d);
  PyVTKAddFile_vtkMRMLMarkupsPlaneNode(d);
  PyVTKAddFile_vtkMRMLMarkupsROIDisplayNode(d);
  PyVTKAddFile_vtkMRMLMarkupsROIDisplayNode(d);
  PyVTKAddFile_vtkMRMLMarkupsROIJsonStorageNode(d);
  PyVTKAddFile_vtkMRMLMarkupsROIJsonStorageNode(d);
  PyVTKAddFile_vtkMRMLMarkupsROINode(d);
  PyVTKAddFile_vtkMRMLMarkupsROINode(d);
  PyVTKAddFile_vtkCurveMeasurementsCalculator(d);
  PyVTKAddFile_vtkCurveMeasurementsCalculator(d);
  PyVTKAddFile_vtkMRMLMeasurementAngle(d);
  PyVTKAddFile_vtkMRMLMeasurementAngle(d);
  PyVTKAddFile_vtkMRMLMeasurementArea(d);
  PyVTKAddFile_vtkMRMLMeasurementArea(d);
  PyVTKAddFile_vtkMRMLMeasurementLength(d);
  PyVTKAddFile_vtkMRMLMeasurementLength(d);
  PyVTKAddFile_vtkMRMLMeasurementVolume(d);
  PyVTKAddFile_vtkMRMLMeasurementVolume(d);
  PyVTKAddFile_vtkProjectMarkupsCurvePointsFilter(d);
  PyVTKAddFile_vtkProjectMarkupsCurvePointsFilter(d);

  vtkPythonUtil::AddModule("vtkSlicerMarkupsModuleMRMLPython");

  return m;
}
