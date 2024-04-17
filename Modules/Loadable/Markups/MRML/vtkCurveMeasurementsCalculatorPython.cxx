// python wrapper for vtkCurveMeasurementsCalculator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCurveMeasurementsCalculator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCurveMeasurementsCalculator(PyObject *dict); }
extern "C" { PyObject *PyvtkCurveMeasurementsCalculator_ClassNew(); }


static PyObject *
PyvtkCurveMeasurementsCalculator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCurveMeasurementsCalculator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCurveMeasurementsCalculator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCurveMeasurementsCalculator *tempr = vtkCurveMeasurementsCalculator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCurveMeasurementsCalculator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCurveMeasurementsCalculator::NewInstance());

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
PyvtkCurveMeasurementsCalculator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCurveMeasurementsCalculator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCurveMeasurementsCalculator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_SetInputMarkupsMRMLNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputMarkupsMRMLNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode"))
  {
    if (ap.IsBound())
    {
      op->SetInputMarkupsMRMLNode(temp0);
    }
    else
    {
      op->vtkCurveMeasurementsCalculator::SetInputMarkupsMRMLNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_GetInputMarkupsMRMLNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputMarkupsMRMLNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsNode *tempr = (ap.IsBound() ?
      op->GetInputMarkupsMRMLNode() :
      op->vtkCurveMeasurementsCalculator::GetInputMarkupsMRMLNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_SetCurveIsClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveIsClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

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
      op->vtkCurveMeasurementsCalculator::SetCurveIsClosed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_GetCurveIsClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveIsClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCurveIsClosed() :
      op->vtkCurveMeasurementsCalculator::GetCurveIsClosed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_CurveIsClosedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CurveIsClosedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CurveIsClosedOn();
    }
    else
    {
      op->vtkCurveMeasurementsCalculator::CurveIsClosedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_CurveIsClosedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CurveIsClosedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CurveIsClosedOff();
    }
    else
    {
      op->vtkCurveMeasurementsCalculator::CurveIsClosedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_SetCalculateCurvature(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalculateCurvature");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCalculateCurvature(temp0);
    }
    else
    {
      op->vtkCurveMeasurementsCalculator::SetCalculateCurvature(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_GetCalculateCurvature(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalculateCurvature");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCalculateCurvature() :
      op->vtkCurveMeasurementsCalculator::GetCalculateCurvature());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_CalculateCurvatureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateCurvatureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateCurvatureOn();
    }
    else
    {
      op->vtkCurveMeasurementsCalculator::CalculateCurvatureOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_CalculateCurvatureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateCurvatureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateCurvatureOff();
    }
    else
    {
      op->vtkCurveMeasurementsCalculator::CalculateCurvatureOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_GetMeanCurvatureName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMeanCurvatureName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkCurveMeasurementsCalculator::GetMeanCurvatureName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_GetMaxCurvatureName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMaxCurvatureName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkCurveMeasurementsCalculator::GetMaxCurvatureName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_GetCurvatureArrayName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCurvatureArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkCurveMeasurementsCalculator::GetCurvatureArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_GetCurvatureUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurvatureUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCurvatureUnits() :
      op->vtkCurveMeasurementsCalculator::GetCurvatureUnits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_SetCurvatureUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurvatureUnits(temp0);
    }
    else
    {
      op->vtkCurveMeasurementsCalculator::SetCurvatureUnits(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_SetCalculateTorsion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalculateTorsion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCalculateTorsion(temp0);
    }
    else
    {
      op->vtkCurveMeasurementsCalculator::SetCalculateTorsion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_GetCalculateTorsion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalculateTorsion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCalculateTorsion() :
      op->vtkCurveMeasurementsCalculator::GetCalculateTorsion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_CalculateTorsionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateTorsionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateTorsionOn();
    }
    else
    {
      op->vtkCurveMeasurementsCalculator::CalculateTorsionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_CalculateTorsionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateTorsionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateTorsionOff();
    }
    else
    {
      op->vtkCurveMeasurementsCalculator::CalculateTorsionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_GetMeanTorsionName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMeanTorsionName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkCurveMeasurementsCalculator::GetMeanTorsionName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_GetMaxTorsionName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMaxTorsionName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkCurveMeasurementsCalculator::GetMaxTorsionName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_GetTorsionArrayName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTorsionArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkCurveMeasurementsCalculator::GetTorsionArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_GetTorsionUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTorsionUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetTorsionUnits() :
      op->vtkCurveMeasurementsCalculator::GetTorsionUnits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_SetTorsionUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTorsionUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTorsionUnits(temp0);
    }
    else
    {
      op->vtkCurveMeasurementsCalculator::SetTorsionUnits(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurveMeasurementsCalculator *op = static_cast<vtkCurveMeasurementsCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkCurveMeasurementsCalculator::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurveMeasurementsCalculator_InterpolateArray(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolateArray");

  vtkDoubleArray *temp0 = nullptr;
  bool temp1 = false;
  vtkDoubleArray *temp2 = nullptr;
  vtkDoubleArray *temp3 = nullptr;
  double temp4 = 1.0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDoubleArray") &&
      ap.GetVTKObject(temp3, "vtkDoubleArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    bool tempr = vtkCurveMeasurementsCalculator::InterpolateArray(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCurveMeasurementsCalculator_Methods[] = {
  {"IsTypeOf", PyvtkCurveMeasurementsCalculator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCurveMeasurementsCalculator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCurveMeasurementsCalculator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCurveMeasurementsCalculator\nC++: static vtkCurveMeasurementsCalculator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCurveMeasurementsCalculator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCurveMeasurementsCalculator\nC++: vtkCurveMeasurementsCalculator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCurveMeasurementsCalculator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCurveMeasurementsCalculator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputMarkupsMRMLNode", PyvtkCurveMeasurementsCalculator_SetInputMarkupsMRMLNode, METH_VARARGS,
   "SetInputMarkupsMRMLNode(self, node:vtkMRMLMarkupsNode) -> None\nC++: void SetInputMarkupsMRMLNode(vtkMRMLMarkupsNode *node)\n\nSet/Get measurement collection. The measurements that are enabled\nand contain control point data are used for interpolation\n"},
  {"GetInputMarkupsMRMLNode", PyvtkCurveMeasurementsCalculator_GetInputMarkupsMRMLNode, METH_VARARGS,
   "GetInputMarkupsMRMLNode(self) -> vtkMRMLMarkupsNode\nC++: vtkMRMLMarkupsNode *GetInputMarkupsMRMLNode()\n\nSet/Get measurement collection. The measurements that are enabled\nand contain control point data are used for interpolation\n"},
  {"SetCurveIsClosed", PyvtkCurveMeasurementsCalculator_SetCurveIsClosed, METH_VARARGS,
   "SetCurveIsClosed(self, _arg:bool) -> None\nC++: virtual void SetCurveIsClosed(bool _arg)\n\nThis indicates whether the curve loops back in on itself,\nconnecting the last point back to the first point (disabled by\ndefault).\n"},
  {"GetCurveIsClosed", PyvtkCurveMeasurementsCalculator_GetCurveIsClosed, METH_VARARGS,
   "GetCurveIsClosed(self) -> bool\nC++: virtual bool GetCurveIsClosed()\n\nThis indicates whether the curve loops back in on itself,\nconnecting the last point back to the first point (disabled by\ndefault).\n"},
  {"CurveIsClosedOn", PyvtkCurveMeasurementsCalculator_CurveIsClosedOn, METH_VARARGS,
   "CurveIsClosedOn(self) -> None\nC++: virtual void CurveIsClosedOn()\n\nThis indicates whether the curve loops back in on itself,\nconnecting the last point back to the first point (disabled by\ndefault).\n"},
  {"CurveIsClosedOff", PyvtkCurveMeasurementsCalculator_CurveIsClosedOff, METH_VARARGS,
   "CurveIsClosedOff(self) -> None\nC++: virtual void CurveIsClosedOff()\n\nThis indicates whether the curve loops back in on itself,\nconnecting the last point back to the first point (disabled by\ndefault).\n"},
  {"SetCalculateCurvature", PyvtkCurveMeasurementsCalculator_SetCalculateCurvature, METH_VARARGS,
   "SetCalculateCurvature(self, _arg:bool) -> None\nC++: virtual void SetCalculateCurvature(bool _arg)\n\nSet/Get flag determining whether to calculate curvature\n"},
  {"GetCalculateCurvature", PyvtkCurveMeasurementsCalculator_GetCalculateCurvature, METH_VARARGS,
   "GetCalculateCurvature(self) -> bool\nC++: virtual bool GetCalculateCurvature()\n\nSet/Get flag determining whether to calculate curvature\n"},
  {"CalculateCurvatureOn", PyvtkCurveMeasurementsCalculator_CalculateCurvatureOn, METH_VARARGS,
   "CalculateCurvatureOn(self) -> None\nC++: virtual void CalculateCurvatureOn()\n\nSet/Get flag determining whether to calculate curvature\n"},
  {"CalculateCurvatureOff", PyvtkCurveMeasurementsCalculator_CalculateCurvatureOff, METH_VARARGS,
   "CalculateCurvatureOff(self) -> None\nC++: virtual void CalculateCurvatureOff()\n\nSet/Get flag determining whether to calculate curvature\n"},
  {"GetMeanCurvatureName", PyvtkCurveMeasurementsCalculator_GetMeanCurvatureName, METH_VARARGS,
   "GetMeanCurvatureName() -> str\nC++: static const char *GetMeanCurvatureName()\n\nGet name of mean curvature measurement\n"},
  {"GetMaxCurvatureName", PyvtkCurveMeasurementsCalculator_GetMaxCurvatureName, METH_VARARGS,
   "GetMaxCurvatureName() -> str\nC++: static const char *GetMaxCurvatureName()\n\nGet name of max curvature measurement\n"},
  {"GetCurvatureArrayName", PyvtkCurveMeasurementsCalculator_GetCurvatureArrayName, METH_VARARGS,
   "GetCurvatureArrayName() -> str\nC++: static const char *GetCurvatureArrayName()\n\nGet name of curvature values array (on the curve points)\n"},
  {"GetCurvatureUnits", PyvtkCurveMeasurementsCalculator_GetCurvatureUnits, METH_VARARGS,
   "GetCurvatureUnits(self) -> str\nC++: virtual std::string GetCurvatureUnits()\n\n"},
  {"SetCurvatureUnits", PyvtkCurveMeasurementsCalculator_SetCurvatureUnits, METH_VARARGS,
   "SetCurvatureUnits(self, _arg:str) -> None\nC++: virtual void SetCurvatureUnits(std::string _arg)\n\n"},
  {"SetCalculateTorsion", PyvtkCurveMeasurementsCalculator_SetCalculateTorsion, METH_VARARGS,
   "SetCalculateTorsion(self, _arg:bool) -> None\nC++: virtual void SetCalculateTorsion(bool _arg)\n\nSet/Get flag determining whether to calculate torsion\n"},
  {"GetCalculateTorsion", PyvtkCurveMeasurementsCalculator_GetCalculateTorsion, METH_VARARGS,
   "GetCalculateTorsion(self) -> bool\nC++: virtual bool GetCalculateTorsion()\n\nSet/Get flag determining whether to calculate torsion\n"},
  {"CalculateTorsionOn", PyvtkCurveMeasurementsCalculator_CalculateTorsionOn, METH_VARARGS,
   "CalculateTorsionOn(self) -> None\nC++: virtual void CalculateTorsionOn()\n\nSet/Get flag determining whether to calculate torsion\n"},
  {"CalculateTorsionOff", PyvtkCurveMeasurementsCalculator_CalculateTorsionOff, METH_VARARGS,
   "CalculateTorsionOff(self) -> None\nC++: virtual void CalculateTorsionOff()\n\nSet/Get flag determining whether to calculate torsion\n"},
  {"GetMeanTorsionName", PyvtkCurveMeasurementsCalculator_GetMeanTorsionName, METH_VARARGS,
   "GetMeanTorsionName() -> str\nC++: static const char *GetMeanTorsionName()\n\nGet name of mean torsion measurement\n"},
  {"GetMaxTorsionName", PyvtkCurveMeasurementsCalculator_GetMaxTorsionName, METH_VARARGS,
   "GetMaxTorsionName() -> str\nC++: static const char *GetMaxTorsionName()\n\nGet name of max torsion measurement\n"},
  {"GetTorsionArrayName", PyvtkCurveMeasurementsCalculator_GetTorsionArrayName, METH_VARARGS,
   "GetTorsionArrayName() -> str\nC++: static const char *GetTorsionArrayName()\n\nGet name of torsion array (on the curve points)\n"},
  {"GetTorsionUnits", PyvtkCurveMeasurementsCalculator_GetTorsionUnits, METH_VARARGS,
   "GetTorsionUnits(self) -> str\nC++: virtual std::string GetTorsionUnits()\n\n"},
  {"SetTorsionUnits", PyvtkCurveMeasurementsCalculator_SetTorsionUnits, METH_VARARGS,
   "SetTorsionUnits(self, _arg:str) -> None\nC++: virtual void SetTorsionUnits(std::string _arg)\n\n"},
  {"GetMTime", PyvtkCurveMeasurementsCalculator_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn this object's modified time.\n"},
  {"InterpolateArray", PyvtkCurveMeasurementsCalculator_InterpolateArray, METH_VARARGS,
   "InterpolateArray(inputValues:vtkDoubleArray, closedCurve:bool,\n    interpolatedValues:vtkDoubleArray,\n    pedigreeIdsArray:vtkDoubleArray,\n    pedigreeIdsValueScale:float=1.0) -> bool\nC++: static bool InterpolateArray(vtkDoubleArray *inputValues,\n    bool closedCurve, vtkDoubleArray *interpolatedValues,\n    vtkDoubleArray *pedigreeIdsArray,\n    double pedigreeIdsValueScale=1.0)\n\nStore interpolated values of inputValues in interpolatedValues,\nusing indices pedigreeIdsArray. pedigreeIdsValueScale is applied\nto values of pedigreeIdsArray, which can be used for converting\nbetween indices of curve points and curve control points.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCurveMeasurementsCalculator_Doc =
  "vtkCurveMeasurementsCalculator - Filter that calculates\nper-curve-point measurements for markups curves.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "- Interpolate control point measurements into curve point data\n"
  "- Calculate per-curve-point curvature (disabled by default)\n"
  "- Calculate per-curve-point torsion (disabled by default)\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCurveMeasurementsCalculator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkCurveMeasurementsCalculator", // tp_name
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
  PyvtkCurveMeasurementsCalculator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCurveMeasurementsCalculator_StaticNew()
{
  return vtkCurveMeasurementsCalculator::New();
}

PyObject *PyvtkCurveMeasurementsCalculator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCurveMeasurementsCalculator_Type, PyvtkCurveMeasurementsCalculator_Methods,
    "vtkCurveMeasurementsCalculator",
 &PyvtkCurveMeasurementsCalculator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCurveMeasurementsCalculator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCurveMeasurementsCalculator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCurveMeasurementsCalculator", o) != 0)
  {
    Py_DECREF(o);
  }

}

