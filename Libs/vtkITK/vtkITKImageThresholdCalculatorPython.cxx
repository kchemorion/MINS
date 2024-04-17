// python wrapper for vtkITKImageThresholdCalculator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkITKImageThresholdCalculator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkITKImageThresholdCalculator(PyObject *dict); }
extern "C" { PyObject *PyvtkITKImageThresholdCalculator_ClassNew(); }


static PyObject *
PyvtkITKImageThresholdCalculator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkITKImageThresholdCalculator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkITKImageThresholdCalculator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkITKImageThresholdCalculator *tempr = vtkITKImageThresholdCalculator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkITKImageThresholdCalculator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkITKImageThresholdCalculator::NewInstance());

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
PyvtkITKImageThresholdCalculator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkITKImageThresholdCalculator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkITKImageThresholdCalculator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_GetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThreshold() :
      op->vtkITKImageThresholdCalculator::GetThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_SetMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMethod(temp0);
    }
    else
    {
      op->vtkITKImageThresholdCalculator::SetMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_GetMethodMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMethodMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMethodMinValue() :
      op->vtkITKImageThresholdCalculator::GetMethodMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_GetMethodMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMethodMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMethodMaxValue() :
      op->vtkITKImageThresholdCalculator::GetMethodMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_GetMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMethod() :
      op->vtkITKImageThresholdCalculator::GetMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_SetMethodToHuang(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMethodToHuang");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMethodToHuang();
    }
    else
    {
      op->vtkITKImageThresholdCalculator::SetMethodToHuang();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_SetMethodToIntermodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMethodToIntermodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMethodToIntermodes();
    }
    else
    {
      op->vtkITKImageThresholdCalculator::SetMethodToIntermodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_SetMethodToIsoData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMethodToIsoData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMethodToIsoData();
    }
    else
    {
      op->vtkITKImageThresholdCalculator::SetMethodToIsoData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_SetMethodToKittlerIllingworth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMethodToKittlerIllingworth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMethodToKittlerIllingworth();
    }
    else
    {
      op->vtkITKImageThresholdCalculator::SetMethodToKittlerIllingworth();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_SetMethodToLi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMethodToLi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMethodToLi();
    }
    else
    {
      op->vtkITKImageThresholdCalculator::SetMethodToLi();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_SetMethodToMaximumEntropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMethodToMaximumEntropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMethodToMaximumEntropy();
    }
    else
    {
      op->vtkITKImageThresholdCalculator::SetMethodToMaximumEntropy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_SetMethodToMoments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMethodToMoments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMethodToMoments();
    }
    else
    {
      op->vtkITKImageThresholdCalculator::SetMethodToMoments();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_SetMethodToOtsu(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMethodToOtsu");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMethodToOtsu();
    }
    else
    {
      op->vtkITKImageThresholdCalculator::SetMethodToOtsu();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_SetMethodToRenyiEntropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMethodToRenyiEntropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMethodToRenyiEntropy();
    }
    else
    {
      op->vtkITKImageThresholdCalculator::SetMethodToRenyiEntropy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_SetMethodToShanbhag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMethodToShanbhag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMethodToShanbhag();
    }
    else
    {
      op->vtkITKImageThresholdCalculator::SetMethodToShanbhag();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_SetMethodToTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMethodToTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMethodToTriangle();
    }
    else
    {
      op->vtkITKImageThresholdCalculator::SetMethodToTriangle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_SetMethodToYen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMethodToYen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMethodToYen();
    }
    else
    {
      op->vtkITKImageThresholdCalculator::SetMethodToYen();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_GetMethodAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMethodAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkITKImageThresholdCalculator::GetMethodAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageThresholdCalculator_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkITKImageThresholdCalculator::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkITKImageThresholdCalculator_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Update(temp0);
    }
    else
    {
      op->vtkITKImageThresholdCalculator::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkITKImageThresholdCalculator_Update_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  int temp0;
  vtkInformationVector *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformationVector"))
  {
    int tempr = (ap.IsBound() ?
      op->Update(temp0, temp1) :
      op->vtkITKImageThresholdCalculator::Update(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkITKImageThresholdCalculator_Update_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageThresholdCalculator *op = static_cast<vtkITKImageThresholdCalculator *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Update(temp0) :
      op->vtkITKImageThresholdCalculator::Update(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkITKImageThresholdCalculator_Update_Methods[] = {
  {"Update", PyvtkITKImageThresholdCalculator_Update_s2, METH_VARARGS,
   "@i"},
  {"Update", PyvtkITKImageThresholdCalculator_Update_s4, METH_VARARGS,
   "@V *vtkInformation"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkITKImageThresholdCalculator_Update(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkITKImageThresholdCalculator_Update_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkITKImageThresholdCalculator_Update_s1(self, args);
    case 2:
      return PyvtkITKImageThresholdCalculator_Update_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return nullptr;
}

static PyMethodDef PyvtkITKImageThresholdCalculator_Methods[] = {
  {"IsTypeOf", PyvtkITKImageThresholdCalculator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkITKImageThresholdCalculator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkITKImageThresholdCalculator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkITKImageThresholdCalculator\nC++: static vtkITKImageThresholdCalculator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkITKImageThresholdCalculator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkITKImageThresholdCalculator\nC++: vtkITKImageThresholdCalculator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkITKImageThresholdCalculator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkITKImageThresholdCalculator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetThreshold", PyvtkITKImageThresholdCalculator_GetThreshold, METH_VARARGS,
   "GetThreshold(self) -> float\nC++: virtual double GetThreshold()\n\n"},
  {"SetMethod", PyvtkITKImageThresholdCalculator_SetMethod, METH_VARARGS,
   "SetMethod(self, _arg:int) -> None\nC++: virtual void SetMethod(int _arg)\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"GetMethodMinValue", PyvtkITKImageThresholdCalculator_GetMethodMinValue, METH_VARARGS,
   "GetMethodMinValue(self) -> int\nC++: virtual int GetMethodMinValue()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"GetMethodMaxValue", PyvtkITKImageThresholdCalculator_GetMethodMaxValue, METH_VARARGS,
   "GetMethodMaxValue(self) -> int\nC++: virtual int GetMethodMaxValue()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"GetMethod", PyvtkITKImageThresholdCalculator_GetMethod, METH_VARARGS,
   "GetMethod(self) -> int\nC++: virtual int GetMethod()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"SetMethodToHuang", PyvtkITKImageThresholdCalculator_SetMethodToHuang, METH_VARARGS,
   "SetMethodToHuang(self) -> None\nC++: void SetMethodToHuang()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"SetMethodToIntermodes", PyvtkITKImageThresholdCalculator_SetMethodToIntermodes, METH_VARARGS,
   "SetMethodToIntermodes(self) -> None\nC++: void SetMethodToIntermodes()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"SetMethodToIsoData", PyvtkITKImageThresholdCalculator_SetMethodToIsoData, METH_VARARGS,
   "SetMethodToIsoData(self) -> None\nC++: void SetMethodToIsoData()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"SetMethodToKittlerIllingworth", PyvtkITKImageThresholdCalculator_SetMethodToKittlerIllingworth, METH_VARARGS,
   "SetMethodToKittlerIllingworth(self) -> None\nC++: void SetMethodToKittlerIllingworth()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"SetMethodToLi", PyvtkITKImageThresholdCalculator_SetMethodToLi, METH_VARARGS,
   "SetMethodToLi(self) -> None\nC++: void SetMethodToLi()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"SetMethodToMaximumEntropy", PyvtkITKImageThresholdCalculator_SetMethodToMaximumEntropy, METH_VARARGS,
   "SetMethodToMaximumEntropy(self) -> None\nC++: void SetMethodToMaximumEntropy()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"SetMethodToMoments", PyvtkITKImageThresholdCalculator_SetMethodToMoments, METH_VARARGS,
   "SetMethodToMoments(self) -> None\nC++: void SetMethodToMoments()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"SetMethodToOtsu", PyvtkITKImageThresholdCalculator_SetMethodToOtsu, METH_VARARGS,
   "SetMethodToOtsu(self) -> None\nC++: void SetMethodToOtsu()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"SetMethodToRenyiEntropy", PyvtkITKImageThresholdCalculator_SetMethodToRenyiEntropy, METH_VARARGS,
   "SetMethodToRenyiEntropy(self) -> None\nC++: void SetMethodToRenyiEntropy()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"SetMethodToShanbhag", PyvtkITKImageThresholdCalculator_SetMethodToShanbhag, METH_VARARGS,
   "SetMethodToShanbhag(self) -> None\nC++: void SetMethodToShanbhag()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"SetMethodToTriangle", PyvtkITKImageThresholdCalculator_SetMethodToTriangle, METH_VARARGS,
   "SetMethodToTriangle(self) -> None\nC++: void SetMethodToTriangle()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"SetMethodToYen", PyvtkITKImageThresholdCalculator_SetMethodToYen, METH_VARARGS,
   "SetMethodToYen(self) -> None\nC++: void SetMethodToYen()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"GetMethodAsString", PyvtkITKImageThresholdCalculator_GetMethodAsString, METH_VARARGS,
   "GetMethodAsString(method:int) -> str\nC++: static const char *GetMethodAsString(int method)\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"Update", PyvtkITKImageThresholdCalculator_Update, METH_VARARGS,
   "Update(self) -> None\nC++: void Update() override;\nUpdate(self, port:int) -> None\nC++: virtual void Update(int port)\nUpdate(self, port:int, requests:vtkInformationVector) -> int\nC++: virtual vtkTypeBool Update(int port,\n    vtkInformationVector *requests)\nUpdate(self, requests:vtkInformation) -> int\nC++: virtual vtkTypeBool Update(vtkInformation *requests)\n\nThe main interface which triggers the writer to start.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkITKImageThresholdCalculator_Doc =
  "vtkITKImageThresholdCalculator - no description provided.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkITKImageThresholdCalculator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkITKPython.vtkITKImageThresholdCalculator", // tp_name
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
  PyvtkITKImageThresholdCalculator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkITKImageThresholdCalculator_StaticNew()
{
  return vtkITKImageThresholdCalculator::New();
}

PyObject *PyvtkITKImageThresholdCalculator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkITKImageThresholdCalculator_Type, PyvtkITKImageThresholdCalculator_Methods,
    "vtkITKImageThresholdCalculator",
 &PyvtkITKImageThresholdCalculator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 13; c++)
  {
    static const struct { const char *name; int value; }
      constants[13] = {
        { "METHOD_HUANG", vtkITKImageThresholdCalculator::METHOD_HUANG },
        { "METHOD_INTERMODES", vtkITKImageThresholdCalculator::METHOD_INTERMODES },
        { "METHOD_ISO_DATA", vtkITKImageThresholdCalculator::METHOD_ISO_DATA },
        { "METHOD_KITTLER_ILLINGWORTH", vtkITKImageThresholdCalculator::METHOD_KITTLER_ILLINGWORTH },
        { "METHOD_LI", vtkITKImageThresholdCalculator::METHOD_LI },
        { "METHOD_MAXIMUM_ENTROPY", vtkITKImageThresholdCalculator::METHOD_MAXIMUM_ENTROPY },
        { "METHOD_MOMENTS", vtkITKImageThresholdCalculator::METHOD_MOMENTS },
        { "METHOD_OTSU", vtkITKImageThresholdCalculator::METHOD_OTSU },
        { "METHOD_RENYI_ENTROPY", vtkITKImageThresholdCalculator::METHOD_RENYI_ENTROPY },
        { "METHOD_SHANBHAG", vtkITKImageThresholdCalculator::METHOD_SHANBHAG },
        { "METHOD_TRIANGLE", vtkITKImageThresholdCalculator::METHOD_TRIANGLE },
        { "METHOD_YEN", vtkITKImageThresholdCalculator::METHOD_YEN },
        { "NUMBER_OF_METHODS", vtkITKImageThresholdCalculator::NUMBER_OF_METHODS },
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

void PyVTKAddFile_vtkITKImageThresholdCalculator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkITKImageThresholdCalculator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkITKImageThresholdCalculator", o) != 0)
  {
    Py_DECREF(o);
  }

}

