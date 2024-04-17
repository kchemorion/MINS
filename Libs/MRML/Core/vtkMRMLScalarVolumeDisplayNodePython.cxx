// python wrapper for vtkMRMLScalarVolumeDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLScalarVolumeDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLScalarVolumeDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLScalarVolumeDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLVolumeDisplayNode_ClassNew
extern "C" { PyObject *PyvtkMRMLVolumeDisplayNode_ClassNew(); }
#define DECLARED_PyvtkMRMLVolumeDisplayNode_ClassNew
#endif

static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLScalarVolumeDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLScalarVolumeDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLScalarVolumeDisplayNode *tempr = vtkMRMLScalarVolumeDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLScalarVolumeDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLScalarVolumeDisplayNode::NewInstance());

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
PyvtkMRMLScalarVolumeDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLScalarVolumeDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLScalarVolumeDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLScalarVolumeDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

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
      op->vtkMRMLScalarVolumeDisplayNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLScalarVolumeDisplayNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLScalarVolumeDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetWindowLevelLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevelLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWindowLevelLocked() :
      op->vtkMRMLScalarVolumeDisplayNode::GetWindowLevelLocked());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_SetWindowLevelLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLevelLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindowLevelLocked(temp0);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::SetWindowLevelLocked(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_AutoWindowLevelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoWindowLevelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoWindowLevelOn();
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::AutoWindowLevelOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_AutoWindowLevelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoWindowLevelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoWindowLevelOff();
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::AutoWindowLevelOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetAutoWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoWindowLevel() :
      op->vtkMRMLScalarVolumeDisplayNode::GetAutoWindowLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_SetAutoWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoWindowLevel(temp0);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::SetAutoWindowLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWindow() :
      op->vtkMRMLScalarVolumeDisplayNode::GetWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_SetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindow(temp0);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::SetWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkMRMLScalarVolumeDisplayNode::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevel(temp0);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::SetLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_SetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetWindowLevel(temp0, temp1);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::SetWindowLevel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_SetWindowLevelMinMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLevelMinMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetWindowLevelMinMax(temp0, temp1);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::SetWindowLevelMinMax(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetWindowLevelMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevelMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWindowLevelMin() :
      op->vtkMRMLScalarVolumeDisplayNode::GetWindowLevelMin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetWindowLevelMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevelMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWindowLevelMax() :
      op->vtkMRMLScalarVolumeDisplayNode::GetWindowLevelMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_ApplyThresholdOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyThresholdOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ApplyThresholdOn();
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::ApplyThresholdOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_ApplyThresholdOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyThresholdOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ApplyThresholdOff();
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::ApplyThresholdOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetApplyThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetApplyThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetApplyThreshold() :
      op->vtkMRMLScalarVolumeDisplayNode::GetApplyThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_SetApplyThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetApplyThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetApplyThreshold(temp0);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::SetApplyThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_AutoThresholdOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoThresholdOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoThresholdOn();
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::AutoThresholdOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_AutoThresholdOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoThresholdOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoThresholdOff();
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::AutoThresholdOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetAutoThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoThreshold() :
      op->vtkMRMLScalarVolumeDisplayNode::GetAutoThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_SetAutoThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoThreshold(temp0);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::SetAutoThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowerThreshold() :
      op->vtkMRMLScalarVolumeDisplayNode::GetLowerThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_SetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLowerThreshold(temp0);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::SetLowerThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUpperThreshold() :
      op->vtkMRMLScalarVolumeDisplayNode::GetUpperThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_SetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUpperThreshold(temp0);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::SetUpperThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_SetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetThreshold(temp0, temp1);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::SetThreshold(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolate() :
      op->vtkMRMLScalarVolumeDisplayNode::GetInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_SetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolate(temp0);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::SetInterpolate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_InterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOn();
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::InterpolateOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_InterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOff();
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::InterpolateOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_SetDefaultColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultColorMap();
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::SetDefaultColorMap();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

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
      op->vtkMRMLScalarVolumeDisplayNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLScalarVolumeDisplayNode_SetInputImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputImageDataConnection(temp0);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::SetInputImageDataConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetInputImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInputImageDataConnection() :
      op->vtkMRMLScalarVolumeDisplayNode::GetInputImageDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetOutputImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetOutputImageDataConnection() :
      op->vtkMRMLScalarVolumeDisplayNode::GetOutputImageDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_SetBackgroundImageStencilDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundImageStencilDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundImageStencilDataConnection(temp0);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::SetBackgroundImageStencilDataConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetBackgroundImageStencilDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundImageStencilDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetBackgroundImageStencilDataConnection() :
      op->vtkMRMLScalarVolumeDisplayNode::GetBackgroundImageStencilDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_AddWindowLevelPresetFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddWindowLevelPresetFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddWindowLevelPresetFromString(temp0);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::AddWindowLevelPresetFromString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_AddWindowLevelPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddWindowLevelPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddWindowLevelPreset(temp0, temp1);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::AddWindowLevelPreset(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_ResetWindowLevelPresets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetWindowLevelPresets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetWindowLevelPresets();
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::ResetWindowLevelPresets();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_SetWindowLevelFromPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLevelFromPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindowLevelFromPreset(temp0);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::SetWindowLevelFromPreset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetNumberOfWindowLevelPresets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfWindowLevelPresets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfWindowLevelPresets() :
      op->vtkMRMLScalarVolumeDisplayNode::GetNumberOfWindowLevelPresets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetWindowPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWindowPreset(temp0) :
      op->vtkMRMLScalarVolumeDisplayNode::GetWindowPreset(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetLevelPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLevelPreset(temp0) :
      op->vtkMRMLScalarVolumeDisplayNode::GetLevelPreset(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeDisplayNode_GetDisplayScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeDisplayNode *op = static_cast<vtkMRMLScalarVolumeDisplayNode *>(vp);

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
      op->GetDisplayScalarRange(temp0);
    }
    else
    {
      op->vtkMRMLScalarVolumeDisplayNode::GetDisplayScalarRange(temp0);
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

static PyMethodDef PyvtkMRMLScalarVolumeDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLScalarVolumeDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLScalarVolumeDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLScalarVolumeDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLScalarVolumeDisplayNode\nC++: static vtkMRMLScalarVolumeDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLScalarVolumeDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLScalarVolumeDisplayNode\nC++: vtkMRMLScalarVolumeDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLScalarVolumeDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLScalarVolumeDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLScalarVolumeDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"CopyContent", PyvtkMRMLScalarVolumeDisplayNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLScalarVolumeDisplayNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLScalarVolumeDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetWindowLevelLocked", PyvtkMRMLScalarVolumeDisplayNode_GetWindowLevelLocked, METH_VARARGS,
   "GetWindowLevelLocked(self) -> bool\nC++: bool GetWindowLevelLocked()\n\nDisplay Information\\deprecated\n"},
  {"SetWindowLevelLocked", PyvtkMRMLScalarVolumeDisplayNode_SetWindowLevelLocked, METH_VARARGS,
   "SetWindowLevelLocked(self, __a:bool) -> None\nC++: virtual void SetWindowLevelLocked(bool)\n\n\\deprecated\n"},
  {"AutoWindowLevelOn", PyvtkMRMLScalarVolumeDisplayNode_AutoWindowLevelOn, METH_VARARGS,
   "AutoWindowLevelOn(self) -> None\nC++: virtual void AutoWindowLevelOn()\n\nSpecifies whether windowing and leveling are to be performed\nautomatically\n"},
  {"AutoWindowLevelOff", PyvtkMRMLScalarVolumeDisplayNode_AutoWindowLevelOff, METH_VARARGS,
   "AutoWindowLevelOff(self) -> None\nC++: virtual void AutoWindowLevelOff()\n\n"},
  {"GetAutoWindowLevel", PyvtkMRMLScalarVolumeDisplayNode_GetAutoWindowLevel, METH_VARARGS,
   "GetAutoWindowLevel(self) -> int\nC++: virtual int GetAutoWindowLevel()\n\n"},
  {"SetAutoWindowLevel", PyvtkMRMLScalarVolumeDisplayNode_SetAutoWindowLevel, METH_VARARGS,
   "SetAutoWindowLevel(self, _arg:int) -> None\nC++: virtual void SetAutoWindowLevel(int _arg)\n\n"},
  {"GetWindow", PyvtkMRMLScalarVolumeDisplayNode_GetWindow, METH_VARARGS,
   "GetWindow(self) -> float\nC++: double GetWindow()\n\nThe window value to use when autoWindowLevel is 'no'\n"},
  {"SetWindow", PyvtkMRMLScalarVolumeDisplayNode_SetWindow, METH_VARARGS,
   "SetWindow(self, __a:float) -> None\nC++: virtual void SetWindow(double)\n\n"},
  {"GetLevel", PyvtkMRMLScalarVolumeDisplayNode_GetLevel, METH_VARARGS,
   "GetLevel(self) -> float\nC++: double GetLevel()\n\nThe level value to use when autoWindowLevel is 'no'\n"},
  {"SetLevel", PyvtkMRMLScalarVolumeDisplayNode_SetLevel, METH_VARARGS,
   "SetLevel(self, __a:float) -> None\nC++: virtual void SetLevel(double)\n\n"},
  {"SetWindowLevel", PyvtkMRMLScalarVolumeDisplayNode_SetWindowLevel, METH_VARARGS,
   "SetWindowLevel(self, window:float, level:float) -> None\nC++: virtual void SetWindowLevel(double window, double level)\n\nSets the window and level at once, generates only 1 modified\nevent if needed.\n"},
  {"SetWindowLevelMinMax", PyvtkMRMLScalarVolumeDisplayNode_SetWindowLevelMinMax, METH_VARARGS,
   "SetWindowLevelMinMax(self, min:float, max:float) -> None\nC++: void SetWindowLevelMinMax(double min, double max)\n\nUtility function that sets the window/level by passing the min\nand max of the window.\n"},
  {"GetWindowLevelMin", PyvtkMRMLScalarVolumeDisplayNode_GetWindowLevelMin, METH_VARARGS,
   "GetWindowLevelMin(self) -> float\nC++: double GetWindowLevelMin()\n\nUtility function that returns the minimum value of the window\nlevel\n"},
  {"GetWindowLevelMax", PyvtkMRMLScalarVolumeDisplayNode_GetWindowLevelMax, METH_VARARGS,
   "GetWindowLevelMax(self) -> float\nC++: double GetWindowLevelMax()\n\nUtility function that returns the maximum value of the window\nlevel\n"},
  {"ApplyThresholdOn", PyvtkMRMLScalarVolumeDisplayNode_ApplyThresholdOn, METH_VARARGS,
   "ApplyThresholdOn(self) -> None\nC++: virtual void ApplyThresholdOn()\n\nSpecifies whether to apply the threshold\n"},
  {"ApplyThresholdOff", PyvtkMRMLScalarVolumeDisplayNode_ApplyThresholdOff, METH_VARARGS,
   "ApplyThresholdOff(self) -> None\nC++: virtual void ApplyThresholdOff()\n\n"},
  {"GetApplyThreshold", PyvtkMRMLScalarVolumeDisplayNode_GetApplyThreshold, METH_VARARGS,
   "GetApplyThreshold(self) -> int\nC++: virtual int GetApplyThreshold()\n\n"},
  {"SetApplyThreshold", PyvtkMRMLScalarVolumeDisplayNode_SetApplyThreshold, METH_VARARGS,
   "SetApplyThreshold(self, __a:int) -> None\nC++: virtual void SetApplyThreshold(int)\n\n"},
  {"AutoThresholdOn", PyvtkMRMLScalarVolumeDisplayNode_AutoThresholdOn, METH_VARARGS,
   "AutoThresholdOn(self) -> None\nC++: virtual void AutoThresholdOn()\n\nSpecifies whether the threshold should be set automatically\n"},
  {"AutoThresholdOff", PyvtkMRMLScalarVolumeDisplayNode_AutoThresholdOff, METH_VARARGS,
   "AutoThresholdOff(self) -> None\nC++: virtual void AutoThresholdOff()\n\n"},
  {"GetAutoThreshold", PyvtkMRMLScalarVolumeDisplayNode_GetAutoThreshold, METH_VARARGS,
   "GetAutoThreshold(self) -> int\nC++: virtual int GetAutoThreshold()\n\n"},
  {"SetAutoThreshold", PyvtkMRMLScalarVolumeDisplayNode_SetAutoThreshold, METH_VARARGS,
   "SetAutoThreshold(self, _arg:int) -> None\nC++: virtual void SetAutoThreshold(int _arg)\n\n"},
  {"GetLowerThreshold", PyvtkMRMLScalarVolumeDisplayNode_GetLowerThreshold, METH_VARARGS,
   "GetLowerThreshold(self) -> float\nC++: virtual double GetLowerThreshold()\n\nThe lower threshold value to use when autoThreshold is 'no'\nDefaults to VTK_SHORT_MIN\n"},
  {"SetLowerThreshold", PyvtkMRMLScalarVolumeDisplayNode_SetLowerThreshold, METH_VARARGS,
   "SetLowerThreshold(self, lower:float) -> None\nC++: virtual void SetLowerThreshold(double lower)\n\n"},
  {"GetUpperThreshold", PyvtkMRMLScalarVolumeDisplayNode_GetUpperThreshold, METH_VARARGS,
   "GetUpperThreshold(self) -> float\nC++: virtual double GetUpperThreshold()\n\nThe upper threshold value to use when autoThreshold is 'no'\nDefaults to VTK_SHORT_MAX\n"},
  {"SetUpperThreshold", PyvtkMRMLScalarVolumeDisplayNode_SetUpperThreshold, METH_VARARGS,
   "SetUpperThreshold(self, upper:float) -> None\nC++: virtual void SetUpperThreshold(double upper)\n\n"},
  {"SetThreshold", PyvtkMRMLScalarVolumeDisplayNode_SetThreshold, METH_VARARGS,
   "SetThreshold(self, lower:float, upper:float) -> None\nC++: virtual void SetThreshold(double lower, double upper)\n\n"},
  {"GetInterpolate", PyvtkMRMLScalarVolumeDisplayNode_GetInterpolate, METH_VARARGS,
   "GetInterpolate(self) -> int\nC++: virtual int GetInterpolate()\n\nSet/Get interpolate reformatted slices\n"},
  {"SetInterpolate", PyvtkMRMLScalarVolumeDisplayNode_SetInterpolate, METH_VARARGS,
   "SetInterpolate(self, _arg:int) -> None\nC++: virtual void SetInterpolate(int _arg)\n\n"},
  {"InterpolateOn", PyvtkMRMLScalarVolumeDisplayNode_InterpolateOn, METH_VARARGS,
   "InterpolateOn(self) -> None\nC++: virtual void InterpolateOn()\n\n"},
  {"InterpolateOff", PyvtkMRMLScalarVolumeDisplayNode_InterpolateOff, METH_VARARGS,
   "InterpolateOff(self) -> None\nC++: virtual void InterpolateOff()\n\n"},
  {"SetDefaultColorMap", PyvtkMRMLScalarVolumeDisplayNode_SetDefaultColorMap, METH_VARARGS,
   "SetDefaultColorMap(self) -> None\nC++: void SetDefaultColorMap() override;\n\nset gray colormap or override in subclass\n"},
  {"ProcessMRMLEvents", PyvtkMRMLScalarVolumeDisplayNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"SetInputImageDataConnection", PyvtkMRMLScalarVolumeDisplayNode_SetInputImageDataConnection, METH_VARARGS,
   "SetInputImageDataConnection(self,\n    imageDataConnection:vtkAlgorithmOutput) -> None\nC++: void SetInputImageDataConnection(\n    vtkAlgorithmOutput *imageDataConnection) override;\n\nSet the pipeline input\n"},
  {"GetInputImageDataConnection", PyvtkMRMLScalarVolumeDisplayNode_GetInputImageDataConnection, METH_VARARGS,
   "GetInputImageDataConnection(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetInputImageDataConnection() override;\n\nGets the pipeline input\n"},
  {"GetOutputImageDataConnection", PyvtkMRMLScalarVolumeDisplayNode_GetOutputImageDataConnection, METH_VARARGS,
   "GetOutputImageDataConnection(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetOutputImageDataConnection() override;\n\nGets the pipeline output\n"},
  {"SetBackgroundImageStencilDataConnection", PyvtkMRMLScalarVolumeDisplayNode_SetBackgroundImageStencilDataConnection, METH_VARARGS,
   "SetBackgroundImageStencilDataConnection(self,\n    imageDataConnection:vtkAlgorithmOutput) -> None\nC++: void SetBackgroundImageStencilDataConnection(\n    vtkAlgorithmOutput *imageDataConnection) override;\n\nGet/set background mask stencil\n"},
  {"GetBackgroundImageStencilDataConnection", PyvtkMRMLScalarVolumeDisplayNode_GetBackgroundImageStencilDataConnection, METH_VARARGS,
   "GetBackgroundImageStencilDataConnection(self)\n    -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetBackgroundImageStencilDataConnection()\n     override;\n\n"},
  {"AddWindowLevelPresetFromString", PyvtkMRMLScalarVolumeDisplayNode_AddWindowLevelPresetFromString, METH_VARARGS,
   "AddWindowLevelPresetFromString(self, preset:str) -> None\nC++: void AddWindowLevelPresetFromString(const char *preset)\n\nParse a string with window and level as double|double, and add a\npreset\n"},
  {"AddWindowLevelPreset", PyvtkMRMLScalarVolumeDisplayNode_AddWindowLevelPreset, METH_VARARGS,
   "AddWindowLevelPreset(self, window:float, level:float) -> None\nC++: void AddWindowLevelPreset(double window, double level)\n\nAdd a window level preset\n"},
  {"ResetWindowLevelPresets", PyvtkMRMLScalarVolumeDisplayNode_ResetWindowLevelPresets, METH_VARARGS,
   "ResetWindowLevelPresets(self) -> None\nC++: void ResetWindowLevelPresets()\n\nRemove all presets\n"},
  {"SetWindowLevelFromPreset", PyvtkMRMLScalarVolumeDisplayNode_SetWindowLevelFromPreset, METH_VARARGS,
   "SetWindowLevelFromPreset(self, p:int) -> None\nC++: void SetWindowLevelFromPreset(int p)\n\nSet Window and Level from preset p\n"},
  {"GetNumberOfWindowLevelPresets", PyvtkMRMLScalarVolumeDisplayNode_GetNumberOfWindowLevelPresets, METH_VARARGS,
   "GetNumberOfWindowLevelPresets(self) -> int\nC++: int GetNumberOfWindowLevelPresets()\n\nGet the number of window/level presets\n"},
  {"GetWindowPreset", PyvtkMRMLScalarVolumeDisplayNode_GetWindowPreset, METH_VARARGS,
   "GetWindowPreset(self, p:int) -> float\nC++: double GetWindowPreset(int p)\n\nReturn a specific preset, returns 0 if p out of range\n"},
  {"GetLevelPreset", PyvtkMRMLScalarVolumeDisplayNode_GetLevelPreset, METH_VARARGS,
   "GetLevelPreset(self, p:int) -> float\nC++: double GetLevelPreset(int p)\n\n"},
  {"GetDisplayScalarRange", PyvtkMRMLScalarVolumeDisplayNode_GetDisplayScalarRange, METH_VARARGS,
   "GetDisplayScalarRange(self, range:[float, float]) -> None\nC++: virtual void GetDisplayScalarRange(double range[2])\n\nDefines the expected range of the output data after having been\nmapped through the current display options If no input is set,\nthen it searches the scene to find the associated Volume node and\nreturns its image data scalar range.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLScalarVolumeDisplayNode_Doc =
  "vtkMRMLScalarVolumeDisplayNode - MRML node for representing a volume\ndisplay attributes.\n\n"
  "Superclass: vtkMRMLVolumeDisplayNode\n\n"
  "vtkMRMLScalarVolumeDisplayNode nodes describe how volume is\n"
  "displayed.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLScalarVolumeDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLScalarVolumeDisplayNode", // tp_name
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
  PyvtkMRMLScalarVolumeDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLScalarVolumeDisplayNode_StaticNew()
{
  return vtkMRMLScalarVolumeDisplayNode::New();
}

PyObject *PyvtkMRMLScalarVolumeDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLScalarVolumeDisplayNode_Type, PyvtkMRMLScalarVolumeDisplayNode_Methods,
    "vtkMRMLScalarVolumeDisplayNode",
 &PyvtkMRMLScalarVolumeDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLVolumeDisplayNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLScalarVolumeDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLScalarVolumeDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLScalarVolumeDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

