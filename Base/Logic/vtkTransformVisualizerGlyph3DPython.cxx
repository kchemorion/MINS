// python wrapper for vtkTransformVisualizerGlyph3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTransformVisualizerGlyph3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTransformVisualizerGlyph3D(PyObject *dict); }
extern "C" { PyObject *PyvtkTransformVisualizerGlyph3D_ClassNew(); }


static PyObject *
PyvtkTransformVisualizerGlyph3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTransformVisualizerGlyph3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformVisualizerGlyph3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformVisualizerGlyph3D *op = static_cast<vtkTransformVisualizerGlyph3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransformVisualizerGlyph3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformVisualizerGlyph3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTransformVisualizerGlyph3D *tempr = vtkTransformVisualizerGlyph3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformVisualizerGlyph3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformVisualizerGlyph3D *op = static_cast<vtkTransformVisualizerGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransformVisualizerGlyph3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransformVisualizerGlyph3D::NewInstance());

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
PyvtkTransformVisualizerGlyph3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTransformVisualizerGlyph3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformVisualizerGlyph3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformVisualizerGlyph3D *op = static_cast<vtkTransformVisualizerGlyph3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTransformVisualizerGlyph3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformVisualizerGlyph3D_SetScaleDirectional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleDirectional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformVisualizerGlyph3D *op = static_cast<vtkTransformVisualizerGlyph3D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleDirectional(temp0);
    }
    else
    {
      op->vtkTransformVisualizerGlyph3D::SetScaleDirectional(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformVisualizerGlyph3D_GetScaleDirectional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleDirectional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformVisualizerGlyph3D *op = static_cast<vtkTransformVisualizerGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaleDirectional() :
      op->vtkTransformVisualizerGlyph3D::GetScaleDirectional());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformVisualizerGlyph3D_SetVectorArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformVisualizerGlyph3D *op = static_cast<vtkTransformVisualizerGlyph3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorArray(temp0);
    }
    else
    {
      op->vtkTransformVisualizerGlyph3D::SetVectorArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformVisualizerGlyph3D_SetScalarArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformVisualizerGlyph3D *op = static_cast<vtkTransformVisualizerGlyph3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarArray(temp0);
    }
    else
    {
      op->vtkTransformVisualizerGlyph3D::SetScalarArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformVisualizerGlyph3D_SetColorArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformVisualizerGlyph3D *op = static_cast<vtkTransformVisualizerGlyph3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorArray(temp0);
    }
    else
    {
      op->vtkTransformVisualizerGlyph3D::SetColorArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformVisualizerGlyph3D_SetMagnitudeThresholding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnitudeThresholding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformVisualizerGlyph3D *op = static_cast<vtkTransformVisualizerGlyph3D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMagnitudeThresholding(temp0);
    }
    else
    {
      op->vtkTransformVisualizerGlyph3D::SetMagnitudeThresholding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformVisualizerGlyph3D_GetMagnitudeThresholding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnitudeThresholding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformVisualizerGlyph3D *op = static_cast<vtkTransformVisualizerGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMagnitudeThresholding() :
      op->vtkTransformVisualizerGlyph3D::GetMagnitudeThresholding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformVisualizerGlyph3D_SetMagnitudeThresholdLower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnitudeThresholdLower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformVisualizerGlyph3D *op = static_cast<vtkTransformVisualizerGlyph3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMagnitudeThresholdLower(temp0);
    }
    else
    {
      op->vtkTransformVisualizerGlyph3D::SetMagnitudeThresholdLower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformVisualizerGlyph3D_GetMagnitudeThresholdLower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnitudeThresholdLower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformVisualizerGlyph3D *op = static_cast<vtkTransformVisualizerGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMagnitudeThresholdLower() :
      op->vtkTransformVisualizerGlyph3D::GetMagnitudeThresholdLower());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformVisualizerGlyph3D_SetMagnitudeThresholdUpper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnitudeThresholdUpper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformVisualizerGlyph3D *op = static_cast<vtkTransformVisualizerGlyph3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMagnitudeThresholdUpper(temp0);
    }
    else
    {
      op->vtkTransformVisualizerGlyph3D::SetMagnitudeThresholdUpper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformVisualizerGlyph3D_GetMagnitudeThresholdUpper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnitudeThresholdUpper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformVisualizerGlyph3D *op = static_cast<vtkTransformVisualizerGlyph3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMagnitudeThresholdUpper() :
      op->vtkTransformVisualizerGlyph3D::GetMagnitudeThresholdUpper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTransformVisualizerGlyph3D_Methods[] = {
  {"IsTypeOf", PyvtkTransformVisualizerGlyph3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTransformVisualizerGlyph3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTransformVisualizerGlyph3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTransformVisualizerGlyph3D\nC++: static vtkTransformVisualizerGlyph3D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTransformVisualizerGlyph3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTransformVisualizerGlyph3D\nC++: vtkTransformVisualizerGlyph3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTransformVisualizerGlyph3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTransformVisualizerGlyph3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetScaleDirectional", PyvtkTransformVisualizerGlyph3D_SetScaleDirectional, METH_VARARGS,
   "SetScaleDirectional(self, _arg:bool) -> None\nC++: virtual void SetScaleDirectional(bool _arg)\n\nIf true then glyphs are only scaled with the scalar value along x\naxis (y and z scaling is 1). If false then glyphs are scaled\nuniformly with the scalar value.\n"},
  {"GetScaleDirectional", PyvtkTransformVisualizerGlyph3D_GetScaleDirectional, METH_VARARGS,
   "GetScaleDirectional(self) -> bool\nC++: virtual bool GetScaleDirectional()\n\n"},
  {"SetVectorArray", PyvtkTransformVisualizerGlyph3D_SetVectorArray, METH_VARARGS,
   "SetVectorArray(self, vectorArrayName:str) -> None\nC++: void SetVectorArray(const char *vectorArrayName)\n\nSet the array used for orienting (and optionally scaling) the\nglyphs. Default: active vector array.\n"},
  {"SetScalarArray", PyvtkTransformVisualizerGlyph3D_SetScalarArray, METH_VARARGS,
   "SetScalarArray(self, scalarArrayName:str) -> None\nC++: void SetScalarArray(const char *scalarArrayName)\n\nSet the array used for (optionally) scaling the glyphs. Default:\nactive scalar array.\n"},
  {"SetColorArray", PyvtkTransformVisualizerGlyph3D_SetColorArray, METH_VARARGS,
   "SetColorArray(self, colorArrayName:str) -> None\nC++: void SetColorArray(const char *colorArrayName)\n\nSet the array used for coloring the glyphs. Default: active\nscalar array.\n"},
  {"SetMagnitudeThresholding", PyvtkTransformVisualizerGlyph3D_SetMagnitudeThresholding, METH_VARARGS,
   "SetMagnitudeThresholding(self, _arg:bool) -> None\nC++: virtual void SetMagnitudeThresholding(bool _arg)\n\nIf true then points with scalar value outside the lower or upper\nthreshold are ignored\n"},
  {"GetMagnitudeThresholding", PyvtkTransformVisualizerGlyph3D_GetMagnitudeThresholding, METH_VARARGS,
   "GetMagnitudeThresholding(self) -> bool\nC++: virtual bool GetMagnitudeThresholding()\n\n"},
  {"SetMagnitudeThresholdLower", PyvtkTransformVisualizerGlyph3D_SetMagnitudeThresholdLower, METH_VARARGS,
   "SetMagnitudeThresholdLower(self, _arg:float) -> None\nC++: virtual void SetMagnitudeThresholdLower(double _arg)\n\nPoints with scalar value below this value are ignored (if\nthresholding is enabled)\n"},
  {"GetMagnitudeThresholdLower", PyvtkTransformVisualizerGlyph3D_GetMagnitudeThresholdLower, METH_VARARGS,
   "GetMagnitudeThresholdLower(self) -> float\nC++: virtual double GetMagnitudeThresholdLower()\n\n"},
  {"SetMagnitudeThresholdUpper", PyvtkTransformVisualizerGlyph3D_SetMagnitudeThresholdUpper, METH_VARARGS,
   "SetMagnitudeThresholdUpper(self, _arg:float) -> None\nC++: virtual void SetMagnitudeThresholdUpper(double _arg)\n\nPoints with scalar value above this value are ignored (if\nthresholding is enabled)\n"},
  {"GetMagnitudeThresholdUpper", PyvtkTransformVisualizerGlyph3D_GetMagnitudeThresholdUpper, METH_VARARGS,
   "GetMagnitudeThresholdUpper(self) -> float\nC++: virtual double GetMagnitudeThresholdUpper()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTransformVisualizerGlyph3D_Doc =
  "vtkTransformVisualizerGlyph3D - Specialized glyph3d filter optimized\nfor visualizing transforms\n\n"
  "Superclass: vtkGlyph3D\n\n"
  "This class extends the vtkGlyph3D filter with the following features:\n"
  "- anisotropic scaling of glyphs: e.g., only the length of an arrow is\n"
  "scaled with the vector magnitude\n"
  "- use a different scalar for scaling and coloring\n"
  "- generate glyphs only if the corresponding scalar is in specified\n"
  "  range\n"
  "- simplified, optimized generation of glyphs\n\n"
  "Supported options:\n"
  "- Scaling: VTK_SCALE_BY_SCALAR and VTK_SCALE_BY_VECTOR\n"
  "- Color: only by scalar (set by SetColorArray)\n"
  "- Vector: only VTK_USE_VECTOR (oriented and scaled by active vector)\n"
  "- Indexing: not supported\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTransformVisualizerGlyph3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "SlicerBaseLogicPython.vtkTransformVisualizerGlyph3D", // tp_name
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
  PyvtkTransformVisualizerGlyph3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTransformVisualizerGlyph3D_StaticNew()
{
  return vtkTransformVisualizerGlyph3D::New();
}

PyObject *PyvtkTransformVisualizerGlyph3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTransformVisualizerGlyph3D_Type, PyvtkTransformVisualizerGlyph3D_Methods,
    "vtkTransformVisualizerGlyph3D",
 &PyvtkTransformVisualizerGlyph3D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkGlyph3D");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTransformVisualizerGlyph3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTransformVisualizerGlyph3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTransformVisualizerGlyph3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

