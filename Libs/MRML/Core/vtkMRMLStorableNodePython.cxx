// python wrapper for vtkMRMLStorableNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLStorableNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLStorableNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLStorableNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLNode_ClassNew
extern "C" { PyObject *PyvtkMRMLNode_ClassNew(); }
#define DECLARED_PyvtkMRMLNode_ClassNew
#endif

static PyObject *
PyvtkMRMLStorableNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLStorableNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLStorableNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLStorableNode *tempr = vtkMRMLStorableNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorableNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLStorableNode::NewInstance());

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
PyvtkMRMLStorableNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLStorableNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLStorableNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_GetUserTagTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserTagTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTagTable *tempr = (ap.IsBound() ?
      op->GetUserTagTable() :
      op->vtkMRMLStorableNode::GetUserTagTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = op->CreateNodeInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetNodeTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

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
      op->vtkMRMLStorableNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

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
      op->vtkMRMLStorableNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLStorableNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->UpdateScene(temp0);
    }
    else
    {
      op->vtkMRMLStorableNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

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
      op->vtkMRMLStorableNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLStorableNode_SetAndObserveStorageNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveStorageNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveStorageNodeID(temp0);
    }
    else
    {
      op->vtkMRMLStorableNode::SetAndObserveStorageNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_AddAndObserveStorageNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAndObserveStorageNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddAndObserveStorageNodeID(temp0);
    }
    else
    {
      op->vtkMRMLStorableNode::AddAndObserveStorageNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_SetAndObserveNthStorageNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveNthStorageNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveNthStorageNodeID(temp0, temp1);
    }
    else
    {
      op->vtkMRMLStorableNode::SetAndObserveNthStorageNodeID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_HasStorageNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasStorageNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasStorageNodeID(temp0) :
      op->vtkMRMLStorableNode::HasStorageNodeID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_SetSlicerDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlicerDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlicerDataType(temp0);
    }
    else
    {
      op->vtkMRMLStorableNode::SetSlicerDataType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_GetSlicerDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicerDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSlicerDataType() :
      op->vtkMRMLStorableNode::GetSlicerDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_GetNumberOfStorageNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStorageNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfStorageNodes() :
      op->vtkMRMLStorableNode::GetNumberOfStorageNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_GetNthStorageNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthStorageNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthStorageNodeID(temp0) :
      op->vtkMRMLStorableNode::GetNthStorageNodeID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_GetStorageNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorageNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetStorageNodeID() :
      op->vtkMRMLStorableNode::GetStorageNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_GetNthStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->GetNthStorageNode(temp0) :
      op->vtkMRMLStorableNode::GetNthStorageNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_GetStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->GetStorageNode() :
      op->vtkMRMLStorableNode::GetStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLStorableNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_GetDefaultStorageNodeClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultStorageNodeClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDefaultStorageNodeClassName(temp0) :
      op->vtkMRMLStorableNode::GetDefaultStorageNodeClassName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_AddDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->AddDefaultStorageNode(temp0) :
      op->vtkMRMLStorableNode::AddDefaultStorageNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_SetDefaultSequenceStorageNodeClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultSequenceStorageNodeClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultSequenceStorageNodeClassName(temp0);
    }
    else
    {
      op->vtkMRMLStorableNode::SetDefaultSequenceStorageNodeClassName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_GetDefaultSequenceStorageNodeClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultSequenceStorageNodeClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDefaultSequenceStorageNodeClassName() :
      op->vtkMRMLStorableNode::GetDefaultSequenceStorageNodeClassName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_CreateDefaultSequenceStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultSequenceStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultSequenceStorageNode() :
      op->vtkMRMLStorableNode::CreateDefaultSequenceStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_GetModifiedSinceRead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModifiedSinceRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetModifiedSinceRead() :
      op->vtkMRMLStorableNode::GetModifiedSinceRead());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorableNode_StorableModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StorableModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorableNode *op = static_cast<vtkMRMLStorableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StorableModified();
    }
    else
    {
      op->vtkMRMLStorableNode::StorableModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLStorableNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLStorableNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLStorableNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLStorableNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLStorableNode\nC++: static vtkMRMLStorableNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLStorableNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLStorableNode\nC++: vtkMRMLStorableNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLStorableNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLStorableNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetUserTagTable", PyvtkMRMLStorableNode_GetUserTagTable, METH_VARARGS,
   "GetUserTagTable(self) -> vtkTagTable\nC++: virtual vtkTagTable *GetUserTagTable()\n\nMethods for user-specified metadata\n"},
  {"CreateNodeInstance", PyvtkMRMLStorableNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override = 0;\n\nMRMLNode methods\n"},
  {"GetNodeTagName", PyvtkMRMLStorableNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override = 0;\n\nGet node XML tag name (like Volume, Model).\n\note Subclasses should implement this method.\n"},
  {"Copy", PyvtkMRMLStorableNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy node contents from another node of the same type.\nReimplemented to copy default sequence storage node class.\n"},
  {"CopyContent", PyvtkMRMLStorableNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLStorableNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"UpdateScene", PyvtkMRMLStorableNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data\n"},
  {"ProcessMRMLEvents", PyvtkMRMLStorableNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Storage nodes\n"},
  {"SetAndObserveStorageNodeID", PyvtkMRMLStorableNode_SetAndObserveStorageNodeID, METH_VARARGS,
   "SetAndObserveStorageNodeID(self, storageNodeID:str) -> None\nC++: void SetAndObserveStorageNodeID(const char *storageNodeID)\n\nString ID of the storage MRML node\n"},
  {"AddAndObserveStorageNodeID", PyvtkMRMLStorableNode_AddAndObserveStorageNodeID, METH_VARARGS,
   "AddAndObserveStorageNodeID(self, storageNodeID:str) -> None\nC++: void AddAndObserveStorageNodeID(const char *storageNodeID)\n\n"},
  {"SetAndObserveNthStorageNodeID", PyvtkMRMLStorableNode_SetAndObserveNthStorageNodeID, METH_VARARGS,
   "SetAndObserveNthStorageNodeID(self, n:int, storageNodeID:str)\n    -> None\nC++: void SetAndObserveNthStorageNodeID(int n,\n    const char *storageNodeID)\n\n"},
  {"HasStorageNodeID", PyvtkMRMLStorableNode_HasStorageNodeID, METH_VARARGS,
   "HasStorageNodeID(self, storageNodeID:str) -> bool\nC++: bool HasStorageNodeID(const char *storageNodeID)\n\nReturn true if storageNodeID is in the storage node ID list.\n"},
  {"SetSlicerDataType", PyvtkMRMLStorableNode_SetSlicerDataType, METH_VARARGS,
   "SetSlicerDataType(self, type:str) -> None\nC++: void SetSlicerDataType(const char *type)\n\nThis is describes the type of data stored in the nodes storage\nnode(s). It's an informatics metadata mechanism so that Slicer\nknows what kinds of nodes to create to receive downloaded\ndatasets, and works around potential ambiguity of file\nextensions, etc. Method is called when storage nodes are created.\nThe method gets applied to any storable data that should be saved\nwith, and loaded with the scene, including nodes that are hidden\nfrom editors like scalar overlays.\n"},
  {"GetSlicerDataType", PyvtkMRMLStorableNode_GetSlicerDataType, METH_VARARGS,
   "GetSlicerDataType(self) -> str\nC++: const char *GetSlicerDataType()\n\n"},
  {"GetNumberOfStorageNodes", PyvtkMRMLStorableNode_GetNumberOfStorageNodes, METH_VARARGS,
   "GetNumberOfStorageNodes(self) -> int\nC++: int GetNumberOfStorageNodes()\n\n"},
  {"GetNthStorageNodeID", PyvtkMRMLStorableNode_GetNthStorageNodeID, METH_VARARGS,
   "GetNthStorageNodeID(self, n:int) -> str\nC++: const char *GetNthStorageNodeID(int n)\n\n"},
  {"GetStorageNodeID", PyvtkMRMLStorableNode_GetStorageNodeID, METH_VARARGS,
   "GetStorageNodeID(self) -> str\nC++: const char *GetStorageNodeID()\n\n"},
  {"GetNthStorageNode", PyvtkMRMLStorableNode_GetNthStorageNode, METH_VARARGS,
   "GetNthStorageNode(self, n:int) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *GetNthStorageNode(int n)\n\nGet associated display MRML node\n"},
  {"GetStorageNode", PyvtkMRMLStorableNode_GetStorageNode, METH_VARARGS,
   "GetStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *GetStorageNode()\n\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLStorableNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: virtual vtkMRMLStorageNode *CreateDefaultStorageNode()\n\nCreate a storage node for this node type. If it returns nullptr\nthen it means the node can be stored in the scene (in XML),\nwithout using a storage node. Null by default. This must be\noverwritten by subclasses that use storage nodes.\n"},
  {"GetDefaultStorageNodeClassName", PyvtkMRMLStorableNode_GetDefaultStorageNodeClassName, METH_VARARGS,
   "GetDefaultStorageNodeClassName(self, filename:str=...) -> str\nC++: virtual std::string GetDefaultStorageNodeClassName(\n    const char *filename=nullptr)\n\nDetermines the most appropriate storage node class for the\nprovided file name and node content. If the method is not\noverwritten by subclass then it uses CreateDefaultStorageNode to\ndetermine storage node class name.\n"},
  {"AddDefaultStorageNode", PyvtkMRMLStorableNode_AddDefaultStorageNode, METH_VARARGS,
   "AddDefaultStorageNode(self, filename:str=...) -> bool\nC++: virtual bool AddDefaultStorageNode(\n    const char *filename=nullptr)\n\nReturns true on success. If storage node is not needed then\nstorage node is not created and the method returns with true.\n"},
  {"SetDefaultSequenceStorageNodeClassName", PyvtkMRMLStorableNode_SetDefaultSequenceStorageNodeClassName, METH_VARARGS,
   "SetDefaultSequenceStorageNodeClassName(self, _arg:str) -> None\nC++: virtual void SetDefaultSequenceStorageNodeClassName(\n    std::string _arg)\n\nClass name of the default sequence storage node that is\ninstantiated by CreateDefaultSequenceStorageNode The value is not\nstored in the scene but it has to be set manually (for example,\nin the corresponding default node in the scene). Default value:\n\"vtkMRMLSequenceStorageNode\"\n\\sa CreateDefaultSequenceStorageNode\n"},
  {"GetDefaultSequenceStorageNodeClassName", PyvtkMRMLStorableNode_GetDefaultSequenceStorageNodeClassName, METH_VARARGS,
   "GetDefaultSequenceStorageNodeClassName(self) -> str\nC++: virtual std::string GetDefaultSequenceStorageNodeClassName()\n\n"},
  {"CreateDefaultSequenceStorageNode", PyvtkMRMLStorableNode_CreateDefaultSequenceStorageNode, METH_VARARGS,
   "CreateDefaultSequenceStorageNode(self) -> vtkMRMLStorageNode\nC++: virtual vtkMRMLStorageNode *CreateDefaultSequenceStorageNode(\n    )\n\nCreates the most appropriate storage node class for storing a\nsequence of these nodes. The caller owns the returned object and\nresponsible for deleting it. If the method is not overwritten by\nsubclass then it creates vtkMRMLSequenceStorageNode, which saves\nthe sequence in a MRML scene bundle file.\n"},
  {"GetModifiedSinceRead", PyvtkMRMLStorableNode_GetModifiedSinceRead, METH_VARARGS,
   "GetModifiedSinceRead(self) -> bool\nC++: virtual bool GetModifiedSinceRead()\n\nReturns true if the node is more recent than the file on disk.\nThis information can be used by the application to know which\nnode has been modified since it has been last read or written.\nOnly storable properties are considered: even if a \"non storable\"\nproperty (e.g. color of a mesh) is modified after the node is\nbeing loaded, GetModifiedSinceRead() should return false; the new\nproperty value won't be stored on file (only in the MRML scene).\nBy default, calling Modified() on the node doesn't make the node\n\"modified since read\", only calling Modified() on\nStorableModifiedTime does. GetModifiedSinceRead() can be\noverwritten to handle special storable property modification\ntime.\n\\sa GetStoredTime() StorableModifiedTime Modified()\n    StorableModified()\n"},
  {"StorableModified", PyvtkMRMLStorableNode_StorableModified, METH_VARARGS,
   "StorableModified(self) -> None\nC++: virtual void StorableModified()\n\nAllows external code to mark that the storable has been modified\nand should therefore be selected for saving by default.\n\\sa GetStoredTime() StorableModifiedTime Modified()\n    GetModifiedSinceRead()\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLStorableNode_Doc =
  "vtkMRMLStorableNode - MRML node to represent a 3D surface model.\n\n"
  "Superclass: vtkMRMLNode\n\n"
  "Model nodes describe polygonal data.  Models are assumed to have been\n"
  "constructed with the orientation and voxel dimensions of the original\n"
  "segmented volume.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLStorableNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLStorableNode", // tp_name
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
  PyvtkMRMLStorableNode_Doc, // tp_doc
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

PyObject *PyvtkMRMLStorableNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLStorableNode_Type, PyvtkMRMLStorableNode_Methods,
    "vtkMRMLStorableNode",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLStorableNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLStorableNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLStorableNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

