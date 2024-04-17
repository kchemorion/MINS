// python wrapper for vtkMRMLCrosshairDisplayableManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLCrosshairDisplayableManager.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLCrosshairDisplayableManager(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLCrosshairDisplayableManager_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractSliceViewDisplayableManager_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractSliceViewDisplayableManager_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractSliceViewDisplayableManager_ClassNew
#endif

static PyObject *
PyvtkMRMLCrosshairDisplayableManager_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLCrosshairDisplayableManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairDisplayableManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairDisplayableManager *op = static_cast<vtkMRMLCrosshairDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLCrosshairDisplayableManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairDisplayableManager_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLCrosshairDisplayableManager *tempr = vtkMRMLCrosshairDisplayableManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairDisplayableManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairDisplayableManager *op = static_cast<vtkMRMLCrosshairDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLCrosshairDisplayableManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLCrosshairDisplayableManager::NewInstance());

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
PyvtkMRMLCrosshairDisplayableManager_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLCrosshairDisplayableManager::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairDisplayableManager_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairDisplayableManager *op = static_cast<vtkMRMLCrosshairDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLCrosshairDisplayableManager::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairDisplayableManager_FindCrosshairNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FindCrosshairNode");

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    vtkMRMLCrosshairNode *tempr = vtkMRMLCrosshairDisplayableManager::FindCrosshairNode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairDisplayableManager_CanProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairDisplayableManager *op = static_cast<vtkMRMLCrosshairDisplayableManager *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->CanProcessInteractionEvent(temp0, temp1) :
      op->vtkMRMLCrosshairDisplayableManager::CanProcessInteractionEvent(temp0, temp1));

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
PyvtkMRMLCrosshairDisplayableManager_ProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairDisplayableManager *op = static_cast<vtkMRMLCrosshairDisplayableManager *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessInteractionEvent(temp0) :
      op->vtkMRMLCrosshairDisplayableManager::ProcessInteractionEvent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairDisplayableManager_SetActionsEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActionsEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairDisplayableManager *op = static_cast<vtkMRMLCrosshairDisplayableManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActionsEnabled(temp0);
    }
    else
    {
      op->vtkMRMLCrosshairDisplayableManager::SetActionsEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairDisplayableManager_GetActionsEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActionsEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairDisplayableManager *op = static_cast<vtkMRMLCrosshairDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActionsEnabled() :
      op->vtkMRMLCrosshairDisplayableManager::GetActionsEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairDisplayableManager_GetSliceIntersectionWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceIntersectionWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairDisplayableManager *op = static_cast<vtkMRMLCrosshairDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceIntersectionWidget *tempr = (ap.IsBound() ?
      op->GetSliceIntersectionWidget() :
      op->vtkMRMLCrosshairDisplayableManager::GetSliceIntersectionWidget());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairDisplayableManager_GetMouseCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMouseCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairDisplayableManager *op = static_cast<vtkMRMLCrosshairDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMouseCursor() :
      op->vtkMRMLCrosshairDisplayableManager::GetMouseCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairDisplayableManager_SetHasFocus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasFocus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairDisplayableManager *op = static_cast<vtkMRMLCrosshairDisplayableManager *>(vp);

  bool temp0 = false;
  vtkMRMLInteractionEventData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLInteractionEventData"))
  {
    if (ap.IsBound())
    {
      op->SetHasFocus(temp0, temp1);
    }
    else
    {
      op->vtkMRMLCrosshairDisplayableManager::SetHasFocus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLCrosshairDisplayableManager_Methods[] = {
  {"IsTypeOf", PyvtkMRMLCrosshairDisplayableManager_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLCrosshairDisplayableManager_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLCrosshairDisplayableManager_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLCrosshairDisplayableManager\nC++: static vtkMRMLCrosshairDisplayableManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLCrosshairDisplayableManager_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLCrosshairDisplayableManager\nC++: vtkMRMLCrosshairDisplayableManager *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLCrosshairDisplayableManager_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLCrosshairDisplayableManager_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"FindCrosshairNode", PyvtkMRMLCrosshairDisplayableManager_FindCrosshairNode, METH_VARARGS,
   "FindCrosshairNode(scene:vtkMRMLScene) -> vtkMRMLCrosshairNode\nC++: static vtkMRMLCrosshairNode *FindCrosshairNode(\n    vtkMRMLScene *scene)\n\n"},
  {"CanProcessInteractionEvent", PyvtkMRMLCrosshairDisplayableManager_CanProcessInteractionEvent, METH_VARARGS,
   "CanProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData, closestDistance2:float)\n     -> bool\nC++: bool CanProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData,\n    double &closestDistance2) override;\n\nReturn true if the displayable manager can process the event.\nDistance2 is the squared distance in display coordinates from the\nclosest interaction position. The displayable manager with the\nclosest distance will get the chance to process the interaction\nevent.\n"},
  {"ProcessInteractionEvent", PyvtkMRMLCrosshairDisplayableManager_ProcessInteractionEvent, METH_VARARGS,
   "ProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData) -> bool\nC++: bool ProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData) override;\n\nProcess an interaction event. Returns true if the event should be\naborted (not processed any further by other event observers).\n"},
  {"SetActionsEnabled", PyvtkMRMLCrosshairDisplayableManager_SetActionsEnabled, METH_VARARGS,
   "SetActionsEnabled(self, actions:int) -> None\nC++: void SetActionsEnabled(int actions)\n\n"},
  {"GetActionsEnabled", PyvtkMRMLCrosshairDisplayableManager_GetActionsEnabled, METH_VARARGS,
   "GetActionsEnabled(self) -> int\nC++: int GetActionsEnabled()\n\n"},
  {"GetSliceIntersectionWidget", PyvtkMRMLCrosshairDisplayableManager_GetSliceIntersectionWidget, METH_VARARGS,
   "GetSliceIntersectionWidget(self) -> vtkMRMLSliceIntersectionWidget\nC++: vtkMRMLSliceIntersectionWidget *GetSliceIntersectionWidget()\n\n"},
  {"GetMouseCursor", PyvtkMRMLCrosshairDisplayableManager_GetMouseCursor, METH_VARARGS,
   "GetMouseCursor(self) -> int\nC++: int GetMouseCursor() override;\n\nDisplayable manager returns ID of the mouse cursor shape that\nshould be displayed\n"},
  {"SetHasFocus", PyvtkMRMLCrosshairDisplayableManager_SetHasFocus, METH_VARARGS,
   "SetHasFocus(self, hasFocus:bool,\n    eventData:vtkMRMLInteractionEventData) -> None\nC++: void SetHasFocus(bool hasFocus,\n    vtkMRMLInteractionEventData *eventData) override;\n\nSet if the widget gets/loses focus (interaction events are\nprocessed by this displayable manager).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLCrosshairDisplayableManager_Doc =
  "vtkMRMLCrosshairDisplayableManager - Displayable manager for the\ncrosshair on slice (2D) views\n\n"
  "Superclass: vtkMRMLAbstractSliceViewDisplayableManager\n\n"
  "Responsible for any display of the crosshair on Slice views.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLCrosshairDisplayableManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLCrosshairDisplayableManager", // tp_name
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
  PyvtkMRMLCrosshairDisplayableManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLCrosshairDisplayableManager_StaticNew()
{
  return vtkMRMLCrosshairDisplayableManager::New();
}

PyObject *PyvtkMRMLCrosshairDisplayableManager_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLCrosshairDisplayableManager_Type, PyvtkMRMLCrosshairDisplayableManager_Methods,
    "vtkMRMLCrosshairDisplayableManager",
 &PyvtkMRMLCrosshairDisplayableManager_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractSliceViewDisplayableManager_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLCrosshairDisplayableManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLCrosshairDisplayableManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLCrosshairDisplayableManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

