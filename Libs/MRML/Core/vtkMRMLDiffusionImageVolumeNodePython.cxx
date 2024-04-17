// python wrapper for vtkMRMLDiffusionImageVolumeNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLDiffusionImageVolumeNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLDiffusionImageVolumeNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLDiffusionImageVolumeNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLTensorVolumeNode_ClassNew
extern "C" { PyObject *PyvtkMRMLTensorVolumeNode_ClassNew(); }
#define DECLARED_PyvtkMRMLTensorVolumeNode_ClassNew
#endif

static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLDiffusionImageVolumeNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLDiffusionImageVolumeNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLDiffusionImageVolumeNode *tempr = vtkMRMLDiffusionImageVolumeNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDiffusionImageVolumeNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLDiffusionImageVolumeNode::NewInstance());

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
PyvtkMRMLDiffusionImageVolumeNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLDiffusionImageVolumeNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLDiffusionImageVolumeNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLDiffusionImageVolumeNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLDiffusionImageVolumeNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLDiffusionImageVolumeNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_SetBaselineNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaselineNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBaselineNodeID(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionImageVolumeNode::SetBaselineNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_GetBaselineNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaselineNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetBaselineNodeID() :
      op->vtkMRMLDiffusionImageVolumeNode::GetBaselineNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_SetMaskNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskNodeID(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionImageVolumeNode::SetMaskNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_GetMaskNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMaskNodeID() :
      op->vtkMRMLDiffusionImageVolumeNode::GetMaskNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_SetDiffusionWeightedNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffusionWeightedNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiffusionWeightedNodeID(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionImageVolumeNode::SetDiffusionWeightedNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_GetDiffusionWeightedNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionWeightedNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDiffusionWeightedNodeID() :
      op->vtkMRMLDiffusionImageVolumeNode::GetDiffusionWeightedNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_GetBaselineNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaselineNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumeNode *tempr = (ap.IsBound() ?
      op->GetBaselineNode() :
      op->vtkMRMLDiffusionImageVolumeNode::GetBaselineNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_GetMaskNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumeNode *tempr = (ap.IsBound() ?
      op->GetMaskNode() :
      op->vtkMRMLDiffusionImageVolumeNode::GetMaskNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_GetDiffusionWeightedNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionWeightedNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDiffusionWeightedVolumeNode *tempr = (ap.IsBound() ?
      op->GetDiffusionWeightedNode() :
      op->vtkMRMLDiffusionImageVolumeNode::GetDiffusionWeightedNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_UpdateReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

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
      op->vtkMRMLDiffusionImageVolumeNode::UpdateReferenceID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_UpdateReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateReferences();
    }
    else
    {
      op->vtkMRMLDiffusionImageVolumeNode::UpdateReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionImageVolumeNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

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
      op->vtkMRMLDiffusionImageVolumeNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLDiffusionImageVolumeNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionImageVolumeNode *op = static_cast<vtkMRMLDiffusionImageVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLDiffusionImageVolumeNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLDiffusionImageVolumeNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLDiffusionImageVolumeNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLDiffusionImageVolumeNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLDiffusionImageVolumeNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLDiffusionImageVolumeNode\nC++: static vtkMRMLDiffusionImageVolumeNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLDiffusionImageVolumeNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLDiffusionImageVolumeNode\nC++: vtkMRMLDiffusionImageVolumeNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLDiffusionImageVolumeNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLDiffusionImageVolumeNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLDiffusionImageVolumeNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"HasCopyContent", PyvtkMRMLDiffusionImageVolumeNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"GetNodeTagName", PyvtkMRMLDiffusionImageVolumeNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"SetBaselineNodeID", PyvtkMRMLDiffusionImageVolumeNode_SetBaselineNodeID, METH_VARARGS,
   "SetBaselineNodeID(self, id:str) -> None\nC++: void SetBaselineNodeID(const char *id)\n\nDescription: String ID of the storage MRML node\n"},
  {"GetBaselineNodeID", PyvtkMRMLDiffusionImageVolumeNode_GetBaselineNodeID, METH_VARARGS,
   "GetBaselineNodeID(self) -> str\nC++: virtual char *GetBaselineNodeID()\n\n"},
  {"SetMaskNodeID", PyvtkMRMLDiffusionImageVolumeNode_SetMaskNodeID, METH_VARARGS,
   "SetMaskNodeID(self, id:str) -> None\nC++: void SetMaskNodeID(const char *id)\n\nString ID of the display MRML node\n"},
  {"GetMaskNodeID", PyvtkMRMLDiffusionImageVolumeNode_GetMaskNodeID, METH_VARARGS,
   "GetMaskNodeID(self) -> str\nC++: virtual char *GetMaskNodeID()\n\n"},
  {"SetDiffusionWeightedNodeID", PyvtkMRMLDiffusionImageVolumeNode_SetDiffusionWeightedNodeID, METH_VARARGS,
   "SetDiffusionWeightedNodeID(self, id:str) -> None\nC++: void SetDiffusionWeightedNodeID(const char *id)\n\nDescription: String ID of the display MRML node\n"},
  {"GetDiffusionWeightedNodeID", PyvtkMRMLDiffusionImageVolumeNode_GetDiffusionWeightedNodeID, METH_VARARGS,
   "GetDiffusionWeightedNodeID(self) -> str\nC++: virtual char *GetDiffusionWeightedNodeID()\n\n"},
  {"GetBaselineNode", PyvtkMRMLDiffusionImageVolumeNode_GetBaselineNode, METH_VARARGS,
   "GetBaselineNode(self) -> vtkMRMLVolumeNode\nC++: vtkMRMLVolumeNode *GetBaselineNode()\n\nAssociated volume MRML node\n"},
  {"GetMaskNode", PyvtkMRMLDiffusionImageVolumeNode_GetMaskNode, METH_VARARGS,
   "GetMaskNode(self) -> vtkMRMLVolumeNode\nC++: vtkMRMLVolumeNode *GetMaskNode()\n\nAssociated volume MRML node\n"},
  {"GetDiffusionWeightedNode", PyvtkMRMLDiffusionImageVolumeNode_GetDiffusionWeightedNode, METH_VARARGS,
   "GetDiffusionWeightedNode(self)\n    -> vtkMRMLDiffusionWeightedVolumeNode\nC++: vtkMRMLDiffusionWeightedVolumeNode *GetDiffusionWeightedNode(\n    )\n\nAssociated volume MRML node\n"},
  {"UpdateReferenceID", PyvtkMRMLDiffusionImageVolumeNode_UpdateReferenceID, METH_VARARGS,
   "UpdateReferenceID(self, oldID:str, newID:str) -> None\nC++: void UpdateReferenceID(const char *oldID, const char *newID)\n    override;\n\nAssociated volume MRML node\n\nUpdate the stored reference to another node in the scene\n"},
  {"UpdateReferences", PyvtkMRMLDiffusionImageVolumeNode_UpdateReferences, METH_VARARGS,
   "UpdateReferences(self) -> None\nC++: void UpdateReferences() override;\n\nFinds the storage node and read the data\n\nUpdates this node if it depends on other nodes when the node is\ndeleted in the scene\n"},
  {"ProcessMRMLEvents", PyvtkMRMLDiffusionImageVolumeNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLDiffusionImageVolumeNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLDiffusionImageVolumeNode_Doc =
  "vtkMRMLDiffusionImageVolumeNode - MRML node for representing\ndiffusion weighted MRI volume\n\n"
  "Superclass: vtkMRMLTensorVolumeNode\n\n"
  "Diffusion Weighted Volume nodes describe data sets that encode\n"
  "diffusion weighted images. These images are the basis for computing\n"
  "the diffusion tensor. The node is a container for the necessary\n"
  "information to interpret DW images:\n"
  "1. Gradient information.\n"
  "2. B value for each gradient.\n"
  "3. Measurement frame that relates the coordinate system where the\n"
  "   gradients are given to RAS.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLDiffusionImageVolumeNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLDiffusionImageVolumeNode", // tp_name
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
  PyvtkMRMLDiffusionImageVolumeNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLDiffusionImageVolumeNode_StaticNew()
{
  return vtkMRMLDiffusionImageVolumeNode::New();
}

PyObject *PyvtkMRMLDiffusionImageVolumeNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLDiffusionImageVolumeNode_Type, PyvtkMRMLDiffusionImageVolumeNode_Methods,
    "vtkMRMLDiffusionImageVolumeNode",
 &PyvtkMRMLDiffusionImageVolumeNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLTensorVolumeNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLDiffusionImageVolumeNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLDiffusionImageVolumeNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLDiffusionImageVolumeNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

