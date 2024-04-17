// python wrapper for vtkMRMLSliceIntersectionWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSliceIntersectionWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSliceIntersectionWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSliceIntersectionWidget_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkMRMLSliceIntersectionWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSliceIntersectionWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionWidget *op = static_cast<vtkMRMLSliceIntersectionWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSliceIntersectionWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSliceIntersectionWidget *tempr = vtkMRMLSliceIntersectionWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionWidget *op = static_cast<vtkMRMLSliceIntersectionWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceIntersectionWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSliceIntersectionWidget::NewInstance());

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
PyvtkMRMLSliceIntersectionWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSliceIntersectionWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionWidget *op = static_cast<vtkMRMLSliceIntersectionWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSliceIntersectionWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionWidget *op = static_cast<vtkMRMLSliceIntersectionWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkMRMLSliceIntersectionWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionWidget_SetSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionWidget *op = static_cast<vtkMRMLSliceIntersectionWidget *>(vp);

  vtkMRMLSliceNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode"))
  {
    if (ap.IsBound())
    {
      op->SetSliceNode(temp0);
    }
    else
    {
      op->vtkMRMLSliceIntersectionWidget::SetSliceNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionWidget_GetSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionWidget *op = static_cast<vtkMRMLSliceIntersectionWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceNode *tempr = (ap.IsBound() ?
      op->GetSliceNode() :
      op->vtkMRMLSliceIntersectionWidget::GetSliceNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionWidget_GetSliceDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionWidget *op = static_cast<vtkMRMLSliceIntersectionWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceDisplayNode *tempr = (ap.IsBound() ?
      op->GetSliceDisplayNode() :
      op->vtkMRMLSliceIntersectionWidget::GetSliceDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionWidget_SetMRMLApplicationLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMRMLApplicationLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionWidget *op = static_cast<vtkMRMLSliceIntersectionWidget *>(vp);

  vtkMRMLApplicationLogic *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLApplicationLogic"))
  {
    if (ap.IsBound())
    {
      op->SetMRMLApplicationLogic(temp0);
    }
    else
    {
      op->vtkMRMLSliceIntersectionWidget::SetMRMLApplicationLogic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionWidget_CanProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionWidget *op = static_cast<vtkMRMLSliceIntersectionWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->CanProcessInteractionEvent(temp0, temp1) :
      op->vtkMRMLSliceIntersectionWidget::CanProcessInteractionEvent(temp0, temp1));

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
PyvtkMRMLSliceIntersectionWidget_ProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionWidget *op = static_cast<vtkMRMLSliceIntersectionWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessInteractionEvent(temp0) :
      op->vtkMRMLSliceIntersectionWidget::ProcessInteractionEvent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionWidget_Leave(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Leave");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionWidget *op = static_cast<vtkMRMLSliceIntersectionWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    if (ap.IsBound())
    {
      op->Leave(temp0);
    }
    else
    {
      op->vtkMRMLSliceIntersectionWidget::Leave(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionWidget_SetActionsEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActionsEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionWidget *op = static_cast<vtkMRMLSliceIntersectionWidget *>(vp);

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
      op->vtkMRMLSliceIntersectionWidget::SetActionsEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionWidget_GetActionsEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActionsEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionWidget *op = static_cast<vtkMRMLSliceIntersectionWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActionsEnabled() :
      op->vtkMRMLSliceIntersectionWidget::GetActionsEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionWidget_SetActionEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActionEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionWidget *op = static_cast<vtkMRMLSliceIntersectionWidget *>(vp);

  int temp0;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetActionEnabled(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSliceIntersectionWidget::SetActionEnabled(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionWidget_GetActionEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActionEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionWidget *op = static_cast<vtkMRMLSliceIntersectionWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetActionEnabled(temp0) :
      op->vtkMRMLSliceIntersectionWidget::GetActionEnabled(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionWidget_UpdateInteractionEventMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInteractionEventMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionWidget *op = static_cast<vtkMRMLSliceIntersectionWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateInteractionEventMapping();
    }
    else
    {
      op->vtkMRMLSliceIntersectionWidget::UpdateInteractionEventMapping();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionWidget_GetMouseCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMouseCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionWidget *op = static_cast<vtkMRMLSliceIntersectionWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMouseCursor() :
      op->vtkMRMLSliceIntersectionWidget::GetMouseCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSliceIntersectionWidget_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSliceIntersectionWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK class macros.\n"},
  {"IsA", PyvtkMRMLSliceIntersectionWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK class macros.\n"},
  {"SafeDownCast", PyvtkMRMLSliceIntersectionWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLSliceIntersectionWidget\nC++: static vtkMRMLSliceIntersectionWidget *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK class macros.\n"},
  {"NewInstance", PyvtkMRMLSliceIntersectionWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSliceIntersectionWidget\nC++: vtkMRMLSliceIntersectionWidget *NewInstance()\n\nStandard VTK class macros.\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSliceIntersectionWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nStandard VTK class macros.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSliceIntersectionWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nStandard VTK class macros.\n"},
  {"CreateDefaultRepresentation", PyvtkMRMLSliceIntersectionWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {"SetSliceNode", PyvtkMRMLSliceIntersectionWidget_SetSliceNode, METH_VARARGS,
   "SetSliceNode(self, sliceNode:vtkMRMLSliceNode) -> None\nC++: void SetSliceNode(vtkMRMLSliceNode *sliceNode)\n\n"},
  {"GetSliceNode", PyvtkMRMLSliceIntersectionWidget_GetSliceNode, METH_VARARGS,
   "GetSliceNode(self) -> vtkMRMLSliceNode\nC++: vtkMRMLSliceNode *GetSliceNode()\n\n"},
  {"GetSliceDisplayNode", PyvtkMRMLSliceIntersectionWidget_GetSliceDisplayNode, METH_VARARGS,
   "GetSliceDisplayNode(self) -> vtkMRMLSliceDisplayNode\nC++: vtkMRMLSliceDisplayNode *GetSliceDisplayNode()\n\n"},
  {"SetMRMLApplicationLogic", PyvtkMRMLSliceIntersectionWidget_SetMRMLApplicationLogic, METH_VARARGS,
   "SetMRMLApplicationLogic(self,\n    applicationLogic:vtkMRMLApplicationLogic) -> None\nC++: void SetMRMLApplicationLogic(\n    vtkMRMLApplicationLogic *applicationLogic) override;\n\n"},
  {"CanProcessInteractionEvent", PyvtkMRMLSliceIntersectionWidget_CanProcessInteractionEvent, METH_VARARGS,
   "CanProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData, distance2:float)\n    -> bool\nC++: bool CanProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData, double &distance2)\n    override;\n\nReturn true if the widget can process the event.\n"},
  {"ProcessInteractionEvent", PyvtkMRMLSliceIntersectionWidget_ProcessInteractionEvent, METH_VARARGS,
   "ProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData) -> bool\nC++: bool ProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData) override;\n\nProcess interaction event.\n"},
  {"Leave", PyvtkMRMLSliceIntersectionWidget_Leave, METH_VARARGS,
   "Leave(self, eventData:vtkMRMLInteractionEventData) -> None\nC++: void Leave(vtkMRMLInteractionEventData *eventData) override;\n\nCalled when the the widget loses the focus.\n"},
  {"SetActionsEnabled", PyvtkMRMLSliceIntersectionWidget_SetActionsEnabled, METH_VARARGS,
   "SetActionsEnabled(self, actions:int) -> None\nC++: void SetActionsEnabled(int actions)\n\nSet exact list of actions to enable.\n"},
  {"GetActionsEnabled", PyvtkMRMLSliceIntersectionWidget_GetActionsEnabled, METH_VARARGS,
   "GetActionsEnabled(self) -> int\nC++: int GetActionsEnabled()\n\nSet full list of enabled actions.\n"},
  {"SetActionEnabled", PyvtkMRMLSliceIntersectionWidget_SetActionEnabled, METH_VARARGS,
   "SetActionEnabled(self, actionsMask:int, enable:bool=True) -> None\nC++: void SetActionEnabled(int actionsMask, bool enable=true)\n\nEnable/disable the specified action (Translate, Zoom, Blend,\netc.). Multiple actions can be specified by providing the sum of\naction ids. Set the value to AllActionsMask to enable/disable all\nactions. All actions are enabled by default.\n"},
  {"GetActionEnabled", PyvtkMRMLSliceIntersectionWidget_GetActionEnabled, METH_VARARGS,
   "GetActionEnabled(self, actionsMask:int) -> bool\nC++: bool GetActionEnabled(int actionsMask)\n\nReturns true if the specified action is allowed. If multiple\nactions are specified, the return value is true if all actions\nare enabled.\n"},
  {"UpdateInteractionEventMapping", PyvtkMRMLSliceIntersectionWidget_UpdateInteractionEventMapping, METH_VARARGS,
   "UpdateInteractionEventMapping(self) -> None\nC++: void UpdateInteractionEventMapping()\n\n"},
  {"GetMouseCursor", PyvtkMRMLSliceIntersectionWidget_GetMouseCursor, METH_VARARGS,
   "GetMouseCursor(self) -> int\nC++: int GetMouseCursor() override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSliceIntersectionWidget_Doc =
  "vtkMRMLSliceIntersectionWidget - Show slice intersection lines\n\n"
  "Superclass: vtkMRMLAbstractWidget\n\n"
  "The vtkMRMLSliceIntersectionWidget allows moving slices by\n"
  "interacting with displayed slice intersection lines.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceIntersectionWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLSliceIntersectionWidget", // tp_name
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
  PyvtkMRMLSliceIntersectionWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSliceIntersectionWidget_StaticNew()
{
  return vtkMRMLSliceIntersectionWidget::New();
}

PyObject *PyvtkMRMLSliceIntersectionWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSliceIntersectionWidget_Type, PyvtkMRMLSliceIntersectionWidget_Methods,
    "vtkMRMLSliceIntersectionWidget",
 &PyvtkMRMLSliceIntersectionWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractWidget_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 68; c++)
  {
    static const struct { const char *name; int value; }
      constants[68] = {
        { "WidgetStateMoveCrosshair", vtkMRMLSliceIntersectionWidget::WidgetStateMoveCrosshair },
        { "WidgetStateBlend", vtkMRMLSliceIntersectionWidget::WidgetStateBlend },
        { "WidgetStateTranslateSlice", vtkMRMLSliceIntersectionWidget::WidgetStateTranslateSlice },
        { "WidgetStateRotateIntersectingSlices", vtkMRMLSliceIntersectionWidget::WidgetStateRotateIntersectingSlices },
        { "WidgetStateZoomSlice", vtkMRMLSliceIntersectionWidget::WidgetStateZoomSlice },
        { "WidgetStateTouchGesture", vtkMRMLSliceIntersectionWidget::WidgetStateTouchGesture },
        { "WidgetStateOnTranslateIntersectingSlicesHandle", vtkMRMLSliceIntersectionWidget::WidgetStateOnTranslateIntersectingSlicesHandle },
        { "WidgetStateTranslateIntersectingSlicesHandle", vtkMRMLSliceIntersectionWidget::WidgetStateTranslateIntersectingSlicesHandle },
        { "WidgetStateOnRotateIntersectingSlicesHandle", vtkMRMLSliceIntersectionWidget::WidgetStateOnRotateIntersectingSlicesHandle },
        { "WidgetStateRotateIntersectingSlicesHandle", vtkMRMLSliceIntersectionWidget::WidgetStateRotateIntersectingSlicesHandle },
        { "WidgetStateOnTranslateSingleIntersectingSliceHandle", vtkMRMLSliceIntersectionWidget::WidgetStateOnTranslateSingleIntersectingSliceHandle },
        { "WidgetStateTranslateSingleIntersectingSliceHandle", vtkMRMLSliceIntersectionWidget::WidgetStateTranslateSingleIntersectingSliceHandle },
        { "WidgetStateOnTranslateIntersectingThickSlabHandle", vtkMRMLSliceIntersectionWidget::WidgetStateOnTranslateIntersectingThickSlabHandle },
        { "WidgetStateTranslateIntersectingThickSlabHandle", vtkMRMLSliceIntersectionWidget::WidgetStateTranslateIntersectingThickSlabHandle },
        { "WidgetState_Last", vtkMRMLSliceIntersectionWidget::WidgetState_Last },
        { "WidgetEventTouchGestureStart", vtkMRMLSliceIntersectionWidget::WidgetEventTouchGestureStart },
        { "WidgetEventTouchGestureEnd", vtkMRMLSliceIntersectionWidget::WidgetEventTouchGestureEnd },
        { "WidgetEventTouchRotateSliceIntersection", vtkMRMLSliceIntersectionWidget::WidgetEventTouchRotateSliceIntersection },
        { "WidgetEventTouchZoomSlice", vtkMRMLSliceIntersectionWidget::WidgetEventTouchZoomSlice },
        { "WidgetEventTouchTranslateSlice", vtkMRMLSliceIntersectionWidget::WidgetEventTouchTranslateSlice },
        { "WidgetEventMoveCrosshairStart", vtkMRMLSliceIntersectionWidget::WidgetEventMoveCrosshairStart },
        { "WidgetEventMoveCrosshairEnd", vtkMRMLSliceIntersectionWidget::WidgetEventMoveCrosshairEnd },
        { "WidgetEventBlendStart", vtkMRMLSliceIntersectionWidget::WidgetEventBlendStart },
        { "WidgetEventBlendEnd", vtkMRMLSliceIntersectionWidget::WidgetEventBlendEnd },
        { "WidgetEventToggleLabelOpacity", vtkMRMLSliceIntersectionWidget::WidgetEventToggleLabelOpacity },
        { "WidgetEventToggleForegroundOpacity", vtkMRMLSliceIntersectionWidget::WidgetEventToggleForegroundOpacity },
        { "WidgetEventIncrementSlice", vtkMRMLSliceIntersectionWidget::WidgetEventIncrementSlice },
        { "WidgetEventDecrementSlice", vtkMRMLSliceIntersectionWidget::WidgetEventDecrementSlice },
        { "WidgetEventZoomInSlice", vtkMRMLSliceIntersectionWidget::WidgetEventZoomInSlice },
        { "WidgetEventZoomOutSlice", vtkMRMLSliceIntersectionWidget::WidgetEventZoomOutSlice },
        { "WidgetEventToggleSliceVisibility", vtkMRMLSliceIntersectionWidget::WidgetEventToggleSliceVisibility },
        { "WidgetEventToggleAllSlicesVisibility", vtkMRMLSliceIntersectionWidget::WidgetEventToggleAllSlicesVisibility },
        { "WidgetEventResetFieldOfView", vtkMRMLSliceIntersectionWidget::WidgetEventResetFieldOfView },
        { "WidgetEventShowNextBackgroundVolume", vtkMRMLSliceIntersectionWidget::WidgetEventShowNextBackgroundVolume },
        { "WidgetEventShowPreviousBackgroundVolume", vtkMRMLSliceIntersectionWidget::WidgetEventShowPreviousBackgroundVolume },
        { "WidgetEventShowNextForegroundVolume", vtkMRMLSliceIntersectionWidget::WidgetEventShowNextForegroundVolume },
        { "WidgetEventShowPreviousForegroundVolume", vtkMRMLSliceIntersectionWidget::WidgetEventShowPreviousForegroundVolume },
        { "WidgetEventRotateIntersectingSlicesStart", vtkMRMLSliceIntersectionWidget::WidgetEventRotateIntersectingSlicesStart },
        { "WidgetEventRotateIntersectingSlicesEnd", vtkMRMLSliceIntersectionWidget::WidgetEventRotateIntersectingSlicesEnd },
        { "WidgetEventTranslateSliceStart", vtkMRMLSliceIntersectionWidget::WidgetEventTranslateSliceStart },
        { "WidgetEventTranslateSliceEnd", vtkMRMLSliceIntersectionWidget::WidgetEventTranslateSliceEnd },
        { "WidgetEventZoomSliceStart", vtkMRMLSliceIntersectionWidget::WidgetEventZoomSliceStart },
        { "WidgetEventZoomSliceEnd", vtkMRMLSliceIntersectionWidget::WidgetEventZoomSliceEnd },
        { "WidgetEventSetCrosshairPosition", vtkMRMLSliceIntersectionWidget::WidgetEventSetCrosshairPosition },
        { "WidgetEventSetCrosshairPositionBackground", vtkMRMLSliceIntersectionWidget::WidgetEventSetCrosshairPositionBackground },
        { "WidgetEventMaximizeView", vtkMRMLSliceIntersectionWidget::WidgetEventMaximizeView },
        { "WidgetEventTranslateIntersectingSlicesHandleStart", vtkMRMLSliceIntersectionWidget::WidgetEventTranslateIntersectingSlicesHandleStart },
        { "WidgetEventTranslateIntersectingSlicesHandleEnd", vtkMRMLSliceIntersectionWidget::WidgetEventTranslateIntersectingSlicesHandleEnd },
        { "WidgetEventRotateIntersectingSlicesHandleStart", vtkMRMLSliceIntersectionWidget::WidgetEventRotateIntersectingSlicesHandleStart },
        { "WidgetEventRotateIntersectingSlicesHandleEnd", vtkMRMLSliceIntersectionWidget::WidgetEventRotateIntersectingSlicesHandleEnd },
        { "WidgetEventTranslateSingleIntersectingSliceHandleStart", vtkMRMLSliceIntersectionWidget::WidgetEventTranslateSingleIntersectingSliceHandleStart },
        { "WidgetEventTranslateSingleIntersectingSliceHandleEnd", vtkMRMLSliceIntersectionWidget::WidgetEventTranslateSingleIntersectingSliceHandleEnd },
        { "WidgetEventTranslateIntersectingThickSlabHandleStart", vtkMRMLSliceIntersectionWidget::WidgetEventTranslateIntersectingThickSlabHandleStart },
        { "WidgetEventTranslateIntersectingThickSlabHandleEnd", vtkMRMLSliceIntersectionWidget::WidgetEventTranslateIntersectingThickSlabHandleEnd },
        { "ActionNone", vtkMRMLSliceIntersectionWidget::ActionNone },
        { "ActionTranslate", vtkMRMLSliceIntersectionWidget::ActionTranslate },
        { "ActionZoom", vtkMRMLSliceIntersectionWidget::ActionZoom },
        { "ActionRotate", vtkMRMLSliceIntersectionWidget::ActionRotate },
        { "ActionBlend", vtkMRMLSliceIntersectionWidget::ActionBlend },
        { "ActionBrowseSlice", vtkMRMLSliceIntersectionWidget::ActionBrowseSlice },
        { "ActionShowSlice", vtkMRMLSliceIntersectionWidget::ActionShowSlice },
        { "ActionAdjustLightbox", vtkMRMLSliceIntersectionWidget::ActionAdjustLightbox },
        { "ActionSelectVolume", vtkMRMLSliceIntersectionWidget::ActionSelectVolume },
        { "ActionSetCursorPosition", vtkMRMLSliceIntersectionWidget::ActionSetCursorPosition },
        { "ActionSetCrosshairPosition", vtkMRMLSliceIntersectionWidget::ActionSetCrosshairPosition },
        { "ActionTranslateSliceIntersection", vtkMRMLSliceIntersectionWidget::ActionTranslateSliceIntersection },
        { "ActionRotateSliceIntersection", vtkMRMLSliceIntersectionWidget::ActionRotateSliceIntersection },
        { "ActionAll", vtkMRMLSliceIntersectionWidget::ActionAll },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLSliceIntersectionWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSliceIntersectionWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSliceIntersectionWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

