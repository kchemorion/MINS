// python wrapper for vtkCurveGenerator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCurveGenerator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCurveGenerator(PyObject *dict); }
extern "C" { PyObject *PyvtkCurveGenerator_ClassNew(); }


static PyObject *
PyvtkCurveGenerator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCurveGenerator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCurveGenerator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCurveGenerator *tempr = vtkCurveGenerator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCurveGenerator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCurveGenerator::NewInstance());

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
PyvtkCurveGenerator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCurveGenerator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCurveGenerator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetCurveIsClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveIsClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurveIsClosed(temp0);
    }
    else
    {
      op->vtkCurveGenerator::SetCurveIsClosed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetCurveIsClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveIsClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCurveIsClosed() :
      op->vtkCurveGenerator::GetCurveIsClosed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_CurveIsClosedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CurveIsClosedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CurveIsClosedOn();
    }
    else
    {
      op->vtkCurveGenerator::CurveIsClosedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_CurveIsClosedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CurveIsClosedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CurveIsClosedOff();
    }
    else
    {
      op->vtkCurveGenerator::CurveIsClosedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetCurveIsLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveIsLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurveIsLoop(temp0);
    }
    else
    {
      op->vtkCurveGenerator::SetCurveIsLoop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_CurveIsLoopOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CurveIsLoopOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CurveIsLoopOn();
    }
    else
    {
      op->vtkCurveGenerator::CurveIsLoopOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_CurveIsLoopOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CurveIsLoopOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CurveIsLoopOff();
    }
    else
    {
      op->vtkCurveGenerator::CurveIsLoopOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetCurveIsLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveIsLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCurveIsLoop() :
      op->vtkCurveGenerator::GetCurveIsLoop());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetCurveType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurveType() :
      op->vtkCurveGenerator::GetCurveType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetCurveType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurveType(temp0);
    }
    else
    {
      op->vtkCurveGenerator::SetCurveType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetCurveTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCurveTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkCurveGenerator::GetCurveTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetCurveTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCurveTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCurveGenerator::GetCurveTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetCurveTypeToLinearSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveTypeToLinearSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurveTypeToLinearSpline();
    }
    else
    {
      op->vtkCurveGenerator::SetCurveTypeToLinearSpline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetCurveTypeToCardinalSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveTypeToCardinalSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurveTypeToCardinalSpline();
    }
    else
    {
      op->vtkCurveGenerator::SetCurveTypeToCardinalSpline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetCurveTypeToKochanekSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveTypeToKochanekSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurveTypeToKochanekSpline();
    }
    else
    {
      op->vtkCurveGenerator::SetCurveTypeToKochanekSpline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetCurveTypeToPolynomial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveTypeToPolynomial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurveTypeToPolynomial();
    }
    else
    {
      op->vtkCurveGenerator::SetCurveTypeToPolynomial();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetCurveTypeToShortestDistanceOnSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveTypeToShortestDistanceOnSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurveTypeToShortestDistanceOnSurface();
    }
    else
    {
      op->vtkCurveGenerator::SetCurveTypeToShortestDistanceOnSurface();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_IsInterpolatingCurve(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInterpolatingCurve");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsInterpolatingCurve() :
      op->vtkCurveGenerator::IsInterpolatingCurve());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetNumberOfPointsPerInterpolatingSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPointsPerInterpolatingSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPointsPerInterpolatingSegment(temp0);
    }
    else
    {
      op->vtkCurveGenerator::SetNumberOfPointsPerInterpolatingSegment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetNumberOfPointsPerInterpolatingSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerInterpolatingSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerInterpolatingSegment() :
      op->vtkCurveGenerator::GetNumberOfPointsPerInterpolatingSegment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetKochanekBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKochanekBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKochanekBias() :
      op->vtkCurveGenerator::GetKochanekBias());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetKochanekBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKochanekBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKochanekBias(temp0);
    }
    else
    {
      op->vtkCurveGenerator::SetKochanekBias(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetKochanekContinuity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKochanekContinuity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKochanekContinuity() :
      op->vtkCurveGenerator::GetKochanekContinuity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetKochanekContinuity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKochanekContinuity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKochanekContinuity(temp0);
    }
    else
    {
      op->vtkCurveGenerator::SetKochanekContinuity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetKochanekTension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKochanekTension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKochanekTension() :
      op->vtkCurveGenerator::GetKochanekTension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetKochanekTension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKochanekTension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKochanekTension(temp0);
    }
    else
    {
      op->vtkCurveGenerator::SetKochanekTension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetKochanekEndsCopyNearestDerivatives(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKochanekEndsCopyNearestDerivatives");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetKochanekEndsCopyNearestDerivatives() :
      op->vtkCurveGenerator::GetKochanekEndsCopyNearestDerivatives());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetKochanekEndsCopyNearestDerivatives(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKochanekEndsCopyNearestDerivatives");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKochanekEndsCopyNearestDerivatives(temp0);
    }
    else
    {
      op->vtkCurveGenerator::SetKochanekEndsCopyNearestDerivatives(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetPolynomialOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolynomialOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolynomialOrder() :
      op->vtkCurveGenerator::GetPolynomialOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetPolynomialOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolynomialOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolynomialOrder(temp0);
    }
    else
    {
      op->vtkCurveGenerator::SetPolynomialOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetPolynomialPointSortingMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolynomialPointSortingMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolynomialPointSortingMethod() :
      op->vtkCurveGenerator::GetPolynomialPointSortingMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetPolynomialPointSortingMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolynomialPointSortingMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolynomialPointSortingMethod(temp0);
    }
    else
    {
      op->vtkCurveGenerator::SetPolynomialPointSortingMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetPolynomialPointSortingMethodAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPolynomialPointSortingMethodAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkCurveGenerator::GetPolynomialPointSortingMethodAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetPolynomialPointSortingMethodFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPolynomialPointSortingMethodFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCurveGenerator::GetPolynomialPointSortingMethodFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetPolynomialPointSortingMethodToIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolynomialPointSortingMethodToIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPolynomialPointSortingMethodToIndex();
    }
    else
    {
      op->vtkCurveGenerator::SetPolynomialPointSortingMethodToIndex();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetPolynomialPointSortingMethodToMinimumSpanningTreePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolynomialPointSortingMethodToMinimumSpanningTreePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPolynomialPointSortingMethodToMinimumSpanningTreePosition();
    }
    else
    {
      op->vtkCurveGenerator::SetPolynomialPointSortingMethodToMinimumSpanningTreePosition();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetPolynomialFitMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolynomialFitMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPolynomialFitMethod() :
      op->vtkCurveGenerator::GetPolynomialFitMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetPolynomialFitMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolynomialFitMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolynomialFitMethod(temp0);
    }
    else
    {
      op->vtkCurveGenerator::SetPolynomialFitMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetPolynomialFitMethodAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPolynomialFitMethodAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkCurveGenerator::GetPolynomialFitMethodAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetPolynomialFitMethodFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPolynomialFitMethodFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCurveGenerator::GetPolynomialFitMethodFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetPolynomialFitMethodToGlobalLeastSquares(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolynomialFitMethodToGlobalLeastSquares");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPolynomialFitMethodToGlobalLeastSquares();
    }
    else
    {
      op->vtkCurveGenerator::SetPolynomialFitMethodToGlobalLeastSquares();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetPolynomialFitMethodToMovingLeastSquares(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolynomialFitMethodToMovingLeastSquares");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPolynomialFitMethodToMovingLeastSquares();
    }
    else
    {
      op->vtkCurveGenerator::SetPolynomialFitMethodToMovingLeastSquares();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetPolynomialSampleWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolynomialSampleWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPolynomialSampleWidth() :
      op->vtkCurveGenerator::GetPolynomialSampleWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetPolynomialSampleWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolynomialSampleWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolynomialSampleWidth(temp0);
    }
    else
    {
      op->vtkCurveGenerator::SetPolynomialSampleWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetPolynomialWeightFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolynomialWeightFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPolynomialWeightFunction() :
      op->vtkCurveGenerator::GetPolynomialWeightFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetPolynomialWeightFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolynomialWeightFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolynomialWeightFunction(temp0);
    }
    else
    {
      op->vtkCurveGenerator::SetPolynomialWeightFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetPolynomialWeightFunctionAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPolynomialWeightFunctionAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkCurveGenerator::GetPolynomialWeightFunctionAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetPolynomialWeightFunctionFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPolynomialWeightFunctionFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCurveGenerator::GetPolynomialWeightFunctionFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetPolynomialWeightFunctionToRectangular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolynomialWeightFunctionToRectangular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPolynomialWeightFunctionToRectangular();
    }
    else
    {
      op->vtkCurveGenerator::SetPolynomialWeightFunctionToRectangular();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetPolynomialWeightFunctionToTriangular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolynomialWeightFunctionToTriangular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPolynomialWeightFunctionToTriangular();
    }
    else
    {
      op->vtkCurveGenerator::SetPolynomialWeightFunctionToTriangular();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetPolynomialWeightFunctionToCosine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolynomialWeightFunctionToCosine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPolynomialWeightFunctionToCosine();
    }
    else
    {
      op->vtkCurveGenerator::SetPolynomialWeightFunctionToCosine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetPolynomialWeightFunctionToGaussian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolynomialWeightFunctionToGaussian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPolynomialWeightFunctionToGaussian();
    }
    else
    {
      op->vtkCurveGenerator::SetPolynomialWeightFunctionToGaussian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetSurfaceCostFunctionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceCostFunctionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSurfaceCostFunctionType() :
      op->vtkCurveGenerator::GetSurfaceCostFunctionType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetSurfaceCostFunctionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceCostFunctionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceCostFunctionType(temp0);
    }
    else
    {
      op->vtkCurveGenerator::SetSurfaceCostFunctionType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetControlPointIdFromInterpolatedPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointIdFromInterpolatedPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetControlPointIdFromInterpolatedPointId(temp0) :
      op->vtkCurveGenerator::GetControlPointIdFromInterpolatedPointId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetSurfacePointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfacePointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetSurfacePointIds() :
      op->vtkCurveGenerator::GetSurfacePointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetOutputCurveLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputCurveLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOutputCurveLength() :
      op->vtkCurveGenerator::GetOutputCurveLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetParametricFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricFunction *tempr = (ap.IsBound() ?
      op->GetParametricFunction() :
      op->vtkCurveGenerator::GetParametricFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SetInputPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetInputPoints(temp0);
    }
    else
    {
      op->vtkCurveGenerator::SetInputPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_GetOutputPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveGenerator *op = static_cast<vtkCurveGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetOutputPoints() :
      op->vtkCurveGenerator::GetOutputPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SortByIndex(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SortByIndex");

  vtkPoints *temp0 = nullptr;
  vtkDoubleArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkDoubleArray"))
  {
    vtkCurveGenerator::SortByIndex(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveGenerator_SortByMinimumSpanningTreePosition(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SortByMinimumSpanningTreePosition");

  vtkPoints *temp0 = nullptr;
  vtkDoubleArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkDoubleArray"))
  {
    vtkCurveGenerator::SortByMinimumSpanningTreePosition(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCurveGenerator_Methods[] = {
  {"IsTypeOf", PyvtkCurveGenerator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCurveGenerator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCurveGenerator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCurveGenerator\nC++: static vtkCurveGenerator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCurveGenerator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCurveGenerator\nC++: vtkCurveGenerator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCurveGenerator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCurveGenerator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCurveIsClosed", PyvtkCurveGenerator_SetCurveIsClosed, METH_VARARGS,
   "SetCurveIsClosed(self, _arg:bool) -> None\nC++: virtual void SetCurveIsClosed(bool _arg)\n\nThis indicates whether the curve should loop back in on itself,\nconnecting the last point back to the first point (disabled by\ndefault).\n"},
  {"GetCurveIsClosed", PyvtkCurveGenerator_GetCurveIsClosed, METH_VARARGS,
   "GetCurveIsClosed(self) -> bool\nC++: virtual bool GetCurveIsClosed()\n\n"},
  {"CurveIsClosedOn", PyvtkCurveGenerator_CurveIsClosedOn, METH_VARARGS,
   "CurveIsClosedOn(self) -> None\nC++: virtual void CurveIsClosedOn()\n\n"},
  {"CurveIsClosedOff", PyvtkCurveGenerator_CurveIsClosedOff, METH_VARARGS,
   "CurveIsClosedOff(self) -> None\nC++: virtual void CurveIsClosedOff()\n\n"},
  {"SetCurveIsLoop", PyvtkCurveGenerator_SetCurveIsLoop, METH_VARARGS,
   "SetCurveIsLoop(self, loop:bool) -> None\nC++: void SetCurveIsLoop(bool loop)\n\nThese methods are deprecated and will be removed in the future.\nUse SetCurveIsClosed, GetCurveIsClosed, CurveIsCloseOn,\nCurveIsCloseOff methods instead.\n"},
  {"CurveIsLoopOn", PyvtkCurveGenerator_CurveIsLoopOn, METH_VARARGS,
   "CurveIsLoopOn(self) -> None\nC++: void CurveIsLoopOn()\n\nThese methods are deprecated and will be removed in the future.\nUse SetCurveIsClosed, GetCurveIsClosed, CurveIsCloseOn,\nCurveIsCloseOff methods instead.\n"},
  {"CurveIsLoopOff", PyvtkCurveGenerator_CurveIsLoopOff, METH_VARARGS,
   "CurveIsLoopOff(self) -> None\nC++: void CurveIsLoopOff()\n\nThese methods are deprecated and will be removed in the future.\nUse SetCurveIsClosed, GetCurveIsClosed, CurveIsCloseOn,\nCurveIsCloseOff methods instead.\n"},
  {"GetCurveIsLoop", PyvtkCurveGenerator_GetCurveIsLoop, METH_VARARGS,
   "GetCurveIsLoop(self) -> bool\nC++: bool GetCurveIsLoop()\n\nThese methods are deprecated and will be removed in the future.\nUse SetCurveIsClosed, GetCurveIsClosed, CurveIsCloseOn,\nCurveIsCloseOff methods instead.\n"},
  {"GetCurveType", PyvtkCurveGenerator_GetCurveType, METH_VARARGS,
   "GetCurveType(self) -> int\nC++: virtual int GetCurveType()\n\n"},
  {"SetCurveType", PyvtkCurveGenerator_SetCurveType, METH_VARARGS,
   "SetCurveType(self, _arg:int) -> None\nC++: virtual void SetCurveType(int _arg)\n\n"},
  {"GetCurveTypeAsString", PyvtkCurveGenerator_GetCurveTypeAsString, METH_VARARGS,
   "GetCurveTypeAsString(id:int) -> str\nC++: static const char *GetCurveTypeAsString(int id)\n\n"},
  {"GetCurveTypeFromString", PyvtkCurveGenerator_GetCurveTypeFromString, METH_VARARGS,
   "GetCurveTypeFromString(name:str) -> int\nC++: static int GetCurveTypeFromString(const char *name)\n\n"},
  {"SetCurveTypeToLinearSpline", PyvtkCurveGenerator_SetCurveTypeToLinearSpline, METH_VARARGS,
   "SetCurveTypeToLinearSpline(self) -> None\nC++: void SetCurveTypeToLinearSpline()\n\n"},
  {"SetCurveTypeToCardinalSpline", PyvtkCurveGenerator_SetCurveTypeToCardinalSpline, METH_VARARGS,
   "SetCurveTypeToCardinalSpline(self) -> None\nC++: void SetCurveTypeToCardinalSpline()\n\n"},
  {"SetCurveTypeToKochanekSpline", PyvtkCurveGenerator_SetCurveTypeToKochanekSpline, METH_VARARGS,
   "SetCurveTypeToKochanekSpline(self) -> None\nC++: void SetCurveTypeToKochanekSpline()\n\n"},
  {"SetCurveTypeToPolynomial", PyvtkCurveGenerator_SetCurveTypeToPolynomial, METH_VARARGS,
   "SetCurveTypeToPolynomial(self) -> None\nC++: void SetCurveTypeToPolynomial()\n\n"},
  {"SetCurveTypeToShortestDistanceOnSurface", PyvtkCurveGenerator_SetCurveTypeToShortestDistanceOnSurface, METH_VARARGS,
   "SetCurveTypeToShortestDistanceOnSurface(self) -> None\nC++: void SetCurveTypeToShortestDistanceOnSurface()\n\n"},
  {"IsInterpolatingCurve", PyvtkCurveGenerator_IsInterpolatingCurve, METH_VARARGS,
   "IsInterpolatingCurve(self) -> bool\nC++: virtual bool IsInterpolatingCurve()\n\n"},
  {"SetNumberOfPointsPerInterpolatingSegment", PyvtkCurveGenerator_SetNumberOfPointsPerInterpolatingSegment, METH_VARARGS,
   "SetNumberOfPointsPerInterpolatingSegment(self, _arg:int) -> None\nC++: virtual void SetNumberOfPointsPerInterpolatingSegment(\n    int _arg)\n\nSample an *interpolating* curve this many times per segment (pair\nof points in sequence). Range 1 and up. Default 5.\n"},
  {"GetNumberOfPointsPerInterpolatingSegment", PyvtkCurveGenerator_GetNumberOfPointsPerInterpolatingSegment, METH_VARARGS,
   "GetNumberOfPointsPerInterpolatingSegment(self) -> int\nC++: virtual int GetNumberOfPointsPerInterpolatingSegment()\n\n"},
  {"GetKochanekBias", PyvtkCurveGenerator_GetKochanekBias, METH_VARARGS,
   "GetKochanekBias(self) -> float\nC++: virtual double GetKochanekBias()\n\nBias of derivative toward previous point (negative value) or next\npoint. Range -1 to 1. Default 0.\n"},
  {"SetKochanekBias", PyvtkCurveGenerator_SetKochanekBias, METH_VARARGS,
   "SetKochanekBias(self, _arg:float) -> None\nC++: virtual void SetKochanekBias(double _arg)\n\n"},
  {"GetKochanekContinuity", PyvtkCurveGenerator_GetKochanekContinuity, METH_VARARGS,
   "GetKochanekContinuity(self) -> float\nC++: virtual double GetKochanekContinuity()\n\nMake the curve sharper( negative value) or smoother (positive\nvalue). Range -1 to 1. Default 0.\n"},
  {"SetKochanekContinuity", PyvtkCurveGenerator_SetKochanekContinuity, METH_VARARGS,
   "SetKochanekContinuity(self, _arg:float) -> None\nC++: virtual void SetKochanekContinuity(double _arg)\n\n"},
  {"GetKochanekTension", PyvtkCurveGenerator_GetKochanekTension, METH_VARARGS,
   "GetKochanekTension(self) -> float\nC++: virtual double GetKochanekTension()\n\nHow quickly the curve turns, higher values like tightening an\nelastic. Range -1 to 1. Default 0.\n"},
  {"SetKochanekTension", PyvtkCurveGenerator_SetKochanekTension, METH_VARARGS,
   "SetKochanekTension(self, _arg:float) -> None\nC++: virtual void SetKochanekTension(double _arg)\n\n"},
  {"GetKochanekEndsCopyNearestDerivatives", PyvtkCurveGenerator_GetKochanekEndsCopyNearestDerivatives, METH_VARARGS,
   "GetKochanekEndsCopyNearestDerivatives(self) -> bool\nC++: virtual bool GetKochanekEndsCopyNearestDerivatives()\n\nMake the ends of the curve 'straighter' by copying derivative of\nthe nearest point. Default false.\n"},
  {"SetKochanekEndsCopyNearestDerivatives", PyvtkCurveGenerator_SetKochanekEndsCopyNearestDerivatives, METH_VARARGS,
   "SetKochanekEndsCopyNearestDerivatives(self, _arg:bool) -> None\nC++: virtual void SetKochanekEndsCopyNearestDerivatives(bool _arg)\n\n"},
  {"GetPolynomialOrder", PyvtkCurveGenerator_GetPolynomialOrder, METH_VARARGS,
   "GetPolynomialOrder(self) -> int\nC++: virtual int GetPolynomialOrder()\n\nSet the order of the polynomials for fitting. Range 1 to 9\n(equation becomes unstable from 9 upward). Default 1.\n"},
  {"SetPolynomialOrder", PyvtkCurveGenerator_SetPolynomialOrder, METH_VARARGS,
   "SetPolynomialOrder(self, _arg:int) -> None\nC++: virtual void SetPolynomialOrder(int _arg)\n\n"},
  {"GetPolynomialPointSortingMethod", PyvtkCurveGenerator_GetPolynomialPointSortingMethod, METH_VARARGS,
   "GetPolynomialPointSortingMethod(self) -> int\nC++: virtual int GetPolynomialPointSortingMethod()\n\n"},
  {"SetPolynomialPointSortingMethod", PyvtkCurveGenerator_SetPolynomialPointSortingMethod, METH_VARARGS,
   "SetPolynomialPointSortingMethod(self, _arg:int) -> None\nC++: virtual void SetPolynomialPointSortingMethod(int _arg)\n\n"},
  {"GetPolynomialPointSortingMethodAsString", PyvtkCurveGenerator_GetPolynomialPointSortingMethodAsString, METH_VARARGS,
   "GetPolynomialPointSortingMethodAsString(id:int) -> str\nC++: static const char *GetPolynomialPointSortingMethodAsString(\n    int id)\n\n"},
  {"GetPolynomialPointSortingMethodFromString", PyvtkCurveGenerator_GetPolynomialPointSortingMethodFromString, METH_VARARGS,
   "GetPolynomialPointSortingMethodFromString(name:str) -> int\nC++: static int GetPolynomialPointSortingMethodFromString(\n    const char *name)\n\n"},
  {"SetPolynomialPointSortingMethodToIndex", PyvtkCurveGenerator_SetPolynomialPointSortingMethodToIndex, METH_VARARGS,
   "SetPolynomialPointSortingMethodToIndex(self) -> None\nC++: void SetPolynomialPointSortingMethodToIndex()\n\n"},
  {"SetPolynomialPointSortingMethodToMinimumSpanningTreePosition", PyvtkCurveGenerator_SetPolynomialPointSortingMethodToMinimumSpanningTreePosition, METH_VARARGS,
   "SetPolynomialPointSortingMethodToMinimumSpanningTreePosition(self)\n     -> None\nC++: void SetPolynomialPointSortingMethodToMinimumSpanningTreePosition(\n    )\n\n"},
  {"GetPolynomialFitMethod", PyvtkCurveGenerator_GetPolynomialFitMethod, METH_VARARGS,
   "GetPolynomialFitMethod(self) -> float\nC++: virtual double GetPolynomialFitMethod()\n\n"},
  {"SetPolynomialFitMethod", PyvtkCurveGenerator_SetPolynomialFitMethod, METH_VARARGS,
   "SetPolynomialFitMethod(self, _arg:float) -> None\nC++: virtual void SetPolynomialFitMethod(double _arg)\n\n"},
  {"GetPolynomialFitMethodAsString", PyvtkCurveGenerator_GetPolynomialFitMethodAsString, METH_VARARGS,
   "GetPolynomialFitMethodAsString(id:int) -> str\nC++: static const char *GetPolynomialFitMethodAsString(int id)\n\n"},
  {"GetPolynomialFitMethodFromString", PyvtkCurveGenerator_GetPolynomialFitMethodFromString, METH_VARARGS,
   "GetPolynomialFitMethodFromString(name:str) -> int\nC++: static int GetPolynomialFitMethodFromString(const char *name)\n\n"},
  {"SetPolynomialFitMethodToGlobalLeastSquares", PyvtkCurveGenerator_SetPolynomialFitMethodToGlobalLeastSquares, METH_VARARGS,
   "SetPolynomialFitMethodToGlobalLeastSquares(self) -> None\nC++: void SetPolynomialFitMethodToGlobalLeastSquares()\n\n"},
  {"SetPolynomialFitMethodToMovingLeastSquares", PyvtkCurveGenerator_SetPolynomialFitMethodToMovingLeastSquares, METH_VARARGS,
   "SetPolynomialFitMethodToMovingLeastSquares(self) -> None\nC++: void SetPolynomialFitMethodToMovingLeastSquares()\n\n"},
  {"GetPolynomialSampleWidth", PyvtkCurveGenerator_GetPolynomialSampleWidth, METH_VARARGS,
   "GetPolynomialSampleWidth(self) -> float\nC++: virtual double GetPolynomialSampleWidth()\n\nSet the sampling distance (in parameter space) for moving least\nsquares sampling\n"},
  {"SetPolynomialSampleWidth", PyvtkCurveGenerator_SetPolynomialSampleWidth, METH_VARARGS,
   "SetPolynomialSampleWidth(self, _arg:float) -> None\nC++: virtual void SetPolynomialSampleWidth(double _arg)\n\n"},
  {"GetPolynomialWeightFunction", PyvtkCurveGenerator_GetPolynomialWeightFunction, METH_VARARGS,
   "GetPolynomialWeightFunction(self) -> float\nC++: virtual double GetPolynomialWeightFunction()\n\n"},
  {"SetPolynomialWeightFunction", PyvtkCurveGenerator_SetPolynomialWeightFunction, METH_VARARGS,
   "SetPolynomialWeightFunction(self, _arg:float) -> None\nC++: virtual void SetPolynomialWeightFunction(double _arg)\n\n"},
  {"GetPolynomialWeightFunctionAsString", PyvtkCurveGenerator_GetPolynomialWeightFunctionAsString, METH_VARARGS,
   "GetPolynomialWeightFunctionAsString(id:int) -> str\nC++: static const char *GetPolynomialWeightFunctionAsString(\n    int id)\n\n"},
  {"GetPolynomialWeightFunctionFromString", PyvtkCurveGenerator_GetPolynomialWeightFunctionFromString, METH_VARARGS,
   "GetPolynomialWeightFunctionFromString(name:str) -> int\nC++: static int GetPolynomialWeightFunctionFromString(\n    const char *name)\n\n"},
  {"SetPolynomialWeightFunctionToRectangular", PyvtkCurveGenerator_SetPolynomialWeightFunctionToRectangular, METH_VARARGS,
   "SetPolynomialWeightFunctionToRectangular(self) -> None\nC++: void SetPolynomialWeightFunctionToRectangular()\n\n"},
  {"SetPolynomialWeightFunctionToTriangular", PyvtkCurveGenerator_SetPolynomialWeightFunctionToTriangular, METH_VARARGS,
   "SetPolynomialWeightFunctionToTriangular(self) -> None\nC++: void SetPolynomialWeightFunctionToTriangular()\n\n"},
  {"SetPolynomialWeightFunctionToCosine", PyvtkCurveGenerator_SetPolynomialWeightFunctionToCosine, METH_VARARGS,
   "SetPolynomialWeightFunctionToCosine(self) -> None\nC++: void SetPolynomialWeightFunctionToCosine()\n\n"},
  {"SetPolynomialWeightFunctionToGaussian", PyvtkCurveGenerator_SetPolynomialWeightFunctionToGaussian, METH_VARARGS,
   "SetPolynomialWeightFunctionToGaussian(self) -> None\nC++: void SetPolynomialWeightFunctionToGaussian()\n\n"},
  {"GetSurfaceCostFunctionType", PyvtkCurveGenerator_GetSurfaceCostFunctionType, METH_VARARGS,
   "GetSurfaceCostFunctionType(self) -> int\nC++: int GetSurfaceCostFunctionType()\n\nIf the surface scalars should be used to weight the distances in\nthe pathfinding algorithm\n"},
  {"SetSurfaceCostFunctionType", PyvtkCurveGenerator_SetSurfaceCostFunctionType, METH_VARARGS,
   "SetSurfaceCostFunctionType(self, surfaceCostFunctionType:int)\n    -> None\nC++: void SetSurfaceCostFunctionType(int surfaceCostFunctionType)\n\n"},
  {"GetControlPointIdFromInterpolatedPointId", PyvtkCurveGenerator_GetControlPointIdFromInterpolatedPointId, METH_VARARGS,
   "GetControlPointIdFromInterpolatedPointId(self,\n    interpolatedPointId:int) -> int\nC++: vtkIdType GetControlPointIdFromInterpolatedPointId(\n    vtkIdType interpolatedPointId)\n\nGet the control point id from the interpolated point id Currently\nonly works for shortest surface distance\n"},
  {"GetSurfacePointIds", PyvtkCurveGenerator_GetSurfacePointIds, METH_VARARGS,
   "GetSurfacePointIds(self) -> vtkIdList\nC++: vtkIdList *GetSurfacePointIds()\n\nGet the list of curve point ids on the surface mesh\n"},
  {"GetOutputCurveLength", PyvtkCurveGenerator_GetOutputCurveLength, METH_VARARGS,
   "GetOutputCurveLength(self) -> float\nC++: double GetOutputCurveLength()\n\nGet the length of the curve\n"},
  {"GetParametricFunction", PyvtkCurveGenerator_GetParametricFunction, METH_VARARGS,
   "GetParametricFunction(self) -> vtkParametricFunction\nC++: vtkParametricFunction *GetParametricFunction()\n\nThe internal instance of the current parametric function use of\nthe curve for other computations.\n"},
  {"SetInputPoints", PyvtkCurveGenerator_SetInputPoints, METH_VARARGS,
   "SetInputPoints(self, points:vtkPoints) -> None\nC++: void SetInputPoints(vtkPoints *points)\n\nSet the input control points\n"},
  {"GetOutputPoints", PyvtkCurveGenerator_GetOutputPoints, METH_VARARGS,
   "GetOutputPoints(self) -> vtkPoints\nC++: vtkPoints *GetOutputPoints()\n\nGet the output sampled points\n"},
  {"SortByIndex", PyvtkCurveGenerator_SortByIndex, METH_VARARGS,
   "SortByIndex(inputPoints:vtkPoints,\n    outputParameters:vtkDoubleArray) -> None\nC++: static void SortByIndex(vtkPoints *inputPoints,\n    vtkDoubleArray *outputParameters)\n\nCalculates point parameters for use in\nvtkParametricPolynomialApproximation The parameter values are\nbased on the point index and range from 0.0 at the start to 1.0\nat the end of the line.\n\\sa SortByMinimumSpanningTreePosition\n\\param inputPoints Input list of points. The points form a\n    continuous line from the first to last point.\n\\param outputParameters Parameters used by\n    vtkParametricPolynomialApproximation to approximate a\n    polynomial from the input points.\n"},
  {"SortByMinimumSpanningTreePosition", PyvtkCurveGenerator_SortByMinimumSpanningTreePosition, METH_VARARGS,
   "SortByMinimumSpanningTreePosition(inputPoints:vtkPoints,\n    outputParameters:vtkDoubleArray) -> None\nC++: static void SortByMinimumSpanningTreePosition(\n    vtkPoints *inputPoints, vtkDoubleArray *outputParameters)\n\nCalculates point parameters for use in\nvtkParametricPolynomialApproximation The parameter values are\ncalculated using the following algorithm:\n1. Construct an undirected graph as a 2D array\n2. Find the two vertices that are the farthest apart\n3. Run prim's algorithm on the graph\n4. Extract the \"trunk\" path from the last vertex to the first\n5. Based on the distance along that path, assign each vertex a\n   polynomial parameter value\n\\sa SortByIndex\n\\param inputPoints Input point cloud that should be sorted to\n    form a continuous line.\n\\param outputParameters Parameters used by\n    vtkParametricPolynomialApproximation to approximate a\n    polynomial from the input points.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCurveGenerator_Doc =
  "vtkCurveGenerator - Filter that generates curves between points of an\ninput polydata\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCurveGenerator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkAddonPython.vtkCurveGenerator", // tp_name
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
  PyvtkCurveGenerator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCurveGenerator_StaticNew()
{
  return vtkCurveGenerator::New();
}

PyObject *PyvtkCurveGenerator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCurveGenerator_Type, PyvtkCurveGenerator_Methods,
    "vtkCurveGenerator",
 &PyvtkCurveGenerator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 17; c++)
  {
    static const struct { const char *name; int value; }
      constants[17] = {
        { "CURVE_TYPE_LINEAR_SPLINE", vtkCurveGenerator::CURVE_TYPE_LINEAR_SPLINE },
        { "CURVE_TYPE_CARDINAL_SPLINE", vtkCurveGenerator::CURVE_TYPE_CARDINAL_SPLINE },
        { "CURVE_TYPE_KOCHANEK_SPLINE", vtkCurveGenerator::CURVE_TYPE_KOCHANEK_SPLINE },
        { "CURVE_TYPE_POLYNOMIAL", vtkCurveGenerator::CURVE_TYPE_POLYNOMIAL },
        { "CURVE_TYPE_SHORTEST_DISTANCE_ON_SURFACE", vtkCurveGenerator::CURVE_TYPE_SHORTEST_DISTANCE_ON_SURFACE },
        { "CURVE_TYPE_LAST", vtkCurveGenerator::CURVE_TYPE_LAST },
        { "SORTING_METHOD_INDEX", vtkCurveGenerator::SORTING_METHOD_INDEX },
        { "SORTING_METHOD_MINIMUM_SPANNING_TREE_POSITION", vtkCurveGenerator::SORTING_METHOD_MINIMUM_SPANNING_TREE_POSITION },
        { "SORTING_METHOD_LAST", vtkCurveGenerator::SORTING_METHOD_LAST },
        { "POLYNOMIAL_FIT_METHOD_GLOBAL_LEAST_SQUARES", vtkCurveGenerator::POLYNOMIAL_FIT_METHOD_GLOBAL_LEAST_SQUARES },
        { "POLYNOMIAL_FIT_METHOD_MOVING_LEAST_SQUARES", vtkCurveGenerator::POLYNOMIAL_FIT_METHOD_MOVING_LEAST_SQUARES },
        { "POLYNOMIAL_FIT_METHOD_LAST", vtkCurveGenerator::POLYNOMIAL_FIT_METHOD_LAST },
        { "POLYNOMIAL_WEIGHT_FUNCTION_RECTANGULAR", vtkCurveGenerator::POLYNOMIAL_WEIGHT_FUNCTION_RECTANGULAR },
        { "POLYNOMIAL_WEIGHT_FUNCTION_TRIANGULAR", vtkCurveGenerator::POLYNOMIAL_WEIGHT_FUNCTION_TRIANGULAR },
        { "POLYNOMIAL_WEIGHT_FUNCTION_COSINE", vtkCurveGenerator::POLYNOMIAL_WEIGHT_FUNCTION_COSINE },
        { "POLYNOMIAL_WEIGHT_FUNCTION_GAUSSIAN", vtkCurveGenerator::POLYNOMIAL_WEIGHT_FUNCTION_GAUSSIAN },
        { "POLYNOMIAL_WEIGHT_FUNCTION_LAST", vtkCurveGenerator::POLYNOMIAL_WEIGHT_FUNCTION_LAST },
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

void PyVTKAddFile_vtkCurveGenerator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCurveGenerator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCurveGenerator", o) != 0)
  {
    Py_DECREF(o);
  }

}

