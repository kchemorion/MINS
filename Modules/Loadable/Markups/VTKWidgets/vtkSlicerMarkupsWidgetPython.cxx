// python wrapper for vtkSlicerMarkupsWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerMarkupsWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerMarkupsWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerMarkupsWidget_ClassNew(); }


static PyObject *
PyvtkSlicerMarkupsWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerMarkupsWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerMarkupsWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerMarkupsWidget *tempr = vtkSlicerMarkupsWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerMarkupsWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerMarkupsWidget::NewInstance());

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
PyvtkSlicerMarkupsWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerMarkupsWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerMarkupsWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  vtkMRMLMarkupsDisplayNode *temp0 = nullptr;
  vtkMRMLAbstractViewNode *temp1 = nullptr;
  vtkRenderer *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsDisplayNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLAbstractViewNode") &&
      ap.GetVTKObject(temp2, "vtkRenderer"))
  {
    op->CreateDefaultRepresentation(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_CreateInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkSlicerMarkupsWidget *tempr = op->CreateInstance();

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
PyvtkSlicerMarkupsWidget_IsPointPreviewed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointPreviewed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsPointPreviewed() :
      op->vtkSlicerMarkupsWidget::IsPointPreviewed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_UpdatePreviewPointIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePreviewPointIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    if (ap.IsBound())
    {
      op->UpdatePreviewPointIndex(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsWidget::UpdatePreviewPointIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_UpdatePreviewPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePreviewPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->UpdatePreviewPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSlicerMarkupsWidget::UpdatePreviewPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_RemovePreviewPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePreviewPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemovePreviewPoint() :
      op->vtkSlicerMarkupsWidget::RemovePreviewPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_PlacePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlacePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->PlacePoint(temp0) :
      op->vtkSlicerMarkupsWidget::PlacePoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_AddPointFromWorldCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPointFromWorldCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = (ap.IsBound() ?
      op->AddPointFromWorldCoordinate(temp0) :
      op->vtkSlicerMarkupsWidget::AddPointFromWorldCoordinate(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_AddNodeOnWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeOnWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = (ap.IsBound() ?
      op->AddNodeOnWidget(temp0) :
      op->vtkSlicerMarkupsWidget::AddNodeOnWidget(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_CanProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->CanProcessInteractionEvent(temp0, temp1) :
      op->vtkSlicerMarkupsWidget::CanProcessInteractionEvent(temp0, temp1));

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
PyvtkSlicerMarkupsWidget_ProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessInteractionEvent(temp0) :
      op->vtkSlicerMarkupsWidget::ProcessInteractionEvent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_Leave(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Leave");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

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
      op->vtkSlicerMarkupsWidget::Leave(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_GetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInteractive() :
      op->vtkSlicerMarkupsWidget::GetInteractive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_GetMouseCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMouseCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMouseCursor() :
      op->vtkSlicerMarkupsWidget::GetMouseCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_GetMarkupsNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupsNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsNode *tempr = (ap.IsBound() ?
      op->GetMarkupsNode() :
      op->vtkSlicerMarkupsWidget::GetMarkupsNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_GetMarkupsDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupsDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsDisplayNode *tempr = (ap.IsBound() ?
      op->GetMarkupsDisplayNode() :
      op->vtkSlicerMarkupsWidget::GetMarkupsDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_GetActiveControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveControlPoint() :
      op->vtkSlicerMarkupsWidget::GetActiveControlPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_GetMarkupsRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupsRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerMarkupsWidgetRepresentation *tempr = (ap.IsBound() ?
      op->GetMarkupsRepresentation() :
      op->vtkSlicerMarkupsWidget::GetMarkupsRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_GetActiveComponentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponentType() :
      op->vtkSlicerMarkupsWidget::GetActiveComponentType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_GetActiveComponentIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponentIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponentIndex() :
      op->vtkSlicerMarkupsWidget::GetActiveComponentIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidget_selectionNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "selectionNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidget *op = static_cast<vtkSlicerMarkupsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSelectionNode *tempr = (ap.IsBound() ?
      op->selectionNode() :
      op->vtkSlicerMarkupsWidget::selectionNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerMarkupsWidget_Methods[] = {
  {"IsTypeOf", PyvtkSlicerMarkupsWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerMarkupsWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerMarkupsWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerMarkupsWidget\nC++: static vtkSlicerMarkupsWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerMarkupsWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerMarkupsWidget\nC++: vtkSlicerMarkupsWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerMarkupsWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerMarkupsWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateDefaultRepresentation", PyvtkSlicerMarkupsWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self,\n    markupsDisplayNode:vtkMRMLMarkupsDisplayNode,\n    viewNode:vtkMRMLAbstractViewNode, renderer:vtkRenderer)\n    -> None\nC++: virtual void CreateDefaultRepresentation(\n    vtkMRMLMarkupsDisplayNode *markupsDisplayNode,\n    vtkMRMLAbstractViewNode *viewNode, vtkRenderer *renderer)\n\nCreate the default widget representation and initializes the\nwidget and representation.\n"},
  {"CreateInstance", PyvtkSlicerMarkupsWidget_CreateInstance, METH_VARARGS,
   "CreateInstance(self) -> vtkSlicerMarkupsWidget\nC++: virtual vtkSlicerMarkupsWidget *CreateInstance()\n\nCreate instance of the markups widget\n"},
  {"IsPointPreviewed", PyvtkSlicerMarkupsWidget_IsPointPreviewed, METH_VARARGS,
   "IsPointPreviewed(self) -> bool\nC++: bool IsPointPreviewed()\n\n"},
  {"UpdatePreviewPointIndex", PyvtkSlicerMarkupsWidget_UpdatePreviewPointIndex, METH_VARARGS,
   "UpdatePreviewPointIndex(self,\n    eventData:vtkMRMLInteractionEventData) -> None\nC++: void UpdatePreviewPointIndex(\n    vtkMRMLInteractionEventData *eventData)\n\nUpdate a the current index of the point preview being previewed.\n"},
  {"UpdatePreviewPoint", PyvtkSlicerMarkupsWidget_UpdatePreviewPoint, METH_VARARGS,
   "UpdatePreviewPoint(self, eventData:vtkMRMLInteractionEventData,\n    associatedNodeID:str, positionStatus:int) -> None\nC++: void UpdatePreviewPoint(\n    vtkMRMLInteractionEventData *eventData,\n    const char *associatedNodeID, int positionStatus)\n\nAdd/update a point preview to the current active Markup at the\nspecified position.\n"},
  {"RemovePreviewPoint", PyvtkSlicerMarkupsWidget_RemovePreviewPoint, METH_VARARGS,
   "RemovePreviewPoint(self) -> bool\nC++: bool RemovePreviewPoint()\n\nRemove the point preview to the current active Markup. Returns\ntrue is preview point existed and now it is removed.\n"},
  {"PlacePoint", PyvtkSlicerMarkupsWidget_PlacePoint, METH_VARARGS,
   "PlacePoint(self, eventData:vtkMRMLInteractionEventData) -> bool\nC++: virtual bool PlacePoint(\n    vtkMRMLInteractionEventData *eventData)\n\n"},
  {"AddPointFromWorldCoordinate", PyvtkSlicerMarkupsWidget_AddPointFromWorldCoordinate, METH_VARARGS,
   "AddPointFromWorldCoordinate(self, worldCoordinates:(float, float,\n    float)) -> int\nC++: virtual int AddPointFromWorldCoordinate(\n    const double worldCoordinates[3])\n\nAdd a point to the current active Markup at input World\ncoordinates.\n"},
  {"AddNodeOnWidget", PyvtkSlicerMarkupsWidget_AddNodeOnWidget, METH_VARARGS,
   "AddNodeOnWidget(self, displayPos:(int, int)) -> int\nC++: virtual int AddNodeOnWidget(const int displayPos[2])\n\nGiven a specific X, Y pixel location, add a new node on the\nwidget at this location.\n"},
  {"CanProcessInteractionEvent", PyvtkSlicerMarkupsWidget_CanProcessInteractionEvent, METH_VARARGS,
   "CanProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData, distance2:float)\n    -> bool\nC++: bool CanProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData, double &distance2)\n    override;\n\nReturn true if the widget can process the event.\n"},
  {"ProcessInteractionEvent", PyvtkSlicerMarkupsWidget_ProcessInteractionEvent, METH_VARARGS,
   "ProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData) -> bool\nC++: bool ProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData) override;\n\nProcess interaction event.\n"},
  {"Leave", PyvtkSlicerMarkupsWidget_Leave, METH_VARARGS,
   "Leave(self, eventData:vtkMRMLInteractionEventData) -> None\nC++: void Leave(vtkMRMLInteractionEventData *eventData) override;\n\nCalled when the the widget loses the focus.\n"},
  {"GetInteractive", PyvtkSlicerMarkupsWidget_GetInteractive, METH_VARARGS,
   "GetInteractive(self) -> bool\nC++: bool GetInteractive() override;\n\n"},
  {"GetMouseCursor", PyvtkSlicerMarkupsWidget_GetMouseCursor, METH_VARARGS,
   "GetMouseCursor(self) -> int\nC++: int GetMouseCursor() override;\n\n"},
  {"GetMarkupsNode", PyvtkSlicerMarkupsWidget_GetMarkupsNode, METH_VARARGS,
   "GetMarkupsNode(self) -> vtkMRMLMarkupsNode\nC++: vtkMRMLMarkupsNode *GetMarkupsNode()\n\n"},
  {"GetMarkupsDisplayNode", PyvtkSlicerMarkupsWidget_GetMarkupsDisplayNode, METH_VARARGS,
   "GetMarkupsDisplayNode(self) -> vtkMRMLMarkupsDisplayNode\nC++: vtkMRMLMarkupsDisplayNode *GetMarkupsDisplayNode()\n\n"},
  {"GetActiveControlPoint", PyvtkSlicerMarkupsWidget_GetActiveControlPoint, METH_VARARGS,
   "GetActiveControlPoint(self) -> int\nC++: int GetActiveControlPoint()\n\n"},
  {"GetMarkupsRepresentation", PyvtkSlicerMarkupsWidget_GetMarkupsRepresentation, METH_VARARGS,
   "GetMarkupsRepresentation(self)\n    -> vtkSlicerMarkupsWidgetRepresentation\nC++: vtkSlicerMarkupsWidgetRepresentation *GetMarkupsRepresentation(\n    )\n\n"},
  {"GetActiveComponentType", PyvtkSlicerMarkupsWidget_GetActiveComponentType, METH_VARARGS,
   "GetActiveComponentType(self) -> int\nC++: int GetActiveComponentType()\n\n"},
  {"GetActiveComponentIndex", PyvtkSlicerMarkupsWidget_GetActiveComponentIndex, METH_VARARGS,
   "GetActiveComponentIndex(self) -> int\nC++: int GetActiveComponentIndex()\n\n"},
  {"selectionNode", PyvtkSlicerMarkupsWidget_selectionNode, METH_VARARGS,
   "selectionNode(self) -> vtkMRMLSelectionNode\nC++: vtkMRMLSelectionNode *selectionNode()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerMarkupsWidget_Doc =
  "vtkSlicerMarkupsWidget - Process interaction events to update state\nof markup widget nodes\n\n"
  "Superclass: vtkMRMLAbstractWidget\n\n"
  "@sa\n"
  "vtkMRMLAbstractWidget vtkSlicerWidgetRepresentation\n"
  "vtkSlicerWidgetEventTranslator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerMarkupsWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleVTKWidgetsPython.vtkSlicerMarkupsWidget", // tp_name
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
  PyvtkSlicerMarkupsWidget_Doc, // tp_doc
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

PyObject *PyvtkSlicerMarkupsWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerMarkupsWidget_Type, PyvtkSlicerMarkupsWidget_Methods,
    "vtkSlicerMarkupsWidget",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLAbstractWidget");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 17; c++)
  {
    static const struct { const char *name; int value; }
      constants[17] = {
        { "WidgetStateDefine", vtkSlicerMarkupsWidget::WidgetStateDefine },
        { "WidgetStateTranslateControlPoint", vtkSlicerMarkupsWidget::WidgetStateTranslateControlPoint },
        { "WidgetStateOnTranslationHandle", vtkSlicerMarkupsWidget::WidgetStateOnTranslationHandle },
        { "WidgetStateOnRotationHandle", vtkSlicerMarkupsWidget::WidgetStateOnRotationHandle },
        { "WidgetStateOnScaleHandle", vtkSlicerMarkupsWidget::WidgetStateOnScaleHandle },
        { "WidgetStateMarkups_Last", vtkSlicerMarkupsWidget::WidgetStateMarkups_Last },
        { "WidgetEventControlPointPlace", vtkSlicerMarkupsWidget::WidgetEventControlPointPlace },
        { "WidgetEventClickAndDragStart", vtkSlicerMarkupsWidget::WidgetEventClickAndDragStart },
        { "WidgetEventClickAndDragEnd", vtkSlicerMarkupsWidget::WidgetEventClickAndDragEnd },
        { "WidgetEventStopPlace", vtkSlicerMarkupsWidget::WidgetEventStopPlace },
        { "WidgetEventControlPointMoveStart", vtkSlicerMarkupsWidget::WidgetEventControlPointMoveStart },
        { "WidgetEventControlPointMoveEnd", vtkSlicerMarkupsWidget::WidgetEventControlPointMoveEnd },
        { "WidgetEventControlPointDelete", vtkSlicerMarkupsWidget::WidgetEventControlPointDelete },
        { "WidgetEventControlPointInsert", vtkSlicerMarkupsWidget::WidgetEventControlPointInsert },
        { "WidgetEventControlPointSnapToSlice", vtkSlicerMarkupsWidget::WidgetEventControlPointSnapToSlice },
        { "WidgetEventReserved", vtkSlicerMarkupsWidget::WidgetEventReserved },
        { "WidgetEventMarkups_Last", vtkSlicerMarkupsWidget::WidgetEventMarkups_Last },
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

void PyVTKAddFile_vtkSlicerMarkupsWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerMarkupsWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerMarkupsWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

