// python wrapper for vtkSlicerVolumeRenderingLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerVolumeRenderingLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerVolumeRenderingLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerVolumeRenderingLogic_ClassNew(); }


static PyObject *
PyvtkSlicerVolumeRenderingLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerVolumeRenderingLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerVolumeRenderingLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerVolumeRenderingLogic *tempr = vtkSlicerVolumeRenderingLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerVolumeRenderingLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerVolumeRenderingLogic::NewInstance());

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
PyvtkSlicerVolumeRenderingLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerVolumeRenderingLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerVolumeRenderingLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_RegisterRenderingMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterRenderingMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RegisterRenderingMethod(temp0, temp1);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::RegisterRenderingMethod(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_SetDefaultRenderingMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultRenderingMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultRenderingMethod(temp0);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::SetDefaultRenderingMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_GetDefaultRenderingMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultRenderingMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDefaultRenderingMethod() :
      op->vtkSlicerVolumeRenderingLogic::GetDefaultRenderingMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_SetUseLinearRamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLinearRamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseLinearRamp(temp0);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::SetUseLinearRamp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_GetUseLinearRamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLinearRamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseLinearRamp() :
      op->vtkSlicerVolumeRenderingLogic::GetUseLinearRamp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_CreateDefaultVolumeRenderingNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultVolumeRenderingNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode"))
  {
    vtkMRMLVolumeRenderingDisplayNode *tempr = (ap.IsBound() ?
      op->CreateDefaultVolumeRenderingNodes(temp0) :
      op->vtkSlicerVolumeRenderingLogic::CreateDefaultVolumeRenderingNodes(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_CreateVolumeRenderingDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateVolumeRenderingDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkMRMLVolumeRenderingDisplayNode *tempr = (ap.IsBound() ?
      op->CreateVolumeRenderingDisplayNode(temp0) :
      op->vtkSlicerVolumeRenderingLogic::CreateVolumeRenderingDisplayNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_AddVolumeRenderingDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVolumeRenderingDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLVolumeRenderingDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeRenderingDisplayNode"))
  {
    if (ap.IsBound())
    {
      op->AddVolumeRenderingDisplayNode(temp0);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::AddVolumeRenderingDisplayNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_RemoveVolumeRenderingDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVolumeRenderingDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLVolumeRenderingDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeRenderingDisplayNode"))
  {
    if (ap.IsBound())
    {
      op->RemoveVolumeRenderingDisplayNode(temp0);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::RemoveVolumeRenderingDisplayNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_AddAllVolumeRenderingDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAllVolumeRenderingDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddAllVolumeRenderingDisplayNodes();
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::AddAllVolumeRenderingDisplayNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_RemoveAllVolumeRenderingDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllVolumeRenderingDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllVolumeRenderingDisplayNodes();
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::RemoveAllVolumeRenderingDisplayNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_ChangeVolumeRenderingMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ChangeVolumeRenderingMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->ChangeVolumeRenderingMethod(temp0);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::ChangeVolumeRenderingMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_SetRecommendedVolumeRenderingProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRecommendedVolumeRenderingProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLVolumeRenderingDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeRenderingDisplayNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetRecommendedVolumeRenderingProperties(temp0) :
      op->vtkSlicerVolumeRenderingLogic::SetRecommendedVolumeRenderingProperties(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_CopyDisplayToVolumeRenderingDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyDisplayToVolumeRenderingDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLVolumeRenderingDisplayNode *temp0 = nullptr;
  vtkMRMLVolumeDisplayNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeRenderingDisplayNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkMRMLVolumeDisplayNode")))
  {
    if (ap.IsBound())
    {
      op->CopyDisplayToVolumeRenderingDisplayNode(temp0, temp1);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::CopyDisplayToVolumeRenderingDisplayNode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_CopyScalarDisplayToVolumeRenderingDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyScalarDisplayToVolumeRenderingDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLVolumeRenderingDisplayNode *temp0 = nullptr;
  vtkMRMLScalarVolumeDisplayNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeRenderingDisplayNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkMRMLScalarVolumeDisplayNode")))
  {
    if (ap.IsBound())
    {
      op->CopyScalarDisplayToVolumeRenderingDisplayNode(temp0, temp1);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::CopyScalarDisplayToVolumeRenderingDisplayNode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_CopyLabelMapDisplayToVolumeRenderingDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyLabelMapDisplayToVolumeRenderingDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLVolumeRenderingDisplayNode *temp0 = nullptr;
  vtkMRMLLabelMapVolumeDisplayNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeRenderingDisplayNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkMRMLLabelMapVolumeDisplayNode")))
  {
    if (ap.IsBound())
    {
      op->CopyLabelMapDisplayToVolumeRenderingDisplayNode(temp0, temp1);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::CopyLabelMapDisplayToVolumeRenderingDisplayNode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_SetThresholdToVolumeProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThresholdToVolumeProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  vtkVolumeProperty *temp2 = nullptr;
  bool temp3 = false;
  bool temp4 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkVolumeProperty") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetThresholdToVolumeProp(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::SetThresholdToVolumeProp(temp0, temp1, temp2, temp3, temp4);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkSlicerVolumeRenderingLogic_SetWindowLevelToVolumeProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLevelToVolumeProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  vtkScalarsToColors *temp2 = nullptr;
  vtkVolumeProperty *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkScalarsToColors") &&
      ap.GetVTKObject(temp3, "vtkVolumeProperty"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetWindowLevelToVolumeProp(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::SetWindowLevelToVolumeProp(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkSlicerVolumeRenderingLogic_SetGradientOpacityToVolumeProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientOpacityToVolumeProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  vtkVolumeProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkVolumeProperty"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetGradientOpacityToVolumeProp(temp0, temp1);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::SetGradientOpacityToVolumeProp(temp0, temp1);
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
PyvtkSlicerVolumeRenderingLogic_SetLabelMapToVolumeProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelMapToVolumeProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  vtkVolumeProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors") &&
      ap.GetVTKObject(temp1, "vtkVolumeProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLabelMapToVolumeProp(temp0, temp1);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::SetLabelMapToVolumeProp(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_UpdateDisplayNodeFromVolumeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateDisplayNodeFromVolumeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLVolumeRenderingDisplayNode *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  vtkMRMLVolumePropertyNode *temp2 = nullptr;
  vtkMRMLNode *temp3 = nullptr;
  bool temp4 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 5) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeRenderingDisplayNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLVolumeNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMRMLVolumePropertyNode")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkMRMLNode")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->UpdateDisplayNodeFromVolumeNode(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::UpdateDisplayNodeFromVolumeNode(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_CreateROINode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateROINode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLVolumeRenderingDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeRenderingDisplayNode"))
  {
    vtkMRMLDisplayableNode *tempr = (ap.IsBound() ?
      op->CreateROINode(temp0) :
      op->vtkSlicerVolumeRenderingLogic::CreateROINode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_RemoveViewFromVolumeDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveViewFromVolumeDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  vtkMRMLViewNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLViewNode"))
  {
    if (ap.IsBound())
    {
      op->RemoveViewFromVolumeDisplayNodes(temp0, temp1);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::RemoveViewFromVolumeDisplayNodes(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_GetVolumeRenderingDisplayNodeByID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeRenderingDisplayNodeByID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMRMLVolumeRenderingDisplayNode *tempr = (ap.IsBound() ?
      op->GetVolumeRenderingDisplayNodeByID(temp0, temp1) :
      op->vtkSlicerVolumeRenderingLogic::GetVolumeRenderingDisplayNodeByID(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_GetVolumeRenderingDisplayNodeForViewNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeRenderingDisplayNodeForViewNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  vtkMRMLViewNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLViewNode"))
  {
    vtkMRMLVolumeRenderingDisplayNode *tempr = (ap.IsBound() ?
      op->GetVolumeRenderingDisplayNodeForViewNode(temp0, temp1) :
      op->vtkSlicerVolumeRenderingLogic::GetVolumeRenderingDisplayNodeForViewNode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerVolumeRenderingLogic_GetVolumeRenderingDisplayNodeForViewNode_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeRenderingDisplayNodeForViewNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLViewNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLViewNode"))
  {
    vtkMRMLVolumeRenderingDisplayNode *tempr = (ap.IsBound() ?
      op->GetVolumeRenderingDisplayNodeForViewNode(temp0) :
      op->vtkSlicerVolumeRenderingLogic::GetVolumeRenderingDisplayNodeForViewNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerVolumeRenderingLogic_GetVolumeRenderingDisplayNodeForViewNode(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSlicerVolumeRenderingLogic_GetVolumeRenderingDisplayNodeForViewNode_s1(self, args);
    case 1:
      return PyvtkSlicerVolumeRenderingLogic_GetVolumeRenderingDisplayNodeForViewNode_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVolumeRenderingDisplayNodeForViewNode");
  return nullptr;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_GetFirstVolumeRenderingDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstVolumeRenderingDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode"))
  {
    vtkMRMLVolumeRenderingDisplayNode *tempr = (ap.IsBound() ?
      op->GetFirstVolumeRenderingDisplayNode(temp0) :
      op->vtkSlicerVolumeRenderingLogic::GetFirstVolumeRenderingDisplayNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_GetFirstVolumeRenderingDisplayNodeByROINode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstVolumeRenderingDisplayNodeByROINode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    vtkMRMLVolumeRenderingDisplayNode *tempr = (ap.IsBound() ?
      op->GetFirstVolumeRenderingDisplayNodeByROINode(temp0) :
      op->vtkSlicerVolumeRenderingLogic::GetFirstVolumeRenderingDisplayNodeByROINode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_UpdateTranferFunctionRangeFromImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTranferFunctionRangeFromImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLVolumeRenderingDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeRenderingDisplayNode"))
  {
    if (ap.IsBound())
    {
      op->UpdateTranferFunctionRangeFromImage(temp0);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::UpdateTranferFunctionRangeFromImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_FitROIToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FitROIToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLVolumeRenderingDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeRenderingDisplayNode"))
  {
    if (ap.IsBound())
    {
      op->FitROIToVolume(temp0);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::FitROIToVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_AddVolumePropertyFromFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVolumePropertyFromFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLVolumePropertyNode *tempr = (ap.IsBound() ?
      op->AddVolumePropertyFromFile(temp0) :
      op->vtkSlicerVolumeRenderingLogic::AddVolumePropertyFromFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_AddShaderPropertyFromFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderPropertyFromFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLShaderPropertyNode *tempr = (ap.IsBound() ?
      op->AddShaderPropertyFromFile(temp0) :
      op->vtkSlicerVolumeRenderingLogic::AddShaderPropertyFromFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_GetPresetsScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPresetsScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLScene *tempr = (ap.IsBound() ?
      op->GetPresetsScene() :
      op->vtkSlicerVolumeRenderingLogic::GetPresetsScene());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_AddPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLVolumePropertyNode *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumePropertyNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkImageData")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->AddPreset(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::AddPreset(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_RemovePreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkMRMLVolumePropertyNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumePropertyNode"))
  {
    if (ap.IsBound())
    {
      op->RemovePreset(temp0);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::RemovePreset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_LoadCustomPresetsScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadCustomPresetsScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->LoadCustomPresetsScene(temp0) :
      op->vtkSlicerVolumeRenderingLogic::LoadCustomPresetsScene(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_GetIconVolumeReferenceRole(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetIconVolumeReferenceRole");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkSlicerVolumeRenderingLogic::GetIconVolumeReferenceRole();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_GetPresetByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPresetByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLVolumePropertyNode *tempr = (ap.IsBound() ?
      op->GetPresetByName(temp0) :
      op->vtkSlicerVolumeRenderingLogic::GetPresetByName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_IsDifferentFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDifferentFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  vtkColorTransferFunction *temp0 = nullptr;
  vtkColorTransferFunction *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction") &&
      ap.GetVTKObject(temp1, "vtkColorTransferFunction"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDifferentFunction(temp0, temp1) :
      op->vtkSlicerVolumeRenderingLogic::IsDifferentFunction(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_SetDefaultROIClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultROIClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultROIClassName(temp0);
    }
    else
    {
      op->vtkSlicerVolumeRenderingLogic::SetDefaultROIClassName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumeRenderingLogic_GetDefaultROIClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultROIClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumeRenderingLogic *op = static_cast<vtkSlicerVolumeRenderingLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDefaultROIClassName() :
      op->vtkSlicerVolumeRenderingLogic::GetDefaultROIClassName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerVolumeRenderingLogic_Methods[] = {
  {"IsTypeOf", PyvtkSlicerVolumeRenderingLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerVolumeRenderingLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerVolumeRenderingLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerVolumeRenderingLogic\nC++: static vtkSlicerVolumeRenderingLogic *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerVolumeRenderingLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerVolumeRenderingLogic\nC++: vtkSlicerVolumeRenderingLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerVolumeRenderingLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerVolumeRenderingLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RegisterRenderingMethod", PyvtkSlicerVolumeRenderingLogic_RegisterRenderingMethod, METH_VARARGS,
   "RegisterRenderingMethod(self, methodName:str,\n    displayNodeClassName:str) -> None\nC++: void RegisterRenderingMethod(const char *methodName,\n    const char *displayNodeClassName)\n\nInform the logic and observers that a rendering method (class\nderiving from vtkMRMLVolumeRenderingDisplayNode) is available.\nThe event ModifiedEvent gets fired.\n\\sa GetRenderingMethods\n"},
  {"SetDefaultRenderingMethod", PyvtkSlicerVolumeRenderingLogic_SetDefaultRenderingMethod, METH_VARARGS,
   "SetDefaultRenderingMethod(self, _arg:str) -> None\nC++: virtual void SetDefaultRenderingMethod(const char *_arg)\n\nThe default rendering method is set to display nodes created in\nCreateVolumeRenderingDisplayNode(). If no rendering method is\ngiven the VTKCPURayCast is instantiated.\n\\sa CreateVolumeRenderingDisplayNode()\n"},
  {"GetDefaultRenderingMethod", PyvtkSlicerVolumeRenderingLogic_GetDefaultRenderingMethod, METH_VARARGS,
   "GetDefaultRenderingMethod(self) -> str\nC++: virtual char *GetDefaultRenderingMethod()\n\n"},
  {"SetUseLinearRamp", PyvtkSlicerVolumeRenderingLogic_SetUseLinearRamp, METH_VARARGS,
   "SetUseLinearRamp(self, _arg:bool) -> None\nC++: virtual void SetUseLinearRamp(bool _arg)\n\nUse a linear ramp (true) or a sharp ramp (false) when copying the\nvolume display node threshold values into the volume rendering\ndisplay node. True by default.\n\\sa CopyScalarDisplayToVolumeRenderingDisplayNode()\n"},
  {"GetUseLinearRamp", PyvtkSlicerVolumeRenderingLogic_GetUseLinearRamp, METH_VARARGS,
   "GetUseLinearRamp(self) -> bool\nC++: virtual bool GetUseLinearRamp()\n\n"},
  {"CreateDefaultVolumeRenderingNodes", PyvtkSlicerVolumeRenderingLogic_CreateDefaultVolumeRenderingNodes, METH_VARARGS,
   "CreateDefaultVolumeRenderingNodes(self,\n    volumeNode:vtkMRMLVolumeNode)\n    -> vtkMRMLVolumeRenderingDisplayNode\nC++: vtkMRMLVolumeRenderingDisplayNode *CreateDefaultVolumeRenderingNodes(\n    vtkMRMLVolumeNode *volumeNode)\n\nCreate and set up all nodes needed for volume rendering for a\ngiven volume node:\n- Display node according to the selected rendering method\n- Volume property node for display options\n\nROI node for cropping can be created by calling CreateROINode()\nmethod.\n\nWhen dealing with a volume node that may not have been shown in\nvolume rendering before, it's enough to call this function to\nprepare them for that. After this, only SetVisibility needs to be\ncalled on its display node for showing it. Does not create new\nnodes if they exist already.\n\\return Volume rendering display node for the given volume\n"},
  {"CreateVolumeRenderingDisplayNode", PyvtkSlicerVolumeRenderingLogic_CreateVolumeRenderingDisplayNode, METH_VARARGS,
   "CreateVolumeRenderingDisplayNode(self, renderingClassName:str=...)\n     -> vtkMRMLVolumeRenderingDisplayNode\nC++: vtkMRMLVolumeRenderingDisplayNode *CreateVolumeRenderingDisplayNode(\n    const char *renderingClassName=nullptr)\n\nCreate a volume rendering display node. The node to instantiate\nwill be of type renderingType if not null,DefaultRenderingMethod\nif not null or vtkMRMLCPURayCastVolumeRenderingDisplayNode in\nthat order. Return the created node or 0 if there is no scene or\nthe class name doesn't exist. If renderingClassName is 0, the\nreturned node has a name generated using \"VolumeRendering\" as\nbase name. You are responsible for deleting the node (read more\nabout it in the section \\ref GetNewCreate).\n\\sa DefaultRenderingMethod\n"},
  {"AddVolumeRenderingDisplayNode", PyvtkSlicerVolumeRenderingLogic_AddVolumeRenderingDisplayNode, METH_VARARGS,
   "AddVolumeRenderingDisplayNode(self,\n    node:vtkMRMLVolumeRenderingDisplayNode) -> None\nC++: void AddVolumeRenderingDisplayNode(\n    vtkMRMLVolumeRenderingDisplayNode *node)\n\nObserve the volume rendering display node to copy the volume\ndisplay node if needed. This function is called automatically\nwhen a display node is added into the scene. You shouldn't have\nto call it.\n\\sa vtkMRMLVolumeRenderingDisplayNode::FollowVolumeDisplayNode\n\\sa RemoveVolumeRenderingDisplayNode\n"},
  {"RemoveVolumeRenderingDisplayNode", PyvtkSlicerVolumeRenderingLogic_RemoveVolumeRenderingDisplayNode, METH_VARARGS,
   "RemoveVolumeRenderingDisplayNode(self,\n    node:vtkMRMLVolumeRenderingDisplayNode) -> None\nC++: void RemoveVolumeRenderingDisplayNode(\n    vtkMRMLVolumeRenderingDisplayNode *node)\n\nUnobserve the volume rendering display node.\n\\sa AddVolumeRenderingDisplayNode\n"},
  {"AddAllVolumeRenderingDisplayNodes", PyvtkSlicerVolumeRenderingLogic_AddAllVolumeRenderingDisplayNodes, METH_VARARGS,
   "AddAllVolumeRenderingDisplayNodes(self) -> None\nC++: void AddAllVolumeRenderingDisplayNodes()\n\nObserve all the volume rendering display nodes of the scene.\n\\sa AddVolumeRenderingDisplayNode\n"},
  {"RemoveAllVolumeRenderingDisplayNodes", PyvtkSlicerVolumeRenderingLogic_RemoveAllVolumeRenderingDisplayNodes, METH_VARARGS,
   "RemoveAllVolumeRenderingDisplayNodes(self) -> None\nC++: void RemoveAllVolumeRenderingDisplayNodes()\n\nUnobserve all the volume rendering display nodes of the scene.\n\\sa AddVolumeRenderingDisplayNode,\n    AddAllVolumeRenderingDisplayNodes\n"},
  {"ChangeVolumeRenderingMethod", PyvtkSlicerVolumeRenderingLogic_ChangeVolumeRenderingMethod, METH_VARARGS,
   "ChangeVolumeRenderingMethod(self, displayNodeClassName:str=...)\n    -> None\nC++: void ChangeVolumeRenderingMethod(\n    const char *displayNodeClassName=nullptr)\n\nRe-create all volume rendering display nodes of the requested\ntype. Common properties of the display nodes are propagated.\n"},
  {"SetRecommendedVolumeRenderingProperties", PyvtkSlicerVolumeRenderingLogic_SetRecommendedVolumeRenderingProperties, METH_VARARGS,
   "SetRecommendedVolumeRenderingProperties(self,\n    vrDisplayNode:vtkMRMLVolumeRenderingDisplayNode) -> bool\nC++: bool SetRecommendedVolumeRenderingProperties(\n    vtkMRMLVolumeRenderingDisplayNode *vrDisplayNode)\n\nSet volume rendering properties that seems well suited for the\nvolume. The function uses heuristics to detect what kind of\nvolume it is (CT, MRI, other), based on its intensity range and\nchooses preset accordingly. Returns false is volume type could\nnot be detected and so properties are not changed.\n"},
  {"CopyDisplayToVolumeRenderingDisplayNode", PyvtkSlicerVolumeRenderingLogic_CopyDisplayToVolumeRenderingDisplayNode, METH_VARARGS,
   "CopyDisplayToVolumeRenderingDisplayNode(self,\n    node:vtkMRMLVolumeRenderingDisplayNode,\n    displayNode:vtkMRMLVolumeDisplayNode=...) -> None\nC++: void CopyDisplayToVolumeRenderingDisplayNode(\n    vtkMRMLVolumeRenderingDisplayNode *node,\n    vtkMRMLVolumeDisplayNode *displayNode=nullptr)\n\nApplies the properties (window level, threshold and color\nfunction) of a volume display node to the volume rendering\ndisplay node. If displayNode is 0, it uses the first display\nnode. It's a utility method that internally calls\nCopyScalarDisplayToVolumeRenderingDisplayNode() or\nCopyLabelMapDisplayToVolumeRenderingDisplayNode() based on the\ntype of displayNode.\n\\sa CopyScalarDisplayToVolumeRenderingDisplayNode()\n\\sa CopyLabelMapDisplayToVolumeRenderingDisplayNode()\n"},
  {"CopyScalarDisplayToVolumeRenderingDisplayNode", PyvtkSlicerVolumeRenderingLogic_CopyScalarDisplayToVolumeRenderingDisplayNode, METH_VARARGS,
   "CopyScalarDisplayToVolumeRenderingDisplayNode(self,\n    volumeRenderingDisplayNode:vtkMRMLVolumeRenderingDisplayNode,\n    scalarDisplayNode:vtkMRMLScalarVolumeDisplayNode=...) -> None\nC++: void CopyScalarDisplayToVolumeRenderingDisplayNode(\n    vtkMRMLVolumeRenderingDisplayNode *volumeRenderingDisplayNode,\n     vtkMRMLScalarVolumeDisplayNode *scalarDisplayNode=nullptr)\n\nApplies the properties (window level, threshold and color\nfunction) of the scalar display node to the volume rendering\ndisplaynode. If scalarDisplayNode is 0, it uses the first display\nnode.\n\\sa CopyDisplayToVolumeRenderingDisplayNode()\n\\sa CopyLabelMapDisplayToVolumeRenderingDisplayNode()\n"},
  {"CopyLabelMapDisplayToVolumeRenderingDisplayNode", PyvtkSlicerVolumeRenderingLogic_CopyLabelMapDisplayToVolumeRenderingDisplayNode, METH_VARARGS,
   "CopyLabelMapDisplayToVolumeRenderingDisplayNode(self,\n    volumeRenderingDisplayNode:vtkMRMLVolumeRenderingDisplayNode,\n    labelMapDisplayNode:vtkMRMLLabelMapVolumeDisplayNode=...)\n    -> None\nC++: void CopyLabelMapDisplayToVolumeRenderingDisplayNode(\n    vtkMRMLVolumeRenderingDisplayNode *volumeRenderingDisplayNode,\n     vtkMRMLLabelMapVolumeDisplayNode *labelMapDisplayNode=nullptr)\n\nApplies the properties (threshold ) of the labelmap display node\nto the volume rendering displaynode. If labelMapDisplayNode is 0,\nit uses the first displaynode.\n\\sa CopyDisplayToVolumeRenderingDisplayNode()\n\\sa CopyScalarDisplayToVolumeRenderingDisplayNode()\n"},
  {"SetThresholdToVolumeProp", PyvtkSlicerVolumeRenderingLogic_SetThresholdToVolumeProp, METH_VARARGS,
   "SetThresholdToVolumeProp(self, scalarRange:[float, float],\n    threshold:[float, float], node:vtkVolumeProperty,\n    linearRamp:bool=False, stayUpAtUpperLimit:bool=False) -> None\nC++: void SetThresholdToVolumeProp(double scalarRange[2],\n    double threshold[2], vtkVolumeProperty *node,\n    bool linearRamp=false, bool stayUpAtUpperLimit=false)\n\nApplies a threshold to a volume property\\arg scalarRange is the\nentire range of the transfer function\\arg threshold is the range\nwhere the threshold is applied\\arg node is the container of the\ntransfer function to save\\arg linearRamp controls the shape of\nthe threshold:\n  true:            false:    _\n        __/|__            __| |__\n \\arg stayUpAtUpperLimit controls whether the threshold not maxed\nout:\n  true:    ______  false:\n        __/               __/|_____\n \n\\sa SetWindowLevelToVolumeProp()\n"},
  {"SetWindowLevelToVolumeProp", PyvtkSlicerVolumeRenderingLogic_SetWindowLevelToVolumeProp, METH_VARARGS,
   "SetWindowLevelToVolumeProp(self, scalarRange:[float, float],\n    windowLevel:[float, float], lut:vtkScalarsToColors,\n    node:vtkVolumeProperty) -> None\nC++: void SetWindowLevelToVolumeProp(double scalarRange[2],\n    double windowLevel[2], vtkScalarsToColors *lut,\n    vtkVolumeProperty *node)\n\nCreate a color transfer function that ranges from scalarRange[0]\ntoscalarRange[1] and containing a windowLevel[0] wide ramp\ncentered on level:\n                         max = level + window/2      scalarRange[1]\n                         .___________________________.\n  .____________________./\n  scalarRange[0]       min = level - window/2\n  The generated transfer function contains at least 4 points\nlocated in:\n* scalarRange[0]\n* min = level - window/2\n* max = level + window/2\n* scalarRange[1]\n\nIf lut is 0, the colors go from black (0, 0, 0) to white (1, 1,\n1) If lut contains only 1 value, that color is used for all the\ngenerated points. If lut contains more than 1 value, each color\nis used in the ramp. The generated transfer function will be made\nof lut->size() + 2 points. The function is then applied to the\nvolume property node.\n\\sa SetThresholdToVolumeProp\n"},
  {"SetGradientOpacityToVolumeProp", PyvtkSlicerVolumeRenderingLogic_SetGradientOpacityToVolumeProp, METH_VARARGS,
   "SetGradientOpacityToVolumeProp(self, scalarRange:[float, float],\n    node:vtkVolumeProperty) -> None\nC++: void SetGradientOpacityToVolumeProp(double scalarRange[2],\n    vtkVolumeProperty *node)\n\nCreate an opacity transfer function for gradient opacity. It\nranges from 0 to scalarRange[1] - scalarRange[0].\n\\sa SetThresholdToVolumeProp, SetWindowLevelToVolumeProp\n"},
  {"SetLabelMapToVolumeProp", PyvtkSlicerVolumeRenderingLogic_SetLabelMapToVolumeProp, METH_VARARGS,
   "SetLabelMapToVolumeProp(self, colors:vtkScalarsToColors,\n    node:vtkVolumeProperty) -> None\nC++: void SetLabelMapToVolumeProp(vtkScalarsToColors *colors,\n    vtkVolumeProperty *node)\n\nGenerate and set to the volume property node an opacity and color\ntransfer function from the labelmap LUT colors.\n\\sa SetWindowLevelToVolumeProp, SetThresholdToVolumeProp\n"},
  {"UpdateDisplayNodeFromVolumeNode", PyvtkSlicerVolumeRenderingLogic_UpdateDisplayNodeFromVolumeNode, METH_VARARGS,
   "UpdateDisplayNodeFromVolumeNode(self,\n    displayNode:vtkMRMLVolumeRenderingDisplayNode,\n    volumeNode:vtkMRMLVolumeNode,\n    propNode:vtkMRMLVolumePropertyNode=...,\n    roiNode:vtkMRMLNode=..., createROI:bool=True) -> None\nC++: void UpdateDisplayNodeFromVolumeNode(\n    vtkMRMLVolumeRenderingDisplayNode *displayNode,\n    vtkMRMLVolumeNode *volumeNode,\n    vtkMRMLVolumePropertyNode *propNode=nullptr,\n    vtkMRMLNode *roiNode=nullptr, bool createROI=true)\n\nUpdate DisplayNode from VolumeNode, Can pass a VolumePropertyNode\nand an ROI node to be the display node. If they are nullptr and\nthe display node does not already have any, new ones will be\ncreated then set and observed to the display node.\n"},
  {"CreateROINode", PyvtkSlicerVolumeRenderingLogic_CreateROINode, METH_VARARGS,
   "CreateROINode(self, displayNode:vtkMRMLVolumeRenderingDisplayNode)\n     -> vtkMRMLDisplayableNode\nC++: vtkMRMLDisplayableNode *CreateROINode(\n    vtkMRMLVolumeRenderingDisplayNode *displayNode)\n\nCreate cropping ROI node, if does not exist yet\n"},
  {"RemoveViewFromVolumeDisplayNodes", PyvtkSlicerVolumeRenderingLogic_RemoveViewFromVolumeDisplayNodes, METH_VARARGS,
   "RemoveViewFromVolumeDisplayNodes(self,\n    volumeNode:vtkMRMLVolumeNode, viewNode:vtkMRMLViewNode)\n    -> None\nC++: void RemoveViewFromVolumeDisplayNodes(\n    vtkMRMLVolumeNode *volumeNode, vtkMRMLViewNode *viewNode)\n\nRemove ViewNode from VolumeRenderingDisplayNode for a VolumeNode,\n"},
  {"GetVolumeRenderingDisplayNodeByID", PyvtkSlicerVolumeRenderingLogic_GetVolumeRenderingDisplayNodeByID, METH_VARARGS,
   "GetVolumeRenderingDisplayNodeByID(self,\n    volumeNode:vtkMRMLVolumeNode, displayNodeID:str)\n    -> vtkMRMLVolumeRenderingDisplayNode\nC++: vtkMRMLVolumeRenderingDisplayNode *GetVolumeRenderingDisplayNodeByID(\n    vtkMRMLVolumeNode *volumeNode, char *displayNodeID)\n\nFind volume rendering display node reference in the volume\n"},
  {"GetVolumeRenderingDisplayNodeForViewNode", PyvtkSlicerVolumeRenderingLogic_GetVolumeRenderingDisplayNodeForViewNode, METH_VARARGS,
   "GetVolumeRenderingDisplayNodeForViewNode(self,\n    volumeNode:vtkMRMLVolumeNode, viewNode:vtkMRMLViewNode)\n    -> vtkMRMLVolumeRenderingDisplayNode\nC++: vtkMRMLVolumeRenderingDisplayNode *GetVolumeRenderingDisplayNodeForViewNode(\n    vtkMRMLVolumeNode *volumeNode, vtkMRMLViewNode *viewNode)\nGetVolumeRenderingDisplayNodeForViewNode(self,\n    viewNode:vtkMRMLViewNode) -> vtkMRMLVolumeRenderingDisplayNode\nC++: vtkMRMLVolumeRenderingDisplayNode *GetVolumeRenderingDisplayNodeForViewNode(\n    vtkMRMLViewNode *viewNode)\n\nFind volume rendering display node referencing the view node and\nvolume node\n"},
  {"GetFirstVolumeRenderingDisplayNode", PyvtkSlicerVolumeRenderingLogic_GetFirstVolumeRenderingDisplayNode, METH_VARARGS,
   "GetFirstVolumeRenderingDisplayNode(self,\n    volumeNode:vtkMRMLVolumeNode)\n    -> vtkMRMLVolumeRenderingDisplayNode\nC++: vtkMRMLVolumeRenderingDisplayNode *GetFirstVolumeRenderingDisplayNode(\n    vtkMRMLVolumeNode *volumeNode)\n\nFind first volume rendering display node\n"},
  {"GetFirstVolumeRenderingDisplayNodeByROINode", PyvtkSlicerVolumeRenderingLogic_GetFirstVolumeRenderingDisplayNodeByROINode, METH_VARARGS,
   "GetFirstVolumeRenderingDisplayNodeByROINode(self,\n    roiNode:vtkMRMLNode) -> vtkMRMLVolumeRenderingDisplayNode\nC++: vtkMRMLVolumeRenderingDisplayNode *GetFirstVolumeRenderingDisplayNodeByROINode(\n    vtkMRMLNode *roiNode)\n\nFind the first volume rendering display node that uses the ROI\n"},
  {"UpdateTranferFunctionRangeFromImage", PyvtkSlicerVolumeRenderingLogic_UpdateTranferFunctionRangeFromImage, METH_VARARGS,
   "UpdateTranferFunctionRangeFromImage(self,\n    vspNode:vtkMRMLVolumeRenderingDisplayNode) -> None\nC++: void UpdateTranferFunctionRangeFromImage(\n    vtkMRMLVolumeRenderingDisplayNode *vspNode)\n\n"},
  {"FitROIToVolume", PyvtkSlicerVolumeRenderingLogic_FitROIToVolume, METH_VARARGS,
   "FitROIToVolume(self, vspNode:vtkMRMLVolumeRenderingDisplayNode)\n    -> None\nC++: void FitROIToVolume(\n    vtkMRMLVolumeRenderingDisplayNode *vspNode)\n\nUtility function that modifies the ROI node of the display node\nto fit the boundaries of the volume node\n\\sa vtkMRMLVolumeRenderingDisplayNode::GetROINode\n"},
  {"AddVolumePropertyFromFile", PyvtkSlicerVolumeRenderingLogic_AddVolumePropertyFromFile, METH_VARARGS,
   "AddVolumePropertyFromFile(self, filename:str)\n    -> vtkMRMLVolumePropertyNode\nC++: vtkMRMLVolumePropertyNode *AddVolumePropertyFromFile(\n    const char *filename)\n\nLoad from file and add into the scene a transfer function.\n\\sa vtkMRMLVolumePropertyStorageNode\n"},
  {"AddShaderPropertyFromFile", PyvtkSlicerVolumeRenderingLogic_AddShaderPropertyFromFile, METH_VARARGS,
   "AddShaderPropertyFromFile(self, filename:str)\n    -> vtkMRMLShaderPropertyNode\nC++: vtkMRMLShaderPropertyNode *AddShaderPropertyFromFile(\n    const char *filename)\n\nLoad from file and add into the scene a shader property.\n\\sa vtkMRMLShaderPropertyStorageNode\n"},
  {"GetPresetsScene", PyvtkSlicerVolumeRenderingLogic_GetPresetsScene, METH_VARARGS,
   "GetPresetsScene(self) -> vtkMRMLScene\nC++: vtkMRMLScene *GetPresetsScene()\n\nReturn the scene containing the volume rendering presets. If\nthere is no presets scene, a scene is created and presets are\nloaded into. The presets scene is loaded from a file\n(presets.xml) located in the module share directory\n\\sa vtkMRMLVolumePropertyNode, GetModuleShareDirectory()\n"},
  {"AddPreset", PyvtkSlicerVolumeRenderingLogic_AddPreset, METH_VARARGS,
   "AddPreset(self, preset:vtkMRMLVolumePropertyNode,\n    icon:vtkImageData=..., appendToEnd:bool=False) -> None\nC++: void AddPreset(vtkMRMLVolumePropertyNode *preset,\n    vtkImageData *icon=nullptr, bool appendToEnd=false)\n\nAdd a preset to the preset scene. If the optional icon image is\nspecified then that will be used to in preset selector widgets.\nThe icon is stored as a volume node in the preset scene.\n\\param appendToEnd controls if the preset is added before or\n    after existing presets.\n\\sa GetPresetsScene(), GetIconVolumeReferenceRole()\n"},
  {"RemovePreset", PyvtkSlicerVolumeRenderingLogic_RemovePreset, METH_VARARGS,
   "RemovePreset(self, preset:vtkMRMLVolumePropertyNode) -> None\nC++: void RemovePreset(vtkMRMLVolumePropertyNode *preset)\n\nRemoves a preset and its associated icon (if specified) from the\npreset scene.\n\\sa GetPresetsScene(), GetIconVolumeReferenceRole()\n"},
  {"LoadCustomPresetsScene", PyvtkSlicerVolumeRenderingLogic_LoadCustomPresetsScene, METH_VARARGS,
   "LoadCustomPresetsScene(self, sceneFilePath:str) -> int\nC++: int LoadCustomPresetsScene(const char *sceneFilePath)\n\nUse custom presets scene\n\\return Nonzero if successfully loaded\n"},
  {"GetIconVolumeReferenceRole", PyvtkSlicerVolumeRenderingLogic_GetIconVolumeReferenceRole, METH_VARARGS,
   "GetIconVolumeReferenceRole() -> str\nC++: static const char *GetIconVolumeReferenceRole()\n\nThis node reference role name allows linking from a preset node\nto a volume node that contains an icon for the preset node. For\nexample, the icon is used for representing the node in\nqSlicerPresetComboBox.\n"},
  {"GetPresetByName", PyvtkSlicerVolumeRenderingLogic_GetPresetByName, METH_VARARGS,
   "GetPresetByName(self, presetName:str) -> vtkMRMLVolumePropertyNode\nC++: vtkMRMLVolumePropertyNode *GetPresetByName(\n    const char *presetName)\n\nReturn the preset presetName contained in the presets scene\nloaded using GetPresetsScene(). If no presets are found, return\n0. If multiple presets are found, the first one is returned.\n\\sa GetPresetsScene(), vtkMRMLVolumePropertyNode\n"},
  {"IsDifferentFunction", PyvtkSlicerVolumeRenderingLogic_IsDifferentFunction, METH_VARARGS,
   "IsDifferentFunction(self, function1:vtkColorTransferFunction,\n    function2:vtkColorTransferFunction) -> bool\nC++: bool IsDifferentFunction(vtkColorTransferFunction *function1,\n     vtkColorTransferFunction *function2)\n\nUtility function that checks if the color transfer functions are\nequal Returns true if different\n"},
  {"SetDefaultROIClassName", PyvtkSlicerVolumeRenderingLogic_SetDefaultROIClassName, METH_VARARGS,
   "SetDefaultROIClassName(self, _arg:str) -> None\nC++: virtual void SetDefaultROIClassName(std::string _arg)\n\n"},
  {"GetDefaultROIClassName", PyvtkSlicerVolumeRenderingLogic_GetDefaultROIClassName, METH_VARARGS,
   "GetDefaultROIClassName(self) -> str\nC++: virtual std::string GetDefaultROIClassName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerVolumeRenderingLogic_Doc =
  "vtkSlicerVolumeRenderingLogic - Collection of utility methods to\ncontrol the Volume Rendering nodes.\n\n"
  "Superclass: vtkSlicerModuleLogic\n\n"
  "The fastest to volume render of vtkMRMLVolumeNode is to\n"
  "useCreateVolumeRenderingDisplayNode()\n"
  "andUpdateDisplayNodeFromVolumeNode():vtkMRMLVolumeRenderingDisplayNode\n"
  "* displayNode =\n"
  "  logic->CreateVolumeRenderingDisplayNode();\n"
  "logic->UpdateDisplayNodeFromVolumeNode(displayNode, volumeNode);\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerVolumeRenderingLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerVolumeRenderingModuleLogicPython.vtkSlicerVolumeRenderingLogic", // tp_name
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
  PyvtkSlicerVolumeRenderingLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerVolumeRenderingLogic_StaticNew()
{
  return vtkSlicerVolumeRenderingLogic::New();
}

PyObject *PyvtkSlicerVolumeRenderingLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerVolumeRenderingLogic_Type, PyvtkSlicerVolumeRenderingLogic_Methods,
    "vtkSlicerVolumeRenderingLogic",
 &PyvtkSlicerVolumeRenderingLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSlicerModuleLogic");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerVolumeRenderingLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerVolumeRenderingLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerVolumeRenderingLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

