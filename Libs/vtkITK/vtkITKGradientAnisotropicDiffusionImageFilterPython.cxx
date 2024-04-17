// python wrapper for vtkITKGradientAnisotropicDiffusionImageFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkITKGradientAnisotropicDiffusionImageFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkITKGradientAnisotropicDiffusionImageFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkITKGradientAnisotropicDiffusionImageFilter_ClassNew(); }

#ifndef DECLARED_PyvtkITKImageToImageFilterFF_ClassNew
extern "C" { PyObject *PyvtkITKImageToImageFilterFF_ClassNew(); }
#define DECLARED_PyvtkITKImageToImageFilterFF_ClassNew
#endif

static PyObject *
PyvtkITKGradientAnisotropicDiffusionImageFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkITKGradientAnisotropicDiffusionImageFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKGradientAnisotropicDiffusionImageFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGradientAnisotropicDiffusionImageFilter *op = static_cast<vtkITKGradientAnisotropicDiffusionImageFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkITKGradientAnisotropicDiffusionImageFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKGradientAnisotropicDiffusionImageFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkITKGradientAnisotropicDiffusionImageFilter *tempr = vtkITKGradientAnisotropicDiffusionImageFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKGradientAnisotropicDiffusionImageFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGradientAnisotropicDiffusionImageFilter *op = static_cast<vtkITKGradientAnisotropicDiffusionImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkITKGradientAnisotropicDiffusionImageFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkITKGradientAnisotropicDiffusionImageFilter::NewInstance());

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
PyvtkITKGradientAnisotropicDiffusionImageFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkITKGradientAnisotropicDiffusionImageFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKGradientAnisotropicDiffusionImageFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGradientAnisotropicDiffusionImageFilter *op = static_cast<vtkITKGradientAnisotropicDiffusionImageFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkITKGradientAnisotropicDiffusionImageFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKGradientAnisotropicDiffusionImageFilter_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGradientAnisotropicDiffusionImageFilter *op = static_cast<vtkITKGradientAnisotropicDiffusionImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkITKGradientAnisotropicDiffusionImageFilter::GetTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKGradientAnisotropicDiffusionImageFilter_GetConductanceParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConductanceParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGradientAnisotropicDiffusionImageFilter *op = static_cast<vtkITKGradientAnisotropicDiffusionImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConductanceParameter() :
      op->vtkITKGradientAnisotropicDiffusionImageFilter::GetConductanceParameter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKGradientAnisotropicDiffusionImageFilter_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGradientAnisotropicDiffusionImageFilter *op = static_cast<vtkITKGradientAnisotropicDiffusionImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfIterations() :
      op->vtkITKGradientAnisotropicDiffusionImageFilter::GetNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKGradientAnisotropicDiffusionImageFilter_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGradientAnisotropicDiffusionImageFilter *op = static_cast<vtkITKGradientAnisotropicDiffusionImageFilter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfIterations(temp0);
    }
    else
    {
      op->vtkITKGradientAnisotropicDiffusionImageFilter::SetNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKGradientAnisotropicDiffusionImageFilter_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGradientAnisotropicDiffusionImageFilter *op = static_cast<vtkITKGradientAnisotropicDiffusionImageFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStep(temp0);
    }
    else
    {
      op->vtkITKGradientAnisotropicDiffusionImageFilter::SetTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKGradientAnisotropicDiffusionImageFilter_SetConductanceParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConductanceParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGradientAnisotropicDiffusionImageFilter *op = static_cast<vtkITKGradientAnisotropicDiffusionImageFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConductanceParameter(temp0);
    }
    else
    {
      op->vtkITKGradientAnisotropicDiffusionImageFilter::SetConductanceParameter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkITKGradientAnisotropicDiffusionImageFilter_Methods[] = {
  {"IsTypeOf", PyvtkITKGradientAnisotropicDiffusionImageFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkITKGradientAnisotropicDiffusionImageFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkITKGradientAnisotropicDiffusionImageFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkITKGradientAnisotropicDiffusionImageFilter\nC++: static vtkITKGradientAnisotropicDiffusionImageFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkITKGradientAnisotropicDiffusionImageFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkITKGradientAnisotropicDiffusionImageFilter\nC++: vtkITKGradientAnisotropicDiffusionImageFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkITKGradientAnisotropicDiffusionImageFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkITKGradientAnisotropicDiffusionImageFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetTimeStep", PyvtkITKGradientAnisotropicDiffusionImageFilter_GetTimeStep, METH_VARARGS,
   "GetTimeStep(self) -> float\nC++: double GetTimeStep()\n\n"},
  {"GetConductanceParameter", PyvtkITKGradientAnisotropicDiffusionImageFilter_GetConductanceParameter, METH_VARARGS,
   "GetConductanceParameter(self) -> float\nC++: double GetConductanceParameter()\n\n"},
  {"GetNumberOfIterations", PyvtkITKGradientAnisotropicDiffusionImageFilter_GetNumberOfIterations, METH_VARARGS,
   "GetNumberOfIterations(self) -> int\nC++: unsigned int GetNumberOfIterations()\n\n"},
  {"SetNumberOfIterations", PyvtkITKGradientAnisotropicDiffusionImageFilter_SetNumberOfIterations, METH_VARARGS,
   "SetNumberOfIterations(self, value:int) -> None\nC++: void SetNumberOfIterations(unsigned int value)\n\n"},
  {"SetTimeStep", PyvtkITKGradientAnisotropicDiffusionImageFilter_SetTimeStep, METH_VARARGS,
   "SetTimeStep(self, value:float) -> None\nC++: void SetTimeStep(double value)\n\n"},
  {"SetConductanceParameter", PyvtkITKGradientAnisotropicDiffusionImageFilter_SetConductanceParameter, METH_VARARGS,
   "SetConductanceParameter(self, value:float) -> None\nC++: void SetConductanceParameter(double value)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkITKGradientAnisotropicDiffusionImageFilter_Doc =
  "vtkITKGradientAnisotropicDiffusionImageFilter - Wrapper class around\nitk::GradientAnisotropicDiffusionImageFilterImageFilter.\n\n"
  "Superclass: vtkITKImageToImageFilterFF\n\n"
  "vtkITKGradientAnisotropicDiffusionImageFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkITKGradientAnisotropicDiffusionImageFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkITKPython.vtkITKGradientAnisotropicDiffusionImageFilter", // tp_name
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
  PyvtkITKGradientAnisotropicDiffusionImageFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkITKGradientAnisotropicDiffusionImageFilter_StaticNew()
{
  return vtkITKGradientAnisotropicDiffusionImageFilter::New();
}

PyObject *PyvtkITKGradientAnisotropicDiffusionImageFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkITKGradientAnisotropicDiffusionImageFilter_Type, PyvtkITKGradientAnisotropicDiffusionImageFilter_Methods,
    "vtkITKGradientAnisotropicDiffusionImageFilter",
 &PyvtkITKGradientAnisotropicDiffusionImageFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkITKImageToImageFilterFF_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkITKGradientAnisotropicDiffusionImageFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkITKGradientAnisotropicDiffusionImageFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkITKGradientAnisotropicDiffusionImageFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

