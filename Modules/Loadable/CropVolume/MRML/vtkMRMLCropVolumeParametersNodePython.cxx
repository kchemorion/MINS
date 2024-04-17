// python wrapper for vtkMRMLCropVolumeParametersNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLCropVolumeParametersNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLCropVolumeParametersNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLCropVolumeParametersNode_ClassNew(); }


static PyObject *
PyvtkMRMLCropVolumeParametersNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLCropVolumeParametersNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLCropVolumeParametersNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLCropVolumeParametersNode *tempr = vtkMRMLCropVolumeParametersNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLCropVolumeParametersNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLCropVolumeParametersNode::NewInstance());

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
PyvtkMRMLCropVolumeParametersNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLCropVolumeParametersNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLCropVolumeParametersNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLCropVolumeParametersNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

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
      op->vtkMRMLCropVolumeParametersNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLCropVolumeParametersNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLCropVolumeParametersNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_SetInputVolumeNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputVolumeNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputVolumeNodeID(temp0);
    }
    else
    {
      op->vtkMRMLCropVolumeParametersNode::SetInputVolumeNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_GetInputVolumeNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputVolumeNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInputVolumeNodeID() :
      op->vtkMRMLCropVolumeParametersNode::GetInputVolumeNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_GetInputVolumeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputVolumeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumeNode *tempr = (ap.IsBound() ?
      op->GetInputVolumeNode() :
      op->vtkMRMLCropVolumeParametersNode::GetInputVolumeNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_SetOutputVolumeNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputVolumeNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputVolumeNodeID(temp0);
    }
    else
    {
      op->vtkMRMLCropVolumeParametersNode::SetOutputVolumeNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_GetOutputVolumeNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputVolumeNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOutputVolumeNodeID() :
      op->vtkMRMLCropVolumeParametersNode::GetOutputVolumeNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_GetOutputVolumeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputVolumeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumeNode *tempr = (ap.IsBound() ?
      op->GetOutputVolumeNode() :
      op->vtkMRMLCropVolumeParametersNode::GetOutputVolumeNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_SetROINodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetROINodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetROINodeID(temp0);
    }
    else
    {
      op->vtkMRMLCropVolumeParametersNode::SetROINodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_GetROINodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetROINodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetROINodeID() :
      op->vtkMRMLCropVolumeParametersNode::GetROINodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_GetROINode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetROINode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDisplayableNode *tempr = (ap.IsBound() ?
      op->GetROINode() :
      op->vtkMRMLCropVolumeParametersNode::GetROINode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_SetROIAlignmentTransformNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetROIAlignmentTransformNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetROIAlignmentTransformNodeID(temp0);
    }
    else
    {
      op->vtkMRMLCropVolumeParametersNode::SetROIAlignmentTransformNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_GetROIAlignmentTransformNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetROIAlignmentTransformNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetROIAlignmentTransformNodeID() :
      op->vtkMRMLCropVolumeParametersNode::GetROIAlignmentTransformNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_GetROIAlignmentTransformNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetROIAlignmentTransformNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLTransformNode *tempr = (ap.IsBound() ?
      op->GetROIAlignmentTransformNode() :
      op->vtkMRMLCropVolumeParametersNode::GetROIAlignmentTransformNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_DeleteROIAlignmentTransformNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteROIAlignmentTransformNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeleteROIAlignmentTransformNode();
    }
    else
    {
      op->vtkMRMLCropVolumeParametersNode::DeleteROIAlignmentTransformNode();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_SetIsotropicResampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsotropicResampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsotropicResampling(temp0);
    }
    else
    {
      op->vtkMRMLCropVolumeParametersNode::SetIsotropicResampling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_GetIsotropicResampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsotropicResampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsotropicResampling() :
      op->vtkMRMLCropVolumeParametersNode::GetIsotropicResampling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_IsotropicResamplingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsotropicResamplingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IsotropicResamplingOn();
    }
    else
    {
      op->vtkMRMLCropVolumeParametersNode::IsotropicResamplingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_IsotropicResamplingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsotropicResamplingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IsotropicResamplingOff();
    }
    else
    {
      op->vtkMRMLCropVolumeParametersNode::IsotropicResamplingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_SetVoxelBased(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoxelBased");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVoxelBased(temp0);
    }
    else
    {
      op->vtkMRMLCropVolumeParametersNode::SetVoxelBased(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_GetVoxelBased(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoxelBased");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVoxelBased() :
      op->vtkMRMLCropVolumeParametersNode::GetVoxelBased());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_VoxelBasedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VoxelBasedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VoxelBasedOn();
    }
    else
    {
      op->vtkMRMLCropVolumeParametersNode::VoxelBasedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_VoxelBasedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VoxelBasedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VoxelBasedOff();
    }
    else
    {
      op->vtkMRMLCropVolumeParametersNode::VoxelBasedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_SetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationMode(temp0);
    }
    else
    {
      op->vtkMRMLCropVolumeParametersNode::SetInterpolationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_GetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationMode() :
      op->vtkMRMLCropVolumeParametersNode::GetInterpolationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_SetSpacingScalingConst(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacingScalingConst");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpacingScalingConst(temp0);
    }
    else
    {
      op->vtkMRMLCropVolumeParametersNode::SetSpacingScalingConst(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_GetSpacingScalingConst(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacingScalingConst");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpacingScalingConst() :
      op->vtkMRMLCropVolumeParametersNode::GetSpacingScalingConst());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_SetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillValue(temp0);
    }
    else
    {
      op->vtkMRMLCropVolumeParametersNode::SetFillValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCropVolumeParametersNode_GetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCropVolumeParametersNode *op = static_cast<vtkMRMLCropVolumeParametersNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFillValue() :
      op->vtkMRMLCropVolumeParametersNode::GetFillValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLCropVolumeParametersNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLCropVolumeParametersNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLCropVolumeParametersNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLCropVolumeParametersNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLCropVolumeParametersNode\nC++: static vtkMRMLCropVolumeParametersNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLCropVolumeParametersNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLCropVolumeParametersNode\nC++: vtkMRMLCropVolumeParametersNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLCropVolumeParametersNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLCropVolumeParametersNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLCropVolumeParametersNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"CopyContent", PyvtkMRMLCropVolumeParametersNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLCropVolumeParametersNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLCropVolumeParametersNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"SetInputVolumeNodeID", PyvtkMRMLCropVolumeParametersNode_SetInputVolumeNodeID, METH_VARARGS,
   "SetInputVolumeNodeID(self, nodeID:str) -> None\nC++: void SetInputVolumeNodeID(const char *nodeID)\n\nSet volume node to be cropped\n"},
  {"GetInputVolumeNodeID", PyvtkMRMLCropVolumeParametersNode_GetInputVolumeNodeID, METH_VARARGS,
   "GetInputVolumeNodeID(self) -> str\nC++: const char *GetInputVolumeNodeID()\n\nGet volume node to be cropped\n"},
  {"GetInputVolumeNode", PyvtkMRMLCropVolumeParametersNode_GetInputVolumeNode, METH_VARARGS,
   "GetInputVolumeNode(self) -> vtkMRMLVolumeNode\nC++: vtkMRMLVolumeNode *GetInputVolumeNode()\n\n"},
  {"SetOutputVolumeNodeID", PyvtkMRMLCropVolumeParametersNode_SetOutputVolumeNodeID, METH_VARARGS,
   "SetOutputVolumeNodeID(self, nodeID:str) -> None\nC++: void SetOutputVolumeNodeID(const char *nodeID)\n\nSet resulting cropped volume node\n"},
  {"GetOutputVolumeNodeID", PyvtkMRMLCropVolumeParametersNode_GetOutputVolumeNodeID, METH_VARARGS,
   "GetOutputVolumeNodeID(self) -> str\nC++: const char *GetOutputVolumeNodeID()\n\nGet resulting cropped volume node\n"},
  {"GetOutputVolumeNode", PyvtkMRMLCropVolumeParametersNode_GetOutputVolumeNode, METH_VARARGS,
   "GetOutputVolumeNode(self) -> vtkMRMLVolumeNode\nC++: vtkMRMLVolumeNode *GetOutputVolumeNode()\n\n"},
  {"SetROINodeID", PyvtkMRMLCropVolumeParametersNode_SetROINodeID, METH_VARARGS,
   "SetROINodeID(self, nodeID:str) -> None\nC++: void SetROINodeID(const char *nodeID)\n\nSet cropping region of interest. It must be\nvtkMRMLMarkupsROINode.\n"},
  {"GetROINodeID", PyvtkMRMLCropVolumeParametersNode_GetROINodeID, METH_VARARGS,
   "GetROINodeID(self) -> str\nC++: const char *GetROINodeID()\n\nGet cropping region of interest\n"},
  {"GetROINode", PyvtkMRMLCropVolumeParametersNode_GetROINode, METH_VARARGS,
   "GetROINode(self) -> vtkMRMLDisplayableNode\nC++: vtkMRMLDisplayableNode *GetROINode()\n\n"},
  {"SetROIAlignmentTransformNodeID", PyvtkMRMLCropVolumeParametersNode_SetROIAlignmentTransformNodeID, METH_VARARGS,
   "SetROIAlignmentTransformNodeID(self, nodeID:str) -> None\nC++: void SetROIAlignmentTransformNodeID(const char *nodeID)\n\nSet transform node that may be used for aligning the ROI with the\ninput volume.\n"},
  {"GetROIAlignmentTransformNodeID", PyvtkMRMLCropVolumeParametersNode_GetROIAlignmentTransformNodeID, METH_VARARGS,
   "GetROIAlignmentTransformNodeID(self) -> str\nC++: const char *GetROIAlignmentTransformNodeID()\n\n"},
  {"GetROIAlignmentTransformNode", PyvtkMRMLCropVolumeParametersNode_GetROIAlignmentTransformNode, METH_VARARGS,
   "GetROIAlignmentTransformNode(self) -> vtkMRMLTransformNode\nC++: vtkMRMLTransformNode *GetROIAlignmentTransformNode()\n\n"},
  {"DeleteROIAlignmentTransformNode", PyvtkMRMLCropVolumeParametersNode_DeleteROIAlignmentTransformNode, METH_VARARGS,
   "DeleteROIAlignmentTransformNode(self) -> None\nC++: void DeleteROIAlignmentTransformNode()\n\n"},
  {"SetIsotropicResampling", PyvtkMRMLCropVolumeParametersNode_SetIsotropicResampling, METH_VARARGS,
   "SetIsotropicResampling(self, _arg:bool) -> None\nC++: virtual void SetIsotropicResampling(bool _arg)\n\n"},
  {"GetIsotropicResampling", PyvtkMRMLCropVolumeParametersNode_GetIsotropicResampling, METH_VARARGS,
   "GetIsotropicResampling(self) -> bool\nC++: virtual bool GetIsotropicResampling()\n\n"},
  {"IsotropicResamplingOn", PyvtkMRMLCropVolumeParametersNode_IsotropicResamplingOn, METH_VARARGS,
   "IsotropicResamplingOn(self) -> None\nC++: virtual void IsotropicResamplingOn()\n\n"},
  {"IsotropicResamplingOff", PyvtkMRMLCropVolumeParametersNode_IsotropicResamplingOff, METH_VARARGS,
   "IsotropicResamplingOff(self) -> None\nC++: virtual void IsotropicResamplingOff()\n\n"},
  {"SetVoxelBased", PyvtkMRMLCropVolumeParametersNode_SetVoxelBased, METH_VARARGS,
   "SetVoxelBased(self, _arg:bool) -> None\nC++: virtual void SetVoxelBased(bool _arg)\n\n"},
  {"GetVoxelBased", PyvtkMRMLCropVolumeParametersNode_GetVoxelBased, METH_VARARGS,
   "GetVoxelBased(self) -> bool\nC++: virtual bool GetVoxelBased()\n\n"},
  {"VoxelBasedOn", PyvtkMRMLCropVolumeParametersNode_VoxelBasedOn, METH_VARARGS,
   "VoxelBasedOn(self) -> None\nC++: virtual void VoxelBasedOn()\n\n"},
  {"VoxelBasedOff", PyvtkMRMLCropVolumeParametersNode_VoxelBasedOff, METH_VARARGS,
   "VoxelBasedOff(self) -> None\nC++: virtual void VoxelBasedOff()\n\n"},
  {"SetInterpolationMode", PyvtkMRMLCropVolumeParametersNode_SetInterpolationMode, METH_VARARGS,
   "SetInterpolationMode(self, _arg:int) -> None\nC++: virtual void SetInterpolationMode(int _arg)\n\n"},
  {"GetInterpolationMode", PyvtkMRMLCropVolumeParametersNode_GetInterpolationMode, METH_VARARGS,
   "GetInterpolationMode(self) -> int\nC++: virtual int GetInterpolationMode()\n\n"},
  {"SetSpacingScalingConst", PyvtkMRMLCropVolumeParametersNode_SetSpacingScalingConst, METH_VARARGS,
   "SetSpacingScalingConst(self, _arg:float) -> None\nC++: virtual void SetSpacingScalingConst(double _arg)\n\n"},
  {"GetSpacingScalingConst", PyvtkMRMLCropVolumeParametersNode_GetSpacingScalingConst, METH_VARARGS,
   "GetSpacingScalingConst(self) -> float\nC++: virtual double GetSpacingScalingConst()\n\n"},
  {"SetFillValue", PyvtkMRMLCropVolumeParametersNode_SetFillValue, METH_VARARGS,
   "SetFillValue(self, _arg:float) -> None\nC++: virtual void SetFillValue(double _arg)\n\n"},
  {"GetFillValue", PyvtkMRMLCropVolumeParametersNode_GetFillValue, METH_VARARGS,
   "GetFillValue(self) -> float\nC++: virtual double GetFillValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLCropVolumeParametersNode_Doc =
  "vtkMRMLVolumeRenderingParametersNode - MRML node for storing a slice\nthrough RAS space\n\n"
  "Superclass: vtkMRMLNode\n\n"
  "This node stores the information about the currently selected volume\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLCropVolumeParametersNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerCropVolumeModuleMRMLPython.vtkMRMLCropVolumeParametersNode", // tp_name
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
  PyvtkMRMLCropVolumeParametersNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLCropVolumeParametersNode_StaticNew()
{
  return vtkMRMLCropVolumeParametersNode::New();
}

PyObject *PyvtkMRMLCropVolumeParametersNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLCropVolumeParametersNode_Type, PyvtkMRMLCropVolumeParametersNode_Methods,
    "vtkMRMLCropVolumeParametersNode",
 &PyvtkMRMLCropVolumeParametersNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLNode");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "InterpolationNearestNeighbor", vtkMRMLCropVolumeParametersNode::InterpolationNearestNeighbor },
        { "InterpolationLinear", vtkMRMLCropVolumeParametersNode::InterpolationLinear },
        { "InterpolationWindowedSinc", vtkMRMLCropVolumeParametersNode::InterpolationWindowedSinc },
        { "InterpolationBSpline", vtkMRMLCropVolumeParametersNode::InterpolationBSpline },
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

void PyVTKAddFile_vtkMRMLCropVolumeParametersNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLCropVolumeParametersNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLCropVolumeParametersNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

