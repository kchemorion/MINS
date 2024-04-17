// python wrapper for vtkMRMLDisplayableHierarchyNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLDisplayableHierarchyNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLDisplayableHierarchyNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLDisplayableHierarchyNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLHierarchyNode_ClassNew
extern "C" { PyObject *PyvtkMRMLHierarchyNode_ClassNew(); }
#define DECLARED_PyvtkMRMLHierarchyNode_ClassNew
#endif

static PyObject *
PyvtkMRMLDisplayableHierarchyNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLDisplayableHierarchyNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLDisplayableHierarchyNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLDisplayableHierarchyNode *tempr = vtkMRMLDisplayableHierarchyNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDisplayableHierarchyNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLDisplayableHierarchyNode::NewInstance());

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
PyvtkMRMLDisplayableHierarchyNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLDisplayableHierarchyNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLDisplayableHierarchyNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLDisplayableHierarchyNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

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
      op->vtkMRMLDisplayableHierarchyNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLDisplayableHierarchyNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_SetSceneReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSceneReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSceneReferences();
    }
    else
    {
      op->vtkMRMLDisplayableHierarchyNode::SetSceneReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_UpdateReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateReferences();
    }
    else
    {
      op->vtkMRMLDisplayableHierarchyNode::UpdateReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

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
      op->vtkMRMLDisplayableHierarchyNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_UpdateReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

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
      op->vtkMRMLDisplayableHierarchyNode::UpdateReferenceID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_GetDisplayableNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayableNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDisplayableNodeID() :
      op->vtkMRMLDisplayableHierarchyNode::GetDisplayableNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_SetDisplayableNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayableNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayableNodeID(temp0);
    }
    else
    {
      op->vtkMRMLDisplayableHierarchyNode::SetDisplayableNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_SetAndObserveDisplayNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveDisplayNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveDisplayNodeID(temp0);
    }
    else
    {
      op->vtkMRMLDisplayableHierarchyNode::SetAndObserveDisplayNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_GetDisplayNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDisplayNodeID() :
      op->vtkMRMLDisplayableHierarchyNode::GetDisplayNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_GetDisplayableNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayableNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDisplayableNode *tempr = (ap.IsBound() ?
      op->GetDisplayableNode() :
      op->vtkMRMLDisplayableHierarchyNode::GetDisplayableNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_GetDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDisplayNode *tempr = (ap.IsBound() ?
      op->GetDisplayNode() :
      op->vtkMRMLDisplayableHierarchyNode::GetDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_ExpandedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExpandedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExpandedOn();
    }
    else
    {
      op->vtkMRMLDisplayableHierarchyNode::ExpandedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_ExpandedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExpandedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExpandedOff();
    }
    else
    {
      op->vtkMRMLDisplayableHierarchyNode::ExpandedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_GetExpanded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExpanded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExpanded() :
      op->vtkMRMLDisplayableHierarchyNode::GetExpanded());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_SetExpanded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExpanded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExpanded(temp0);
    }
    else
    {
      op->vtkMRMLDisplayableHierarchyNode::SetExpanded(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_GetCollapsedParentNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollapsedParentNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDisplayableHierarchyNode *tempr = (ap.IsBound() ?
      op->GetCollapsedParentNode() :
      op->vtkMRMLDisplayableHierarchyNode::GetCollapsedParentNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_GetChildrenDisplayableNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildrenDisplayableNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->GetChildrenDisplayableNodes(temp0);
    }
    else
    {
      op->vtkMRMLDisplayableHierarchyNode::GetChildrenDisplayableNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_GetDisplayableHierarchyNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDisplayableHierarchyNode");

  vtkMRMLScene *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetValue(temp1))
  {
    vtkMRMLDisplayableHierarchyNode *tempr = vtkMRMLDisplayableHierarchyNode::GetDisplayableHierarchyNode(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_RemoveChildrenNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveChildrenNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveChildrenNodes();
    }
    else
    {
      op->vtkMRMLDisplayableHierarchyNode::RemoveChildrenNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_RemoveAllChildrenNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllChildrenNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllChildrenNodes();
    }
    else
    {
      op->vtkMRMLDisplayableHierarchyNode::RemoveAllChildrenNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyNode *op = static_cast<vtkMRMLDisplayableHierarchyNode *>(vp);

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
      op->vtkMRMLDisplayableHierarchyNode::ProcessMRMLEvents(temp0, temp1, temp2);
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

static PyMethodDef PyvtkMRMLDisplayableHierarchyNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLDisplayableHierarchyNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLDisplayableHierarchyNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLDisplayableHierarchyNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLDisplayableHierarchyNode\nC++: static vtkMRMLDisplayableHierarchyNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLDisplayableHierarchyNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLDisplayableHierarchyNode\nC++: vtkMRMLDisplayableHierarchyNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLDisplayableHierarchyNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLDisplayableHierarchyNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLDisplayableHierarchyNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"Copy", PyvtkMRMLDisplayableHierarchyNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLDisplayableHierarchyNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, DisplayableHierarchy)\n"},
  {"SetSceneReferences", PyvtkMRMLDisplayableHierarchyNode_SetSceneReferences, METH_VARARGS,
   "SetSceneReferences(self) -> None\nC++: void SetSceneReferences() override;\n\nSet the display node as reference into the scene\n"},
  {"UpdateReferences", PyvtkMRMLDisplayableHierarchyNode_UpdateReferences, METH_VARARGS,
   "UpdateReferences(self) -> None\nC++: void UpdateReferences() override;\n\nUpdates this node if it depends on other nodes when the node is\ndeleted in the scene\n"},
  {"UpdateScene", PyvtkMRMLDisplayableHierarchyNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the Displayable node and read the data\n"},
  {"UpdateReferenceID", PyvtkMRMLDisplayableHierarchyNode_UpdateReferenceID, METH_VARARGS,
   "UpdateReferenceID(self, oldID:str, newID:str) -> None\nC++: void UpdateReferenceID(const char *oldID, const char *newID)\n    override;\n\nUpdate the stored reference to another node in the scene\n"},
  {"GetDisplayableNodeID", PyvtkMRMLDisplayableHierarchyNode_GetDisplayableNodeID, METH_VARARGS,
   "GetDisplayableNodeID(self) -> str\nC++: virtual char *GetDisplayableNodeID()\n\nString ID of the corresponding displayable MRML node\n"},
  {"SetDisplayableNodeID", PyvtkMRMLDisplayableHierarchyNode_SetDisplayableNodeID, METH_VARARGS,
   "SetDisplayableNodeID(self, ref:str) -> None\nC++: virtual void SetDisplayableNodeID(const char *ref)\n\n"},
  {"SetAndObserveDisplayNodeID", PyvtkMRMLDisplayableHierarchyNode_SetAndObserveDisplayNodeID, METH_VARARGS,
   "SetAndObserveDisplayNodeID(self, DisplayNodeID:str) -> None\nC++: void SetAndObserveDisplayNodeID(const char *DisplayNodeID)\n\n"},
  {"GetDisplayNodeID", PyvtkMRMLDisplayableHierarchyNode_GetDisplayNodeID, METH_VARARGS,
   "GetDisplayNodeID(self) -> str\nC++: virtual char *GetDisplayNodeID()\n\n"},
  {"GetDisplayableNode", PyvtkMRMLDisplayableHierarchyNode_GetDisplayableNode, METH_VARARGS,
   "GetDisplayableNode(self) -> vtkMRMLDisplayableNode\nC++: vtkMRMLDisplayableNode *GetDisplayableNode()\n\nGet associated displayable MRML node\n"},
  {"GetDisplayNode", PyvtkMRMLDisplayableHierarchyNode_GetDisplayNode, METH_VARARGS,
   "GetDisplayNode(self) -> vtkMRMLDisplayNode\nC++: vtkMRMLDisplayNode *GetDisplayNode()\n\nGet associated display MRML node\n"},
  {"ExpandedOn", PyvtkMRMLDisplayableHierarchyNode_ExpandedOn, METH_VARARGS,
   "ExpandedOn(self) -> None\nC++: virtual void ExpandedOn()\n\nIndicates if the node is expanded\n"},
  {"ExpandedOff", PyvtkMRMLDisplayableHierarchyNode_ExpandedOff, METH_VARARGS,
   "ExpandedOff(self) -> None\nC++: virtual void ExpandedOff()\n\n"},
  {"GetExpanded", PyvtkMRMLDisplayableHierarchyNode_GetExpanded, METH_VARARGS,
   "GetExpanded(self) -> int\nC++: virtual int GetExpanded()\n\n"},
  {"SetExpanded", PyvtkMRMLDisplayableHierarchyNode_SetExpanded, METH_VARARGS,
   "SetExpanded(self, _arg:int) -> None\nC++: virtual void SetExpanded(int _arg)\n\n"},
  {"GetCollapsedParentNode", PyvtkMRMLDisplayableHierarchyNode_GetCollapsedParentNode, METH_VARARGS,
   "GetCollapsedParentNode(self) -> vtkMRMLDisplayableHierarchyNode\nC++: vtkMRMLDisplayableHierarchyNode *GetCollapsedParentNode()\n\nGet the top parent node in the hierarchy which is not expanded\n"},
  {"GetChildrenDisplayableNodes", PyvtkMRMLDisplayableHierarchyNode_GetChildrenDisplayableNodes, METH_VARARGS,
   "GetChildrenDisplayableNodes(self, children:vtkCollection) -> None\nC++: void GetChildrenDisplayableNodes(vtkCollection *children)\n\nFind all child displayable nodes in the hierarchy\n"},
  {"GetDisplayableHierarchyNode", PyvtkMRMLDisplayableHierarchyNode_GetDisplayableHierarchyNode, METH_VARARGS,
   "GetDisplayableHierarchyNode(scene:vtkMRMLScene,\n    displayableNodeID:str) -> vtkMRMLDisplayableHierarchyNode\nC++: static vtkMRMLDisplayableHierarchyNode *GetDisplayableHierarchyNode(\n    vtkMRMLScene *scene, const char *displayableNodeID)\n\nGet Hierarchy node for a given displayable node\n"},
  {"RemoveChildrenNodes", PyvtkMRMLDisplayableHierarchyNode_RemoveChildrenNodes, METH_VARARGS,
   "RemoveChildrenNodes(self) -> None\nC++: void RemoveChildrenNodes()\n\nRemoves immediate children nodes, both hierarchy and\ncorresponding displayable/display nodes their children are\nreparented to this parent node.\n"},
  {"RemoveAllChildrenNodes", PyvtkMRMLDisplayableHierarchyNode_RemoveAllChildrenNodes, METH_VARARGS,
   "RemoveAllChildrenNodes(self) -> None\nC++: void RemoveAllChildrenNodes()\n\nRemoves all children hierarchy nodes both hierarchy and\ncorresponding displayable/display nodes, including children of\nchildren, etc.\n"},
  {"ProcessMRMLEvents", PyvtkMRMLDisplayableHierarchyNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLDisplayableHierarchyNode_Doc =
  "vtkMRMLDisplayableHierarchyNode - MRML node to represent a hierarchy\nof displayable nodes\n\n"
  "Superclass: vtkMRMLHierarchyNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLDisplayableHierarchyNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLDisplayableHierarchyNode", // tp_name
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
  PyvtkMRMLDisplayableHierarchyNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLDisplayableHierarchyNode_StaticNew()
{
  return vtkMRMLDisplayableHierarchyNode::New();
}

PyObject *PyvtkMRMLDisplayableHierarchyNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLDisplayableHierarchyNode_Type, PyvtkMRMLDisplayableHierarchyNode_Methods,
    "vtkMRMLDisplayableHierarchyNode",
 &PyvtkMRMLDisplayableHierarchyNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLHierarchyNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  o = PyLong_FromLong(vtkMRMLDisplayableHierarchyNode::DisplayModifiedEvent);
  if (o)
  {
    PyDict_SetItemString(d, "DisplayModifiedEvent", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLDisplayableHierarchyNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLDisplayableHierarchyNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLDisplayableHierarchyNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

