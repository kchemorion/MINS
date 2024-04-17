// python wrapper for vtkCalculateOversamplingFactor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCalculateOversamplingFactor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCalculateOversamplingFactor(PyObject *dict); }
extern "C" { PyObject *PyvtkCalculateOversamplingFactor_ClassNew(); }


static PyObject *
PyvtkCalculateOversamplingFactor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCalculateOversamplingFactor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCalculateOversamplingFactor *op = static_cast<vtkCalculateOversamplingFactor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCalculateOversamplingFactor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCalculateOversamplingFactor *tempr = vtkCalculateOversamplingFactor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCalculateOversamplingFactor *op = static_cast<vtkCalculateOversamplingFactor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCalculateOversamplingFactor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCalculateOversamplingFactor::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(nullptr);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
    else if (tempr != nullptr)
    {
      ap.DeleteVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCalculateOversamplingFactor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCalculateOversamplingFactor *op = static_cast<vtkCalculateOversamplingFactor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCalculateOversamplingFactor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_CalculateOversamplingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateOversamplingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCalculateOversamplingFactor *op = static_cast<vtkCalculateOversamplingFactor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CalculateOversamplingFactor() :
      op->vtkCalculateOversamplingFactor::CalculateOversamplingFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_ApplyOversamplingOnImageGeometry(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ApplyOversamplingOnImageGeometry");

  vtkOrientedImageData *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetValue(temp1))
  {
    vtkCalculateOversamplingFactor::ApplyOversamplingOnImageGeometry(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_GetInputPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCalculateOversamplingFactor *op = static_cast<vtkCalculateOversamplingFactor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInputPolyData() :
      op->vtkCalculateOversamplingFactor::GetInputPolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_SetInputPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCalculateOversamplingFactor *op = static_cast<vtkCalculateOversamplingFactor *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetInputPolyData(temp0);
    }
    else
    {
      op->vtkCalculateOversamplingFactor::SetInputPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_GetReferenceGeometryImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceGeometryImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCalculateOversamplingFactor *op = static_cast<vtkCalculateOversamplingFactor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOrientedImageData *tempr = (ap.IsBound() ?
      op->GetReferenceGeometryImageData() :
      op->vtkCalculateOversamplingFactor::GetReferenceGeometryImageData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_SetReferenceGeometryImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceGeometryImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCalculateOversamplingFactor *op = static_cast<vtkCalculateOversamplingFactor *>(vp);

  vtkOrientedImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData"))
  {
    if (ap.IsBound())
    {
      op->SetReferenceGeometryImageData(temp0);
    }
    else
    {
      op->vtkCalculateOversamplingFactor::SetReferenceGeometryImageData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_GetOutputOversamplingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputOversamplingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCalculateOversamplingFactor *op = static_cast<vtkCalculateOversamplingFactor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOutputOversamplingFactor() :
      op->vtkCalculateOversamplingFactor::GetOutputOversamplingFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_GetOutputRelativeStructureSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputRelativeStructureSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCalculateOversamplingFactor *op = static_cast<vtkCalculateOversamplingFactor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOutputRelativeStructureSize() :
      op->vtkCalculateOversamplingFactor::GetOutputRelativeStructureSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_GetOutputComplexityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputComplexityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCalculateOversamplingFactor *op = static_cast<vtkCalculateOversamplingFactor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOutputComplexityMeasure() :
      op->vtkCalculateOversamplingFactor::GetOutputComplexityMeasure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_GetOutputNormalizedShapeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputNormalizedShapeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCalculateOversamplingFactor *op = static_cast<vtkCalculateOversamplingFactor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOutputNormalizedShapeIndex() :
      op->vtkCalculateOversamplingFactor::GetOutputNormalizedShapeIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_GetLogSpeedMeasurements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogSpeedMeasurements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCalculateOversamplingFactor *op = static_cast<vtkCalculateOversamplingFactor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLogSpeedMeasurements() :
      op->vtkCalculateOversamplingFactor::GetLogSpeedMeasurements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_SetLogSpeedMeasurements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogSpeedMeasurements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCalculateOversamplingFactor *op = static_cast<vtkCalculateOversamplingFactor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLogSpeedMeasurements(temp0);
    }
    else
    {
      op->vtkCalculateOversamplingFactor::SetLogSpeedMeasurements(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_LogSpeedMeasurementsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogSpeedMeasurementsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCalculateOversamplingFactor *op = static_cast<vtkCalculateOversamplingFactor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogSpeedMeasurementsOn();
    }
    else
    {
      op->vtkCalculateOversamplingFactor::LogSpeedMeasurementsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCalculateOversamplingFactor_LogSpeedMeasurementsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogSpeedMeasurementsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCalculateOversamplingFactor *op = static_cast<vtkCalculateOversamplingFactor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogSpeedMeasurementsOff();
    }
    else
    {
      op->vtkCalculateOversamplingFactor::LogSpeedMeasurementsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCalculateOversamplingFactor_Methods[] = {
  {"IsTypeOf", PyvtkCalculateOversamplingFactor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCalculateOversamplingFactor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCalculateOversamplingFactor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCalculateOversamplingFactor\nC++: static vtkCalculateOversamplingFactor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCalculateOversamplingFactor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCalculateOversamplingFactor\nC++: vtkCalculateOversamplingFactor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCalculateOversamplingFactor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCalculateOversamplingFactor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CalculateOversamplingFactor", PyvtkCalculateOversamplingFactor_CalculateOversamplingFactor, METH_VARARGS,
   "CalculateOversamplingFactor(self) -> bool\nC++: bool CalculateOversamplingFactor()\n\nCalculate oversampling factor for the input model and its\nrasterization reference volume based on model properties using\nfuzzy logics.\n"},
  {"ApplyOversamplingOnImageGeometry", PyvtkCalculateOversamplingFactor_ApplyOversamplingOnImageGeometry, METH_VARARGS,
   "ApplyOversamplingOnImageGeometry(imageData:vtkOrientedImageData,\n    oversamplingFactor:float) -> None\nC++: static void ApplyOversamplingOnImageGeometry(\n    vtkOrientedImageData *imageData, double oversamplingFactor)\n\nApply oversampling factor on image data geometry. Changes spacing\nand extent of oversampling factor is not 1 (and between 0.01 -\n100.0). Larger value results larger resulting image extent (and\nfiner resolution). Does not allocate memory, just updates\ngeometry.\n"},
  {"GetInputPolyData", PyvtkCalculateOversamplingFactor_GetInputPolyData, METH_VARARGS,
   "GetInputPolyData(self) -> vtkPolyData\nC++: virtual vtkPolyData *GetInputPolyData()\n\n"},
  {"SetInputPolyData", PyvtkCalculateOversamplingFactor_SetInputPolyData, METH_VARARGS,
   "SetInputPolyData(self, _arg:vtkPolyData) -> None\nC++: virtual void SetInputPolyData(vtkPolyData *_arg)\n\n"},
  {"GetReferenceGeometryImageData", PyvtkCalculateOversamplingFactor_GetReferenceGeometryImageData, METH_VARARGS,
   "GetReferenceGeometryImageData(self) -> vtkOrientedImageData\nC++: virtual vtkOrientedImageData *GetReferenceGeometryImageData()\n\n"},
  {"SetReferenceGeometryImageData", PyvtkCalculateOversamplingFactor_SetReferenceGeometryImageData, METH_VARARGS,
   "SetReferenceGeometryImageData(self, _arg:vtkOrientedImageData)\n    -> None\nC++: virtual void SetReferenceGeometryImageData(\n    vtkOrientedImageData *_arg)\n\n"},
  {"GetOutputOversamplingFactor", PyvtkCalculateOversamplingFactor_GetOutputOversamplingFactor, METH_VARARGS,
   "GetOutputOversamplingFactor(self) -> float\nC++: virtual double GetOutputOversamplingFactor()\n\n"},
  {"GetOutputRelativeStructureSize", PyvtkCalculateOversamplingFactor_GetOutputRelativeStructureSize, METH_VARARGS,
   "GetOutputRelativeStructureSize(self) -> float\nC++: virtual double GetOutputRelativeStructureSize()\n\n"},
  {"GetOutputComplexityMeasure", PyvtkCalculateOversamplingFactor_GetOutputComplexityMeasure, METH_VARARGS,
   "GetOutputComplexityMeasure(self) -> float\nC++: virtual double GetOutputComplexityMeasure()\n\n"},
  {"GetOutputNormalizedShapeIndex", PyvtkCalculateOversamplingFactor_GetOutputNormalizedShapeIndex, METH_VARARGS,
   "GetOutputNormalizedShapeIndex(self) -> float\nC++: virtual double GetOutputNormalizedShapeIndex()\n\n"},
  {"GetLogSpeedMeasurements", PyvtkCalculateOversamplingFactor_GetLogSpeedMeasurements, METH_VARARGS,
   "GetLogSpeedMeasurements(self) -> bool\nC++: virtual bool GetLogSpeedMeasurements()\n\n"},
  {"SetLogSpeedMeasurements", PyvtkCalculateOversamplingFactor_SetLogSpeedMeasurements, METH_VARARGS,
   "SetLogSpeedMeasurements(self, _arg:bool) -> None\nC++: virtual void SetLogSpeedMeasurements(bool _arg)\n\n"},
  {"LogSpeedMeasurementsOn", PyvtkCalculateOversamplingFactor_LogSpeedMeasurementsOn, METH_VARARGS,
   "LogSpeedMeasurementsOn(self) -> None\nC++: virtual void LogSpeedMeasurementsOn()\n\n"},
  {"LogSpeedMeasurementsOff", PyvtkCalculateOversamplingFactor_LogSpeedMeasurementsOff, METH_VARARGS,
   "LogSpeedMeasurementsOff(self) -> None\nC++: virtual void LogSpeedMeasurementsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCalculateOversamplingFactor_Doc =
  "vtkCalculateOversamplingFactor - Calculate oversampling factor based\non model properties\n\n"
  "Superclass: vtkObject\n\n"
  "\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCalculateOversamplingFactor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkCalculateOversamplingFactor", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkCalculateOversamplingFactor_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static vtkObjectBase *PyvtkCalculateOversamplingFactor_StaticNew()
{
  return vtkCalculateOversamplingFactor::New();
}

PyObject *PyvtkCalculateOversamplingFactor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCalculateOversamplingFactor_Type, PyvtkCalculateOversamplingFactor_Methods,
    "vtkCalculateOversamplingFactor",
 &PyvtkCalculateOversamplingFactor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCalculateOversamplingFactor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCalculateOversamplingFactor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCalculateOversamplingFactor", o) != 0)
  {
    Py_DECREF(o);
  }

}

