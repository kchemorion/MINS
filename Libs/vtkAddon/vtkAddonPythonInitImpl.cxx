// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkAddonMathUtilities(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkAddonMathUtilities(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkAddonSetGet(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkAddonTestingUtilities(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkAddonTestingUtilities(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkAddonTestingUtilities(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCurveGenerator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCurveGenerator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkErrorSink(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkErrorSink(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageLabelDilate3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageLabelDilate3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkLinearSpline(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkLinearSpline(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkLoggingMacros(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkOrientedBSplineTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkOrientedBSplineTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkOrientedGridTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkOrientedGridTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParallelTransportFrame(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParallelTransportFrame(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricPolynomialApproximation(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricPolynomialApproximation(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPersonInformation(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPersonInformation(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRawRGBVolumeCodec(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRawRGBVolumeCodec(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerDijkstraGraphGeodesicPath(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSlicerDijkstraGraphGeodesicPath(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStreamingVolumeCodec(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStreamingVolumeCodec(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStreamingVolumeCodecFactory(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStreamingVolumeCodecFactory(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStreamingVolumeFrame(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStreamingVolumeFrame(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTestingOutputWindow(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTestingOutputWindow(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkOpenGLShaderComputation(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkOpenGLShaderComputation(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkOpenGLTextureImage(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkOpenGLTextureImage(PyObject *dict); }

static PyMethodDef PyvtkAddonPython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkAddonPython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkAddonPython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkAddonPython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkAddonPython(const char * /*unused*/); }

PyObject *real_initvtkAddonPython(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkAddonPython_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkAddonPython");
  }

  vtkPythonUtil::Initialize();

  PyVTKAddFile_vtkAddonMathUtilities(d);
  PyVTKAddFile_vtkAddonMathUtilities(d);
  PyVTKAddFile_vtkAddonSetGet(d);
  PyVTKAddFile_vtkAddonTestingUtilities(d);
  PyVTKAddFile_vtkAddonTestingUtilities(d);
  PyVTKAddFile_vtkAddonTestingUtilities(d);
  PyVTKAddFile_vtkCurveGenerator(d);
  PyVTKAddFile_vtkCurveGenerator(d);
  PyVTKAddFile_vtkErrorSink(d);
  PyVTKAddFile_vtkErrorSink(d);
  PyVTKAddFile_vtkImageLabelDilate3D(d);
  PyVTKAddFile_vtkImageLabelDilate3D(d);
  PyVTKAddFile_vtkLinearSpline(d);
  PyVTKAddFile_vtkLinearSpline(d);
  PyVTKAddFile_vtkLoggingMacros(d);
  PyVTKAddFile_vtkOrientedBSplineTransform(d);
  PyVTKAddFile_vtkOrientedBSplineTransform(d);
  PyVTKAddFile_vtkOrientedGridTransform(d);
  PyVTKAddFile_vtkOrientedGridTransform(d);
  PyVTKAddFile_vtkParallelTransportFrame(d);
  PyVTKAddFile_vtkParallelTransportFrame(d);
  PyVTKAddFile_vtkParametricPolynomialApproximation(d);
  PyVTKAddFile_vtkParametricPolynomialApproximation(d);
  PyVTKAddFile_vtkPersonInformation(d);
  PyVTKAddFile_vtkPersonInformation(d);
  PyVTKAddFile_vtkRawRGBVolumeCodec(d);
  PyVTKAddFile_vtkRawRGBVolumeCodec(d);
  PyVTKAddFile_vtkSlicerDijkstraGraphGeodesicPath(d);
  PyVTKAddFile_vtkSlicerDijkstraGraphGeodesicPath(d);
  PyVTKAddFile_vtkStreamingVolumeCodec(d);
  PyVTKAddFile_vtkStreamingVolumeCodec(d);
  PyVTKAddFile_vtkStreamingVolumeCodecFactory(d);
  PyVTKAddFile_vtkStreamingVolumeCodecFactory(d);
  PyVTKAddFile_vtkStreamingVolumeFrame(d);
  PyVTKAddFile_vtkStreamingVolumeFrame(d);
  PyVTKAddFile_vtkTestingOutputWindow(d);
  PyVTKAddFile_vtkTestingOutputWindow(d);
  PyVTKAddFile_vtkOpenGLShaderComputation(d);
  PyVTKAddFile_vtkOpenGLShaderComputation(d);
  PyVTKAddFile_vtkOpenGLTextureImage(d);
  PyVTKAddFile_vtkOpenGLTextureImage(d);

  vtkPythonUtil::AddModule("vtkAddonPython");

  return m;
}
