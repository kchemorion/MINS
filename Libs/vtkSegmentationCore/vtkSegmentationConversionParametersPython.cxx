// python wrapper for vtkSegmentationConversionParameters
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSegmentationConversionParameters.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSegmentationConversionParameters(PyObject *dict); }
extern "C" { PyObject *PyvtkSegmentationConversionParameters_ClassNew(); }


static PyObject *
PyvtkSegmentationConversionParameters_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSegmentationConversionParameters::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionParameters_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSegmentationConversionParameters::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionParameters_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSegmentationConversionParameters *tempr = vtkSegmentationConversionParameters::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionParameters_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegmentationConversionParameters *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSegmentationConversionParameters::NewInstance());

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
PyvtkSegmentationConversionParameters_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSegmentationConversionParameters::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionParameters_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSegmentationConversionParameters::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionParameters_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfParameters()),
                      "0 <= index && index < GetNumberOfParameters()"))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetName(temp0) :
      op->vtkSegmentationConversionParameters::GetName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionParameters_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  int temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfParameters()),
                      "0 <= index && index < GetNumberOfParameters()"))
  {
    if (ap.IsBound())
    {
      op->SetName(temp0, temp1);
    }
    else
    {
      op->vtkSegmentationConversionParameters::SetName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionParameters_GetDescription_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfParameters()),
                      "0 <= index && index < GetNumberOfParameters()"))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDescription(temp0) :
      op->vtkSegmentationConversionParameters::GetDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSegmentationConversionParameters_GetDescription_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDescription(temp0) :
      op->vtkSegmentationConversionParameters::GetDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSegmentationConversionParameters_GetDescription_Methods[] = {
  {"GetDescription", PyvtkSegmentationConversionParameters_GetDescription_s1, METH_VARARGS,
   "@i"},
  {"GetDescription", PyvtkSegmentationConversionParameters_GetDescription_s2, METH_VARARGS,
   "@s"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSegmentationConversionParameters_GetDescription(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSegmentationConversionParameters_GetDescription_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDescription");
  return nullptr;
}


static PyObject *
PyvtkSegmentationConversionParameters_SetDescription_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  int temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfParameters()),
                      "0 <= index && index < GetNumberOfParameters()"))
  {
    if (ap.IsBound())
    {
      op->SetDescription(temp0, temp1);
    }
    else
    {
      op->vtkSegmentationConversionParameters::SetDescription(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSegmentationConversionParameters_SetDescription_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDescription(temp0, temp1);
    }
    else
    {
      op->vtkSegmentationConversionParameters::SetDescription(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSegmentationConversionParameters_SetDescription_Methods[] = {
  {"SetDescription", PyvtkSegmentationConversionParameters_SetDescription_s1, METH_VARARGS,
   "@is"},
  {"SetDescription", PyvtkSegmentationConversionParameters_SetDescription_s2, METH_VARARGS,
   "@ss"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSegmentationConversionParameters_SetDescription(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSegmentationConversionParameters_SetDescription_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDescription");
  return nullptr;
}


static PyObject *
PyvtkSegmentationConversionParameters_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfParameters()),
                      "0 <= index && index < GetNumberOfParameters()"))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSegmentationConversionParameters::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSegmentationConversionParameters_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSegmentationConversionParameters::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSegmentationConversionParameters_GetValue_Methods[] = {
  {"GetValue", PyvtkSegmentationConversionParameters_GetValue_s1, METH_VARARGS,
   "@i"},
  {"GetValue", PyvtkSegmentationConversionParameters_GetValue_s2, METH_VARARGS,
   "@s"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSegmentationConversionParameters_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSegmentationConversionParameters_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}


static PyObject *
PyvtkSegmentationConversionParameters_GetValueAsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValueAsDouble(temp0) :
      op->vtkSegmentationConversionParameters::GetValueAsDouble(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionParameters_GetValueAsInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueAsInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetValueAsInt(temp0) :
      op->vtkSegmentationConversionParameters::GetValueAsInt(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionParameters_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  int temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfParameters()),
                      "0 <= index && index < GetNumberOfParameters()"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSegmentationConversionParameters::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSegmentationConversionParameters_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSegmentationConversionParameters::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSegmentationConversionParameters_SetValue_Methods[] = {
  {"SetValue", PyvtkSegmentationConversionParameters_SetValue_s1, METH_VARARGS,
   "@is"},
  {"SetValue", PyvtkSegmentationConversionParameters_SetValue_s2, METH_VARARGS,
   "@ss"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSegmentationConversionParameters_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSegmentationConversionParameters_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}


static PyObject *
PyvtkSegmentationConversionParameters_GetIndexFromName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexFromName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndexFromName(temp0) :
      op->vtkSegmentationConversionParameters::GetIndexFromName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionParameters_GetNumberOfParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfParameters() :
      op->vtkSegmentationConversionParameters::GetNumberOfParameters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionParameters_RemoveAllParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllParameters();
    }
    else
    {
      op->vtkSegmentationConversionParameters::RemoveAllParameters();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionParameters_RemoveParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfParameters()),
                      "0 <= index && index < GetNumberOfParameters()"))
  {
    if (ap.IsBound())
    {
      op->RemoveParameter(temp0);
    }
    else
    {
      op->vtkSegmentationConversionParameters::RemoveParameter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionParameters_SetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  std::string temp0;
  std::string temp1;
  std::string temp2 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->SetParameter(temp0, temp1, temp2) :
      op->vtkSegmentationConversionParameters::SetParameter(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionParameters_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  vtkSegmentationConversionParameters *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentationConversionParameters"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkSegmentationConversionParameters::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionParameters_CopyParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionParameters *op = static_cast<vtkSegmentationConversionParameters *>(vp);

  vtkSegmentationConversionParameters *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSegmentationConversionParameters") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CopyParameter(temp0, temp1);
    }
    else
    {
      op->vtkSegmentationConversionParameters::CopyParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSegmentationConversionParameters_Methods[] = {
  {"IsTypeOf", PyvtkSegmentationConversionParameters_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSegmentationConversionParameters_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSegmentationConversionParameters_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkSegmentationConversionParameters\nC++: static vtkSegmentationConversionParameters *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSegmentationConversionParameters_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSegmentationConversionParameters\nC++: vtkSegmentationConversionParameters *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSegmentationConversionParameters_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSegmentationConversionParameters_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetName", PyvtkSegmentationConversionParameters_GetName, METH_VARARGS,
   "GetName(self, index:int) -> str\nC++: std::string GetName(int index)\n\nGet/Set parameter name\n"},
  {"SetName", PyvtkSegmentationConversionParameters_SetName, METH_VARARGS,
   "SetName(self, index:int, name:str) -> None\nC++: void SetName(int index, const std::string &name)\n\n"},
  {"GetDescription", PyvtkSegmentationConversionParameters_GetDescription, METH_VARARGS,
   "GetDescription(self, index:int) -> str\nC++: std::string GetDescription(int index)\nGetDescription(self, name:str) -> str\nC++: std::string GetDescription(const std::string &name)\n\nGet/Set parameter description\n"},
  {"SetDescription", PyvtkSegmentationConversionParameters_SetDescription, METH_VARARGS,
   "SetDescription(self, index:int, description:str) -> None\nC++: void SetDescription(int index,\n    const std::string &description)\nSetDescription(self, name:str, description:str) -> None\nC++: void SetDescription(const std::string &name,\n    const std::string &description)\n\n"},
  {"GetValue", PyvtkSegmentationConversionParameters_GetValue, METH_VARARGS,
   "GetValue(self, index:int) -> str\nC++: std::string GetValue(int index)\nGetValue(self, name:str) -> str\nC++: std::string GetValue(const std::string &name)\n\nGet/Set parameter default value\n"},
  {"GetValueAsDouble", PyvtkSegmentationConversionParameters_GetValueAsDouble, METH_VARARGS,
   "GetValueAsDouble(self, name:str) -> float\nC++: double GetValueAsDouble(const std::string &name)\n\n"},
  {"GetValueAsInt", PyvtkSegmentationConversionParameters_GetValueAsInt, METH_VARARGS,
   "GetValueAsInt(self, name:str) -> int\nC++: int GetValueAsInt(const std::string &name)\n\n"},
  {"SetValue", PyvtkSegmentationConversionParameters_SetValue, METH_VARARGS,
   "SetValue(self, index:int, value:str) -> None\nC++: void SetValue(int index, const std::string &value)\nSetValue(self, name:str, value:str) -> None\nC++: void SetValue(const std::string &name,\n    const std::string &value)\n\n"},
  {"GetIndexFromName", PyvtkSegmentationConversionParameters_GetIndexFromName, METH_VARARGS,
   "GetIndexFromName(self, name:str) -> int\nC++: int GetIndexFromName(const std::string name)\n\nGet parameter index from name. Returns -1 if parameter is not\nfound.\n"},
  {"GetNumberOfParameters", PyvtkSegmentationConversionParameters_GetNumberOfParameters, METH_VARARGS,
   "GetNumberOfParameters(self) -> int\nC++: int GetNumberOfParameters()\n\nReturn number of parameters\n"},
  {"RemoveAllParameters", PyvtkSegmentationConversionParameters_RemoveAllParameters, METH_VARARGS,
   "RemoveAllParameters(self) -> None\nC++: void RemoveAllParameters()\n\nDelete all parameters\n"},
  {"RemoveParameter", PyvtkSegmentationConversionParameters_RemoveParameter, METH_VARARGS,
   "RemoveParameter(self, index:int) -> None\nC++: void RemoveParameter(int index)\n\nDelete parameter\n"},
  {"SetParameter", PyvtkSegmentationConversionParameters_SetParameter, METH_VARARGS,
   "SetParameter(self, name:str, value:str, description:str=...)\n    -> int\nC++: int SetParameter(const std::string &name,\n    const std::string &value, const std::string &description=\"\")\n\nSet a conversion parameter\n"},
  {"DeepCopy", PyvtkSegmentationConversionParameters_DeepCopy, METH_VARARGS,
   "DeepCopy(self, source:vtkSegmentationConversionParameters) -> None\nC++: void DeepCopy(vtkSegmentationConversionParameters *source)\n\nReplace parameters with content of another parameter list\n"},
  {"CopyParameter", PyvtkSegmentationConversionParameters_CopyParameter, METH_VARARGS,
   "CopyParameter(self, source:vtkSegmentationConversionParameters,\n    sourceIndex:int) -> None\nC++: void CopyParameter(\n    vtkSegmentationConversionParameters *source, int sourceIndex)\n\nReplace parameters with content of another parameter list\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSegmentationConversionParameters_Doc =
  "vtkSegmentationConversionParameters - Store a list of conversion\nparameters.\n\n"
  "Superclass: vtkObject\n\n"
  "\\details Stores properties, such as name, description (that may be\n"
  "displayed as tooltip in the GUI) and value (current value or default\n"
  "value) of multiple segmentation conversion parameters.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSegmentationConversionParameters_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkSegmentationConversionParameters", // tp_name
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
  PyvtkSegmentationConversionParameters_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSegmentationConversionParameters_StaticNew()
{
  return vtkSegmentationConversionParameters::New();
}

PyObject *PyvtkSegmentationConversionParameters_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSegmentationConversionParameters_Type, PyvtkSegmentationConversionParameters_Methods,
    "vtkSegmentationConversionParameters",
 &PyvtkSegmentationConversionParameters_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSegmentationConversionParameters(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSegmentationConversionParameters_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSegmentationConversionParameters", o) != 0)
  {
    Py_DECREF(o);
  }

}

