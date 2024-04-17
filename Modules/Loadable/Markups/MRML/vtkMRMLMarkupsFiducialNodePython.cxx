// python wrapper for vtkMRMLMarkupsFiducialNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLMarkupsFiducialNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLMarkupsFiducialNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLMarkupsFiducialNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLMarkupsNode_ClassNew
extern "C" { PyObject *PyvtkMRMLMarkupsNode_ClassNew(); }
#define DECLARED_PyvtkMRMLMarkupsNode_ClassNew
#endif

static PyObject *
PyvtkMRMLMarkupsFiducialNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsFiducialNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMarkupsFiducialNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMarkupsFiducialNode *tempr = vtkMRMLMarkupsFiducialNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsFiducialNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMarkupsFiducialNode::NewInstance());

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
PyvtkMRMLMarkupsFiducialNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMarkupsFiducialNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMarkupsFiducialNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_GetIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIcon() :
      op->vtkMRMLMarkupsFiducialNode::GetIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_GetAddIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAddIcon() :
      op->vtkMRMLMarkupsFiducialNode::GetAddIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_GetPlaceAddIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceAddIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPlaceAddIcon() :
      op->vtkMRMLMarkupsFiducialNode::GetPlaceAddIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLMarkupsFiducialNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLMarkupsFiducialNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_GetMarkupType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetMarkupType() :
      op->vtkMRMLMarkupsFiducialNode::GetMarkupType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_GetTypeDisplayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeDisplayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTypeDisplayName() :
      op->vtkMRMLMarkupsFiducialNode::GetTypeDisplayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_GetDefaultNodeNamePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNodeNamePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultNodeNamePrefix() :
      op->vtkMRMLMarkupsFiducialNode::GetDefaultNodeNamePrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

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
      op->vtkMRMLMarkupsFiducialNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLMarkupsFiducialNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_SetMaximumNumberOfControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfControlPoints(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsFiducialNode::SetMaximumNumberOfControlPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_SetRequiredNumberOfControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequiredNumberOfControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRequiredNumberOfControlPoints(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsFiducialNode::SetRequiredNumberOfControlPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_CreateDefaultDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultDisplayNodes();
    }
    else
    {
      op->vtkMRMLMarkupsFiducialNode::CreateDefaultDisplayNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_GetNumberOfFiducials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFiducials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFiducials() :
      op->vtkMRMLMarkupsFiducialNode::GetNumberOfFiducials());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_AddFiducial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFiducial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  std::string temp3 = std::string();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    int tempr = (ap.IsBound() ?
      op->AddFiducial(temp0, temp1, temp2, temp3) :
      op->vtkMRMLMarkupsFiducialNode::AddFiducial(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_AddFiducialFromArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFiducialFromArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  std::string temp1 = std::string();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AddFiducialFromArray(temp0, temp1) :
      op->vtkMRMLMarkupsFiducialNode::AddFiducialFromArray(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_GetNthFiducialPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthFiducialPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  int temp0;
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
      op->GetNthFiducialPosition(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsFiducialNode::GetNthFiducialPosition(temp0, temp1);
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
PyvtkMRMLMarkupsFiducialNode_SetNthFiducialPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthFiducialPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetNthFiducialPosition(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLMarkupsFiducialNode::SetNthFiducialPosition(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_SetNthFiducialPositionFromArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthFiducialPositionFromArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  int temp0;
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
      op->SetNthFiducialPositionFromArray(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsFiducialNode::SetNthFiducialPositionFromArray(temp0, temp1);
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
PyvtkMRMLMarkupsFiducialNode_GetNthFiducialSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthFiducialSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNthFiducialSelected(temp0) :
      op->vtkMRMLMarkupsFiducialNode::GetNthFiducialSelected(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_SetNthFiducialSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthFiducialSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNthFiducialSelected(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsFiducialNode::SetNthFiducialSelected(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_GetNthFiducialLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthFiducialLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNthFiducialLocked(temp0) :
      op->vtkMRMLMarkupsFiducialNode::GetNthFiducialLocked(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_SetNthFiducialLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthFiducialLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNthFiducialLocked(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsFiducialNode::SetNthFiducialLocked(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_GetNthFiducialVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthFiducialVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNthFiducialVisibility(temp0) :
      op->vtkMRMLMarkupsFiducialNode::GetNthFiducialVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_SetNthFiducialVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthFiducialVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNthFiducialVisibility(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsFiducialNode::SetNthFiducialVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_GetNthFiducialLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthFiducialLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNthFiducialLabel(temp0) :
      op->vtkMRMLMarkupsFiducialNode::GetNthFiducialLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_SetNthFiducialLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthFiducialLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  int temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNthFiducialLabel(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsFiducialNode::SetNthFiducialLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_GetNthFiducialAssociatedNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthFiducialAssociatedNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNthFiducialAssociatedNodeID(temp0) :
      op->vtkMRMLMarkupsFiducialNode::GetNthFiducialAssociatedNodeID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_SetNthFiducialAssociatedNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthFiducialAssociatedNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNthFiducialAssociatedNodeID(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsFiducialNode::SetNthFiducialAssociatedNodeID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialNode_SetNthFiducialWorldCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthFiducialWorldCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  int temp0;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetNthFiducialWorldCoordinates(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsFiducialNode::SetNthFiducialWorldCoordinates(temp0, temp1);
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
PyvtkMRMLMarkupsFiducialNode_GetNthFiducialWorldCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthFiducialWorldCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialNode *op = static_cast<vtkMRMLMarkupsFiducialNode *>(vp);

  int temp0;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetNthFiducialWorldCoordinates(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsFiducialNode::GetNthFiducialWorldCoordinates(temp0, temp1);
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

static PyMethodDef PyvtkMRMLMarkupsFiducialNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMarkupsFiducialNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMarkupsFiducialNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMarkupsFiducialNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLMarkupsFiducialNode\nC++: static vtkMRMLMarkupsFiducialNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMarkupsFiducialNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMarkupsFiducialNode\nC++: vtkMRMLMarkupsFiducialNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMarkupsFiducialNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMarkupsFiducialNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetIcon", PyvtkMRMLMarkupsFiducialNode_GetIcon, METH_VARARGS,
   "GetIcon(self) -> str\nC++: const char *GetIcon() override;\n\n"},
  {"GetAddIcon", PyvtkMRMLMarkupsFiducialNode_GetAddIcon, METH_VARARGS,
   "GetAddIcon(self) -> str\nC++: const char *GetAddIcon() override;\n\n"},
  {"GetPlaceAddIcon", PyvtkMRMLMarkupsFiducialNode_GetPlaceAddIcon, METH_VARARGS,
   "GetPlaceAddIcon(self) -> str\nC++: const char *GetPlaceAddIcon() override;\n\n"},
  {"CreateNodeInstance", PyvtkMRMLMarkupsFiducialNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"GetNodeTagName", PyvtkMRMLMarkupsFiducialNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetMarkupType", PyvtkMRMLMarkupsFiducialNode_GetMarkupType, METH_VARARGS,
   "GetMarkupType(self) -> str\nC++: const char *GetMarkupType() override;\n\nGet markup type internal name\n"},
  {"GetTypeDisplayName", PyvtkMRMLMarkupsFiducialNode_GetTypeDisplayName, METH_VARARGS,
   "GetTypeDisplayName(self) -> str\nC++: const char *GetTypeDisplayName() override;\n\nGet node type display name (like \"Closed Curve\", \"Markup\", etc).\n\note Subclasses should override this method to provide a more\nappropriate and translatable name.\n"},
  {"GetDefaultNodeNamePrefix", PyvtkMRMLMarkupsFiducialNode_GetDefaultNodeNamePrefix, METH_VARARGS,
   "GetDefaultNodeNamePrefix(self) -> str\nC++: const char *GetDefaultNodeNamePrefix() override;\n\nGet markup short name\n"},
  {"CopyContent", PyvtkMRMLMarkupsFiducialNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLMarkupsFiducialNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"SetMaximumNumberOfControlPoints", PyvtkMRMLMarkupsFiducialNode_SetMaximumNumberOfControlPoints, METH_VARARGS,
   "SetMaximumNumberOfControlPoints(self, _arg:int) -> None\nC++: virtual void SetMaximumNumberOfControlPoints(int _arg)\n\nMaximum number of control points limits the number of markups\nallowed in the node. If maximum number of control points is set\nto 0 then no it means there is no limit (this is the default\nvalue). The value is an indication to the user interface and does\nnot affect prevent adding markups to a node programmatically. If\nvalue is set to lower value than the number of markups in the\nnode, then existing markups are not deleted. 2 for line, and 3\nfor angle Markups\n"},
  {"SetRequiredNumberOfControlPoints", PyvtkMRMLMarkupsFiducialNode_SetRequiredNumberOfControlPoints, METH_VARARGS,
   "SetRequiredNumberOfControlPoints(self, _arg:int) -> None\nC++: virtual void SetRequiredNumberOfControlPoints(int _arg)\n\nSet the number of control points that are required for defining\nthis widget. Interaction mode remains in \"place\" mode until this\nnumber is reached. If the number is set to 0 then no it means\nthere is no preference (this is the default value).\n"},
  {"CreateDefaultDisplayNodes", PyvtkMRMLMarkupsFiducialNode_CreateDefaultDisplayNodes, METH_VARARGS,
   "CreateDefaultDisplayNodes(self) -> None\nC++: void CreateDefaultDisplayNodes() override;\n\nCreate and observe default display node(s)\n"},
  {"GetNumberOfFiducials", PyvtkMRMLMarkupsFiducialNode_GetNumberOfFiducials, METH_VARARGS,
   "GetNumberOfFiducials(self) -> int\nC++: int GetNumberOfFiducials()\n\n\\deprecated Use GetNumberOfControlPoints instead.\n"},
  {"AddFiducial", PyvtkMRMLMarkupsFiducialNode_AddFiducial, METH_VARARGS,
   "AddFiducial(self, x:float, y:float, z:float, label:str=...) -> int\nC++: int AddFiducial(double x, double y, double z,\n    std::string label=std::string())\n\n\\deprecated Use AddControlPoint instead.\n"},
  {"AddFiducialFromArray", PyvtkMRMLMarkupsFiducialNode_AddFiducialFromArray, METH_VARARGS,
   "AddFiducialFromArray(self, pos:[float, float, float],\n    label:str=...) -> int\nC++: int AddFiducialFromArray(double pos[3],\n    std::string label=std::string())\n\nAdd a new fiducial from an array and return the fiducial\nindex\\deprecated Use AddControlPoint instead.\n"},
  {"GetNthFiducialPosition", PyvtkMRMLMarkupsFiducialNode_GetNthFiducialPosition, METH_VARARGS,
   "GetNthFiducialPosition(self, n:int, pos:[float, float, float])\n    -> None\nC++: void GetNthFiducialPosition(int n, double pos[3])\n\n\\deprecated Use GetNthControlPointPosition instead.\n"},
  {"SetNthFiducialPosition", PyvtkMRMLMarkupsFiducialNode_SetNthFiducialPosition, METH_VARARGS,
   "SetNthFiducialPosition(self, n:int, x:float, y:float, z:float)\n    -> None\nC++: void SetNthFiducialPosition(int n, double x, double y,\n    double z)\n\n\\deprecated Use SetNthControlPointPosition instead.\n"},
  {"SetNthFiducialPositionFromArray", PyvtkMRMLMarkupsFiducialNode_SetNthFiducialPositionFromArray, METH_VARARGS,
   "SetNthFiducialPositionFromArray(self, n:int, pos:[float, float,\n    float]) -> None\nC++: void SetNthFiducialPositionFromArray(int n, double pos[3])\n\n\\deprecated Use SetNthControlPointPositionFromArray instead.\n"},
  {"GetNthFiducialSelected", PyvtkMRMLMarkupsFiducialNode_GetNthFiducialSelected, METH_VARARGS,
   "GetNthFiducialSelected(self, n:int=0) -> bool\nC++: bool GetNthFiducialSelected(int n=0)\n\n\\deprecated Use GetNthControlPointSelected instead.\n"},
  {"SetNthFiducialSelected", PyvtkMRMLMarkupsFiducialNode_SetNthFiducialSelected, METH_VARARGS,
   "SetNthFiducialSelected(self, n:int, flag:bool) -> None\nC++: void SetNthFiducialSelected(int n, bool flag)\n\n\\deprecated Use SetNthControlPointSelected instead.\n"},
  {"GetNthFiducialLocked", PyvtkMRMLMarkupsFiducialNode_GetNthFiducialLocked, METH_VARARGS,
   "GetNthFiducialLocked(self, n:int=0) -> bool\nC++: bool GetNthFiducialLocked(int n=0)\n\n\\deprecated Use GetNthControlPointLocked instead.\n"},
  {"SetNthFiducialLocked", PyvtkMRMLMarkupsFiducialNode_SetNthFiducialLocked, METH_VARARGS,
   "SetNthFiducialLocked(self, n:int, flag:bool) -> None\nC++: void SetNthFiducialLocked(int n, bool flag)\n\n\\deprecated Use SetNthControlPointLocked instead.\n"},
  {"GetNthFiducialVisibility", PyvtkMRMLMarkupsFiducialNode_GetNthFiducialVisibility, METH_VARARGS,
   "GetNthFiducialVisibility(self, n:int=0) -> bool\nC++: bool GetNthFiducialVisibility(int n=0)\n\n\\deprecated Use GetNthControlPointVisibility instead.\n"},
  {"SetNthFiducialVisibility", PyvtkMRMLMarkupsFiducialNode_SetNthFiducialVisibility, METH_VARARGS,
   "SetNthFiducialVisibility(self, n:int, flag:bool) -> None\nC++: void SetNthFiducialVisibility(int n, bool flag)\n\n\\deprecated Use SetNthControlPointVisibility instead.\n"},
  {"GetNthFiducialLabel", PyvtkMRMLMarkupsFiducialNode_GetNthFiducialLabel, METH_VARARGS,
   "GetNthFiducialLabel(self, n:int=0) -> str\nC++: std::string GetNthFiducialLabel(int n=0)\n\n\\deprecated Use GetNthControlPointLabel instead.\n"},
  {"SetNthFiducialLabel", PyvtkMRMLMarkupsFiducialNode_SetNthFiducialLabel, METH_VARARGS,
   "SetNthFiducialLabel(self, n:int, label:str) -> None\nC++: void SetNthFiducialLabel(int n, std::string label)\n\n\\deprecated Use SetNthControlPointLabel instead.\n"},
  {"GetNthFiducialAssociatedNodeID", PyvtkMRMLMarkupsFiducialNode_GetNthFiducialAssociatedNodeID, METH_VARARGS,
   "GetNthFiducialAssociatedNodeID(self, n:int=0) -> str\nC++: std::string GetNthFiducialAssociatedNodeID(int n=0)\n\n\\deprecated Use GetNthControlPointAssociatedNodeID instead.\n"},
  {"SetNthFiducialAssociatedNodeID", PyvtkMRMLMarkupsFiducialNode_SetNthFiducialAssociatedNodeID, METH_VARARGS,
   "SetNthFiducialAssociatedNodeID(self, n:int, id:str) -> None\nC++: void SetNthFiducialAssociatedNodeID(int n, const char *id)\n\n\\deprecated Use SetNthControlPointAssociatedNodeID instead.\n"},
  {"SetNthFiducialWorldCoordinates", PyvtkMRMLMarkupsFiducialNode_SetNthFiducialWorldCoordinates, METH_VARARGS,
   "SetNthFiducialWorldCoordinates(self, n:int, coords:[float, float,\n    float, float]) -> None\nC++: void SetNthFiducialWorldCoordinates(int n, double coords[4])\n\n\\deprecated Use SetNthControlPointPositionWorld instead.\n"},
  {"GetNthFiducialWorldCoordinates", PyvtkMRMLMarkupsFiducialNode_GetNthFiducialWorldCoordinates, METH_VARARGS,
   "GetNthFiducialWorldCoordinates(self, n:int, coords:[float, float,\n    float, float]) -> None\nC++: void GetNthFiducialWorldCoordinates(int n, double coords[4])\n\n\\deprecated Use GetNthControlPointPositionWorld instead.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMarkupsFiducialNode_Doc =
  "vtkMRMLMarkupsFiducialNode - MRML node to represent a fiducial markup\n\n"
  "Superclass: vtkMRMLMarkupsNode\n\n"
  "Fiducial Markups nodes contain a list of control points.\n"
  "Visualization parameters are set in the vtkMRMLMarkupsDisplayNode\n"
  "class.\n\n"
  "Markups is intended to be used for manual marking/editing of point\n"
  "positions. There is no specific limit for number of points that can\n"
  "be added to a list, but performance is optimal if there are less than\n"
  "2000 points.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsFiducialNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsFiducialNode", // tp_name
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
  PyvtkMRMLMarkupsFiducialNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLMarkupsFiducialNode_StaticNew()
{
  return vtkMRMLMarkupsFiducialNode::New();
}

PyObject *PyvtkMRMLMarkupsFiducialNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMarkupsFiducialNode_Type, PyvtkMRMLMarkupsFiducialNode_Methods,
    "vtkMRMLMarkupsFiducialNode",
 &PyvtkMRMLMarkupsFiducialNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLMarkupsNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLMarkupsFiducialNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLMarkupsFiducialNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMarkupsFiducialNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

