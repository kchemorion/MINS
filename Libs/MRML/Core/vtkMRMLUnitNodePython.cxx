// python wrapper for vtkMRMLUnitNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLUnitNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLUnitNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLUnitNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLNode_ClassNew
extern "C" { PyObject *PyvtkMRMLNode_ClassNew(); }
#define DECLARED_PyvtkMRMLNode_ClassNew
#endif

static PyObject *
PyvtkMRMLUnitNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLUnitNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLUnitNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLUnitNode *tempr = vtkMRMLUnitNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLUnitNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLUnitNode::NewInstance());

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
PyvtkMRMLUnitNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLUnitNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLUnitNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLUnitNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkMRMLUnitNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLUnitNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->Reset(temp0);
    }
    else
    {
      op->vtkMRMLUnitNode::Reset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_GetQuantity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuantity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetQuantity() :
      op->vtkMRMLUnitNode::GetQuantity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_SetQuantity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuantity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQuantity(temp0);
    }
    else
    {
      op->vtkMRMLUnitNode::SetQuantity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_GetDisplayValueFromValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayValueFromValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDisplayValueFromValue(temp0) :
      op->vtkMRMLUnitNode::GetDisplayValueFromValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_GetValueFromDisplayValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueFromDisplayValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValueFromDisplayValue(temp0) :
      op->vtkMRMLUnitNode::GetValueFromDisplayValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_GetDisplayStringFromValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayStringFromValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDisplayStringFromValue(temp0) :
      op->vtkMRMLUnitNode::GetDisplayStringFromValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_GetDisplayStringFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayStringFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDisplayStringFormat() :
      op->vtkMRMLUnitNode::GetDisplayStringFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetName(temp0);
    }
    else
    {
      op->vtkMRMLUnitNode::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_GetPrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPrefix() :
      op->vtkMRMLUnitNode::GetPrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_SetPrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrefix(temp0);
    }
    else
    {
      op->vtkMRMLUnitNode::SetPrefix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_GetSuffix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuffix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSuffix() :
      op->vtkMRMLUnitNode::GetSuffix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_SetSuffix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuffix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSuffix(temp0);
    }
    else
    {
      op->vtkMRMLUnitNode::SetSuffix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_GetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPrecision() :
      op->vtkMRMLUnitNode::GetPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_SetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrecision(temp0);
    }
    else
    {
      op->vtkMRMLUnitNode::SetPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_GetPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPrecisionMinValue() :
      op->vtkMRMLUnitNode::GetPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_GetPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPrecisionMaxValue() :
      op->vtkMRMLUnitNode::GetPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_GetMinimumValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumValue() :
      op->vtkMRMLUnitNode::GetMinimumValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_SetMinimumValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumValue(temp0);
    }
    else
    {
      op->vtkMRMLUnitNode::SetMinimumValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_GetMaximumValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumValue() :
      op->vtkMRMLUnitNode::GetMaximumValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_SetMaximumValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumValue(temp0);
    }
    else
    {
      op->vtkMRMLUnitNode::SetMaximumValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_GetDisplayCoefficient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayCoefficient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDisplayCoefficient() :
      op->vtkMRMLUnitNode::GetDisplayCoefficient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_SetDisplayCoefficient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayCoefficient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayCoefficient(temp0);
    }
    else
    {
      op->vtkMRMLUnitNode::SetDisplayCoefficient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_GetDisplayOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDisplayOffset() :
      op->vtkMRMLUnitNode::GetDisplayOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLUnitNode_SetDisplayOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLUnitNode *op = static_cast<vtkMRMLUnitNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayOffset(temp0);
    }
    else
    {
      op->vtkMRMLUnitNode::SetDisplayOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLUnitNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLUnitNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLUnitNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLUnitNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLUnitNode\nC++: static vtkMRMLUnitNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLUnitNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLUnitNode\nC++: vtkMRMLUnitNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLUnitNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLUnitNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLUnitNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"Copy", PyvtkMRMLUnitNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLUnitNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"Reset", PyvtkMRMLUnitNode_Reset, METH_VARARGS,
   "Reset(self, defaultNode:vtkMRMLNode) -> None\nC++: void Reset(vtkMRMLNode *defaultNode) override;\n\nReimplemented to prevent reset if unit node is a singleton.\n"},
  {"GetQuantity", PyvtkMRMLUnitNode_GetQuantity, METH_VARARGS,
   "GetQuantity(self) -> str\nC++: const char *GetQuantity()\n\nSet/Get the quantity the unit belongs to. A unit can only have\none quantity. Default is \"\".\n"},
  {"SetQuantity", PyvtkMRMLUnitNode_SetQuantity, METH_VARARGS,
   "SetQuantity(self, quantity:str) -> None\nC++: void SetQuantity(const char *quantity)\n\n"},
  {"GetDisplayValueFromValue", PyvtkMRMLUnitNode_GetDisplayValueFromValue, METH_VARARGS,
   "GetDisplayValueFromValue(self, value:float) -> float\nC++: virtual double GetDisplayValueFromValue(double value)\n\nReturn the value multiplied by DisplayCoefficient and summed by\nDisplayOffset.\n\\sa GetValueFromDisplayValue(), GetDisplayStringFromValue(),\nGetDisplayCoefficient(), GetDisplayOffset()\n"},
  {"GetValueFromDisplayValue", PyvtkMRMLUnitNode_GetValueFromDisplayValue, METH_VARARGS,
   "GetValueFromDisplayValue(self, value:float) -> float\nC++: virtual double GetValueFromDisplayValue(double value)\n\nReturn the value subtracted from DisplayOffset and divided by\nDisplayCoefficient.\n\\sa GetDisplayValueFromValue(), GetDisplayStringFromValue()\n"},
  {"GetDisplayStringFromValue", PyvtkMRMLUnitNode_GetDisplayStringFromValue, METH_VARARGS,
   "GetDisplayStringFromValue(self, value:float) -> str\nC++: const char *GetDisplayStringFromValue(double value)\n\nReturn the display value with prefix and suffix.\n\\sa GetDisplayValueFromValue(), GetValueFromDisplayValue()\n"},
  {"GetDisplayStringFormat", PyvtkMRMLUnitNode_GetDisplayStringFormat, METH_VARARGS,
   "GetDisplayStringFormat(self) -> str\nC++: const char *GetDisplayStringFormat()\n\nReturn the display string format to use with printf/sprintf. Note\nthat the value passed to the format must be the DisplayValue. For\nexample: \"%#6.3g mm\" if the precision is 3 and the suffix mm.\n\\sa GetDisplayValueFromValue(), GetDisplayStringFromValue()\n"},
  {"SetName", PyvtkMRMLUnitNode_SetName, METH_VARARGS,
   "SetName(self, name:str) -> None\nC++: void SetName(const char *name) override;\n\nSet the name of the unit. Since unit nodes are singleton, this\nname must be unique throughout the scene.\n"},
  {"GetPrefix", PyvtkMRMLUnitNode_GetPrefix, METH_VARARGS,
   "GetPrefix(self) -> str\nC++: virtual char *GetPrefix()\n\nSet/Get the unit prefix. Default is \"\".\n\\sa SetPrefix(), GetPrefix()\n"},
  {"SetPrefix", PyvtkMRMLUnitNode_SetPrefix, METH_VARARGS,
   "SetPrefix(self, _arg:str) -> None\nC++: virtual void SetPrefix(const char *_arg)\n\n"},
  {"GetSuffix", PyvtkMRMLUnitNode_GetSuffix, METH_VARARGS,
   "GetSuffix(self) -> str\nC++: virtual char *GetSuffix()\n\nSet/Get the unit suffix. For example, the suffix for the unity\nmeter would be \"m\". Default is \"\".\n\\sa SetSuffix(), GetSuffix()\n"},
  {"SetSuffix", PyvtkMRMLUnitNode_SetSuffix, METH_VARARGS,
   "SetSuffix(self, _arg:str) -> None\nC++: virtual void SetSuffix(const char *_arg)\n\n"},
  {"GetPrecision", PyvtkMRMLUnitNode_GetPrecision, METH_VARARGS,
   "GetPrecision(self) -> int\nC++: virtual int GetPrecision()\n\nSet/Get the precision (i.e. number of decimals) of the unit.\nDefault is 3.\n"},
  {"SetPrecision", PyvtkMRMLUnitNode_SetPrecision, METH_VARARGS,
   "SetPrecision(self, _arg:int) -> None\nC++: virtual void SetPrecision(int _arg)\n\n"},
  {"GetPrecisionMinValue", PyvtkMRMLUnitNode_GetPrecisionMinValue, METH_VARARGS,
   "GetPrecisionMinValue(self) -> int\nC++: virtual int GetPrecisionMinValue()\n\n"},
  {"GetPrecisionMaxValue", PyvtkMRMLUnitNode_GetPrecisionMaxValue, METH_VARARGS,
   "GetPrecisionMaxValue(self) -> int\nC++: virtual int GetPrecisionMaxValue()\n\n"},
  {"GetMinimumValue", PyvtkMRMLUnitNode_GetMinimumValue, METH_VARARGS,
   "GetMinimumValue(self) -> float\nC++: virtual double GetMinimumValue()\n\nSet/Get the minimum value that can be attributed to the unit. For\nexample, the minimum value for Kelvins should be 0.\n\\sa SetMaximumValue(), GetMaximumValue()\n"},
  {"SetMinimumValue", PyvtkMRMLUnitNode_SetMinimumValue, METH_VARARGS,
   "SetMinimumValue(self, _arg:float) -> None\nC++: virtual void SetMinimumValue(double _arg)\n\n"},
  {"GetMaximumValue", PyvtkMRMLUnitNode_GetMaximumValue, METH_VARARGS,
   "GetMaximumValue(self) -> float\nC++: virtual double GetMaximumValue()\n\nSet/Get the maximum value that can be attributed to the unit. For\nexample, the maximum value for a speed should (probably) be 3e6.\n\\sa SetMinimumValue(), GetMinimumValue()\n"},
  {"SetMaximumValue", PyvtkMRMLUnitNode_SetMaximumValue, METH_VARARGS,
   "SetMaximumValue(self, _arg:float) -> None\nC++: virtual void SetMaximumValue(double _arg)\n\n"},
  {"GetDisplayCoefficient", PyvtkMRMLUnitNode_GetDisplayCoefficient, METH_VARARGS,
   "GetDisplayCoefficient(self) -> float\nC++: virtual double GetDisplayCoefficient()\n\nMultiply the value with DisplayCoefficient for display.\n\\sa GetDisplayOffset(), GetDisplayValueFromValue()\n"},
  {"SetDisplayCoefficient", PyvtkMRMLUnitNode_SetDisplayCoefficient, METH_VARARGS,
   "SetDisplayCoefficient(self, _arg:float) -> None\nC++: virtual void SetDisplayCoefficient(double _arg)\n\n"},
  {"GetDisplayOffset", PyvtkMRMLUnitNode_GetDisplayOffset, METH_VARARGS,
   "GetDisplayOffset(self) -> float\nC++: virtual double GetDisplayOffset()\n\nAddition the value with DisplayOffset for display.\n\\sa GetDisplayCoefficient(), GetDisplayValueFromValue()\n"},
  {"SetDisplayOffset", PyvtkMRMLUnitNode_SetDisplayOffset, METH_VARARGS,
   "SetDisplayOffset(self, _arg:float) -> None\nC++: virtual void SetDisplayOffset(double _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLUnitNode_Doc =
  "vtkMRMLUnitNode - Node that holds the information about a unit.\n\n"
  "Superclass: vtkMRMLNode\n\n"
  "A unit node holds all the information regarding a given unit. A unit\n"
  "belongs to a quantity. A quantity can have multiple different units.\n"
  "For example, the units meter and millimeter belong to the quantity\n"
  "\"length\". Units are singleton.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLUnitNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLUnitNode", // tp_name
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
  PyvtkMRMLUnitNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLUnitNode_StaticNew()
{
  return vtkMRMLUnitNode::New();
}

PyObject *PyvtkMRMLUnitNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLUnitNode_Type, PyvtkMRMLUnitNode_Methods,
    "vtkMRMLUnitNode",
 &PyvtkMRMLUnitNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLUnitNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLUnitNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLUnitNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

