// python wrapper for vtkParametricPolynomialApproximation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkParametricPolynomialApproximation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParametricPolynomialApproximation(PyObject *dict); }
extern "C" { PyObject *PyvtkParametricPolynomialApproximation_ClassNew(); }


static PyObject *
PyvtkParametricPolynomialApproximation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParametricPolynomialApproximation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricPolynomialApproximation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParametricPolynomialApproximation *tempr = vtkParametricPolynomialApproximation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricPolynomialApproximation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricPolynomialApproximation::NewInstance());

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
PyvtkParametricPolynomialApproximation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkParametricPolynomialApproximation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkParametricPolynomialApproximation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkParametricPolynomialApproximation::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->Evaluate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkParametricPolynomialApproximation::Evaluate(temp0, temp1, temp2);
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
PyvtkParametricPolynomialApproximation_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    double tempr = (ap.IsBound() ?
      op->EvaluateScalar(temp0, temp1, temp2) :
      op->vtkParametricPolynomialApproximation::EvaluateScalar(temp0, temp1, temp2));

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
PyvtkParametricPolynomialApproximation_GetPolynomialOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolynomialOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolynomialOrder() :
      op->vtkParametricPolynomialApproximation::GetPolynomialOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_SetPolynomialOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolynomialOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

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
      op->vtkParametricPolynomialApproximation::SetPolynomialOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetPoints(temp0);
    }
    else
    {
      op->vtkParametricPolynomialApproximation::SetPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_SetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->SetParameters(temp0);
    }
    else
    {
      op->vtkParametricPolynomialApproximation::SetParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_GetFitMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFitMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFitMethod() :
      op->vtkParametricPolynomialApproximation::GetFitMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_SetFitMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFitMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFitMethod(temp0);
    }
    else
    {
      op->vtkParametricPolynomialApproximation::SetFitMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_SetFitMethodToGlobalLeastSquares(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFitMethodToGlobalLeastSquares");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFitMethodToGlobalLeastSquares();
    }
    else
    {
      op->vtkParametricPolynomialApproximation::SetFitMethodToGlobalLeastSquares();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_SetFitMethodToMovingLeastSquares(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFitMethodToMovingLeastSquares");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFitMethodToMovingLeastSquares();
    }
    else
    {
      op->vtkParametricPolynomialApproximation::SetFitMethodToMovingLeastSquares();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_GetWeightFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWeightFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWeightFunction() :
      op->vtkParametricPolynomialApproximation::GetWeightFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_SetWeightFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeightFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWeightFunction(temp0);
    }
    else
    {
      op->vtkParametricPolynomialApproximation::SetWeightFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_SetWeightFunctionToRectangular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeightFunctionToRectangular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWeightFunctionToRectangular();
    }
    else
    {
      op->vtkParametricPolynomialApproximation::SetWeightFunctionToRectangular();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_SetWeightFunctionToTriangular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeightFunctionToTriangular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWeightFunctionToTriangular();
    }
    else
    {
      op->vtkParametricPolynomialApproximation::SetWeightFunctionToTriangular();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_SetWeightFunctionToCosine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeightFunctionToCosine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWeightFunctionToCosine();
    }
    else
    {
      op->vtkParametricPolynomialApproximation::SetWeightFunctionToCosine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_SetWeightFunctionToGaussian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeightFunctionToGaussian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWeightFunctionToGaussian();
    }
    else
    {
      op->vtkParametricPolynomialApproximation::SetWeightFunctionToGaussian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_GetSampleWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSampleWidth() :
      op->vtkParametricPolynomialApproximation::GetSampleWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricPolynomialApproximation_SetSampleWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricPolynomialApproximation *op = static_cast<vtkParametricPolynomialApproximation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSampleWidth(temp0);
    }
    else
    {
      op->vtkParametricPolynomialApproximation::SetSampleWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkParametricPolynomialApproximation_Methods[] = {
  {"IsTypeOf", PyvtkParametricPolynomialApproximation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParametricPolynomialApproximation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParametricPolynomialApproximation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkParametricPolynomialApproximation\nC++: static vtkParametricPolynomialApproximation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParametricPolynomialApproximation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkParametricPolynomialApproximation\nC++: vtkParametricPolynomialApproximation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkParametricPolynomialApproximation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkParametricPolynomialApproximation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDimension", PyvtkParametricPolynomialApproximation_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: int GetDimension() override;\n\nReturn the parametric dimension of the class.\n"},
  {"Evaluate", PyvtkParametricPolynomialApproximation_Evaluate, METH_VARARGS,
   "Evaluate(self, u:[float, float, float], Pt:[float, float, float],\n    Du:[float, float, float, float, float, float, float, float,\n    float]) -> None\nC++: void Evaluate(double u[3], double Pt[3], double Du[9])\n    override;\n\nEvaluate the parametric function at parametric coordinate u[0]\nreturning the point coordinate Pt[3].\n"},
  {"EvaluateScalar", PyvtkParametricPolynomialApproximation_EvaluateScalar, METH_VARARGS,
   "EvaluateScalar(self, u:[float, float, float], Pt:[float, float,\n    float], Du:[float, float, float, float, float, float, float,\n    float, float]) -> float\nC++: double EvaluateScalar(double u[3], double Pt[3],\n    double Du[9]) override;\n\nEvaluate a scalar value at parametric coordinate u[0] and Pt[3].\nSimply returns the parameter u[0].\n"},
  {"GetPolynomialOrder", PyvtkParametricPolynomialApproximation_GetPolynomialOrder, METH_VARARGS,
   "GetPolynomialOrder(self) -> int\nC++: virtual int GetPolynomialOrder()\n\nSpecify the order of polynomial (maximum exponent) that should be\nfit.\n"},
  {"SetPolynomialOrder", PyvtkParametricPolynomialApproximation_SetPolynomialOrder, METH_VARARGS,
   "SetPolynomialOrder(self, _arg:int) -> None\nC++: virtual void SetPolynomialOrder(int _arg)\n\nSpecify the order of polynomial (maximum exponent) that should be\nfit.\n"},
  {"SetPoints", PyvtkParametricPolynomialApproximation_SetPoints, METH_VARARGS,
   "SetPoints(self, __a:vtkPoints) -> None\nC++: void SetPoints(vtkPoints *)\n\nSpecify the list of points that the polynomial should\napproximate. Set the point parameters that should be used during\nfitting with SetParameters.\n"},
  {"SetParameters", PyvtkParametricPolynomialApproximation_SetParameters, METH_VARARGS,
   "SetParameters(self, __a:vtkDoubleArray) -> None\nC++: void SetParameters(vtkDoubleArray *)\n\nSpecify the parameters for the points. Length of list should be\nthe same, and the points should be in the same order as the\nparameters.\n"},
  {"GetFitMethod", PyvtkParametricPolynomialApproximation_GetFitMethod, METH_VARARGS,
   "GetFitMethod(self) -> int\nC++: virtual int GetFitMethod()\n\nWhat type of fit should be used (e.g. global/local)\n"},
  {"SetFitMethod", PyvtkParametricPolynomialApproximation_SetFitMethod, METH_VARARGS,
   "SetFitMethod(self, _arg:int) -> None\nC++: virtual void SetFitMethod(int _arg)\n\nWhat type of fit should be used (e.g. global/local)\n"},
  {"SetFitMethodToGlobalLeastSquares", PyvtkParametricPolynomialApproximation_SetFitMethodToGlobalLeastSquares, METH_VARARGS,
   "SetFitMethodToGlobalLeastSquares(self) -> None\nC++: void SetFitMethodToGlobalLeastSquares()\n\nWhat type of fit should be used (e.g. global/local)\n"},
  {"SetFitMethodToMovingLeastSquares", PyvtkParametricPolynomialApproximation_SetFitMethodToMovingLeastSquares, METH_VARARGS,
   "SetFitMethodToMovingLeastSquares(self) -> None\nC++: void SetFitMethodToMovingLeastSquares()\n\nWhat type of fit should be used (e.g. global/local)\n"},
  {"GetWeightFunction", PyvtkParametricPolynomialApproximation_GetWeightFunction, METH_VARARGS,
   "GetWeightFunction(self) -> int\nC++: virtual int GetWeightFunction()\n\nSpecify the order of polynomial (maximum exponent) that should be\nfit.\n"},
  {"SetWeightFunction", PyvtkParametricPolynomialApproximation_SetWeightFunction, METH_VARARGS,
   "SetWeightFunction(self, _arg:int) -> None\nC++: virtual void SetWeightFunction(int _arg)\n\nSpecify the order of polynomial (maximum exponent) that should be\nfit.\n"},
  {"SetWeightFunctionToRectangular", PyvtkParametricPolynomialApproximation_SetWeightFunctionToRectangular, METH_VARARGS,
   "SetWeightFunctionToRectangular(self) -> None\nC++: void SetWeightFunctionToRectangular()\n\nSpecify the order of polynomial (maximum exponent) that should be\nfit.\n"},
  {"SetWeightFunctionToTriangular", PyvtkParametricPolynomialApproximation_SetWeightFunctionToTriangular, METH_VARARGS,
   "SetWeightFunctionToTriangular(self) -> None\nC++: void SetWeightFunctionToTriangular()\n\nSpecify the order of polynomial (maximum exponent) that should be\nfit.\n"},
  {"SetWeightFunctionToCosine", PyvtkParametricPolynomialApproximation_SetWeightFunctionToCosine, METH_VARARGS,
   "SetWeightFunctionToCosine(self) -> None\nC++: void SetWeightFunctionToCosine()\n\nSpecify the order of polynomial (maximum exponent) that should be\nfit.\n"},
  {"SetWeightFunctionToGaussian", PyvtkParametricPolynomialApproximation_SetWeightFunctionToGaussian, METH_VARARGS,
   "SetWeightFunctionToGaussian(self) -> None\nC++: void SetWeightFunctionToGaussian()\n\nSpecify the order of polynomial (maximum exponent) that should be\nfit.\n"},
  {"GetSampleWidth", PyvtkParametricPolynomialApproximation_GetSampleWidth, METH_VARARGS,
   "GetSampleWidth(self) -> float\nC++: virtual double GetSampleWidth()\n\nThe width of sampling for moving least squares (in parameter\nspace) This is total width, so the space that is sampled is\nSamplePosition - ( SampleWidth / 2 ) through to SamplePosition +\n( SampleWidth / 2 ). Valid range is from 0.0 to 1.0. Default is\n0.5.\n"},
  {"SetSampleWidth", PyvtkParametricPolynomialApproximation_SetSampleWidth, METH_VARARGS,
   "SetSampleWidth(self, _arg:float) -> None\nC++: virtual void SetSampleWidth(double _arg)\n\nThe width of sampling for moving least squares (in parameter\nspace) This is total width, so the space that is sampled is\nSamplePosition - ( SampleWidth / 2 ) through to SamplePosition +\n( SampleWidth / 2 ). Valid range is from 0.0 to 1.0. Default is\n0.5.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkParametricPolynomialApproximation_Doc =
  "vtkParametricPolynomialApproximation - parametric function for 1D\npolynomials\n\n"
  "Superclass: vtkParametricFunction\n\n"
  "vtkParametricPolynomialApproximation is a parametric function for 1D\n"
  "approximating polynomials. vtkParametricPolynomialApproximation maps\n"
  "the single parameter u to a 3D point (x,y,z). Internally a polynomial\n"
  "is fit to a set of input points using the least squares basis.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParametricPolynomialApproximation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkAddonPython.vtkParametricPolynomialApproximation", // tp_name
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
  PyvtkParametricPolynomialApproximation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParametricPolynomialApproximation_StaticNew()
{
  return vtkParametricPolynomialApproximation::New();
}

PyObject *PyvtkParametricPolynomialApproximation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkParametricPolynomialApproximation_Type, PyvtkParametricPolynomialApproximation_Methods,
    "vtkParametricPolynomialApproximation",
 &PyvtkParametricPolynomialApproximation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkParametricFunction");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 8; c++)
  {
    static const struct { const char *name; int value; }
      constants[8] = {
        { "FIT_METHOD_GLOBAL_LEAST_SQUARES", vtkParametricPolynomialApproximation::FIT_METHOD_GLOBAL_LEAST_SQUARES },
        { "FIT_METHOD_MOVING_LEAST_SQUARES", vtkParametricPolynomialApproximation::FIT_METHOD_MOVING_LEAST_SQUARES },
        { "FIT_METHOD_LAST", vtkParametricPolynomialApproximation::FIT_METHOD_LAST },
        { "WEIGHT_FUNCTION_RECTANGULAR", vtkParametricPolynomialApproximation::WEIGHT_FUNCTION_RECTANGULAR },
        { "WEIGHT_FUNCTION_TRIANGULAR", vtkParametricPolynomialApproximation::WEIGHT_FUNCTION_TRIANGULAR },
        { "WEIGHT_FUNCTION_COSINE", vtkParametricPolynomialApproximation::WEIGHT_FUNCTION_COSINE },
        { "WEIGHT_FUNCTION_GAUSSIAN", vtkParametricPolynomialApproximation::WEIGHT_FUNCTION_GAUSSIAN },
        { "WEIGHT_FUNCTION_LAST", vtkParametricPolynomialApproximation::WEIGHT_FUNCTION_LAST },
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

void PyVTKAddFile_vtkParametricPolynomialApproximation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParametricPolynomialApproximation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParametricPolynomialApproximation", o) != 0)
  {
    Py_DECREF(o);
  }

}

