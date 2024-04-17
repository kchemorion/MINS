// python wrapper for vtkMRMLVolumePropertyNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLVolumePropertyNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLVolumePropertyNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLVolumePropertyNode_ClassNew(); }


static PyObject *
PyvtkMRMLVolumePropertyNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLVolumePropertyNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLVolumePropertyNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLVolumePropertyNode *tempr = vtkMRMLVolumePropertyNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumePropertyNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLVolumePropertyNode::NewInstance());

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
PyvtkMRMLVolumePropertyNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLVolumePropertyNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLVolumePropertyNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_GetVolumeProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeProperty *tempr = (ap.IsBound() ?
      op->GetVolumeProperty() :
      op->vtkMRMLVolumePropertyNode::GetVolumeProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_SetScalarOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetScalarOpacity(temp0, temp1);
    }
    else
    {
      op->vtkMRMLVolumePropertyNode::SetScalarOpacity(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_GetScalarOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetScalarOpacity(temp0) :
      op->vtkMRMLVolumePropertyNode::GetScalarOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_SetGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetGradientOpacity(temp0, temp1);
    }
    else
    {
      op->vtkMRMLVolumePropertyNode::SetGradientOpacity(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_GetGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetGradientOpacity(temp0) :
      op->vtkMRMLVolumePropertyNode::GetGradientOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  vtkColorTransferFunction *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1);
    }
    else
    {
      op->vtkMRMLVolumePropertyNode::SetColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkColorTransferFunction *tempr = (ap.IsBound() ?
      op->GetColor(temp0) :
      op->vtkMRMLVolumePropertyNode::GetColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_GetPiecewiseFunctionString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPiecewiseFunctionString");

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    std::string tempr = vtkMRMLVolumePropertyNode::GetPiecewiseFunctionString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_GetColorTransferFunctionString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetColorTransferFunctionString");

  vtkColorTransferFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
  {
    std::string tempr = vtkMRMLVolumePropertyNode::GetColorTransferFunctionString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_GetPiecewiseFunctionFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPiecewiseFunctionFromString");

  std::string temp0;
  vtkPiecewiseFunction *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPiecewiseFunction"))
  {
    vtkMRMLVolumePropertyNode::GetPiecewiseFunctionFromString(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_GetColorTransferFunctionFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetColorTransferFunctionFromString");

  std::string temp0;
  vtkColorTransferFunction *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkColorTransferFunction"))
  {
    vtkMRMLVolumePropertyNode::GetColorTransferFunctionFromString(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_NextHigher(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "NextHigher");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = vtkMRMLVolumePropertyNode::NextHigher(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_HigherAndUnique(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HigherAndUnique");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = vtkMRMLVolumePropertyNode::HigherAndUnique(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_SetEffectiveRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEffectiveRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEffectiveRange(temp0, temp1);
    }
    else
    {
      op->vtkMRMLVolumePropertyNode::SetEffectiveRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLVolumePropertyNode_SetEffectiveRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEffectiveRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetEffectiveRange(temp0);
    }
    else
    {
      op->vtkMRMLVolumePropertyNode::SetEffectiveRange(temp0);
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
PyvtkMRMLVolumePropertyNode_SetEffectiveRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLVolumePropertyNode_SetEffectiveRange_s1(self, args);
    case 1:
      return PyvtkMRMLVolumePropertyNode_SetEffectiveRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEffectiveRange");
  return nullptr;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_GetEffectiveRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEffectiveRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetEffectiveRange() :
      op->vtkMRMLVolumePropertyNode::GetEffectiveRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_CalculateEffectiveRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateEffectiveRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CalculateEffectiveRange() :
      op->vtkMRMLVolumePropertyNode::CalculateEffectiveRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLVolumePropertyNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->CopyContent(temp0, temp1);
    }
    else
    {
      op->vtkMRMLVolumePropertyNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLVolumePropertyNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_CopyParameterSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParameterSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->CopyParameterSet(temp0);
    }
    else
    {
      op->vtkMRMLVolumePropertyNode::CopyParameterSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLVolumePropertyNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    if (ap.IsBound())
    {
      op->ProcessMRMLEvents(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLVolumePropertyNode::ProcessMRMLEvents(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLVolumePropertyNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumePropertyNode_GetModifiedSinceRead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModifiedSinceRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumePropertyNode *op = static_cast<vtkMRMLVolumePropertyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetModifiedSinceRead() :
      op->vtkMRMLVolumePropertyNode::GetModifiedSinceRead());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLVolumePropertyNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLVolumePropertyNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLVolumePropertyNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLVolumePropertyNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLVolumePropertyNode\nC++: static vtkMRMLVolumePropertyNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLVolumePropertyNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLVolumePropertyNode\nC++: vtkMRMLVolumePropertyNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLVolumePropertyNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLVolumePropertyNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetVolumeProperty", PyvtkMRMLVolumePropertyNode_GetVolumeProperty, METH_VARARGS,
   "GetVolumeProperty(self) -> vtkVolumeProperty\nC++: virtual vtkVolumeProperty *GetVolumeProperty()\n\nDon't change its scalarOpacity, gradientOpacity or color on the\nvolume property but use the methods below. It wouldn't observe\nthem.\n"},
  {"SetScalarOpacity", PyvtkMRMLVolumePropertyNode_SetScalarOpacity, METH_VARARGS,
   "SetScalarOpacity(self, newScalarOpacity:vtkPiecewiseFunction,\n    component:int=0) -> None\nC++: void SetScalarOpacity(vtkPiecewiseFunction *newScalarOpacity,\n     int component=0)\n\nSet the scalar opacity to the volume property.\n\\sa GetScalarOpacity, GetPiecewiseFunctionString(),\n    SetGradientOpacity(),\nSetColor()\n"},
  {"GetScalarOpacity", PyvtkMRMLVolumePropertyNode_GetScalarOpacity, METH_VARARGS,
   "GetScalarOpacity(self, component:int=0) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetScalarOpacity(int component=0)\n\nReturn the scalar opacity function for a given component or 0 if\nno function exists.\n\\sa SetScalarOpacity()\n"},
  {"SetGradientOpacity", PyvtkMRMLVolumePropertyNode_SetGradientOpacity, METH_VARARGS,
   "SetGradientOpacity(self, newGradientOpacity:vtkPiecewiseFunction,\n    component:int=0) -> None\nC++: void SetGradientOpacity(\n    vtkPiecewiseFunction *newGradientOpacity, int component=0)\n\nSet the gradient opacity to the volume property.\n\\sa GetGradientOpacity(), GetPiecewiseFunctionString(),\nSetScalarOpacity(), SetColor()\n"},
  {"GetGradientOpacity", PyvtkMRMLVolumePropertyNode_GetGradientOpacity, METH_VARARGS,
   "GetGradientOpacity(self, component:int=0) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetGradientOpacity(int component=0)\n\nReturn the gradient opacity function for a given component or 0\nif no function exists.\n\\sa SetGradientOpacity()\n"},
  {"SetColor", PyvtkMRMLVolumePropertyNode_SetColor, METH_VARARGS,
   "SetColor(self, newColorFunction:vtkColorTransferFunction,\n    component:int=0) -> None\nC++: void SetColor(vtkColorTransferFunction *newColorFunction,\n    int component=0)\n\nSet the color function to the volume property.\n\\sa GetColor(), GetPiecewiseFunctionString(),\nSetScalarOpacity(), SetGradientOpacity()\n"},
  {"GetColor", PyvtkMRMLVolumePropertyNode_GetColor, METH_VARARGS,
   "GetColor(self, component:int=0) -> vtkColorTransferFunction\nC++: vtkColorTransferFunction *GetColor(int component=0)\n\nReturn the color transfer function for a given component or 0 if\nno function exists.\n\\sa SetColor()\n"},
  {"GetPiecewiseFunctionString", PyvtkMRMLVolumePropertyNode_GetPiecewiseFunctionString, METH_VARARGS,
   "GetPiecewiseFunctionString(function:vtkPiecewiseFunction) -> str\nC++: static std::string GetPiecewiseFunctionString(\n    vtkPiecewiseFunction *function)\n\nUtility function that transforms a piecewise function into a\nstring. Format:\n <numberOfPoints> <XValue1> <OpacityValue1> ... <XValueN> <OpacityValueN>\n \n\\sa GetPiecewiseFunctionFromString(),\n    GetColorTransferFunctionString()\n"},
  {"GetColorTransferFunctionString", PyvtkMRMLVolumePropertyNode_GetColorTransferFunctionString, METH_VARARGS,
   "GetColorTransferFunctionString(function:vtkColorTransferFunction)\n    -> str\nC++: static std::string GetColorTransferFunctionString(\n    vtkColorTransferFunction *function)\n\nUtility function that transforms a color transfer function into a\nstring. Format:\n <numberOfPoints> <XValue1> <RValue1> <GValue1><BValue1> ... <XValueN> <RValueN> <GValueN><BValueN>\n \n\\sa GetColorTransferFunctionFromString(),\n    GetPiecewiseFunctionString()\n"},
  {"GetPiecewiseFunctionFromString", PyvtkMRMLVolumePropertyNode_GetPiecewiseFunctionFromString, METH_VARARGS,
   "GetPiecewiseFunctionFromString(str:str,\n    result:vtkPiecewiseFunction) -> None\nC++: static void GetPiecewiseFunctionFromString(\n    const std::string &str, vtkPiecewiseFunction *result)\n\nUtility function: Put parameters described in a string into an\nexisting vtkPiecewiseFunction, use together with\nGetPiecewiseFunctionString\n\\sa GetPiecewiseFunctionString(),\n    GetColorTransferFunctionFromString()\n"},
  {"GetColorTransferFunctionFromString", PyvtkMRMLVolumePropertyNode_GetColorTransferFunctionFromString, METH_VARARGS,
   "GetColorTransferFunctionFromString(str:str,\n    result:vtkColorTransferFunction) -> None\nC++: static void GetColorTransferFunctionFromString(\n    const std::string &str, vtkColorTransferFunction *result)\n\nUtility function: Put parameters described in a string into an\nexisting vtkColorTransferFunction, use together with\ngetColorTransferFunctionString\n\\sa GetColorTransferFunctionString(),\n    GetPiecewiseFunctionFromString()\n"},
  {"NextHigher", PyvtkMRMLVolumePropertyNode_NextHigher, METH_VARARGS,
   "NextHigher(value:float) -> float\nC++: static double NextHigher(double value)\n\nUtility function: Return the nearest higher value.\n\\sa HigherAndUnique()\n"},
  {"HigherAndUnique", PyvtkMRMLVolumePropertyNode_HigherAndUnique, METH_VARARGS,
   "HigherAndUnique(value:float, previousValue:float) -> float\nC++: static double HigherAndUnique(double value,\n    double &previousValue)\n\nUtility function: Return the value or the nearest higher value if\nthe value is equal to previousValue. Update previousValue with\nthe new higher value.\n\\sa NextHigher()\n"},
  {"SetEffectiveRange", PyvtkMRMLVolumePropertyNode_SetEffectiveRange, METH_VARARGS,
   "SetEffectiveRange(self, min:float, max:float) -> None\nC++: void SetEffectiveRange(double min, double max)\nSetEffectiveRange(self, range:[float, float]) -> None\nC++: void SetEffectiveRange(double range[2])\n\nSet effective range\n"},
  {"GetEffectiveRange", PyvtkMRMLVolumePropertyNode_GetEffectiveRange, METH_VARARGS,
   "GetEffectiveRange(self) -> (float, float)\nC++: virtual double *GetEffectiveRange()\n\nGet effective range\n"},
  {"CalculateEffectiveRange", PyvtkMRMLVolumePropertyNode_CalculateEffectiveRange, METH_VARARGS,
   "CalculateEffectiveRange(self) -> bool\nC++: bool CalculateEffectiveRange()\n\nCalculate effective range to include all the transfer functions.\n\\return True if calculation was successful, false is not (missing\ntransfer functions)\n"},
  {"CreateNodeInstance", PyvtkMRMLVolumePropertyNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"CopyContent", PyvtkMRMLVolumePropertyNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLVolumePropertyNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"CopyParameterSet", PyvtkMRMLVolumePropertyNode_CopyParameterSet, METH_VARARGS,
   "CopyParameterSet(self, node:vtkMRMLNode) -> None\nC++: void CopyParameterSet(vtkMRMLNode *node)\n\nCopy only the parameter set (like volume properties, piecewise\nfunctions etc. as deep copy, but no references etc.)\n"},
  {"GetNodeTagName", PyvtkMRMLVolumePropertyNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"ProcessMRMLEvents", PyvtkMRMLVolumePropertyNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nReimplemented for internal reasons.\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLVolumePropertyNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {"GetModifiedSinceRead", PyvtkMRMLVolumePropertyNode_GetModifiedSinceRead, METH_VARARGS,
   "GetModifiedSinceRead(self) -> bool\nC++: bool GetModifiedSinceRead() override;\n\n\\sa vtkMRMLStorableNode::GetModifiedSinceRead()\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLVolumePropertyNode_Doc =
  "vtkMRMLVolumePropertyNode - vtkMRMLVolumePropertyNode contains the\ntransfer functions (scalar opacity, color and gradient opacity) for\nthe volume rendering.\n\n"
  "Superclass: vtkMRMLStorableNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLVolumePropertyNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerVolumeRenderingModuleMRMLPython.vtkMRMLVolumePropertyNode", // tp_name
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
  PyvtkMRMLVolumePropertyNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLVolumePropertyNode_StaticNew()
{
  return vtkMRMLVolumePropertyNode::New();
}

PyObject *PyvtkMRMLVolumePropertyNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLVolumePropertyNode_Type, PyvtkMRMLVolumePropertyNode_Methods,
    "vtkMRMLVolumePropertyNode",
 &PyvtkMRMLVolumePropertyNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLStorableNode");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  o = PyLong_FromLong(vtkMRMLVolumePropertyNode::EffectiveRangeModified);
  if (o)
  {
    PyDict_SetItemString(d, "EffectiveRangeModified", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLVolumePropertyNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLVolumePropertyNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLVolumePropertyNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

