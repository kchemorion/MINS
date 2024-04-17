// python wrapper for vtkSlicerMarkupsWidgetRepresentation3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerMarkupsWidgetRepresentation3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation3D(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerMarkupsWidgetRepresentation3D_ClassNew(); }

#ifndef DECLARED_PyvtkSlicerMarkupsWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkSlicerMarkupsWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkSlicerMarkupsWidgetRepresentation_ClassNew
#endif

static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerMarkupsWidgetRepresentation3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerMarkupsWidgetRepresentation3D *tempr = vtkSlicerMarkupsWidgetRepresentation3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerMarkupsWidgetRepresentation3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerMarkupsWidgetRepresentation3D::NewInstance());

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
PyvtkSlicerMarkupsWidgetRepresentation3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerMarkupsWidgetRepresentation3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation3D_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

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
      op->vtkSlicerMarkupsWidgetRepresentation3D::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation3D_UpdateFromMRMLInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateFromMRMLInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

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
      op->vtkSlicerMarkupsWidgetRepresentation3D::UpdateFromMRMLInternal(temp0, temp1, temp2);
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
PyvtkSlicerMarkupsWidgetRepresentation3D_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

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
      op->vtkSlicerMarkupsWidgetRepresentation3D::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

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
      op->vtkSlicerMarkupsWidgetRepresentation3D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation3D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation3D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation3D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation3D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation3D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation3D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation3D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkSlicerMarkupsWidgetRepresentation3D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation3D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkSlicerMarkupsWidgetRepresentation3D::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation3D_CanInteract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanInteract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

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
      op->vtkSlicerMarkupsWidgetRepresentation3D::CanInteract(temp0, temp1, temp2, temp3);
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
PyvtkSlicerMarkupsWidgetRepresentation3D_CanInteractWithHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanInteractWithHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

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
      op->vtkSlicerMarkupsWidgetRepresentation3D::CanInteractWithHandles(temp0, temp1, temp2, temp3);
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
PyvtkSlicerMarkupsWidgetRepresentation3D_CanInteractWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanInteractWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

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
      op->vtkSlicerMarkupsWidgetRepresentation3D::CanInteractWithLine(temp0, temp1, temp2, temp3);
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
PyvtkSlicerMarkupsWidgetRepresentation3D_AccuratePick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AccuratePick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

  int temp0;
  int temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  size_t size3 = 0;
  double store3[2*3];
  double *temp3 = nullptr;
  double *save3 = nullptr;
  if (ap.GetArgSize(3) > 0)
  {
    size3 = 3;
    temp3 = store3;
    save3 = store3 + 3;
  }
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    bool tempr = (ap.IsBound() ?
      op->AccuratePick(temp0, temp1, temp2, temp3) :
      op->vtkSlicerMarkupsWidgetRepresentation3D::AccuratePick(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation3D_GetNthControlPointViewVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointViewVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNthControlPointViewVisibility(temp0) :
      op->vtkSlicerMarkupsWidgetRepresentation3D::GetNthControlPointViewVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation3D_SetOccludedRelativeOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOccludedRelativeOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOccludedRelativeOffset(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsWidgetRepresentation3D::SetOccludedRelativeOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsWidgetRepresentation3D_GetOccludedRelativeOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOccludedRelativeOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsWidgetRepresentation3D *op = static_cast<vtkSlicerMarkupsWidgetRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOccludedRelativeOffset() :
      op->vtkSlicerMarkupsWidgetRepresentation3D::GetOccludedRelativeOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerMarkupsWidgetRepresentation3D_Methods[] = {
  {"IsTypeOf", PyvtkSlicerMarkupsWidgetRepresentation3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerMarkupsWidgetRepresentation3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerMarkupsWidgetRepresentation3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkSlicerMarkupsWidgetRepresentation3D\nC++: static vtkSlicerMarkupsWidgetRepresentation3D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerMarkupsWidgetRepresentation3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerMarkupsWidgetRepresentation3D\nC++: vtkSlicerMarkupsWidgetRepresentation3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerMarkupsWidgetRepresentation3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerMarkupsWidgetRepresentation3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRenderer", PyvtkSlicerMarkupsWidgetRepresentation3D_SetRenderer, METH_VARARGS,
   "SetRenderer(self, ren:vtkRenderer) -> None\nC++: void SetRenderer(vtkRenderer *ren) override;\n\nSet the renderer in which the representations draws itself.\nTypically the renderer is set by the associated widget. Use the\nwidget's SetCurrentRenderer() method in most cases; otherwise\nthere is a risk of inconsistent behavior as events and drawing\nmay be performed in different viewports. WARNING: The renderer is\nNOT reference counted by the representation, in order to avoid\nreference loops.  Be sure that the representation lifetime does\nnot extend beyond the renderer lifetime.\n"},
  {"UpdateFromMRMLInternal", PyvtkSlicerMarkupsWidgetRepresentation3D_UpdateFromMRMLInternal, METH_VARARGS,
   "UpdateFromMRMLInternal(self, caller:vtkMRMLNode, event:int,\n    callData:Pointer=...) -> None\nC++: void UpdateFromMRMLInternal(vtkMRMLNode *caller,\n    unsigned long event, void *callData=nullptr) override;\n\nSubclasses of vtkSlicerMarkupsWidgetRepresentation3D must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {"GetActors", PyvtkSlicerMarkupsWidgetRepresentation3D_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkSlicerMarkupsWidgetRepresentation3D_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"RenderOverlay", PyvtkSlicerMarkupsWidgetRepresentation3D_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"RenderOpaqueGeometry", PyvtkSlicerMarkupsWidgetRepresentation3D_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkSlicerMarkupsWidgetRepresentation3D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkSlicerMarkupsWidgetRepresentation3D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementer. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"GetBounds", PyvtkSlicerMarkupsWidgetRepresentation3D_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nReturn the bounds of the representation\n"},
  {"CanInteract", PyvtkSlicerMarkupsWidgetRepresentation3D_CanInteract, METH_VARARGS,
   "CanInteract(self,\n    interactionEventData:vtkMRMLInteractionEventData,\n    foundComponentType:int, foundComponentIndex:int,\n    closestDistance2:float) -> None\nC++: void CanInteract(\n    vtkMRMLInteractionEventData *interactionEventData,\n    int &foundComponentType, int &foundComponentIndex,\n    double &closestDistance2) override;\n\nReturn found component type (as\nvtkMRMLMarkupsDisplayNode::ComponentType). closestDistance2 is\nthe squared distance in display coordinates from the closest\nposition where interaction is possible. componentIndex returns\nindex of the found component (e.g., if control point is found\nthen control point index is returned).\n"},
  {"CanInteractWithHandles", PyvtkSlicerMarkupsWidgetRepresentation3D_CanInteractWithHandles, METH_VARARGS,
   "CanInteractWithHandles(self,\n    interactionEventData:vtkMRMLInteractionEventData,\n    foundComponentType:int, foundComponentIndex:int,\n    closestDistance2:float) -> None\nC++: virtual void CanInteractWithHandles(\n    vtkMRMLInteractionEventData *interactionEventData,\n    int &foundComponentType, int &foundComponentIndex,\n    double &closestDistance2)\n\nCheck if interaction with the transformation handles is possible\n"},
  {"CanInteractWithLine", PyvtkSlicerMarkupsWidgetRepresentation3D_CanInteractWithLine, METH_VARARGS,
   "CanInteractWithLine(self,\n    interactionEventData:vtkMRMLInteractionEventData,\n    foundComponentType:int, foundComponentIndex:int,\n    closestDistance2:float) -> None\nC++: void CanInteractWithLine(\n    vtkMRMLInteractionEventData *interactionEventData,\n    int &foundComponentType, int &foundComponentIndex,\n    double &closestDistance2)\n\nChecks if interaction with straight line between visible points\nis possible. Can be used on the output of CanInteract, as if no\nbetter component is found then the input is returned.\n"},
  {"AccuratePick", PyvtkSlicerMarkupsWidgetRepresentation3D_AccuratePick, METH_VARARGS,
   "AccuratePick(self, x:int, y:int, pickPoint:[float, float, float],\n    pickNormal:[float, float, float]=...) -> bool\nC++: bool AccuratePick(int x, int y, double pickPoint[3],\n    double pickNormal[3]=nullptr)\n\n"},
  {"GetNthControlPointViewVisibility", PyvtkSlicerMarkupsWidgetRepresentation3D_GetNthControlPointViewVisibility, METH_VARARGS,
   "GetNthControlPointViewVisibility(self, n:int) -> bool\nC++: bool GetNthControlPointViewVisibility(int n)\n\nReturn true if the control point is actually visible (displayed\nand not occluded by other objects in the view). Useful for\nnon-regression tests that need to inspect internal state of the\nwidget.\n"},
  {"SetOccludedRelativeOffset", PyvtkSlicerMarkupsWidgetRepresentation3D_SetOccludedRelativeOffset, METH_VARARGS,
   "SetOccludedRelativeOffset(self, _arg:float) -> None\nC++: virtual void SetOccludedRelativeOffset(double _arg)\n\nRelative offset used for rendering occluded actors. The range of\ncoincident offset can be between +/- 65000. Positive values move\nthe occluded objects away from the camera, and negative values\ntowards. Default value is -25000.\n"},
  {"GetOccludedRelativeOffset", PyvtkSlicerMarkupsWidgetRepresentation3D_GetOccludedRelativeOffset, METH_VARARGS,
   "GetOccludedRelativeOffset(self) -> float\nC++: virtual double GetOccludedRelativeOffset()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerMarkupsWidgetRepresentation3D_Doc =
  "vtkSlicerMarkupsWidgetRepresentation3D - Default representation for\nthe markups widget in 3D views\n\n"
  "Superclass: vtkSlicerMarkupsWidgetRepresentation\n\n"
  "@sa\n"
  "vtkSlicerMarkupsWidgetRepresentation vtkSlicerMarkupsWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerMarkupsWidgetRepresentation3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleVTKWidgetsPython.vtkSlicerMarkupsWidgetRepresentation3D", // tp_name
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
  PyvtkSlicerMarkupsWidgetRepresentation3D_Doc, // tp_doc
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

PyObject *PyvtkSlicerMarkupsWidgetRepresentation3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerMarkupsWidgetRepresentation3D_Type, PyvtkSlicerMarkupsWidgetRepresentation3D_Methods,
    "vtkSlicerMarkupsWidgetRepresentation3D",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkSlicerMarkupsWidgetRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerMarkupsWidgetRepresentation3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerMarkupsWidgetRepresentation3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerMarkupsWidgetRepresentation3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

