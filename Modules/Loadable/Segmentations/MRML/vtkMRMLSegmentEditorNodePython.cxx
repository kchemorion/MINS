// python wrapper for vtkMRMLSegmentEditorNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSegmentEditorNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSegmentEditorNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSegmentEditorNode_ClassNew(); }


static PyObject *
PyvtkMRMLSegmentEditorNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSegmentEditorNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSegmentEditorNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSegmentEditorNode *tempr = vtkMRMLSegmentEditorNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSegmentEditorNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSegmentEditorNode::NewInstance());

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
PyvtkMRMLSegmentEditorNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSegmentEditorNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSegmentEditorNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLSegmentEditorNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

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
      op->vtkMRMLSegmentEditorNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLSegmentEditorNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_ConvertOverwriteModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertOverwriteModeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSegmentEditorNode::ConvertOverwriteModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_ConvertOverwriteModeToString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertOverwriteModeToString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLSegmentEditorNode::ConvertOverwriteModeToString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_GetSourceVolumeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceVolumeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLScalarVolumeNode *tempr = (ap.IsBound() ?
      op->GetSourceVolumeNode() :
      op->vtkMRMLSegmentEditorNode::GetSourceVolumeNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_SetAndObserveSourceVolumeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveSourceVolumeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  vtkMRMLScalarVolumeNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScalarVolumeNode"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveSourceVolumeNode(temp0);
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::SetAndObserveSourceVolumeNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_GetMasterVolumeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasterVolumeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLScalarVolumeNode *tempr = (ap.IsBound() ?
      op->GetMasterVolumeNode() :
      op->vtkMRMLSegmentEditorNode::GetMasterVolumeNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_SetAndObserveMasterVolumeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveMasterVolumeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  vtkMRMLScalarVolumeNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScalarVolumeNode"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveMasterVolumeNode(temp0);
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::SetAndObserveMasterVolumeNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_GetSegmentationNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentationNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSegmentationNode *tempr = (ap.IsBound() ?
      op->GetSegmentationNode() :
      op->vtkMRMLSegmentEditorNode::GetSegmentationNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_SetAndObserveSegmentationNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveSegmentationNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  vtkMRMLSegmentationNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveSegmentationNode(temp0);
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::SetAndObserveSegmentationNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_GetSelectedSegmentID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedSegmentID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSelectedSegmentID() :
      op->vtkMRMLSegmentEditorNode::GetSelectedSegmentID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_SetSelectedSegmentID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedSegmentID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedSegmentID(temp0);
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::SetSelectedSegmentID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_GetActiveEffectName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveEffectName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetActiveEffectName() :
      op->vtkMRMLSegmentEditorNode::GetActiveEffectName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_SetActiveEffectName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveEffectName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveEffectName(temp0);
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::SetActiveEffectName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_SetMaskMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskMode(temp0);
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::SetMaskMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_GetMaskMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaskMode() :
      op->vtkMRMLSegmentEditorNode::GetMaskMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_GetMaskSegmentID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskSegmentID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMaskSegmentID() :
      op->vtkMRMLSegmentEditorNode::GetMaskSegmentID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_SetMaskSegmentID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskSegmentID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskSegmentID(temp0);
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::SetMaskSegmentID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_SourceVolumeIntensityMaskOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SourceVolumeIntensityMaskOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SourceVolumeIntensityMaskOn();
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::SourceVolumeIntensityMaskOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_SourceVolumeIntensityMaskOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SourceVolumeIntensityMaskOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SourceVolumeIntensityMaskOff();
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::SourceVolumeIntensityMaskOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_GetSourceVolumeIntensityMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceVolumeIntensityMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSourceVolumeIntensityMask() :
      op->vtkMRMLSegmentEditorNode::GetSourceVolumeIntensityMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_SetSourceVolumeIntensityMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceVolumeIntensityMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSourceVolumeIntensityMask(temp0);
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::SetSourceVolumeIntensityMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_MasterVolumeIntensityMaskOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MasterVolumeIntensityMaskOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MasterVolumeIntensityMaskOn();
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::MasterVolumeIntensityMaskOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_MasterVolumeIntensityMaskOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MasterVolumeIntensityMaskOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MasterVolumeIntensityMaskOff();
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::MasterVolumeIntensityMaskOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_SetMasterVolumeIntensityMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasterVolumeIntensityMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMasterVolumeIntensityMask(temp0);
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::SetMasterVolumeIntensityMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_GetMasterVolumeIntensityMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasterVolumeIntensityMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMasterVolumeIntensityMask() :
      op->vtkMRMLSegmentEditorNode::GetMasterVolumeIntensityMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_SetSourceVolumeIntensityMaskRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceVolumeIntensityMaskRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSourceVolumeIntensityMaskRange(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::SetSourceVolumeIntensityMaskRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSegmentEditorNode_SetSourceVolumeIntensityMaskRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceVolumeIntensityMaskRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSourceVolumeIntensityMaskRange(temp0);
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::SetSourceVolumeIntensityMaskRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSegmentEditorNode_SetSourceVolumeIntensityMaskRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLSegmentEditorNode_SetSourceVolumeIntensityMaskRange_s1(self, args);
    case 1:
      return PyvtkMRMLSegmentEditorNode_SetSourceVolumeIntensityMaskRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceVolumeIntensityMaskRange");
  return nullptr;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_GetSourceVolumeIntensityMaskRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceVolumeIntensityMaskRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSourceVolumeIntensityMaskRange() :
      op->vtkMRMLSegmentEditorNode::GetSourceVolumeIntensityMaskRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_SetMasterVolumeIntensityMaskRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasterVolumeIntensityMaskRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMasterVolumeIntensityMaskRange(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::SetMasterVolumeIntensityMaskRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSegmentEditorNode_SetMasterVolumeIntensityMaskRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasterVolumeIntensityMaskRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMasterVolumeIntensityMaskRange(temp0);
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::SetMasterVolumeIntensityMaskRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSegmentEditorNode_SetMasterVolumeIntensityMaskRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLSegmentEditorNode_SetMasterVolumeIntensityMaskRange_s1(self, args);
    case 1:
      return PyvtkMRMLSegmentEditorNode_SetMasterVolumeIntensityMaskRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMasterVolumeIntensityMaskRange");
  return nullptr;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_GetMasterVolumeIntensityMaskRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasterVolumeIntensityMaskRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMasterVolumeIntensityMaskRange() :
      op->vtkMRMLSegmentEditorNode::GetMasterVolumeIntensityMaskRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_SetOverwriteMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOverwriteMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOverwriteMode(temp0);
    }
    else
    {
      op->vtkMRMLSegmentEditorNode::SetOverwriteMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentEditorNode_GetOverwriteMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverwriteMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentEditorNode *op = static_cast<vtkMRMLSegmentEditorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOverwriteMode() :
      op->vtkMRMLSegmentEditorNode::GetOverwriteMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSegmentEditorNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSegmentEditorNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSegmentEditorNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSegmentEditorNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLSegmentEditorNode\nC++: static vtkMRMLSegmentEditorNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSegmentEditorNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSegmentEditorNode\nC++: vtkMRMLSegmentEditorNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSegmentEditorNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSegmentEditorNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLSegmentEditorNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate a new node of this type.\n"},
  {"Copy", PyvtkMRMLSegmentEditorNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLSegmentEditorNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet unique node XML tag name (like Volume, Model)\n"},
  {"ConvertOverwriteModeFromString", PyvtkMRMLSegmentEditorNode_ConvertOverwriteModeFromString, METH_VARARGS,
   "ConvertOverwriteModeFromString(modeStr:str) -> int\nC++: static int ConvertOverwriteModeFromString(\n    const char *modeStr)\n\nConvert between constants IDs to/from string\n"},
  {"ConvertOverwriteModeToString", PyvtkMRMLSegmentEditorNode_ConvertOverwriteModeToString, METH_VARARGS,
   "ConvertOverwriteModeToString(mode:int) -> str\nC++: static const char *ConvertOverwriteModeToString(int mode)\n\nConvert between constants IDs to/from string\n"},
  {"GetSourceVolumeNode", PyvtkMRMLSegmentEditorNode_GetSourceVolumeNode, METH_VARARGS,
   "GetSourceVolumeNode(self) -> vtkMRMLScalarVolumeNode\nC++: vtkMRMLScalarVolumeNode *GetSourceVolumeNode()\n\nGet/set source volume node. Source volume node is used when\nediting requires an underlying image.\n"},
  {"SetAndObserveSourceVolumeNode", PyvtkMRMLSegmentEditorNode_SetAndObserveSourceVolumeNode, METH_VARARGS,
   "SetAndObserveSourceVolumeNode(self, node:vtkMRMLScalarVolumeNode)\n    -> None\nC++: void SetAndObserveSourceVolumeNode(\n    vtkMRMLScalarVolumeNode *node)\n\nGet/set source volume node. Source volume node is used when\nediting requires an underlying image.\n"},
  {"GetMasterVolumeNode", PyvtkMRMLSegmentEditorNode_GetMasterVolumeNode, METH_VARARGS,
   "GetMasterVolumeNode(self) -> vtkMRMLScalarVolumeNode\nC++: vtkMRMLScalarVolumeNode *GetMasterVolumeNode()\n\nDeprecated. Use GetSourceVolumeNode/SetAndObserveSourceVolumeNode\nmethods instead.\n"},
  {"SetAndObserveMasterVolumeNode", PyvtkMRMLSegmentEditorNode_SetAndObserveMasterVolumeNode, METH_VARARGS,
   "SetAndObserveMasterVolumeNode(self, node:vtkMRMLScalarVolumeNode)\n    -> None\nC++: void SetAndObserveMasterVolumeNode(\n    vtkMRMLScalarVolumeNode *node)\n\nDeprecated. Use GetSourceVolumeNode/SetAndObserveSourceVolumeNode\nmethods instead.\n"},
  {"GetSegmentationNode", PyvtkMRMLSegmentEditorNode_GetSegmentationNode, METH_VARARGS,
   "GetSegmentationNode(self) -> vtkMRMLSegmentationNode\nC++: vtkMRMLSegmentationNode *GetSegmentationNode()\n\nGet/set segmentation node\n"},
  {"SetAndObserveSegmentationNode", PyvtkMRMLSegmentEditorNode_SetAndObserveSegmentationNode, METH_VARARGS,
   "SetAndObserveSegmentationNode(self, node:vtkMRMLSegmentationNode)\n    -> None\nC++: void SetAndObserveSegmentationNode(\n    vtkMRMLSegmentationNode *node)\n\nGet/set segmentation node\n"},
  {"GetSelectedSegmentID", PyvtkMRMLSegmentEditorNode_GetSelectedSegmentID, METH_VARARGS,
   "GetSelectedSegmentID(self) -> str\nC++: virtual char *GetSelectedSegmentID()\n\nGet/set selected segment ID. This is the segment that is\ncurrently being edited.\n"},
  {"SetSelectedSegmentID", PyvtkMRMLSegmentEditorNode_SetSelectedSegmentID, METH_VARARGS,
   "SetSelectedSegmentID(self, _arg:str) -> None\nC++: virtual void SetSelectedSegmentID(const char *_arg)\n\nGet/set selected segment ID. This is the segment that is\ncurrently being edited.\n"},
  {"GetActiveEffectName", PyvtkMRMLSegmentEditorNode_GetActiveEffectName, METH_VARARGS,
   "GetActiveEffectName(self) -> str\nC++: virtual char *GetActiveEffectName()\n\nGet/set name of the active effect.\n"},
  {"SetActiveEffectName", PyvtkMRMLSegmentEditorNode_SetActiveEffectName, METH_VARARGS,
   "SetActiveEffectName(self, _arg:str) -> None\nC++: virtual void SetActiveEffectName(const char *_arg)\n\nGet/set name of the active effect.\n"},
  {"SetMaskMode", PyvtkMRMLSegmentEditorNode_SetMaskMode, METH_VARARGS,
   "SetMaskMode(self, _arg:int) -> None\nC++: virtual void SetMaskMode(int _arg)\n\nDefines which areas in the segmentation are editable. Uses\nvtkMRMLSegmentationNode::EditAllowed_... constants.\n\\sa vtkMRMLSegmentationNode::EditAllowedEverywhere,\n    vtkMRMLSegmentationNode::EditAllowedInsideAllSegments,\nvtkMRMLSegmentationNode::EditAllowedInsideVisibleSegments,\nvtkMRMLSegmentationNode::EditAllowedOutsideAllSegments,\nvtkMRMLSegmentationNode::EditAllowedOutsideVisibleSegments,\nvtkMRMLSegmentationNode::EditAllowedInsideSingleSegment\n"},
  {"GetMaskMode", PyvtkMRMLSegmentEditorNode_GetMaskMode, METH_VARARGS,
   "GetMaskMode(self) -> int\nC++: virtual int GetMaskMode()\n\nDefines which areas in the segmentation are editable. Uses\nvtkMRMLSegmentationNode::EditAllowed_... constants.\n\\sa vtkMRMLSegmentationNode::EditAllowedEverywhere,\n    vtkMRMLSegmentationNode::EditAllowedInsideAllSegments,\nvtkMRMLSegmentationNode::EditAllowedInsideVisibleSegments,\nvtkMRMLSegmentationNode::EditAllowedOutsideAllSegments,\nvtkMRMLSegmentationNode::EditAllowedOutsideVisibleSegments,\nvtkMRMLSegmentationNode::EditAllowedInsideSingleSegment\n"},
  {"GetMaskSegmentID", PyvtkMRMLSegmentEditorNode_GetMaskSegmentID, METH_VARARGS,
   "GetMaskSegmentID(self) -> str\nC++: virtual char *GetMaskSegmentID()\n\nGet/set mask segment ID. Painting is only allowed within the area\nof the mask segment if mask mode is\nEditAllowedInsideSingleSegment.\n\\sa vtkMRMLSegmentationNode::EditAllowedInsideSingleSegment,\n    SetMaskMode\n"},
  {"SetMaskSegmentID", PyvtkMRMLSegmentEditorNode_SetMaskSegmentID, METH_VARARGS,
   "SetMaskSegmentID(self, _arg:str) -> None\nC++: virtual void SetMaskSegmentID(const char *_arg)\n\nGet/set mask segment ID. Painting is only allowed within the area\nof the mask segment if mask mode is\nEditAllowedInsideSingleSegment.\n\\sa vtkMRMLSegmentationNode::EditAllowedInsideSingleSegment,\n    SetMaskMode\n"},
  {"SourceVolumeIntensityMaskOn", PyvtkMRMLSegmentEditorNode_SourceVolumeIntensityMaskOn, METH_VARARGS,
   "SourceVolumeIntensityMaskOn(self) -> None\nC++: virtual void SourceVolumeIntensityMaskOn()\n\nRestrict editable area to regions where source volume intensity\nis in the specified range.\n"},
  {"SourceVolumeIntensityMaskOff", PyvtkMRMLSegmentEditorNode_SourceVolumeIntensityMaskOff, METH_VARARGS,
   "SourceVolumeIntensityMaskOff(self) -> None\nC++: virtual void SourceVolumeIntensityMaskOff()\n\nRestrict editable area to regions where source volume intensity\nis in the specified range.\n"},
  {"GetSourceVolumeIntensityMask", PyvtkMRMLSegmentEditorNode_GetSourceVolumeIntensityMask, METH_VARARGS,
   "GetSourceVolumeIntensityMask(self) -> bool\nC++: virtual bool GetSourceVolumeIntensityMask()\n\nRestrict editable area to regions where source volume intensity\nis in the specified range.\n"},
  {"SetSourceVolumeIntensityMask", PyvtkMRMLSegmentEditorNode_SetSourceVolumeIntensityMask, METH_VARARGS,
   "SetSourceVolumeIntensityMask(self, _arg:bool) -> None\nC++: virtual void SetSourceVolumeIntensityMask(bool _arg)\n\nRestrict editable area to regions where source volume intensity\nis in the specified range.\n"},
  {"MasterVolumeIntensityMaskOn", PyvtkMRMLSegmentEditorNode_MasterVolumeIntensityMaskOn, METH_VARARGS,
   "MasterVolumeIntensityMaskOn(self) -> None\nC++: virtual void MasterVolumeIntensityMaskOn()\n\nDeprecated. Use Get/SetSourceVolumeIntensityMask method instead.\n"},
  {"MasterVolumeIntensityMaskOff", PyvtkMRMLSegmentEditorNode_MasterVolumeIntensityMaskOff, METH_VARARGS,
   "MasterVolumeIntensityMaskOff(self) -> None\nC++: virtual void MasterVolumeIntensityMaskOff()\n\nDeprecated. Use Get/SetSourceVolumeIntensityMask method instead.\n"},
  {"SetMasterVolumeIntensityMask", PyvtkMRMLSegmentEditorNode_SetMasterVolumeIntensityMask, METH_VARARGS,
   "SetMasterVolumeIntensityMask(self, enable:bool) -> None\nC++: virtual void SetMasterVolumeIntensityMask(bool enable)\n\nDeprecated. Use Get/SetSourceVolumeIntensityMask method instead.\n"},
  {"GetMasterVolumeIntensityMask", PyvtkMRMLSegmentEditorNode_GetMasterVolumeIntensityMask, METH_VARARGS,
   "GetMasterVolumeIntensityMask(self) -> bool\nC++: virtual bool GetMasterVolumeIntensityMask()\n\nDeprecated. Use Get/SetSourceVolumeIntensityMask method instead.\n"},
  {"SetSourceVolumeIntensityMaskRange", PyvtkMRMLSegmentEditorNode_SetSourceVolumeIntensityMaskRange, METH_VARARGS,
   "SetSourceVolumeIntensityMaskRange(self, _arg1:float, _arg2:float)\n    -> None\nC++: virtual void SetSourceVolumeIntensityMaskRange(double _arg1,\n    double _arg2)\nSetSourceVolumeIntensityMaskRange(self, _arg:(float, float))\n    -> None\nC++: void SetSourceVolumeIntensityMaskRange(const double _arg[2])\n\nGet/set source volume intensity range for masking. If\nSourceVolumeIntensityMask is enabled then only those areas are\neditable where source volume voxels are in this intensity range.\n\\sa SetSourceVolumeIntensityMask()\n"},
  {"GetSourceVolumeIntensityMaskRange", PyvtkMRMLSegmentEditorNode_GetSourceVolumeIntensityMaskRange, METH_VARARGS,
   "GetSourceVolumeIntensityMaskRange(self) -> (float, float)\nC++: virtual double *GetSourceVolumeIntensityMaskRange()\n\nGet/set source volume intensity range for masking. If\nSourceVolumeIntensityMask is enabled then only those areas are\neditable where source volume voxels are in this intensity range.\n\\sa SetSourceVolumeIntensityMask()\n"},
  {"SetMasterVolumeIntensityMaskRange", PyvtkMRMLSegmentEditorNode_SetMasterVolumeIntensityMaskRange, METH_VARARGS,
   "SetMasterVolumeIntensityMaskRange(self, _arg1:float, _arg2:float)\n    -> None\nC++: virtual void SetMasterVolumeIntensityMaskRange(double _arg1,\n    double _arg2)\nSetMasterVolumeIntensityMaskRange(self, _arg:(float, float))\n    -> None\nC++: void SetMasterVolumeIntensityMaskRange(const double _arg[2])\n\nDeprecated. Use Get/SetSourceVolumeIntensityMaskRange method\ninstead.\n"},
  {"GetMasterVolumeIntensityMaskRange", PyvtkMRMLSegmentEditorNode_GetMasterVolumeIntensityMaskRange, METH_VARARGS,
   "GetMasterVolumeIntensityMaskRange(self) -> (float, float)\nC++: virtual double *GetMasterVolumeIntensityMaskRange()\n\nDeprecated. Use Get/SetSourceVolumeIntensityMaskRange method\ninstead.\n"},
  {"SetOverwriteMode", PyvtkMRMLSegmentEditorNode_SetOverwriteMode, METH_VARARGS,
   "SetOverwriteMode(self, _arg:int) -> None\nC++: virtual void SetOverwriteMode(int _arg)\n\nDefines which areas are overwritten in other segments. Uses\nOverwrite... constants.\n"},
  {"GetOverwriteMode", PyvtkMRMLSegmentEditorNode_GetOverwriteMode, METH_VARARGS,
   "GetOverwriteMode(self) -> int\nC++: virtual int GetOverwriteMode()\n\nDefines which areas are overwritten in other segments. Uses\nOverwrite... constants.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSegmentEditorNode_Doc =
  "vtkMRMLSegmentEditorNode - Parameter set node for the segment editor\nwidget\n\n"
  "Superclass: vtkMRMLNode\n\n"
  "Stores parameters for a segment editor widget (selected segmentation,\n"
  "segment, source volume), and all the editor effects. The effect\n"
  "parameters are stored as attributes with names\n"
  "EffectName.ParameterName. If a parameter is changed, the node\n"
  "Modified event is not emitted, but the custom EffectParameterModified\n"
  "event that triggers update of the effect options widget only.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSegmentEditorNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerSegmentationsModuleMRMLPython.vtkMRMLSegmentEditorNode", // tp_name
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
  PyvtkMRMLSegmentEditorNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSegmentEditorNode_StaticNew()
{
  return vtkMRMLSegmentEditorNode::New();
}

PyObject *PyvtkMRMLSegmentEditorNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSegmentEditorNode_Type, PyvtkMRMLSegmentEditorNode_Methods,
    "vtkMRMLSegmentEditorNode",
 &PyvtkMRMLSegmentEditorNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLNode");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "EffectParameterModified", vtkMRMLSegmentEditorNode::EffectParameterModified },
        { "OverwriteAllSegments", vtkMRMLSegmentEditorNode::OverwriteAllSegments },
        { "OverwriteVisibleSegments", vtkMRMLSegmentEditorNode::OverwriteVisibleSegments },
        { "OverwriteNone", vtkMRMLSegmentEditorNode::OverwriteNone },
        { "Overwrite_Last", vtkMRMLSegmentEditorNode::Overwrite_Last },
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

void PyVTKAddFile_vtkMRMLSegmentEditorNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSegmentEditorNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSegmentEditorNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

