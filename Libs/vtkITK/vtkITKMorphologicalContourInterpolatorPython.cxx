// python wrapper for vtkITKMorphologicalContourInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkITKMorphologicalContourInterpolator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkITKMorphologicalContourInterpolator(PyObject *dict); }
extern "C" { PyObject *PyvtkITKMorphologicalContourInterpolator_ClassNew(); }


static PyObject *
PyvtkITKMorphologicalContourInterpolator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkITKMorphologicalContourInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKMorphologicalContourInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKMorphologicalContourInterpolator *op = static_cast<vtkITKMorphologicalContourInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkITKMorphologicalContourInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKMorphologicalContourInterpolator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkITKMorphologicalContourInterpolator *tempr = vtkITKMorphologicalContourInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKMorphologicalContourInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKMorphologicalContourInterpolator *op = static_cast<vtkITKMorphologicalContourInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkITKMorphologicalContourInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkITKMorphologicalContourInterpolator::NewInstance());

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
PyvtkITKMorphologicalContourInterpolator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkITKMorphologicalContourInterpolator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKMorphologicalContourInterpolator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKMorphologicalContourInterpolator *op = static_cast<vtkITKMorphologicalContourInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkITKMorphologicalContourInterpolator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKMorphologicalContourInterpolator_GetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKMorphologicalContourInterpolator *op = static_cast<vtkITKMorphologicalContourInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long tempr = (ap.IsBound() ?
      op->GetLabel() :
      op->vtkITKMorphologicalContourInterpolator::GetLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKMorphologicalContourInterpolator_SetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKMorphologicalContourInterpolator *op = static_cast<vtkITKMorphologicalContourInterpolator *>(vp);

  long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabel(temp0);
    }
    else
    {
      op->vtkITKMorphologicalContourInterpolator::SetLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKMorphologicalContourInterpolator_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKMorphologicalContourInterpolator *op = static_cast<vtkITKMorphologicalContourInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkITKMorphologicalContourInterpolator::GetAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKMorphologicalContourInterpolator_SetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKMorphologicalContourInterpolator *op = static_cast<vtkITKMorphologicalContourInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxis(temp0);
    }
    else
    {
      op->vtkITKMorphologicalContourInterpolator::SetAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKMorphologicalContourInterpolator_GetHeuristicAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeuristicAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKMorphologicalContourInterpolator *op = static_cast<vtkITKMorphologicalContourInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHeuristicAlignment() :
      op->vtkITKMorphologicalContourInterpolator::GetHeuristicAlignment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKMorphologicalContourInterpolator_SetHeuristicAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeuristicAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKMorphologicalContourInterpolator *op = static_cast<vtkITKMorphologicalContourInterpolator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeuristicAlignment(temp0);
    }
    else
    {
      op->vtkITKMorphologicalContourInterpolator::SetHeuristicAlignment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKMorphologicalContourInterpolator_GetUseDistanceTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDistanceTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKMorphologicalContourInterpolator *op = static_cast<vtkITKMorphologicalContourInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDistanceTransform() :
      op->vtkITKMorphologicalContourInterpolator::GetUseDistanceTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKMorphologicalContourInterpolator_SetUseDistanceTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDistanceTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKMorphologicalContourInterpolator *op = static_cast<vtkITKMorphologicalContourInterpolator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDistanceTransform(temp0);
    }
    else
    {
      op->vtkITKMorphologicalContourInterpolator::SetUseDistanceTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKMorphologicalContourInterpolator_GetUseBallStructuringElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBallStructuringElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKMorphologicalContourInterpolator *op = static_cast<vtkITKMorphologicalContourInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseBallStructuringElement() :
      op->vtkITKMorphologicalContourInterpolator::GetUseBallStructuringElement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKMorphologicalContourInterpolator_SetUseBallStructuringElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBallStructuringElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKMorphologicalContourInterpolator *op = static_cast<vtkITKMorphologicalContourInterpolator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseBallStructuringElement(temp0);
    }
    else
    {
      op->vtkITKMorphologicalContourInterpolator::SetUseBallStructuringElement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkITKMorphologicalContourInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkITKMorphologicalContourInterpolator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkITKMorphologicalContourInterpolator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkITKMorphologicalContourInterpolator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkITKMorphologicalContourInterpolator\nC++: static vtkITKMorphologicalContourInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkITKMorphologicalContourInterpolator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkITKMorphologicalContourInterpolator\nC++: vtkITKMorphologicalContourInterpolator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkITKMorphologicalContourInterpolator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkITKMorphologicalContourInterpolator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetLabel", PyvtkITKMorphologicalContourInterpolator_GetLabel, METH_VARARGS,
   "GetLabel(self) -> int\nC++: virtual long GetLabel()\n\nInterpolate only this label. Interpolates all labels if set to 0\n(default).\n"},
  {"SetLabel", PyvtkITKMorphologicalContourInterpolator_SetLabel, METH_VARARGS,
   "SetLabel(self, _arg:int) -> None\nC++: virtual void SetLabel(long _arg)\n\n"},
  {"GetAxis", PyvtkITKMorphologicalContourInterpolator_GetAxis, METH_VARARGS,
   "GetAxis(self) -> int\nC++: virtual int GetAxis()\n\nInterpolate only along this axis. Interpolates along all axes if\nset to -1 (default).\n"},
  {"SetAxis", PyvtkITKMorphologicalContourInterpolator_SetAxis, METH_VARARGS,
   "SetAxis(self, _arg:int) -> None\nC++: virtual void SetAxis(int _arg)\n\n"},
  {"GetHeuristicAlignment", PyvtkITKMorphologicalContourInterpolator_GetHeuristicAlignment, METH_VARARGS,
   "GetHeuristicAlignment(self) -> bool\nC++: virtual bool GetHeuristicAlignment()\n\nHeuristic alignment of regions for interpolation is faster than\noptimal alignment. Default is heuristic.\n"},
  {"SetHeuristicAlignment", PyvtkITKMorphologicalContourInterpolator_SetHeuristicAlignment, METH_VARARGS,
   "SetHeuristicAlignment(self, _arg:bool) -> None\nC++: virtual void SetHeuristicAlignment(bool _arg)\n\n"},
  {"GetUseDistanceTransform", PyvtkITKMorphologicalContourInterpolator_GetUseDistanceTransform, METH_VARARGS,
   "GetUseDistanceTransform(self) -> bool\nC++: virtual bool GetUseDistanceTransform()\n\nUsing distance transform instead of repeated dilations to\ncalculate the median contour is slightly faster, but produces\nlower quality interpolations. Default is OFF(that is, use\nrepeated dilations).\n"},
  {"SetUseDistanceTransform", PyvtkITKMorphologicalContourInterpolator_SetUseDistanceTransform, METH_VARARGS,
   "SetUseDistanceTransform(self, _arg:bool) -> None\nC++: virtual void SetUseDistanceTransform(bool _arg)\n\n"},
  {"GetUseBallStructuringElement", PyvtkITKMorphologicalContourInterpolator_GetUseBallStructuringElement, METH_VARARGS,
   "GetUseBallStructuringElement(self) -> bool\nC++: virtual bool GetUseBallStructuringElement()\n\nUse ball instead of default cross structuring element for\nrepeated dilations.\n"},
  {"SetUseBallStructuringElement", PyvtkITKMorphologicalContourInterpolator_SetUseBallStructuringElement, METH_VARARGS,
   "SetUseBallStructuringElement(self, _arg:bool) -> None\nC++: virtual void SetUseBallStructuringElement(bool _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkITKMorphologicalContourInterpolator_Doc =
  "vtkITKMorphologicalContourInterpolator - Wrapper class around\nitk::MorphologicalContourInterpolator.\n\n"
  "Superclass: vtkSimpleImageToImageFilter\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkITKMorphologicalContourInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkITKPython.vtkITKMorphologicalContourInterpolator", // tp_name
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
  PyvtkITKMorphologicalContourInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkITKMorphologicalContourInterpolator_StaticNew()
{
  return vtkITKMorphologicalContourInterpolator::New();
}

PyObject *PyvtkITKMorphologicalContourInterpolator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkITKMorphologicalContourInterpolator_Type, PyvtkITKMorphologicalContourInterpolator_Methods,
    "vtkITKMorphologicalContourInterpolator",
 &PyvtkITKMorphologicalContourInterpolator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSimpleImageToImageFilter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkITKMorphologicalContourInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkITKMorphologicalContourInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkITKMorphologicalContourInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

