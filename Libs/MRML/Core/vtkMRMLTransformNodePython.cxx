// python wrapper for vtkMRMLTransformNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLTransformNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLTransformNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLTransformNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLDisplayableNode_ClassNew
extern "C" { PyObject *PyvtkMRMLDisplayableNode_ClassNew(); }
#define DECLARED_PyvtkMRMLDisplayableNode_ClassNew
#endif

static PyObject *
PyvtkMRMLTransformNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLTransformNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLTransformNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLTransformNode *tempr = vtkMRMLTransformNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLTransformNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLTransformNode::NewInstance());

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
PyvtkMRMLTransformNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLTransformNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLTransformNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLTransformNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

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
      op->vtkMRMLTransformNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLTransformNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLTransformNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

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
      op->vtkMRMLTransformNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_IsLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsLinear() :
      op->vtkMRMLTransformNode::IsLinear());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_IsComposite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsComposite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsComposite() :
      op->vtkMRMLTransformNode::IsComposite());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetTransformToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetTransformToParent() :
      op->vtkMRMLTransformNode::GetTransformToParent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetMatrixTransformToParent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrixTransformToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    int tempr = (ap.IsBound() ?
      op->GetMatrixTransformToParent(temp0) :
      op->vtkMRMLTransformNode::GetMatrixTransformToParent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLTransformNode_GetMatrixTransformToParent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrixTransformToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetMatrixTransformToParent() :
      op->vtkMRMLTransformNode::GetMatrixTransformToParent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLTransformNode_GetMatrixTransformToParent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLTransformNode_GetMatrixTransformToParent_s1(self, args);
    case 0:
      return PyvtkMRMLTransformNode_GetMatrixTransformToParent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMatrixTransformToParent");
  return nullptr;
}


static PyObject *
PyvtkMRMLTransformNode_GetMatrixTransformFromParent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrixTransformFromParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    int tempr = (ap.IsBound() ?
      op->GetMatrixTransformFromParent(temp0) :
      op->vtkMRMLTransformNode::GetMatrixTransformFromParent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLTransformNode_GetMatrixTransformFromParent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrixTransformFromParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetMatrixTransformFromParent() :
      op->vtkMRMLTransformNode::GetMatrixTransformFromParent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLTransformNode_GetMatrixTransformFromParent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLTransformNode_GetMatrixTransformFromParent_s1(self, args);
    case 0:
      return PyvtkMRMLTransformNode_GetMatrixTransformFromParent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMatrixTransformFromParent");
  return nullptr;
}


