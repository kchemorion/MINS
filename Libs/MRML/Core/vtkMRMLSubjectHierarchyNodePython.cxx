// python wrapper for vtkMRMLSubjectHierarchyNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSubjectHierarchyNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSubjectHierarchyNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSubjectHierarchyNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLNode_ClassNew
extern "C" { PyObject *PyvtkMRMLNode_ClassNew(); }
#define DECLARED_PyvtkMRMLNode_ClassNew
#endif

static PyObject *
PyvtkMRMLSubjectHierarchyNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSubjectHierarchyNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSubjectHierarchyNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSubjectHierarchyNode *tempr = vtkMRMLSubjectHierarchyNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSubjectHierarchyNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSubjectHierarchyNode::NewInstance());

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
PyvtkMRMLSubjectHierarchyNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSubjectHierarchyNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSubjectHierarchyNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLSubjectHierarchyNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

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
      op->vtkMRMLSubjectHierarchyNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLSubjectHierarchyNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetSubjectHierarchyNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSubjectHierarchyNode");

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    vtkMRMLSubjectHierarchyNode *tempr = vtkMRMLSubjectHierarchyNode::GetSubjectHierarchyNode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetSceneItemID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSceneItemID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetSceneItemID() :
      op->vtkMRMLSubjectHierarchyNode::GetSceneItemID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemDataNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemDataNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetItemDataNode(temp0) :
      op->vtkMRMLSubjectHierarchyNode::GetItemDataNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_SetItemName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetItemName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetItemName(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::SetItemName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetItemName(temp0) :
      op->vtkMRMLSubjectHierarchyNode::GetItemName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_SetItemLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetItemLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetItemLevel(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::SetItemLevel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetItemLevel(temp0) :
      op->vtkMRMLSubjectHierarchyNode::GetItemLevel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_SetItemOwnerPluginName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetItemOwnerPluginName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetItemOwnerPluginName(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::SetItemOwnerPluginName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemOwnerPluginName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemOwnerPluginName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetItemOwnerPluginName(temp0) :
      op->vtkMRMLSubjectHierarchyNode::GetItemOwnerPluginName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_SetItemExpanded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetItemExpanded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetItemExpanded(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::SetItemExpanded(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemExpanded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemExpanded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetItemExpanded(temp0) :
      op->vtkMRMLSubjectHierarchyNode::GetItemExpanded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_SetItemUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetItemUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::string temp1;
  std::string temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetItemUID(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::SetItemUID(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetItemUID(temp0, temp1) :
      op->vtkMRMLSubjectHierarchyNode::GetItemUID(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_SetItemAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetItemAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::string temp1;
  std::string temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetItemAttribute(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::SetItemAttribute(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_RemoveItemAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItemAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveItemAttribute(temp0, temp1) :
      op->vtkMRMLSubjectHierarchyNode::RemoveItemAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetItemAttribute(temp0, temp1) :
      op->vtkMRMLSubjectHierarchyNode::GetItemAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemAttributeNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemAttributeNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetItemAttributeNames(temp0) :
      op->vtkMRMLSubjectHierarchyNode::GetItemAttributeNames(temp0));

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_HasItemAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasItemAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->HasItemAttribute(temp0, temp1) :
      op->vtkMRMLSubjectHierarchyNode::HasItemAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_ItemModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ItemModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ItemModified(temp0);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::ItemModified(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_RequestOwnerPluginSearch_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestOwnerPluginSearch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RequestOwnerPluginSearch(temp0);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::RequestOwnerPluginSearch(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSubjectHierarchyNode_RequestOwnerPluginSearch_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestOwnerPluginSearch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->RequestOwnerPluginSearch(temp0);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::RequestOwnerPluginSearch(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSubjectHierarchyNode_RequestOwnerPluginSearch_Methods[] = {
  {"RequestOwnerPluginSearch", PyvtkMRMLSubjectHierarchyNode_RequestOwnerPluginSearch_s1, METH_VARARGS,
   "@k"},
  {"RequestOwnerPluginSearch", PyvtkMRMLSubjectHierarchyNode_RequestOwnerPluginSearch_s2, METH_VARARGS,
   "@V *vtkMRMLNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLSubjectHierarchyNode_RequestOwnerPluginSearch(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLSubjectHierarchyNode_RequestOwnerPluginSearch_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RequestOwnerPluginSearch");
  return nullptr;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetInvalidItemID(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInvalidItemID");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    long long tempr = vtkMRMLSubjectHierarchyNode::GetInvalidItemID();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_SetItemDataNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetItemDataNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  vtkMRMLNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->SetItemDataNode(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::SetItemDataNode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_CreateItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  vtkMRMLNode *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    long long tempr = (ap.IsBound() ?
      op->CreateItem(temp0, temp1, temp2) :
      op->vtkMRMLSubjectHierarchyNode::CreateItem(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_CreateHierarchyItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateHierarchyItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::string temp1;
  std::string temp2;
  int temp3 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    long long tempr = (ap.IsBound() ?
      op->CreateHierarchyItem(temp0, temp1, temp2, temp3) :
      op->vtkMRMLSubjectHierarchyNode::CreateHierarchyItem(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_CreateSubjectItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateSubjectItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->CreateSubjectItem(temp0, temp1) :
      op->vtkMRMLSubjectHierarchyNode::CreateSubjectItem(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_CreateStudyItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateStudyItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->CreateStudyItem(temp0, temp1) :
      op->vtkMRMLSubjectHierarchyNode::CreateStudyItem(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_CreateFolderItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateFolderItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->CreateFolderItem(temp0, temp1) :
      op->vtkMRMLSubjectHierarchyNode::CreateFolderItem(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_RemoveItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  bool temp1 = true;
  bool temp2 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveItem(temp0, temp1, temp2) :
      op->vtkMRMLSubjectHierarchyNode::RemoveItem(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_RemoveItemChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItemChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  bool temp1 = true;
  bool temp2 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveItemChildren(temp0, temp1, temp2) :
      op->vtkMRMLSubjectHierarchyNode::RemoveItemChildren(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_RemoveAllItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->RemoveAllItems(temp0);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::RemoveAllItems(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_SetItemParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetItemParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  long long temp1;
  bool temp2 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetItemParent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::SetItemParent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetItemParent(temp0) :
      op->vtkMRMLSubjectHierarchyNode::GetItemParent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemPositionUnderParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemPositionUnderParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetItemPositionUnderParent(temp0) :
      op->vtkMRMLSubjectHierarchyNode::GetItemPositionUnderParent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemByPositionUnderParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemByPositionUnderParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->GetItemByPositionUnderParent(temp0, temp1) :
      op->vtkMRMLSubjectHierarchyNode::GetItemByPositionUnderParent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemChildren_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::vector<long long> temp1(ap.GetArgSize(1));
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->GetItemChildren(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::GetItemChildren(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemChildren_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->GetItemChildren(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::GetItemChildren(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSubjectHierarchyNode_GetItemChildren_Methods[] = {
  {"GetItemChildren", PyvtkMRMLSubjectHierarchyNode_GetItemChildren_s1, METH_VARARGS,
   "@kT|q k"},
  {"GetItemChildren", PyvtkMRMLSubjectHierarchyNode_GetItemChildren_s2, METH_VARARGS,
   "@kV|q *vtkIdList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemChildren(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLSubjectHierarchyNode_GetItemChildren_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetItemChildren");
  return nullptr;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_ReparentItemByDataNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReparentItemByDataNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  vtkMRMLNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->ReparentItemByDataNode(temp0, temp1) :
      op->vtkMRMLSubjectHierarchyNode::ReparentItemByDataNode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_MoveItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->MoveItem(temp0, temp1) :
      op->vtkMRMLSubjectHierarchyNode::MoveItem(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemByUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemByUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->GetItemByUID(temp0, temp1) :
      op->vtkMRMLSubjectHierarchyNode::GetItemByUID(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemByUIDList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemByUIDList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->GetItemByUIDList(temp0, temp1) :
      op->vtkMRMLSubjectHierarchyNode::GetItemByUIDList(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemByDataNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemByDataNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    long long tempr = (ap.IsBound() ?
      op->GetItemByDataNode(temp0) :
      op->vtkMRMLSubjectHierarchyNode::GetItemByDataNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetItemByName(temp0) :
      op->vtkMRMLSubjectHierarchyNode::GetItemByName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemsByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemsByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  std::string temp0;
  vtkIdList *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->GetItemsByName(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::GetItemsByName(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemChildWithName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemChildWithName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::string temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    long long tempr = (ap.IsBound() ?
      op->GetItemChildWithName(temp0, temp1, temp2) :
      op->vtkMRMLSubjectHierarchyNode::GetItemChildWithName(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetDataNodesInBranch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataNodesInBranch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  vtkCollection *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->GetDataNodesInBranch(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::GetDataNodesInBranch(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetParentDataNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentDataNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetParentDataNode(temp0, temp1) :
      op->vtkMRMLSubjectHierarchyNode::GetParentDataNode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_SetDisplayVisibilityForBranch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayVisibilityForBranch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDisplayVisibilityForBranch(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::SetDisplayVisibilityForBranch(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetDisplayVisibilityForBranch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayVisibilityForBranch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisplayVisibilityForBranch(temp0) :
      op->vtkMRMLSubjectHierarchyNode::GetDisplayVisibilityForBranch(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_SetItemDisplayVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetItemDisplayVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetItemDisplayVisibility(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::SetItemDisplayVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemDisplayVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemDisplayVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetItemDisplayVisibility(temp0) :
      op->vtkMRMLSubjectHierarchyNode::GetItemDisplayVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetDisplayNodeForItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayNodeForItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLDisplayNode *tempr = (ap.IsBound() ?
      op->GetDisplayNodeForItem(temp0) :
      op->vtkMRMLSubjectHierarchyNode::GetDisplayNodeForItem(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_IsItemLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsItemLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->IsItemLevel(temp0, temp1) :
      op->vtkMRMLSubjectHierarchyNode::IsItemLevel(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_IsItemVirtualBranchParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsItemVirtualBranchParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsItemVirtualBranchParent(temp0) :
      op->vtkMRMLSubjectHierarchyNode::IsItemVirtualBranchParent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetAttributeFromItemAncestor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeFromItemAncestor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::string temp1;
  std::string temp2 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetAttributeFromItemAncestor(temp0, temp1, temp2) :
      op->vtkMRMLSubjectHierarchyNode::GetAttributeFromItemAncestor(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemAncestorAtLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemAncestorAtLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->GetItemAncestorAtLevel(temp0, temp1) :
      op->vtkMRMLSubjectHierarchyNode::GetItemAncestorAtLevel(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_IsAnyNodeInBranchTransformed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAnyNodeInBranchTransformed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  bool temp1 = true;
  vtkMRMLTransformNode *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMRMLTransformNode")))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAnyNodeInBranchTransformed(temp0, temp1, temp2) :
      op->vtkMRMLSubjectHierarchyNode::IsAnyNodeInBranchTransformed(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_DeserializeUIDList(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DeserializeUIDList");

  std::string temp0;
  std::vector<std::string> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    vtkMRMLSubjectHierarchyNode::DeserializeUIDList(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemsReferencedFromItemByDICOM_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemsReferencedFromItemByDICOM");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::vector<long long> tempr = (ap.IsBound() ?
      op->GetItemsReferencedFromItemByDICOM(temp0) :
      op->vtkMRMLSubjectHierarchyNode::GetItemsReferencedFromItemByDICOM(temp0));

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemsReferencedFromItemByDICOM_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemsReferencedFromItemByDICOM");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetItemsReferencedFromItemByDICOM(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::GetItemsReferencedFromItemByDICOM(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemsReferencedFromItemByDICOM(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLSubjectHierarchyNode_GetItemsReferencedFromItemByDICOM_s1(self, args);
    case 2:
      return PyvtkMRMLSubjectHierarchyNode_GetItemsReferencedFromItemByDICOM_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetItemsReferencedFromItemByDICOM");
  return nullptr;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemsReferencingItemByDICOM_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemsReferencingItemByDICOM");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::vector<long long> tempr = (ap.IsBound() ?
      op->GetItemsReferencingItemByDICOM(temp0) :
      op->vtkMRMLSubjectHierarchyNode::GetItemsReferencingItemByDICOM(temp0));

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemsReferencingItemByDICOM_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemsReferencingItemByDICOM");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetItemsReferencingItemByDICOM(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::GetItemsReferencingItemByDICOM(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetItemsReferencingItemByDICOM(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLSubjectHierarchyNode_GetItemsReferencingItemByDICOM_s1(self, args);
    case 2:
      return PyvtkMRMLSubjectHierarchyNode_GetItemsReferencingItemByDICOM_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetItemsReferencingItemByDICOM");
  return nullptr;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GenerateUniqueItemName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateUniqueItemName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GenerateUniqueItemName(temp0) :
      op->vtkMRMLSubjectHierarchyNode::GenerateUniqueItemName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetNumberOfItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfItems() :
      op->vtkMRMLSubjectHierarchyNode::GetNumberOfItems());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_GetNumberOfItemChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfItemChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  long long temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfItemChildren(temp0, temp1) :
      op->vtkMRMLSubjectHierarchyNode::GetNumberOfItemChildren(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_ResolveSubjectHierarchy(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ResolveSubjectHierarchy");

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    vtkMRMLSubjectHierarchyNode *tempr = vtkMRMLSubjectHierarchyNode::ResolveSubjectHierarchy(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyNode_ShowItemsInView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowItemsInView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyNode *op = static_cast<vtkMRMLSubjectHierarchyNode *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkMRMLAbstractViewNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkMRMLAbstractViewNode"))
  {
    if (ap.IsBound())
    {
      op->ShowItemsInView(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyNode::ShowItemsInView(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSubjectHierarchyNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSubjectHierarchyNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSubjectHierarchyNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSubjectHierarchyNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLSubjectHierarchyNode\nC++: static vtkMRMLSubjectHierarchyNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSubjectHierarchyNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSubjectHierarchyNode\nC++: vtkMRMLSubjectHierarchyNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSubjectHierarchyNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSubjectHierarchyNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLSubjectHierarchyNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"Copy", PyvtkMRMLSubjectHierarchyNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLSubjectHierarchyNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Contour)\n"},
  {"GetSubjectHierarchyNode", PyvtkMRMLSubjectHierarchyNode_GetSubjectHierarchyNode, METH_VARARGS,
   "GetSubjectHierarchyNode(scene:vtkMRMLScene)\n    -> vtkMRMLSubjectHierarchyNode\nC++: static vtkMRMLSubjectHierarchyNode *GetSubjectHierarchyNode(\n    vtkMRMLScene *scene)\n\nGet the (practically) singleton subject hierarchy node from MRML\nscene. Merges subject hierarchy nodes if multiple found, and\nreturns the merged one.\n"},
  {"GetSceneItemID", PyvtkMRMLSubjectHierarchyNode_GetSceneItemID, METH_VARARGS,
   "GetSceneItemID(self) -> int\nC++: vtkIdType GetSceneItemID()\n\nGet ID of root subject hierarchy item (which can be interpreted\nas the scene in terms of hierarchy)\n"},
  {"GetItemDataNode", PyvtkMRMLSubjectHierarchyNode_GetItemDataNode, METH_VARARGS,
   "GetItemDataNode(self, itemID:int) -> vtkMRMLNode\nC++: vtkMRMLNode *GetItemDataNode(vtkIdType itemID)\n\nGet data node for a subject hierarchy item\n"},
  {"SetItemName", PyvtkMRMLSubjectHierarchyNode_SetItemName, METH_VARARGS,
   "SetItemName(self, itemID:int, name:str) -> None\nC++: void SetItemName(vtkIdType itemID, std::string name)\n\nSet name for a subject hierarchy item\n"},
  {"GetItemName", PyvtkMRMLSubjectHierarchyNode_GetItemName, METH_VARARGS,
   "GetItemName(self, itemID:int) -> str\nC++: std::string GetItemName(vtkIdType itemID)\n\nGet name for a subject hierarchy item\n\\return Name of the associated data node if any, otherwise the\n    name of the item\n"},
  {"SetItemLevel", PyvtkMRMLSubjectHierarchyNode_SetItemLevel, METH_VARARGS,
   "SetItemLevel(self, itemID:int, level:str) -> None\nC++: void SetItemLevel(vtkIdType itemID, std::string level)\n\nConvenience function to set level attribute for a subject\nhierarchy item\n"},
  {"GetItemLevel", PyvtkMRMLSubjectHierarchyNode_GetItemLevel, METH_VARARGS,
   "GetItemLevel(self, itemID:int) -> str\nC++: std::string GetItemLevel(vtkIdType itemID)\n\nConvenience function to get level attribute for a subject\nhierarchy item\n"},
  {"SetItemOwnerPluginName", PyvtkMRMLSubjectHierarchyNode_SetItemOwnerPluginName, METH_VARARGS,
   "SetItemOwnerPluginName(self, itemID:int, ownerPluginName:str)\n    -> None\nC++: void SetItemOwnerPluginName(vtkIdType itemID,\n    std::string ownerPluginName)\n\nSet owner plugin name (role) for a subject hierarchy item\n"},
  {"GetItemOwnerPluginName", PyvtkMRMLSubjectHierarchyNode_GetItemOwnerPluginName, METH_VARARGS,
   "GetItemOwnerPluginName(self, itemID:int) -> str\nC++: std::string GetItemOwnerPluginName(vtkIdType itemID)\n\nGet owner plugin name (role) for a subject hierarchy item\n"},
  {"SetItemExpanded", PyvtkMRMLSubjectHierarchyNode_SetItemExpanded, METH_VARARGS,
   "SetItemExpanded(self, itemID:int, expanded:bool) -> None\nC++: void SetItemExpanded(vtkIdType itemID, bool expanded)\n\nSet expanded flag for a subject hierarchy item (only for internal\nuse, do not set explicitly)\n"},
  {"GetItemExpanded", PyvtkMRMLSubjectHierarchyNode_GetItemExpanded, METH_VARARGS,
   "GetItemExpanded(self, itemID:int) -> bool\nC++: bool GetItemExpanded(vtkIdType itemID)\n\nGet expanded flag for a subject hierarchy item\n"},
  {"SetItemUID", PyvtkMRMLSubjectHierarchyNode_SetItemUID, METH_VARARGS,
   "SetItemUID(self, itemID:int, uidName:str, uidValue:str) -> None\nC++: void SetItemUID(vtkIdType itemID, std::string uidName,\n    std::string uidValue)\n\nSet UID to the subject hierarchy item\n"},
  {"GetItemUID", PyvtkMRMLSubjectHierarchyNode_GetItemUID, METH_VARARGS,
   "GetItemUID(self, itemID:int, uidName:str) -> str\nC++: std::string GetItemUID(vtkIdType itemID, std::string uidName)\n\nGet a UID with a given name\n\\return The UID value if exists, empty string if does not\n"},
  {"SetItemAttribute", PyvtkMRMLSubjectHierarchyNode_SetItemAttribute, METH_VARARGS,
   "SetItemAttribute(self, itemID:int, attributeName:str,\n    attributeValue:str) -> None\nC++: void SetItemAttribute(vtkIdType itemID,\n    std::string attributeName, std::string attributeValue)\n\nAdd attribute to the subject hierarchy item\n"},
  {"RemoveItemAttribute", PyvtkMRMLSubjectHierarchyNode_RemoveItemAttribute, METH_VARARGS,
   "RemoveItemAttribute(self, itemID:int, attributeName:str) -> bool\nC++: bool RemoveItemAttribute(vtkIdType itemID,\n    std::string attributeName)\n\nRemove attribute from subject hierarchy item\n\\return True if attribute was removed, false if item or attribute\nis not found\n"},
  {"GetItemAttribute", PyvtkMRMLSubjectHierarchyNode_GetItemAttribute, METH_VARARGS,
   "GetItemAttribute(self, itemID:int, attributeName:str) -> str\nC++: std::string GetItemAttribute(vtkIdType itemID,\n    std::string attributeName)\n\nGet an attribute with a given name for a subject hierarchy item\n\\return The attribute value if exists, empty string if does not\n    (also if attribute value is empty! \\sa HasItemAttribute)\n"},
  {"GetItemAttributeNames", PyvtkMRMLSubjectHierarchyNode_GetItemAttributeNames, METH_VARARGS,
   "GetItemAttributeNames(self, itemID:int) -> (str, ...)\nC++: std::vector<std::string> GetItemAttributeNames(\n    vtkIdType itemID)\n\nGet attribute names for a subject hierarchy item\n\\return List of attribute names\n"},
  {"HasItemAttribute", PyvtkMRMLSubjectHierarchyNode_HasItemAttribute, METH_VARARGS,
   "HasItemAttribute(self, itemID:int, attributeName:str) -> bool\nC++: bool HasItemAttribute(vtkIdType itemID,\n    std::string attributeName)\n\nDetermine if a given attribute is present in an item. Especially\nuseful if need to determine whether an attribute value is empty\nstring or the attribute is missing\n\\return True if attribute exists, false if item or attribute is\n    not found\n"},
  {"ItemModified", PyvtkMRMLSubjectHierarchyNode_ItemModified, METH_VARARGS,
   "ItemModified(self, itemID:int) -> None\nC++: void ItemModified(vtkIdType itemID)\n\nInvoke item modified event (that triggers per-item update in the\nviews). Useful if a property of the item changes that does not\noriginate in the subject hierarchy item (such as visibility or\ntransform of data node)\n"},
  {"RequestOwnerPluginSearch", PyvtkMRMLSubjectHierarchyNode_RequestOwnerPluginSearch, METH_VARARGS,
   "RequestOwnerPluginSearch(self, itemID:int) -> None\nC++: void RequestOwnerPluginSearch(vtkIdType itemID)\nRequestOwnerPluginSearch(self, dataNode:vtkMRMLNode) -> None\nC++: void RequestOwnerPluginSearch(vtkMRMLNode *dataNode)\n\nInvoke SubjectHierarchyItemOwnerPluginSearchRequested event for\nthe item, which results in a search for owner plugin. Typically\ncalled after setting an attribute indicating a desired role for\nthe item.\n"},
  {"GetInvalidItemID", PyvtkMRMLSubjectHierarchyNode_GetInvalidItemID, METH_VARARGS,
   "GetInvalidItemID() -> int\nC++: static vtkIdType GetInvalidItemID()\n\nPython accessor for the invalid ID\n"},
  {"SetItemDataNode", PyvtkMRMLSubjectHierarchyNode_SetItemDataNode, METH_VARARGS,
   "SetItemDataNode(self, itemID:int, dataNode:vtkMRMLNode) -> None\nC++: void SetItemDataNode(vtkIdType itemID, vtkMRMLNode *dataNode)\n\nSet data node for a subject hierarchy item Note: This function is\nsolely for setting nodes associated to hierarchy items (e.g.\nfolder), and returns\n  with error if a data node is already associated to the item.\nDoes not call item modified event!\n  This is due to simplicity reasons so that plugin search does\nnot need to re-run when item is modified.\n  Should never need to call manually!\n"},
  {"CreateItem", PyvtkMRMLSubjectHierarchyNode_CreateItem, METH_VARARGS,
   "CreateItem(self, parentItemID:int, dataNode:vtkMRMLNode,\n    ownerPluginName:str=...) -> int\nC++: vtkIdType CreateItem(vtkIdType parentItemID,\n    vtkMRMLNode *dataNode, const char *ownerPluginName=nullptr)\n\nCreate subject hierarchy item for a data node. Can be used to add\nnodes that were not added automatically (e.g. private scene,\nHideFromEditors on, or exclude attribute set)\n\\param parentItemID Parent item under which the created item is\n    inserted. If top-level then use \\sa GetSceneItemID\n\\param dataNode Associated data MRML node\n\\return ID of the item in the hierarchy that was assigned\n    automatically when adding\n"},
  {"CreateHierarchyItem", PyvtkMRMLSubjectHierarchyNode_CreateHierarchyItem, METH_VARARGS,
   "CreateHierarchyItem(self, parentItemID:int, name:str, level:str,\n    positionUnderParent:int=-1) -> int\nC++: vtkIdType CreateHierarchyItem(vtkIdType parentItemID,\n    std::string name, std::string level,\n    int positionUnderParent=-1)\n\nGeneric function to create hierarchy items of given level.\nConvenience functions are available for frequently used levels\n\\sa CreateSubjectItem, \\sa CreateStudyItem, \\sa CreateFolderItem\n\\param parentItemID Parent item under which the created item is\n    inserted. If top-level then use \\sa GetSceneItemID\n\\param name Name of the item. Only used if there is no data node\n    associated\n\\param level Level of the hierarchy item. It will be stored as\n    attribute (\\sa vtkMRMLSubjectHierarchyConstants)\n\\param positionUnderParent Position of the item under the parent\n    item. If set to -1 then it will be appended\n  after the last item under the parent.\n\\return ID of the item in the hierarchy that was assigned\n    automatically when adding\n"},
  {"CreateSubjectItem", PyvtkMRMLSubjectHierarchyNode_CreateSubjectItem, METH_VARARGS,
   "CreateSubjectItem(self, parentItemID:int, name:str) -> int\nC++: vtkIdType CreateSubjectItem(vtkIdType parentItemID,\n    std::string name)\n\nConvenience function to create subject item in the hierarchy\nunder a specified parent.\n\\param parentItemID Parent item under which the created item is\n    inserted. If top-level then use \\sa GetSceneItemID\n\\param name Name of the item. Only used if there is no data node\n    associated\n\\return ID of the item in the hierarchy that was assigned\n    automatically when adding\n"},
  {"CreateStudyItem", PyvtkMRMLSubjectHierarchyNode_CreateStudyItem, METH_VARARGS,
   "CreateStudyItem(self, parentItemID:int, name:str) -> int\nC++: vtkIdType CreateStudyItem(vtkIdType parentItemID,\n    std::string name)\n\nConvenience function to create study item in the hierarchy under\na specified parent.\n\\param parentItemID Parent item under which the created item is\n    inserted\n\\param name Name of the item. Only used if there is no data node\n    associated\n\\return ID of the item in the hierarchy that was assigned\n    automatically when adding\n"},
  {"CreateFolderItem", PyvtkMRMLSubjectHierarchyNode_CreateFolderItem, METH_VARARGS,
   "CreateFolderItem(self, parentItemID:int, name:str) -> int\nC++: vtkIdType CreateFolderItem(vtkIdType parentItemID,\n    std::string name)\n\nConvenience function to create folder item in the hierarchy under\na specified parent.\n\\param parentItemID Parent item folder which the created item is\n    inserted. If top-level then use \\sa GetSceneItemID\n\\param name Name of the item. Only used if there is no data node\n    associated\n\\return ID of the item in the hierarchy that was assigned\n    automatically when adding\n"},
  {"RemoveItem", PyvtkMRMLSubjectHierarchyNode_RemoveItem, METH_VARARGS,
   "RemoveItem(self, itemID:int, removeDataNode:bool=True,\n    recursive:bool=True) -> bool\nC++: bool RemoveItem(vtkIdType itemID, bool removeDataNode=true,\n    bool recursive=true)\n\nRemove subject hierarchy item or branch from the tree\n\\param itemID Item to remove\n\\param removeDataNode Flag determining whether to remove\n    associated data node from the scene if any. On by default\n\\param recursive Flag determining whether to remove children\n    recursively (the whole branch). On by default\n"},
  {"RemoveItemChildren", PyvtkMRMLSubjectHierarchyNode_RemoveItemChildren, METH_VARARGS,
   "RemoveItemChildren(self, itemID:int, removeDataNodes:bool=True,\n    recursive:bool=True) -> bool\nC++: bool RemoveItemChildren(vtkIdType itemID,\n    bool removeDataNodes=true, bool recursive=true)\n\nRemove child items of a subject hierarchy item\n\\param itemID Parent of items to remove\n\\param removeDataNodes Flag determining whether to remove\n    associated data nodes from the scene if any. On by default\n\\param recursive Flag determining whether to remove children\n    recursively, or just the direct children. On by default\n"},
  {"RemoveAllItems", PyvtkMRMLSubjectHierarchyNode_RemoveAllItems, METH_VARARGS,
   "RemoveAllItems(self, removeDataNode:bool=False) -> None\nC++: void RemoveAllItems(bool removeDataNode=false)\n\nRemove all items from hierarchy\n\\param removeDataNode Flag determining whether to remove\n    associated data node from the scene if any. False by default,\n  because as opposed to the method \\sa RemoveItem that is usually\ninitiated by the user, this method is\n  called when subject hierarchy is re-built from the scene\n"},
  {"SetItemParent", PyvtkMRMLSubjectHierarchyNode_SetItemParent, METH_VARARGS,
   "SetItemParent(self, itemID:int, parentItemID:int,\n    enableCircularCheck:bool=True) -> None\nC++: void SetItemParent(vtkIdType itemID, vtkIdType parentItemID,\n    bool enableCircularCheck=true)\n\nSet the parent of a subject hierarchy item\n\\param enableCircularCheck Option to do a safety check for\n    circular parenthood in performance-critical cases. On by\n    default.\n"},
  {"GetItemParent", PyvtkMRMLSubjectHierarchyNode_GetItemParent, METH_VARARGS,
   "GetItemParent(self, itemID:int) -> int\nC++: vtkIdType GetItemParent(vtkIdType itemID)\n\nGet ID of the parent of a subject hierarchy item\n\\return Parent item ID, INVALID_ITEM_ID if there is no parent\n"},
  {"GetItemPositionUnderParent", PyvtkMRMLSubjectHierarchyNode_GetItemPositionUnderParent, METH_VARARGS,
   "GetItemPositionUnderParent(self, itemID:int) -> int\nC++: int GetItemPositionUnderParent(vtkIdType itemID)\n\nGet position of item under its parent\n\\return Position of item under its parent. -1 on failure\n"},
  {"GetItemByPositionUnderParent", PyvtkMRMLSubjectHierarchyNode_GetItemByPositionUnderParent, METH_VARARGS,
   "GetItemByPositionUnderParent(self, parentItemID:int, position:int)\n     -> int\nC++: vtkIdType GetItemByPositionUnderParent(\n    vtkIdType parentItemID, int position)\n\nGet item under parent by position\n\\return ID of item found in given position. Invalid if no item\n    found at that position\n"},
  {"GetItemChildren", PyvtkMRMLSubjectHierarchyNode_GetItemChildren, METH_VARARGS,
   "GetItemChildren(self, itemID:int, childIDs:[int, ...],\n    recursive:bool=False) -> None\nC++: void GetItemChildren(vtkIdType itemID,\n    std::vector<vtkIdType> &childIDs, bool recursive=false)\nGetItemChildren(self, itemID:int, childIDs:vtkIdList,\n    recursive:bool=False) -> None\nC++: void GetItemChildren(vtkIdType itemID, vtkIdList *childIDs,\n    bool recursive=false)\n\nGet IDs of the children of a subject hierarchy item\n\\param childIDs Output vector containing the children. It will\n    not contain the given item itself.\n  The order of the items is depth-first, in a way that the child\nof an item in the vector always comes after the item.\n\\param recursive If false then collect direct children, if true\n    then the whole branch. False by default\n"},
  {"ReparentItemByDataNode", PyvtkMRMLSubjectHierarchyNode_ReparentItemByDataNode, METH_VARARGS,
   "ReparentItemByDataNode(self, itemID:int,\n    newParentNode:vtkMRMLNode) -> bool\nC++: bool ReparentItemByDataNode(vtkIdType itemID,\n    vtkMRMLNode *newParentNode)\n\nSet new parent to a subject hierarchy item under item associated\nto specified data node\n\\return Success flag\n"},
  {"MoveItem", PyvtkMRMLSubjectHierarchyNode_MoveItem, METH_VARARGS,
   "MoveItem(self, itemID:int, beforeItemID:int) -> bool\nC++: bool MoveItem(vtkIdType itemID, vtkIdType beforeItemID)\n\nMove item within the same branch before given item\n\\param beforeItemID Item to move given item before. If\n    INVALID_ITEM_ID then insert to the end\n\\return Success flag\n"},
  {"GetItemByUID", PyvtkMRMLSubjectHierarchyNode_GetItemByUID, METH_VARARGS,
   "GetItemByUID(self, uidName:str, uidValue:str) -> int\nC++: vtkIdType GetItemByUID(const char *uidName,\n    const char *uidValue)\n\nFind subject hierarchy item according to a UID (by exact match)\n\\param uidName UID string to lookup\n\\param uidValue UID string that needs to _exactly match_ the UID\n    string of the subject hierarchy item\n\\sa GetUID()\n"},
  {"GetItemByUIDList", PyvtkMRMLSubjectHierarchyNode_GetItemByUIDList, METH_VARARGS,
   "GetItemByUIDList(self, uidName:str, uidValue:str) -> int\nC++: vtkIdType GetItemByUIDList(const char *uidName,\n    const char *uidValue)\n\nFind subject hierarchy item according to a UID (by containing).\nFor example find UID in instance UID list\n\\param uidName UID string to lookup\n\\param uidValue UID string that needs to be _contained_ in the\n    UID string of the subject hierarchy item\n\\return First match\n\\sa GetUID()\n"},
  {"GetItemByDataNode", PyvtkMRMLSubjectHierarchyNode_GetItemByDataNode, METH_VARARGS,
   "GetItemByDataNode(self, dataNode:vtkMRMLNode) -> int\nC++: vtkIdType GetItemByDataNode(vtkMRMLNode *dataNode)\n\nGet subject hierarchy item associated to a data MRML node\n\\param dataNode The node for which we want the associated\n    hierarchy node\n\\return The first subject hierarchy item ID to which the given\n    node is associated to.\n"},
  {"GetItemByName", PyvtkMRMLSubjectHierarchyNode_GetItemByName, METH_VARARGS,
   "GetItemByName(self, name:str) -> int\nC++: vtkIdType GetItemByName(std::string name)\n\nGet item in whole subject hierarchy by a given name\n\\param name Name to find\n\\return Item ID of the first item found by name using exact\n    match. Warning is logged if more than one found\n"},
  {"GetItemsByName", PyvtkMRMLSubjectHierarchyNode_GetItemsByName, METH_VARARGS,
   "GetItemsByName(self, name:str, foundItemIds:vtkIdList,\n    contains:bool=False) -> None\nC++: void GetItemsByName(std::string name,\n    vtkIdList *foundItemIds, bool contains=false)\n\nGet items in whole subject hierarchy by a given name\n\\param name Name to find\n\\param foundItemIds List of found items\n\\param contains Flag whether string containment is enough to\n    determine match. True means a substring is searched\n  (case insensitive), false means that the name needs to match\nexactly (case sensitive). False by default.\n\\return Item ID of the first item found by name using exact\n    match. Warning is logged if more than one found\n"},
  {"GetItemChildWithName", PyvtkMRMLSubjectHierarchyNode_GetItemChildWithName, METH_VARARGS,
   "GetItemChildWithName(self, parentItemID:int, name:str,\n    recursive:bool=False) -> int\nC++: vtkIdType GetItemChildWithName(vtkIdType parentItemID,\n    std::string name, bool recursive=false)\n\nGet child subject hierarchy item with specific name\n\\param parent Parent subject hierarchy item to start from\n\\param name Name to find\n\\param recursive Flag determining whether search is recursive or\n    not. False by default\n\\return Child item ID whose name is the same as the given string\n"},
  {"GetDataNodesInBranch", PyvtkMRMLSubjectHierarchyNode_GetDataNodesInBranch, METH_VARARGS,
   "GetDataNodesInBranch(self, itemID:int,\n    dataNodeCollection:vtkCollection, childClass:str=...) -> None\nC++: void GetDataNodesInBranch(vtkIdType itemID,\n    vtkCollection *dataNodeCollection,\n    const char *childClass=nullptr)\n\nFind all associated data nodes of a specified class in a branch\nof the hierarchy.\n\\param itemID Parent item of the branch\n\\param dataNodeCollection Collection updated with the list of\n    data nodes\n\\param childClass Name of the class we are looking for. nullptr\n    returns associated data nodes of any kind\n"},
  {"GetParentDataNode", PyvtkMRMLSubjectHierarchyNode_GetParentDataNode, METH_VARARGS,
   "GetParentDataNode(self, dataNode:vtkMRMLNode,\n    recursive:bool=False) -> vtkMRMLNode\nC++: vtkMRMLNode *GetParentDataNode(vtkMRMLNode *dataNode,\n    bool recursive=false)\n\nGet data node associated to the parent of the item associated to\na data node.\n\\param recursive Flag determining whether only the direct parent\n    is considered (false), or\n  also further up in the tree (true). Default is false\n\\return Data node associated to the parent of the given data\n    node's item\n"},
  {"SetDisplayVisibilityForBranch", PyvtkMRMLSubjectHierarchyNode_SetDisplayVisibilityForBranch, METH_VARARGS,
   "SetDisplayVisibilityForBranch(self, itemID:int, visible:int)\n    -> None\nC++: void SetDisplayVisibilityForBranch(vtkIdType itemID,\n    int visible)\n\nSet subject hierarchy branch visibility\\deprecated Kept only for\nbackward compatibility. \\sa SetItemDisplayVisibility\n"},
  {"GetDisplayVisibilityForBranch", PyvtkMRMLSubjectHierarchyNode_GetDisplayVisibilityForBranch, METH_VARARGS,
   "GetDisplayVisibilityForBranch(self, itemID:int) -> int\nC++: int GetDisplayVisibilityForBranch(vtkIdType itemID)\n\nGet subject hierarchy branch visibility\\deprecated Kept only for\nbackward compatibility. \\sa GetItemDisplayVisibility\n\\return Visibility value (0:Hidden, 1:Visible,\n    2:PartiallyVisible, -1:NotDisplayable)\n"},
  {"SetItemDisplayVisibility", PyvtkMRMLSubjectHierarchyNode_SetItemDisplayVisibility, METH_VARARGS,
   "SetItemDisplayVisibility(self, itemID:int, visible:int) -> None\nC++: void SetItemDisplayVisibility(vtkIdType itemID, int visible)\n\nSet subject hierarchy item visibility. If the item is a hierarchy\nitem (folder, study, etc.), then it will apply to the whole\nbranch, as the displayable managers consider hierarchy visibility\ninformation.\n"},
  {"GetItemDisplayVisibility", PyvtkMRMLSubjectHierarchyNode_GetItemDisplayVisibility, METH_VARARGS,
   "GetItemDisplayVisibility(self, itemID:int) -> int\nC++: int GetItemDisplayVisibility(vtkIdType itemID)\n\nGet subject hierarchy item visibility\n"},
  {"GetDisplayNodeForItem", PyvtkMRMLSubjectHierarchyNode_GetDisplayNodeForItem, METH_VARARGS,
   "GetDisplayNodeForItem(self, itemID:int) -> vtkMRMLDisplayNode\nC++: vtkMRMLDisplayNode *GetDisplayNodeForItem(vtkIdType itemID)\n\nGet display node associated to a given item, either directly\n(folder, study, etc.) or indirectly (displayable nodes with an\nassociated display node)\n"},
  {"IsItemLevel", PyvtkMRMLSubjectHierarchyNode_IsItemLevel, METH_VARARGS,
   "IsItemLevel(self, itemID:int, level:str) -> bool\nC++: bool IsItemLevel(vtkIdType itemID, std::string level)\n\nDetermine if an item is of a certain level\n\\param level Level to check\n\\return True if the item is of the specified level, false\n    otherwise\n"},
  {"IsItemVirtualBranchParent", PyvtkMRMLSubjectHierarchyNode_IsItemVirtualBranchParent, METH_VARARGS,
   "IsItemVirtualBranchParent(self, itemID:int) -> bool\nC++: bool IsItemVirtualBranchParent(vtkIdType itemID)\n\nDetermine whether a given item is the parent of a virtual branch\n(Items in virtual branches are invalid without the parent item,\nas they represent the item's data node's content, so they are\nremoved automatically when the parent item of the virtual branch\nis removed)\n"},
  {"GetAttributeFromItemAncestor", PyvtkMRMLSubjectHierarchyNode_GetAttributeFromItemAncestor, METH_VARARGS,
   "GetAttributeFromItemAncestor(self, itemID:int, attributeName:str,\n    level:str=...) -> str\nC++: std::string GetAttributeFromItemAncestor(vtkIdType itemID,\n    std::string attributeName, std::string level=\"\")\n\nGet attribute value for a item from an upper level in the subject\nhierarchy\n\\param attributeName Name of the requested attribute\n\\param level Level of the ancestor item we look for the attribute\nin\n  (e.g. value of\nvtkMRMLSubjectHierarchyConstants::GetSubjectHierarchyLevelStudy())\n.\n  If empty, then look all the way up to the subject and return\nfirst attribute found with specified name\n\\return Attribute value from the lowest level ancestor where the\n    attribute can be found\n"},
  {"GetItemAncestorAtLevel", PyvtkMRMLSubjectHierarchyNode_GetItemAncestorAtLevel, METH_VARARGS,
   "GetItemAncestorAtLevel(self, itemID:int, level:str) -> int\nC++: vtkIdType GetItemAncestorAtLevel(vtkIdType itemID,\n    std::string level)\n\nGet ancestor subject hierarchy item at a certain level\n\\param level Level of the ancestor item we start searching.\n"},
  {"IsAnyNodeInBranchTransformed", PyvtkMRMLSubjectHierarchyNode_IsAnyNodeInBranchTransformed, METH_VARARGS,
   "IsAnyNodeInBranchTransformed(self, itemID:int,\n    includeParentItem:bool=True,\n    exceptionNode:vtkMRMLTransformNode=...) -> bool\nC++: bool IsAnyNodeInBranchTransformed(vtkIdType itemID,\n    bool includeParentItem=true,\n    vtkMRMLTransformNode *exceptionNode=nullptr)\n\nDetermine if any of the children of this item is transformed (has\na parent transform applied), except for an optionally given node\n\\param includeParentItem Determine whether the given item (the\n    parent of the branch) should be included in the search. True\n    by default\n\\param exceptionNode The function returns false if the only\n    applied transform found is this specified node.\n"},
  {"DeserializeUIDList", PyvtkMRMLSubjectHierarchyNode_DeserializeUIDList, METH_VARARGS,
   "DeserializeUIDList(uidListString:str, deserializedUIDList:[str,\n    ...]) -> None\nC++: static void DeserializeUIDList(std::string uidListString,\n    std::vector<std::string> &deserializedUIDList)\n\nDeserialize a UID list string (stored in the UID map) into a\nvector of UID strings\n"},
  {"GetItemsReferencedFromItemByDICOM", PyvtkMRMLSubjectHierarchyNode_GetItemsReferencedFromItemByDICOM, METH_VARARGS,
   "GetItemsReferencedFromItemByDICOM(self, itemID:int) -> (int, ...)\nC++: std::vector<vtkIdType> GetItemsReferencedFromItemByDICOM(\n    vtkIdType itemID)\nGetItemsReferencedFromItemByDICOM(self, itemID:int,\n    referencingIdList:vtkIdList) -> None\nC++: void GetItemsReferencedFromItemByDICOM(vtkIdType itemID,\n    vtkIdList *referencingIdList)\n\nGet subject hierarchy items that are referenced from a given item\nby DICOM. Finds the series items that contain the SOP instance\nUIDs that are listed in the attribute of this item containing the\nreferenced SOP instance UIDs\n\\sa vtkMRMLSubjectHierarchyConstants::GetDICOMReferencedInstanceUI\n    DsAttributeName()\n"},
  {"GetItemsReferencingItemByDICOM", PyvtkMRMLSubjectHierarchyNode_GetItemsReferencingItemByDICOM, METH_VARARGS,
   "GetItemsReferencingItemByDICOM(self, itemID:int) -> (int, ...)\nC++: std::vector<vtkIdType> GetItemsReferencingItemByDICOM(\n    vtkIdType itemID)\nGetItemsReferencingItemByDICOM(self, itemID:int,\n    referencingIdList:vtkIdList) -> None\nC++: void GetItemsReferencingItemByDICOM(vtkIdType itemID,\n    vtkIdList *referencingIdList)\n\nGet subject hierarchy items that reference a given item by DICOM.\nFinds the series items that contain the SOP instance UID of the\nitem among their referenced SOP instance UIDs.\n\\sa vtkMRMLSubjectHierarchyConstants::GetDICOMReferencedInstanceUI\n    DsAttributeName()\n"},
  {"GenerateUniqueItemName", PyvtkMRMLSubjectHierarchyNode_GenerateUniqueItemName, METH_VARARGS,
   "GenerateUniqueItemName(self, name:str) -> str\nC++: std::string GenerateUniqueItemName(std::string name)\n\nGenerate unique item name\n"},
  {"GetNumberOfItems", PyvtkMRMLSubjectHierarchyNode_GetNumberOfItems, METH_VARARGS,
   "GetNumberOfItems(self) -> int\nC++: int GetNumberOfItems()\n\nGet number of items under the scene, excluding the scene\n"},
  {"GetNumberOfItemChildren", PyvtkMRMLSubjectHierarchyNode_GetNumberOfItemChildren, METH_VARARGS,
   "GetNumberOfItemChildren(self, itemID:int, recursive:bool=False)\n    -> int\nC++: int GetNumberOfItemChildren(vtkIdType itemID,\n    bool recursive=false)\n\nGet number of children for an item\n\\param recursive If true, then get total number of items in the\n    branch, only direct children otherwise. False by default\n"},
  {"ResolveSubjectHierarchy", PyvtkMRMLSubjectHierarchyNode_ResolveSubjectHierarchy, METH_VARARGS,
   "ResolveSubjectHierarchy(scene:vtkMRMLScene)\n    -> vtkMRMLSubjectHierarchyNode\nC++: static vtkMRMLSubjectHierarchyNode *ResolveSubjectHierarchy(\n    vtkMRMLScene *scene)\n\nEnsure the consistency and validity of the SH node in the scene\n"},
  {"ShowItemsInView", PyvtkMRMLSubjectHierarchyNode_ShowItemsInView, METH_VARARGS,
   "ShowItemsInView(self, itemIDs:vtkIdList,\n    viewNode:vtkMRMLAbstractViewNode) -> None\nC++: void ShowItemsInView(vtkIdList *itemIDs,\n    vtkMRMLAbstractViewNode *viewNode)\n\nShow items in selected view (used for drag&drop of subject\nhierarchy items into the viewer)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSubjectHierarchyNode_Doc =
  "vtkMRMLSubjectHierarchyNode\n\n"
  "Superclass: vtkMRMLNode\n\n"
  "MRML node to represent subject hierarchy tree\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSubjectHierarchyNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSubjectHierarchyNode", // tp_name
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
  PyvtkMRMLSubjectHierarchyNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSubjectHierarchyNode_StaticNew()
{
  return vtkMRMLSubjectHierarchyNode::New();
}

PyObject *PyvtkMRMLSubjectHierarchyNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSubjectHierarchyNode_Type, PyvtkMRMLSubjectHierarchyNode_Methods,
    "vtkMRMLSubjectHierarchyNode",
 &PyvtkMRMLSubjectHierarchyNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 12; c++)
  {
    static const struct { const char *name; int value; }
      constants[12] = {
        { "SubjectHierarchyItemAddedEvent", vtkMRMLSubjectHierarchyNode::SubjectHierarchyItemAddedEvent },
        { "SubjectHierarchyItemAboutToBeRemovedEvent", vtkMRMLSubjectHierarchyNode::SubjectHierarchyItemAboutToBeRemovedEvent },
        { "SubjectHierarchyItemRemovedEvent", vtkMRMLSubjectHierarchyNode::SubjectHierarchyItemRemovedEvent },
        { "SubjectHierarchyItemModifiedEvent", vtkMRMLSubjectHierarchyNode::SubjectHierarchyItemModifiedEvent },
        { "SubjectHierarchyItemDisplayModifiedEvent", vtkMRMLSubjectHierarchyNode::SubjectHierarchyItemDisplayModifiedEvent },
        { "SubjectHierarchyItemTransformModifiedEvent", vtkMRMLSubjectHierarchyNode::SubjectHierarchyItemTransformModifiedEvent },
        { "SubjectHierarchyItemReparentedEvent", vtkMRMLSubjectHierarchyNode::SubjectHierarchyItemReparentedEvent },
        { "SubjectHierarchyItemUIDAddedEvent", vtkMRMLSubjectHierarchyNode::SubjectHierarchyItemUIDAddedEvent },
        { "SubjectHierarchyItemOwnerPluginSearchRequested", vtkMRMLSubjectHierarchyNode::SubjectHierarchyItemOwnerPluginSearchRequested },
        { "SubjectHierarchyStartResolveEvent", vtkMRMLSubjectHierarchyNode::SubjectHierarchyStartResolveEvent },
        { "SubjectHierarchyEndResolveEvent", vtkMRMLSubjectHierarchyNode::SubjectHierarchyEndResolveEvent },
        { "SubjectHierarchyItemsShowInViewRequestedEvent", vtkMRMLSubjectHierarchyNode::SubjectHierarchyItemsShowInViewRequestedEvent },
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

void PyVTKAddFile_vtkMRMLSubjectHierarchyNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSubjectHierarchyNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSubjectHierarchyNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

