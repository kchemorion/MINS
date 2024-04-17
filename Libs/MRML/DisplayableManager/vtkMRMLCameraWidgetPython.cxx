// python wrapper for vtkMRMLCameraWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLCameraWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLCameraWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLCameraWidget_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkMRMLCameraWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLCameraWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraWidget *op = static_cast<vtkMRMLCameraWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLCameraWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLCameraWidget *tempr = vtkMRMLCameraWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraWidget *op = static_cast<vtkMRMLCameraWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLCameraWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLCameraWidget::NewInstance());

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
PyvtkMRMLCameraWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLCameraWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraWidget *op = static_cast<vtkMRMLCameraWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLCameraWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraWidget *op = static_cast<vtkMRMLCameraWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkMRMLCameraWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraWidget_SetCameraNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCameraNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraWidget *op = static_cast<vtkMRMLCameraWidget *>(vp);

  vtkMRMLCameraNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLCameraNode"))
  {
    if (ap.IsBound())
    {
      op->SetCameraNode(temp0);
    }
    else
    {
      op->vtkMRMLCameraWidget::SetCameraNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraWidget_GetCameraNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCameraNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraWidget *op = static_cast<vtkMRMLCameraWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLCameraNode *tempr = (ap.IsBound() ?
      op->GetCameraNode() :
      op->vtkMRMLCameraWidget::GetCameraNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraWidget_CanProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraWidget *op = static_cast<vtkMRMLCameraWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->CanProcessInteractionEvent(temp0, temp1) :
      op->vtkMRMLCameraWidget::CanProcessInteractionEvent(temp0, temp1));

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
PyvtkMRMLCameraWidget_ProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraWidget *op = static_cast<vtkMRMLCameraWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessInteractionEvent(temp0) :
      op->vtkMRMLCameraWidget::ProcessInteractionEvent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraWidget_GetTiltLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTiltLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraWidget *op = static_cast<vtkMRMLCameraWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTiltLocked() :
      op->vtkMRMLCameraWidget::GetTiltLocked());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraWidget_SetTiltLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTiltLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraWidget *op = static_cast<vtkMRMLCameraWidget *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTiltLocked(temp0);
    }
    else
    {
      op->vtkMRMLCameraWidget::SetTiltLocked(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraWidget_GetMotionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMotionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraWidget *op = static_cast<vtkMRMLCameraWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMotionFactor() :
      op->vtkMRMLCameraWidget::GetMotionFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraWidget_SetMotionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMotionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraWidget *op = static_cast<vtkMRMLCameraWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMotionFactor(temp0);
    }
    else
    {
      op->vtkMRMLCameraWidget::SetMotionFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraWidget_GetMouseWheelMotionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMouseWheelMotionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraWidget *op = static_cast<vtkMRMLCameraWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMouseWheelMotionFactor() :
      op->vtkMRMLCameraWidget::GetMouseWheelMotionFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraWidget_SetMouseWheelMotionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMouseWheelMotionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraWidget *op = static_cast<vtkMRMLCameraWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMouseWheelMotionFactor(temp0);
    }
    else
    {
      op->vtkMRMLCameraWidget::SetMouseWheelMotionFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLCameraWidget_Methods[] = {
  {"IsTypeOf", PyvtkMRMLCameraWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK class macros.\n"},
  {"IsA", PyvtkMRMLCameraWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK class macros.\n"},
  {"SafeDownCast", PyvtkMRMLCameraWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLCameraWidget\nC++: static vtkMRMLCameraWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard VTK class macros.\n"},
  {"NewInstance", PyvtkMRMLCameraWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLCameraWidget\nC++: vtkMRMLCameraWidget *NewInstance()\n\nStandard VTK class macros.\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLCameraWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nStandard VTK class macros.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLCameraWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nStandard VTK class macros.\n"},
  {"CreateDefaultRepresentation", PyvtkMRMLCameraWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {"SetCameraNode", PyvtkMRMLCameraWidget_SetCameraNode, METH_VARARGS,
   "SetCameraNode(self, cameraNode:vtkMRMLCameraNode) -> None\nC++: void SetCameraNode(vtkMRMLCameraNode *cameraNode)\n\n"},
  {"GetCameraNode", PyvtkMRMLCameraWidget_GetCameraNode, METH_VARARGS,
   "GetCameraNode(self) -> vtkMRMLCameraNode\nC++: vtkMRMLCameraNode *GetCameraNode()\n\n"},
  {"CanProcessInteractionEvent", PyvtkMRMLCameraWidget_CanProcessInteractionEvent, METH_VARARGS,
   "CanProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData, distance2:float)\n    -> bool\nC++: bool CanProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData, double &distance2)\n    override;\n\nReturn true if the widget can process the event.\n"},
  {"ProcessInteractionEvent", PyvtkMRMLCameraWidget_ProcessInteractionEvent, METH_VARARGS,
   "ProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData) -> bool\nC++: bool ProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData) override;\n\nProcess interaction event.\n"},
  {"GetTiltLocked", PyvtkMRMLCameraWidget_GetTiltLocked, METH_VARARGS,
   "GetTiltLocked(self) -> bool\nC++: bool GetTiltLocked()\n\nGet set tilt lock. It tilt is locked then the view cannot be\nrotated around the horizontal axis (can only be rotated along the\nvertical axis).\n"},
  {"SetTiltLocked", PyvtkMRMLCameraWidget_SetTiltLocked, METH_VARARGS,
   "SetTiltLocked(self, lockState:bool) -> None\nC++: void SetTiltLocked(bool lockState)\n\nGet set tilt lock. It tilt is locked then the view cannot be\nrotated around the horizontal axis (can only be rotated along the\nvertical axis).\n"},
  {"GetMotionFactor", PyvtkMRMLCameraWidget_GetMotionFactor, METH_VARARGS,
   "GetMotionFactor(self) -> float\nC++: virtual double GetMotionFactor()\n\nDefines speed of rotation actions by mouse click-and-drag.\n"},
  {"SetMotionFactor", PyvtkMRMLCameraWidget_SetMotionFactor, METH_VARARGS,
   "SetMotionFactor(self, _arg:float) -> None\nC++: virtual void SetMotionFactor(double _arg)\n\n"},
  {"GetMouseWheelMotionFactor", PyvtkMRMLCameraWidget_GetMouseWheelMotionFactor, METH_VARARGS,
   "GetMouseWheelMotionFactor(self) -> float\nC++: virtual double GetMouseWheelMotionFactor()\n\nDefines step size for mouse wheel actions.\n"},
  {"SetMouseWheelMotionFactor", PyvtkMRMLCameraWidget_SetMouseWheelMotionFactor, METH_VARARGS,
   "SetMouseWheelMotionFactor(self, _arg:float) -> None\nC++: virtual void SetMouseWheelMotionFactor(double _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLCameraWidget_Doc =
  "vtkMRMLCameraWidget - Process camera manipulation events.\n\n"
  "Superclass: vtkMRMLAbstractWidget\n\n"
  "This widget does not have a visible representation, only translates\n"
  "and processes camera manipulation (rotate, translate, etc.) events.\n"
  "It is implemented as a widget instead of an interactor style so that\n"
  "mouse and keyboard interaction events can be dynamically remapped to\n"
  "camera manipulation actions and to process all kinds of interaction\n"
  "events (camera manipulation, markups manipulation, ...) in a similar\n"
  "way.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLCameraWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLCameraWidget", // tp_name
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
  PyvtkMRMLCameraWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLCameraWidget_StaticNew()
{
  return vtkMRMLCameraWidget::New();
}

PyObject *PyvtkMRMLCameraWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLCameraWidget_Type, PyvtkMRMLCameraWidget_Methods,
    "vtkMRMLCameraWidget",
 &PyvtkMRMLCameraWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractWidget_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 44; c++)
  {
    static const struct { const char *name; int value; }
      constants[44] = {
        { "WidgetStateMoveCrosshair", vtkMRMLCameraWidget::WidgetStateMoveCrosshair },
        { "WidgetStateSpin", vtkMRMLCameraWidget::WidgetStateSpin },
        { "WidgetStateTouchGesture", vtkMRMLCameraWidget::WidgetStateTouchGesture },
        { "WidgetEventSpinStart", vtkMRMLCameraWidget::WidgetEventSpinStart },
        { "WidgetEventSpinEnd", vtkMRMLCameraWidget::WidgetEventSpinEnd },
        { "WidgetEventMoveCrosshairStart", vtkMRMLCameraWidget::WidgetEventMoveCrosshairStart },
        { "WidgetEventMoveCrosshairEnd", vtkMRMLCameraWidget::WidgetEventMoveCrosshairEnd },
        { "WidgetEventCameraRotateToRight", vtkMRMLCameraWidget::WidgetEventCameraRotateToRight },
        { "WidgetEventCameraRotateToLeft", vtkMRMLCameraWidget::WidgetEventCameraRotateToLeft },
        { "WidgetEventCameraRotateToAnterior", vtkMRMLCameraWidget::WidgetEventCameraRotateToAnterior },
        { "WidgetEventCameraRotateToPosterior", vtkMRMLCameraWidget::WidgetEventCameraRotateToPosterior },
        { "WidgetEventCameraRotateToSuperior", vtkMRMLCameraWidget::WidgetEventCameraRotateToSuperior },
        { "WidgetEventCameraRotateToInferior", vtkMRMLCameraWidget::WidgetEventCameraRotateToInferior },
        { "WidgetEventCameraTranslateForwardX", vtkMRMLCameraWidget::WidgetEventCameraTranslateForwardX },
        { "WidgetEventCameraTranslateBackwardX", vtkMRMLCameraWidget::WidgetEventCameraTranslateBackwardX },
        { "WidgetEventCameraTranslateForwardY", vtkMRMLCameraWidget::WidgetEventCameraTranslateForwardY },
        { "WidgetEventCameraTranslateBackwardY", vtkMRMLCameraWidget::WidgetEventCameraTranslateBackwardY },
        { "WidgetEventCameraTranslateForwardZ", vtkMRMLCameraWidget::WidgetEventCameraTranslateForwardZ },
        { "WidgetEventCameraTranslateBackwardZ", vtkMRMLCameraWidget::WidgetEventCameraTranslateBackwardZ },
        { "WidgetEventCameraRotateCcwX", vtkMRMLCameraWidget::WidgetEventCameraRotateCcwX },
        { "WidgetEventCameraRotateCwX", vtkMRMLCameraWidget::WidgetEventCameraRotateCwX },
        { "WidgetEventCameraRotateCcwY", vtkMRMLCameraWidget::WidgetEventCameraRotateCcwY },
        { "WidgetEventCameraRotateCwY", vtkMRMLCameraWidget::WidgetEventCameraRotateCwY },
        { "WidgetEventCameraRotateCcwZ", vtkMRMLCameraWidget::WidgetEventCameraRotateCcwZ },
        { "WidgetEventCameraRotateCwZ", vtkMRMLCameraWidget::WidgetEventCameraRotateCwZ },
        { "WidgetEventCameraZoomIn", vtkMRMLCameraWidget::WidgetEventCameraZoomIn },
        { "WidgetEventCameraZoomOut", vtkMRMLCameraWidget::WidgetEventCameraZoomOut },
        { "WidgetEventCameraWheelZoomIn", vtkMRMLCameraWidget::WidgetEventCameraWheelZoomIn },
        { "WidgetEventCameraWheelZoomOut", vtkMRMLCameraWidget::WidgetEventCameraWheelZoomOut },
        { "WidgetEventToggleCameraTiltLock", vtkMRMLCameraWidget::WidgetEventToggleCameraTiltLock },
        { "WidgetEventCameraReset", vtkMRMLCameraWidget::WidgetEventCameraReset },
        { "WidgetEventCameraResetTranslation", vtkMRMLCameraWidget::WidgetEventCameraResetTranslation },
        { "WidgetEventCameraResetRotation", vtkMRMLCameraWidget::WidgetEventCameraResetRotation },
        { "WidgetEventCameraResetFieldOfView", vtkMRMLCameraWidget::WidgetEventCameraResetFieldOfView },
        { "WidgetEventCameraRotate", vtkMRMLCameraWidget::WidgetEventCameraRotate },
        { "WidgetEventCameraPan", vtkMRMLCameraWidget::WidgetEventCameraPan },
        { "WidgetEventTouchGestureStart", vtkMRMLCameraWidget::WidgetEventTouchGestureStart },
        { "WidgetEventTouchGestureEnd", vtkMRMLCameraWidget::WidgetEventTouchGestureEnd },
        { "WidgetEventTouchSpinCamera", vtkMRMLCameraWidget::WidgetEventTouchSpinCamera },
        { "WidgetEventTouchPinchZoom", vtkMRMLCameraWidget::WidgetEventTouchPinchZoom },
        { "WidgetEventTouchPanTranslate", vtkMRMLCameraWidget::WidgetEventTouchPanTranslate },
        { "WidgetEventSetCrosshairPosition", vtkMRMLCameraWidget::WidgetEventSetCrosshairPosition },
        { "WidgetEventSetCrosshairPositionBackground", vtkMRMLCameraWidget::WidgetEventSetCrosshairPositionBackground },
        { "WidgetEventMaximizeView", vtkMRMLCameraWidget::WidgetEventMaximizeView },
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

void PyVTKAddFile_vtkMRMLCameraWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLCameraWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLCameraWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

