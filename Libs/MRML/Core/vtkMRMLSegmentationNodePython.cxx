// python wrapper for vtkMRMLSegmentationNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSegmentationNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSegmentationNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSegmentationNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLDisplayableNode_ClassNew
extern "C" { PyObject *PyvtkMRMLDisplayableNode_ClassNew(); }
#define DECLARED_PyvtkMRMLDisplayableNode_ClassNew
#endif

static PyObject *
PyvtkMRMLSegmentationNode_GetSegmentIDAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSegmentIDAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkMRMLSegmentationNode::GetSegmentIDAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSegmentationNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSegmentationNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSegmentationNode *tempr = vtkMRMLSegmentationNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSegmentationNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSegmentationNode::NewInstance());

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
PyvtkMRMLSegmentationNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSegmentationNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSegmentationNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLSegmentationNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

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
      op->vtkMRMLSegmentationNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLSegmentationNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLSegmentationNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_GetRASBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRASBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetRASBounds(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationNode::GetRASBounds(temp0);
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
PyvtkMRMLSegmentationNode_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationNode::GetBounds(temp0);
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
PyvtkMRMLSegmentationNode_CanApplyNonLinearTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanApplyNonLinearTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanApplyNonLinearTransforms() :
      op->vtkMRMLSegmentationNode::CanApplyNonLinearTransforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_ApplyTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->ApplyTransformMatrix(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationNode::ApplyTransformMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_ApplyTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->ApplyTransform(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationNode::ApplyTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLSegmentationNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_CreateDefaultDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultDisplayNodes();
    }
    else
    {
      op->vtkMRMLSegmentationNode::CreateDefaultDisplayNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_OnSubjectHierarchyUIDAdded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnSubjectHierarchyUIDAdded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  vtkMRMLSubjectHierarchyNode *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSubjectHierarchyNode") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->OnSubjectHierarchyUIDAdded(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationNode::OnSubjectHierarchyUIDAdded(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_GetSegmentSubjectHierarchyItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentSubjectHierarchyItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  std::string temp0;
  vtkMRMLSubjectHierarchyNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLSubjectHierarchyNode"))
  {
    long long tempr = (ap.IsBound() ?
      op->GetSegmentSubjectHierarchyItem(temp0, temp1) :
      op->vtkMRMLSegmentationNode::GetSegmentSubjectHierarchyItem(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_GenerateMergedLabelmapForAllSegments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateMergedLabelmapForAllSegments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  vtkOrientedImageData *temp0 = nullptr;
  int temp1 = vtkSegmentation::EXTENT_UNION_OF_EFFECTIVE_SEGMENTS;
  vtkOrientedImageData *temp2 = nullptr;
  vtkStringArray *temp3 = nullptr;
  vtkIntArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 5) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkOrientedImageData")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkStringArray")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp4, "vtkIntArray")))
  {
    bool tempr = (ap.IsBound() ?
      op->GenerateMergedLabelmapForAllSegments(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMRMLSegmentationNode::GenerateMergedLabelmapForAllSegments(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_ConvertMaskModeToString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertMaskModeToString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLSegmentationNode::ConvertMaskModeToString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_ConvertMaskModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertMaskModeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSegmentationNode::ConvertMaskModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_GenerateEditMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEditMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  vtkOrientedImageData *temp0 = nullptr;
  int temp1;
  vtkOrientedImageData *temp2 = nullptr;
  std::string temp3 = "";
  std::string temp4 = "";
  vtkOrientedImageData *temp5 = nullptr;
  size_t size6 = 0;
  double store6[2*2];
  double *temp6 = nullptr;
  double *save6 = nullptr;
  if (ap.GetArgSize(6) > 0)
  {
    size6 = 2;
    temp6 = store6;
    save6 = store6 + 2;
  }
  vtkMRMLSegmentationDisplayNode *temp7 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 8) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkOrientedImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp5, "vtkOrientedImageData")) &&
      (ap.NoArgsLeft() || ap.GetArray(temp6, size6)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp7, "vtkMRMLSegmentationDisplayNode")))
  {
    vtkPythonArgs::Save(temp6, save6, size6);

    bool tempr = (ap.IsBound() ?
      op->GenerateEditMask(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkMRMLSegmentationNode::GenerateEditMask(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_GetReferenceImageGeometryReferenceRole(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetReferenceImageGeometryReferenceRole");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSegmentationNode::GetReferenceImageGeometryReferenceRole();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_SetReferenceImageGeometryParameterFromVolumeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceImageGeometryParameterFromVolumeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  vtkMRMLScalarVolumeNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScalarVolumeNode"))
  {
    if (ap.IsBound())
    {
      op->SetReferenceImageGeometryParameterFromVolumeNode(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationNode::SetReferenceImageGeometryParameterFromVolumeNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_GetSegmentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegmentation *tempr = (ap.IsBound() ?
      op->GetSegmentation() :
      op->vtkMRMLSegmentationNode::GetSegmentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_SetAndObserveSegmentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveSegmentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  vtkSegmentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentation"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveSegmentation(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationNode::SetAndObserveSegmentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_SetSourceRepresentationToBinaryLabelmap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceRepresentationToBinaryLabelmap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetSourceRepresentationToBinaryLabelmap() :
      op->vtkMRMLSegmentationNode::SetSourceRepresentationToBinaryLabelmap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_SetSourceRepresentationToClosedSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceRepresentationToClosedSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetSourceRepresentationToClosedSurface() :
      op->vtkMRMLSegmentationNode::SetSourceRepresentationToClosedSurface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_SetMasterRepresentationToBinaryLabelmap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasterRepresentationToBinaryLabelmap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetMasterRepresentationToBinaryLabelmap() :
      op->vtkMRMLSegmentationNode::SetMasterRepresentationToBinaryLabelmap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_SetMasterRepresentationToClosedSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasterRepresentationToClosedSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetMasterRepresentationToClosedSurface() :
      op->vtkMRMLSegmentationNode::SetMasterRepresentationToClosedSurface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_CreateBinaryLabelmapRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateBinaryLabelmapRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CreateBinaryLabelmapRepresentation() :
      op->vtkMRMLSegmentationNode::CreateBinaryLabelmapRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_RemoveBinaryLabelmapRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBinaryLabelmapRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBinaryLabelmapRepresentation();
    }
    else
    {
      op->vtkMRMLSegmentationNode::RemoveBinaryLabelmapRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_GetBinaryLabelmapRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryLabelmapRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  std::string temp0;
  vtkOrientedImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBinaryLabelmapRepresentation(temp0, temp1) :
      op->vtkMRMLSegmentationNode::GetBinaryLabelmapRepresentation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_GetBinaryLabelmapInternalRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryLabelmapInternalRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkOrientedImageData *tempr = (ap.IsBound() ?
      op->GetBinaryLabelmapInternalRepresentation(temp0) :
      op->vtkMRMLSegmentationNode::GetBinaryLabelmapInternalRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_CreateClosedSurfaceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateClosedSurfaceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CreateClosedSurfaceRepresentation() :
      op->vtkMRMLSegmentationNode::CreateClosedSurfaceRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_RemoveClosedSurfaceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveClosedSurfaceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveClosedSurfaceRepresentation();
    }
    else
    {
      op->vtkMRMLSegmentationNode::RemoveClosedSurfaceRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_GetClosedSurfaceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosedSurfaceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  std::string temp0;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetClosedSurfaceRepresentation(temp0, temp1) :
      op->vtkMRMLSegmentationNode::GetClosedSurfaceRepresentation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_GetClosedSurfaceInternalRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosedSurfaceInternalRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetClosedSurfaceInternalRepresentation(temp0) :
      op->vtkMRMLSegmentationNode::GetClosedSurfaceInternalRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_AddSegmentFromClosedSurfaceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSegmentFromClosedSurfaceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  vtkPolyData *temp0 = nullptr;
  std::string temp1 = "";
  size_t size2 = 0;
  double store2[2*3];
  double *temp2 = nullptr;
  double *save2 = nullptr;
  if (ap.GetArgSize(2) > 0)
  {
    size2 = 3;
    temp2 = store2;
    save2 = store2 + 3;
  }
  std::string temp3 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 4) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    std::string tempr = (ap.IsBound() ?
      op->AddSegmentFromClosedSurfaceRepresentation(temp0, temp1, temp2, temp3) :
      op->vtkMRMLSegmentationNode::AddSegmentFromClosedSurfaceRepresentation(temp0, temp1, temp2, temp3));

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
PyvtkMRMLSegmentationNode_AddSegmentFromBinaryLabelmapRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSegmentFromBinaryLabelmapRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  vtkOrientedImageData *temp0 = nullptr;
  std::string temp1 = "";
  size_t size2 = 0;
  double store2[2*3];
  double *temp2 = nullptr;
  double *save2 = nullptr;
  if (ap.GetArgSize(2) > 0)
  {
    size2 = 3;
    temp2 = store2;
    save2 = store2 + 3;
  }
  std::string temp3 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 4) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    std::string tempr = (ap.IsBound() ?
      op->AddSegmentFromBinaryLabelmapRepresentation(temp0, temp1, temp2, temp3) :
      op->vtkMRMLSegmentationNode::AddSegmentFromBinaryLabelmapRepresentation(temp0, temp1, temp2, temp3));

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
PyvtkMRMLSegmentationNode_RemoveSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveSegment(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationNode::RemoveSegment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_GetSegmentCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  std::string temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSegmentCenter(temp0) :
      op->vtkMRMLSegmentationNode::GetSegmentCenter(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSegmentationNode_GetSegmentCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  std::string temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetSegmentCenter(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationNode::GetSegmentCenter(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSegmentationNode_GetSegmentCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLSegmentationNode_GetSegmentCenter_s1(self, args);
    case 2:
      return PyvtkMRMLSegmentationNode_GetSegmentCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSegmentCenter");
  return nullptr;
}


static PyObject *
PyvtkMRMLSegmentationNode_GetSegmentCenterRAS_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentCenterRAS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  std::string temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSegmentCenterRAS(temp0) :
      op->vtkMRMLSegmentationNode::GetSegmentCenterRAS(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSegmentationNode_GetSegmentCenterRAS_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentCenterRAS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  std::string temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetSegmentCenterRAS(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationNode::GetSegmentCenterRAS(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSegmentationNode_GetSegmentCenterRAS(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLSegmentationNode_GetSegmentCenterRAS_s1(self, args);
    case 2:
      return PyvtkMRMLSegmentationNode_GetSegmentCenterRAS_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSegmentCenterRAS");
  return nullptr;
}


static PyObject *
PyvtkMRMLSegmentationNode_SetSegmentListFilterEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentListFilterEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSegmentListFilterEnabled(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationNode::SetSegmentListFilterEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_GetSegmentListFilterEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentListFilterEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSegmentListFilterEnabled() :
      op->vtkMRMLSegmentationNode::GetSegmentListFilterEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_SegmentListFilterEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SegmentListFilterEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SegmentListFilterEnabledOn();
    }
    else
    {
      op->vtkMRMLSegmentationNode::SegmentListFilterEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_SegmentListFilterEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SegmentListFilterEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SegmentListFilterEnabledOff();
    }
    else
    {
      op->vtkMRMLSegmentationNode::SegmentListFilterEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_SetSegmentListFilterOptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentListFilterOptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSegmentListFilterOptions(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationNode::SetSegmentListFilterOptions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_GetSegmentListFilterOptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentListFilterOptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetSegmentListFilterOptions() :
      op->vtkMRMLSegmentationNode::GetSegmentListFilterOptions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_SetLabelmapConversionColorTableNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelmapConversionColorTableNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelmapConversionColorTableNodeID(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationNode::SetLabelmapConversionColorTableNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationNode_GetLabelmapConversionColorTableNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelmapConversionColorTableNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationNode *op = static_cast<vtkMRMLSegmentationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLColorTableNode *tempr = (ap.IsBound() ?
      op->GetLabelmapConversionColorTableNode() :
      op->vtkMRMLSegmentationNode::GetLabelmapConversionColorTableNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSegmentationNode_Methods[] = {
  {"GetSegmentIDAttributeName", PyvtkMRMLSegmentationNode_GetSegmentIDAttributeName, METH_VARARGS,
   "GetSegmentIDAttributeName() -> str\nC++: static const char *GetSegmentIDAttributeName()\n\n"},
  {"IsTypeOf", PyvtkMRMLSegmentationNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSegmentationNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSegmentationNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLSegmentationNode\nC++: static vtkMRMLSegmentationNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSegmentationNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSegmentationNode\nC++: vtkMRMLSegmentationNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSegmentationNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSegmentationNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLSegmentationNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of a GAD node.\n"},
  {"CopyContent", PyvtkMRMLSegmentationNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLSegmentationNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLSegmentationNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet unique node XML tag name (like Volume, Model)\n"},
  {"GetRASBounds", PyvtkMRMLSegmentationNode_GetRASBounds, METH_VARARGS,
   "GetRASBounds(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void GetRASBounds(double bounds[6]) override;\n\nGet bounding box in global RAS form (xmin,xmax, ymin,ymax,\nzmin,zmax). This method returns the bounds of the object with any\ntransforms that may be applied to it.\n\\sa GetBounds()\n"},
  {"GetBounds", PyvtkMRMLSegmentationNode_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nGet bounding box in global RAS form (xmin,xmax, ymin,ymax,\nzmin,zmax). This method always returns the bounds of the\nuntransformed object.\n\\sa GetRASBounds()\n"},
  {"CanApplyNonLinearTransforms", PyvtkMRMLSegmentationNode_CanApplyNonLinearTransforms, METH_VARARGS,
   "CanApplyNonLinearTransforms(self) -> bool\nC++: bool CanApplyNonLinearTransforms() override;\n\nReturns true if the transformable node can apply non linear\ntransforms\n\\sa ApplyTransform\n"},
  {"ApplyTransformMatrix", PyvtkMRMLSegmentationNode_ApplyTransformMatrix, METH_VARARGS,
   "ApplyTransformMatrix(self, transformMatrix:vtkMatrix4x4) -> None\nC++: void ApplyTransformMatrix(vtkMatrix4x4 *transformMatrix)\n    override;\n\nApply a transform matrix on the segmentation\n\\sa SetAndObserveTransformNodeID, ApplyTransform,\n    CanApplyNonLinearTransforms\n"},
  {"ApplyTransform", PyvtkMRMLSegmentationNode_ApplyTransform, METH_VARARGS,
   "ApplyTransform(self, transform:vtkAbstractTransform) -> None\nC++: void ApplyTransform(vtkAbstractTransform *transform)\n    override;\n\nApply a transform on the segmentation\n\\sa SetAndObserveTransformNodeID, CanApplyNonLinearTransforms\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLSegmentationNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate a segmentation storage node\n"},
  {"CreateDefaultDisplayNodes", PyvtkMRMLSegmentationNode_CreateDefaultDisplayNodes, METH_VARARGS,
   "CreateDefaultDisplayNodes(self) -> None\nC++: void CreateDefaultDisplayNodes() override;\n\nCreate and observe a segmentation display node\n"},
  {"OnSubjectHierarchyUIDAdded", PyvtkMRMLSegmentationNode_OnSubjectHierarchyUIDAdded, METH_VARARGS,
   "OnSubjectHierarchyUIDAdded(self,\n    shNode:vtkMRMLSubjectHierarchyNode, itemWithNewUID:int)\n    -> None\nC++: virtual void OnSubjectHierarchyUIDAdded(\n    vtkMRMLSubjectHierarchyNode *shNode, vtkIdType itemWithNewUID)\n\nFunction called from segmentation logic when UID is added in a\nsubject hierarchy node. In case the newly added UID is a volume\nnode referenced from this segmentation, its geometry will be set\nas image geometry conversion parameter. The \"other order\", i.e.\nwhen the volume is loaded first and the segmentation second,\nshould be handled at loading time of the segmentation (because\nthen we already know about the volume)\n\\param shNode Subject hierarchy node that contains the item\n    (should be the only SH node in the scene)\n\\param itemWithNewUID ID of subject hierarchy item that just got\n    a new UID\n"},
  {"GetSegmentSubjectHierarchyItem", PyvtkMRMLSegmentationNode_GetSegmentSubjectHierarchyItem, METH_VARARGS,
   "GetSegmentSubjectHierarchyItem(self, segmentID:str,\n    shNode:vtkMRMLSubjectHierarchyNode) -> int\nC++: virtual vtkIdType GetSegmentSubjectHierarchyItem(\n    std::string segmentID, vtkMRMLSubjectHierarchyNode *shNode)\n\nGet subject hierarchy item belonging to a certain segment\n\\param segmentID ID of segment contained by this segmentation to\n    get the subject hierarchy virtual item for\n\\param shNode Subject hierarchy node to search in (there should\n    be only one in the scene and it can be got\n  using vtkMRMLSubjectHierarchyNode::GetSubjectHierarchyNode)\n"},
  {"GenerateMergedLabelmapForAllSegments", PyvtkMRMLSegmentationNode_GenerateMergedLabelmapForAllSegments, METH_VARARGS,
   "GenerateMergedLabelmapForAllSegments(self,\n    mergedImageData:vtkOrientedImageData,\n    extentComputationMode:int=...,\n    mergedLabelmapGeometry:vtkOrientedImageData=...,\n    segmentIDs:vtkStringArray=..., labelValues:vtkIntArray=...)\n    -> bool\nC++: virtual bool GenerateMergedLabelmapForAllSegments(\n    vtkOrientedImageData *mergedImageData,\n    int extentComputationMode=vtkSegmentation::EXTENT_UNION_OF_EFFECTIVE_SEGMENTS,\n     vtkOrientedImageData *mergedLabelmapGeometry=nullptr,\n    vtkStringArray *segmentIDs=nullptr,\n    vtkIntArray *labelValues=nullptr)\n\nPython-accessible version of the more generic \\sa\nGenerateMergedLabelmap. The last argument specifying the list of\nsegments to be included is omitted, which means that all the\nsegments will be merged.\n\\param mergedImageData Output image data for the merged labelmap\n    image data. Voxels of background volume will be\nof signed short type. Label value of n-th segment in segmentIDs\nlist will be (n + 1), or will be specified in labelValues. Label\nvalue of background = 0.\n\\param extentComputationMode Determines how to compute extents\n    (EXTENT_REFERENCE_GEOMETRY, EXTENT_UNION_OF_SEGMENTS,\n\\param mergedLabelmapGeometry Determines geometry of merged\n    labelmap if not nullptr, automatically determined otherwise\n\\param segmentIDs List of IDs of segments to include in the\n    merged labelmap. If empty or missing, then all segments are\n    included\n\\param labelValues Input list of label values that will be used\n    in the merged labelmap.\n  If not specified, then the label values in the segmentation\nwill be used.\n  The size of the array should match the number of segment IDs\nused in the merged labelmap.\n\\sa GenerateMergedLabelmap\n"},
  {"ConvertMaskModeToString", PyvtkMRMLSegmentationNode_ConvertMaskModeToString, METH_VARARGS,
   "ConvertMaskModeToString(mode:int) -> str\nC++: static const char *ConvertMaskModeToString(int mode)\n\nConvert between constants IDs to/from string\n"},
  {"ConvertMaskModeFromString", PyvtkMRMLSegmentationNode_ConvertMaskModeFromString, METH_VARARGS,
   "ConvertMaskModeFromString(modeStr:str) -> int\nC++: static int ConvertMaskModeFromString(const char *modeStr)\n\nConvert between constants IDs to/from string\n"},
  {"GenerateEditMask", PyvtkMRMLSegmentationNode_GenerateEditMask, METH_VARARGS,
   "GenerateEditMask(self, maskImage:vtkOrientedImageData,\n    editMode:int, referenceGeometry:vtkOrientedImageData,\n    editedSegmentID:str=..., maskSegmentID:str=...,\n    sourceVolume:vtkOrientedImageData=...,\n    editableIntensityRange:[float, float]=...,\n    displayNode:vtkMRMLSegmentationDisplayNode=...) -> bool\nC++: virtual bool GenerateEditMask(\n    vtkOrientedImageData *maskImage, int editMode,\n    vtkOrientedImageData *referenceGeometry,\n    std::string editedSegmentID=\"\",\n    std::string maskSegmentID=\"\",\n    vtkOrientedImageData *sourceVolume=nullptr,\n    double editableIntensityRange[2]=nullptr,\n    vtkMRMLSegmentationDisplayNode *displayNode=nullptr)\n\nGenerates an edit mask image. If a mask voxel is non-zero it\nmeans that the image at that position is editable.\n\\param maskImage output image, contains non-zero voxels where\n    editing is not allowed\n\\param editMode defines editable regions based on existing\n    segments\n\\param referenceGeometry defines image geometry (extent and IJK\n    to world matrix) of the output\n\\param editedSegmentID this segment will be always editable\n    (regardless of editMode), optional\n\\param sourceVolume used for intensity-based masking\n\\param editableIntensityRange used for intensity-based masking\n\\param displayNode used when edit mode refers to visible\n    segments.\n  If not specified then the first display node is used.\n\\return Returns true is mask is successfully generated.\n"},
  {"GetReferenceImageGeometryReferenceRole", PyvtkMRMLSegmentationNode_GetReferenceImageGeometryReferenceRole, METH_VARARGS,
   "GetReferenceImageGeometryReferenceRole() -> str\nC++: static std::string GetReferenceImageGeometryReferenceRole()\n\nExpose reference identifier to get the volume node defining the\nreference image geometry if any\n"},
  {"SetReferenceImageGeometryParameterFromVolumeNode", PyvtkMRMLSegmentationNode_SetReferenceImageGeometryParameterFromVolumeNode, METH_VARARGS,
   "SetReferenceImageGeometryParameterFromVolumeNode(self,\n    volumeNode:vtkMRMLScalarVolumeNode) -> None\nC++: virtual void SetReferenceImageGeometryParameterFromVolumeNode(\n    vtkMRMLScalarVolumeNode *volumeNode)\n\nSet reference image geometry conversion parameter from the volume\nnode, keeping reference\n"},
  {"GetSegmentation", PyvtkMRMLSegmentationNode_GetSegmentation, METH_VARARGS,
   "GetSegmentation(self) -> vtkSegmentation\nC++: virtual vtkSegmentation *GetSegmentation()\n\nGet segmentation object\n"},
  {"SetAndObserveSegmentation", PyvtkMRMLSegmentationNode_SetAndObserveSegmentation, METH_VARARGS,
   "SetAndObserveSegmentation(self, segmentation:vtkSegmentation)\n    -> None\nC++: void SetAndObserveSegmentation(vtkSegmentation *segmentation)\n\nSet and observe segmentation object\n"},
  {"SetSourceRepresentationToBinaryLabelmap", PyvtkMRMLSegmentationNode_SetSourceRepresentationToBinaryLabelmap, METH_VARARGS,
   "SetSourceRepresentationToBinaryLabelmap(self) -> bool\nC++: virtual bool SetSourceRepresentationToBinaryLabelmap()\n\nChange source representation. All other representations are\nautomatically computed from the source representation.\n"},
  {"SetSourceRepresentationToClosedSurface", PyvtkMRMLSegmentationNode_SetSourceRepresentationToClosedSurface, METH_VARARGS,
   "SetSourceRepresentationToClosedSurface(self) -> bool\nC++: virtual bool SetSourceRepresentationToClosedSurface()\n\nChange source representation. All other representations are\nautomatically computed from the source representation.\n"},
  {"SetMasterRepresentationToBinaryLabelmap", PyvtkMRMLSegmentationNode_SetMasterRepresentationToBinaryLabelmap, METH_VARARGS,
   "SetMasterRepresentationToBinaryLabelmap(self) -> bool\nC++: virtual bool SetMasterRepresentationToBinaryLabelmap()\n\n\\deprecated Use SetSourceRepresentationToBinaryLabelmap instead.\n"},
  {"SetMasterRepresentationToClosedSurface", PyvtkMRMLSegmentationNode_SetMasterRepresentationToClosedSurface, METH_VARARGS,
   "SetMasterRepresentationToClosedSurface(self) -> bool\nC++: virtual bool SetMasterRepresentationToClosedSurface()\n\n\\deprecated Use SetSourceRepresentationToClosedSurface instead.\n"},
  {"CreateBinaryLabelmapRepresentation", PyvtkMRMLSegmentationNode_CreateBinaryLabelmapRepresentation, METH_VARARGS,
   "CreateBinaryLabelmapRepresentation(self) -> bool\nC++: virtual bool CreateBinaryLabelmapRepresentation()\n\nGenerate binary labelmap representation for all segments.\n"},
  {"RemoveBinaryLabelmapRepresentation", PyvtkMRMLSegmentationNode_RemoveBinaryLabelmapRepresentation, METH_VARARGS,
   "RemoveBinaryLabelmapRepresentation(self) -> None\nC++: virtual void RemoveBinaryLabelmapRepresentation()\n\nRemove binary labelmap representation for all segments.\n"},
  {"GetBinaryLabelmapRepresentation", PyvtkMRMLSegmentationNode_GetBinaryLabelmapRepresentation, METH_VARARGS,
   "GetBinaryLabelmapRepresentation(self, segmentId:str,\n    outputBinaryLabelmap:vtkOrientedImageData) -> bool\nC++: virtual bool GetBinaryLabelmapRepresentation(\n    const std::string segmentId,\n    vtkOrientedImageData *outputBinaryLabelmap)\n\nGet a segment as a binary labelmap. If representation does not\nexist yet then CreateBinaryLabelmapRepresentation() must be\ncalled before this method. This function returns a copy of the\nsegment binary labelmap in outputBinaryLabelmap. Returns true on\nsuccess.\n"},
  {"GetBinaryLabelmapInternalRepresentation", PyvtkMRMLSegmentationNode_GetBinaryLabelmapInternalRepresentation, METH_VARARGS,
   "GetBinaryLabelmapInternalRepresentation(self, segmentId:str)\n    -> vtkOrientedImageData\nC++: virtual vtkOrientedImageData *GetBinaryLabelmapInternalRepresentation(\n    const std::string segmentId)\n\nGet low-level access to the image data of a segment's binary\nlabelmap representation. If representation does not exist yet\nthen CreateBinaryLabelmapRepresentation() must be called before\nthis method. This function returns a pointer to the original\nlabelmap representation in the segment. The binary labelmap can\nbe a shared labelmap containing multiple segments. To get a list\nof all segments in a shared labelmap, call\nvtkSegmentation::GetSegmentIDsSharingRepresentation(). The label\nvalue used for each segment can be retrieved using\nvtkSegment::GetLabelValue().\n"},
  {"CreateClosedSurfaceRepresentation", PyvtkMRMLSegmentationNode_CreateClosedSurfaceRepresentation, METH_VARARGS,
   "CreateClosedSurfaceRepresentation(self) -> bool\nC++: virtual bool CreateClosedSurfaceRepresentation()\n\nGenerate closed surface representation for all segments. Useful\nfor 3D visualization.\n"},
  {"RemoveClosedSurfaceRepresentation", PyvtkMRMLSegmentationNode_RemoveClosedSurfaceRepresentation, METH_VARARGS,
   "RemoveClosedSurfaceRepresentation(self) -> None\nC++: virtual void RemoveClosedSurfaceRepresentation()\n\nRemove closed surface representation for all segments.\n"},
  {"GetClosedSurfaceRepresentation", PyvtkMRMLSegmentationNode_GetClosedSurfaceRepresentation, METH_VARARGS,
   "GetClosedSurfaceRepresentation(self, segmentId:str,\n    outputClosedSurface:vtkPolyData) -> bool\nC++: virtual bool GetClosedSurfaceRepresentation(\n    const std::string segmentId, vtkPolyData *outputClosedSurface)\n\nGet a segment as a surface mesh. If representation does not exist\nyet then CreateClosedSurfaceRepresentation() must be called\nbefore this method. This function returns a copy of the segment\nclosed surface in outputClosedSurface. Returns true on success.\n"},
  {"GetClosedSurfaceInternalRepresentation", PyvtkMRMLSegmentationNode_GetClosedSurfaceInternalRepresentation, METH_VARARGS,
   "GetClosedSurfaceInternalRepresentation(self, segmentId:str)\n    -> vtkPolyData\nC++: virtual vtkPolyData *GetClosedSurfaceInternalRepresentation(\n    const std::string segmentId)\n\nGet low-level access to the vtkPolyData object that stores a\nsegment's closed surface representation. If representation does\nnot exist yet then CreateClosedSurfaceRepresentation() must be\ncalled before this method. This function gives direct access to\nthe internal data object, therefore modifications to this object\nwill change the segmentation. Internal representation of the data\nobject may change in the future (for example it may be possible\nthat one vtkPolyData will be shared between multiple segments),\ntherefore to get closed surface representation of a segment for\nread-only access, GetClosedSurfaceRepresentation() method is\nrecommended.\n"},
  {"AddSegmentFromClosedSurfaceRepresentation", PyvtkMRMLSegmentationNode_AddSegmentFromClosedSurfaceRepresentation, METH_VARARGS,
   "AddSegmentFromClosedSurfaceRepresentation(self,\n    polyData:vtkPolyData, segmentName:str=..., color:[float,\n    float, float]=..., segmentId:str=...) -> str\nC++: virtual std::string AddSegmentFromClosedSurfaceRepresentation(\n    vtkPolyData *polyData, std::string segmentName=\"\",\n    double color[3]=nullptr, std::string segmentId=\"\")\n\nAdd new segment from a closed surface.\n\\return Segment ID of the new segment. Empty string if an error\n    occurred.\n"},
  {"AddSegmentFromBinaryLabelmapRepresentation", PyvtkMRMLSegmentationNode_AddSegmentFromBinaryLabelmapRepresentation, METH_VARARGS,
   "AddSegmentFromBinaryLabelmapRepresentation(self,\n    imageData:vtkOrientedImageData, segmentName:str=...,\n    color:[float, float, float]=..., segmentId:str=...) -> str\nC++: std::string AddSegmentFromBinaryLabelmapRepresentation(\n    vtkOrientedImageData *imageData, std::string segmentName=\"\",\n     double color[3]=nullptr, std::string segmentId=\"\")\n\nAdd new segment from a binary labelmap.\n\\return Segment ID of the new segment. Empty string if an error\n    occurred.\n"},
  {"RemoveSegment", PyvtkMRMLSegmentationNode_RemoveSegment, METH_VARARGS,
   "RemoveSegment(self, segmentID:str) -> None\nC++: void RemoveSegment(const std::string &segmentID)\n\nDelete segment from segmentation.\n"},
  {"GetSegmentCenter", PyvtkMRMLSegmentationNode_GetSegmentCenter, METH_VARARGS,
   "GetSegmentCenter(self, segmentID:str) -> (float, float, float)\nC++: double *GetSegmentCenter(const std::string &segmentID)\nGetSegmentCenter(self, segmentID:str, center:[float, float,\n    float]) -> None\nC++: void GetSegmentCenter(const std::string &segmentID,\n    double center[3])\n\nGet position of the segment's center (in the segmentation node's\ncoordinate system)\n"},
  {"GetSegmentCenterRAS", PyvtkMRMLSegmentationNode_GetSegmentCenterRAS, METH_VARARGS,
   "GetSegmentCenterRAS(self, segmentID:str) -> (float, float, float)\nC++: double *GetSegmentCenterRAS(const std::string &segmentID)\nGetSegmentCenterRAS(self, segmentID:str, centerRAS:[float, float,\n    float]) -> None\nC++: void GetSegmentCenterRAS(const std::string &segmentID,\n    double centerRAS[3])\n\nGet position of the segment's center in world coordinate system.\nIt is the position returned by \\sa GetSegmentCenter() transformed\nby the segmentation node's parent transform.\n"},
  {"SetSegmentListFilterEnabled", PyvtkMRMLSegmentationNode_SetSegmentListFilterEnabled, METH_VARARGS,
   "SetSegmentListFilterEnabled(self, _arg:bool) -> None\nC++: virtual void SetSegmentListFilterEnabled(bool _arg)\n\nIndicates whether or not the segment filter is visible in the\nsegments view\n"},
  {"GetSegmentListFilterEnabled", PyvtkMRMLSegmentationNode_GetSegmentListFilterEnabled, METH_VARARGS,
   "GetSegmentListFilterEnabled(self) -> bool\nC++: virtual bool GetSegmentListFilterEnabled()\n\n"},
  {"SegmentListFilterEnabledOn", PyvtkMRMLSegmentationNode_SegmentListFilterEnabledOn, METH_VARARGS,
   "SegmentListFilterEnabledOn(self) -> None\nC++: virtual void SegmentListFilterEnabledOn()\n\n"},
  {"SegmentListFilterEnabledOff", PyvtkMRMLSegmentationNode_SegmentListFilterEnabledOff, METH_VARARGS,
   "SegmentListFilterEnabledOff(self) -> None\nC++: virtual void SegmentListFilterEnabledOff()\n\n"},
  {"SetSegmentListFilterOptions", PyvtkMRMLSegmentationNode_SetSegmentListFilterOptions, METH_VARARGS,
   "SetSegmentListFilterOptions(self, _arg:str) -> None\nC++: virtual void SetSegmentListFilterOptions(std::string _arg)\n\nContains a serialized representation of the filtering options\nused by the segments view\n"},
  {"GetSegmentListFilterOptions", PyvtkMRMLSegmentationNode_GetSegmentListFilterOptions, METH_VARARGS,
   "GetSegmentListFilterOptions(self) -> str\nC++: virtual std::string GetSegmentListFilterOptions()\n\n"},
  {"SetLabelmapConversionColorTableNodeID", PyvtkMRMLSegmentationNode_SetLabelmapConversionColorTableNodeID, METH_VARARGS,
   "SetLabelmapConversionColorTableNodeID(self,\n    labelmapConversionColorTableNodeID:str) -> None\nC++: void SetLabelmapConversionColorTableNodeID(\n    const char *labelmapConversionColorTableNodeID)\n\nThe vtkMRMLColorTableNode that is used to convert to and from\nlabelmap representations. If a segment name matches the name of a\ncolor in the table, then the value of the color will be used as\nthe labelmap value for the segment when exporting the\nsegmentation to labelmap.\n"},
  {"GetLabelmapConversionColorTableNode", PyvtkMRMLSegmentationNode_GetLabelmapConversionColorTableNode, METH_VARARGS,
   "GetLabelmapConversionColorTableNode(self) -> vtkMRMLColorTableNode\nC++: vtkMRMLColorTableNode *GetLabelmapConversionColorTableNode()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSegmentationNode_Doc =
  "vtkMRMLSegmentationNode - MRML node containing segmentations\n\n"
  "Superclass: vtkMRMLDisplayableNode\n\n"
  "Segmentation node stores a set of segments (also known as contours or\n"
  "segmented regions). Segments may overlap and may be stored in various\n"
  "representations (binary labelmap image, closed surface mesh,\n"
  "fractional labelmap image, etc). Segments can be stored in multiple\n"
  "data representations to facilitate visualization and processing.\n\n"
  "Storage and automatic conversion between representations are provided\n"
  "by \\sa vtkSegmentation object.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSegmentationNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSegmentationNode", // tp_name
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
  PyvtkMRMLSegmentationNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSegmentationNode_StaticNew()
{
  return vtkMRMLSegmentationNode::New();
}

PyObject *PyvtkMRMLSegmentationNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSegmentationNode_Type, PyvtkMRMLSegmentationNode_Methods,
    "vtkMRMLSegmentationNode",
 &PyvtkMRMLSegmentationNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLDisplayableNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "EditAllowedEverywhere", vtkMRMLSegmentationNode::EditAllowedEverywhere },
        { "EditAllowedInsideAllSegments", vtkMRMLSegmentationNode::EditAllowedInsideAllSegments },
        { "EditAllowedInsideVisibleSegments", vtkMRMLSegmentationNode::EditAllowedInsideVisibleSegments },
        { "EditAllowedOutsideAllSegments", vtkMRMLSegmentationNode::EditAllowedOutsideAllSegments },
        { "EditAllowedOutsideVisibleSegments", vtkMRMLSegmentationNode::EditAllowedOutsideVisibleSegments },
        { "EditAllowedInsideSingleSegment", vtkMRMLSegmentationNode::EditAllowedInsideSingleSegment },
        { "EditAllowed_Last", vtkMRMLSegmentationNode::EditAllowed_Last },
        { "ReferenceImageGeometryChangedEvent", vtkMRMLSegmentationNode::ReferenceImageGeometryChangedEvent },
        { "SegmentationChangedEvent", vtkMRMLSegmentationNode::SegmentationChangedEvent },
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

void PyVTKAddFile_vtkMRMLSegmentationNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSegmentationNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSegmentationNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

