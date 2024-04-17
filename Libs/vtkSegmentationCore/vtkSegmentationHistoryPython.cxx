// python wrapper for vtkSegmentationHistory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSegmentationHistory.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSegmentationHistory(PyObject *dict); }
extern "C" { PyObject *PyvtkSegmentationHistory_ClassNew(); }


static PyObject *
PyvtkSegmentationHistory_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSegmentationHistory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationHistory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationHistory *op = static_cast<vtkSegmentationHistory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSegmentationHistory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationHistory_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSegmentationHistory *tempr = vtkSegmentationHistory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationHistory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationHistory *op = static_cast<vtkSegmentationHistory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegmentationHistory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSegmentationHistory::NewInstance());

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
PyvtkSegmentationHistory_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSegmentationHistory::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationHistory_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationHistory *op = static_cast<vtkSegmentationHistory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSegmentationHistory::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationHistory_SetSegmentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationHistory *op = static_cast<vtkSegmentationHistory *>(vp);

  vtkSegmentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentation"))
  {
    if (ap.IsBound())
    {
      op->SetSegmentation(temp0);
    }
    else
    {
      op->vtkSegmentationHistory::SetSegmentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationHistory_GetSegmentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationHistory *op = static_cast<vtkSegmentationHistory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegmentation *tempr = (ap.IsBound() ?
      op->GetSegmentation() :
      op->vtkSegmentationHistory::GetSegmentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationHistory_SaveState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationHistory *op = static_cast<vtkSegmentationHistory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SaveState() :
      op->vtkSegmentationHistory::SaveState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationHistory_RestorePreviousState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestorePreviousState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationHistory *op = static_cast<vtkSegmentationHistory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->RestorePreviousState() :
      op->vtkSegmentationHistory::RestorePreviousState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationHistory_IsRestorePreviousStateAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRestorePreviousStateAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationHistory *op = static_cast<vtkSegmentationHistory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsRestorePreviousStateAvailable() :
      op->vtkSegmentationHistory::IsRestorePreviousStateAvailable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationHistory_RestoreNextState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreNextState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationHistory *op = static_cast<vtkSegmentationHistory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->RestoreNextState() :
      op->vtkSegmentationHistory::RestoreNextState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationHistory_IsRestoreNextStateAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRestoreNextStateAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationHistory *op = static_cast<vtkSegmentationHistory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsRestoreNextStateAvailable() :
      op->vtkSegmentationHistory::IsRestoreNextStateAvailable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationHistory_RemoveAllStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationHistory *op = static_cast<vtkSegmentationHistory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllStates();
    }
    else
    {
      op->vtkSegmentationHistory::RemoveAllStates();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationHistory_SetMaximumNumberOfStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationHistory *op = static_cast<vtkSegmentationHistory *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfStates(temp0);
    }
    else
    {
      op->vtkSegmentationHistory::SetMaximumNumberOfStates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationHistory_GetMaximumNumberOfStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationHistory *op = static_cast<vtkSegmentationHistory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfStates() :
      op->vtkSegmentationHistory::GetMaximumNumberOfStates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationHistory_GetNumberOfStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationHistory *op = static_cast<vtkSegmentationHistory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfStates() :
      op->vtkSegmentationHistory::GetNumberOfStates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSegmentationHistory_Methods[] = {
  {"IsTypeOf", PyvtkSegmentationHistory_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSegmentationHistory_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSegmentationHistory_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSegmentationHistory\nC++: static vtkSegmentationHistory *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSegmentationHistory_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSegmentationHistory\nC++: vtkSegmentationHistory *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSegmentationHistory_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSegmentationHistory_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSegmentation", PyvtkSegmentationHistory_SetSegmentation, METH_VARARGS,
   "SetSegmentation(self, segmentation:vtkSegmentation) -> None\nC++: void SetSegmentation(vtkSegmentation *segmentation)\n\nSelects a segmentation that the states will be stored of. Current\nstate of the segmentation is not stored.\n\\param segmentation Segmentation to store. Deletes all stored\n    states of the previously set segmentation.\n"},
  {"GetSegmentation", PyvtkSegmentationHistory_GetSegmentation, METH_VARARGS,
   "GetSegmentation(self) -> vtkSegmentation\nC++: virtual vtkSegmentation *GetSegmentation()\n\nGet segmentation that the states will be stored of.\n"},
  {"SaveState", PyvtkSegmentationHistory_SaveState, METH_VARARGS,
   "SaveState(self) -> bool\nC++: bool SaveState()\n\nSaves all source representations of the segmentation in its\ncurrent state. States more recent than the last restored state\nare removed.\n\\return Success flag\n"},
  {"RestorePreviousState", PyvtkSegmentationHistory_RestorePreviousState, METH_VARARGS,
   "RestorePreviousState(self) -> bool\nC++: bool RestorePreviousState()\n\nRestores previous state of the segmentation.\n\\return Success flag\n"},
  {"IsRestorePreviousStateAvailable", PyvtkSegmentationHistory_IsRestorePreviousStateAvailable, METH_VARARGS,
   "IsRestorePreviousStateAvailable(self) -> bool\nC++: bool IsRestorePreviousStateAvailable()\n\nCheck if it is possible to go back to a previous state (undo).\n\\return True if the operation is allowed\n"},
  {"RestoreNextState", PyvtkSegmentationHistory_RestoreNextState, METH_VARARGS,
   "RestoreNextState(self) -> bool\nC++: bool RestoreNextState()\n\nRestores next state of the segmentation.\n\\return Success flag\n"},
  {"IsRestoreNextStateAvailable", PyvtkSegmentationHistory_IsRestoreNextStateAvailable, METH_VARARGS,
   "IsRestoreNextStateAvailable(self) -> bool\nC++: bool IsRestoreNextStateAvailable()\n\nCheck if it is possible to go restore the next state (redo).\n\\return True if the operation is allowed\n"},
  {"RemoveAllStates", PyvtkSegmentationHistory_RemoveAllStates, METH_VARARGS,
   "RemoveAllStates(self) -> None\nC++: void RemoveAllStates()\n\nDelete all states from memory\n"},
  {"SetMaximumNumberOfStates", PyvtkSegmentationHistory_SetMaximumNumberOfStates, METH_VARARGS,
   "SetMaximumNumberOfStates(self, maximumNumberOfStates:int) -> None\nC++: void SetMaximumNumberOfStates(\n    unsigned int maximumNumberOfStates)\n\nLimits how many states may be stored. If the number of stored\nstates exceed the limit then the oldest state is removed.\n"},
  {"GetMaximumNumberOfStates", PyvtkSegmentationHistory_GetMaximumNumberOfStates, METH_VARARGS,
   "GetMaximumNumberOfStates(self) -> int\nC++: virtual unsigned int GetMaximumNumberOfStates()\n\nGet the limit of how many states may be stored.\n"},
  {"GetNumberOfStates", PyvtkSegmentationHistory_GetNumberOfStates, METH_VARARGS,
   "GetNumberOfStates(self) -> int\nC++: int GetNumberOfStates()\n\nGet the current number of states.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSegmentationHistory_Doc =
  "vtkSegmentationHistory - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSegmentationHistory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkSegmentationHistory", // tp_name
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
  PyvtkSegmentationHistory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSegmentationHistory_StaticNew()
{
  return vtkSegmentationHistory::New();
}

PyObject *PyvtkSegmentationHistory_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSegmentationHistory_Type, PyvtkSegmentationHistory_Methods,
    "vtkSegmentationHistory",
 &PyvtkSegmentationHistory_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSegmentationHistory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSegmentationHistory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSegmentationHistory", o) != 0)
  {
    Py_DECREF(o);
  }

}

