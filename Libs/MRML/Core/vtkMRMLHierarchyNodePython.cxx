// python wrapper for vtkMRMLHierarchyNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLHierarchyNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLHierarchyNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLHierarchyNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLNode_ClassNew
extern "C" { PyObject *PyvtkMRMLNode_ClassNew(); }
#define DECLARED_PyvtkMRMLNode_ClassNew
#endif

static PyObject *
PyvtkMRMLHierarchyNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLHierarchyNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLHierarchyNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLHierarchyNode *tempr = vtkMRMLHierarchyNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLHierarchyNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLHierarchyNode::NewInstance());

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
PyvtkMRMLHierarchyNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLHierarchyNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLHierarchyNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLHierarchyNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

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
      op->vtkMRMLHierarchyNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLHierarchyNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_SetSceneReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSceneReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSceneReferences();
    }
    else
    {
      op->vtkMRMLHierarchyNode::SetSceneReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_UpdateReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateReferences();
    }
    else
    {
      op->vtkMRMLHierarchyNode::UpdateReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

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
      op->vtkMRMLHierarchyNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_UpdateReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateReferenceID(temp0, temp1);
    }
    else
    {
      op->vtkMRMLHierarchyNode::UpdateReferenceID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_GetParentNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLHierarchyNode *tempr = (ap.IsBound() ?
      op->GetParentNode() :
      op->vtkMRMLHierarchyNode::GetParentNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_GetTopParentNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopParentNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLHierarchyNode *tempr = (ap.IsBound() ?
      op->GetTopParentNode() :
      op->vtkMRMLHierarchyNode::GetTopParentNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_GetParentNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetParentNodeID() :
      op->vtkMRMLHierarchyNode::GetParentNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_SetParentNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParentNodeID(temp0);
    }
    else
    {
      op->vtkMRMLHierarchyNode::SetParentNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_GetNumberOfChildrenNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildrenNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfChildrenNodes() :
      op->vtkMRMLHierarchyNode::GetNumberOfChildrenNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_GetNthChildNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthChildNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLHierarchyNode *tempr = (ap.IsBound() ?
      op->GetNthChildNode(temp0) :
      op->vtkMRMLHierarchyNode::GetNthChildNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_GetIndexInParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexInParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndexInParent() :
      op->vtkMRMLHierarchyNode::GetIndexInParent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_SetIndexInParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexInParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIndexInParent(temp0);
    }
    else
    {
      op->vtkMRMLHierarchyNode::SetIndexInParent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_MoveInParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveInParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->MoveInParent(temp0);
    }
    else
    {
      op->vtkMRMLHierarchyNode::MoveInParent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_RemoveHierarchyChildrenNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveHierarchyChildrenNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveHierarchyChildrenNodes();
    }
    else
    {
      op->vtkMRMLHierarchyNode::RemoveHierarchyChildrenNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_RemoveAllHierarchyChildrenNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllHierarchyChildrenNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllHierarchyChildrenNodes();
    }
    else
    {
      op->vtkMRMLHierarchyNode::RemoveAllHierarchyChildrenNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_GetAssociatedNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssociatedNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAssociatedNodeID() :
      op->vtkMRMLHierarchyNode::GetAssociatedNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_SetAssociatedNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssociatedNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAssociatedNodeID(temp0);
    }
    else
    {
      op->vtkMRMLHierarchyNode::SetAssociatedNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_GetAssociatedNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssociatedNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetAssociatedNode() :
      op->vtkMRMLHierarchyNode::GetAssociatedNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_GetAssociatedChildrenNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssociatedChildrenNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  vtkCollection *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkCollection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->GetAssociatedChildrenNodes(temp0, temp1);
    }
    else
    {
      op->vtkMRMLHierarchyNode::GetAssociatedChildrenNodes(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_GetAssociatedHierarchyNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAssociatedHierarchyNode");

  vtkMRMLScene *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetValue(temp1))
  {
    vtkMRMLHierarchyNode *tempr = vtkMRMLHierarchyNode::GetAssociatedHierarchyNode(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_SetSortingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSortingValue(temp0);
    }
    else
    {
      op->vtkMRMLHierarchyNode::SetSortingValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_GetSortingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSortingValue() :
      op->vtkMRMLHierarchyNode::GetSortingValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_GetAllowMultipleChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowMultipleChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllowMultipleChildren() :
      op->vtkMRMLHierarchyNode::GetAllowMultipleChildren());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_SetAllowMultipleChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowMultipleChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowMultipleChildren(temp0);
    }
    else
    {
      op->vtkMRMLHierarchyNode::SetAllowMultipleChildren(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_AllowMultipleChildrenOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowMultipleChildrenOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowMultipleChildrenOn();
    }
    else
    {
      op->vtkMRMLHierarchyNode::AllowMultipleChildrenOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLHierarchyNode_AllowMultipleChildrenOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowMultipleChildrenOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLHierarchyNode *op = static_cast<vtkMRMLHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowMultipleChildrenOff();
    }
    else
    {
      op->vtkMRMLHierarchyNode::AllowMultipleChildrenOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLHierarchyNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLHierarchyNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLHierarchyNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLHierarchyNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLHierarchyNode\nC++: static vtkMRMLHierarchyNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLHierarchyNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLHierarchyNode\nC++: vtkMRMLHierarchyNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLHierarchyNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLHierarchyNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLHierarchyNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"Copy", PyvtkMRMLHierarchyNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLHierarchyNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"SetSceneReferences", PyvtkMRMLHierarchyNode_SetSceneReferences, METH_VARARGS,
   "SetSceneReferences(self) -> None\nC++: void SetSceneReferences() override;\n\nSet the reference node to current scene.\n"},
  {"UpdateReferences", PyvtkMRMLHierarchyNode_UpdateReferences, METH_VARARGS,
   "UpdateReferences(self) -> None\nC++: void UpdateReferences() override;\n\nUpdates this node if it depends on other nodes when the node is\ndeleted in the scene\n"},
  {"UpdateScene", PyvtkMRMLHierarchyNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nObserve the reference transform node\n"},
  {"UpdateReferenceID", PyvtkMRMLHierarchyNode_UpdateReferenceID, METH_VARARGS,
   "UpdateReferenceID(self, oldID:str, newID:str) -> None\nC++: void UpdateReferenceID(const char *oldID, const char *newID)\n    override;\n\nUpdate the stored reference to another node in the scene\n"},
  {"GetParentNode", PyvtkMRMLHierarchyNode_GetParentNode, METH_VARARGS,
   "GetParentNode(self) -> vtkMRMLHierarchyNode\nC++: vtkMRMLHierarchyNode *GetParentNode()\n\nAssociated parent MRML node\n"},
  {"GetTopParentNode", PyvtkMRMLHierarchyNode_GetTopParentNode, METH_VARARGS,
   "GetTopParentNode(self) -> vtkMRMLHierarchyNode\nC++: vtkMRMLHierarchyNode *GetTopParentNode()\n\nGet the top parent node in the hierarchy\n"},
  {"GetParentNodeID", PyvtkMRMLHierarchyNode_GetParentNodeID, METH_VARARGS,
   "GetParentNodeID(self) -> str\nC++: virtual char *GetParentNodeID()\n\nString ID of the parent hierarchy MRML node\n"},
  {"SetParentNodeID", PyvtkMRMLHierarchyNode_SetParentNodeID, METH_VARARGS,
   "SetParentNodeID(self, ref:str) -> None\nC++: virtual void SetParentNodeID(const char *ref)\n\n"},
  {"GetNumberOfChildrenNodes", PyvtkMRMLHierarchyNode_GetNumberOfChildrenNodes, METH_VARARGS,
   "GetNumberOfChildrenNodes(self) -> int\nC++: int GetNumberOfChildrenNodes()\n\nReturns the number of immediate children in the hierarchy\n"},
  {"GetNthChildNode", PyvtkMRMLHierarchyNode_GetNthChildNode, METH_VARARGS,
   "GetNthChildNode(self, index:int) -> vtkMRMLHierarchyNode\nC++: vtkMRMLHierarchyNode *GetNthChildNode(int index)\n\nGet n-th child node sorted in the order of their SortingValue\n"},
  {"GetIndexInParent", PyvtkMRMLHierarchyNode_GetIndexInParent, METH_VARARGS,
   "GetIndexInParent(self) -> int\nC++: int GetIndexInParent()\n\nGet index of this node in it's parent based on the value of their\nSortingValue\n"},
  {"SetIndexInParent", PyvtkMRMLHierarchyNode_SetIndexInParent, METH_VARARGS,
   "SetIndexInParent(self, index:int) -> None\nC++: void SetIndexInParent(int index)\n\nSet index of this node in it's parent based on the value of their\nSortingValue\n"},
  {"MoveInParent", PyvtkMRMLHierarchyNode_MoveInParent, METH_VARARGS,
   "MoveInParent(self, increment:int) -> None\nC++: void MoveInParent(int increment)\n\nMove this node in it's parent up (positive increment) or down\n(negative increment) by 'increment' number of places\n"},
  {"RemoveHierarchyChildrenNodes", PyvtkMRMLHierarchyNode_RemoveHierarchyChildrenNodes, METH_VARARGS,
   "RemoveHierarchyChildrenNodes(self) -> None\nC++: void RemoveHierarchyChildrenNodes()\n\nRemoves immediate children nodes, their children are reparented\nto this parent node.\n"},
  {"RemoveAllHierarchyChildrenNodes", PyvtkMRMLHierarchyNode_RemoveAllHierarchyChildrenNodes, METH_VARARGS,
   "RemoveAllHierarchyChildrenNodes(self) -> None\nC++: void RemoveAllHierarchyChildrenNodes()\n\nRemoves all children hierarchy nodes including children of\nchildren, etc.\n"},
  {"GetAssociatedNodeID", PyvtkMRMLHierarchyNode_GetAssociatedNodeID, METH_VARARGS,
   "GetAssociatedNodeID(self) -> str\nC++: virtual char *GetAssociatedNodeID()\n\nAssociated node methods ////////////////\n\nString ID of the corresponding displayable MRML node\n"},
  {"SetAssociatedNodeID", PyvtkMRMLHierarchyNode_SetAssociatedNodeID, METH_VARARGS,
   "SetAssociatedNodeID(self, ref:str) -> None\nC++: virtual void SetAssociatedNodeID(const char *ref)\n\n"},
  {"GetAssociatedNode", PyvtkMRMLHierarchyNode_GetAssociatedNode, METH_VARARGS,
   "GetAssociatedNode(self) -> vtkMRMLNode\nC++: virtual vtkMRMLNode *GetAssociatedNode()\n\nGet node associated with this hierarchy node\n"},
  {"GetAssociatedChildrenNodes", PyvtkMRMLHierarchyNode_GetAssociatedChildrenNodes, METH_VARARGS,
   "GetAssociatedChildrenNodes(self, children:vtkCollection,\n    childClass:str=...) -> None\nC++: virtual void GetAssociatedChildrenNodes(\n    vtkCollection *children, const char *childClass=nullptr)\n\nFind all associated children nodes of a specified class in the\nhierarchy if childClass is nullptr returns all associated\nchildren nodes.\n"},
  {"GetAssociatedHierarchyNode", PyvtkMRMLHierarchyNode_GetAssociatedHierarchyNode, METH_VARARGS,
   "GetAssociatedHierarchyNode(scene:vtkMRMLScene,\n    associatedNodeID:str) -> vtkMRMLHierarchyNode\nC++: static vtkMRMLHierarchyNode *GetAssociatedHierarchyNode(\n    vtkMRMLScene *scene, const char *associatedNodeID)\n\nGet Hierarchy node for a given associated node\n"},
  {"SetSortingValue", PyvtkMRMLHierarchyNode_SetSortingValue, METH_VARARGS,
   "SetSortingValue(self, value:float) -> None\nC++: void SetSortingValue(double value)\n\nNode's Sorting Value Use a method for Set because it needs to\ncall modified on any associated\n"},
  {"GetSortingValue", PyvtkMRMLHierarchyNode_GetSortingValue, METH_VARARGS,
   "GetSortingValue(self) -> float\nC++: virtual double GetSortingValue()\n\n"},
  {"GetAllowMultipleChildren", PyvtkMRMLHierarchyNode_GetAllowMultipleChildren, METH_VARARGS,
   "GetAllowMultipleChildren(self) -> int\nC++: virtual int GetAllowMultipleChildren()\n\nturn off if only want to have one child associated with this\nhierarchy node, as with the leaf type nodes that are pointing to\na single mrml node. Used first in checking drag and drop targets.\nDefault to true.\n"},
  {"SetAllowMultipleChildren", PyvtkMRMLHierarchyNode_SetAllowMultipleChildren, METH_VARARGS,
   "SetAllowMultipleChildren(self, _arg:int) -> None\nC++: virtual void SetAllowMultipleChildren(int _arg)\n\n"},
  {"AllowMultipleChildrenOn", PyvtkMRMLHierarchyNode_AllowMultipleChildrenOn, METH_VARARGS,
   "AllowMultipleChildrenOn(self) -> None\nC++: virtual void AllowMultipleChildrenOn()\n\n"},
  {"AllowMultipleChildrenOff", PyvtkMRMLHierarchyNode_AllowMultipleChildrenOff, METH_VARARGS,
   "AllowMultipleChildrenOff(self) -> None\nC++: virtual void AllowMultipleChildrenOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLHierarchyNode_Doc =
  "vtkMRMLHierarchyNode - Abstract class representing a hierarchy member.\n\n"
  "Superclass: vtkMRMLNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLHierarchyNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLHierarchyNode", // tp_name
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
  PyvtkMRMLHierarchyNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLHierarchyNode_StaticNew()
{
  return vtkMRMLHierarchyNode::New();
}

PyObject *PyvtkMRMLHierarchyNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLHierarchyNode_Type, PyvtkMRMLHierarchyNode_Methods,
    "vtkMRMLHierarchyNode",
 &PyvtkMRMLHierarchyNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "ChildNodeAddedEvent", vtkMRMLHierarchyNode::ChildNodeAddedEvent },
        { "ChildNodeRemovedEvent", vtkMRMLHierarchyNode::ChildNodeRemovedEvent },
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

void PyVTKAddFile_vtkMRMLHierarchyNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLHierarchyNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLHierarchyNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

