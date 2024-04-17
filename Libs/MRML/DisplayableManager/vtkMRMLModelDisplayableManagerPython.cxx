// python wrapper for vtkMRMLModelDisplayableManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLModelDisplayableManager.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLModelDisplayableManager(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLModelDisplayableManager_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractThreeDViewDisplayableManager_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractThreeDViewDisplayableManager_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractThreeDViewDisplayableManager_ClassNew
#endif

static PyObject *
PyvtkMRMLModelDisplayableManager_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLModelDisplayableManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLModelDisplayableManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLModelDisplayableManager *tempr = vtkMRMLModelDisplayableManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLModelDisplayableManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLModelDisplayableManager::NewInstance());

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
PyvtkMRMLModelDisplayableManager_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLModelDisplayableManager::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLModelDisplayableManager::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_GetClipModelsNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipModelsNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLClipModelsNode *tempr = (ap.IsBound() ?
      op->GetClipModelsNode() :
      op->vtkMRMLModelDisplayableManager::GetClipModelsNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_SetClipModelsNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipModelsNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  vtkMRMLClipModelsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLClipModelsNode"))
  {
    if (ap.IsBound())
    {
      op->SetClipModelsNode(temp0);
    }
    else
    {
      op->vtkMRMLModelDisplayableManager::SetClipModelsNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_GetActorByID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActorByID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkProp3D *tempr = (ap.IsBound() ?
      op->GetActorByID(temp0) :
      op->vtkMRMLModelDisplayableManager::GetActorByID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_GetIDByActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIDByActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  vtkProp3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp3D"))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIDByActor(temp0) :
      op->vtkMRMLModelDisplayableManager::GetIDByActor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_GetWorldPointPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldPointPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWorldPointPicker *tempr = (ap.IsBound() ?
      op->GetWorldPointPicker() :
      op->vtkMRMLModelDisplayableManager::GetWorldPointPicker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_GetPropPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPropPicker *tempr = (ap.IsBound() ?
      op->GetPropPicker() :
      op->vtkMRMLModelDisplayableManager::GetPropPicker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_GetCellPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellPicker *tempr = (ap.IsBound() ?
      op->GetCellPicker() :
      op->vtkMRMLModelDisplayableManager::GetCellPicker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_GetPointPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointPicker *tempr = (ap.IsBound() ?
      op->GetPointPicker() :
      op->vtkMRMLModelDisplayableManager::GetPointPicker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_Pick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Pick(temp0, temp1) :
      op->vtkMRMLModelDisplayableManager::Pick(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_Pick3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Pick3D(temp0) :
      op->vtkMRMLModelDisplayableManager::Pick3D(temp0));

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
PyvtkMRMLModelDisplayableManager_GetPickTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPickTolerance() :
      op->vtkMRMLModelDisplayableManager::GetPickTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_SetPickTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickTolerance(temp0);
    }
    else
    {
      op->vtkMRMLModelDisplayableManager::SetPickTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_GetPickedNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPickedNodeID() :
      op->vtkMRMLModelDisplayableManager::GetPickedNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_GetPickedRAS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedRAS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPickedRAS() :
      op->vtkMRMLModelDisplayableManager::GetPickedRAS());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_SetPickedRAS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickedRAS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPickedRAS(temp0);
    }
    else
    {
      op->vtkMRMLModelDisplayableManager::SetPickedRAS(temp0);
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
PyvtkMRMLModelDisplayableManager_GetPickedCellID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedCellID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPickedCellID() :
      op->vtkMRMLModelDisplayableManager::GetPickedCellID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_SetPickedCellID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickedCellID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickedCellID(temp0);
    }
    else
    {
      op->vtkMRMLModelDisplayableManager::SetPickedCellID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_GetPickedPointID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedPointID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPickedPointID() :
      op->vtkMRMLModelDisplayableManager::GetPickedPointID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_SetPickedPointID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickedPointID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickedPointID(temp0);
    }
    else
    {
      op->vtkMRMLModelDisplayableManager::SetPickedPointID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_SetClipPlaneFromMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipPlaneFromMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  int temp1;
  vtkPlane *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetClipPlaneFromMatrix(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLModelDisplayableManager::SetClipPlaneFromMatrix(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_IsModelDisplayable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsModelDisplayable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayableManager *op = static_cast<vtkMRMLModelDisplayableManager *>(vp);

  vtkMRMLDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsModelDisplayable(temp0) :
      op->vtkMRMLModelDisplayableManager::IsModelDisplayable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayableManager_IsCellScalarsActive(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsCellScalarsActive");

  vtkMRMLDisplayNode *temp0 = nullptr;
  vtkMRMLModelNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkMRMLModelNode")))
  {
    bool tempr = vtkMRMLModelDisplayableManager::IsCellScalarsActive(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLModelDisplayableManager_Methods[] = {
  {"IsTypeOf", PyvtkMRMLModelDisplayableManager_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLModelDisplayableManager_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLModelDisplayableManager_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLModelDisplayableManager\nC++: static vtkMRMLModelDisplayableManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLModelDisplayableManager_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLModelDisplayableManager\nC++: vtkMRMLModelDisplayableManager *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLModelDisplayableManager_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLModelDisplayableManager_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetClipModelsNode", PyvtkMRMLModelDisplayableManager_GetClipModelsNode, METH_VARARGS,
   "GetClipModelsNode(self) -> vtkMRMLClipModelsNode\nC++: vtkMRMLClipModelsNode *GetClipModelsNode()\n\nGet/Set the ClipModels Node\n"},
  {"SetClipModelsNode", PyvtkMRMLModelDisplayableManager_SetClipModelsNode, METH_VARARGS,
   "SetClipModelsNode(self, snode:vtkMRMLClipModelsNode) -> None\nC++: void SetClipModelsNode(vtkMRMLClipModelsNode *snode)\n\n"},
  {"GetActorByID", PyvtkMRMLModelDisplayableManager_GetActorByID, METH_VARARGS,
   "GetActorByID(self, id:str) -> vtkProp3D\nC++: vtkProp3D *GetActorByID(const char *id)\n\nReturn the current model actor corresponding to a give MRML ID\n"},
  {"GetIDByActor", PyvtkMRMLModelDisplayableManager_GetIDByActor, METH_VARARGS,
   "GetIDByActor(self, actor:vtkProp3D) -> str\nC++: const char *GetIDByActor(vtkProp3D *actor)\n\nReturn the current node ID corresponding to a given vtkProp3D\n"},
  {"GetWorldPointPicker", PyvtkMRMLModelDisplayableManager_GetWorldPointPicker, METH_VARARGS,
   "GetWorldPointPicker(self) -> vtkWorldPointPicker\nC++: vtkWorldPointPicker *GetWorldPointPicker()\n\nGet world point picker\n"},
  {"GetPropPicker", PyvtkMRMLModelDisplayableManager_GetPropPicker, METH_VARARGS,
   "GetPropPicker(self) -> vtkPropPicker\nC++: vtkPropPicker *GetPropPicker()\n\nGet property picker\n"},
  {"GetCellPicker", PyvtkMRMLModelDisplayableManager_GetCellPicker, METH_VARARGS,
   "GetCellPicker(self) -> vtkCellPicker\nC++: vtkCellPicker *GetCellPicker()\n\nGet cell picker\n"},
  {"GetPointPicker", PyvtkMRMLModelDisplayableManager_GetPointPicker, METH_VARARGS,
   "GetPointPicker(self) -> vtkPointPicker\nC++: vtkPointPicker *GetPointPicker()\n\nGet point picker\n"},
  {"Pick", PyvtkMRMLModelDisplayableManager_Pick, METH_VARARGS,
   "Pick(self, x:int, y:int) -> int\nC++: int Pick(int x, int y)\n\nConvert an x/y location to a MRML node, 3D RAS point, point ID,\ncell ID, as appropriate depending what's found under the xy.\n"},
  {"Pick3D", PyvtkMRMLModelDisplayableManager_Pick3D, METH_VARARGS,
   "Pick3D(self, ras:[float, float, float]) -> int\nC++: int Pick3D(double ras[3]) override;\n\nConvert a RAS location to a MRML node, point ID, cell ID, as\nappropriate depending what's found under the position.\n"},
  {"GetPickTolerance", PyvtkMRMLModelDisplayableManager_GetPickTolerance, METH_VARARGS,
   "GetPickTolerance(self) -> float\nC++: double GetPickTolerance()\n\nGet tolerance for Pick() method. It will call\nvtkCellPicker.GetTolerance()\n"},
  {"SetPickTolerance", PyvtkMRMLModelDisplayableManager_SetPickTolerance, METH_VARARGS,
   "SetPickTolerance(self, tolerance:float) -> None\nC++: void SetPickTolerance(double tolerance)\n\nSet tolerance for Pick() method. It will call\nvtkCellPicker.SetTolerance()\n"},
  {"GetPickedNodeID", PyvtkMRMLModelDisplayableManager_GetPickedNodeID, METH_VARARGS,
   "GetPickedNodeID(self) -> str\nC++: const char *GetPickedNodeID() override;\n\nGet the MRML ID of the picked node, returns empty string if no\npick\n"},
  {"GetPickedRAS", PyvtkMRMLModelDisplayableManager_GetPickedRAS, METH_VARARGS,
   "GetPickedRAS(self) -> (float, float, float)\nC++: double *GetPickedRAS()\n\nGet the picked RAS point, returns 0,0,0 if no pick\n"},
  {"SetPickedRAS", PyvtkMRMLModelDisplayableManager_SetPickedRAS, METH_VARARGS,
   "SetPickedRAS(self, newPickedRAS:[float, ...]) -> None\nC++: void SetPickedRAS(double *newPickedRAS)\n\nSet the picked RAS point, returns 0,0,0 if no pick\n"},
  {"GetPickedCellID", PyvtkMRMLModelDisplayableManager_GetPickedCellID, METH_VARARGS,
   "GetPickedCellID(self) -> int\nC++: vtkIdType GetPickedCellID()\n\nGet the picked cell id, returns -1 if no pick\n"},
  {"SetPickedCellID", PyvtkMRMLModelDisplayableManager_SetPickedCellID, METH_VARARGS,
   "SetPickedCellID(self, newCellID:int) -> None\nC++: void SetPickedCellID(vtkIdType newCellID)\n\nSet the picked cell id, returns -1 if no pick\n"},
  {"GetPickedPointID", PyvtkMRMLModelDisplayableManager_GetPickedPointID, METH_VARARGS,
   "GetPickedPointID(self) -> int\nC++: vtkIdType GetPickedPointID()\n\nGet the picked point id, returns -1 if no pick\n"},
  {"SetPickedPointID", PyvtkMRMLModelDisplayableManager_SetPickedPointID, METH_VARARGS,
   "SetPickedPointID(self, newPointID:int) -> None\nC++: void SetPickedPointID(vtkIdType newPointID)\n\nSet the picked point id, returns -1 if no pick\n"},
  {"SetClipPlaneFromMatrix", PyvtkMRMLModelDisplayableManager_SetClipPlaneFromMatrix, METH_VARARGS,
   "SetClipPlaneFromMatrix(self, sliceMatrix:vtkMatrix4x4,\n    planeDirection:int, plane:vtkPlane) -> None\nC++: void SetClipPlaneFromMatrix(vtkMatrix4x4 *sliceMatrix,\n    int planeDirection, vtkPlane *plane)\n\n"},
  {"IsModelDisplayable", PyvtkMRMLModelDisplayableManager_IsModelDisplayable, METH_VARARGS,
   "IsModelDisplayable(self, node:vtkMRMLDisplayNode) -> bool\nC++: bool IsModelDisplayable(vtkMRMLDisplayNode *node)\n\nReturn true if the display node is a model\n"},
  {"IsCellScalarsActive", PyvtkMRMLModelDisplayableManager_IsCellScalarsActive, METH_VARARGS,
   "IsCellScalarsActive(displayNode:vtkMRMLDisplayNode,\n    model:vtkMRMLModelNode=...) -> bool\nC++: static bool IsCellScalarsActive(\n    vtkMRMLDisplayNode *displayNode,\n    vtkMRMLModelNode *model=nullptr)\n\nHelper function for determining what type of scalar is active.\n\\return True if attribute location in display node is\n    vtkAssignAttribute::CELL_DATA\n  or active cell scalar name in the model node is\nvtkDataSetAttributes::SCALARS.\n  False otherwise.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLModelDisplayableManager_Doc =
  "vtkMRMLModelDisplayableManager - Manage display nodes with polydata\nin 3D views.\n\n"
  "Superclass: vtkMRMLAbstractThreeDViewDisplayableManager\n\n"
  "Any display node in the scene that contains a valid output polydata\n"
  "is represented into the view renderer using configured synchronized\n"
  "vtkActors and vtkMappers. Note that the display nodes must be of type\n"
  "vtkMRMLModelDisplayNode (to have an output polydata) but the\n"
  "displayable nodes don't necessarily have to be of type\n"
  "vtkMRMLModelNode.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLModelDisplayableManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLModelDisplayableManager", // tp_name
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
  PyvtkMRMLModelDisplayableManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLModelDisplayableManager_StaticNew()
{
  return vtkMRMLModelDisplayableManager::New();
}

PyObject *PyvtkMRMLModelDisplayableManager_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLModelDisplayableManager_Type, PyvtkMRMLModelDisplayableManager_Methods,
    "vtkMRMLModelDisplayableManager",
 &PyvtkMRMLModelDisplayableManager_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractThreeDViewDisplayableManager_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLModelDisplayableManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLModelDisplayableManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLModelDisplayableManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

