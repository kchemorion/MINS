// python wrapper for vtkSlicerMarkupsWidgetRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerMarkupsWidgetRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerMarkupsWidgetRepresentation_ClassNew(); }


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerMarkupsWidgetRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerMarkupsWidgetRepresentation *tempr = vtkSlicerMarkupsWidgetRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerMarkupsWidgetRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerMarkupsWidgetRepresentation::NewInstance());

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
PyvtkSlicerMarkupsWidgetRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerMarkupsWidgetRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_UpdateFromMRML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateFromMRML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

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
      op->UpdateFromMRML(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation::UpdateFromMRML(temp0, temp1, temp2);
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
PyvtkSlicerMarkupsWidgetRepresentation_UpdateFromMRMLInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateFromMRMLInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

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
      op->vtkSlicerMarkupsWidgetRepresentation::UpdateFromMRMLInternal(temp0, temp1, temp2);
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
PyvtkSlicerMarkupsWidgetRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

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
      op->vtkSlicerMarkupsWidgetRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

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
      op->vtkSlicerMarkupsWidgetRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkSlicerMarkupsWidgetRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_GetNumberOfControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfControlPoints() :
      op->vtkSlicerMarkupsWidgetRepresentation::GetNumberOfControlPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_GetNthControlPointDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

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
      op->vtkSlicerMarkupsWidgetRepresentation::GetNthControlPointDisplayPosition(temp0, temp1));

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
PyvtkSlicerMarkupsWidgetRepresentation_SetMarkupsDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkupsDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  vtkMRMLMarkupsDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsDisplayNode"))
  {
    if (ap.IsBound())
    {
      op->SetMarkupsDisplayNode(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation::SetMarkupsDisplayNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_GetMarkupsDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupsDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsDisplayNode *tempr = (ap.IsBound() ?
      op->GetMarkupsDisplayNode() :
      op->vtkSlicerMarkupsWidgetRepresentation::GetMarkupsDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_GetMarkupsNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupsNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsNode *tempr = (ap.IsBound() ?
      op->GetMarkupsNode() :
      op->vtkSlicerMarkupsWidgetRepresentation::GetMarkupsNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_UpdateCenterOfRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateCenterOfRotation();
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation::UpdateCenterOfRotation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_GetTransformationReferencePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformationReferencePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetTransformationReferencePoint(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation::GetTransformationReferencePoint(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_CanInteract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanInteract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

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
      op->vtkSlicerMarkupsWidgetRepresentation::CanInteract(temp0, temp1, temp2, temp3);
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
PyvtkSlicerMarkupsWidgetRepresentation_FindClosestPointOnWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointOnWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->FindClosestPointOnWidget(temp0, temp1, temp2) :
      op->vtkSlicerMarkupsWidgetRepresentation::FindClosestPointOnWidget(temp0, temp1, temp2));

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
PyvtkSlicerMarkupsWidgetRepresentation_GetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointPlacer *tempr = (ap.IsBound() ?
      op->GetPointPlacer() :
      op->vtkSlicerMarkupsWidgetRepresentation::GetPointPlacer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_GetControlPointsPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointsPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetControlPointsPolyData(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation::GetControlPointsPolyData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_GetLabelControlPointsPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelControlPointsPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetLabelControlPointsPolyData(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation::GetLabelControlPointsPolyData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_GetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetLabels(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation::GetLabels(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_IsDisplayable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDisplayable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDisplayable() :
      op->vtkSlicerMarkupsWidgetRepresentation::IsDisplayable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_GetInteractionHandleAxisWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionHandleAxisWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  int temp0;
  int temp1;
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
      op->GetInteractionHandleAxisWorld(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation::GetInteractionHandleAxisWorld(temp0, temp1, temp2);
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
PyvtkSlicerMarkupsWidgetRepresentation_GetInteractionHandleOriginWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionHandleOriginWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetInteractionHandleOriginWorld(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation::GetInteractionHandleOriginWorld(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation_GetInteractionHandlePositionWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionHandlePositionWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation *op = static_cast<vtkSlicerMarkupsWidgetRepresentation *>(vp);

  int temp0;
  int temp1;
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
      op->GetInteractionHandlePositionWorld(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation::GetInteractionHandlePositionWorld(temp0, temp1, temp2);
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

static PyMethodDef PyvtkSlicerMarkupsWidgetRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkSlicerMarkupsWidgetRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerMarkupsWidgetRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerMarkupsWidgetRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkSlicerMarkupsWidgetRepresentation\nC++: static vtkSlicerMarkupsWidgetRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerMarkupsWidgetRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerMarkupsWidgetRepresentation\nC++: vtkSlicerMarkupsWidgetRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerMarkupsWidgetRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerMarkupsWidgetRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"UpdateFromMRML", PyvtkSlicerMarkupsWidgetRepresentation_UpdateFromMRML, METH_VARARGS,
   "UpdateFromMRML(self, caller:vtkMRMLNode, event:int,\n    callData:Pointer=...) -> None\nC++: void UpdateFromMRML(vtkMRMLNode *caller, unsigned long event,\n     void *callData=nullptr) override;\n\nUpdate the representation from markups node\n"},
  {"UpdateFromMRMLInternal", PyvtkSlicerMarkupsWidgetRepresentation_UpdateFromMRMLInternal, METH_VARARGS,
   "UpdateFromMRMLInternal(self, caller:vtkMRMLNode, event:int,\n    callData:Pointer=...) -> None\nC++: virtual void UpdateFromMRMLInternal(vtkMRMLNode *caller,\n    unsigned long event, void *callData=nullptr)\n\n"},
  {"GetActors", PyvtkSlicerMarkupsWidgetRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkSlicerMarkupsWidgetRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"RenderOverlay", PyvtkSlicerMarkupsWidgetRepresentation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"RenderOpaqueGeometry", PyvtkSlicerMarkupsWidgetRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkSlicerMarkupsWidgetRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkSlicerMarkupsWidgetRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"GetNumberOfControlPoints", PyvtkSlicerMarkupsWidgetRepresentation_GetNumberOfControlPoints, METH_VARARGS,
   "GetNumberOfControlPoints(self) -> int\nC++: virtual int GetNumberOfControlPoints()\n\nGet number of control points.\n"},
  {"GetNthControlPointDisplayPosition", PyvtkSlicerMarkupsWidgetRepresentation_GetNthControlPointDisplayPosition, METH_VARARGS,
   "GetNthControlPointDisplayPosition(self, n:int, pos:[float, float])\n     -> int\nC++: virtual int GetNthControlPointDisplayPosition(int n,\n    double pos[2])\n\nGet the nth node's display position. Will return 1 on success, or\n0 if there are not at least (n+1) nodes (0 based counting).\n"},
  {"SetMarkupsDisplayNode", PyvtkSlicerMarkupsWidgetRepresentation_SetMarkupsDisplayNode, METH_VARARGS,
   "SetMarkupsDisplayNode(self,\n    markupsDisplayNode:vtkMRMLMarkupsDisplayNode) -> None\nC++: virtual void SetMarkupsDisplayNode(\n    vtkMRMLMarkupsDisplayNode *markupsDisplayNode)\n\nSet/Get the vtkMRMLMarkupsNode connected with this representation\n"},
  {"GetMarkupsDisplayNode", PyvtkSlicerMarkupsWidgetRepresentation_GetMarkupsDisplayNode, METH_VARARGS,
   "GetMarkupsDisplayNode(self) -> vtkMRMLMarkupsDisplayNode\nC++: virtual vtkMRMLMarkupsDisplayNode *GetMarkupsDisplayNode()\n\n"},
  {"GetMarkupsNode", PyvtkSlicerMarkupsWidgetRepresentation_GetMarkupsNode, METH_VARARGS,
   "GetMarkupsNode(self) -> vtkMRMLMarkupsNode\nC++: virtual vtkMRMLMarkupsNode *GetMarkupsNode()\n\n"},
  {"UpdateCenterOfRotation", PyvtkSlicerMarkupsWidgetRepresentation_UpdateCenterOfRotation, METH_VARARGS,
   "UpdateCenterOfRotation(self) -> None\nC++: virtual void UpdateCenterOfRotation()\n\nCompute the center of rotation and update it in the Markups node.\n"},
  {"GetTransformationReferencePoint", PyvtkSlicerMarkupsWidgetRepresentation_GetTransformationReferencePoint, METH_VARARGS,
   "GetTransformationReferencePoint(self, referencePointWorld:[float,\n    float, float]) -> bool\nC++: virtual bool GetTransformationReferencePoint(\n    double referencePointWorld[3])\n\nTranslation, rotation, scaling will happen around this position\n"},
  {"CanInteract", PyvtkSlicerMarkupsWidgetRepresentation_CanInteract, METH_VARARGS,
   "CanInteract(self,\n    interactionEventData:vtkMRMLInteractionEventData,\n    foundComponentType:int, foundComponentIndex:int,\n    closestDistance2:float) -> None\nC++: virtual void CanInteract(\n    vtkMRMLInteractionEventData *interactionEventData,\n    int &foundComponentType, int &foundComponentIndex,\n    double &closestDistance2)\n\nReturn found component type (as\nvtkMRMLMarkupsDisplayNode::ComponentType). closestDistance2 is\nthe squared distance in display coordinates from the closest\nposition where interaction is possible. componentIndex returns\nindex of the found component (e.g., if control point is found\nthen control point index is returned).\n"},
  {"FindClosestPointOnWidget", PyvtkSlicerMarkupsWidgetRepresentation_FindClosestPointOnWidget, METH_VARARGS,
   "FindClosestPointOnWidget(self, displayPos:(int, int),\n    worldPos:[float, float, float], idx:[int, ...]) -> int\nC++: virtual int FindClosestPointOnWidget(const int displayPos[2],\n     double worldPos[3], int *idx)\n\n"},
  {"GetPointPlacer", PyvtkSlicerMarkupsWidgetRepresentation_GetPointPlacer, METH_VARARGS,
   "GetPointPlacer(self) -> vtkPointPlacer\nC++: virtual vtkPointPlacer *GetPointPlacer()\n\n"},
  {"GetControlPointsPolyData", PyvtkSlicerMarkupsWidgetRepresentation_GetControlPointsPolyData, METH_VARARGS,
   "GetControlPointsPolyData(self, controlPointType:int)\n    -> vtkPolyData\nC++: virtual vtkPolyData *GetControlPointsPolyData(\n    int controlPointType)\n\nGet internal control points polydata - for testing purposes.\ncontrolPointType can be Unselected, Selected, Active, Project,\nProjectBack.\n"},
  {"GetLabelControlPointsPolyData", PyvtkSlicerMarkupsWidgetRepresentation_GetLabelControlPointsPolyData, METH_VARARGS,
   "GetLabelControlPointsPolyData(self, pipeline:int) -> vtkPolyData\nC++: virtual vtkPolyData *GetLabelControlPointsPolyData(\n    int pipeline)\n\nGet internal label control points polydata - for testing\npurposes. controlPointType can be Unselected, Selected, Active,\nProject, ProjectBack.\n"},
  {"GetLabels", PyvtkSlicerMarkupsWidgetRepresentation_GetLabels, METH_VARARGS,
   "GetLabels(self, pipeline:int) -> vtkStringArray\nC++: virtual vtkStringArray *GetLabels(int pipeline)\n\nGet internal labels list - for testing purposes. controlPointType\ncan be Unselected, Selected, Active, Project, ProjectBack.\n"},
  {"IsDisplayable", PyvtkSlicerMarkupsWidgetRepresentation_IsDisplayable, METH_VARARGS,
   "IsDisplayable(self) -> bool\nC++: bool IsDisplayable()\n\nReturns true if the representation is displayable in the current\nview. It takes into account current view node's display node and parent\nfolder's visibility.\n"},
  {"GetInteractionHandleAxisWorld", PyvtkSlicerMarkupsWidgetRepresentation_GetInteractionHandleAxisWorld, METH_VARARGS,
   "GetInteractionHandleAxisWorld(self, type:int, index:int,\n    axis:[float, float, float]) -> None\nC++: virtual void GetInteractionHandleAxisWorld(int type,\n    int index, double axis[3])\n\nGet the axis for the handle specified by the index\n"},
  {"GetInteractionHandleOriginWorld", PyvtkSlicerMarkupsWidgetRepresentation_GetInteractionHandleOriginWorld, METH_VARARGS,
   "GetInteractionHandleOriginWorld(self, origin:[float, float,\n    float]) -> None\nC++: virtual void GetInteractionHandleOriginWorld(\n    double origin[3])\n\nGet the origin of the interaction handle widget\n"},
  {"GetInteractionHandlePositionWorld", PyvtkSlicerMarkupsWidgetRepresentation_GetInteractionHandlePositionWorld, METH_VARARGS,
   "GetInteractionHandlePositionWorld(self, type:int, index:int,\n    position:[float, float, float]) -> None\nC++: virtual void GetInteractionHandlePositionWorld(int type,\n    int index, double position[3])\n\nGet the position of an interaction handle in world coordinates\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerMarkupsWidgetRepresentation_Doc =
  "vtkSlicerMarkupsWidgetRepresentation - Class for rendering a markups\nnode\n\n"
  "Superclass: vtkMRMLAbstractWidgetRepresentation\n\n"
  "This class can display a markups node in the scene. It plays a\n"
  "similar role to vtkWidgetRepresentation, but it is simplified and\n"
  "specialized for optimal use in Slicer. It state is stored in the\n"
  "associated MRML display node to avoid extra synchronization\n"
  "mechanisms. The representation only observes MRML node changes, it\n"
  "does not directly process any interaction events directly\n"
  "(interaction events are processed by vtkMRMLAbstractWidget, which\n"
  "then modifies MRML nodes).\n\n"
  "This class (and subclasses) are a type of vtkProp; meaning that they\n"
  "can be associated with a vtkRenderer end embedded in a scene like any\n"
  "other vtkActor.\n\n"
  "* @sa\n"
  "* vtkSlicerMarkupsWidgetRepresentation vtkMRMLAbstractWidget\n"
  "  vtkPointPlacer\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerMarkupsWidgetRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleVTKWidgetsPython.vtkSlicerMarkupsWidgetRepresentation", // tp_name
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
  PyvtkSlicerMarkupsWidgetRepresentation_Doc, // tp_doc
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

PyObject *PyvtkSlicerMarkupsWidgetRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerMarkupsWidgetRepresentation_Type, PyvtkSlicerMarkupsWidgetRepresentation_Methods,
    "vtkSlicerMarkupsWidgetRepresentation",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLAbstractWidgetRepresentation");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "Unselected", vtkSlicerMarkupsWidgetRepresentation::Unselected },
        { "Selected", vtkSlicerMarkupsWidgetRepresentation::Selected },
        { "Active", vtkSlicerMarkupsWidgetRepresentation::Active },
        { "Project", vtkSlicerMarkupsWidgetRepresentation::Project },
        { "ProjectBack", vtkSlicerMarkupsWidgetRepresentation::ProjectBack },
        { "NumberOfControlPointTypes", vtkSlicerMarkupsWidgetRepresentation::NumberOfControlPointTypes },
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

void PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerMarkupsWidgetRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerMarkupsWidgetRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

