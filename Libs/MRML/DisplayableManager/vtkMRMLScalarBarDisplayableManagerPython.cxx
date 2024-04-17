// python wrapper for vtkMRMLScalarBarDisplayableManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLScalarBarDisplayableManager.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLScalarBarDisplayableManager(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLScalarBarDisplayableManager_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractSliceViewDisplayableManager_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractSliceViewDisplayableManager_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractSliceViewDisplayableManager_ClassNew
#endif

static PyObject *
PyvtkMRMLScalarBarDisplayableManager_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLScalarBarDisplayableManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarBarDisplayableManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarBarDisplayableManager *op = static_cast<vtkMRMLScalarBarDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLScalarBarDisplayableManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarBarDisplayableManager_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLScalarBarDisplayableManager *tempr = vtkMRMLScalarBarDisplayableManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarBarDisplayableManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarBarDisplayableManager *op = static_cast<vtkMRMLScalarBarDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLScalarBarDisplayableManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLScalarBarDisplayableManager::NewInstance());

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
PyvtkMRMLScalarBarDisplayableManager_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLScalarBarDisplayableManager::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarBarDisplayableManager_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarBarDisplayableManager *op = static_cast<vtkMRMLScalarBarDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLScalarBarDisplayableManager::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarBarDisplayableManager_CanProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarBarDisplayableManager *op = static_cast<vtkMRMLScalarBarDisplayableManager *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->CanProcessInteractionEvent(temp0, temp1) :
      op->vtkMRMLScalarBarDisplayableManager::CanProcessInteractionEvent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarBarDisplayableManager_ProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarBarDisplayableManager *op = static_cast<vtkMRMLScalarBarDisplayableManager *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessInteractionEvent(temp0) :
      op->vtkMRMLScalarBarDisplayableManager::ProcessInteractionEvent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarBarDisplayableManager_SetAdjustForegroundWindowLevelEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustForegroundWindowLevelEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarBarDisplayableManager *op = static_cast<vtkMRMLScalarBarDisplayableManager *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdjustForegroundWindowLevelEnabled(temp0);
    }
    else
    {
      op->vtkMRMLScalarBarDisplayableManager::SetAdjustForegroundWindowLevelEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarBarDisplayableManager_GetAdjustForegroundWindowLevelEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustForegroundWindowLevelEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarBarDisplayableManager *op = static_cast<vtkMRMLScalarBarDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAdjustForegroundWindowLevelEnabled() :
      op->vtkMRMLScalarBarDisplayableManager::GetAdjustForegroundWindowLevelEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarBarDisplayableManager_SetAdjustBackgroundWindowLevelEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustBackgroundWindowLevelEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarBarDisplayableManager *op = static_cast<vtkMRMLScalarBarDisplayableManager *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdjustBackgroundWindowLevelEnabled(temp0);
    }
    else
    {
      op->vtkMRMLScalarBarDisplayableManager::SetAdjustBackgroundWindowLevelEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarBarDisplayableManager_GetAdjustBackgroundWindowLevelEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustBackgroundWindowLevelEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarBarDisplayableManager *op = static_cast<vtkMRMLScalarBarDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAdjustBackgroundWindowLevelEnabled() :
      op->vtkMRMLScalarBarDisplayableManager::GetAdjustBackgroundWindowLevelEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarBarDisplayableManager_GetWindowLevelWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevelWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarBarDisplayableManager *op = static_cast<vtkMRMLScalarBarDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLWindowLevelWidget *tempr = (ap.IsBound() ?
      op->GetWindowLevelWidget() :
      op->vtkMRMLScalarBarDisplayableManager::GetWindowLevelWidget());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLScalarBarDisplayableManager_Methods[] = {
  {"IsTypeOf", PyvtkMRMLScalarBarDisplayableManager_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLScalarBarDisplayableManager_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLScalarBarDisplayableManager_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLScalarBarDisplayableManager\nC++: static vtkMRMLScalarBarDisplayableManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLScalarBarDisplayableManager_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLScalarBarDisplayableManager\nC++: vtkMRMLScalarBarDisplayableManager *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLScalarBarDisplayableManager_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLScalarBarDisplayableManager_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CanProcessInteractionEvent", PyvtkMRMLScalarBarDisplayableManager_CanProcessInteractionEvent, METH_VARARGS,
   "CanProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData, closestDistance2:float)\n     -> bool\nC++: bool CanProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData,\n    double &closestDistance2) override;\n\nReturn true if the displayable manager can process the event.\nDistance2 is the squared distance in display coordinates from the\nclosest interaction position. The displayable manager with the\nclosest distance will get the chance to process the interaction\nevent.\n"},
  {"ProcessInteractionEvent", PyvtkMRMLScalarBarDisplayableManager_ProcessInteractionEvent, METH_VARARGS,
   "ProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData) -> bool\nC++: bool ProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData) override;\n\nProcess an interaction event. Returns true if the event should be\naborted (not processed any further by other event observers).\n"},
  {"SetAdjustForegroundWindowLevelEnabled", PyvtkMRMLScalarBarDisplayableManager_SetAdjustForegroundWindowLevelEnabled, METH_VARARGS,
   "SetAdjustForegroundWindowLevelEnabled(self, enabled:bool) -> None\nC++: void SetAdjustForegroundWindowLevelEnabled(bool enabled)\n\n"},
  {"GetAdjustForegroundWindowLevelEnabled", PyvtkMRMLScalarBarDisplayableManager_GetAdjustForegroundWindowLevelEnabled, METH_VARARGS,
   "GetAdjustForegroundWindowLevelEnabled(self) -> bool\nC++: bool GetAdjustForegroundWindowLevelEnabled()\n\n"},
  {"SetAdjustBackgroundWindowLevelEnabled", PyvtkMRMLScalarBarDisplayableManager_SetAdjustBackgroundWindowLevelEnabled, METH_VARARGS,
   "SetAdjustBackgroundWindowLevelEnabled(self, enabled:bool) -> None\nC++: void SetAdjustBackgroundWindowLevelEnabled(bool enabled)\n\n"},
  {"GetAdjustBackgroundWindowLevelEnabled", PyvtkMRMLScalarBarDisplayableManager_GetAdjustBackgroundWindowLevelEnabled, METH_VARARGS,
   "GetAdjustBackgroundWindowLevelEnabled(self) -> bool\nC++: bool GetAdjustBackgroundWindowLevelEnabled()\n\n"},
  {"GetWindowLevelWidget", PyvtkMRMLScalarBarDisplayableManager_GetWindowLevelWidget, METH_VARARGS,
   "GetWindowLevelWidget(self) -> vtkMRMLWindowLevelWidget\nC++: vtkMRMLWindowLevelWidget *GetWindowLevelWidget()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLScalarBarDisplayableManager_Doc =
  "vtkMRMLScalarBarDisplayableManager - Displayable manager for\nwindow/level adjustment of volumes.\n\n"
  "Superclass: vtkMRMLAbstractSliceViewDisplayableManager\n\n"
  "This displayable manager only manages window/level adjustment events,\n"
  "does not display \"scalar bar\" (color legend). Its name was given\n"
  "because originally it was intended for displaying color legend as\n"
  "well, but later a dedicated displayable manager was added for that\n"
  "purpose (that can be used in any view types, for any displayable node\n"
  "types).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLScalarBarDisplayableManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLScalarBarDisplayableManager", // tp_name
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
  PyvtkMRMLScalarBarDisplayableManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLScalarBarDisplayableManager_StaticNew()
{
  return vtkMRMLScalarBarDisplayableManager::New();
}

PyObject *PyvtkMRMLScalarBarDisplayableManager_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLScalarBarDisplayableManager_Type, PyvtkMRMLScalarBarDisplayableManager_Methods,
    "vtkMRMLScalarBarDisplayableManager",
 &PyvtkMRMLScalarBarDisplayableManager_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractSliceViewDisplayableManager_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLScalarBarDisplayableManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLScalarBarDisplayableManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLScalarBarDisplayableManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

