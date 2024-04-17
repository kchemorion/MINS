// python wrapper for vtkSlicerMarkupsWidgetRepresentation2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerMarkupsWidgetRepresentation2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation2D(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerMarkupsWidgetRepresentation2D_ClassNew(); }

#ifndef DECLARED_PyvtkSlicerMarkupsWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkSlicerMarkupsWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkSlicerMarkupsWidgetRepresentation_ClassNew
#endif

static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerMarkupsWidgetRepresentation2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerMarkupsWidgetRepresentation2D *tempr = vtkSlicerMarkupsWidgetRepresentation2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerMarkupsWidgetRepresentation2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerMarkupsWidgetRepresentation2D::NewInstance());

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
PyvtkSlicerMarkupsWidgetRepresentation2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerMarkupsWidgetRepresentation2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_CanInteract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanInteract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  int temp1;
  int temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->CanInteract(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation2D::CanInteract(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_CanInteractWithHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanInteractWithHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  int temp1;
  int temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->CanInteractWithHandles(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation2D::CanInteractWithHandles(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_CanInteractWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanInteractWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  int temp1;
  int temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->CanInteractWithLine(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation2D::CanInteractWithLine(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_UpdateFromMRMLInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateFromMRMLInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetBuffer(temp2, &pbuf2)))
  {
    if (ap.IsBound())
    {
      op->UpdateFromMRMLInternal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation2D::UpdateFromMRMLInternal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation2D::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation2D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation2D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkSlicerMarkupsWidgetRepresentation2D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_GetNthControlPointDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNthControlPointDisplayPosition(temp0, temp1) :
      op->vtkSlicerMarkupsWidgetRepresentation2D::GetNthControlPointDisplayPosition(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_GetNthControlPointViewVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointViewVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNthControlPointViewVisibility(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation2D::GetNthControlPointViewVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_SetNthControlPointSliceVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointSliceVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointSliceVisibility(temp0, temp1);
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation2D::SetNthControlPointSliceVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_SetCenterSliceVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterSliceVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenterSliceVisibility(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation2D::SetCenterSliceVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_GetSliceToWorldCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceToWorldCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetSliceToWorldCoordinates(temp0, temp1);
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation2D::GetSliceToWorldCoordinates(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_GetWorldToSliceCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldToSliceCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetWorldToSliceCoordinates(temp0, temp1);
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation2D::GetWorldToSliceCoordinates(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation2D_UpdateInteractionPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInteractionPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation2D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateInteractionPipeline();
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation2D::UpdateInteractionPipeline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerMarkupsWidgetRepresentation2D_Methods[] = {
  {"IsTypeOf", PyvtkSlicerMarkupsWidgetRepresentation2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerMarkupsWidgetRepresentation2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerMarkupsWidgetRepresentation2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkSlicerMarkupsWidgetRepresentation2D\nC++: static vtkSlicerMarkupsWidgetRepresentation2D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerMarkupsWidgetRepresentation2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerMarkupsWidgetRepresentation2D\nC++: vtkSlicerMarkupsWidgetRepresentation2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerMarkupsWidgetRepresentation2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerMarkupsWidgetRepresentation2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CanInteract", PyvtkSlicerMarkupsWidgetRepresentation2D_CanInteract, METH_VARARGS,
   "CanInteract(self,\n    interactionEventData:vtkMRMLInteractionEventData,\n    foundComponentType:int, foundComponentIndex:int,\n    closestDistance2:float) -> None\nC++: void CanInteract(\n    vtkMRMLInteractionEventData *interactionEventData,\n    int &foundComponentType, int &foundComponentIndex,\n    double &closestDistance2) override;\n\nPosition is displayed (slice) position\n"},
  {"CanInteractWithHandles", PyvtkSlicerMarkupsWidgetRepresentation2D_CanInteractWithHandles, METH_VARARGS,
   "CanInteractWithHandles(self,\n    interactionEventData:vtkMRMLInteractionEventData,\n    foundComponentType:int, foundComponentIndex:int,\n    closestDistance2:float) -> None\nC++: virtual void CanInteractWithHandles(\n    vtkMRMLInteractionEventData *interactionEventData,\n    int &foundComponentType, int &foundComponentIndex,\n    double &closestDistance2)\n\nCheck if interaction with the transformation handles is possible\n"},
  {"CanInteractWithLine", PyvtkSlicerMarkupsWidgetRepresentation2D_CanInteractWithLine, METH_VARARGS,
   "CanInteractWithLine(self,\n    interactionEventData:vtkMRMLInteractionEventData,\n    foundComponentType:int, foundComponentIndex:int,\n    closestDistance2:float) -> None\nC++: void CanInteractWithLine(\n    vtkMRMLInteractionEventData *interactionEventData,\n    int &foundComponentType, int &foundComponentIndex,\n    double &closestDistance2)\n\nChecks if interaction with straight line between visible points\nis possible. Can be used on the output of CanInteract, as if no\nbetter component is found then the input is returned.\n"},
  {"UpdateFromMRMLInternal", PyvtkSlicerMarkupsWidgetRepresentation2D_UpdateFromMRMLInternal, METH_VARARGS,
   "UpdateFromMRMLInternal(self, caller:vtkMRMLNode, event:int,\n    callData:Pointer=...) -> None\nC++: void UpdateFromMRMLInternal(vtkMRMLNode *caller,\n    unsigned long event, void *callData=nullptr) override;\n\nSubclasses of vtkSlicerMarkupsWidgetRepresentation2D must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {"GetActors", PyvtkSlicerMarkupsWidgetRepresentation2D_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkSlicerMarkupsWidgetRepresentation2D_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"RenderOverlay", PyvtkSlicerMarkupsWidgetRepresentation2D_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"RenderOpaqueGeometry", PyvtkSlicerMarkupsWidgetRepresentation2D_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkSlicerMarkupsWidgetRepresentation2D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkSlicerMarkupsWidgetRepresentation2D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"GetNthControlPointDisplayPosition", PyvtkSlicerMarkupsWidgetRepresentation2D_GetNthControlPointDisplayPosition, METH_VARARGS,
   "GetNthControlPointDisplayPosition(self, n:int, pos:[float, float])\n     -> int\nC++: int GetNthControlPointDisplayPosition(int n, double pos[2])\n    override;\n\nGet the nth node's position on the slice. Will return 1 on\nsuccess, or 0 if there are not at least (n+1) nodes (0 based\ncounting).\n"},
  {"GetNthControlPointViewVisibility", PyvtkSlicerMarkupsWidgetRepresentation2D_GetNthControlPointViewVisibility, METH_VARARGS,
   "GetNthControlPointViewVisibility(self, n:int) -> bool\nC++: virtual bool GetNthControlPointViewVisibility(int n)\n\nSet the Nth node visibility in this view (markup visibility is\nenabled and markup is on current slice). Useful for\nnon-regression tests that need to inspect internal state of the\nwidget.\n"},
  {"SetNthControlPointSliceVisibility", PyvtkSlicerMarkupsWidgetRepresentation2D_SetNthControlPointSliceVisibility, METH_VARARGS,
   "SetNthControlPointSliceVisibility(self, n:int, visibility:bool)\n    -> None\nC++: virtual void SetNthControlPointSliceVisibility(int n,\n    bool visibility)\n\nSet the Nth node slice visibility (i.e. if it is on the slice).\n"},
  {"SetCenterSliceVisibility", PyvtkSlicerMarkupsWidgetRepresentation2D_SetCenterSliceVisibility, METH_VARARGS,
   "SetCenterSliceVisibility(self, visibility:bool) -> None\nC++: virtual void SetCenterSliceVisibility(bool visibility)\n\nSet the center slice visibility (i.e. if it is on the slice).\n"},
  {"GetSliceToWorldCoordinates", PyvtkSlicerMarkupsWidgetRepresentation2D_GetSliceToWorldCoordinates, METH_VARARGS,
   "GetSliceToWorldCoordinates(self, __a:(float, float), __b:[float,\n    float, float]) -> None\nC++: void GetSliceToWorldCoordinates(const double[2], double[3])\n\n"},
  {"GetWorldToSliceCoordinates", PyvtkSlicerMarkupsWidgetRepresentation2D_GetWorldToSliceCoordinates, METH_VARARGS,
   "GetWorldToSliceCoordinates(self, worldPos:(float, float, float),\n    slicePos:[float, float]) -> None\nC++: void GetWorldToSliceCoordinates(const double worldPos[3],\n    double slicePos[2])\n\n"},
  {"UpdateInteractionPipeline", PyvtkSlicerMarkupsWidgetRepresentation2D_UpdateInteractionPipeline, METH_VARARGS,
   "UpdateInteractionPipeline(self) -> None\nC++: void UpdateInteractionPipeline() override;\n\nUpdate the interaction pipeline\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerMarkupsWidgetRepresentation2D_Doc =
  "vtkSlicerMarkupsWidgetRepresentation2D - Default representation for\nthe slicer markups widget\n\n"
  "Superclass: vtkSlicerMarkupsWidgetRepresentation\n\n"
  "This class provides the default concrete representation for the\n"
  "vtkMRMLAbstractWidget. See vtkMRMLAbstractWidget for details.\n"
  "@sa\n"
  "vtkSlicerMarkupsWidgetRepresentation2D vtkMRMLAbstractWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerMarkupsWidgetRepresentation2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleVTKWidgetsPython.vtkSlicerMarkupsWidgetRepresentation2D", // tp_name
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
  PyvtkSlicerMarkupsWidgetRepresentation2D_Doc, // tp_doc
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

PyObject *PyvtkSlicerMarkupsWidgetRepresentation2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerMarkupsWidgetRepresentation2D_Type, PyvtkSlicerMarkupsWidgetRepresentation2D_Methods,
    "vtkSlicerMarkupsWidgetRepresentation2D",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkSlicerMarkupsWidgetRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerMarkupsWidgetRepresentation2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerMarkupsWidgetRepresentation2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

