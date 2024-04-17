// python wrapper for vtkMRMLAbstractWidgetRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLAbstractWidgetRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLAbstractWidgetRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLAbstractWidgetRepresentation_ClassNew(); }


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAbstractWidgetRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLAbstractWidgetRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLAbstractWidgetRepresentation *tempr = vtkMRMLAbstractWidgetRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAbstractWidgetRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLAbstractWidgetRepresentation::NewInstance());

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
PyvtkMRMLAbstractWidgetRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLAbstractWidgetRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLAbstractWidgetRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkMRMLAbstractWidgetRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

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
      op->vtkMRMLAbstractWidgetRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

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
      op->vtkMRMLAbstractWidgetRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_GetVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetVolumes(temp0);
    }
    else
    {
      op->vtkMRMLAbstractWidgetRepresentation::GetVolumes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

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
      op->vtkMRMLAbstractWidgetRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkMRMLAbstractWidgetRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkMRMLAbstractWidgetRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkMRMLAbstractWidgetRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderVolumetricGeometry(temp0) :
      op->vtkMRMLAbstractWidgetRepresentation::RenderVolumetricGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkMRMLAbstractWidgetRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkMRMLAbstractWidgetRepresentation::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkMRMLAbstractWidgetRepresentation::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_SetApplicationLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetApplicationLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  vtkMRMLApplicationLogic *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLApplicationLogic"))
  {
    if (ap.IsBound())
    {
      op->SetApplicationLogic(temp0);
    }
    else
    {
      op->vtkMRMLAbstractWidgetRepresentation::SetApplicationLogic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_GetApplicationLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetApplicationLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLApplicationLogic *tempr = (ap.IsBound() ?
      op->GetApplicationLogic() :
      op->vtkMRMLAbstractWidgetRepresentation::GetApplicationLogic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_SetViewNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  vtkMRMLAbstractViewNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLAbstractViewNode"))
  {
    if (ap.IsBound())
    {
      op->SetViewNode(temp0);
    }
    else
    {
      op->vtkMRMLAbstractWidgetRepresentation::SetViewNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_GetViewNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAbstractViewNode *tempr = (ap.IsBound() ?
      op->GetViewNode() :
      op->vtkMRMLAbstractWidgetRepresentation::GetViewNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_UpdateFromMRML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateFromMRML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

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
      op->vtkMRMLAbstractWidgetRepresentation::UpdateFromMRML(temp0, temp1, temp2);
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
PyvtkMRMLAbstractWidgetRepresentation_SetPickingTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickingTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickingTolerance(temp0);
    }
    else
    {
      op->vtkMRMLAbstractWidgetRepresentation::SetPickingTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_GetPickingTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickingTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPickingTolerance() :
      op->vtkMRMLAbstractWidgetRepresentation::GetPickingTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_SetAlwaysOnTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlwaysOnTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlwaysOnTop(temp0);
    }
    else
    {
      op->vtkMRMLAbstractWidgetRepresentation::SetAlwaysOnTop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_GetAlwaysOnTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlwaysOnTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAlwaysOnTop() :
      op->vtkMRMLAbstractWidgetRepresentation::GetAlwaysOnTop());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_AlwaysOnTopOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlwaysOnTopOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlwaysOnTopOn();
    }
    else
    {
      op->vtkMRMLAbstractWidgetRepresentation::AlwaysOnTopOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_AlwaysOnTopOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlwaysOnTopOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlwaysOnTopOff();
    }
    else
    {
      op->vtkMRMLAbstractWidgetRepresentation::AlwaysOnTopOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_GetNeedToRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedToRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNeedToRender() :
      op->vtkMRMLAbstractWidgetRepresentation::GetNeedToRender());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_SetNeedToRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeedToRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNeedToRender(temp0);
    }
    else
    {
      op->vtkMRMLAbstractWidgetRepresentation::SetNeedToRender(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_NeedToRenderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedToRenderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NeedToRenderOn();
    }
    else
    {
      op->vtkMRMLAbstractWidgetRepresentation::NeedToRenderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidgetRepresentation_NeedToRenderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedToRenderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidgetRepresentation *op = static_cast<vtkMRMLAbstractWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NeedToRenderOff();
    }
    else
    {
      op->vtkMRMLAbstractWidgetRepresentation::NeedToRenderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLAbstractWidgetRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkMRMLAbstractWidgetRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLAbstractWidgetRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLAbstractWidgetRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLAbstractWidgetRepresentation\nC++: static vtkMRMLAbstractWidgetRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLAbstractWidgetRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLAbstractWidgetRepresentation\nC++: vtkMRMLAbstractWidgetRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLAbstractWidgetRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLAbstractWidgetRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetBounds", PyvtkMRMLAbstractWidgetRepresentation_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"GetActors", PyvtkMRMLAbstractWidgetRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"GetActors2D", PyvtkMRMLAbstractWidgetRepresentation_GetActors2D, METH_VARARGS,
   "GetActors2D(self, __a:vtkPropCollection) -> None\nC++: void GetActors2D(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"GetVolumes", PyvtkMRMLAbstractWidgetRepresentation_GetVolumes, METH_VARARGS,
   "GetVolumes(self, __a:vtkPropCollection) -> None\nC++: void GetVolumes(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"ReleaseGraphicsResources", PyvtkMRMLAbstractWidgetRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"RenderOverlay", PyvtkMRMLAbstractWidgetRepresentation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"RenderOpaqueGeometry", PyvtkMRMLAbstractWidgetRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkMRMLAbstractWidgetRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"RenderVolumetricGeometry", PyvtkMRMLAbstractWidgetRepresentation_RenderVolumetricGeometry, METH_VARARGS,
   "RenderVolumetricGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderVolumetricGeometry(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkMRMLAbstractWidgetRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"SetRenderer", PyvtkMRMLAbstractWidgetRepresentation_SetRenderer, METH_VARARGS,
   "SetRenderer(self, ren:vtkRenderer) -> None\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\nSet the renderer in which the representations draws itself.\nTypically the renderer is set by the associated widget. Use the\nwidget's SetCurrentRenderer() method in most cases; otherwise\nthere is a risk of inconsistent behavior as events and drawing\nmay be performed in different viewports. WARNING: The renderer is\nNOT reference counted by the representation, in order to avoid\nreference loops.  Be sure that the representation lifetime does\nnot extend beyond the renderer lifetime.\n"},
  {"GetRenderer", PyvtkMRMLAbstractWidgetRepresentation_GetRenderer, METH_VARARGS,
   "GetRenderer(self) -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nSet the renderer in which the representations draws itself.\nTypically the renderer is set by the associated widget. Use the\nwidget's SetCurrentRenderer() method in most cases; otherwise\nthere is a risk of inconsistent behavior as events and drawing\nmay be performed in different viewports. WARNING: The renderer is\nNOT reference counted by the representation, in order to avoid\nreference loops.  Be sure that the representation lifetime does\nnot extend beyond the renderer lifetime.\n"},
  {"SetApplicationLogic", PyvtkMRMLAbstractWidgetRepresentation_SetApplicationLogic, METH_VARARGS,
   "SetApplicationLogic(self, appLogic:vtkMRMLApplicationLogic)\n    -> None\nC++: virtual void SetApplicationLogic(\n    vtkMRMLApplicationLogic *appLogic)\n\nSet the application logic. Used for retrieving custom font file,\netc.\n"},
  {"GetApplicationLogic", PyvtkMRMLAbstractWidgetRepresentation_GetApplicationLogic, METH_VARARGS,
   "GetApplicationLogic(self) -> vtkMRMLApplicationLogic\nC++: virtual vtkMRMLApplicationLogic *GetApplicationLogic()\n\nSet the application logic. Used for retrieving custom font file,\netc.\n"},
  {"SetViewNode", PyvtkMRMLAbstractWidgetRepresentation_SetViewNode, METH_VARARGS,
   "SetViewNode(self, viewNode:vtkMRMLAbstractViewNode) -> None\nC++: virtual void SetViewNode(vtkMRMLAbstractViewNode *viewNode)\n\nSet the view node where this widget is displayed.\n"},
  {"GetViewNode", PyvtkMRMLAbstractWidgetRepresentation_GetViewNode, METH_VARARGS,
   "GetViewNode(self) -> vtkMRMLAbstractViewNode\nC++: virtual vtkMRMLAbstractViewNode *GetViewNode()\n\nSet the view node where this widget is displayed.\n"},
  {"UpdateFromMRML", PyvtkMRMLAbstractWidgetRepresentation_UpdateFromMRML, METH_VARARGS,
   "UpdateFromMRML(self, caller:vtkMRMLNode, event:int,\n    callData:Pointer=...) -> None\nC++: virtual void UpdateFromMRML(vtkMRMLNode *caller,\n    unsigned long event, void *callData=nullptr)\n\nUpdateFromMRML() - update the widget from its state stored in\nMRML. if event is non-zero then a specific update (faster,\nsmaller scope) is performed instead of a full update.\n"},
  {"SetPickingTolerance", PyvtkMRMLAbstractWidgetRepresentation_SetPickingTolerance, METH_VARARGS,
   "SetPickingTolerance(self, _arg:float) -> None\nC++: virtual void SetPickingTolerance(double _arg)\n\nSpecify tolerance for performing pick operations of points. For\ndisplay renderers it is defined in pixels. The specified value is\nscaled with ScreenScaleFactor. For VR renderer it is defined in\nmillimeters. The specified value is scaled with\nWorldToPhysicalScale.\n"},
  {"GetPickingTolerance", PyvtkMRMLAbstractWidgetRepresentation_GetPickingTolerance, METH_VARARGS,
   "GetPickingTolerance(self) -> float\nC++: virtual double GetPickingTolerance()\n\n"},
  {"SetAlwaysOnTop", PyvtkMRMLAbstractWidgetRepresentation_SetAlwaysOnTop, METH_VARARGS,
   "SetAlwaysOnTop(self, _arg:bool) -> None\nC++: virtual void SetAlwaysOnTop(bool _arg)\n\nControls whether the widget should always appear on top of other\nactors in the scene. (In effect, this will disable OpenGL Depth\nbuffer tests while rendering the widget). Default is to set it to\nfalse.\n"},
  {"GetAlwaysOnTop", PyvtkMRMLAbstractWidgetRepresentation_GetAlwaysOnTop, METH_VARARGS,
   "GetAlwaysOnTop(self) -> bool\nC++: virtual bool GetAlwaysOnTop()\n\n"},
  {"AlwaysOnTopOn", PyvtkMRMLAbstractWidgetRepresentation_AlwaysOnTopOn, METH_VARARGS,
   "AlwaysOnTopOn(self) -> None\nC++: virtual void AlwaysOnTopOn()\n\n"},
  {"AlwaysOnTopOff", PyvtkMRMLAbstractWidgetRepresentation_AlwaysOnTopOff, METH_VARARGS,
   "AlwaysOnTopOff(self) -> None\nC++: virtual void AlwaysOnTopOff()\n\n"},
  {"GetNeedToRender", PyvtkMRMLAbstractWidgetRepresentation_GetNeedToRender, METH_VARARGS,
   "GetNeedToRender(self) -> bool\nC++: virtual bool GetNeedToRender()\n\nThe widget representation can set this data member to true to\nindicate that it needs to be re-rendered. If the rendering\nrequest is processed then the flag is cleared.\n"},
  {"SetNeedToRender", PyvtkMRMLAbstractWidgetRepresentation_SetNeedToRender, METH_VARARGS,
   "SetNeedToRender(self, _arg:bool) -> None\nC++: virtual void SetNeedToRender(bool _arg)\n\nThe widget representation can set this data member to true to\nindicate that it needs to be re-rendered. If the rendering\nrequest is processed then the flag is cleared.\n"},
  {"NeedToRenderOn", PyvtkMRMLAbstractWidgetRepresentation_NeedToRenderOn, METH_VARARGS,
   "NeedToRenderOn(self) -> None\nC++: virtual void NeedToRenderOn()\n\nThe widget representation can set this data member to true to\nindicate that it needs to be re-rendered. If the rendering\nrequest is processed then the flag is cleared.\n"},
  {"NeedToRenderOff", PyvtkMRMLAbstractWidgetRepresentation_NeedToRenderOff, METH_VARARGS,
   "NeedToRenderOff(self) -> None\nC++: virtual void NeedToRenderOff()\n\nThe widget representation can set this data member to true to\nindicate that it needs to be re-rendered. If the rendering\nrequest is processed then the flag is cleared.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLAbstractWidgetRepresentation_Doc =
  "vtkMRMLAbstractWidgetRepresentation - Class for rendering a markups\nnode\n\n"
  "Superclass: vtkProp\n\n"
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
  "* vtkMRMLAbstractWidgetRepresentation vtkMRMLAbstractWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAbstractWidgetRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLAbstractWidgetRepresentation", // tp_name
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
  PyvtkMRMLAbstractWidgetRepresentation_Doc, // tp_doc
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

PyObject *PyvtkMRMLAbstractWidgetRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLAbstractWidgetRepresentation_Type, PyvtkMRMLAbstractWidgetRepresentation_Methods,
    "vtkMRMLAbstractWidgetRepresentation",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkProp");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLAbstractWidgetRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLAbstractWidgetRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLAbstractWidgetRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

