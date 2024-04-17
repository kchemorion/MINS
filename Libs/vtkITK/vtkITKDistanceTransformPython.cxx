// python wrapper for vtkITKDistanceTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkITKDistanceTransform.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkITKDistanceTransform(PyObject *dict); }
extern "C" { PyObject *PyvtkITKDistanceTransform_ClassNew(); }


static PyObject *
PyvtkITKDistanceTransform_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkITKDistanceTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKDistanceTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKDistanceTransform *op = static_cast<vtkITKDistanceTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkITKDistanceTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKDistanceTransform_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkITKDistanceTransform *tempr = vtkITKDistanceTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKDistanceTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKDistanceTransform *op = static_cast<vtkITKDistanceTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkITKDistanceTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkITKDistanceTransform::NewInstance());

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
PyvtkITKDistanceTransform_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkITKDistanceTransform::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKDistanceTransform_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKDistanceTransform *op = static_cast<vtkITKDistanceTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkITKDistanceTransform::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKDistanceTransform_GetSquaredDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSquaredDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKDistanceTransform *op = static_cast<vtkITKDistanceTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSquaredDistance() :
      op->vtkITKDistanceTransform::GetSquaredDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKDistanceTransform_SetSquaredDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSquaredDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKDistanceTransform *op = static_cast<vtkITKDistanceTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSquaredDistance(temp0);
    }
    else
    {
      op->vtkITKDistanceTransform::SetSquaredDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKDistanceTransform_GetInsideIsPositive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideIsPositive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKDistanceTransform *op = static_cast<vtkITKDistanceTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsideIsPositive() :
      op->vtkITKDistanceTransform::GetInsideIsPositive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKDistanceTransform_SetInsideIsPositive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideIsPositive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKDistanceTransform *op = static_cast<vtkITKDistanceTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsideIsPositive(temp0);
    }
    else
    {
      op->vtkITKDistanceTransform::SetInsideIsPositive(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKDistanceTransform_GetUseImageSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseImageSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKDistanceTransform *op = static_cast<vtkITKDistanceTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseImageSpacing() :
      op->vtkITKDistanceTransform::GetUseImageSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKDistanceTransform_SetUseImageSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseImageSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKDistanceTransform *op = static_cast<vtkITKDistanceTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseImageSpacing(temp0);
    }
    else
    {
      op->vtkITKDistanceTransform::SetUseImageSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKDistanceTransform_GetBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKDistanceTransform *op = static_cast<vtkITKDistanceTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundValue() :
      op->vtkITKDistanceTransform::GetBackgroundValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKDistanceTransform_SetBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKDistanceTransform *op = static_cast<vtkITKDistanceTransform *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundValue(temp0);
    }
    else
    {
      op->vtkITKDistanceTransform::SetBackgroundValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkITKDistanceTransform_Methods[] = {
  {"IsTypeOf", PyvtkITKDistanceTransform_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkITKDistanceTransform_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkITKDistanceTransform_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkITKDistanceTransform\nC++: static vtkITKDistanceTransform *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkITKDistanceTransform_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkITKDistanceTransform\nC++: vtkITKDistanceTransform *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkITKDistanceTransform_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkITKDistanceTransform_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetSquaredDistance", PyvtkITKDistanceTransform_GetSquaredDistance, METH_VARARGS,
   "GetSquaredDistance(self) -> int\nC++: virtual int GetSquaredDistance()\n\nOutput volume contains square of distance or actual distance\n"},
  {"SetSquaredDistance", PyvtkITKDistanceTransform_SetSquaredDistance, METH_VARARGS,
   "SetSquaredDistance(self, _arg:int) -> None\nC++: virtual void SetSquaredDistance(int _arg)\n\n"},
  {"GetInsideIsPositive", PyvtkITKDistanceTransform_GetInsideIsPositive, METH_VARARGS,
   "GetInsideIsPositive(self) -> int\nC++: virtual int GetInsideIsPositive()\n\nPixels inside region positive\n"},
  {"SetInsideIsPositive", PyvtkITKDistanceTransform_SetInsideIsPositive, METH_VARARGS,
   "SetInsideIsPositive(self, _arg:int) -> None\nC++: virtual void SetInsideIsPositive(int _arg)\n\n"},
  {"GetUseImageSpacing", PyvtkITKDistanceTransform_GetUseImageSpacing, METH_VARARGS,
   "GetUseImageSpacing(self) -> int\nC++: virtual int GetUseImageSpacing()\n\nUse image spacing when calculating distances\n"},
  {"SetUseImageSpacing", PyvtkITKDistanceTransform_SetUseImageSpacing, METH_VARARGS,
   "SetUseImageSpacing(self, _arg:int) -> None\nC++: virtual void SetUseImageSpacing(int _arg)\n\n"},
  {"GetBackgroundValue", PyvtkITKDistanceTransform_GetBackgroundValue, METH_VARARGS,
   "GetBackgroundValue(self) -> float\nC++: virtual double GetBackgroundValue()\n\nValue of background\n"},
  {"SetBackgroundValue", PyvtkITKDistanceTransform_SetBackgroundValue, METH_VARARGS,
   "SetBackgroundValue(self, _arg:float) -> None\nC++: virtual void SetBackgroundValue(double _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkITKDistanceTransform_Doc =
  "vtkITKDistanceTransform - Wrapper class around\nitk::SignedMaurerDistanceMapImageFilter.\n\n"
  "Superclass: vtkSimpleImageToImageFilter\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkITKDistanceTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkITKPython.vtkITKDistanceTransform", // tp_name
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
  PyvtkITKDistanceTransform_Doc, // tp_doc
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

static vtkObjectBase *PyvtkITKDistanceTransform_StaticNew()
{
  return vtkITKDistanceTransform::New();
}

PyObject *PyvtkITKDistanceTransform_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkITKDistanceTransform_Type, PyvtkITKDistanceTransform_Methods,
    "vtkITKDistanceTransform",
 &PyvtkITKDistanceTransform_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSimpleImageToImageFilter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkITKDistanceTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkITKDistanceTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkITKDistanceTransform", o) != 0)
  {
    Py_DECREF(o);
  }

}

