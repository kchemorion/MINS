// python wrapper for vtkSlicerPlaneWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkSlicerPlaneWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerPlaneWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerPlaneWidget_ClassNew(); }

#ifndef DECLARED_PyvtkSlicerMarkupsWidget_ClassNew
extern "C" { PyObject *PyvtkSlicerMarkupsWidget_ClassNew(); }
#define DECLARED_PyvtkSlicerMarkupsWidget_ClassNew
#endif

static PyObject *
PyvtkSlicerPlaneWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerPlaneWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlaneWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerPlaneWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlaneWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerPlaneWidget *tempr = vtkSlicerPlaneWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlaneWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerPlaneWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerPlaneWidget::NewInstance());

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
PyvtkSlicerPlaneWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerPlaneWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlaneWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerPlaneWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlaneWidget_CreateInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerMarkupsWidget *tempr = (ap.IsBound() ?
      op->CreateInstance() :
      op->vtkSlicerPlaneWidget::CreateInstance());

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
PyvtkSlicerPlaneWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  vtkMRMLMarkupsDisplayNode *temp0 = nullptr;
  vtkMRMLAbstractViewNode *temp1 = nullptr;
  vtkRenderer *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsDisplayNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLAbstractViewNode") &&
      ap.GetVTKObject(temp2, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSlicerPlaneWidget::CreateDefaultRepresentation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlaneWidget_PlacePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlacePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->PlacePoint(temp0) :
      op->vtkSlicerPlaneWidget::PlacePoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlaneWidget_PlacePlaneNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlacePlaneNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->PlacePlaneNormal(temp0) :
      op->vtkSlicerPlaneWidget::PlacePlaneNormal(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlaneWidget_CanProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->CanProcessInteractionEvent(temp0, temp1) :
      op->vtkSlicerPlaneWidget::CanProcessInteractionEvent(temp0, temp1));

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
PyvtkSlicerPlaneWidget_ProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessInteractionEvent(temp0) :
      op->vtkSlicerPlaneWidget::ProcessInteractionEvent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlaneWidget_ProcessUpdatePlaneFromViewNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessUpdatePlaneFromViewNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessUpdatePlaneFromViewNormal(temp0) :
      op->vtkSlicerPlaneWidget::ProcessUpdatePlaneFromViewNormal(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlaneWidget_ProcessPlaneMoveStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessPlaneMoveStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessPlaneMoveStart(temp0) :
      op->vtkSlicerPlaneWidget::ProcessPlaneMoveStart(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlaneWidget_ProcessPlaneMoveEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessPlaneMoveEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessPlaneMoveEnd(temp0) :
      op->vtkSlicerPlaneWidget::ProcessPlaneMoveEnd(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlaneWidget_ProcessMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessMouseMove(temp0) :
      op->vtkSlicerPlaneWidget::ProcessMouseMove(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlaneWidget_ProcessPlaneTranslate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessPlaneTranslate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessPlaneTranslate(temp0) :
      op->vtkSlicerPlaneWidget::ProcessPlaneTranslate(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlaneWidget_ProcessWidgetSymmetricScaleStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessWidgetSymmetricScaleStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessWidgetSymmetricScaleStart(temp0) :
      op->vtkSlicerPlaneWidget::ProcessWidgetSymmetricScaleStart(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlaneWidget_ProcessPlaneSymmetricScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessPlaneSymmetricScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessPlaneSymmetricScale(temp0) :
      op->vtkSlicerPlaneWidget::ProcessPlaneSymmetricScale(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlaneWidget_ProcessEndMouseDrag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEndMouseDrag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessEndMouseDrag(temp0) :
      op->vtkSlicerPlaneWidget::ProcessEndMouseDrag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlaneWidget_ProcessWidgetStopPlace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessWidgetStopPlace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlaneWidget *op = static_cast<vtkSlicerPlaneWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessWidgetStopPlace(temp0) :
      op->vtkSlicerPlaneWidget::ProcessWidgetStopPlace(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerPlaneWidget_Methods[] = {
  {"IsTypeOf", PyvtkSlicerPlaneWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerPlaneWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerPlaneWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerPlaneWidget\nC++: static vtkSlicerPlaneWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerPlaneWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerPlaneWidget\nC++: vtkSlicerPlaneWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerPlaneWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerPlaneWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateInstance", PyvtkSlicerPlaneWidget_CreateInstance, METH_VARARGS,
   "CreateInstance(self) -> vtkSlicerMarkupsWidget\nC++: vtkSlicerMarkupsWidget *CreateInstance() override;\n\nCreate instance of the markups widget\n"},
  {"CreateDefaultRepresentation", PyvtkSlicerPlaneWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self,\n    markupsDisplayNode:vtkMRMLMarkupsDisplayNode,\n    viewNode:vtkMRMLAbstractViewNode, renderer:vtkRenderer)\n    -> None\nC++: void CreateDefaultRepresentation(\n    vtkMRMLMarkupsDisplayNode *markupsDisplayNode,\n    vtkMRMLAbstractViewNode *viewNode, vtkRenderer *renderer)\n    override;\n\nCreate the default widget representation and initializes the\nwidget and representation.\n"},
  {"PlacePoint", PyvtkSlicerPlaneWidget_PlacePoint, METH_VARARGS,
   "PlacePoint(self, eventData:vtkMRMLInteractionEventData) -> bool\nC++: bool PlacePoint(vtkMRMLInteractionEventData *eventData)\n    override;\n\n"},
  {"PlacePlaneNormal", PyvtkSlicerPlaneWidget_PlacePlaneNormal, METH_VARARGS,
   "PlacePlaneNormal(self, eventData:vtkMRMLInteractionEventData)\n    -> bool\nC++: virtual bool PlacePlaneNormal(\n    vtkMRMLInteractionEventData *eventData)\n\n"},
  {"CanProcessInteractionEvent", PyvtkSlicerPlaneWidget_CanProcessInteractionEvent, METH_VARARGS,
   "CanProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData, distance2:float)\n    -> bool\nC++: bool CanProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData, double &distance2)\n    override;\n\nReturn true if the widget can process the event.\n"},
  {"ProcessInteractionEvent", PyvtkSlicerPlaneWidget_ProcessInteractionEvent, METH_VARARGS,
   "ProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData) -> bool\nC++: bool ProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData) override;\n\nProcess interaction event.\n"},
  {"ProcessUpdatePlaneFromViewNormal", PyvtkSlicerPlaneWidget_ProcessUpdatePlaneFromViewNormal, METH_VARARGS,
   "ProcessUpdatePlaneFromViewNormal(self,\n    event:vtkMRMLInteractionEventData) -> bool\nC++: bool ProcessUpdatePlaneFromViewNormal(\n    vtkMRMLInteractionEventData *event)\n\n"},
  {"ProcessPlaneMoveStart", PyvtkSlicerPlaneWidget_ProcessPlaneMoveStart, METH_VARARGS,
   "ProcessPlaneMoveStart(self, event:vtkMRMLInteractionEventData)\n    -> bool\nC++: bool ProcessPlaneMoveStart(\n    vtkMRMLInteractionEventData *event)\n\n"},
  {"ProcessPlaneMoveEnd", PyvtkSlicerPlaneWidget_ProcessPlaneMoveEnd, METH_VARARGS,
   "ProcessPlaneMoveEnd(self, event:vtkMRMLInteractionEventData)\n    -> bool\nC++: bool ProcessPlaneMoveEnd(vtkMRMLInteractionEventData *event)\n\n"},
  {"ProcessMouseMove", PyvtkSlicerPlaneWidget_ProcessMouseMove, METH_VARARGS,
   "ProcessMouseMove(self, eventData:vtkMRMLInteractionEventData)\n    -> bool\nC++: bool ProcessMouseMove(vtkMRMLInteractionEventData *eventData)\n     override;\n\n"},
  {"ProcessPlaneTranslate", PyvtkSlicerPlaneWidget_ProcessPlaneTranslate, METH_VARARGS,
   "ProcessPlaneTranslate(self, event:vtkMRMLInteractionEventData)\n    -> bool\nC++: bool ProcessPlaneTranslate(\n    vtkMRMLInteractionEventData *event)\n\n"},
  {"ProcessWidgetSymmetricScaleStart", PyvtkSlicerPlaneWidget_ProcessWidgetSymmetricScaleStart, METH_VARARGS,
   "ProcessWidgetSymmetricScaleStart(self,\n    eventData:vtkMRMLInteractionEventData) -> bool\nC++: bool ProcessWidgetSymmetricScaleStart(\n    vtkMRMLInteractionEventData *eventData)\n\n"},
  {"ProcessPlaneSymmetricScale", PyvtkSlicerPlaneWidget_ProcessPlaneSymmetricScale, METH_VARARGS,
   "ProcessPlaneSymmetricScale(self,\n    event:vtkMRMLInteractionEventData) -> bool\nC++: bool ProcessPlaneSymmetricScale(\n    vtkMRMLInteractionEventData *event)\n\n"},
  {"ProcessEndMouseDrag", PyvtkSlicerPlaneWidget_ProcessEndMouseDrag, METH_VARARGS,
   "ProcessEndMouseDrag(self, eventData:vtkMRMLInteractionEventData)\n    -> bool\nC++: bool ProcessEndMouseDrag(\n    vtkMRMLInteractionEventData *eventData) override;\n\n"},
  {"ProcessWidgetStopPlace", PyvtkSlicerPlaneWidget_ProcessWidgetStopPlace, METH_VARARGS,
   "ProcessWidgetStopPlace(self,\n    eventData:vtkMRMLInteractionEventData) -> bool\nC++: bool ProcessWidgetStopPlace(\n    vtkMRMLInteractionEventData *eventData) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerPlaneWidget_Doc =
  "vtkSlicerPlaneWidget - create a plane with a set of 3 points\n\n"
  "Superclass: vtkSlicerMarkupsWidget\n\n"
  "The vtkSlicerPlaneWidget is used to create a plane widget with a set\n"
  "of 3 points.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerPlaneWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleVTKWidgetsPython.vtkSlicerPlaneWidget", // tp_name
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
  PyvtkSlicerPlaneWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerPlaneWidget_StaticNew()
{
  return vtkSlicerPlaneWidget::New();
}

PyObject *PyvtkSlicerPlaneWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerPlaneWidget_Type, PyvtkSlicerPlaneWidget_Methods,
    "vtkSlicerPlaneWidget",
 &PyvtkSlicerPlaneWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkSlicerMarkupsWidget_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 10; c++)
  {
    static const struct { const char *name; int value; }
      constants[10] = {
        { "WidgetStateTranslatePlane", vtkSlicerPlaneWidget::WidgetStateTranslatePlane },
        { "WidgetStateSymmetricScale", vtkSlicerPlaneWidget::WidgetStateSymmetricScale },
        { "WidgetStateMarkupsPlane_Last", vtkSlicerPlaneWidget::WidgetStateMarkupsPlane_Last },
        { "WidgetEventControlPointPlace", vtkSlicerPlaneWidget::WidgetEventControlPointPlace },
        { "WidgetEventControlPointPlacePlaneNormal", vtkSlicerPlaneWidget::WidgetEventControlPointPlacePlaneNormal },
        { "WidgetEventPlaneMoveStart", vtkSlicerPlaneWidget::WidgetEventPlaneMoveStart },
        { "WidgetEventPlaneMoveEnd", vtkSlicerPlaneWidget::WidgetEventPlaneMoveEnd },
        { "WidgetEventSymmetricScaleStart", vtkSlicerPlaneWidget::WidgetEventSymmetricScaleStart },
        { "WidgetEventSymmetricScaleEnd", vtkSlicerPlaneWidget::WidgetEventSymmetricScaleEnd },
        { "WidgetEventMarkupsPlane_Last", vtkSlicerPlaneWidget::WidgetEventMarkupsPlane_Last },
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

void PyVTKAddFile_vtkSlicerPlaneWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerPlaneWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerPlaneWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

