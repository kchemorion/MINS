// python wrapper for vtkMRMLWindowLevelWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLWindowLevelWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLWindowLevelWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLWindowLevelWidget_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkMRMLWindowLevelWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLWindowLevelWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLWindowLevelWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLWindowLevelWidget *tempr = vtkMRMLWindowLevelWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLWindowLevelWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLWindowLevelWidget::NewInstance());

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
PyvtkMRMLWindowLevelWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLWindowLevelWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLWindowLevelWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkMRMLWindowLevelWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_SetSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

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
      op->vtkMRMLWindowLevelWidget::SetSliceNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_GetSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceNode *tempr = (ap.IsBound() ?
      op->GetSliceNode() :
      op->vtkMRMLWindowLevelWidget::GetSliceNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_GetSliceLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceLogic *tempr = (ap.IsBound() ?
      op->GetSliceLogic() :
      op->vtkMRMLWindowLevelWidget::GetSliceLogic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_GetBackgroundVolumeEditable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundVolumeEditable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBackgroundVolumeEditable() :
      op->vtkMRMLWindowLevelWidget::GetBackgroundVolumeEditable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_SetBackgroundVolumeEditable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundVolumeEditable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundVolumeEditable(temp0);
    }
    else
    {
      op->vtkMRMLWindowLevelWidget::SetBackgroundVolumeEditable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_BackgroundVolumeEditableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackgroundVolumeEditableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackgroundVolumeEditableOn();
    }
    else
    {
      op->vtkMRMLWindowLevelWidget::BackgroundVolumeEditableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_BackgroundVolumeEditableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackgroundVolumeEditableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackgroundVolumeEditableOff();
    }
    else
    {
      op->vtkMRMLWindowLevelWidget::BackgroundVolumeEditableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_GetForegroundVolumeEditable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForegroundVolumeEditable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForegroundVolumeEditable() :
      op->vtkMRMLWindowLevelWidget::GetForegroundVolumeEditable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_SetForegroundVolumeEditable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundVolumeEditable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForegroundVolumeEditable(temp0);
    }
    else
    {
      op->vtkMRMLWindowLevelWidget::SetForegroundVolumeEditable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_ForegroundVolumeEditableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForegroundVolumeEditableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForegroundVolumeEditableOn();
    }
    else
    {
      op->vtkMRMLWindowLevelWidget::ForegroundVolumeEditableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_ForegroundVolumeEditableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForegroundVolumeEditableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForegroundVolumeEditableOff();
    }
    else
    {
      op->vtkMRMLWindowLevelWidget::ForegroundVolumeEditableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_SetMRMLApplicationLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMRMLApplicationLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

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
      op->vtkMRMLWindowLevelWidget::SetMRMLApplicationLogic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_CanProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->CanProcessInteractionEvent(temp0, temp1) :
      op->vtkMRMLWindowLevelWidget::CanProcessInteractionEvent(temp0, temp1));

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
PyvtkMRMLWindowLevelWidget_ProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessInteractionEvent(temp0) :
      op->vtkMRMLWindowLevelWidget::ProcessInteractionEvent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_Leave(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Leave");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

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
      op->vtkMRMLWindowLevelWidget::Leave(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_UpdateWindowLevelFromRectangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWindowLevelFromRectangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLWindowLevelWidget *op = static_cast<vtkMRMLWindowLevelWidget *>(vp);

  int temp0;
  const size_t size1 = 2;
  int temp1[2];
  int save1[2];
  const size_t size2 = 2;
  int temp2[2];
  int save2[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->UpdateWindowLevelFromRectangle(temp0, temp1, temp2) :
      op->vtkMRMLWindowLevelWidget::UpdateWindowLevelFromRectangle(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_GetInteractionNodeAdjustWindowLevelModeAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInteractionNodeAdjustWindowLevelModeAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkMRMLWindowLevelWidget::GetInteractionNodeAdjustWindowLevelModeAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_GetAdjustWindowLevelModeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAdjustWindowLevelModeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLWindowLevelWidget::GetAdjustWindowLevelModeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLWindowLevelWidget_GetAdjustWindowLevelModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAdjustWindowLevelModeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLWindowLevelWidget::GetAdjustWindowLevelModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLWindowLevelWidget_Methods[] = {
  {"IsTypeOf", PyvtkMRMLWindowLevelWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK class macros.\n"},
  {"IsA", PyvtkMRMLWindowLevelWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK class macros.\n"},
  {"SafeDownCast", PyvtkMRMLWindowLevelWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLWindowLevelWidget\nC++: static vtkMRMLWindowLevelWidget *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK class macros.\n"},
  {"NewInstance", PyvtkMRMLWindowLevelWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLWindowLevelWidget\nC++: vtkMRMLWindowLevelWidget *NewInstance()\n\nStandard VTK class macros.\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLWindowLevelWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nStandard VTK class macros.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLWindowLevelWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nStandard VTK class macros.\n"},
  {"CreateDefaultRepresentation", PyvtkMRMLWindowLevelWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {"SetSliceNode", PyvtkMRMLWindowLevelWidget_SetSliceNode, METH_VARARGS,
   "SetSliceNode(self, sliceNode:vtkMRMLSliceNode) -> None\nC++: void SetSliceNode(vtkMRMLSliceNode *sliceNode)\n\n"},
  {"GetSliceNode", PyvtkMRMLWindowLevelWidget_GetSliceNode, METH_VARARGS,
   "GetSliceNode(self) -> vtkMRMLSliceNode\nC++: vtkMRMLSliceNode *GetSliceNode()\n\n"},
  {"GetSliceLogic", PyvtkMRMLWindowLevelWidget_GetSliceLogic, METH_VARARGS,
   "GetSliceLogic(self) -> vtkMRMLSliceLogic\nC++: vtkMRMLSliceLogic *GetSliceLogic()\n\n"},
  {"GetBackgroundVolumeEditable", PyvtkMRMLWindowLevelWidget_GetBackgroundVolumeEditable, METH_VARARGS,
   "GetBackgroundVolumeEditable(self) -> bool\nC++: virtual bool GetBackgroundVolumeEditable()\n\n"},
  {"SetBackgroundVolumeEditable", PyvtkMRMLWindowLevelWidget_SetBackgroundVolumeEditable, METH_VARARGS,
   "SetBackgroundVolumeEditable(self, _arg:bool) -> None\nC++: virtual void SetBackgroundVolumeEditable(bool _arg)\n\n"},
  {"BackgroundVolumeEditableOn", PyvtkMRMLWindowLevelWidget_BackgroundVolumeEditableOn, METH_VARARGS,
   "BackgroundVolumeEditableOn(self) -> None\nC++: virtual void BackgroundVolumeEditableOn()\n\n"},
  {"BackgroundVolumeEditableOff", PyvtkMRMLWindowLevelWidget_BackgroundVolumeEditableOff, METH_VARARGS,
   "BackgroundVolumeEditableOff(self) -> None\nC++: virtual void BackgroundVolumeEditableOff()\n\n"},
  {"GetForegroundVolumeEditable", PyvtkMRMLWindowLevelWidget_GetForegroundVolumeEditable, METH_VARARGS,
   "GetForegroundVolumeEditable(self) -> bool\nC++: virtual bool GetForegroundVolumeEditable()\n\n"},
  {"SetForegroundVolumeEditable", PyvtkMRMLWindowLevelWidget_SetForegroundVolumeEditable, METH_VARARGS,
   "SetForegroundVolumeEditable(self, _arg:bool) -> None\nC++: virtual void SetForegroundVolumeEditable(bool _arg)\n\n"},
  {"ForegroundVolumeEditableOn", PyvtkMRMLWindowLevelWidget_ForegroundVolumeEditableOn, METH_VARARGS,
   "ForegroundVolumeEditableOn(self) -> None\nC++: virtual void ForegroundVolumeEditableOn()\n\n"},
  {"ForegroundVolumeEditableOff", PyvtkMRMLWindowLevelWidget_ForegroundVolumeEditableOff, METH_VARARGS,
   "ForegroundVolumeEditableOff(self) -> None\nC++: virtual void ForegroundVolumeEditableOff()\n\n"},
  {"SetMRMLApplicationLogic", PyvtkMRMLWindowLevelWidget_SetMRMLApplicationLogic, METH_VARARGS,
   "SetMRMLApplicationLogic(self,\n    applicationLogic:vtkMRMLApplicationLogic) -> None\nC++: void SetMRMLApplicationLogic(\n    vtkMRMLApplicationLogic *applicationLogic) override;\n\n"},
  {"CanProcessInteractionEvent", PyvtkMRMLWindowLevelWidget_CanProcessInteractionEvent, METH_VARARGS,
   "CanProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData, distance2:float)\n    -> bool\nC++: bool CanProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData, double &distance2)\n    override;\n\nReturn true if the widget can process the event.\n"},
  {"ProcessInteractionEvent", PyvtkMRMLWindowLevelWidget_ProcessInteractionEvent, METH_VARARGS,
   "ProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData) -> bool\nC++: bool ProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData) override;\n\nProcess interaction event.\n"},
  {"Leave", PyvtkMRMLWindowLevelWidget_Leave, METH_VARARGS,
   "Leave(self, eventData:vtkMRMLInteractionEventData) -> None\nC++: void Leave(vtkMRMLInteractionEventData *eventData) override;\n\nCalled when the the widget loses the focus.\n"},
  {"UpdateWindowLevelFromRectangle", PyvtkMRMLWindowLevelWidget_UpdateWindowLevelFromRectangle, METH_VARARGS,
   "UpdateWindowLevelFromRectangle(self, layer:int, cornerPoint1:[int,\n     int], cornerPoint2:[int, int]) -> bool\nC++: bool UpdateWindowLevelFromRectangle(int layer,\n    int cornerPoint1[2], int cornerPoint2[2])\n\n"},
  {"GetInteractionNodeAdjustWindowLevelModeAttributeName", PyvtkMRMLWindowLevelWidget_GetInteractionNodeAdjustWindowLevelModeAttributeName, METH_VARARGS,
   "GetInteractionNodeAdjustWindowLevelModeAttributeName() -> str\nC++: static const char *GetInteractionNodeAdjustWindowLevelModeAttributeName(\n    )\n\n"},
  {"GetAdjustWindowLevelModeAsString", PyvtkMRMLWindowLevelWidget_GetAdjustWindowLevelModeAsString, METH_VARARGS,
   "GetAdjustWindowLevelModeAsString(id:int) -> str\nC++: static const char *GetAdjustWindowLevelModeAsString(int id)\n\n"},
  {"GetAdjustWindowLevelModeFromString", PyvtkMRMLWindowLevelWidget_GetAdjustWindowLevelModeFromString, METH_VARARGS,
   "GetAdjustWindowLevelModeFromString(name:str) -> int\nC++: static int GetAdjustWindowLevelModeFromString(\n    const char *name)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLWindowLevelWidget_Doc =
  "vtkMRMLWindowLevelWidget - Show slice intersection lines\n\n"
  "Superclass: vtkMRMLAbstractWidget\n\n"
  "The vtkMRMLWindowLevelWidget allows moving slices by interacting with\n"
  "displayed slice intersection lines.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLWindowLevelWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLWindowLevelWidget", // tp_name
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
  PyvtkMRMLWindowLevelWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLWindowLevelWidget_StaticNew()
{
  return vtkMRMLWindowLevelWidget::New();
}

PyObject *PyvtkMRMLWindowLevelWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLWindowLevelWidget_Type, PyvtkMRMLWindowLevelWidget_Methods,
    "vtkMRMLWindowLevelWidget",
 &PyvtkMRMLWindowLevelWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractWidget_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 20; c++)
  {
    static const struct { const char *name; int value; }
      constants[20] = {
        { "ModeAdjust", vtkMRMLWindowLevelWidget::ModeAdjust },
        { "ModeRectangle", vtkMRMLWindowLevelWidget::ModeRectangle },
        { "ModeRectangleCentered", vtkMRMLWindowLevelWidget::ModeRectangleCentered },
        { "Mode_Last", vtkMRMLWindowLevelWidget::Mode_Last },
        { "WidgetStateAdjustWindowLevel", vtkMRMLWindowLevelWidget::WidgetStateAdjustWindowLevel },
        { "WidgetStateAdjustWindowLevelAlternative", vtkMRMLWindowLevelWidget::WidgetStateAdjustWindowLevelAlternative },
        { "WidgetEventResetWindowLevel", vtkMRMLWindowLevelWidget::WidgetEventResetWindowLevel },
        { "WidgetEventAdjustWindowLevelStart", vtkMRMLWindowLevelWidget::WidgetEventAdjustWindowLevelStart },
        { "WidgetEventAdjustWindowLevelEnd", vtkMRMLWindowLevelWidget::WidgetEventAdjustWindowLevelEnd },
        { "WidgetEventAdjustWindowLevelCancel", vtkMRMLWindowLevelWidget::WidgetEventAdjustWindowLevelCancel },
        { "WidgetEventAdjustWindowLevelAlternativeStart", vtkMRMLWindowLevelWidget::WidgetEventAdjustWindowLevelAlternativeStart },
        { "WidgetEventAdjustWindowLevelAlternativeEnd", vtkMRMLWindowLevelWidget::WidgetEventAdjustWindowLevelAlternativeEnd },
        { "WidgetEventAdjustWindowLevelAlternativeCancel", vtkMRMLWindowLevelWidget::WidgetEventAdjustWindowLevelAlternativeCancel },
        { "WidgetEventAlwaysOnResetWindowLevel", vtkMRMLWindowLevelWidget::WidgetEventAlwaysOnResetWindowLevel },
        { "WidgetEventAlwaysOnAdjustWindowLevelStart", vtkMRMLWindowLevelWidget::WidgetEventAlwaysOnAdjustWindowLevelStart },
        { "WidgetEventAlwaysOnAdjustWindowLevelEnd", vtkMRMLWindowLevelWidget::WidgetEventAlwaysOnAdjustWindowLevelEnd },
        { "WidgetEventAlwaysOnAdjustWindowLevelCancel", vtkMRMLWindowLevelWidget::WidgetEventAlwaysOnAdjustWindowLevelCancel },
        { "WidgetEventAlwaysOnAdjustWindowLevelAlternativeStart", vtkMRMLWindowLevelWidget::WidgetEventAlwaysOnAdjustWindowLevelAlternativeStart },
        { "WidgetEventAlwaysOnAdjustWindowLevelAlternativeEnd", vtkMRMLWindowLevelWidget::WidgetEventAlwaysOnAdjustWindowLevelAlternativeEnd },
        { "WidgetEventAlwaysOnAdjustWindowLevelAlternativeCancel", vtkMRMLWindowLevelWidget::WidgetEventAlwaysOnAdjustWindowLevelAlternativeCancel },
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

void PyVTKAddFile_vtkMRMLWindowLevelWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLWindowLevelWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLWindowLevelWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

