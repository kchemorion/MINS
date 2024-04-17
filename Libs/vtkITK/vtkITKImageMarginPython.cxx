// python wrapper for vtkITKImageMargin
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkITKImageMargin.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkITKImageMargin(PyObject *dict); }
extern "C" { PyObject *PyvtkITKImageMargin_ClassNew(); }


static PyObject *
PyvtkITKImageMargin_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkITKImageMargin::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageMargin *op = static_cast<vtkITKImageMargin *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkITKImageMargin::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkITKImageMargin *tempr = vtkITKImageMargin::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageMargin *op = static_cast<vtkITKImageMargin *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkITKImageMargin *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkITKImageMargin::NewInstance());

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
PyvtkITKImageMargin_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkITKImageMargin::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageMargin *op = static_cast<vtkITKImageMargin *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkITKImageMargin::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_GetBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageMargin *op = static_cast<vtkITKImageMargin *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBackgroundValue() :
      op->vtkITKImageMargin::GetBackgroundValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_SetBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageMargin *op = static_cast<vtkITKImageMargin *>(vp);

  int temp0;
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
      op->vtkITKImageMargin::SetBackgroundValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_GetCalculateMarginInMM(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalculateMarginInMM");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageMargin *op = static_cast<vtkITKImageMargin *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCalculateMarginInMM() :
      op->vtkITKImageMargin::GetCalculateMarginInMM());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_SetCalculateMarginInMM(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalculateMarginInMM");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageMargin *op = static_cast<vtkITKImageMargin *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCalculateMarginInMM(temp0);
    }
    else
    {
      op->vtkITKImageMargin::SetCalculateMarginInMM(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_CalculateMarginInMMOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateMarginInMMOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageMargin *op = static_cast<vtkITKImageMargin *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateMarginInMMOn();
    }
    else
    {
      op->vtkITKImageMargin::CalculateMarginInMMOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_CalculateMarginInMMOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateMarginInMMOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageMargin *op = static_cast<vtkITKImageMargin *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateMarginInMMOff();
    }
    else
    {
      op->vtkITKImageMargin::CalculateMarginInMMOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_GetOuterMarginMM(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterMarginMM");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageMargin *op = static_cast<vtkITKImageMargin *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOuterMarginMM() :
      op->vtkITKImageMargin::GetOuterMarginMM());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_SetOuterMarginMM(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOuterMarginMM");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageMargin *op = static_cast<vtkITKImageMargin *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOuterMarginMM(temp0);
    }
    else
    {
      op->vtkITKImageMargin::SetOuterMarginMM(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_GetInnerMarginMM(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerMarginMM");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageMargin *op = static_cast<vtkITKImageMargin *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInnerMarginMM() :
      op->vtkITKImageMargin::GetInnerMarginMM());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_SetInnerMarginMM(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInnerMarginMM");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageMargin *op = static_cast<vtkITKImageMargin *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInnerMarginMM(temp0);
    }
    else
    {
      op->vtkITKImageMargin::SetInnerMarginMM(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_GetOuterMarginVoxels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterMarginVoxels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageMargin *op = static_cast<vtkITKImageMargin *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOuterMarginVoxels() :
      op->vtkITKImageMargin::GetOuterMarginVoxels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_SetOuterMarginVoxels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOuterMarginVoxels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageMargin *op = static_cast<vtkITKImageMargin *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOuterMarginVoxels(temp0);
    }
    else
    {
      op->vtkITKImageMargin::SetOuterMarginVoxels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_GetInnerMarginVoxels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerMarginVoxels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageMargin *op = static_cast<vtkITKImageMargin *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInnerMarginVoxels() :
      op->vtkITKImageMargin::GetInnerMarginVoxels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageMargin_SetInnerMarginVoxels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInnerMarginVoxels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageMargin *op = static_cast<vtkITKImageMargin *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInnerMarginVoxels(temp0);
    }
    else
    {
      op->vtkITKImageMargin::SetInnerMarginVoxels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkITKImageMargin_Methods[] = {
  {"IsTypeOf", PyvtkITKImageMargin_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkITKImageMargin_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkITKImageMargin_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkITKImageMargin\nC++: static vtkITKImageMargin *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkITKImageMargin_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkITKImageMargin\nC++: vtkITKImageMargin *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkITKImageMargin_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkITKImageMargin_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetBackgroundValue", PyvtkITKImageMargin_GetBackgroundValue, METH_VARARGS,
   "GetBackgroundValue(self) -> int\nC++: virtual int GetBackgroundValue()\n\nThe background value that is considered \"outside\" the image.\nDefault value is 0.\n"},
  {"SetBackgroundValue", PyvtkITKImageMargin_SetBackgroundValue, METH_VARARGS,
   "SetBackgroundValue(self, _arg:int) -> None\nC++: virtual void SetBackgroundValue(int _arg)\n\n"},
  {"GetCalculateMarginInMM", PyvtkITKImageMargin_GetCalculateMarginInMM, METH_VARARGS,
   "GetCalculateMarginInMM(self) -> bool\nC++: virtual bool GetCalculateMarginInMM()\n\nIf the margin calculation should be calculated using image\nspacing, or using a set number of voxels\n"},
  {"SetCalculateMarginInMM", PyvtkITKImageMargin_SetCalculateMarginInMM, METH_VARARGS,
   "SetCalculateMarginInMM(self, _arg:bool) -> None\nC++: virtual void SetCalculateMarginInMM(bool _arg)\n\n"},
  {"CalculateMarginInMMOn", PyvtkITKImageMargin_CalculateMarginInMMOn, METH_VARARGS,
   "CalculateMarginInMMOn(self) -> None\nC++: virtual void CalculateMarginInMMOn()\n\n"},
  {"CalculateMarginInMMOff", PyvtkITKImageMargin_CalculateMarginInMMOff, METH_VARARGS,
   "CalculateMarginInMMOff(self) -> None\nC++: virtual void CalculateMarginInMMOff()\n\n"},
  {"GetOuterMarginMM", PyvtkITKImageMargin_GetOuterMarginMM, METH_VARARGS,
   "GetOuterMarginMM(self) -> float\nC++: virtual double GetOuterMarginMM()\n\nThe distance of the outer margin from the surface. Positive\nvalues are outside the foreground, and negative values are inside\nthe foreground. Default value is 0.0.\n"},
  {"SetOuterMarginMM", PyvtkITKImageMargin_SetOuterMarginMM, METH_VARARGS,
   "SetOuterMarginMM(self, _arg:float) -> None\nC++: virtual void SetOuterMarginMM(double _arg)\n\n"},
  {"GetInnerMarginMM", PyvtkITKImageMargin_GetInnerMarginMM, METH_VARARGS,
   "GetInnerMarginMM(self) -> float\nC++: virtual double GetInnerMarginMM()\n\nThe distance of the inner margin from the surface. Positive\nvalues are outside the foreground, and negative values are inside\nthe foreground. Default value is negative infinity.\n"},
  {"SetInnerMarginMM", PyvtkITKImageMargin_SetInnerMarginMM, METH_VARARGS,
   "SetInnerMarginMM(self, _arg:float) -> None\nC++: virtual void SetInnerMarginMM(double _arg)\n\n"},
  {"GetOuterMarginVoxels", PyvtkITKImageMargin_GetOuterMarginVoxels, METH_VARARGS,
   "GetOuterMarginVoxels(self) -> float\nC++: virtual double GetOuterMarginVoxels()\n\nThe number of voxels to the outer margin from the surface.\nPositive values are outside the foreground, and negative values\nare inside the foreground. Default value is 0.0.\n"},
  {"SetOuterMarginVoxels", PyvtkITKImageMargin_SetOuterMarginVoxels, METH_VARARGS,
   "SetOuterMarginVoxels(self, _arg:float) -> None\nC++: virtual void SetOuterMarginVoxels(double _arg)\n\n"},
  {"GetInnerMarginVoxels", PyvtkITKImageMargin_GetInnerMarginVoxels, METH_VARARGS,
   "GetInnerMarginVoxels(self) -> float\nC++: virtual double GetInnerMarginVoxels()\n\nThe number of voxels to the inner margin from the surface.\nPositive values are outside the foreground, and negative values\nare inside the foreground. Default value is negative infinity.\n"},
  {"SetInnerMarginVoxels", PyvtkITKImageMargin_SetInnerMarginVoxels, METH_VARARGS,
   "SetInnerMarginVoxels(self, _arg:float) -> None\nC++: virtual void SetInnerMarginVoxels(double _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkITKImageMargin_Doc =
  "vtkITKImageMargin - ITK-based utilities for manipulating connected\nregions in label maps.\n\n"
  "Superclass: vtkSimpleImageToImageFilter\n\n"
  "Limitation: The filter does not work correctly with input volume that\n"
  "has unsigned long scalar type on Linux and macOS.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkITKImageMargin_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkITKPython.vtkITKImageMargin", // tp_name
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
  PyvtkITKImageMargin_Doc, // tp_doc
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

static vtkObjectBase *PyvtkITKImageMargin_StaticNew()
{
  return vtkITKImageMargin::New();
}

PyObject *PyvtkITKImageMargin_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkITKImageMargin_Type, PyvtkITKImageMargin_Methods,
    "vtkITKImageMargin",
 &PyvtkITKImageMargin_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSimpleImageToImageFilter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkITKImageMargin(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkITKImageMargin_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkITKImageMargin", o) != 0)
  {
    Py_DECREF(o);
  }

}

