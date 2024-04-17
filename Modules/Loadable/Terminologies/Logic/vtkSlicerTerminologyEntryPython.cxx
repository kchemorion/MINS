// python wrapper for vtkSlicerTerminologyEntry
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerTerminologyEntry.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerTerminologyEntry(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerTerminologyEntry_ClassNew(); }


static PyObject *
PyvtkSlicerTerminologyEntry_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerTerminologyEntry::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyEntry_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyEntry *op = static_cast<vtkSlicerTerminologyEntry *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerTerminologyEntry::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyEntry_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerTerminologyEntry *tempr = vtkSlicerTerminologyEntry::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyEntry_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyEntry *op = static_cast<vtkSlicerTerminologyEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerTerminologyEntry *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerTerminologyEntry::NewInstance());

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
PyvtkSlicerTerminologyEntry_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerTerminologyEntry::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyEntry_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyEntry *op = static_cast<vtkSlicerTerminologyEntry *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerTerminologyEntry::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyEntry_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyEntry *op = static_cast<vtkSlicerTerminologyEntry *>(vp);

  vtkSlicerTerminologyEntry *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSlicerTerminologyEntry"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkSlicerTerminologyEntry::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyEntry_GetTerminologyContextName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminologyContextName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyEntry *op = static_cast<vtkSlicerTerminologyEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTerminologyContextName() :
      op->vtkSlicerTerminologyEntry::GetTerminologyContextName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyEntry_SetTerminologyContextName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminologyContextName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyEntry *op = static_cast<vtkSlicerTerminologyEntry *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTerminologyContextName(temp0);
    }
    else
    {
      op->vtkSlicerTerminologyEntry::SetTerminologyContextName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyEntry_GetCategoryObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCategoryObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyEntry *op = static_cast<vtkSlicerTerminologyEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerTerminologyCategory *tempr = (ap.IsBound() ?
      op->GetCategoryObject() :
      op->vtkSlicerTerminologyEntry::GetCategoryObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyEntry_GetTypeObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyEntry *op = static_cast<vtkSlicerTerminologyEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerTerminologyType *tempr = (ap.IsBound() ?
      op->GetTypeObject() :
      op->vtkSlicerTerminologyEntry::GetTypeObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyEntry_GetTypeModifierObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeModifierObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyEntry *op = static_cast<vtkSlicerTerminologyEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerTerminologyType *tempr = (ap.IsBound() ?
      op->GetTypeModifierObject() :
      op->vtkSlicerTerminologyEntry::GetTypeModifierObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyEntry_GetAnatomicContextName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnatomicContextName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyEntry *op = static_cast<vtkSlicerTerminologyEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAnatomicContextName() :
      op->vtkSlicerTerminologyEntry::GetAnatomicContextName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyEntry_SetAnatomicContextName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnatomicContextName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyEntry *op = static_cast<vtkSlicerTerminologyEntry *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnatomicContextName(temp0);
    }
    else
    {
      op->vtkSlicerTerminologyEntry::SetAnatomicContextName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyEntry_GetAnatomicRegionObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnatomicRegionObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyEntry *op = static_cast<vtkSlicerTerminologyEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerTerminologyType *tempr = (ap.IsBound() ?
      op->GetAnatomicRegionObject() :
      op->vtkSlicerTerminologyEntry::GetAnatomicRegionObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyEntry_GetAnatomicRegionModifierObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnatomicRegionModifierObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyEntry *op = static_cast<vtkSlicerTerminologyEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerTerminologyType *tempr = (ap.IsBound() ?
      op->GetAnatomicRegionModifierObject() :
      op->vtkSlicerTerminologyEntry::GetAnatomicRegionModifierObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerTerminologyEntry_Methods[] = {
  {"IsTypeOf", PyvtkSlicerTerminologyEntry_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerTerminologyEntry_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerTerminologyEntry_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerTerminologyEntry\nC++: static vtkSlicerTerminologyEntry *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerTerminologyEntry_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerTerminologyEntry\nC++: vtkSlicerTerminologyEntry *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerTerminologyEntry_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerTerminologyEntry_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Copy", PyvtkSlicerTerminologyEntry_Copy, METH_VARARGS,
   "Copy(self, aEntry:vtkSlicerTerminologyEntry) -> None\nC++: virtual void Copy(vtkSlicerTerminologyEntry *aEntry)\n\nCopy one entry into another\n"},
  {"GetTerminologyContextName", PyvtkSlicerTerminologyEntry_GetTerminologyContextName, METH_VARARGS,
   "GetTerminologyContextName(self) -> str\nC++: virtual char *GetTerminologyContextName()\n\n"},
  {"SetTerminologyContextName", PyvtkSlicerTerminologyEntry_SetTerminologyContextName, METH_VARARGS,
   "SetTerminologyContextName(self, _arg:str) -> None\nC++: virtual void SetTerminologyContextName(const char *_arg)\n\n"},
  {"GetCategoryObject", PyvtkSlicerTerminologyEntry_GetCategoryObject, METH_VARARGS,
   "GetCategoryObject(self) -> vtkSlicerTerminologyCategory\nC++: virtual vtkSlicerTerminologyCategory *GetCategoryObject()\n\n"},
  {"GetTypeObject", PyvtkSlicerTerminologyEntry_GetTypeObject, METH_VARARGS,
   "GetTypeObject(self) -> vtkSlicerTerminologyType\nC++: virtual vtkSlicerTerminologyType *GetTypeObject()\n\n"},
  {"GetTypeModifierObject", PyvtkSlicerTerminologyEntry_GetTypeModifierObject, METH_VARARGS,
   "GetTypeModifierObject(self) -> vtkSlicerTerminologyType\nC++: virtual vtkSlicerTerminologyType *GetTypeModifierObject()\n\n"},
  {"GetAnatomicContextName", PyvtkSlicerTerminologyEntry_GetAnatomicContextName, METH_VARARGS,
   "GetAnatomicContextName(self) -> str\nC++: virtual char *GetAnatomicContextName()\n\n"},
  {"SetAnatomicContextName", PyvtkSlicerTerminologyEntry_SetAnatomicContextName, METH_VARARGS,
   "SetAnatomicContextName(self, _arg:str) -> None\nC++: virtual void SetAnatomicContextName(const char *_arg)\n\n"},
  {"GetAnatomicRegionObject", PyvtkSlicerTerminologyEntry_GetAnatomicRegionObject, METH_VARARGS,
   "GetAnatomicRegionObject(self) -> vtkSlicerTerminologyType\nC++: virtual vtkSlicerTerminologyType *GetAnatomicRegionObject()\n\n"},
  {"GetAnatomicRegionModifierObject", PyvtkSlicerTerminologyEntry_GetAnatomicRegionModifierObject, METH_VARARGS,
   "GetAnatomicRegionModifierObject(self) -> vtkSlicerTerminologyType\nC++: virtual vtkSlicerTerminologyType *GetAnatomicRegionModifierObject(\n    )\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerTerminologyEntry_Doc =
  "vtkSlicerTerminologyEntry - VTK implementation of \\sa\nqSlicerDICOMLoadable\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerTerminologyEntry_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerTerminologiesModuleLogicPython.vtkSlicerTerminologyEntry", // tp_name
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
  PyvtkSlicerTerminologyEntry_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerTerminologyEntry_StaticNew()
{
  return vtkSlicerTerminologyEntry::New();
}

PyObject *PyvtkSlicerTerminologyEntry_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerTerminologyEntry_Type, PyvtkSlicerTerminologyEntry_Methods,
    "vtkSlicerTerminologyEntry",
 &PyvtkSlicerTerminologyEntry_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerTerminologyEntry(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerTerminologyEntry_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerTerminologyEntry", o) != 0)
  {
    Py_DECREF(o);
  }

}

