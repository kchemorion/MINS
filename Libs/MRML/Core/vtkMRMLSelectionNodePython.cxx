// python wrapper for vtkMRMLSelectionNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSelectionNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSelectionNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSelectionNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLNode_ClassNew
extern "C" { PyObject *PyvtkMRMLNode_ClassNew(); }
#define DECLARED_PyvtkMRMLNode_ClassNew
#endif

static PyObject *
PyvtkMRMLSelectionNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSelectionNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSelectionNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSelectionNode *tempr = vtkMRMLSelectionNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSelectionNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSelectionNode::NewInstance());

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
PyvtkMRMLSelectionNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSelectionNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSelectionNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLSelectionNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

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
      op->vtkMRMLSelectionNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLSelectionNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetActiveVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetActiveVolumeID() :
      op->vtkMRMLSelectionNode::GetActiveVolumeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetActiveVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveVolumeID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetActiveVolumeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetReferenceActiveVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceActiveVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceActiveVolumeID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetReferenceActiveVolumeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetSecondaryVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondaryVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSecondaryVolumeID() :
      op->vtkMRMLSelectionNode::GetSecondaryVolumeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetSecondaryVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSecondaryVolumeID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetSecondaryVolumeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetReferenceSecondaryVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceSecondaryVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetReferenceSecondaryVolumeID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetReferenceSecondaryVolumeID(temp0);
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
PyvtkMRMLSelectionNode_GetActiveLabelVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveLabelVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetActiveLabelVolumeID() :
      op->vtkMRMLSelectionNode::GetActiveLabelVolumeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetActiveLabelVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveLabelVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveLabelVolumeID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetActiveLabelVolumeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetReferenceActiveLabelVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceActiveLabelVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceActiveLabelVolumeID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetReferenceActiveLabelVolumeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetActivePlaceNodeClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlaceNodeClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetActivePlaceNodeClassName() :
      op->vtkMRMLSelectionNode::GetActivePlaceNodeClassName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetActivePlaceNodeClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaceNodeClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlaceNodeClassName(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetActivePlaceNodeClassName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetReferenceActivePlaceNodeClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceActivePlaceNodeClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceActivePlaceNodeClassName(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetReferenceActivePlaceNodeClassName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetActivePlaceNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlaceNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetActivePlaceNodeID() :
      op->vtkMRMLSelectionNode::GetActivePlaceNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetActivePlaceNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaceNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlaceNodeID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetActivePlaceNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetReferenceActivePlaceNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceActivePlaceNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceActivePlaceNodeID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetReferenceActivePlaceNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetActiveROIListID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveROIListID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetActiveROIListID() :
      op->vtkMRMLSelectionNode::GetActiveROIListID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetActiveROIListID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveROIListID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveROIListID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetActiveROIListID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetReferenceActiveROIListID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceActiveROIListID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceActiveROIListID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetReferenceActiveROIListID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetActiveCameraID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveCameraID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetActiveCameraID() :
      op->vtkMRMLSelectionNode::GetActiveCameraID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetActiveCameraID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveCameraID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveCameraID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetActiveCameraID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetReferenceActiveCameraID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceActiveCameraID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceActiveCameraID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetReferenceActiveCameraID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetActiveTableID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveTableID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetActiveTableID() :
      op->vtkMRMLSelectionNode::GetActiveTableID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetActiveTableID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveTableID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveTableID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetActiveTableID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetReferenceActiveTableID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceActiveTableID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetReferenceActiveTableID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetReferenceActiveTableID(temp0);
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
PyvtkMRMLSelectionNode_GetActiveViewID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveViewID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetActiveViewID() :
      op->vtkMRMLSelectionNode::GetActiveViewID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetActiveViewID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveViewID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveViewID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetActiveViewID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetReferenceActiveViewID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceActiveViewID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceActiveViewID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetReferenceActiveViewID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetActiveLayoutID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveLayoutID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetActiveLayoutID() :
      op->vtkMRMLSelectionNode::GetActiveLayoutID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetActiveLayoutID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveLayoutID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveLayoutID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetActiveLayoutID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetReferenceActiveLayoutID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceActiveLayoutID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceActiveLayoutID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetReferenceActiveLayoutID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetActivePlotChartID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlotChartID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetActivePlotChartID() :
      op->vtkMRMLSelectionNode::GetActivePlotChartID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetActivePlotChartID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlotChartID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlotChartID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetActivePlotChartID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetReferenceActivePlotChartID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceActivePlotChartID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceActivePlotChartID(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetReferenceActivePlotChartID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_AddNewPlaceNodeClassNameToList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNewPlaceNodeClassNameToList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->AddNewPlaceNodeClassNameToList(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSelectionNode::AddNewPlaceNodeClassNameToList(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetUnitNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnitNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetUnitNodeID(temp0) :
      op->vtkMRMLSelectionNode::GetUnitNodeID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetUnitNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnitNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetUnitNodeID(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetUnitNodeID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetUnitNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnitNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLUnitNode *tempr = (ap.IsBound() ?
      op->GetUnitNode(temp0) :
      op->vtkMRMLSelectionNode::GetUnitNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

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
      op->vtkMRMLSelectionNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLSelectionNode_RemovePlaceNodeClassNameFromList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePlaceNodeClassNameFromList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemovePlaceNodeClassNameFromList(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::RemovePlaceNodeClassNameFromList(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetPlaceNodeClassNameByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceNodeClassNameByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetPlaceNodeClassNameByIndex(temp0) :
      op->vtkMRMLSelectionNode::GetPlaceNodeClassNameByIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetPlaceNodeResourceByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceNodeResourceByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetPlaceNodeResourceByIndex(temp0) :
      op->vtkMRMLSelectionNode::GetPlaceNodeResourceByIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetPlaceNodeIconNameByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceNodeIconNameByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetPlaceNodeIconNameByIndex(temp0) :
      op->vtkMRMLSelectionNode::GetPlaceNodeIconNameByIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_PlaceNodeClassNameInList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceNodeClassNameInList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->PlaceNodeClassNameInList(temp0) :
      op->vtkMRMLSelectionNode::PlaceNodeClassNameInList(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetPlaceNodeResourceByClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceNodeResourceByClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetPlaceNodeResourceByClassName(temp0) :
      op->vtkMRMLSelectionNode::GetPlaceNodeResourceByClassName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetNumberOfPlaceNodeClassNamesInList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlaceNodeClassNamesInList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPlaceNodeClassNamesInList() :
      op->vtkMRMLSelectionNode::GetNumberOfPlaceNodeClassNamesInList());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_SetActivePlaceNodePlacementValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaceNodePlacementValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlaceNodePlacementValid(temp0);
    }
    else
    {
      op->vtkMRMLSelectionNode::SetActivePlaceNodePlacementValid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSelectionNode_GetActivePlaceNodePlacementValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlaceNodePlacementValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSelectionNode *op = static_cast<vtkMRMLSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetActivePlaceNodePlacementValid() :
      op->vtkMRMLSelectionNode::GetActivePlaceNodePlacementValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSelectionNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSelectionNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSelectionNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSelectionNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLSelectionNode\nC++: static vtkMRMLSelectionNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSelectionNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSelectionNode\nC++: vtkMRMLSelectionNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSelectionNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSelectionNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLSelectionNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"Copy", PyvtkMRMLSelectionNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLSelectionNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetActiveVolumeID", PyvtkMRMLSelectionNode_GetActiveVolumeID, METH_VARARGS,
   "GetActiveVolumeID(self) -> str\nC++: const char *GetActiveVolumeID()\n\nthe ID of a MRMLVolumeNode (typically background)\n"},
  {"SetActiveVolumeID", PyvtkMRMLSelectionNode_SetActiveVolumeID, METH_VARARGS,
   "SetActiveVolumeID(self, id:str) -> None\nC++: void SetActiveVolumeID(const char *id)\n\n"},
  {"SetReferenceActiveVolumeID", PyvtkMRMLSelectionNode_SetReferenceActiveVolumeID, METH_VARARGS,
   "SetReferenceActiveVolumeID(self, id:str) -> None\nC++: void SetReferenceActiveVolumeID(const char *id)\n\n\\deprecated Use SetActiveVolumeID instead\n"},
  {"GetSecondaryVolumeID", PyvtkMRMLSelectionNode_GetSecondaryVolumeID, METH_VARARGS,
   "GetSecondaryVolumeID(self) -> str\nC++: const char *GetSecondaryVolumeID()\n\nthe ID of a MRMLVolumeNode (typically foreground)\n"},
  {"SetSecondaryVolumeID", PyvtkMRMLSelectionNode_SetSecondaryVolumeID, METH_VARARGS,
   "SetSecondaryVolumeID(self, id:str) -> None\nC++: void SetSecondaryVolumeID(const char *id)\n\n"},
  {"SetReferenceSecondaryVolumeID", PyvtkMRMLSelectionNode_SetReferenceSecondaryVolumeID, METH_VARARGS,
   "SetReferenceSecondaryVolumeID(self, id:str) -> None\nC++: void SetReferenceSecondaryVolumeID(char *id)\n\n\\deprecated Use SetSecondaryVolumeID instead\n"},
  {"GetActiveLabelVolumeID", PyvtkMRMLSelectionNode_GetActiveLabelVolumeID, METH_VARARGS,
   "GetActiveLabelVolumeID(self) -> str\nC++: const char *GetActiveLabelVolumeID()\n\nthe ID of a MRMLVolumeNode\n"},
  {"SetActiveLabelVolumeID", PyvtkMRMLSelectionNode_SetActiveLabelVolumeID, METH_VARARGS,
   "SetActiveLabelVolumeID(self, id:str) -> None\nC++: void SetActiveLabelVolumeID(const char *id)\n\n"},
  {"SetReferenceActiveLabelVolumeID", PyvtkMRMLSelectionNode_SetReferenceActiveLabelVolumeID, METH_VARARGS,
   "SetReferenceActiveLabelVolumeID(self, id:str) -> None\nC++: void SetReferenceActiveLabelVolumeID(const char *id)\n\n\\deprecated Use SetActiveLabelVolumeID instead\n"},
  {"GetActivePlaceNodeClassName", PyvtkMRMLSelectionNode_GetActivePlaceNodeClassName, METH_VARARGS,
   "GetActivePlaceNodeClassName(self) -> str\nC++: virtual char *GetActivePlaceNodeClassName()\n\nGet the classname of the active placeNode type. The active\nplaceNode is used to control what placeNode is being dropped by\nthe user.\n\\sa SetActivePlaceNodeClassName,\n    SetReferenceActivePlaceNodeClassName\n"},
  {"SetActivePlaceNodeClassName", PyvtkMRMLSelectionNode_SetActivePlaceNodeClassName, METH_VARARGS,
   "SetActivePlaceNodeClassName(self, _arg:str) -> None\nC++: virtual void SetActivePlaceNodeClassName(const char *_arg)\n\nSet the classname of the active placeNode type. Use\nSetReferenceActivePlaceNodeClassName if you need the mouse mode\ntool bar to update.\n\\sa GetActivePlaceNodeClassName,\n    SetReferenceActivePlaceNodeClassName\n"},
  {"SetReferenceActivePlaceNodeClassName", PyvtkMRMLSelectionNode_SetReferenceActivePlaceNodeClassName, METH_VARARGS,
   "SetReferenceActivePlaceNodeClassName(self, className:str) -> None\nC++: void SetReferenceActivePlaceNodeClassName(\n    const char *className)\n\nSet the active placeNode class name and fire the event\nActivePlaceNodeClassNameChangedEvent so that the Mouse mode tool\nbar will update.\n\\sa GetActivePlaceNodeClassName, SetActivePlaceNodeClassName\n"},
  {"GetActivePlaceNodeID", PyvtkMRMLSelectionNode_GetActivePlaceNodeID, METH_VARARGS,
   "GetActivePlaceNodeID(self) -> str\nC++: const char *GetActivePlaceNodeID()\n\nGet the ID of the currently active placeNode.\n\\sa SetActivePlaceNodeID, SetReferenceActivePlaceNodeID\n"},
  {"SetActivePlaceNodeID", PyvtkMRMLSelectionNode_SetActivePlaceNodeID, METH_VARARGS,
   "SetActivePlaceNodeID(self, id:str) -> None\nC++: void SetActivePlaceNodeID(const char *id)\n\nSet the ID of the currently active placeNode.\n\\sa GetActivePlaceNodeID, SetReferenceActivePlaceNodeID\n"},
  {"SetReferenceActivePlaceNodeID", PyvtkMRMLSelectionNode_SetReferenceActivePlaceNodeID, METH_VARARGS,
   "SetReferenceActivePlaceNodeID(self, id:str) -> None\nC++: void SetReferenceActivePlaceNodeID(const char *id)\n\nSet the ID of the currently active placeNode and fire the\nActivePlaceNodeIDChangedEvent event.\n\\sa GetActivePlaceNodeID, SetActivePlaceNodeID\n"},
  {"GetActiveROIListID", PyvtkMRMLSelectionNode_GetActiveROIListID, METH_VARARGS,
   "GetActiveROIListID(self) -> str\nC++: const char *GetActiveROIListID()\n\nthe ID of a MRMLROIList\n"},
  {"SetActiveROIListID", PyvtkMRMLSelectionNode_SetActiveROIListID, METH_VARARGS,
   "SetActiveROIListID(self, id:str) -> None\nC++: void SetActiveROIListID(const char *id)\n\n"},
  {"SetReferenceActiveROIListID", PyvtkMRMLSelectionNode_SetReferenceActiveROIListID, METH_VARARGS,
   "SetReferenceActiveROIListID(self, id:str) -> None\nC++: void SetReferenceActiveROIListID(const char *id)\n\n\\deprecated Use SetActiveROIListID instead\n"},
  {"GetActiveCameraID", PyvtkMRMLSelectionNode_GetActiveCameraID, METH_VARARGS,
   "GetActiveCameraID(self) -> str\nC++: const char *GetActiveCameraID()\n\nthe ID of a MRMLCameraNode\n"},
  {"SetActiveCameraID", PyvtkMRMLSelectionNode_SetActiveCameraID, METH_VARARGS,
   "SetActiveCameraID(self, id:str) -> None\nC++: void SetActiveCameraID(const char *id)\n\n"},
  {"SetReferenceActiveCameraID", PyvtkMRMLSelectionNode_SetReferenceActiveCameraID, METH_VARARGS,
   "SetReferenceActiveCameraID(self, id:str) -> None\nC++: void SetReferenceActiveCameraID(const char *id)\n\n\\deprecated Use SetActiveCameraID instead\n"},
  {"GetActiveTableID", PyvtkMRMLSelectionNode_GetActiveTableID, METH_VARARGS,
   "GetActiveTableID(self) -> str\nC++: const char *GetActiveTableID()\n\nthe ID of a MRMLTableNode\n"},
  {"SetActiveTableID", PyvtkMRMLSelectionNode_SetActiveTableID, METH_VARARGS,
   "SetActiveTableID(self, id:str) -> None\nC++: void SetActiveTableID(const char *id)\n\n"},
  {"SetReferenceActiveTableID", PyvtkMRMLSelectionNode_SetReferenceActiveTableID, METH_VARARGS,
   "SetReferenceActiveTableID(self, id:str) -> None\nC++: void SetReferenceActiveTableID(char *id)\n\n\\deprecated Use SetActiveTableID instead\n"},
  {"GetActiveViewID", PyvtkMRMLSelectionNode_GetActiveViewID, METH_VARARGS,
   "GetActiveViewID(self) -> str\nC++: const char *GetActiveViewID()\n\nthe ID of a MRMLViewNode\n"},
  {"SetActiveViewID", PyvtkMRMLSelectionNode_SetActiveViewID, METH_VARARGS,
   "SetActiveViewID(self, id:str) -> None\nC++: void SetActiveViewID(const char *id)\n\n"},
  {"SetReferenceActiveViewID", PyvtkMRMLSelectionNode_SetReferenceActiveViewID, METH_VARARGS,
   "SetReferenceActiveViewID(self, id:str) -> None\nC++: void SetReferenceActiveViewID(const char *id)\n\n\\deprecated Use SetActiveViewID instead\n"},
  {"GetActiveLayoutID", PyvtkMRMLSelectionNode_GetActiveLayoutID, METH_VARARGS,
   "GetActiveLayoutID(self) -> str\nC++: const char *GetActiveLayoutID()\n\nthe ID of a MRMLLayoutNode\n"},
  {"SetActiveLayoutID", PyvtkMRMLSelectionNode_SetActiveLayoutID, METH_VARARGS,
   "SetActiveLayoutID(self, id:str) -> None\nC++: void SetActiveLayoutID(const char *id)\n\n"},
  {"SetReferenceActiveLayoutID", PyvtkMRMLSelectionNode_SetReferenceActiveLayoutID, METH_VARARGS,
   "SetReferenceActiveLayoutID(self, id:str) -> None\nC++: void SetReferenceActiveLayoutID(const char *id)\n\n\\deprecated Use SetActiveLayoutID instead\n"},
  {"GetActivePlotChartID", PyvtkMRMLSelectionNode_GetActivePlotChartID, METH_VARARGS,
   "GetActivePlotChartID(self) -> str\nC++: const char *GetActivePlotChartID()\n\nthe ID of a MRMLPlotChartNode\n"},
  {"SetActivePlotChartID", PyvtkMRMLSelectionNode_SetActivePlotChartID, METH_VARARGS,
   "SetActivePlotChartID(self, id:str) -> None\nC++: void SetActivePlotChartID(const char *id)\n\n"},
  {"SetReferenceActivePlotChartID", PyvtkMRMLSelectionNode_SetReferenceActivePlotChartID, METH_VARARGS,
   "SetReferenceActivePlotChartID(self, id:str) -> None\nC++: void SetReferenceActivePlotChartID(const char *id)\n\n\\deprecated Use SetActivePlotChartID instead\n"},
  {"AddNewPlaceNodeClassNameToList", PyvtkMRMLSelectionNode_AddNewPlaceNodeClassNameToList, METH_VARARGS,
   "AddNewPlaceNodeClassNameToList(self, newID:str, resource:str=...,\n    iconName:str=\"\") -> None\nC++: void AddNewPlaceNodeClassNameToList(const char *newID,\n    const char *resource=nullptr, const char *iconName=\"\")\n\nAdd a new valid placeNode class name to the list, with optional\nqt resource reference string for updating GUI elements\n"},
  {"GetUnitNodeID", PyvtkMRMLSelectionNode_GetUnitNodeID, METH_VARARGS,
   "GetUnitNodeID(self, quantity:str) -> str\nC++: const char *GetUnitNodeID(const char *quantity)\n\nSet/Get the current unit node associated with the given quantity.\nThis is how the GUI or the logic can access the current node for\na quantity. Changing the current node for a given quantity should\nonly be done through the unit node settings panel. There can be\nno node (i.e. nullptr) associated to a quantity. To make sure to\nhave the correct unit node, one should observe the selection node\nfor UnitModifiedEvent.\n\\sa GetUnitNode(), GetNodeReferenceID(),\n    SetAndObserveNodeReferenceID()\n\\sa UnitModifiedEvent\n"},
  {"SetUnitNodeID", PyvtkMRMLSelectionNode_SetUnitNodeID, METH_VARARGS,
   "SetUnitNodeID(self, quantity:str, id:str) -> None\nC++: void SetUnitNodeID(const char *quantity, const char *id)\n\n"},
  {"GetUnitNode", PyvtkMRMLSelectionNode_GetUnitNode, METH_VARARGS,
   "GetUnitNode(self, quantity:str) -> vtkMRMLUnitNode\nC++: vtkMRMLUnitNode *GetUnitNode(const char *quantity)\n\nReturn the unit node associated to the quantity.\n\\sa GetUnitNodeID()\n"},
  {"ProcessMRMLEvents", PyvtkMRMLSelectionNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nMethod to propagate events generated in units nodes.\n\\sa GetNodeReferenceID(), SetAndObserveNodeReferenceID()\n\\sa UnitModifiedEvent\n"},
  {"RemovePlaceNodeClassNameFromList", PyvtkMRMLSelectionNode_RemovePlaceNodeClassNameFromList, METH_VARARGS,
   "RemovePlaceNodeClassNameFromList(self, className:str) -> None\nC++: void RemovePlaceNodeClassNameFromList(const char *className)\n\nRemove a placeNode class name from the list\n\\sa PlaceNodeClassNameInList\n"},
  {"GetPlaceNodeClassNameByIndex", PyvtkMRMLSelectionNode_GetPlaceNodeClassNameByIndex, METH_VARARGS,
   "GetPlaceNodeClassNameByIndex(self, n:int) -> str\nC++: std::string GetPlaceNodeClassNameByIndex(int n)\n\nReturn nth placeNode class name string from the list, empty\nstring if out of bounds\n"},
  {"GetPlaceNodeResourceByIndex", PyvtkMRMLSelectionNode_GetPlaceNodeResourceByIndex, METH_VARARGS,
   "GetPlaceNodeResourceByIndex(self, n:int) -> str\nC++: std::string GetPlaceNodeResourceByIndex(int n)\n\nReturn nth placeNode resource string from the list, empty string\nif out of bounds\n"},
  {"GetPlaceNodeIconNameByIndex", PyvtkMRMLSelectionNode_GetPlaceNodeIconNameByIndex, METH_VARARGS,
   "GetPlaceNodeIconNameByIndex(self, n:int) -> str\nC++: std::string GetPlaceNodeIconNameByIndex(int n)\n\nReturn nth placeNode icon name string from the list, empty string\nif out of bounds\n"},
  {"PlaceNodeClassNameInList", PyvtkMRMLSelectionNode_PlaceNodeClassNameInList, METH_VARARGS,
   "PlaceNodeClassNameInList(self, className:str) -> int\nC++: int PlaceNodeClassNameInList(std::string className)\n\nCheck for an classname in the list, returning it's index, -1 if\nnot in list\n"},
  {"GetPlaceNodeResourceByClassName", PyvtkMRMLSelectionNode_GetPlaceNodeResourceByClassName, METH_VARARGS,
   "GetPlaceNodeResourceByClassName(self, className:str) -> str\nC++: std::string GetPlaceNodeResourceByClassName(\n    std::string className)\n\nReturn the placeNode resource associated with this classname,\nempty string if not found\n\\sa vtkMRMLSelectionNode::PlaceNodeClassNameInList\n\\sa vtkMRMLSelectionNode::GetPlaceNodeResourceByIndex\n"},
  {"GetNumberOfPlaceNodeClassNamesInList", PyvtkMRMLSelectionNode_GetNumberOfPlaceNodeClassNamesInList, METH_VARARGS,
   "GetNumberOfPlaceNodeClassNamesInList(self) -> int\nC++: int GetNumberOfPlaceNodeClassNamesInList()\n\nGet the number of class names in the list\n"},
  {"SetActivePlaceNodePlacementValid", PyvtkMRMLSelectionNode_SetActivePlaceNodePlacementValid, METH_VARARGS,
   "SetActivePlaceNodePlacementValid(self, valid:bool) -> None\nC++: void SetActivePlaceNodePlacementValid(bool valid)\n\nSet whether point placement is valid for the active placement\nnode\n"},
  {"GetActivePlaceNodePlacementValid", PyvtkMRMLSelectionNode_GetActivePlaceNodePlacementValid, METH_VARARGS,
   "GetActivePlaceNodePlacementValid(self) -> bool\nC++: bool GetActivePlaceNodePlacementValid()\n\nReturns true if additional points can be placed in the current\nplacement node, false if the node has a locked number of points.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSelectionNode_Doc =
  "vtkMRMLSelectionNode - MRML node for storing information about the\nactive nodes in the scene.\n\n"
  "Superclass: vtkMRMLNode\n\n"
  "This node stores the information about the currently selected volume,\n"
  "label volume, fiducial list, place node class name, place node id,\n"
  "ROI list, camera, table, view, layout, units Note: the\n"
  "SetReferenceActive* routines are added because the\n"
  "vtkSetReferenceStringMacro is not wrapped (vtkSetStringMacro on which\n"
  "it is based is a special case in vtk's parser).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSelectionNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSelectionNode", // tp_name
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
  PyvtkMRMLSelectionNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSelectionNode_StaticNew()
{
  return vtkMRMLSelectionNode::New();
}

PyObject *PyvtkMRMLSelectionNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSelectionNode_Type, PyvtkMRMLSelectionNode_Methods,
    "vtkMRMLSelectionNode",
 &PyvtkMRMLSelectionNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "ActivePlaceNodeIDChangedEvent", vtkMRMLSelectionNode::ActivePlaceNodeIDChangedEvent },
        { "ActivePlaceNodeClassNameChangedEvent", vtkMRMLSelectionNode::ActivePlaceNodeClassNameChangedEvent },
        { "PlaceNodeClassNameListModifiedEvent", vtkMRMLSelectionNode::PlaceNodeClassNameListModifiedEvent },
        { "UnitModifiedEvent", vtkMRMLSelectionNode::UnitModifiedEvent },
        { "ActivePlaceNodePlacementValidEvent", vtkMRMLSelectionNode::ActivePlaceNodePlacementValidEvent },
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

void PyVTKAddFile_vtkMRMLSelectionNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSelectionNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSelectionNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

