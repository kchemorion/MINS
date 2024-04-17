// python wrapper for vtkDiffusionTensorMathematics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDiffusionTensorMathematics.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDiffusionTensorMathematics(PyObject *dict); }
extern "C" { PyObject *PyvtkDiffusionTensorMathematics_ClassNew(); }


static PyObject *
PyvtkDiffusionTensorMathematics_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDiffusionTensorMathematics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDiffusionTensorMathematics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDiffusionTensorMathematics *tempr = vtkDiffusionTensorMathematics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDiffusionTensorMathematics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDiffusionTensorMathematics::NewInstance());

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
PyvtkDiffusionTensorMathematics_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDiffusionTensorMathematics::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDiffusionTensorMathematics::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperation() :
      op->vtkDiffusionTensorMathematics::GetOperation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOperation(temp0);
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_GetOperationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperationMinValue() :
      op->vtkDiffusionTensorMathematics::GetOperationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_GetOperationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperationMaxValue() :
      op->vtkDiffusionTensorMathematics::GetOperationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToTrace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToTrace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToTrace();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToTrace();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToDeterminant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToDeterminant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToDeterminant();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToDeterminant();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToRelativeAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToRelativeAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToRelativeAnisotropy();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToRelativeAnisotropy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToFractionalAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToFractionalAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToFractionalAnisotropy();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToFractionalAnisotropy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToLinearMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToLinearMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToLinearMeasure();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToLinearMeasure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToPlanarMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToPlanarMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToPlanarMeasure();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToPlanarMeasure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToSphericalMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToSphericalMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToSphericalMeasure();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToSphericalMeasure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMode();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToMode();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToParallelDiffusivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToParallelDiffusivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToParallelDiffusivity();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToParallelDiffusivity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToPerpendicularDiffusivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToPerpendicularDiffusivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToPerpendicularDiffusivity();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToPerpendicularDiffusivity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToMeanDiffusivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMeanDiffusivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMeanDiffusivity();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToMeanDiffusivity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToMaxEigenvalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMaxEigenvalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMaxEigenvalue();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToMaxEigenvalue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToMiddleEigenvalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMiddleEigenvalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMiddleEigenvalue();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToMiddleEigenvalue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToMinEigenvalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMinEigenvalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMinEigenvalue();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToMinEigenvalue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToMaxEigenvalueProjectionX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMaxEigenvalueProjectionX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMaxEigenvalueProjectionX();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToMaxEigenvalueProjectionX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToMaxEigenvalueProjectionY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMaxEigenvalueProjectionY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMaxEigenvalueProjectionY();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToMaxEigenvalueProjectionY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToMaxEigenvalueProjectionZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMaxEigenvalueProjectionZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMaxEigenvalueProjectionZ();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToMaxEigenvalueProjectionZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToRAIMaxEigenvecX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToRAIMaxEigenvecX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToRAIMaxEigenvecX();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToRAIMaxEigenvecX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToRAIMaxEigenvecY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToRAIMaxEigenvecY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToRAIMaxEigenvecY();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToRAIMaxEigenvecY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToRAIMaxEigenvecZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToRAIMaxEigenvecZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToRAIMaxEigenvecZ();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToRAIMaxEigenvecZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToMaxEigenvecX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMaxEigenvecX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMaxEigenvecX();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToMaxEigenvecX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToMaxEigenvecY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMaxEigenvecY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMaxEigenvecY();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToMaxEigenvecY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToMaxEigenvecZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMaxEigenvecZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMaxEigenvecZ();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToMaxEigenvecZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToD11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToD11");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToD11();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToD11();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToD22(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToD22");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToD22();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToD22();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToD33(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToD33");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToD33();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToD33();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToColorByOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToColorByOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToColorByOrientation();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToColorByOrientation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetOperationToColorByMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToColorByMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToColorByMode();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetOperationToColorByMode();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkDiffusionTensorMathematics::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetExtractEigenvalues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractEigenvalues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractEigenvalues(temp0);
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetExtractEigenvalues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_ExtractEigenvaluesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractEigenvaluesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractEigenvaluesOn();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::ExtractEigenvaluesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_ExtractEigenvaluesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractEigenvaluesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractEigenvaluesOff();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::ExtractEigenvaluesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_GetExtractEigenvalues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractEigenvalues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractEigenvalues() :
      op->vtkDiffusionTensorMathematics::GetExtractEigenvalues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetTensorRotationMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorRotationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetTensorRotationMatrix(temp0);
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetTensorRotationMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_GetTensorRotationMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorRotationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetTensorRotationMatrix() :
      op->vtkDiffusionTensorMathematics::GetTensorRotationMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_MaskWithScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskWithScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaskWithScalarsOn();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::MaskWithScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_MaskWithScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskWithScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaskWithScalarsOff();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::MaskWithScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetMaskWithScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskWithScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskWithScalars(temp0);
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetMaskWithScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_GetMaskWithScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskWithScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaskWithScalars() :
      op->vtkDiffusionTensorMathematics::GetMaskWithScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_FixNegativeEigenvaluesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FixNegativeEigenvaluesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FixNegativeEigenvaluesOn();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::FixNegativeEigenvaluesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_FixNegativeEigenvaluesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FixNegativeEigenvaluesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FixNegativeEigenvaluesOff();
    }
    else
    {
      op->vtkDiffusionTensorMathematics::FixNegativeEigenvaluesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetFixNegativeEigenvalues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixNegativeEigenvalues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixNegativeEigenvalues(temp0);
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetFixNegativeEigenvalues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_GetFixNegativeEigenvalues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixNegativeEigenvalues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFixNegativeEigenvalues() :
      op->vtkDiffusionTensorMathematics::GetFixNegativeEigenvalues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetScalarMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetScalarMask(temp0);
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetScalarMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_GetScalarMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetScalarMask() :
      op->vtkDiffusionTensorMathematics::GetScalarMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_SetMaskLabelValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskLabelValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskLabelValue(temp0);
    }
    else
    {
      op->vtkDiffusionTensorMathematics::SetMaskLabelValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_GetMaskLabelValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskLabelValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaskLabelValue() :
      op->vtkDiffusionTensorMathematics::GetMaskLabelValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_ModeToRGB(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ModeToRGB");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkDiffusionTensorMathematics::ModeToRGB(temp0, temp1, temp2, temp3, temp4);

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_RGBToIndex(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RGBToIndex");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkDiffusionTensorMathematics::RGBToIndex(temp0, temp1, temp2, temp3);

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
PyvtkDiffusionTensorMathematics_FixNegativeEigenvaluesMethod(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FixNegativeEigenvaluesMethod");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = vtkDiffusionTensorMathematics::FixNegativeEigenvaluesMethod(temp0);

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
PyvtkDiffusionTensorMathematics_Determinant(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Determinant");

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  double save0[3][3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
  {
    vtkPythonArgs::Save(*temp0, *save0, size0[0]*size0[1]);

    double tempr = vtkDiffusionTensorMathematics::Determinant(temp0);

    if (vtkPythonArgs::HasChanged(*temp0, *save0, size0[0]*size0[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(0, *temp0, 2, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorMathematics_Trace_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Trace");

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  double save0[3][3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
  {
    vtkPythonArgs::Save(*temp0, *save0, size0[0]*size0[1]);

    double tempr = vtkDiffusionTensorMathematics::Trace(temp0);

    if (vtkPythonArgs::HasChanged(*temp0, *save0, size0[0]*size0[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(0, *temp0, 2, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDiffusionTensorMathematics_Trace_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Trace");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = vtkDiffusionTensorMathematics::Trace(temp0);

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

static PyMethodDef PyvtkDiffusionTensorMathematics_Trace_Methods[] = {
  {"Trace", PyvtkDiffusionTensorMathematics_Trace_s1, METH_VARARGS | METH_STATIC,
   "A *d[3]"},
  {"Trace", PyvtkDiffusionTensorMathematics_Trace_s2, METH_VARARGS | METH_STATIC,
   "P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDiffusionTensorMathematics_Trace(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDiffusionTensorMathematics_Trace_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Trace");
  return nullptr;
}


static PyObject *
PyvtkDiffusionTensorMathematics_RelativeAnisotropy(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RelativeAnisotropy");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = vtkDiffusionTensorMathematics::RelativeAnisotropy(temp0);

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
PyvtkDiffusionTensorMathematics_FractionalAnisotropy(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FractionalAnisotropy");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = vtkDiffusionTensorMathematics::FractionalAnisotropy(temp0);

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
PyvtkDiffusionTensorMathematics_LinearMeasure(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "LinearMeasure");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = vtkDiffusionTensorMathematics::LinearMeasure(temp0);

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
PyvtkDiffusionTensorMathematics_PlanarMeasure(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PlanarMeasure");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = vtkDiffusionTensorMathematics::PlanarMeasure(temp0);

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
PyvtkDiffusionTensorMathematics_SphericalMeasure(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SphericalMeasure");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = vtkDiffusionTensorMathematics::SphericalMeasure(temp0);

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
PyvtkDiffusionTensorMathematics_MaxEigenvalue(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MaxEigenvalue");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = vtkDiffusionTensorMathematics::MaxEigenvalue(temp0);

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
PyvtkDiffusionTensorMathematics_MiddleEigenvalue(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MiddleEigenvalue");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = vtkDiffusionTensorMathematics::MiddleEigenvalue(temp0);

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
PyvtkDiffusionTensorMathematics_ParallelDiffusivity(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ParallelDiffusivity");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = vtkDiffusionTensorMathematics::ParallelDiffusivity(temp0);

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
PyvtkDiffusionTensorMathematics_PerpendicularDiffusivity(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PerpendicularDiffusivity");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = vtkDiffusionTensorMathematics::PerpendicularDiffusivity(temp0);

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
PyvtkDiffusionTensorMathematics_MeanDiffusivity(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MeanDiffusivity");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = vtkDiffusionTensorMathematics::MeanDiffusivity(temp0);

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
PyvtkDiffusionTensorMathematics_MinEigenvalue(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MinEigenvalue");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = vtkDiffusionTensorMathematics::MinEigenvalue(temp0);

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
PyvtkDiffusionTensorMathematics_Mode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Mode");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = vtkDiffusionTensorMathematics::Mode(temp0);

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
PyvtkDiffusionTensorMathematics_ColorByMode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ColorByMode");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkDiffusionTensorMathematics::ColorByMode(temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkDiffusionTensorMathematics_ComputeTensorIncrements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeTensorIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorMathematics *op = static_cast<vtkDiffusionTensorMathematics *>(vp);

  vtkImageData *temp0 = nullptr;
  const size_t size1 = 3;
  long long temp1[3];
  long long save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ComputeTensorIncrements(temp0, temp1);
    }
    else
    {
      op->vtkDiffusionTensorMathematics::ComputeTensorIncrements(temp0, temp1);
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

static PyMethodDef PyvtkDiffusionTensorMathematics_Methods[] = {
  {"IsTypeOf", PyvtkDiffusionTensorMathematics_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDiffusionTensorMathematics_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDiffusionTensorMathematics_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDiffusionTensorMathematics\nC++: static vtkDiffusionTensorMathematics *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDiffusionTensorMathematics_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDiffusionTensorMathematics\nC++: vtkDiffusionTensorMathematics *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDiffusionTensorMathematics_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDiffusionTensorMathematics_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetOperation", PyvtkDiffusionTensorMathematics_GetOperation, METH_VARARGS,
   "GetOperation(self) -> int\nC++: virtual int GetOperation()\n\nGet the Operation to perform.\n"},
  {"SetOperation", PyvtkDiffusionTensorMathematics_SetOperation, METH_VARARGS,
   "SetOperation(self, _arg:int) -> None\nC++: virtual void SetOperation(int _arg)\n\n"},
  {"GetOperationMinValue", PyvtkDiffusionTensorMathematics_GetOperationMinValue, METH_VARARGS,
   "GetOperationMinValue(self) -> int\nC++: virtual int GetOperationMinValue()\n\n"},
  {"GetOperationMaxValue", PyvtkDiffusionTensorMathematics_GetOperationMaxValue, METH_VARARGS,
   "GetOperationMaxValue(self) -> int\nC++: virtual int GetOperationMaxValue()\n\n"},
  {"SetOperationToTrace", PyvtkDiffusionTensorMathematics_SetOperationToTrace, METH_VARARGS,
   "SetOperationToTrace(self) -> None\nC++: void SetOperationToTrace()\n\nOutput the trace (sum of eigenvalues = sum along diagonal)\n"},
  {"SetOperationToDeterminant", PyvtkDiffusionTensorMathematics_SetOperationToDeterminant, METH_VARARGS,
   "SetOperationToDeterminant(self) -> None\nC++: void SetOperationToDeterminant()\n\nOutput the determinant\n"},
  {"SetOperationToRelativeAnisotropy", PyvtkDiffusionTensorMathematics_SetOperationToRelativeAnisotropy, METH_VARARGS,
   "SetOperationToRelativeAnisotropy(self) -> None\nC++: void SetOperationToRelativeAnisotropy()\n\nOutput various anisotropy and shape measures\n"},
  {"SetOperationToFractionalAnisotropy", PyvtkDiffusionTensorMathematics_SetOperationToFractionalAnisotropy, METH_VARARGS,
   "SetOperationToFractionalAnisotropy(self) -> None\nC++: void SetOperationToFractionalAnisotropy()\n\n"},
  {"SetOperationToLinearMeasure", PyvtkDiffusionTensorMathematics_SetOperationToLinearMeasure, METH_VARARGS,
   "SetOperationToLinearMeasure(self) -> None\nC++: void SetOperationToLinearMeasure()\n\n"},
  {"SetOperationToPlanarMeasure", PyvtkDiffusionTensorMathematics_SetOperationToPlanarMeasure, METH_VARARGS,
   "SetOperationToPlanarMeasure(self) -> None\nC++: void SetOperationToPlanarMeasure()\n\n"},
  {"SetOperationToSphericalMeasure", PyvtkDiffusionTensorMathematics_SetOperationToSphericalMeasure, METH_VARARGS,
   "SetOperationToSphericalMeasure(self) -> None\nC++: void SetOperationToSphericalMeasure()\n\n"},
  {"SetOperationToMode", PyvtkDiffusionTensorMathematics_SetOperationToMode, METH_VARARGS,
   "SetOperationToMode(self) -> None\nC++: void SetOperationToMode()\n\nThis is the skewness of the eigenvalues (thanks to Gordon Lothar\n(of the Hill People) Kindlmann)\n"},
  {"SetOperationToParallelDiffusivity", PyvtkDiffusionTensorMathematics_SetOperationToParallelDiffusivity, METH_VARARGS,
   "SetOperationToParallelDiffusivity(self) -> None\nC++: void SetOperationToParallelDiffusivity()\n\n"},
  {"SetOperationToPerpendicularDiffusivity", PyvtkDiffusionTensorMathematics_SetOperationToPerpendicularDiffusivity, METH_VARARGS,
   "SetOperationToPerpendicularDiffusivity(self) -> None\nC++: void SetOperationToPerpendicularDiffusivity()\n\n"},
  {"SetOperationToMeanDiffusivity", PyvtkDiffusionTensorMathematics_SetOperationToMeanDiffusivity, METH_VARARGS,
   "SetOperationToMeanDiffusivity(self) -> None\nC++: void SetOperationToMeanDiffusivity()\n\n"},
  {"SetOperationToMaxEigenvalue", PyvtkDiffusionTensorMathematics_SetOperationToMaxEigenvalue, METH_VARARGS,
   "SetOperationToMaxEigenvalue(self) -> None\nC++: void SetOperationToMaxEigenvalue()\n\nOutput a selected eigenvalue\n"},
  {"SetOperationToMiddleEigenvalue", PyvtkDiffusionTensorMathematics_SetOperationToMiddleEigenvalue, METH_VARARGS,
   "SetOperationToMiddleEigenvalue(self) -> None\nC++: void SetOperationToMiddleEigenvalue()\n\n"},
  {"SetOperationToMinEigenvalue", PyvtkDiffusionTensorMathematics_SetOperationToMinEigenvalue, METH_VARARGS,
   "SetOperationToMinEigenvalue(self) -> None\nC++: void SetOperationToMinEigenvalue()\n\n"},
  {"SetOperationToMaxEigenvalueProjectionX", PyvtkDiffusionTensorMathematics_SetOperationToMaxEigenvalueProjectionX, METH_VARARGS,
   "SetOperationToMaxEigenvalueProjectionX(self) -> None\nC++: void SetOperationToMaxEigenvalueProjectionX()\n\nOutput Maxeigenvalue*Maxeigenvec_projection also known as L1Z\n"},
  {"SetOperationToMaxEigenvalueProjectionY", PyvtkDiffusionTensorMathematics_SetOperationToMaxEigenvalueProjectionY, METH_VARARGS,
   "SetOperationToMaxEigenvalueProjectionY(self) -> None\nC++: void SetOperationToMaxEigenvalueProjectionY()\n\n"},
  {"SetOperationToMaxEigenvalueProjectionZ", PyvtkDiffusionTensorMathematics_SetOperationToMaxEigenvalueProjectionZ, METH_VARARGS,
   "SetOperationToMaxEigenvalueProjectionZ(self) -> None\nC++: void SetOperationToMaxEigenvalueProjectionZ()\n\n"},
  {"SetOperationToRAIMaxEigenvecX", PyvtkDiffusionTensorMathematics_SetOperationToRAIMaxEigenvecX, METH_VARARGS,
   "SetOperationToRAIMaxEigenvecX(self) -> None\nC++: void SetOperationToRAIMaxEigenvecX()\n\nOutput Relative_anisotropy*Maxeigenvec_projection also known as\nL1z\n"},
  {"SetOperationToRAIMaxEigenvecY", PyvtkDiffusionTensorMathematics_SetOperationToRAIMaxEigenvecY, METH_VARARGS,
   "SetOperationToRAIMaxEigenvecY(self) -> None\nC++: void SetOperationToRAIMaxEigenvecY()\n\n"},
  {"SetOperationToRAIMaxEigenvecZ", PyvtkDiffusionTensorMathematics_SetOperationToRAIMaxEigenvecZ, METH_VARARGS,
   "SetOperationToRAIMaxEigenvecZ(self) -> None\nC++: void SetOperationToRAIMaxEigenvecZ()\n\n"},
  {"SetOperationToMaxEigenvecX", PyvtkDiffusionTensorMathematics_SetOperationToMaxEigenvecX, METH_VARARGS,
   "SetOperationToMaxEigenvecX(self) -> None\nC++: void SetOperationToMaxEigenvecX()\n\nOutput Relative_anisotropy*Maxeigenvec_projection also known as\nL1z\n"},
  {"SetOperationToMaxEigenvecY", PyvtkDiffusionTensorMathematics_SetOperationToMaxEigenvecY, METH_VARARGS,
   "SetOperationToMaxEigenvecY(self) -> None\nC++: void SetOperationToMaxEigenvecY()\n\n"},
  {"SetOperationToMaxEigenvecZ", PyvtkDiffusionTensorMathematics_SetOperationToMaxEigenvecZ, METH_VARARGS,
   "SetOperationToMaxEigenvecZ(self) -> None\nC++: void SetOperationToMaxEigenvecZ()\n\n"},
  {"SetOperationToD11", PyvtkDiffusionTensorMathematics_SetOperationToD11, METH_VARARGS,
   "SetOperationToD11(self) -> None\nC++: void SetOperationToD11()\n\nOutput a matrix (tensor) component\n"},
  {"SetOperationToD22", PyvtkDiffusionTensorMathematics_SetOperationToD22, METH_VARARGS,
   "SetOperationToD22(self) -> None\nC++: void SetOperationToD22()\n\n"},
  {"SetOperationToD33", PyvtkDiffusionTensorMathematics_SetOperationToD33, METH_VARARGS,
   "SetOperationToD33(self) -> None\nC++: void SetOperationToD33()\n\n"},
  {"SetOperationToColorByOrientation", PyvtkDiffusionTensorMathematics_SetOperationToColorByOrientation, METH_VARARGS,
   "SetOperationToColorByOrientation(self) -> None\nC++: void SetOperationToColorByOrientation()\n\nOutput RGB color according to XYZ of eigenvectors. Output A\n(alpha, or transparency) according to anisotropy (1-spherical\nmeasure).\n"},
  {"SetOperationToColorByMode", PyvtkDiffusionTensorMathematics_SetOperationToColorByMode, METH_VARARGS,
   "SetOperationToColorByMode(self) -> None\nC++: void SetOperationToColorByMode()\n\nOutput RGB color according to colormapping of mode, with final\nRGB being a linear combination of gray and this color.  Amount of\ngray is determined by FA. Thanks to Gordon Lothar Kindlmann for\nthis method.\n"},
  {"SetScaleFactor", PyvtkDiffusionTensorMathematics_SetScaleFactor, METH_VARARGS,
   "SetScaleFactor(self, _arg:float) -> None\nC++: virtual void SetScaleFactor(double _arg)\n\nSpecify scale factor to scale output (float) scalars by. This is\nnot used when the output is RGBA (char color data).\n"},
  {"GetScaleFactor", PyvtkDiffusionTensorMathematics_GetScaleFactor, METH_VARARGS,
   "GetScaleFactor(self) -> float\nC++: virtual double GetScaleFactor()\n\n"},
  {"SetExtractEigenvalues", PyvtkDiffusionTensorMathematics_SetExtractEigenvalues, METH_VARARGS,
   "SetExtractEigenvalues(self, _arg:int) -> None\nC++: virtual void SetExtractEigenvalues(int _arg)\n\nTurn on/off extraction of eigenvalues from tensor.\n"},
  {"ExtractEigenvaluesOn", PyvtkDiffusionTensorMathematics_ExtractEigenvaluesOn, METH_VARARGS,
   "ExtractEigenvaluesOn(self) -> None\nC++: virtual void ExtractEigenvaluesOn()\n\n"},
  {"ExtractEigenvaluesOff", PyvtkDiffusionTensorMathematics_ExtractEigenvaluesOff, METH_VARARGS,
   "ExtractEigenvaluesOff(self) -> None\nC++: virtual void ExtractEigenvaluesOff()\n\n"},
  {"GetExtractEigenvalues", PyvtkDiffusionTensorMathematics_GetExtractEigenvalues, METH_VARARGS,
   "GetExtractEigenvalues(self) -> int\nC++: virtual int GetExtractEigenvalues()\n\n"},
  {"SetTensorRotationMatrix", PyvtkDiffusionTensorMathematics_SetTensorRotationMatrix, METH_VARARGS,
   "SetTensorRotationMatrix(self, __a:vtkMatrix4x4) -> None\nC++: virtual void SetTensorRotationMatrix(vtkMatrix4x4 *)\n\nDescription This matrix is only used for ColorByOrientation. We\ntransform the tensor orientation by this matrix before setting\nthe output RGB values. This is useful to put the output colors\ninto a standard coordinate system (i.e. RAS) regardless of the\ndata scan order. Example usage is as follows:\n1) If tensors are to be displayed in a coordinate system that is\n   not IJK (array-based), and the whole volume is being rotated,\n   each tensor needs also to be rotated. First find the matrix\n   that positions your volume. (This is how the entire volume is\n   positioned, not the matrix that positions an arbitrary\n   reformatted slice.)\n2) Remove scaling and translation from this matrix; we just need\n   to rotate each tensor.\n3) Set TensorRotationMatrix to this rotation matrix.\n"},
  {"GetTensorRotationMatrix", PyvtkDiffusionTensorMathematics_GetTensorRotationMatrix, METH_VARARGS,
   "GetTensorRotationMatrix(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetTensorRotationMatrix()\n\n"},
  {"MaskWithScalarsOn", PyvtkDiffusionTensorMathematics_MaskWithScalarsOn, METH_VARARGS,
   "MaskWithScalarsOn(self) -> None\nC++: virtual void MaskWithScalarsOn()\n\nDescription Input scalars are a binary mask: 0 prevents display\nof tensor quantity at that point\n"},
  {"MaskWithScalarsOff", PyvtkDiffusionTensorMathematics_MaskWithScalarsOff, METH_VARARGS,
   "MaskWithScalarsOff(self) -> None\nC++: virtual void MaskWithScalarsOff()\n\n"},
  {"SetMaskWithScalars", PyvtkDiffusionTensorMathematics_SetMaskWithScalars, METH_VARARGS,
   "SetMaskWithScalars(self, _arg:int) -> None\nC++: virtual void SetMaskWithScalars(int _arg)\n\n"},
  {"GetMaskWithScalars", PyvtkDiffusionTensorMathematics_GetMaskWithScalars, METH_VARARGS,
   "GetMaskWithScalars(self) -> int\nC++: virtual int GetMaskWithScalars()\n\n"},
  {"FixNegativeEigenvaluesOn", PyvtkDiffusionTensorMathematics_FixNegativeEigenvaluesOn, METH_VARARGS,
   "FixNegativeEigenvaluesOn(self) -> None\nC++: virtual void FixNegativeEigenvaluesOn()\n\n"},
  {"FixNegativeEigenvaluesOff", PyvtkDiffusionTensorMathematics_FixNegativeEigenvaluesOff, METH_VARARGS,
   "FixNegativeEigenvaluesOff(self) -> None\nC++: virtual void FixNegativeEigenvaluesOff()\n\n"},
  {"SetFixNegativeEigenvalues", PyvtkDiffusionTensorMathematics_SetFixNegativeEigenvalues, METH_VARARGS,
   "SetFixNegativeEigenvalues(self, _arg:int) -> None\nC++: virtual void SetFixNegativeEigenvalues(int _arg)\n\n"},
  {"GetFixNegativeEigenvalues", PyvtkDiffusionTensorMathematics_GetFixNegativeEigenvalues, METH_VARARGS,
   "GetFixNegativeEigenvalues(self) -> int\nC++: virtual int GetFixNegativeEigenvalues()\n\n"},
  {"SetScalarMask", PyvtkDiffusionTensorMathematics_SetScalarMask, METH_VARARGS,
   "SetScalarMask(self, __a:vtkImageData) -> None\nC++: virtual void SetScalarMask(vtkImageData *)\n\nScalar mask\n"},
  {"GetScalarMask", PyvtkDiffusionTensorMathematics_GetScalarMask, METH_VARARGS,
   "GetScalarMask(self) -> vtkImageData\nC++: virtual vtkImageData *GetScalarMask()\n\n"},
  {"SetMaskLabelValue", PyvtkDiffusionTensorMathematics_SetMaskLabelValue, METH_VARARGS,
   "SetMaskLabelValue(self, _arg:int) -> None\nC++: virtual void SetMaskLabelValue(int _arg)\n\nLabel value defining ROI for mask\n"},
  {"GetMaskLabelValue", PyvtkDiffusionTensorMathematics_GetMaskLabelValue, METH_VARARGS,
   "GetMaskLabelValue(self) -> int\nC++: virtual int GetMaskLabelValue()\n\n"},
  {"ModeToRGB", PyvtkDiffusionTensorMathematics_ModeToRGB, METH_VARARGS,
   "ModeToRGB(Mode:float, FA:float, R:float, G:float, B:float) -> None\nC++: static void ModeToRGB(double Mode, double FA, double &R,\n    double &G, double &B)\n\nPublic for access from threads\n"},
  {"RGBToIndex", PyvtkDiffusionTensorMathematics_RGBToIndex, METH_VARARGS,
   "RGBToIndex(R:float, G:float, B:float, index:float) -> None\nC++: static void RGBToIndex(double R, double G, double B,\n    double &index)\n\n"},
  {"FixNegativeEigenvaluesMethod", PyvtkDiffusionTensorMathematics_FixNegativeEigenvaluesMethod, METH_VARARGS,
   "FixNegativeEigenvaluesMethod(w:[float, float, float]) -> int\nC++: static int FixNegativeEigenvaluesMethod(double w[3])\n\nHelper functions to perform operations pixel-wise\n"},
  {"Determinant", PyvtkDiffusionTensorMathematics_Determinant, METH_VARARGS,
   "Determinant(D:[[float, float, float], [float, float, float],\n    [float, float, float]]) -> float\nC++: static double Determinant(double D[3][3])\n\n"},
  {"Trace", PyvtkDiffusionTensorMathematics_Trace, METH_VARARGS,
   "Trace(D:[[float, float, float], [float, float, float], [float,\n    float, float]]) -> float\nC++: static double Trace(double D[3][3])\nTrace(w:[float, float, float]) -> float\nC++: static double Trace(double w[3])\n\n"},
  {"RelativeAnisotropy", PyvtkDiffusionTensorMathematics_RelativeAnisotropy, METH_VARARGS,
   "RelativeAnisotropy(w:[float, float, float]) -> float\nC++: static double RelativeAnisotropy(double w[3])\n\n"},
  {"FractionalAnisotropy", PyvtkDiffusionTensorMathematics_FractionalAnisotropy, METH_VARARGS,
   "FractionalAnisotropy(w:[float, float, float]) -> float\nC++: static double FractionalAnisotropy(double w[3])\n\n"},
  {"LinearMeasure", PyvtkDiffusionTensorMathematics_LinearMeasure, METH_VARARGS,
   "LinearMeasure(w:[float, float, float]) -> float\nC++: static double LinearMeasure(double w[3])\n\n"},
  {"PlanarMeasure", PyvtkDiffusionTensorMathematics_PlanarMeasure, METH_VARARGS,
   "PlanarMeasure(w:[float, float, float]) -> float\nC++: static double PlanarMeasure(double w[3])\n\n"},
  {"SphericalMeasure", PyvtkDiffusionTensorMathematics_SphericalMeasure, METH_VARARGS,
   "SphericalMeasure(w:[float, float, float]) -> float\nC++: static double SphericalMeasure(double w[3])\n\n"},
  {"MaxEigenvalue", PyvtkDiffusionTensorMathematics_MaxEigenvalue, METH_VARARGS,
   "MaxEigenvalue(w:[float, float, float]) -> float\nC++: static double MaxEigenvalue(double w[3])\n\n"},
  {"MiddleEigenvalue", PyvtkDiffusionTensorMathematics_MiddleEigenvalue, METH_VARARGS,
   "MiddleEigenvalue(w:[float, float, float]) -> float\nC++: static double MiddleEigenvalue(double w[3])\n\n"},
  {"ParallelDiffusivity", PyvtkDiffusionTensorMathematics_ParallelDiffusivity, METH_VARARGS,
   "ParallelDiffusivity(w:[float, float, float]) -> float\nC++: static double ParallelDiffusivity(double w[3])\n\n"},
  {"PerpendicularDiffusivity", PyvtkDiffusionTensorMathematics_PerpendicularDiffusivity, METH_VARARGS,
   "PerpendicularDiffusivity(w:[float, float, float]) -> float\nC++: static double PerpendicularDiffusivity(double w[3])\n\n"},
  {"MeanDiffusivity", PyvtkDiffusionTensorMathematics_MeanDiffusivity, METH_VARARGS,
   "MeanDiffusivity(w:[float, float, float]) -> float\nC++: static double MeanDiffusivity(double w[3])\n\n"},
  {"MinEigenvalue", PyvtkDiffusionTensorMathematics_MinEigenvalue, METH_VARARGS,
   "MinEigenvalue(w:[float, float, float]) -> float\nC++: static double MinEigenvalue(double w[3])\n\n"},
  {"Mode", PyvtkDiffusionTensorMathematics_Mode, METH_VARARGS,
   "Mode(w:[float, float, float]) -> float\nC++: static double Mode(double w[3])\n\n"},
  {"ColorByMode", PyvtkDiffusionTensorMathematics_ColorByMode, METH_VARARGS,
   "ColorByMode(w:[float, float, float], R:float, G:float, B:float)\n    -> None\nC++: static void ColorByMode(double w[3], double &R, double &G,\n    double &B)\n\n"},
  {"ComputeTensorIncrements", PyvtkDiffusionTensorMathematics_ComputeTensorIncrements, METH_VARARGS,
   "ComputeTensorIncrements(self, imageData:vtkImageData, incr:[int,\n    int, int]) -> None\nC++: void ComputeTensorIncrements(vtkImageData *imageData,\n    vtkIdType incr[3])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDiffusionTensorMathematics_Doc =
  "vtkDiffusionTensorMathematics - no description provided.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDiffusionTensorMathematics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkTeemPython.vtkDiffusionTensorMathematics", // tp_name
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
  PyvtkDiffusionTensorMathematics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDiffusionTensorMathematics_StaticNew()
{
  return vtkDiffusionTensorMathematics::New();
}

PyObject *PyvtkDiffusionTensorMathematics_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDiffusionTensorMathematics_Type, PyvtkDiffusionTensorMathematics_Methods,
    "vtkDiffusionTensorMathematics",
 &PyvtkDiffusionTensorMathematics_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 30; c++)
  {
    static const struct { const char *name; int value; }
      constants[30] = {
        { "VTK_TENS_TRACE", vtkDiffusionTensorMathematics::VTK_TENS_TRACE },
        { "VTK_TENS_DETERMINANT", vtkDiffusionTensorMathematics::VTK_TENS_DETERMINANT },
        { "VTK_TENS_RELATIVE_ANISOTROPY", vtkDiffusionTensorMathematics::VTK_TENS_RELATIVE_ANISOTROPY },
        { "VTK_TENS_FRACTIONAL_ANISOTROPY", vtkDiffusionTensorMathematics::VTK_TENS_FRACTIONAL_ANISOTROPY },
        { "VTK_TENS_MAX_EIGENVALUE", vtkDiffusionTensorMathematics::VTK_TENS_MAX_EIGENVALUE },
        { "VTK_TENS_MID_EIGENVALUE", vtkDiffusionTensorMathematics::VTK_TENS_MID_EIGENVALUE },
        { "VTK_TENS_MIN_EIGENVALUE", vtkDiffusionTensorMathematics::VTK_TENS_MIN_EIGENVALUE },
        { "VTK_TENS_LINEAR_MEASURE", vtkDiffusionTensorMathematics::VTK_TENS_LINEAR_MEASURE },
        { "VTK_TENS_PLANAR_MEASURE", vtkDiffusionTensorMathematics::VTK_TENS_PLANAR_MEASURE },
        { "VTK_TENS_SPHERICAL_MEASURE", vtkDiffusionTensorMathematics::VTK_TENS_SPHERICAL_MEASURE },
        { "VTK_TENS_COLOR_ORIENTATION", vtkDiffusionTensorMathematics::VTK_TENS_COLOR_ORIENTATION },
        { "VTK_TENS_D11", vtkDiffusionTensorMathematics::VTK_TENS_D11 },
        { "VTK_TENS_D22", vtkDiffusionTensorMathematics::VTK_TENS_D22 },
        { "VTK_TENS_D33", vtkDiffusionTensorMathematics::VTK_TENS_D33 },
        { "VTK_TENS_MODE", vtkDiffusionTensorMathematics::VTK_TENS_MODE },
        { "VTK_TENS_COLOR_MODE", vtkDiffusionTensorMathematics::VTK_TENS_COLOR_MODE },
        { "VTK_TENS_MAX_EIGENVALUE_PROJX", vtkDiffusionTensorMathematics::VTK_TENS_MAX_EIGENVALUE_PROJX },
        { "VTK_TENS_MAX_EIGENVALUE_PROJY", vtkDiffusionTensorMathematics::VTK_TENS_MAX_EIGENVALUE_PROJY },
        { "VTK_TENS_MAX_EIGENVALUE_PROJZ", vtkDiffusionTensorMathematics::VTK_TENS_MAX_EIGENVALUE_PROJZ },
        { "VTK_TENS_RAI_MAX_EIGENVEC_PROJX", vtkDiffusionTensorMathematics::VTK_TENS_RAI_MAX_EIGENVEC_PROJX },
        { "VTK_TENS_RAI_MAX_EIGENVEC_PROJY", vtkDiffusionTensorMathematics::VTK_TENS_RAI_MAX_EIGENVEC_PROJY },
        { "VTK_TENS_RAI_MAX_EIGENVEC_PROJZ", vtkDiffusionTensorMathematics::VTK_TENS_RAI_MAX_EIGENVEC_PROJZ },
        { "VTK_TENS_MAX_EIGENVEC_PROJX", vtkDiffusionTensorMathematics::VTK_TENS_MAX_EIGENVEC_PROJX },
        { "VTK_TENS_MAX_EIGENVEC_PROJY", vtkDiffusionTensorMathematics::VTK_TENS_MAX_EIGENVEC_PROJY },
        { "VTK_TENS_MAX_EIGENVEC_PROJZ", vtkDiffusionTensorMathematics::VTK_TENS_MAX_EIGENVEC_PROJZ },
        { "VTK_TENS_PARALLEL_DIFFUSIVITY", vtkDiffusionTensorMathematics::VTK_TENS_PARALLEL_DIFFUSIVITY },
        { "VTK_TENS_PERPENDICULAR_DIFFUSIVITY", vtkDiffusionTensorMathematics::VTK_TENS_PERPENDICULAR_DIFFUSIVITY },
        { "VTK_TENS_COLOR_ORIENTATION_MIDDLE_EIGENVECTOR", vtkDiffusionTensorMathematics::VTK_TENS_COLOR_ORIENTATION_MIDDLE_EIGENVECTOR },
        { "VTK_TENS_COLOR_ORIENTATION_MIN_EIGENVECTOR", vtkDiffusionTensorMathematics::VTK_TENS_COLOR_ORIENTATION_MIN_EIGENVECTOR },
        { "VTK_TENS_MEAN_DIFFUSIVITY", vtkDiffusionTensorMathematics::VTK_TENS_MEAN_DIFFUSIVITY },
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

void PyVTKAddFile_vtkDiffusionTensorMathematics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDiffusionTensorMathematics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDiffusionTensorMathematics", o) != 0)
  {
    Py_DECREF(o);
  }

}

