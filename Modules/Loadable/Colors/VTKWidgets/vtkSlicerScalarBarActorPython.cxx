// python wrapper for vtkSlicerScalarBarActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerScalarBarActor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerScalarBarActor(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerScalarBarActor_ClassNew(); }


static PyObject *
PyvtkSlicerScalarBarActor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerScalarBarActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerScalarBarActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerScalarBarActor *op = static_cast<vtkSlicerScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerScalarBarActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerScalarBarActor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerScalarBarActor *tempr = vtkSlicerScalarBarActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerScalarBarActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerScalarBarActor *op = static_cast<vtkSlicerScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerScalarBarActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerScalarBarActor::NewInstance());

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
PyvtkSlicerScalarBarActor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerScalarBarActor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerScalarBarActor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerScalarBarActor *op = static_cast<vtkSlicerScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerScalarBarActor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerScalarBarActor_GetUseAnnotationAsLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseAnnotationAsLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerScalarBarActor *op = static_cast<vtkSlicerScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseAnnotationAsLabel() :
      op->vtkSlicerScalarBarActor::GetUseAnnotationAsLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerScalarBarActor_SetUseAnnotationAsLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseAnnotationAsLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerScalarBarActor *op = static_cast<vtkSlicerScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseAnnotationAsLabel(temp0);
    }
    else
    {
      op->vtkSlicerScalarBarActor::SetUseAnnotationAsLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerScalarBarActor_UseAnnotationAsLabelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAnnotationAsLabelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerScalarBarActor *op = static_cast<vtkSlicerScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseAnnotationAsLabelOn();
    }
    else
    {
      op->vtkSlicerScalarBarActor::UseAnnotationAsLabelOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerScalarBarActor_UseAnnotationAsLabelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAnnotationAsLabelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerScalarBarActor *op = static_cast<vtkSlicerScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseAnnotationAsLabelOff();
    }
    else
    {
      op->vtkSlicerScalarBarActor::UseAnnotationAsLabelOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerScalarBarActor_GetCenterLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerScalarBarActor *op = static_cast<vtkSlicerScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCenterLabel() :
      op->vtkSlicerScalarBarActor::GetCenterLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerScalarBarActor_SetCenterLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerScalarBarActor *op = static_cast<vtkSlicerScalarBarActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenterLabel(temp0);
    }
    else
    {
      op->vtkSlicerScalarBarActor::SetCenterLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerScalarBarActor_CenterLabelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterLabelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerScalarBarActor *op = static_cast<vtkSlicerScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterLabelOn();
    }
    else
    {
      op->vtkSlicerScalarBarActor::CenterLabelOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerScalarBarActor_CenterLabelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterLabelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerScalarBarActor *op = static_cast<vtkSlicerScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterLabelOff();
    }
    else
    {
      op->vtkSlicerScalarBarActor::CenterLabelOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerScalarBarActor_Methods[] = {
  {"IsTypeOf", PyvtkSlicerScalarBarActor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerScalarBarActor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerScalarBarActor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerScalarBarActor\nC++: static vtkSlicerScalarBarActor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerScalarBarActor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerScalarBarActor\nC++: vtkSlicerScalarBarActor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerScalarBarActor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerScalarBarActor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetUseAnnotationAsLabel", PyvtkSlicerScalarBarActor_GetUseAnnotationAsLabel, METH_VARARGS,
   "GetUseAnnotationAsLabel(self) -> int\nC++: virtual int GetUseAnnotationAsLabel()\n\nGet for the flag on using VTK6 annotation as label\n"},
  {"SetUseAnnotationAsLabel", PyvtkSlicerScalarBarActor_SetUseAnnotationAsLabel, METH_VARARGS,
   "SetUseAnnotationAsLabel(self, _arg:int) -> None\nC++: virtual void SetUseAnnotationAsLabel(int _arg)\n\nSet for the flag on using VTK6 annotation as label\n"},
  {"UseAnnotationAsLabelOn", PyvtkSlicerScalarBarActor_UseAnnotationAsLabelOn, METH_VARARGS,
   "UseAnnotationAsLabelOn(self) -> None\nC++: virtual void UseAnnotationAsLabelOn()\n\nGet/Set for the flag on using VTK6 annotation as label\n"},
  {"UseAnnotationAsLabelOff", PyvtkSlicerScalarBarActor_UseAnnotationAsLabelOff, METH_VARARGS,
   "UseAnnotationAsLabelOff(self) -> None\nC++: virtual void UseAnnotationAsLabelOff()\n\n"},
  {"GetCenterLabel", PyvtkSlicerScalarBarActor_GetCenterLabel, METH_VARARGS,
   "GetCenterLabel(self) -> bool\nC++: virtual bool GetCenterLabel()\n\nGet if label should be centered on color swatches. Useful if each\ndisplayed color needs a label\n"},
  {"SetCenterLabel", PyvtkSlicerScalarBarActor_SetCenterLabel, METH_VARARGS,
   "SetCenterLabel(self, _arg:bool) -> None\nC++: virtual void SetCenterLabel(bool _arg)\n\nSet if label should be centered on color swatches. Useful if each\ndisplayed color needs a label\n"},
  {"CenterLabelOn", PyvtkSlicerScalarBarActor_CenterLabelOn, METH_VARARGS,
   "CenterLabelOn(self) -> None\nC++: virtual void CenterLabelOn()\n\nGet/Set if label should be centered on color swatches. Useful if\neach displayed color needs a label\n"},
  {"CenterLabelOff", PyvtkSlicerScalarBarActor_CenterLabelOff, METH_VARARGS,
   "CenterLabelOff(self) -> None\nC++: virtual void CenterLabelOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerScalarBarActor_Doc =
  "vtkSlicerScalarBarActor - no description provided.\n\n"
  "Superclass: vtkScalarBarActor\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerScalarBarActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerColorsModuleVTKWidgetsPython.vtkSlicerScalarBarActor", // tp_name
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
  PyvtkSlicerScalarBarActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerScalarBarActor_StaticNew()
{
  return vtkSlicerScalarBarActor::New();
}

PyObject *PyvtkSlicerScalarBarActor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerScalarBarActor_Type, PyvtkSlicerScalarBarActor_Methods,
    "vtkSlicerScalarBarActor",
 &PyvtkSlicerScalarBarActor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkScalarBarActor");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerScalarBarActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerScalarBarActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerScalarBarActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

