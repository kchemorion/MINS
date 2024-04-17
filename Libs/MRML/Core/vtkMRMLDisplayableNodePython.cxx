// python wrapper for vtkMRMLDisplayableNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLDisplayableNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLDisplayableNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLDisplayableNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLTransformableNode_ClassNew
extern "C" { PyObject *PyvtkMRMLTransformableNode_ClassNew(); }
#define DECLARED_PyvtkMRMLTransformableNode_ClassNew
#endif

static PyObject *
PyvtkMRMLDisplayableNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLDisplayableNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLDisplayableNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLDisplayableNode *tempr = vtkMRMLDisplayableNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDisplayableNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLDisplayableNode::NewInstance());

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
PyvtkMRMLDisplayableNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLDisplayableNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLDisplayableNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

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
PyvtkMRMLDisplayableNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

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
PyvtkMRMLDisplayableNode_WriteCLI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteCLI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  std::string temp1;
  int temp2 = vtkMRMLStorageNode::CoordinateSystemRAS;
  int temp3 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->WriteCLI(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLDisplayableNode::WriteCLI(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp0.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp0.data(), temp0.size()));
      ap.SetContents(0, vec);
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
PyvtkMRMLDisplayableNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

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
      op->vtkMRMLDisplayableNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_SetAndObserveDisplayNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveDisplayNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

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
      op->vtkMRMLDisplayableNode::SetAndObserveDisplayNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_AddAndObserveDisplayNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAndObserveDisplayNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddAndObserveDisplayNodeID(temp0);
    }
    else
    {
      op->vtkMRMLDisplayableNode::AddAndObserveDisplayNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_RemoveNthDisplayNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNthDisplayNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveNthDisplayNodeID(temp0);
    }
    else
    {
      op->vtkMRMLDisplayableNode::RemoveNthDisplayNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_RemoveAllDisplayNodeIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllDisplayNodeIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllDisplayNodeIDs();
    }
    else
    {
      op->vtkMRMLDisplayableNode::RemoveAllDisplayNodeIDs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_SetAndObserveNthDisplayNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveNthDisplayNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveNthDisplayNodeID(temp0, temp1);
    }
    else
    {
      op->vtkMRMLDisplayableNode::SetAndObserveNthDisplayNodeID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_HasDisplayNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasDisplayNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasDisplayNodeID(temp0) :
      op->vtkMRMLDisplayableNode::HasDisplayNodeID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_GetNumberOfDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDisplayNodes() :
      op->vtkMRMLDisplayableNode::GetNumberOfDisplayNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_GetNthDisplayNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthDisplayNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthDisplayNodeID(temp0) :
      op->vtkMRMLDisplayableNode::GetNthDisplayNodeID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_GetDisplayNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDisplayNodeID() :
      op->vtkMRMLDisplayableNode::GetDisplayNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_GetNthDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLDisplayNode *tempr = (ap.IsBound() ?
      op->GetNthDisplayNode(temp0) :
      op->vtkMRMLDisplayableNode::GetNthDisplayNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_GetDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDisplayNode *tempr = (ap.IsBound() ?
      op->GetDisplayNode() :
      op->vtkMRMLDisplayableNode::GetDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

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
      op->vtkMRMLDisplayableNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLDisplayableNode_CreateDefaultDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultDisplayNodes();
    }
    else
    {
      op->vtkMRMLDisplayableNode::CreateDefaultDisplayNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_CreateDefaultSequenceDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultSequenceDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultSequenceDisplayNodes();
    }
    else
    {
      op->vtkMRMLDisplayableNode::CreateDefaultSequenceDisplayNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_GetDisplayVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisplayVisibility() :
      op->vtkMRMLDisplayableNode::GetDisplayVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_SetDisplayVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayVisibility(temp0);
    }
    else
    {
      op->vtkMRMLDisplayableNode::SetDisplayVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_GetDisplayClassVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayClassVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisplayClassVisibility(temp0) :
      op->vtkMRMLDisplayableNode::GetDisplayClassVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_SetDisplayClassVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayClassVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDisplayClassVisibility(temp0, temp1);
    }
    else
    {
      op->vtkMRMLDisplayableNode::SetDisplayClassVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_GetRASBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRASBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

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
      op->vtkMRMLDisplayableNode::GetRASBounds(temp0);
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
PyvtkMRMLDisplayableNode_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

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
      op->vtkMRMLDisplayableNode::GetBounds(temp0);
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
PyvtkMRMLDisplayableNode_GetDisplayNodeReferenceRole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayNodeReferenceRole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDisplayNodeReferenceRole() :
      op->vtkMRMLDisplayableNode::GetDisplayNodeReferenceRole());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableNode_SetSelectable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableNode *op = static_cast<vtkMRMLDisplayableNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectable(temp0);
    }
    else
    {
      op->vtkMRMLDisplayableNode::SetSelectable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLDisplayableNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLDisplayableNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLDisplayableNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLDisplayableNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLDisplayableNode\nC++: static vtkMRMLDisplayableNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLDisplayableNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLDisplayableNode\nC++: vtkMRMLDisplayableNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLDisplayableNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLDisplayableNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLDisplayableNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override = 0;\n\nMRMLNode methods\n"},
  {"GetNodeTagName", PyvtkMRMLDisplayableNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override = 0;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"WriteCLI", PyvtkMRMLDisplayableNode_WriteCLI, METH_VARARGS,
   "WriteCLI(self, commandLine:[str, ...], prefix:str,\n    coordinateSystemFlag:int=..., multipleFlag:int=1) -> None\nC++: virtual void WriteCLI(std::vector<std::string> &commandLine,\n    std::string prefix,\n    int coordinateSystemFlag=vtkMRMLStorageNode::CoordinateSystemRAS,\n     int multipleFlag=1)\n\nWrite this node's information to a vector of strings for passing\nto a CLI. If the prefix is not an empty string, it gets pushed\nonto the vector of strings before the information.\ncoordinateSystemFlag = vtkMRMLStorageNode::CoordinateSystemRAS or\nvtkMRMLStorageNode::CoordinateSystemLPS multipleFlag = 1 for the\nwhole list, 0 for the first in the list\n"},
  {"Copy", PyvtkMRMLDisplayableNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"SetAndObserveDisplayNodeID", PyvtkMRMLDisplayableNode_SetAndObserveDisplayNodeID, METH_VARARGS,
   "SetAndObserveDisplayNodeID(self, displayNodeID:str) -> None\nC++: void SetAndObserveDisplayNodeID(const char *displayNodeID)\n\nConvenience method that sets the first display node ID.\n\\sa SetAndObserverNthDisplayNodeID(int, const char*)\n"},
  {"AddAndObserveDisplayNodeID", PyvtkMRMLDisplayableNode_AddAndObserveDisplayNodeID, METH_VARARGS,
   "AddAndObserveDisplayNodeID(self, displayNodeID:str) -> None\nC++: void AddAndObserveDisplayNodeID(const char *displayNodeID)\n\nConvenience method that adds a display node ID at the end of the\nlist.\n\\sa SetAndObserverNthDisplayNodeID(int, const char*)\n"},
  {"RemoveNthDisplayNodeID", PyvtkMRMLDisplayableNode_RemoveNthDisplayNodeID, METH_VARARGS,
   "RemoveNthDisplayNodeID(self, n:int) -> None\nC++: void RemoveNthDisplayNodeID(int n)\n\nConvenience method that removes the Nth display node ID from the\nlist\n\\sa SetAndObserverNthDisplayNodeID(int, const char*)\n"},
  {"RemoveAllDisplayNodeIDs", PyvtkMRMLDisplayableNode_RemoveAllDisplayNodeIDs, METH_VARARGS,
   "RemoveAllDisplayNodeIDs(self) -> None\nC++: void RemoveAllDisplayNodeIDs()\n\nRemove all display node IDs and associated display nodes.\n"},
  {"SetAndObserveNthDisplayNodeID", PyvtkMRMLDisplayableNode_SetAndObserveNthDisplayNodeID, METH_VARARGS,
   "SetAndObserveNthDisplayNodeID(self, n:int, displayNodeID:str)\n    -> None\nC++: void SetAndObserveNthDisplayNodeID(int n,\n    const char *displayNodeID)\n\nSet and observe the Nth display node ID in the list. If n is\nlarger than the number of display nodes, the display node ID is\nadded at the end of the list. If DisplayNodeID is 0, the node ID\nis removed from the list. When a node ID is set (added or\nchanged), its corresponding node is searched (slow) into the\nscene and cached for fast future access. It is possible however\nthat the node is not yet into the scene (due to some temporary\nstate (at loading time for example). UpdateScene() can later be\ncalled to retrieve the display nodes from the scene\n(automatically done when loading a scene). Get(Nth)DisplayNode()\nalso scan the scene if the node was not yet cached.\n\\sa SetAndObserveDisplayNodeID(const char*),\nAddAndObserveDisplayNodeID(const char *),\nRemoveNthDisplayNodeID(int)\n"},
  {"HasDisplayNodeID", PyvtkMRMLDisplayableNode_HasDisplayNodeID, METH_VARARGS,
   "HasDisplayNodeID(self, displayNodeID:str) -> bool\nC++: bool HasDisplayNodeID(const char *displayNodeID)\n\nReturn true if displayNodeID is in the display node ID list.\n"},
  {"GetNumberOfDisplayNodes", PyvtkMRMLDisplayableNode_GetNumberOfDisplayNodes, METH_VARARGS,
   "GetNumberOfDisplayNodes(self) -> int\nC++: int GetNumberOfDisplayNodes()\n\nReturn the number of display node IDs (and display nodes as they\nalways have the same size).\n"},
  {"GetNthDisplayNodeID", PyvtkMRMLDisplayableNode_GetNthDisplayNodeID, METH_VARARGS,
   "GetNthDisplayNodeID(self, n:int) -> str\nC++: const char *GetNthDisplayNodeID(int n)\n\nReturn the string of the Nth display node ID. Or 0 if no such\nnode exist. Warning, a temporary char generated from a\nstd::string::c_str() is returned.\n"},
  {"GetDisplayNodeID", PyvtkMRMLDisplayableNode_GetDisplayNodeID, METH_VARARGS,
   "GetDisplayNodeID(self) -> str\nC++: const char *GetDisplayNodeID()\n\nUtility function that returns the first display node id.\n\\sa GetNthDisplayNodeID(int), GetDisplayNode()\n"},
  {"GetNthDisplayNode", PyvtkMRMLDisplayableNode_GetNthDisplayNode, METH_VARARGS,
   "GetNthDisplayNode(self, n:int) -> vtkMRMLDisplayNode\nC++: vtkMRMLDisplayNode *GetNthDisplayNode(int n)\n\nGet associated display MRML node. Can be 0 in temporary states;\ne.g. if the displayable node has no scene, or if the associated\ndisplay is not yet into the scene. If not cached, it internally\nscans (slow) the scene to search for the associated display node\nID. If the displayable node is no longer in the scene (GetScene()\n== 0), it happens after the node is removed from the scene\n(scene->RemoveNode(dn), the returned display node is 0.\n\\sa GetNthDisplayNodeByClass()\n"},
  {"GetDisplayNode", PyvtkMRMLDisplayableNode_GetDisplayNode, METH_VARARGS,
   "GetDisplayNode(self) -> vtkMRMLDisplayNode\nC++: vtkMRMLDisplayNode *GetDisplayNode()\n\nUtility function that returns the first display node.\n\\sa GetNthDisplayNode(int), GetDisplayNodeID()\n"},
  {"ProcessMRMLEvents", PyvtkMRMLDisplayableNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\n\\deprecated GetDisplayNodes Obsolete utility function that\nprovides an unsafe API. Please use GetNumberOfDisplayNodes() and\nGetNthDisplayNode() instead const\nstd::vector<vtkMRMLDisplayNode*>& GetDisplayNodes();\n\\sa GetNumberOfDisplayNodes, GetNthDisplayNode\n\nalternative method to propagate events generated in Display nodes\n"},
  {"CreateDefaultDisplayNodes", PyvtkMRMLDisplayableNode_CreateDefaultDisplayNodes, METH_VARARGS,
   "CreateDefaultDisplayNodes(self) -> None\nC++: virtual void CreateDefaultDisplayNodes()\n\nCreate and observe default display node(s) Does nothing by\ndefault, must be reimplemented by subclasses that have display\nnodes.\n"},
  {"CreateDefaultSequenceDisplayNodes", PyvtkMRMLDisplayableNode_CreateDefaultSequenceDisplayNodes, METH_VARARGS,
   "CreateDefaultSequenceDisplayNodes(self) -> None\nC++: virtual void CreateDefaultSequenceDisplayNodes()\n\nCreates the most appropriate display node class for storing a\nsequence of these nodes. If the method is not overwritten by\nsubclass then it creates display node by calling,\nCreateDefaultDisplayNodes method.\n"},
  {"GetDisplayVisibility", PyvtkMRMLDisplayableNode_GetDisplayVisibility, METH_VARARGS,
   "GetDisplayVisibility(self) -> int\nC++: virtual int GetDisplayVisibility()\n\nUtility to return the visibility of all the display nodes. Return\n0 if they are all hidden, 1 if all are visible and 2 if some are\nvisible and some are hidden. It ignores display nodes that have\nShowMode other than vtkMRMLDisplayNode::ShowDefault.\n"},
  {"SetDisplayVisibility", PyvtkMRMLDisplayableNode_SetDisplayVisibility, METH_VARARGS,
   "SetDisplayVisibility(self, visible:int) -> None\nC++: virtual void SetDisplayVisibility(int visible)\n\n"},
  {"GetDisplayClassVisibility", PyvtkMRMLDisplayableNode_GetDisplayClassVisibility, METH_VARARGS,
   "GetDisplayClassVisibility(self, nodeClass:str) -> int\nC++: virtual int GetDisplayClassVisibility(const char *nodeClass)\n\nGet/Set visibility of display nodes of certain class if nodeClass\nis 0, get/set visibility of all display nodes It ignores display\nnodes that have ShowMode other than\nvtkMRMLDisplayNode::ShowDefault.\n"},
  {"SetDisplayClassVisibility", PyvtkMRMLDisplayableNode_SetDisplayClassVisibility, METH_VARARGS,
   "SetDisplayClassVisibility(self, nodeClass:str, visible:int)\n    -> None\nC++: virtual void SetDisplayClassVisibility(const char *nodeClass,\n     int visible)\n\n"},
  {"GetRASBounds", PyvtkMRMLDisplayableNode_GetRASBounds, METH_VARARGS,
   "GetRASBounds(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: virtual void GetRASBounds(double bounds[6])\n\nGet bounding box in global RAS form (xmin,xmax, ymin,ymax,\nzmin,zmax). This method returns the bounds of the object with any\ntransforms that may be applied to it.\n\\sa GetBounds()\n"},
  {"GetBounds", PyvtkMRMLDisplayableNode_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: virtual void GetBounds(double bounds[6])\n\nGet bounding box in global RAS form (xmin,xmax, ymin,ymax,\nzmin,zmax). This method always returns the bounds of the\nuntransformed object.\n\\sa GetRASBounds()\n"},
  {"GetDisplayNodeReferenceRole", PyvtkMRMLDisplayableNode_GetDisplayNodeReferenceRole, METH_VARARGS,
   "GetDisplayNodeReferenceRole(self) -> str\nC++: virtual const char *GetDisplayNodeReferenceRole()\n\n"},
  {"SetSelectable", PyvtkMRMLDisplayableNode_SetSelectable, METH_VARARGS,
   "SetSelectable(self, __a:int) -> None\nC++: void SetSelectable(int) override;\n\nOverride default selectable setting to notify display node about\nthe change.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLDisplayableNode_Doc =
  "vtkMRMLDisplayableNode - no description provided.\n\n"
  "Superclass: vtkMRMLTransformableNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLDisplayableNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLDisplayableNode", // tp_name
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
  PyvtkMRMLDisplayableNode_Doc, // tp_doc
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

PyObject *PyvtkMRMLDisplayableNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLDisplayableNode_Type, PyvtkMRMLDisplayableNode_Methods,
    "vtkMRMLDisplayableNode",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLTransformableNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  o = PyLong_FromLong(vtkMRMLDisplayableNode::DisplayModifiedEvent);
  if (o)
  {
    PyDict_SetItemString(d, "DisplayModifiedEvent", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLDisplayableNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLDisplayableNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLDisplayableNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

