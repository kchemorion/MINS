// python wrapper for vtkMRMLMarkupsDisplayableManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLMarkupsDisplayableManager.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLMarkupsDisplayableManager(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLMarkupsDisplayableManager_ClassNew(); }


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsDisplayableManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManager *op = static_cast<vtkMRMLMarkupsDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMarkupsDisplayableManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMarkupsDisplayableManager *tempr = vtkMRMLMarkupsDisplayableManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManager *op = static_cast<vtkMRMLMarkupsDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsDisplayableManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMarkupsDisplayableManager::NewInstance());

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
PyvtkMRMLMarkupsDisplayableManager_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMarkupsDisplayableManager::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManager *op = static_cast<vtkMRMLMarkupsDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMarkupsDisplayableManager::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_Is2DDisplayableManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Is2DDisplayableManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManager *op = static_cast<vtkMRMLMarkupsDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Is2DDisplayableManager() :
      op->vtkMRMLMarkupsDisplayableManager::Is2DDisplayableManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_GetMRMLSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMRMLSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManager *op = static_cast<vtkMRMLMarkupsDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceNode *tempr = (ap.IsBound() ?
      op->GetMRMLSliceNode() :
      op->vtkMRMLMarkupsDisplayableManager::GetMRMLSliceNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_GetHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManager *op = static_cast<vtkMRMLMarkupsDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsDisplayableManagerHelper *tempr = (ap.IsBound() ?
      op->GetHelper() :
      op->vtkMRMLMarkupsDisplayableManager::GetHelper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_CanProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManager *op = static_cast<vtkMRMLMarkupsDisplayableManager *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->CanProcessInteractionEvent(temp0, temp1) :
      op->vtkMRMLMarkupsDisplayableManager::CanProcessInteractionEvent(temp0, temp1));

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
PyvtkMRMLMarkupsDisplayableManager_ProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManager *op = static_cast<vtkMRMLMarkupsDisplayableManager *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessInteractionEvent(temp0) :
      op->vtkMRMLMarkupsDisplayableManager::ProcessInteractionEvent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_SetHasFocus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasFocus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManager *op = static_cast<vtkMRMLMarkupsDisplayableManager *>(vp);

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
      op->vtkMRMLMarkupsDisplayableManager::SetHasFocus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_GetGrabFocus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrabFocus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManager *op = static_cast<vtkMRMLMarkupsDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGrabFocus() :
      op->vtkMRMLMarkupsDisplayableManager::GetGrabFocus());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_GetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManager *op = static_cast<vtkMRMLMarkupsDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInteractive() :
      op->vtkMRMLMarkupsDisplayableManager::GetInteractive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_GetMouseCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMouseCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManager *op = static_cast<vtkMRMLMarkupsDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMouseCursor() :
      op->vtkMRMLMarkupsDisplayableManager::GetMouseCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_GetWidgetForPlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetForPlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManager *op = static_cast<vtkMRMLMarkupsDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerMarkupsWidget *tempr = (ap.IsBound() ?
      op->GetWidgetForPlacement() :
      op->vtkMRMLMarkupsDisplayableManager::GetWidgetForPlacement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_GetActiveMarkupsNodeForPlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveMarkupsNodeForPlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManager *op = static_cast<vtkMRMLMarkupsDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsNode *tempr = (ap.IsBound() ?
      op->GetActiveMarkupsNodeForPlacement() :
      op->vtkMRMLMarkupsDisplayableManager::GetActiveMarkupsNodeForPlacement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_GetCurrentInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManager *op = static_cast<vtkMRMLMarkupsDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentInteractionMode() :
      op->vtkMRMLMarkupsDisplayableManager::GetCurrentInteractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_ConvertDeviceToXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertDeviceToXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManager *op = static_cast<vtkMRMLMarkupsDisplayableManager *>(vp);

  double temp0;
  double temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->ConvertDeviceToXYZ(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayableManager::ConvertDeviceToXYZ(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManager_GetWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManager *op = static_cast<vtkMRMLMarkupsDisplayableManager *>(vp);

  vtkMRMLMarkupsDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsDisplayNode"))
  {
    vtkSlicerMarkupsWidget *tempr = (ap.IsBound() ?
      op->GetWidget(temp0) :
      op->vtkMRMLMarkupsDisplayableManager::GetWidget(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsDisplayableManager_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMarkupsDisplayableManager_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMarkupsDisplayableManager_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMarkupsDisplayableManager_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLMarkupsDisplayableManager\nC++: static vtkMRMLMarkupsDisplayableManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMarkupsDisplayableManager_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMarkupsDisplayableManager\nC++: vtkMRMLMarkupsDisplayableManager *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMarkupsDisplayableManager_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMarkupsDisplayableManager_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Is2DDisplayableManager", PyvtkMRMLMarkupsDisplayableManager_Is2DDisplayableManager, METH_VARARGS,
   "Is2DDisplayableManager(self) -> bool\nC++: virtual bool Is2DDisplayableManager()\n\nCheck if this is a 2d SliceView displayable manager, returns true\nif so, false otherwise. Checks return from GetSliceNode for non\nnull, which means it's a 2d displayable manager\n"},
  {"GetMRMLSliceNode", PyvtkMRMLMarkupsDisplayableManager_GetMRMLSliceNode, METH_VARARGS,
   "GetMRMLSliceNode(self) -> vtkMRMLSliceNode\nC++: vtkMRMLSliceNode *GetMRMLSliceNode()\n\nGet the sliceNode, if registered. This would mean it is a 2D\nSliceView displayableManager.\n"},
  {"GetHelper", PyvtkMRMLMarkupsDisplayableManager_GetHelper, METH_VARARGS,
   "GetHelper(self) -> vtkMRMLMarkupsDisplayableManagerHelper\nC++: vtkMRMLMarkupsDisplayableManagerHelper *GetHelper()\n\n"},
  {"CanProcessInteractionEvent", PyvtkMRMLMarkupsDisplayableManager_CanProcessInteractionEvent, METH_VARARGS,
   "CanProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData, closestDistance2:float)\n     -> bool\nC++: bool CanProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData,\n    double &closestDistance2) override;\n\nReturn true if the displayable manager can process the event.\nDistance2 is the squared distance in display coordinates from the\nclosest interaction position. The displayable manager with the\nclosest distance will get the chance to process the interaction\nevent.\n"},
  {"ProcessInteractionEvent", PyvtkMRMLMarkupsDisplayableManager_ProcessInteractionEvent, METH_VARARGS,
   "ProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData) -> bool\nC++: bool ProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData) override;\n\nProcess an interaction event. Returns true if the event should be\naborted (not processed any further by other event observers).\n"},
  {"SetHasFocus", PyvtkMRMLMarkupsDisplayableManager_SetHasFocus, METH_VARARGS,
   "SetHasFocus(self, hasFocus:bool,\n    eventData:vtkMRMLInteractionEventData) -> None\nC++: void SetHasFocus(bool hasFocus,\n    vtkMRMLInteractionEventData *eventData) override;\n\nSet if the widget gets/loses focus (interaction events are\nprocessed by this displayable manager).\n"},
  {"GetGrabFocus", PyvtkMRMLMarkupsDisplayableManager_GetGrabFocus, METH_VARARGS,
   "GetGrabFocus(self) -> bool\nC++: bool GetGrabFocus() override;\n\nDisplayable manager can indicate that it would like to get all\nevents (even when mouse pointer is outside the window).\n"},
  {"GetInteractive", PyvtkMRMLMarkupsDisplayableManager_GetInteractive, METH_VARARGS,
   "GetInteractive(self) -> bool\nC++: bool GetInteractive() override;\n\nDisplayable manager can indicate that the window is in\ninteractive mode (faster updates).\n"},
  {"GetMouseCursor", PyvtkMRMLMarkupsDisplayableManager_GetMouseCursor, METH_VARARGS,
   "GetMouseCursor(self) -> int\nC++: int GetMouseCursor() override;\n\nDisplayable manager returns ID of the mouse cursor shape that\nshould be displayed\n"},
  {"GetWidgetForPlacement", PyvtkMRMLMarkupsDisplayableManager_GetWidgetForPlacement, METH_VARARGS,
   "GetWidgetForPlacement(self) -> vtkSlicerMarkupsWidget\nC++: vtkSlicerMarkupsWidget *GetWidgetForPlacement()\n\n"},
  {"GetActiveMarkupsNodeForPlacement", PyvtkMRMLMarkupsDisplayableManager_GetActiveMarkupsNodeForPlacement, METH_VARARGS,
   "GetActiveMarkupsNodeForPlacement(self) -> vtkMRMLMarkupsNode\nC++: vtkMRMLMarkupsNode *GetActiveMarkupsNodeForPlacement()\n\n"},
  {"GetCurrentInteractionMode", PyvtkMRMLMarkupsDisplayableManager_GetCurrentInteractionMode, METH_VARARGS,
   "GetCurrentInteractionMode(self) -> int\nC++: int GetCurrentInteractionMode()\n\n"},
  {"ConvertDeviceToXYZ", PyvtkMRMLMarkupsDisplayableManager_ConvertDeviceToXYZ, METH_VARARGS,
   "ConvertDeviceToXYZ(self, x:float, y:float, xyz:[float, float,\n    float]) -> None\nC++: void ConvertDeviceToXYZ(double x, double y, double xyz[3])\n\nConvert device coordinates (display) to XYZ coordinates\n(viewport). Parameter xyz is double[3]\n\\sa ConvertDeviceToXYZ(vtkRenderWindowInteractor *,\n    vtkMRMLSliceNode *, double x, double y, double xyz[3])\n"},
  {"GetWidget", PyvtkMRMLMarkupsDisplayableManager_GetWidget, METH_VARARGS,
   "GetWidget(self, node:vtkMRMLMarkupsDisplayNode)\n    -> vtkSlicerMarkupsWidget\nC++: vtkSlicerMarkupsWidget *GetWidget(\n    vtkMRMLMarkupsDisplayNode *node)\n\nGet the widget of a node.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMarkupsDisplayableManager_Doc =
  "vtkMRMLMarkupsDisplayableManager - no description provided.\n\n"
  "Superclass: vtkMRMLAbstractDisplayableManager\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsDisplayableManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLDisplayableManagerPython.vtkMRMLMarkupsDisplayableManager", // tp_name
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
  PyvtkMRMLMarkupsDisplayableManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLMarkupsDisplayableManager_StaticNew()
{
  return vtkMRMLMarkupsDisplayableManager::New();
}

PyObject *PyvtkMRMLMarkupsDisplayableManager_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMarkupsDisplayableManager_Type, PyvtkMRMLMarkupsDisplayableManager_Methods,
    "vtkMRMLMarkupsDisplayableManager",
 &PyvtkMRMLMarkupsDisplayableManager_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLAbstractDisplayableManager");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLMarkupsDisplayableManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLMarkupsDisplayableManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMarkupsDisplayableManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

