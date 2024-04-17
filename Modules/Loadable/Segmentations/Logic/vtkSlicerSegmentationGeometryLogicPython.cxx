// python wrapper for vtkSlicerSegmentationGeometryLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerSegmentationGeometryLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerSegmentationGeometryLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerSegmentationGeometryLogic_ClassNew(); }


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerSegmentationGeometryLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerSegmentationGeometryLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerSegmentationGeometryLogic *tempr = vtkSlicerSegmentationGeometryLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerSegmentationGeometryLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerSegmentationGeometryLogic::NewInstance());

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
PyvtkSlicerSegmentationGeometryLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerSegmentationGeometryLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerSegmentationGeometryLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_CalculateOutputGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateOutputGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->CalculateOutputGeometry() :
      op->vtkSlicerSegmentationGeometryLogic::CalculateOutputGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_IsSourceSegmentationWithBinaryLabelmapMaster(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSourceSegmentationWithBinaryLabelmapMaster");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSourceSegmentationWithBinaryLabelmapMaster() :
      op->vtkSlicerSegmentationGeometryLogic::IsSourceSegmentationWithBinaryLabelmapMaster());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_InputSegmentationCanBeResampled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InputSegmentationCanBeResampled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->InputSegmentationCanBeResampled() :
      op->vtkSlicerSegmentationGeometryLogic::InputSegmentationCanBeResampled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_ComputeSourceAxisIndexForInputAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSourceAxisIndexForInputAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeSourceAxisIndexForInputAxis();
    }
    else
    {
      op->vtkSlicerSegmentationGeometryLogic::ComputeSourceAxisIndexForInputAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_ResampleLabelmapsInSegmentationNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResampleLabelmapsInSegmentationNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->ResampleLabelmapsInSegmentationNode() :
      op->vtkSlicerSegmentationGeometryLogic::ResampleLabelmapsInSegmentationNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_GetOutputGeometryImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputGeometryImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOrientedImageData *tempr = (ap.IsBound() ?
      op->GetOutputGeometryImageData() :
      op->vtkSlicerSegmentationGeometryLogic::GetOutputGeometryImageData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_ResetGeometryImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGeometryImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetGeometryImageData();
    }
    else
    {
      op->vtkSlicerSegmentationGeometryLogic::ResetGeometryImageData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_GetInputSegmentationNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputSegmentationNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSegmentationNode *tempr = (ap.IsBound() ?
      op->GetInputSegmentationNode() :
      op->vtkSlicerSegmentationGeometryLogic::GetInputSegmentationNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_SetInputSegmentationNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputSegmentationNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  vtkMRMLSegmentationNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode"))
  {
    if (ap.IsBound())
    {
      op->SetInputSegmentationNode(temp0);
    }
    else
    {
      op->vtkSlicerSegmentationGeometryLogic::SetInputSegmentationNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_GetSourceGeometryNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceGeometryNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDisplayableNode *tempr = (ap.IsBound() ?
      op->GetSourceGeometryNode() :
      op->vtkSlicerSegmentationGeometryLogic::GetSourceGeometryNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_SetSourceGeometryNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceGeometryNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  vtkMRMLDisplayableNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableNode"))
  {
    if (ap.IsBound())
    {
      op->SetSourceGeometryNode(temp0);
    }
    else
    {
      op->vtkSlicerSegmentationGeometryLogic::SetSourceGeometryNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_GetIsotropicSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsotropicSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsotropicSpacing() :
      op->vtkSlicerSegmentationGeometryLogic::GetIsotropicSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_SetIsotropicSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsotropicSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsotropicSpacing(temp0);
    }
    else
    {
      op->vtkSlicerSegmentationGeometryLogic::SetIsotropicSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_IsotropicSpacingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsotropicSpacingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IsotropicSpacingOn();
    }
    else
    {
      op->vtkSlicerSegmentationGeometryLogic::IsotropicSpacingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_IsotropicSpacingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsotropicSpacingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IsotropicSpacingOff();
    }
    else
    {
      op->vtkSlicerSegmentationGeometryLogic::IsotropicSpacingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_GetOversamplingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOversamplingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOversamplingFactor() :
      op->vtkSlicerSegmentationGeometryLogic::GetOversamplingFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_SetOversamplingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOversamplingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOversamplingFactor(temp0);
    }
    else
    {
      op->vtkSlicerSegmentationGeometryLogic::SetOversamplingFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_GetUserSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetUserSpacing() :
      op->vtkSlicerSegmentationGeometryLogic::GetUserSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_SetUserSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetUserSpacing(temp0);
    }
    else
    {
      op->vtkSlicerSegmentationGeometryLogic::SetUserSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_GetInputAxisIndexForSourceAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAxisIndexForSourceAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetInputAxisIndexForSourceAxis() :
      op->vtkSlicerSegmentationGeometryLogic::GetInputAxisIndexForSourceAxis());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_GetSourceAxisIndexForInputAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceAxisIndexForInputAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSourceAxisIndexForInputAxis() :
      op->vtkSlicerSegmentationGeometryLogic::GetSourceAxisIndexForInputAxis());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_GetPadOutputGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadOutputGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPadOutputGeometry() :
      op->vtkSlicerSegmentationGeometryLogic::GetPadOutputGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_SetPadOutputGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadOutputGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPadOutputGeometry(temp0);
    }
    else
    {
      op->vtkSlicerSegmentationGeometryLogic::SetPadOutputGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_PadOutputGeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PadOutputGeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PadOutputGeometryOn();
    }
    else
    {
      op->vtkSlicerSegmentationGeometryLogic::PadOutputGeometryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationGeometryLogic_PadOutputGeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PadOutputGeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationGeometryLogic *op = static_cast<vtkSlicerSegmentationGeometryLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PadOutputGeometryOff();
    }
    else
    {
      op->vtkSlicerSegmentationGeometryLogic::PadOutputGeometryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerSegmentationGeometryLogic_Methods[] = {
  {"IsTypeOf", PyvtkSlicerSegmentationGeometryLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerSegmentationGeometryLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerSegmentationGeometryLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkSlicerSegmentationGeometryLogic\nC++: static vtkSlicerSegmentationGeometryLogic *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerSegmentationGeometryLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerSegmentationGeometryLogic\nC++: vtkSlicerSegmentationGeometryLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerSegmentationGeometryLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerSegmentationGeometryLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CalculateOutputGeometry", PyvtkSlicerSegmentationGeometryLogic_CalculateOutputGeometry, METH_VARARGS,
   "CalculateOutputGeometry(self) -> str\nC++: std::string CalculateOutputGeometry()\n\nCalculate output geometry into \\sa GeometryImageData with current\noptions\n\\return Error message. Empty when successful\n"},
  {"IsSourceSegmentationWithBinaryLabelmapMaster", PyvtkSlicerSegmentationGeometryLogic_IsSourceSegmentationWithBinaryLabelmapMaster, METH_VARARGS,
   "IsSourceSegmentationWithBinaryLabelmapMaster(self) -> bool\nC++: bool IsSourceSegmentationWithBinaryLabelmapMaster()\n\nDetermine if source node is a non-empty segmentation with a\nlabelmap master\n"},
  {"InputSegmentationCanBeResampled", PyvtkSlicerSegmentationGeometryLogic_InputSegmentationCanBeResampled, METH_VARARGS,
   "InputSegmentationCanBeResampled(self) -> bool\nC++: bool InputSegmentationCanBeResampled()\n\nDetermine if input segmentation is non-empty, and with binary\nlabelmap master\n"},
  {"ComputeSourceAxisIndexForInputAxis", PyvtkSlicerSegmentationGeometryLogic_ComputeSourceAxisIndexForInputAxis, METH_VARARGS,
   "ComputeSourceAxisIndexForInputAxis(self) -> None\nC++: void ComputeSourceAxisIndexForInputAxis()\n\nMatch the axes of the input labelmap to the axes of the\ntransformed source node. Use this calculated permutation for\nupdating spacing widget from geometry and interpreting spacing\ninput\n"},
  {"ResampleLabelmapsInSegmentationNode", PyvtkSlicerSegmentationGeometryLogic_ResampleLabelmapsInSegmentationNode, METH_VARARGS,
   "ResampleLabelmapsInSegmentationNode(self) -> bool\nC++: bool ResampleLabelmapsInSegmentationNode()\n\nResample labelmap representation the input segmentation node\naccording to the current output geometry setting.\n"},
  {"GetOutputGeometryImageData", PyvtkSlicerSegmentationGeometryLogic_GetOutputGeometryImageData, METH_VARARGS,
   "GetOutputGeometryImageData(self) -> vtkOrientedImageData\nC++: virtual vtkOrientedImageData *GetOutputGeometryImageData()\n\nOriented image data containing output geometry. This is what the\nclass calculates from the inputs\n"},
  {"ResetGeometryImageData", PyvtkSlicerSegmentationGeometryLogic_ResetGeometryImageData, METH_VARARGS,
   "ResetGeometryImageData(self) -> None\nC++: void ResetGeometryImageData()\n\nReset geometry image data \\sa GeometryImageData\n"},
  {"GetInputSegmentationNode", PyvtkSlicerSegmentationGeometryLogic_GetInputSegmentationNode, METH_VARARGS,
   "GetInputSegmentationNode(self) -> vtkMRMLSegmentationNode\nC++: virtual vtkMRMLSegmentationNode *GetInputSegmentationNode()\n\nInput segmentation MRML node to modify the labelmap geometry of\n"},
  {"SetInputSegmentationNode", PyvtkSlicerSegmentationGeometryLogic_SetInputSegmentationNode, METH_VARARGS,
   "SetInputSegmentationNode(self, _arg:vtkMRMLSegmentationNode)\n    -> None\nC++: virtual void SetInputSegmentationNode(\n    vtkMRMLSegmentationNode *_arg)\n\nInput segmentation MRML node to modify the labelmap geometry of\n"},
  {"GetSourceGeometryNode", PyvtkSlicerSegmentationGeometryLogic_GetSourceGeometryNode, METH_VARARGS,
   "GetSourceGeometryNode(self) -> vtkMRMLDisplayableNode\nC++: virtual vtkMRMLDisplayableNode *GetSourceGeometryNode()\n\nMRML node specifying the source geometry\n"},
  {"SetSourceGeometryNode", PyvtkSlicerSegmentationGeometryLogic_SetSourceGeometryNode, METH_VARARGS,
   "SetSourceGeometryNode(self, node:vtkMRMLDisplayableNode) -> None\nC++: virtual void SetSourceGeometryNode(\n    vtkMRMLDisplayableNode *node)\n\n"},
  {"GetIsotropicSpacing", PyvtkSlicerSegmentationGeometryLogic_GetIsotropicSpacing, METH_VARARGS,
   "GetIsotropicSpacing(self) -> bool\nC++: virtual bool GetIsotropicSpacing()\n\nFlag indicating whether isotropic spacing is requested. Off by\ndefault Resample the volume to have isotropic spacing, which\nmeans the voxels will be cubes. Use smallest spacing. Useful if\nthe volume has elongated voxels.\n"},
  {"SetIsotropicSpacing", PyvtkSlicerSegmentationGeometryLogic_SetIsotropicSpacing, METH_VARARGS,
   "SetIsotropicSpacing(self, _arg:bool) -> None\nC++: virtual void SetIsotropicSpacing(bool _arg)\n\nFlag indicating whether isotropic spacing is requested. Off by\ndefault Resample the volume to have isotropic spacing, which\nmeans the voxels will be cubes. Use smallest spacing. Useful if\nthe volume has elongated voxels.\n"},
  {"IsotropicSpacingOn", PyvtkSlicerSegmentationGeometryLogic_IsotropicSpacingOn, METH_VARARGS,
   "IsotropicSpacingOn(self) -> None\nC++: virtual void IsotropicSpacingOn()\n\nFlag indicating whether isotropic spacing is requested. Off by\ndefault Resample the volume to have isotropic spacing, which\nmeans the voxels will be cubes. Use smallest spacing. Useful if\nthe volume has elongated voxels.\n"},
  {"IsotropicSpacingOff", PyvtkSlicerSegmentationGeometryLogic_IsotropicSpacingOff, METH_VARARGS,
   "IsotropicSpacingOff(self) -> None\nC++: virtual void IsotropicSpacingOff()\n\nFlag indicating whether isotropic spacing is requested. Off by\ndefault Resample the volume to have isotropic spacing, which\nmeans the voxels will be cubes. Use smallest spacing. Useful if\nthe volume has elongated voxels.\n"},
  {"GetOversamplingFactor", PyvtkSlicerSegmentationGeometryLogic_GetOversamplingFactor, METH_VARARGS,
   "GetOversamplingFactor(self) -> float\nC++: virtual double GetOversamplingFactor()\n\nOversampling factor: Split each voxel of the volume to this many\nvoxels along each direction. Useful when increasing the\nresolution is needed 1 by default.\n"},
  {"SetOversamplingFactor", PyvtkSlicerSegmentationGeometryLogic_SetOversamplingFactor, METH_VARARGS,
   "SetOversamplingFactor(self, _arg:float) -> None\nC++: virtual void SetOversamplingFactor(double _arg)\n\nOversampling factor: Split each voxel of the volume to this many\nvoxels along each direction. Useful when increasing the\nresolution is needed 1 by default.\n"},
  {"GetUserSpacing", PyvtkSlicerSegmentationGeometryLogic_GetUserSpacing, METH_VARARGS,
   "GetUserSpacing(self) -> (float, float, float)\nC++: virtual double *GetUserSpacing()\n\nExplicitly specified spacing. Only applied if \\sa\nSourceGeometryNode does not contain volume data (i.e. not a\nvolume node nor a segmentation node with labelmap master, but an\nROI, model, or segmentation with poly data master)\n"},
  {"SetUserSpacing", PyvtkSlicerSegmentationGeometryLogic_SetUserSpacing, METH_VARARGS,
   "SetUserSpacing(self, data:(float, ...)) -> None\nC++: virtual void SetUserSpacing(const double data[])\n\nExplicitly specified spacing. Only applied if \\sa\nSourceGeometryNode does not contain volume data (i.e. not a\nvolume node nor a segmentation node with labelmap master, but an\nROI, model, or segmentation with poly data master)\n"},
  {"GetInputAxisIndexForSourceAxis", PyvtkSlicerSegmentationGeometryLogic_GetInputAxisIndexForSourceAxis, METH_VARARGS,
   "GetInputAxisIndexForSourceAxis(self) -> (int, int, int)\nC++: virtual int *GetInputAxisIndexForSourceAxis()\n\nSource to input axes mapping \\sa matchInputAndSourceAxes\n"},
  {"GetSourceAxisIndexForInputAxis", PyvtkSlicerSegmentationGeometryLogic_GetSourceAxisIndexForInputAxis, METH_VARARGS,
   "GetSourceAxisIndexForInputAxis(self) -> (int, int, int)\nC++: virtual int *GetSourceAxisIndexForInputAxis()\n\nSource to input axes mapping \\sa matchInputAndSourceAxes\n"},
  {"GetPadOutputGeometry", PyvtkSlicerSegmentationGeometryLogic_GetPadOutputGeometry, METH_VARARGS,
   "GetPadOutputGeometry(self) -> bool\nC++: virtual bool GetPadOutputGeometry()\n\nIf enabled then the output geometry extent is padded as needed to\nensure that the input segmentation extent fits into the output.\nEnabled by default.\n"},
  {"SetPadOutputGeometry", PyvtkSlicerSegmentationGeometryLogic_SetPadOutputGeometry, METH_VARARGS,
   "SetPadOutputGeometry(self, _arg:bool) -> None\nC++: virtual void SetPadOutputGeometry(bool _arg)\n\nIf enabled then the output geometry extent is padded as needed to\nensure that the input segmentation extent fits into the output.\nEnabled by default.\n"},
  {"PadOutputGeometryOn", PyvtkSlicerSegmentationGeometryLogic_PadOutputGeometryOn, METH_VARARGS,
   "PadOutputGeometryOn(self) -> None\nC++: virtual void PadOutputGeometryOn()\n\nIf enabled then the output geometry extent is padded as needed to\nensure that the input segmentation extent fits into the output.\nEnabled by default.\n"},
  {"PadOutputGeometryOff", PyvtkSlicerSegmentationGeometryLogic_PadOutputGeometryOff, METH_VARARGS,
   "PadOutputGeometryOff(self) -> None\nC++: virtual void PadOutputGeometryOff()\n\nIf enabled then the output geometry extent is padded as needed to\nensure that the input segmentation extent fits into the output.\nEnabled by default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerSegmentationGeometryLogic_Doc =
  "vtkSlicerSegmentationGeometryLogic\n\n"
  "Superclass: vtkObject\n\n"
  "This class manages the logic associated with converting and handling\n"
  "segmentation node objects.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerSegmentationGeometryLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerSegmentationsModuleLogicPython.vtkSlicerSegmentationGeometryLogic", // tp_name
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
  PyvtkSlicerSegmentationGeometryLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerSegmentationGeometryLogic_StaticNew()
{
  return vtkSlicerSegmentationGeometryLogic::New();
}

PyObject *PyvtkSlicerSegmentationGeometryLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerSegmentationGeometryLogic_Type, PyvtkSlicerSegmentationGeometryLogic_Methods,
    "vtkSlicerSegmentationGeometryLogic",
 &PyvtkSlicerSegmentationGeometryLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerSegmentationGeometryLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerSegmentationGeometryLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerSegmentationGeometryLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