static PyObject *
PyvtkMRMLTransformNode_GetTransformToParentInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformToParentInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTransformToParentInfo() :
      op->vtkMRMLTransformNode::GetTransformToParentInfo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetTransformFromParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformFromParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetTransformFromParent() :
      op->vtkMRMLTransformNode::GetTransformFromParent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetTransformFromParentInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformFromParentInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTransformFromParentInfo() :
      op->vtkMRMLTransformNode::GetTransformFromParentInfo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_IsTransformToWorldLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTransformToWorldLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsTransformToWorldLinear() :
      op->vtkMRMLTransformNode::IsTransformToWorldLinear());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_IsTransformToNodeLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTransformToNodeLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkMRMLTransformNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformNode"))
  {
    int tempr = (ap.IsBound() ?
      op->IsTransformToNodeLinear(temp0) :
      op->vtkMRMLTransformNode::IsTransformToNodeLinear(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetTransformToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkGeneralTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeneralTransform"))
  {
    if (ap.IsBound())
    {
      op->GetTransformToWorld(temp0);
    }
    else
    {
      op->vtkMRMLTransformNode::GetTransformToWorld(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetTransformFromWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformFromWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkGeneralTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeneralTransform"))
  {
    if (ap.IsBound())
    {
      op->GetTransformFromWorld(temp0);
    }
    else
    {
      op->vtkMRMLTransformNode::GetTransformFromWorld(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetTransformToNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformToNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkMRMLTransformNode *temp0 = nullptr;
  vtkGeneralTransform *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformNode") &&
      ap.GetVTKObject(temp1, "vtkGeneralTransform"))
  {
    if (ap.IsBound())
    {
      op->GetTransformToNode(temp0, temp1);
    }
    else
    {
      op->vtkMRMLTransformNode::GetTransformToNode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetTransformFromNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformFromNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkMRMLTransformNode *temp0 = nullptr;
  vtkGeneralTransform *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformNode") &&
      ap.GetVTKObject(temp1, "vtkGeneralTransform"))
  {
    if (ap.IsBound())
    {
      op->GetTransformFromNode(temp0, temp1);
    }
    else
    {
      op->vtkMRMLTransformNode::GetTransformFromNode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetTransformBetweenNodes(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTransformBetweenNodes");

  vtkMRMLTransformNode *temp0 = nullptr;
  vtkMRMLTransformNode *temp1 = nullptr;
  vtkGeneralTransform *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLTransformNode") &&
      ap.GetVTKObject(temp2, "vtkGeneralTransform"))
  {
    vtkMRMLTransformNode::GetTransformBetweenNodes(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetMatrixTransformToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrixTransformToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    int tempr = (ap.IsBound() ?
      op->GetMatrixTransformToWorld(temp0) :
      op->vtkMRMLTransformNode::GetMatrixTransformToWorld(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetMatrixTransformFromWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrixTransformFromWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    int tempr = (ap.IsBound() ?
      op->GetMatrixTransformFromWorld(temp0) :
      op->vtkMRMLTransformNode::GetMatrixTransformFromWorld(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetMatrixTransformToNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrixTransformToNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkMRMLTransformNode *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformNode") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    int tempr = (ap.IsBound() ?
      op->GetMatrixTransformToNode(temp0, temp1) :
      op->vtkMRMLTransformNode::GetMatrixTransformToNode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetMatrixTransformFromNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrixTransformFromNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkMRMLTransformNode *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformNode") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    int tempr = (ap.IsBound() ?
      op->GetMatrixTransformFromNode(temp0, temp1) :
      op->vtkMRMLTransformNode::GetMatrixTransformFromNode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetMatrixTransformBetweenNodes(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMatrixTransformBetweenNodes");

  vtkMRMLTransformNode *temp0 = nullptr;
  vtkMRMLTransformNode *temp1 = nullptr;
  vtkMatrix4x4 *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLTransformNode") &&
      ap.GetVTKObject(temp2, "vtkMatrix4x4"))
  {
    int tempr = vtkMRMLTransformNode::GetMatrixTransformBetweenNodes(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_IsTransformNodeMyParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTransformNodeMyParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkMRMLTransformNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformNode"))
  {
    int tempr = (ap.IsBound() ?
      op->IsTransformNodeMyParent(temp0) :
      op->vtkMRMLTransformNode::IsTransformNodeMyParent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_IsTransformNodeMyChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTransformNodeMyChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkMRMLTransformNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformNode"))
  {
    int tempr = (ap.IsBound() ?
      op->IsTransformNodeMyChild(temp0) :
      op->vtkMRMLTransformNode::IsTransformNodeMyChild(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetFirstCommonParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstCommonParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkMRMLTransformNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformNode"))
  {
    vtkMRMLTransformNode *tempr = (ap.IsBound() ?
      op->GetFirstCommonParent(temp0) :
      op->vtkMRMLTransformNode::GetFirstCommonParent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_SetMatrixTransformToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrixTransformToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    int tempr = (ap.IsBound() ?
      op->SetMatrixTransformToParent(temp0) :
      op->vtkMRMLTransformNode::SetMatrixTransformToParent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_SetMatrixTransformFromParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrixTransformFromParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    int tempr = (ap.IsBound() ?
      op->SetMatrixTransformFromParent(temp0) :
      op->vtkMRMLTransformNode::SetMatrixTransformFromParent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_ApplyTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

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
      op->vtkMRMLTransformNode::ApplyTransformMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_SetAndObserveMatrixTransformToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveMatrixTransformToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    int tempr = (ap.IsBound() ?
      op->SetAndObserveMatrixTransformToParent(temp0) :
      op->vtkMRMLTransformNode::SetAndObserveMatrixTransformToParent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_SetAndObserveMatrixTransformFromParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveMatrixTransformFromParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    int tempr = (ap.IsBound() ?
      op->SetAndObserveMatrixTransformFromParent(temp0) :
      op->vtkMRMLTransformNode::SetAndObserveMatrixTransformFromParent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_CanApplyNonLinearTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanApplyNonLinearTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanApplyNonLinearTransforms() :
      op->vtkMRMLTransformNode::CanApplyNonLinearTransforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_ApplyTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

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
      op->vtkMRMLTransformNode::ApplyTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_Split(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Split");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Split() :
      op->vtkMRMLTransformNode::Split());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLTransformNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_CreateDefaultDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultDisplayNodes();
    }
    else
    {
      op->vtkMRMLTransformNode::CreateDefaultDisplayNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_CreateDefaultSequenceDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultSequenceDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultSequenceDisplayNodes();
    }
    else
    {
      op->vtkMRMLTransformNode::CreateDefaultSequenceDisplayNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetReadAsTransformToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAsTransformToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadAsTransformToParent() :
      op->vtkMRMLTransformNode::GetReadAsTransformToParent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_SetReadAsTransformToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAsTransformToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAsTransformToParent(temp0);
    }
    else
    {
      op->vtkMRMLTransformNode::SetReadAsTransformToParent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_ReadAsTransformToParentOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAsTransformToParentOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAsTransformToParentOn();
    }
    else
    {
      op->vtkMRMLTransformNode::ReadAsTransformToParentOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_ReadAsTransformToParentOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAsTransformToParentOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAsTransformToParentOff();
    }
    else
    {
      op->vtkMRMLTransformNode::ReadAsTransformToParentOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_TransformModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TransformModified();
    }
    else
    {
      op->vtkMRMLTransformNode::TransformModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetModifiedSinceRead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModifiedSinceRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetModifiedSinceRead() :
      op->vtkMRMLTransformNode::GetModifiedSinceRead());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetTransformToParentAs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformToParentAs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = true;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetTransformToParentAs(temp0, temp1, temp2) :
      op->vtkMRMLTransformNode::GetTransformToParentAs(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetTransformFromParentAs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformFromParentAs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = true;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetTransformFromParentAs(temp0, temp1, temp2) :
      op->vtkMRMLTransformNode::GetTransformFromParentAs(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_SetAndObserveTransformToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveTransformToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveTransformToParent(temp0);
    }
    else
    {
      op->vtkMRMLTransformNode::SetAndObserveTransformToParent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_SetAndObserveTransformFromParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveTransformFromParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveTransformFromParent(temp0);
    }
    else
    {
      op->vtkMRMLTransformNode::SetAndObserveTransformFromParent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

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
      op->vtkMRMLTransformNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLTransformNode_FlattenGeneralTransform(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FlattenGeneralTransform");

  vtkCollection *temp0 = nullptr;
  vtkAbstractTransform *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCollection") &&
      ap.GetVTKObject(temp1, "vtkAbstractTransform"))
  {
    vtkMRMLTransformNode::FlattenGeneralTransform(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_AreTransformsEqual(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AreTransformsEqual");

  vtkAbstractTransform *temp0 = nullptr;
  vtkAbstractTransform *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform") &&
      ap.GetVTKObject(temp1, "vtkAbstractTransform"))
  {
    bool tempr = vtkMRMLTransformNode::AreTransformsEqual(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_IsGeneralTransformLinear(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsGeneralTransformLinear");

  vtkAbstractTransform *temp0 = nullptr;
  vtkTransform *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkTransform")))
  {
    bool tempr = vtkMRMLTransformNode::IsGeneralTransformLinear(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_IsAbstractTransformComputedFromInverse(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsAbstractTransformComputedFromInverse");

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    bool tempr = vtkMRMLTransformNode::IsAbstractTransformComputedFromInverse(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_DeepCopyTransform(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DeepCopyTransform");

  vtkAbstractTransform *temp0 = nullptr;
  vtkAbstractTransform *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform") &&
      ap.GetVTKObject(temp1, "vtkAbstractTransform"))
  {
    int tempr = vtkMRMLTransformNode::DeepCopyTransform(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Inverse();
    }
    else
    {
      op->vtkMRMLTransformNode::Inverse();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_InverseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InverseName();
    }
    else
    {
      op->vtkMRMLTransformNode::InverseName();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetTransformToWorldMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformToWorldMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTransformToWorldMTime() :
      op->vtkMRMLTransformNode::GetTransformToWorldMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetTransformInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformNode *op = static_cast<vtkMRMLTransformNode *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTransformInfo(temp0) :
      op->vtkMRMLTransformNode::GetTransformInfo(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetMovingNodeReferenceRole(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMovingNodeReferenceRole");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkMRMLTransformNode::GetMovingNodeReferenceRole();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformNode_GetFixedNodeReferenceRole(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFixedNodeReferenceRole");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkMRMLTransformNode::GetFixedNodeReferenceRole();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLTransformNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLTransformNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLTransformNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLTransformNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLTransformNode\nC++: static vtkMRMLTransformNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLTransformNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLTransformNode\nC++: vtkMRMLTransformNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLTransformNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLTransformNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLTransformNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"CopyContent", PyvtkMRMLTransformNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLTransformNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLTransformNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"UpdateScene", PyvtkMRMLTransformNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data\n"},
  {"IsLinear", PyvtkMRMLTransformNode_IsLinear, METH_VARARGS,
   "IsLinear(self) -> int\nC++: virtual int IsLinear()\n\nReturns 1 if transform is a non-composite linear transform, 0\notherwise (if composite transform or non-linear transform)\n"},
  {"IsComposite", PyvtkMRMLTransformNode_IsComposite, METH_VARARGS,
   "IsComposite(self) -> int\nC++: virtual int IsComposite()\n\nReturns 1 if the transform is a composite transform (a transform\nthat may contain multiple simple transforms)\n"},
  {"GetTransformToParent", PyvtkMRMLTransformNode_GetTransformToParent, METH_VARARGS,
   "GetTransformToParent(self) -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransformToParent()\n\nTransform of this node to parent\n"},
  {"GetMatrixTransformToParent", PyvtkMRMLTransformNode_GetMatrixTransformToParent, METH_VARARGS,
   "GetMatrixTransformToParent(self, matrix:vtkMatrix4x4) -> int\nC++: virtual int GetMatrixTransformToParent(vtkMatrix4x4 *matrix)\nGetMatrixTransformToParent(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetMatrixTransformToParent()\n\nGet the vtkMatrix4x4 transform of this node to parent node\nReturns 0 if the transform is not linear or there is an error.\n"},
  {"GetMatrixTransformFromParent", PyvtkMRMLTransformNode_GetMatrixTransformFromParent, METH_VARARGS,
   "GetMatrixTransformFromParent(self, matrix:vtkMatrix4x4) -> int\nC++: virtual int GetMatrixTransformFromParent(\n    vtkMatrix4x4 *matrix)\nGetMatrixTransformFromParent(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetMatrixTransformFromParent()\n\nGet the vtkMatrix4x4 transform of this node from parent node\nReturns 0 if the transform is not linear or there is an error.\n"},
  {"GetTransformToParentInfo", PyvtkMRMLTransformNode_GetTransformToParentInfo, METH_VARARGS,
   "GetTransformToParentInfo(self) -> str\nC++: virtual const char *GetTransformToParentInfo()\n\nGet a human-readable description of the transform\n"},
  {"GetTransformFromParent", PyvtkMRMLTransformNode_GetTransformFromParent, METH_VARARGS,
   "GetTransformFromParent(self) -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransformFromParent()\n\nTransform of this node from parent\n"},
  {"GetTransformFromParentInfo", PyvtkMRMLTransformNode_GetTransformFromParentInfo, METH_VARARGS,
   "GetTransformFromParentInfo(self) -> str\nC++: virtual const char *GetTransformFromParentInfo()\n\nGet a human-readable description of the transform\n"},
  {"IsTransformToWorldLinear", PyvtkMRMLTransformNode_IsTransformToWorldLinear, METH_VARARGS,
   "IsTransformToWorldLinear(self) -> int\nC++: int IsTransformToWorldLinear()\n\n1 if all the transforms to the top are linear, 0 otherwise\n"},
  {"IsTransformToNodeLinear", PyvtkMRMLTransformNode_IsTransformToNodeLinear, METH_VARARGS,
   "IsTransformToNodeLinear(self, node:vtkMRMLTransformNode) -> int\nC++: int IsTransformToNodeLinear(vtkMRMLTransformNode *node)\n\n1 if all the transforms between nodes are linear, 0 otherwise\n"},
  {"GetTransformToWorld", PyvtkMRMLTransformNode_GetTransformToWorld, METH_VARARGS,
   "GetTransformToWorld(self, transformToWorld:vtkGeneralTransform)\n    -> None\nC++: void GetTransformToWorld(\n    vtkGeneralTransform *transformToWorld)\n\nGet concatenated transforms to world. The method may change the\nPreMultiply/PostMultiply flag of the transform.\n\\sa GetTransformBetweenNodes\n"},
  {"GetTransformFromWorld", PyvtkMRMLTransformNode_GetTransformFromWorld, METH_VARARGS,
   "GetTransformFromWorld(self,\n    transformFromWorld:vtkGeneralTransform) -> None\nC++: void GetTransformFromWorld(\n    vtkGeneralTransform *transformFromWorld)\n\nGet concatenated transforms from world. The method may change the\nPreMultiply/PostMultiply flag of the transform.\n\\sa GetTransformBetweenNodes\n"},
  {"GetTransformToNode", PyvtkMRMLTransformNode_GetTransformToNode, METH_VARARGS,
   "GetTransformToNode(self, node:vtkMRMLTransformNode,\n    transformToNode:vtkGeneralTransform) -> None\nC++: void GetTransformToNode(vtkMRMLTransformNode *node,\n    vtkGeneralTransform *transformToNode)\n\nGet concatenated transforms to the specified node. The method may\nchange the PreMultiply/PostMultiply flag of the transform.\n\\sa GetTransformBetweenNodes\n"},
  {"GetTransformFromNode", PyvtkMRMLTransformNode_GetTransformFromNode, METH_VARARGS,
   "GetTransformFromNode(self, node:vtkMRMLTransformNode,\n    transformFromNode:vtkGeneralTransform) -> None\nC++: void GetTransformFromNode(vtkMRMLTransformNode *node,\n    vtkGeneralTransform *transformFromNode)\n\nGet concatenated transforms from the specified node. The method\nmay change the PreMultiply/PostMultiply flag of the transform.\n\\sa GetTransformBetweenNodes\n"},
  {"GetTransformBetweenNodes", PyvtkMRMLTransformNode_GetTransformBetweenNodes, METH_VARARGS,
   "GetTransformBetweenNodes(sourceNode:vtkMRMLTransformNode,\n    targetNode:vtkMRMLTransformNode,\n    transformSourceToTarget:vtkGeneralTransform) -> None\nC++: static void GetTransformBetweenNodes(\n    vtkMRMLTransformNode *sourceNode,\n    vtkMRMLTransformNode *targetNode,\n    vtkGeneralTransform *transformSourceToTarget)\n\nGet concatenated transforms from source to target node Source and\ntarget nodes are allowed to be nullptr, which means that\ntransform is the world transform. The method may change the\nPreMultiply/PostMultiply flag of the transform.\n"},
  {"GetMatrixTransformToWorld", PyvtkMRMLTransformNode_GetMatrixTransformToWorld, METH_VARARGS,
   "GetMatrixTransformToWorld(self, transformToWorld:vtkMatrix4x4)\n    -> int\nC++: virtual int GetMatrixTransformToWorld(\n    vtkMatrix4x4 *transformToWorld)\n\nGet concatenated transforms to world. Returns 0 if the transform\nis not linear (cannot be described by a matrix).\n\\sa GetMatrixTransformBetweenNodes\n"},
  {"GetMatrixTransformFromWorld", PyvtkMRMLTransformNode_GetMatrixTransformFromWorld, METH_VARARGS,
   "GetMatrixTransformFromWorld(self, transformFromWorld:vtkMatrix4x4)\n     -> int\nC++: virtual int GetMatrixTransformFromWorld(\n    vtkMatrix4x4 *transformFromWorld)\n\nGet concatenated transforms from world. Returns 0 if the\ntransform is not linear (cannot be described by a matrix).\n\\sa GetMatrixTransformBetweenNodes\n"},
  {"GetMatrixTransformToNode", PyvtkMRMLTransformNode_GetMatrixTransformToNode, METH_VARARGS,
   "GetMatrixTransformToNode(self, node:vtkMRMLTransformNode,\n    transformToNode:vtkMatrix4x4) -> int\nC++: virtual int GetMatrixTransformToNode(\n    vtkMRMLTransformNode *node, vtkMatrix4x4 *transformToNode)\n\nGet concatenated transforms to the specified node. Returns 0 if\nthe transform is not linear (cannot be described by a matrix).\n\\sa GetMatrixTransformBetweenNodes\n"},
  {"GetMatrixTransformFromNode", PyvtkMRMLTransformNode_GetMatrixTransformFromNode, METH_VARARGS,
   "GetMatrixTransformFromNode(self, node:vtkMRMLTransformNode,\n    transformFromNode:vtkMatrix4x4) -> int\nC++: virtual int GetMatrixTransformFromNode(\n    vtkMRMLTransformNode *node, vtkMatrix4x4 *transformFromNode)\n\nGet concatenated transforms from the specified node. Returns 0 if\nthe transform is not linear (cannot be described by a matrix).\n\\sa GetMatrixTransformBetweenNodes\n"},
  {"GetMatrixTransformBetweenNodes", PyvtkMRMLTransformNode_GetMatrixTransformBetweenNodes, METH_VARARGS,
   "GetMatrixTransformBetweenNodes(sourceNode:vtkMRMLTransformNode,\n    targetNode:vtkMRMLTransformNode,\n    transformSourceToTarget:vtkMatrix4x4) -> int\nC++: static int GetMatrixTransformBetweenNodes(\n    vtkMRMLTransformNode *sourceNode,\n    vtkMRMLTransformNode *targetNode,\n    vtkMatrix4x4 *transformSourceToTarget)\n\nGet concatenated transforms from source to target node Source and\ntarget nodes are allowed to be nullptr, which means that\ntransform is the world transform. Returns 0 if the transform is\nnot linear (cannot be described by a matrix).\n"},
  {"IsTransformNodeMyParent", PyvtkMRMLTransformNode_IsTransformNodeMyParent, METH_VARARGS,
   "IsTransformNodeMyParent(self, node:vtkMRMLTransformNode) -> int\nC++: int IsTransformNodeMyParent(vtkMRMLTransformNode *node)\n\nReturns 1 if this node is one of the node's descendants nullptr\ndesignates the world transform node and so always returns with 1.\n"},
  {"IsTransformNodeMyChild", PyvtkMRMLTransformNode_IsTransformNodeMyChild, METH_VARARGS,
   "IsTransformNodeMyChild(self, node:vtkMRMLTransformNode) -> int\nC++: int IsTransformNodeMyChild(vtkMRMLTransformNode *node)\n\nReturns 1 if the node is one of the this node's descendants\n"},
  {"GetFirstCommonParent", PyvtkMRMLTransformNode_GetFirstCommonParent, METH_VARARGS,
   "GetFirstCommonParent(self, targetNode:vtkMRMLTransformNode)\n    -> vtkMRMLTransformNode\nC++: vtkMRMLTransformNode *GetFirstCommonParent(\n    vtkMRMLTransformNode *targetNode)\n\nGet the first common parent of he current and the target\ntransform node If there are no common parents then nullptr is\nreturned\n\\param targetNode The transform for which the current transform\n    will be determined\n"},
  {"SetMatrixTransformToParent", PyvtkMRMLTransformNode_SetMatrixTransformToParent, METH_VARARGS,
   "SetMatrixTransformToParent(self, matrix:vtkMatrix4x4) -> int\nC++: virtual int SetMatrixTransformToParent(vtkMatrix4x4 *matrix)\n\nSet a new matrix transform of this node to parent node. Invokes a\nTransformModified event (does not invoke Modified). The method\nonly allows setting or updating an empty or simple linear\ntransform. Returns nonzero if the transform is successfully\nupdated, returns 0 if the transform is non-linear or composite\nand therefore cannot be updated. To overwrite a non-linear or\ncomposite transform first remove the old transform by calling\nSetAndObserveTransformToParent(nullptr) and then set the matrix.\n\\sa SetMatrixTransformFromParent\n"},
  {"SetMatrixTransformFromParent", PyvtkMRMLTransformNode_SetMatrixTransformFromParent, METH_VARARGS,
   "SetMatrixTransformFromParent(self, matrix:vtkMatrix4x4) -> int\nC++: virtual int SetMatrixTransformFromParent(\n    vtkMatrix4x4 *matrix)\n\nSet a new matrix transform of this node from parent node.\n\\sa SetMatrixTransformToParent\n"},
  {"ApplyTransformMatrix", PyvtkMRMLTransformNode_ApplyTransformMatrix, METH_VARARGS,
   "ApplyTransformMatrix(self, transformMatrix:vtkMatrix4x4) -> None\nC++: void ApplyTransformMatrix(vtkMatrix4x4 *transformMatrix)\n    override;\n\nApplies a transformation matrix to the current matrix. Difference\ncompared to ApplyTransform(): if the current transform is a\nlinear then instead of creating a composite transform, the\ncurrent and applicable transform matrices are multiplied and\nstored in a simple (non-composite) linear transform. If the\ncurrent transformation was non-linear then the method is\nequivalent to ApplyTransform (creates a composite transform).\n"},
  {"SetAndObserveMatrixTransformToParent", PyvtkMRMLTransformNode_SetAndObserveMatrixTransformToParent, METH_VARARGS,
   "SetAndObserveMatrixTransformToParent(self, matrix:vtkMatrix4x4)\n    -> int\nC++: virtual int SetAndObserveMatrixTransformToParent(\n    vtkMatrix4x4 *matrix)\n\nSet a new matrix transform of this node to parent node. Returns 0\nif the current transform is not linear.\\deprecated Use\nSetMatrixTransformToParent instead.\n"},
  {"SetAndObserveMatrixTransformFromParent", PyvtkMRMLTransformNode_SetAndObserveMatrixTransformFromParent, METH_VARARGS,
   "SetAndObserveMatrixTransformFromParent(self, matrix:vtkMatrix4x4)\n    -> int\nC++: virtual int SetAndObserveMatrixTransformFromParent(\n    vtkMatrix4x4 *matrix)\n\nSet a new matrix transform of this node from parent node. Returns\n0 if the current transform is not linear.\\deprecated Use\nSetMatrixTransformToParent instead.\n"},
  {"CanApplyNonLinearTransforms", PyvtkMRMLTransformNode_CanApplyNonLinearTransforms, METH_VARARGS,
   "CanApplyNonLinearTransforms(self) -> bool\nC++: bool CanApplyNonLinearTransforms() override;\n\nReimplemented from vtkMRMLTransformableNode\n"},
  {"ApplyTransform", PyvtkMRMLTransformNode_ApplyTransform, METH_VARARGS,
   "ApplyTransform(self, transform:vtkAbstractTransform) -> None\nC++: void ApplyTransform(vtkAbstractTransform *transform)\n    override;\n\nReimplemented from vtkMRMLTransformableNode\n"},
  {"Split", PyvtkMRMLTransformNode_Split, METH_VARARGS,
   "Split(self) -> int\nC++: virtual int Split()\n\nSplit a composite transform to its components. The components are\ninserted to the scene between this transform and its parent. A\ncomposite transform can be created by hardening different types\nof transforms on each other. Return non-zero on success.\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLTransformNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {"CreateDefaultDisplayNodes", PyvtkMRMLTransformNode_CreateDefaultDisplayNodes, METH_VARARGS,
   "CreateDefaultDisplayNodes(self) -> None\nC++: void CreateDefaultDisplayNodes() override;\n\nCreate and observe default display node\n"},
  {"CreateDefaultSequenceDisplayNodes", PyvtkMRMLTransformNode_CreateDefaultSequenceDisplayNodes, METH_VARARGS,
   "CreateDefaultSequenceDisplayNodes(self) -> None\nC++: void CreateDefaultSequenceDisplayNodes() override;\n\nCreates the most appropriate display node class for storing a\nsequence of these nodes.\n"},
  {"GetReadAsTransformToParent", PyvtkMRMLTransformNode_GetReadAsTransformToParent, METH_VARARGS,
   "GetReadAsTransformToParent(self) -> int\nC++: virtual int GetReadAsTransformToParent()\n\nGet/Set for ReadAsTransformToParent Indicates that the transform\nin the storage node has to be interpreted as a transformToParent\n(as opposed to the default ITK-style transformFromParent). Since\nwriting of ITK inverse transform is implemented, this option is\nnot needed anymore and kept only for backward compatibility: when\na transform is read from an old scene file that has\nReadWriteAsTransformToParent=\"1\" then the transform is\ninterpreted as such. Transforms are now always written as\ntransformFromParent.\n"},
  {"SetReadAsTransformToParent", PyvtkMRMLTransformNode_SetReadAsTransformToParent, METH_VARARGS,
   "SetReadAsTransformToParent(self, _arg:int) -> None\nC++: virtual void SetReadAsTransformToParent(int _arg)\n\n"},
  {"ReadAsTransformToParentOn", PyvtkMRMLTransformNode_ReadAsTransformToParentOn, METH_VARARGS,
   "ReadAsTransformToParentOn(self) -> None\nC++: virtual void ReadAsTransformToParentOn()\n\n"},
  {"ReadAsTransformToParentOff", PyvtkMRMLTransformNode_ReadAsTransformToParentOff, METH_VARARGS,
   "ReadAsTransformToParentOff(self) -> None\nC++: virtual void ReadAsTransformToParentOff()\n\n"},
  {"TransformModified", PyvtkMRMLTransformNode_TransformModified, METH_VARARGS,
   "TransformModified(self) -> None\nC++: virtual void TransformModified()\n\nIndicates that the transform inside the object is modified.\nTypical usage would be to disable transform modified events, call\na series of operations that change transforms and then re-enable\ntransform modified events to invoke any pending notifications.\n"},
  {"GetModifiedSinceRead", PyvtkMRMLTransformNode_GetModifiedSinceRead, METH_VARARGS,
   "GetModifiedSinceRead(self) -> bool\nC++: bool GetModifiedSinceRead() override;\n\nReturns true if the node is more recent than the file on disk.\nThis information can be used by the application to know which\nnode has been modified since it has been last read or written.\nOnly storable properties are considered: even if a \"non storable\"\nproperty (e.g. color of a mesh) is modified after the node is\nbeing loaded, GetModifiedSinceRead() should return false; the new\nproperty value won't be stored on file (only in the MRML scene).\nBy default, calling Modified() on the node doesn't make the node\n\"modified since read\", only calling Modified() on\nStorableModifiedTime does. GetModifiedSinceRead() can be\noverwritten to handle special storable property modification\ntime.\n\\sa GetStoredTime() StorableModifiedTime Modified()\n    StorableModified()\n"},
  {"GetTransformToParentAs", PyvtkMRMLTransformNode_GetTransformToParentAs, METH_VARARGS,
   "GetTransformToParentAs(self, transformType:str,\n    logErrorIfFails:bool=True, modifiableOnly:bool=False)\n    -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetTransformToParentAs(\n    const char *transformType, bool logErrorIfFails=true,\n    bool modifiableOnly=false)\n\nRetrieves the transform as the specified transform class. If\nmodifiableOnly is set to true then nullptr will be returned for\ntransforms that cannot be modified (e.g., because it is computed\nfrom its inverse). Returns nullptr if the transform is not a kind\nof transform that was requested. Example usage:\nvtkOrientedBSplineTransform*\nbsplineTransform=vtkOrientedBSplineTransform::SafeDownCast(GetTran\nsformToParentAs(\"vtkOrientedBSplineTransform\"));\n"},
  {"GetTransformFromParentAs", PyvtkMRMLTransformNode_GetTransformFromParentAs, METH_VARARGS,
   "GetTransformFromParentAs(self, transformType:str,\n    logErrorIfFails:bool=True, modifiableOnly:bool=False)\n    -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetTransformFromParentAs(\n    const char *transformType, bool logErrorIfFails=true,\n    bool modifiableOnly=false)\n\nRetrieves the transform as the specified transform class. If\nmodifiableOnly is set to true then nullptr will be returned for\ntransforms that cannot be modified (e.g., because it is computed\nfrom its inverse). Returns nullptr if the transform is not a kind\nof transform that was requested. Example usage:\nvtkOrientedBSplineTransform*\nbsplineTransform=vtkOrientedBSplineTransform::SafeDownCast(GetTran\nsformFromParentAs(\"vtkOrientedBSplineTransform\"));\n"},
  {"SetAndObserveTransformToParent", PyvtkMRMLTransformNode_SetAndObserveTransformToParent, METH_VARARGS,
   "SetAndObserveTransformToParent(self,\n    transform:vtkAbstractTransform) -> None\nC++: void SetAndObserveTransformToParent(\n    vtkAbstractTransform *transform)\n\nSet and observe a new transform of this node to parent node. Each\ntime the transform is modified,\nvtkMRMLTransformableNode::TransformModifiedEvent is fired.\nModifiedEvent() and TransformModifiedEvent() are fired after the\ntransform is set.\n"},
  {"SetAndObserveTransformFromParent", PyvtkMRMLTransformNode_SetAndObserveTransformFromParent, METH_VARARGS,
   "SetAndObserveTransformFromParent(self,\n    transform:vtkAbstractTransform) -> None\nC++: void SetAndObserveTransformFromParent(\n    vtkAbstractTransform *transform)\n\nSet and observe a new transform of this node from parent node.\nEach time the transform is modified,\nvtkMRMLTransformableNode::TransformModifiedEvent is fired.\nModifiedEvent() and TransformModifiedEvent() are fired after the\ntransform is set.\n"},
  {"ProcessMRMLEvents", PyvtkMRMLTransformNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Transform\nnodes\n"},
  {"FlattenGeneralTransform", PyvtkMRMLTransformNode_FlattenGeneralTransform, METH_VARARGS,
   "FlattenGeneralTransform(outputTransformList:vtkCollection,\n    inputTransform:vtkAbstractTransform) -> None\nC++: static void FlattenGeneralTransform(\n    vtkCollection *outputTransformList,\n    vtkAbstractTransform *inputTransform)\n\nCreates a shallow copy of an input composite transform (that can\ncontain a complex hierarchy of transforms) into a flat list of\ntransforms. This is useful for simplifying serialization for\ncopying and writing to file.\n"},
  {"AreTransformsEqual", PyvtkMRMLTransformNode_AreTransformsEqual, METH_VARARGS,
   "AreTransformsEqual(transform1:vtkAbstractTransform,\n    transform2:vtkAbstractTransform) -> bool\nC++: static bool AreTransformsEqual(\n    vtkAbstractTransform *transform1,\n    vtkAbstractTransform *transform2)\n\nReturn true if the two transforms are equal. A transform object\nis considered to be the same if it is made up of the same\nflattened list of transforms.\n"},
  {"IsGeneralTransformLinear", PyvtkMRMLTransformNode_IsGeneralTransformLinear, METH_VARARGS,
   "IsGeneralTransformLinear(inputTransform:vtkAbstractTransform,\n    concatenatedLinearTransform:vtkTransform=...) -> bool\nC++: static bool IsGeneralTransformLinear(\n    vtkAbstractTransform *inputTransform,\n    vtkTransform *concatenatedLinearTransform=nullptr)\n\nUtility function that determines if a transform is linear. It\nlooks into composite transforms and only returns with true if all\nthe transform components are linear. If\nconcatenatedLinearTransform is specified and the transform is\nlinear then it returns the concatenated linear transformation\nmatrix.\n"},
  {"IsAbstractTransformComputedFromInverse", PyvtkMRMLTransformNode_IsAbstractTransformComputedFromInverse, METH_VARARGS,
   "IsAbstractTransformComputedFromInverse(\n    abstractTransform:vtkAbstractTransform) -> bool\nC++: static bool IsAbstractTransformComputedFromInverse(\n    vtkAbstractTransform *abstractTransform)\n\nUtility function that determines if a transform is computed from\nits inverse. It may be important to know if a transform is\ncomputed from its inverse because then it cannot not be modified\n(if modification is needed then he source transform has to be\nupdated).\n"},
  {"DeepCopyTransform", PyvtkMRMLTransformNode_DeepCopyTransform, METH_VARARGS,
   "DeepCopyTransform(dst:vtkAbstractTransform,\n    src:vtkAbstractTransform) -> int\nC++: static int DeepCopyTransform(vtkAbstractTransform *dst,\n    vtkAbstractTransform *src)\n\nSome transforms have DeepCopy method that actually only creates a\nshallow copy (such as vtkGeneralTransform and vtkGridTransform).\nThis method creates a true deep copy of a transform. Returns\nnonzero on success.\n"},
  {"Inverse", PyvtkMRMLTransformNode_Inverse, METH_VARARGS,
   "Inverse(self) -> None\nC++: void Inverse()\n\nInvert the transform. Internally it does not perform any actual\ncomputation just switches ToParent and FromParent.\n"},
  {"InverseName", PyvtkMRMLTransformNode_InverseName, METH_VARARGS,
   "InverseName(self) -> None\nC++: virtual void InverseName()\n\nUpdate the node's name to reflect that the node content is\ninverted. Inversion is implemented by adding/removing \" (-)\"\nsuffix.\n"},
  {"GetTransformToWorldMTime", PyvtkMRMLTransformNode_GetTransformToWorldMTime, METH_VARARGS,
   "GetTransformToWorldMTime(self) -> int\nC++: vtkMTimeType GetTransformToWorldMTime()\n\nGet the latest modification time of the stored transform\n"},
  {"GetTransformInfo", PyvtkMRMLTransformNode_GetTransformInfo, METH_VARARGS,
   "GetTransformInfo(self, inputTransform:vtkAbstractTransform) -> str\nC++: const char *GetTransformInfo(\n    vtkAbstractTransform *inputTransform)\n\nGet a human-readable description of the transformation The\nreturned string is stored in a shared buffer therefore the text\nhas to be copied. This is a static-style function (the contents\nof the owner transform node is not used), but the returned string\nbuffer needs to be owned by an object.\n\\param inputTransform The transform for which information is\n    obtained\n"},
  {"GetMovingNodeReferenceRole", PyvtkMRMLTransformNode_GetMovingNodeReferenceRole, METH_VARARGS,
   "GetMovingNodeReferenceRole() -> str\nC++: static const char *GetMovingNodeReferenceRole()\n\nReference role name from the transform node to the moving volume\nor fiducial node that participated in registration.\n"},
  {"GetFixedNodeReferenceRole", PyvtkMRMLTransformNode_GetFixedNodeReferenceRole, METH_VARARGS,
   "GetFixedNodeReferenceRole() -> str\nC++: static const char *GetFixedNodeReferenceRole()\n\nReference role name from the transform node to the moving volume\nor fiducial node that participated in registration\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLTransformNode_Doc =
  "vtkMRMLTransformNode - MRML node for representing a transformation\nbetween this node space and a parent node space.\n\n"
  "Superclass: vtkMRMLDisplayableNode\n\n"
  "General Transformation between this node space and a parent node\n"
  "space. A vtkMRMLTransformableNode::TransformModifiedEvent is called\n"
  "if the transforms are changed. ModifiedEvent is called if either\n"
  "transforms or other properties of the object are changed.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLTransformNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLTransformNode", // tp_name
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
  PyvtkMRMLTransformNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLTransformNode_StaticNew()
{
  return vtkMRMLTransformNode::New();
}

PyObject *PyvtkMRMLTransformNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLTransformNode_Type, PyvtkMRMLTransformNode_Methods,
    "vtkMRMLTransformNode",
 &PyvtkMRMLTransformNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLDisplayableNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLTransformNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLTransformNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLTransformNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

