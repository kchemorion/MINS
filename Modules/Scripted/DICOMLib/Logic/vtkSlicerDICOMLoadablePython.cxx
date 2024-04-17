// python wrapper for vtkSlicerDICOMLoadable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerDICOMLoadable.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerDICOMLoadable(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerDICOMLoadable_ClassNew(); }


static PyObject *
PyvtkSlicerDICOMLoadable_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerDICOMLoadable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerDICOMLoadable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerDICOMLoadable *tempr = vtkSlicerDICOMLoadable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerDICOMLoadable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerDICOMLoadable::NewInstance());

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
PyvtkSlicerDICOMLoadable_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerDICOMLoadable::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerDICOMLoadable::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkSlicerDICOMLoadable::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetName(temp0);
    }
    else
    {
      op->vtkSlicerDICOMLoadable::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_GetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTooltip() :
      op->vtkSlicerDICOMLoadable::GetTooltip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_SetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTooltip(temp0);
    }
    else
    {
      op->vtkSlicerDICOMLoadable::SetTooltip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_GetWarning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWarning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetWarning() :
      op->vtkSlicerDICOMLoadable::GetWarning());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_SetWarning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWarning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWarning(temp0);
    }
    else
    {
      op->vtkSlicerDICOMLoadable::SetWarning(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_GetFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetFiles() :
      op->vtkSlicerDICOMLoadable::GetFiles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_GetSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSelected() :
      op->vtkSlicerDICOMLoadable::GetSelected());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_SetSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelected(temp0);
    }
    else
    {
      op->vtkSlicerDICOMLoadable::SetSelected(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_SelectedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectedOn();
    }
    else
    {
      op->vtkSlicerDICOMLoadable::SelectedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_SelectedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectedOff();
    }
    else
    {
      op->vtkSlicerDICOMLoadable::SelectedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_GetConfidence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConfidence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConfidence() :
      op->vtkSlicerDICOMLoadable::GetConfidence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_SetConfidence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConfidence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConfidence(temp0);
    }
    else
    {
      op->vtkSlicerDICOMLoadable::SetConfidence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_GetReferencedInstanceUIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferencedInstanceUIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetReferencedInstanceUIDs() :
      op->vtkSlicerDICOMLoadable::GetReferencedInstanceUIDs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_AddFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddFile(temp0);
    }
    else
    {
      op->vtkSlicerDICOMLoadable::AddFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMLoadable_AddReferencedInstanceUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddReferencedInstanceUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMLoadable *op = static_cast<vtkSlicerDICOMLoadable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddReferencedInstanceUID(temp0);
    }
    else
    {
      op->vtkSlicerDICOMLoadable::AddReferencedInstanceUID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerDICOMLoadable_Methods[] = {
  {"IsTypeOf", PyvtkSlicerDICOMLoadable_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerDICOMLoadable_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerDICOMLoadable_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerDICOMLoadable\nC++: static vtkSlicerDICOMLoadable *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerDICOMLoadable_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerDICOMLoadable\nC++: vtkSlicerDICOMLoadable *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerDICOMLoadable_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerDICOMLoadable_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetName", PyvtkSlicerDICOMLoadable_GetName, METH_VARARGS,
   "GetName(self) -> str\nC++: virtual char *GetName()\n\n"},
  {"SetName", PyvtkSlicerDICOMLoadable_SetName, METH_VARARGS,
   "SetName(self, _arg:str) -> None\nC++: virtual void SetName(const char *_arg)\n\n"},
  {"GetTooltip", PyvtkSlicerDICOMLoadable_GetTooltip, METH_VARARGS,
   "GetTooltip(self) -> str\nC++: virtual char *GetTooltip()\n\n"},
  {"SetTooltip", PyvtkSlicerDICOMLoadable_SetTooltip, METH_VARARGS,
   "SetTooltip(self, _arg:str) -> None\nC++: virtual void SetTooltip(const char *_arg)\n\n"},
  {"GetWarning", PyvtkSlicerDICOMLoadable_GetWarning, METH_VARARGS,
   "GetWarning(self) -> str\nC++: virtual char *GetWarning()\n\n"},
  {"SetWarning", PyvtkSlicerDICOMLoadable_SetWarning, METH_VARARGS,
   "SetWarning(self, _arg:str) -> None\nC++: virtual void SetWarning(const char *_arg)\n\n"},
  {"GetFiles", PyvtkSlicerDICOMLoadable_GetFiles, METH_VARARGS,
   "GetFiles(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetFiles()\n\n"},
  {"GetSelected", PyvtkSlicerDICOMLoadable_GetSelected, METH_VARARGS,
   "GetSelected(self) -> bool\nC++: virtual bool GetSelected()\n\n"},
  {"SetSelected", PyvtkSlicerDICOMLoadable_SetSelected, METH_VARARGS,
   "SetSelected(self, _arg:bool) -> None\nC++: virtual void SetSelected(bool _arg)\n\n"},
  {"SelectedOn", PyvtkSlicerDICOMLoadable_SelectedOn, METH_VARARGS,
   "SelectedOn(self) -> None\nC++: virtual void SelectedOn()\n\n"},
  {"SelectedOff", PyvtkSlicerDICOMLoadable_SelectedOff, METH_VARARGS,
   "SelectedOff(self) -> None\nC++: virtual void SelectedOff()\n\n"},
  {"GetConfidence", PyvtkSlicerDICOMLoadable_GetConfidence, METH_VARARGS,
   "GetConfidence(self) -> float\nC++: virtual double GetConfidence()\n\n"},
  {"SetConfidence", PyvtkSlicerDICOMLoadable_SetConfidence, METH_VARARGS,
   "SetConfidence(self, _arg:float) -> None\nC++: virtual void SetConfidence(double _arg)\n\n"},
  {"GetReferencedInstanceUIDs", PyvtkSlicerDICOMLoadable_GetReferencedInstanceUIDs, METH_VARARGS,
   "GetReferencedInstanceUIDs(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetReferencedInstanceUIDs()\n\n"},
  {"AddFile", PyvtkSlicerDICOMLoadable_AddFile, METH_VARARGS,
   "AddFile(self, file:str) -> None\nC++: void AddFile(const char *file)\n\nAdd file to file list \\sa Files\n"},
  {"AddReferencedInstanceUID", PyvtkSlicerDICOMLoadable_AddReferencedInstanceUID, METH_VARARGS,
   "AddReferencedInstanceUID(self, referencedInstanceUID:str) -> None\nC++: void AddReferencedInstanceUID(\n    const char *referencedInstanceUID)\n\nAdd referenced instance UID to the UIDs list \\sa\nReferencedInstanceUIDs\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerDICOMLoadable_Doc =
  "vtkSlicerDICOMLoadable - VTK implementation of \\sa\nqSlicerDICOMLoadable\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerDICOMLoadable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerDICOMLibModuleLogicPython.vtkSlicerDICOMLoadable", // tp_name
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
  PyvtkSlicerDICOMLoadable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerDICOMLoadable_StaticNew()
{
  return vtkSlicerDICOMLoadable::New();
}

PyObject *PyvtkSlicerDICOMLoadable_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerDICOMLoadable_Type, PyvtkSlicerDICOMLoadable_Methods,
    "vtkSlicerDICOMLoadable",
 &PyvtkSlicerDICOMLoadable_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerDICOMLoadable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerDICOMLoadable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerDICOMLoadable", o) != 0)
  {
    Py_DECREF(o);
  }

}

