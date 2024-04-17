// python wrapper for vtkMRMLSliceIntersectionInteractionRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSliceIntersectionInteractionRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSliceIntersectionInteractionRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSliceIntersectionInteractionRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractWidgetRepresentation_ClassNew
#endif

static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSliceIntersectionInteractionRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSliceIntersectionInteractionRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSliceIntersectionInteractionRepresentation *tempr = vtkMRMLSliceIntersectionInteractionRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceIntersectionInteractionRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSliceIntersectionInteractionRepresentation::NewInstance());

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
PyvtkMRMLSliceIntersectionInteractionRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSliceIntersectionInteractionRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSliceIntersectionInteractionRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_SetSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

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
      op->vtkMRMLSliceIntersectionInteractionRepresentation::SetSliceNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_GetSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceNode *tempr = (ap.IsBound() ?
      op->GetSliceNode() :
      op->vtkMRMLSliceIntersectionInteractionRepresentation::GetSliceNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_GetSliceDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceDisplayNode *tempr = (ap.IsBound() ?
      op->GetSliceDisplayNode() :
      op->vtkMRMLSliceIntersectionInteractionRepresentation::GetSliceDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_IsDisplayable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDisplayable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDisplayable() :
      op->vtkMRMLSliceIntersectionInteractionRepresentation::IsDisplayable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_UpdateFromMRML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateFromMRML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

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
      op->vtkMRMLSliceIntersectionInteractionRepresentation::UpdateFromMRML(temp0, temp1, temp2);
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
PyvtkMRMLSliceIntersectionInteractionRepresentation_AddIntersectingSliceLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIntersectingSliceLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  vtkMRMLSliceLogic *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceLogic"))
  {
    if (ap.IsBound())
    {
      op->AddIntersectingSliceLogic(temp0);
    }
    else
    {
      op->vtkMRMLSliceIntersectionInteractionRepresentation::AddIntersectingSliceLogic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_RemoveIntersectingSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveIntersectingSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  vtkMRMLSliceNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode"))
  {
    if (ap.IsBound())
    {
      op->RemoveIntersectingSliceNode(temp0);
    }
    else
    {
      op->vtkMRMLSliceIntersectionInteractionRepresentation::RemoveIntersectingSliceNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_UpdateIntersectingSliceNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateIntersectingSliceNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateIntersectingSliceNodes();
    }
    else
    {
      op->vtkMRMLSliceIntersectionInteractionRepresentation::UpdateIntersectingSliceNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_RemoveAllIntersectingSliceNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllIntersectingSliceNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllIntersectingSliceNodes();
    }
    else
    {
      op->vtkMRMLSliceIntersectionInteractionRepresentation::RemoveAllIntersectingSliceNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkMRMLSliceIntersectionInteractionRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

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
      op->vtkMRMLSliceIntersectionInteractionRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkMRMLSliceIntersectionInteractionRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_SetMRMLApplicationLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMRMLApplicationLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

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
      op->vtkMRMLSliceIntersectionInteractionRepresentation::SetMRMLApplicationLogic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_GetMRMLApplicationLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMRMLApplicationLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLApplicationLogic *tempr = (ap.IsBound() ?
      op->GetMRMLApplicationLogic() :
      op->vtkMRMLSliceIntersectionInteractionRepresentation::GetMRMLApplicationLogic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_ComputeSliceIntersectionPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSliceIntersectionPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeSliceIntersectionPoint();
    }
    else
    {
      op->vtkMRMLSliceIntersectionInteractionRepresentation::ComputeSliceIntersectionPoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_DistanceFromSliceIntersectionToPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistanceFromSliceIntersectionToPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  vtkMRMLSliceNode *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->DistanceFromSliceIntersectionToPoint(temp0, temp1, temp2) :
      op->vtkMRMLSliceIntersectionInteractionRepresentation::DistanceFromSliceIntersectionToPoint(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_GetSliceIntersectionPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceIntersectionPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSliceIntersectionPoint() :
      op->vtkMRMLSliceIntersectionInteractionRepresentation::GetSliceIntersectionPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_IsMouseCursorInSliceView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMouseCursorInSliceView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->IsMouseCursorInSliceView(temp0) :
      op->vtkMRMLSliceIntersectionInteractionRepresentation::IsMouseCursorInSliceView(temp0));

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
PyvtkMRMLSliceIntersectionInteractionRepresentation_SetPipelinesHandlesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPipelinesHandlesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPipelinesHandlesVisibility(temp0);
    }
    else
    {
      op->vtkMRMLSliceIntersectionInteractionRepresentation::SetPipelinesHandlesVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_SetPipelinesHandlesOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPipelinesHandlesOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPipelinesHandlesOpacity(temp0);
    }
    else
    {
      op->vtkMRMLSliceIntersectionInteractionRepresentation::SetPipelinesHandlesOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_TransformIntersectingSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformIntersectingSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->TransformIntersectingSlices(temp0);
    }
    else
    {
      op->vtkMRMLSliceIntersectionInteractionRepresentation::TransformIntersectingSlices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_CanInteract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanInteract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  int temp1;
  int temp2;
  double temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    std::string tempr = (ap.IsBound() ?
      op->CanInteract(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMRMLSliceIntersectionInteractionRepresentation::CanInteract(temp0, temp1, temp2, temp3, temp4));

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
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_GetMaximumHandlePickingDistance2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumHandlePickingDistance2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumHandlePickingDistance2() :
      op->vtkMRMLSliceIntersectionInteractionRepresentation::GetMaximumHandlePickingDistance2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentation_GetTranslateArrowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslateArrowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentation *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslateArrowCursor(temp0) :
      op->vtkMRMLSliceIntersectionInteractionRepresentation::GetTranslateArrowCursor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSliceIntersectionInteractionRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSliceIntersectionInteractionRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkMRMLSliceIntersectionInteractionRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkMRMLSliceIntersectionInteractionRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLSliceIntersectionInteractionRepresentation\nC++: static vtkMRMLSliceIntersectionInteractionRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkMRMLSliceIntersectionInteractionRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self)\n    -> vtkMRMLSliceIntersectionInteractionRepresentation\nC++: vtkMRMLSliceIntersectionInteractionRepresentation *NewInstance(\n    )\n\nStandard methods for instances of this class.\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSliceIntersectionInteractionRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nStandard methods for instances of this class.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSliceIntersectionInteractionRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nStandard methods for instances of this class.\n"},
  {"SetSliceNode", PyvtkMRMLSliceIntersectionInteractionRepresentation_SetSliceNode, METH_VARARGS,
   "SetSliceNode(self, sliceNode:vtkMRMLSliceNode) -> None\nC++: void SetSliceNode(vtkMRMLSliceNode *sliceNode)\n\n"},
  {"GetSliceNode", PyvtkMRMLSliceIntersectionInteractionRepresentation_GetSliceNode, METH_VARARGS,
   "GetSliceNode(self) -> vtkMRMLSliceNode\nC++: vtkMRMLSliceNode *GetSliceNode()\n\n"},
  {"GetSliceDisplayNode", PyvtkMRMLSliceIntersectionInteractionRepresentation_GetSliceDisplayNode, METH_VARARGS,
   "GetSliceDisplayNode(self) -> vtkMRMLSliceDisplayNode\nC++: vtkMRMLSliceDisplayNode *GetSliceDisplayNode()\n\n"},
  {"IsDisplayable", PyvtkMRMLSliceIntersectionInteractionRepresentation_IsDisplayable, METH_VARARGS,
   "IsDisplayable(self) -> bool\nC++: bool IsDisplayable()\n\n"},
  {"UpdateFromMRML", PyvtkMRMLSliceIntersectionInteractionRepresentation_UpdateFromMRML, METH_VARARGS,
   "UpdateFromMRML(self, caller:vtkMRMLNode, event:int,\n    callData:Pointer=...) -> None\nC++: void UpdateFromMRML(vtkMRMLNode *caller, unsigned long event,\n     void *callData=nullptr) override;\n\nUpdateFromMRML() - update the widget from its state stored in\nMRML. if event is non-zero then a specific update (faster,\nsmaller scope) is performed instead of a full update.\n"},
  {"AddIntersectingSliceLogic", PyvtkMRMLSliceIntersectionInteractionRepresentation_AddIntersectingSliceLogic, METH_VARARGS,
   "AddIntersectingSliceLogic(self, sliceLogic:vtkMRMLSliceLogic)\n    -> None\nC++: void AddIntersectingSliceLogic(vtkMRMLSliceLogic *sliceLogic)\n\n"},
  {"RemoveIntersectingSliceNode", PyvtkMRMLSliceIntersectionInteractionRepresentation_RemoveIntersectingSliceNode, METH_VARARGS,
   "RemoveIntersectingSliceNode(self, sliceNode:vtkMRMLSliceNode)\n    -> None\nC++: void RemoveIntersectingSliceNode(vtkMRMLSliceNode *sliceNode)\n\n"},
  {"UpdateIntersectingSliceNodes", PyvtkMRMLSliceIntersectionInteractionRepresentation_UpdateIntersectingSliceNodes, METH_VARARGS,
   "UpdateIntersectingSliceNodes(self) -> None\nC++: void UpdateIntersectingSliceNodes()\n\n"},
  {"RemoveAllIntersectingSliceNodes", PyvtkMRMLSliceIntersectionInteractionRepresentation_RemoveAllIntersectingSliceNodes, METH_VARARGS,
   "RemoveAllIntersectingSliceNodes(self) -> None\nC++: void RemoveAllIntersectingSliceNodes()\n\n"},
  {"GetActors2D", PyvtkMRMLSliceIntersectionInteractionRepresentation_GetActors2D, METH_VARARGS,
   "GetActors2D(self, __a:vtkPropCollection) -> None\nC++: void GetActors2D(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkMRMLSliceIntersectionInteractionRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderOverlay", PyvtkMRMLSliceIntersectionInteractionRepresentation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"SetMRMLApplicationLogic", PyvtkMRMLSliceIntersectionInteractionRepresentation_SetMRMLApplicationLogic, METH_VARARGS,
   "SetMRMLApplicationLogic(self, __a:vtkMRMLApplicationLogic) -> None\nC++: void SetMRMLApplicationLogic(vtkMRMLApplicationLogic *)\n\n"},
  {"GetMRMLApplicationLogic", PyvtkMRMLSliceIntersectionInteractionRepresentation_GetMRMLApplicationLogic, METH_VARARGS,
   "GetMRMLApplicationLogic(self) -> vtkMRMLApplicationLogic\nC++: virtual vtkMRMLApplicationLogic *GetMRMLApplicationLogic()\n\n"},
  {"ComputeSliceIntersectionPoint", PyvtkMRMLSliceIntersectionInteractionRepresentation_ComputeSliceIntersectionPoint, METH_VARARGS,
   "ComputeSliceIntersectionPoint(self) -> None\nC++: void ComputeSliceIntersectionPoint()\n\nCompute slice intersection point between red, green and yellow\nslice nodes\n"},
  {"DistanceFromSliceIntersectionToPoint", PyvtkMRMLSliceIntersectionInteractionRepresentation_DistanceFromSliceIntersectionToPoint, METH_VARARGS,
   "DistanceFromSliceIntersectionToPoint(self,\n    intersectingSlice:vtkMRMLSliceNode, point_RAS:[float, float,\n    float], distance:float) -> bool\nC++: bool DistanceFromSliceIntersectionToPoint(\n    vtkMRMLSliceNode *intersectingSlice, double point_RAS[3],\n    double &distance)\n\nCompute distance between a point and a slice intersection\n"},
  {"GetSliceIntersectionPoint", PyvtkMRMLSliceIntersectionInteractionRepresentation_GetSliceIntersectionPoint, METH_VARARGS,
   "GetSliceIntersectionPoint(self) -> (float, float, float)\nC++: double *GetSliceIntersectionPoint()\n\nGet slice intersection point between red, green and yellow slice\nnodes\n"},
  {"IsMouseCursorInSliceView", PyvtkMRMLSliceIntersectionInteractionRepresentation_IsMouseCursorInSliceView, METH_VARARGS,
   "IsMouseCursorInSliceView(self, cursorPosition:[float, float])\n    -> bool\nC++: bool IsMouseCursorInSliceView(double cursorPosition[2])\n\nCheck whether the mouse cursor is within the slice view or not\n"},
  {"SetPipelinesHandlesVisibility", PyvtkMRMLSliceIntersectionInteractionRepresentation_SetPipelinesHandlesVisibility, METH_VARARGS,
   "SetPipelinesHandlesVisibility(self, visible:bool) -> None\nC++: void SetPipelinesHandlesVisibility(bool visible)\n\n"},
  {"SetPipelinesHandlesOpacity", PyvtkMRMLSliceIntersectionInteractionRepresentation_SetPipelinesHandlesOpacity, METH_VARARGS,
   "SetPipelinesHandlesOpacity(self, opacity:float) -> None\nC++: void SetPipelinesHandlesOpacity(double opacity)\n\n"},
  {"TransformIntersectingSlices", PyvtkMRMLSliceIntersectionInteractionRepresentation_TransformIntersectingSlices, METH_VARARGS,
   "TransformIntersectingSlices(self,\n    rotatedSliceToSliceTransformMatrix:vtkMatrix4x4) -> None\nC++: void TransformIntersectingSlices(\n    vtkMatrix4x4 *rotatedSliceToSliceTransformMatrix)\n\n"},
  {"CanInteract", PyvtkMRMLSliceIntersectionInteractionRepresentation_CanInteract, METH_VARARGS,
   "CanInteract(self,\n    interactionEventData:vtkMRMLInteractionEventData,\n    foundComponentType:int, foundComponentIndex:int,\n    closestDistance2:float, handleOpacity:float) -> str\nC++: virtual std::string CanInteract(\n    vtkMRMLInteractionEventData *interactionEventData,\n    int &foundComponentType, int &foundComponentIndex,\n    double &closestDistance2, double &handleOpacity)\n\nReturn found component type (as\nvtkMRMLInteractionDisplayNode::ComponentType). closestDistance2\nis the squared distance in display coordinates from the closest\nposition where interaction is possible. componentIndex returns\nindex of the found component (e.g., if control point is found\nthen control point index is returned).\n"},
  {"GetMaximumHandlePickingDistance2", PyvtkMRMLSliceIntersectionInteractionRepresentation_GetMaximumHandlePickingDistance2, METH_VARARGS,
   "GetMaximumHandlePickingDistance2(self) -> float\nC++: virtual double GetMaximumHandlePickingDistance2()\n\n"},
  {"GetTranslateArrowCursor", PyvtkMRMLSliceIntersectionInteractionRepresentation_GetTranslateArrowCursor, METH_VARARGS,
   "GetTranslateArrowCursor(self, intersectingSliceNodeID:str) -> int\nC++: virtual int GetTranslateArrowCursor(\n    const std::string &intersectingSliceNodeID)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSliceIntersectionInteractionRepresentation_Doc =
  "vtkMRMLSliceIntersectionInteractionRepresentation - represent\nintersections of other slice views in the current slice view\n\n"
  "Superclass: vtkMRMLAbstractWidgetRepresentation\n\n"
  "@sa\n"
  "vtkSliceIntersectionWidget vtkWidgetRepresentation vtkAbstractWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceIntersectionInteractionRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLSliceIntersectionInteractionRepresentation", // tp_name
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
  PyvtkMRMLSliceIntersectionInteractionRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSliceIntersectionInteractionRepresentation_StaticNew()
{
  return vtkMRMLSliceIntersectionInteractionRepresentation::New();
}

PyObject *PyvtkMRMLSliceIntersectionInteractionRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSliceIntersectionInteractionRepresentation_Type, PyvtkMRMLSliceIntersectionInteractionRepresentation_Methods,
    "vtkMRMLSliceIntersectionInteractionRepresentation",
 &PyvtkMRMLSliceIntersectionInteractionRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractWidgetRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLSliceIntersectionInteractionRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSliceIntersectionInteractionRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSliceIntersectionInteractionRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

