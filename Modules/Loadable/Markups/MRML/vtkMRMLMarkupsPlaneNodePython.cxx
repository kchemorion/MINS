// python wrapper for vtkMRMLMarkupsPlaneNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLMarkupsPlaneNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLMarkupsPlaneNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLMarkupsPlaneNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLMarkupsNode_ClassNew
extern "C" { PyObject *PyvtkMRMLMarkupsNode_ClassNew(); }
#define DECLARED_PyvtkMRMLMarkupsNode_ClassNew
#endif

static PyObject *
PyvtkMRMLMarkupsPlaneNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsPlaneNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMarkupsPlaneNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMarkupsPlaneNode *tempr = vtkMRMLMarkupsPlaneNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsPlaneNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMarkupsPlaneNode::NewInstance());

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
PyvtkMRMLMarkupsPlaneNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMarkupsPlaneNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMarkupsPlaneNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIcon() :
      op->vtkMRMLMarkupsPlaneNode::GetIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetAddIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAddIcon() :
      op->vtkMRMLMarkupsPlaneNode::GetAddIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetPlaceAddIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceAddIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPlaceAddIcon() :
      op->vtkMRMLMarkupsPlaneNode::GetPlaceAddIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLMarkupsPlaneNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLMarkupsPlaneNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetMarkupType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetMarkupType() :
      op->vtkMRMLMarkupsPlaneNode::GetMarkupType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetTypeDisplayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeDisplayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTypeDisplayName() :
      op->vtkMRMLMarkupsPlaneNode::GetTypeDisplayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetDefaultNodeNamePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNodeNamePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultNodeNamePrefix() :
      op->vtkMRMLMarkupsPlaneNode::GetDefaultNodeNamePrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

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
      op->vtkMRMLMarkupsPlaneNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLMarkupsPlaneNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_ApplyTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

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
      op->vtkMRMLMarkupsPlaneNode::ApplyTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetSizeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSizeMode(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetSizeMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetSizeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSizeMode() :
      op->vtkMRMLMarkupsPlaneNode::GetSizeMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetSizeModeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSizeModeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLMarkupsPlaneNode::GetSizeModeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetSizeModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSizeModeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsPlaneNode::GetSizeModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetAutoSizeScalingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoSizeScalingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAutoSizeScalingFactor() :
      op->vtkMRMLMarkupsPlaneNode::GetAutoSizeScalingFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetAutoSizeScalingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoSizeScalingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoSizeScalingFactor(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetAutoSizeScalingFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetSize(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::GetSize(temp0);
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
PyvtkMRMLMarkupsPlaneNode_GetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkMRMLMarkupsPlaneNode::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_GetSize_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsPlaneNode_GetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSize");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetSize(temp0);
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
PyvtkMRMLMarkupsPlaneNode_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLMarkupsPlaneNode_SetSize_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_SetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetSizeWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetSizeWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::GetSizeWorld(temp0);
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
PyvtkMRMLMarkupsPlaneNode_GetSizeWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSizeWorld() :
      op->vtkMRMLMarkupsPlaneNode::GetSizeWorld());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetSizeWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_GetSizeWorld_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsPlaneNode_GetSizeWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSizeWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetSizeWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSizeWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetSizeWorld(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetSizeWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSizeWorld(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetSizeWorld(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetSizeWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_SetSizeWorld_s1(self, args);
    case 2:
      return PyvtkMRMLMarkupsPlaneNode_SetSizeWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSizeWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetPlaneBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPlaneBounds() :
      op->vtkMRMLMarkupsPlaneNode::GetPlaneBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetPlaneBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  double temp0;
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
      op->SetPlaneBounds(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetPlaneBounds(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetPlaneBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPlaneBounds(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetPlaneBounds(temp0);
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
PyvtkMRMLMarkupsPlaneNode_SetPlaneBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkMRMLMarkupsPlaneNode_SetPlaneBounds_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_SetPlaneBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPlaneBounds");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetNormal(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::GetNormal(temp0);
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
PyvtkMRMLMarkupsPlaneNode_GetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkMRMLMarkupsPlaneNode::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_GetNormal_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsPlaneNode_GetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNormal");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetNormalWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetNormalWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::GetNormalWorld(temp0);
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
PyvtkMRMLMarkupsPlaneNode_GetNormalWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormalWorld() :
      op->vtkMRMLMarkupsPlaneNode::GetNormalWorld());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetNormalWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_GetNormalWorld_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsPlaneNode_GetNormalWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNormalWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_SetNormal_s1(self, args);
    case 3:
      return PyvtkMRMLMarkupsPlaneNode_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetNormalWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNormalWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetNormalWorld(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetNormalWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetNormalWorld(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetNormalWorld(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetNormalWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_SetNormalWorld_s1(self, args);
    case 3:
      return PyvtkMRMLMarkupsPlaneNode_SetNormalWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormalWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetOrigin(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::GetOrigin(temp0);
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
PyvtkMRMLMarkupsPlaneNode_GetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkMRMLMarkupsPlaneNode::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_GetOrigin_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsPlaneNode_GetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOrigin");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetOriginWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetOriginWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::GetOriginWorld(temp0);
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
PyvtkMRMLMarkupsPlaneNode_GetOriginWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOriginWorld() :
      op->vtkMRMLMarkupsPlaneNode::GetOriginWorld());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetOriginWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_GetOriginWorld_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsPlaneNode_GetOriginWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOriginWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_SetOrigin_s1(self, args);
    case 3:
      return PyvtkMRMLMarkupsPlaneNode_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetOriginWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOriginWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetOriginWorld(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetOriginWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOriginWorld(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetOriginWorld(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetOriginWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_SetOriginWorld_s1(self, args);
    case 3:
      return PyvtkMRMLMarkupsPlaneNode_SetOriginWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOriginWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCenter(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::GetCenter(temp0);
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
PyvtkMRMLMarkupsPlaneNode_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkMRMLMarkupsPlaneNode::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_GetCenter_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsPlaneNode_GetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetCenterWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCenterWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::GetCenterWorld(temp0);
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
PyvtkMRMLMarkupsPlaneNode_GetCenterWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenterWorld() :
      op->vtkMRMLMarkupsPlaneNode::GetCenterWorld());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetCenterWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_GetCenterWorld_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsPlaneNode_GetCenterWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCenterWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_SetCenter_s1(self, args);
    case 3:
      return PyvtkMRMLMarkupsPlaneNode_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetCenterWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenterWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetCenterWorld(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetCenterWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetCenterWorld(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetCenterWorld(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetCenterWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_SetCenterWorld_s1(self, args);
    case 3:
      return PyvtkMRMLMarkupsPlaneNode_SetCenterWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenterWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetAxes(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::GetAxes(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->SetAxes(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetAxes(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetAxesWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxesWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetAxesWorld(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::GetAxesWorld(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetAxesWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxesWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->SetAxesWorld(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetAxesWorld(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetObjectToNodeMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectToNodeMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetObjectToNodeMatrix(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::GetObjectToNodeMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetObjectToWorldMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectToWorldMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetObjectToWorldMatrix(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::GetObjectToWorldMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetBaseToWorldMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseToWorldMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetBaseToWorldMatrix(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::GetBaseToWorldMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetBaseToNodeMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseToNodeMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetBaseToNodeMatrix(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::GetBaseToNodeMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetBaseToNodeMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseToNodeMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetBaseToNodeMatrix() :
      op->vtkMRMLMarkupsPlaneNode::GetBaseToNodeMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetBaseToNodeMatrix(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsPlaneNode_GetBaseToNodeMatrix_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsPlaneNode_GetBaseToNodeMatrix_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBaseToNodeMatrix");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetObjectToBaseMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectToBaseMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetObjectToBaseMatrix() :
      op->vtkMRMLMarkupsPlaneNode::GetObjectToBaseMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetClosestPointOnPlaneWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestPointOnPlaneWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  bool temp2 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    double tempr = (ap.IsBound() ?
      op->GetClosestPointOnPlaneWorld(temp0, temp1, temp2) :
      op->vtkMRMLMarkupsPlaneNode::GetClosestPointOnPlaneWorld(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLMarkupsPlaneNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_CreateDefaultDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultDisplayNodes();
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::CreateDefaultDisplayNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetRASBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRASBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

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
      op->vtkMRMLMarkupsPlaneNode::GetRASBounds(temp0);
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
PyvtkMRMLMarkupsPlaneNode_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

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
      op->vtkMRMLMarkupsPlaneNode::GetBounds(temp0);
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
PyvtkMRMLMarkupsPlaneNode_GetPlaneType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneType() :
      op->vtkMRMLMarkupsPlaneNode::GetPlaneType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_SetPlaneType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneType(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::SetPlaneType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetPlaneTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPlaneTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLMarkupsPlaneNode::GetPlaneTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetPlaneTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPlaneTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsPlaneNode::GetPlaneTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetIsPlaneValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsPlaneValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsPlaneValid() :
      op->vtkMRMLMarkupsPlaneNode::GetIsPlaneValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GenerateOrthogonalMatrix_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GenerateOrthogonalMatrix");

  vtkMatrix4x4 *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  vtkAbstractTransform *temp2 = nullptr;
  bool temp3 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 4) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkAbstractTransform")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkMRMLMarkupsPlaneNode::GenerateOrthogonalMatrix(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_GenerateOrthogonalMatrix_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GenerateOrthogonalMatrix");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  vtkMatrix4x4 *temp4 = nullptr;
  vtkAbstractTransform *temp5 = nullptr;
  bool temp6 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5, 7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetVTKObject(temp4, "vtkMatrix4x4") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp5, "vtkAbstractTransform")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    vtkMRMLMarkupsPlaneNode::GenerateOrthogonalMatrix(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsPlaneNode_GenerateOrthogonalMatrix(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
    case 3:
    case 4:
      return PyvtkMRMLMarkupsPlaneNode_GenerateOrthogonalMatrix_s1(self, args);
    case 5:
    case 6:
    case 7:
      return PyvtkMRMLMarkupsPlaneNode_GenerateOrthogonalMatrix_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateOrthogonalMatrix");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

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
      op->vtkMRMLMarkupsPlaneNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLMarkupsPlaneNode_GetPlaneCornerPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneCornerPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->GetPlaneCornerPoints(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::GetPlaneCornerPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneNode_GetPlaneCornerPointsWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneCornerPointsWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneNode *op = static_cast<vtkMRMLMarkupsPlaneNode *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->GetPlaneCornerPointsWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneNode::GetPlaneCornerPointsWorld(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsPlaneNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMarkupsPlaneNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMarkupsPlaneNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMarkupsPlaneNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLMarkupsPlaneNode\nC++: static vtkMRMLMarkupsPlaneNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMarkupsPlaneNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMarkupsPlaneNode\nC++: vtkMRMLMarkupsPlaneNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMarkupsPlaneNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMarkupsPlaneNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetIcon", PyvtkMRMLMarkupsPlaneNode_GetIcon, METH_VARARGS,
   "GetIcon(self) -> str\nC++: const char *GetIcon() override;\n\n"},
  {"GetAddIcon", PyvtkMRMLMarkupsPlaneNode_GetAddIcon, METH_VARARGS,
   "GetAddIcon(self) -> str\nC++: const char *GetAddIcon() override;\n\n"},
  {"GetPlaceAddIcon", PyvtkMRMLMarkupsPlaneNode_GetPlaceAddIcon, METH_VARARGS,
   "GetPlaceAddIcon(self) -> str\nC++: const char *GetPlaceAddIcon() override;\n\n"},
  {"CreateNodeInstance", PyvtkMRMLMarkupsPlaneNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"GetNodeTagName", PyvtkMRMLMarkupsPlaneNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetMarkupType", PyvtkMRMLMarkupsPlaneNode_GetMarkupType, METH_VARARGS,
   "GetMarkupType(self) -> str\nC++: const char *GetMarkupType() override;\n\nGet markup type internal name\n"},
  {"GetTypeDisplayName", PyvtkMRMLMarkupsPlaneNode_GetTypeDisplayName, METH_VARARGS,
   "GetTypeDisplayName(self) -> str\nC++: const char *GetTypeDisplayName() override;\n\nGet node type display name (like \"Closed Curve\", \"Markup\", etc).\n\note Subclasses should override this method to provide a more\nappropriate and translatable name.\n"},
  {"GetDefaultNodeNamePrefix", PyvtkMRMLMarkupsPlaneNode_GetDefaultNodeNamePrefix, METH_VARARGS,
   "GetDefaultNodeNamePrefix(self) -> str\nC++: const char *GetDefaultNodeNamePrefix() override;\n\nGet markup short name\n"},
  {"CopyContent", PyvtkMRMLMarkupsPlaneNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLMarkupsPlaneNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"ApplyTransform", PyvtkMRMLMarkupsPlaneNode_ApplyTransform, METH_VARARGS,
   "ApplyTransform(self, transform:vtkAbstractTransform) -> None\nC++: void ApplyTransform(vtkAbstractTransform *transform)\n    override;\n\nApply the passed transformation to the ROI\n"},
  {"SetSizeMode", PyvtkMRMLMarkupsPlaneNode_SetSizeMode, METH_VARARGS,
   "SetSizeMode(self, sizeMode:int) -> None\nC++: void SetSizeMode(int sizeMode)\n\nMethod for calculating the size of the plane along the direction\nvectors. With size mode auto, the size of the plane is\nautomatically calculated so that it encompasses all of the\npoints. Size mode absolute will never be recalculated. Default is\nSizeModeAuto.\n"},
  {"GetSizeMode", PyvtkMRMLMarkupsPlaneNode_GetSizeMode, METH_VARARGS,
   "GetSizeMode(self) -> int\nC++: virtual int GetSizeMode()\n\nMethod for calculating the size of the plane along the direction\nvectors. With size mode auto, the size of the plane is\nautomatically calculated so that it encompasses all of the\npoints. Size mode absolute will never be recalculated. Default is\nSizeModeAuto.\n"},
  {"GetSizeModeAsString", PyvtkMRMLMarkupsPlaneNode_GetSizeModeAsString, METH_VARARGS,
   "GetSizeModeAsString(sizeMode:int) -> str\nC++: static const char *GetSizeModeAsString(int sizeMode)\n\nMethod for calculating the size of the plane along the direction\nvectors. With size mode auto, the size of the plane is\nautomatically calculated so that it encompasses all of the\npoints. Size mode absolute will never be recalculated. Default is\nSizeModeAuto.\n"},
  {"GetSizeModeFromString", PyvtkMRMLMarkupsPlaneNode_GetSizeModeFromString, METH_VARARGS,
   "GetSizeModeFromString(sizeMode:str) -> int\nC++: static int GetSizeModeFromString(const char *sizeMode)\n\nMethod for calculating the size of the plane along the direction\nvectors. With size mode auto, the size of the plane is\nautomatically calculated so that it encompasses all of the\npoints. Size mode absolute will never be recalculated. Default is\nSizeModeAuto.\n"},
  {"GetAutoSizeScalingFactor", PyvtkMRMLMarkupsPlaneNode_GetAutoSizeScalingFactor, METH_VARARGS,
   "GetAutoSizeScalingFactor(self) -> float\nC++: virtual double GetAutoSizeScalingFactor()\n\nThe plane size multiplier used to calculate the size of the\nplane. This is only used when the size mode is auto. Default is\n1.0.\n"},
  {"SetAutoSizeScalingFactor", PyvtkMRMLMarkupsPlaneNode_SetAutoSizeScalingFactor, METH_VARARGS,
   "SetAutoSizeScalingFactor(self, _arg:float) -> None\nC++: virtual void SetAutoSizeScalingFactor(double _arg)\n\n"},
  {"GetSize", PyvtkMRMLMarkupsPlaneNode_GetSize, METH_VARARGS,
   "GetSize(self, size:[float, float]) -> None\nC++: void GetSize(double size[2])\nGetSize(self) -> (float, float)\nC++: double *GetSize()\n\nGet/Set size of the plane in the object coordinate system. The\nsize is defined in world coordinate system units. When the size\nmode is auto, plane size is updated automatically from the input\ncontrol points.\n"},
  {"SetSize", PyvtkMRMLMarkupsPlaneNode_SetSize, METH_VARARGS,
   "SetSize(self, x:float, y:float) -> None\nC++: virtual void SetSize(double x, double y)\nSetSize(self, size:[float, float]) -> None\nC++: virtual void SetSize(double size[2])\n\nGet/Set size of the plane in the object coordinate system. The\nsize is defined in world coordinate system units. When the size\nmode is auto, plane size is updated automatically from the input\ncontrol points.\n"},
  {"GetSizeWorld", PyvtkMRMLMarkupsPlaneNode_GetSizeWorld, METH_VARARGS,
   "GetSizeWorld(self, size:[float, float]) -> None\nC++: void GetSizeWorld(double size[2])\nGetSizeWorld(self) -> (float, float)\nC++: double *GetSizeWorld()\n\nGet/Set size of the plane in the world coordinate system. The\nsize is defined in world coordinate system units. When the size\nmode is auto, plane size is updated automatically from the input\ncontrol points.\n"},
  {"SetSizeWorld", PyvtkMRMLMarkupsPlaneNode_SetSizeWorld, METH_VARARGS,
   "SetSizeWorld(self, normal:(float, float)) -> None\nC++: void SetSizeWorld(const double normal[2])\nSetSizeWorld(self, x:float, y:float) -> None\nC++: void SetSizeWorld(double x, double y)\n\nGet/Set size of the plane in the world coordinate system. The\nsize is defined in world coordinate system units. When the size\nmode is auto, plane size is updated automatically from the input\ncontrol points.\n"},
  {"GetPlaneBounds", PyvtkMRMLMarkupsPlaneNode_GetPlaneBounds, METH_VARARGS,
   "GetPlaneBounds(self) -> (float, float, float, float)\nC++: virtual double *GetPlaneBounds()\n\nGet/Set the bounds of the plane in Object coordinates\n"},
  {"SetPlaneBounds", PyvtkMRMLMarkupsPlaneNode_SetPlaneBounds, METH_VARARGS,
   "SetPlaneBounds(self, x0:float, x1:float, y0:float, y1:float)\n    -> None\nC++: virtual void SetPlaneBounds(double x0, double x1, double y0,\n    double y1)\nSetPlaneBounds(self, bounds:[float, float, float, float]) -> None\nC++: virtual void SetPlaneBounds(double bounds[4])\n\nGet/Set the bounds of the plane in Object coordinates\n"},
  {"GetNormal", PyvtkMRMLMarkupsPlaneNode_GetNormal, METH_VARARGS,
   "GetNormal(self, normal:[float, float, float]) -> None\nC++: void GetNormal(double normal[3])\nGetNormal(self) -> (float, float, float)\nC++: double *GetNormal()\n\nGet/Set the normal vector for the plane in object or world\ncoordinate system.\n"},
  {"GetNormalWorld", PyvtkMRMLMarkupsPlaneNode_GetNormalWorld, METH_VARARGS,
   "GetNormalWorld(self, normal:[float, float, float]) -> None\nC++: void GetNormalWorld(double normal[3])\nGetNormalWorld(self) -> (float, float, float)\nC++: double *GetNormalWorld()\n\nGet/Set the normal vector for the plane in object or world\ncoordinate system.\n"},
  {"SetNormal", PyvtkMRMLMarkupsPlaneNode_SetNormal, METH_VARARGS,
   "SetNormal(self, normal:(float, float, float)) -> None\nC++: void SetNormal(const double normal[3])\nSetNormal(self, x:float, y:float, z:float) -> None\nC++: void SetNormal(double x, double y, double z)\n\nGet/Set the normal vector for the plane in object or world\ncoordinate system.\n"},
  {"SetNormalWorld", PyvtkMRMLMarkupsPlaneNode_SetNormalWorld, METH_VARARGS,
   "SetNormalWorld(self, normal:(float, float, float)) -> None\nC++: void SetNormalWorld(const double normal[3])\nSetNormalWorld(self, x:float, y:float, z:float) -> None\nC++: void SetNormalWorld(double x, double y, double z)\n\nGet/Set the normal vector for the plane in object or world\ncoordinate system.\n"},
  {"GetOrigin", PyvtkMRMLMarkupsPlaneNode_GetOrigin, METH_VARARGS,
   "GetOrigin(self, origin:[float, float, float]) -> None\nC++: void GetOrigin(double origin[3])\nGetOrigin(self) -> (float, float, float)\nC++: double *GetOrigin()\n\nGet/Set the origin of the plane in object or world coordinate\nsystem.\n"},
  {"GetOriginWorld", PyvtkMRMLMarkupsPlaneNode_GetOriginWorld, METH_VARARGS,
   "GetOriginWorld(self, origin:[float, float, float]) -> None\nC++: void GetOriginWorld(double origin[3])\nGetOriginWorld(self) -> (float, float, float)\nC++: double *GetOriginWorld()\n\nGet/Set the origin of the plane in object or world coordinate\nsystem.\n"},
  {"SetOrigin", PyvtkMRMLMarkupsPlaneNode_SetOrigin, METH_VARARGS,
   "SetOrigin(self, origin:(float, float, float)) -> None\nC++: void SetOrigin(const double origin[3])\nSetOrigin(self, x:float, y:float, z:float) -> None\nC++: void SetOrigin(double x, double y, double z)\n\nGet/Set the origin of the plane in object or world coordinate\nsystem.\n"},
  {"SetOriginWorld", PyvtkMRMLMarkupsPlaneNode_SetOriginWorld, METH_VARARGS,
   "SetOriginWorld(self, origin:(float, float, float)) -> None\nC++: void SetOriginWorld(const double origin[3])\nSetOriginWorld(self, x:float, y:float, z:float) -> None\nC++: void SetOriginWorld(double x, double y, double z)\n\nGet/Set the origin of the plane in object or world coordinate\nsystem.\n"},
  {"GetCenter", PyvtkMRMLMarkupsPlaneNode_GetCenter, METH_VARARGS,
   "GetCenter(self, origin:[float, float, float]) -> None\nC++: void GetCenter(double origin[3])\nGetCenter(self) -> (float, float, float)\nC++: double *GetCenter()\n\nGet/Set geometric center of the plane. Currently, it is always\nthe same as the origin of the plane.\n"},
  {"GetCenterWorld", PyvtkMRMLMarkupsPlaneNode_GetCenterWorld, METH_VARARGS,
   "GetCenterWorld(self, origin:[float, float, float]) -> None\nC++: void GetCenterWorld(double origin[3])\nGetCenterWorld(self) -> (float, float, float)\nC++: double *GetCenterWorld()\n\nGet/Set geometric center of the plane. Currently, it is always\nthe same as the origin of the plane.\n"},
  {"SetCenter", PyvtkMRMLMarkupsPlaneNode_SetCenter, METH_VARARGS,
   "SetCenter(self, origin:(float, float, float)) -> None\nC++: void SetCenter(const double origin[3])\nSetCenter(self, x:float, y:float, z:float) -> None\nC++: void SetCenter(double x, double y, double z)\n\nGet/Set geometric center of the plane. Currently, it is always\nthe same as the origin of the plane.\n"},
  {"SetCenterWorld", PyvtkMRMLMarkupsPlaneNode_SetCenterWorld, METH_VARARGS,
   "SetCenterWorld(self, origin:(float, float, float)) -> None\nC++: void SetCenterWorld(const double origin[3])\nSetCenterWorld(self, x:float, y:float, z:float) -> None\nC++: void SetCenterWorld(double x, double y, double z)\n\nGet/Set geometric center of the plane. Currently, it is always\nthe same as the origin of the plane.\n"},
  {"GetAxes", PyvtkMRMLMarkupsPlaneNode_GetAxes, METH_VARARGS,
   "GetAxes(self, x:[float, float, float], y:[float, float, float],\n    z:[float, float, float]) -> None\nC++: void GetAxes(double x[3], double y[3], double z[3])\n\nGet/Set the direction vectors defined by the markup points in\nobject or world coordinate system. Calculated as follows and then\ntransformed by the offset matrix: X: Vector from 1st to 0th\npoint. Y: Cross product of the Z vector and X vectors. Z: Cross\nproduct of the X vector and the vector from the 2nd to 0th point.\n"},
  {"SetAxes", PyvtkMRMLMarkupsPlaneNode_SetAxes, METH_VARARGS,
   "SetAxes(self, x:(float, float, float), y:(float, float, float),\n    z:(float, float, float)) -> None\nC++: void SetAxes(const double x[3], const double y[3],\n    const double z[3])\n\nGet/Set the direction vectors defined by the markup points in\nobject or world coordinate system. Calculated as follows and then\ntransformed by the offset matrix: X: Vector from 1st to 0th\npoint. Y: Cross product of the Z vector and X vectors. Z: Cross\nproduct of the X vector and the vector from the 2nd to 0th point.\n"},
  {"GetAxesWorld", PyvtkMRMLMarkupsPlaneNode_GetAxesWorld, METH_VARARGS,
   "GetAxesWorld(self, x:[float, float, float], y:[float, float,\n    float], z:[float, float, float]) -> None\nC++: void GetAxesWorld(double x[3], double y[3], double z[3])\n\nGet/Set the direction vectors defined by the markup points in\nobject or world coordinate system. Calculated as follows and then\ntransformed by the offset matrix: X: Vector from 1st to 0th\npoint. Y: Cross product of the Z vector and X vectors. Z: Cross\nproduct of the X vector and the vector from the 2nd to 0th point.\n"},
  {"SetAxesWorld", PyvtkMRMLMarkupsPlaneNode_SetAxesWorld, METH_VARARGS,
   "SetAxesWorld(self, x:(float, float, float), y:(float, float,\n    float), z:(float, float, float)) -> None\nC++: void SetAxesWorld(const double x[3], const double y[3],\n    const double z[3])\n\nGet/Set the direction vectors defined by the markup points in\nobject or world coordinate system. Calculated as follows and then\ntransformed by the offset matrix: X: Vector from 1st to 0th\npoint. Y: Cross product of the Z vector and X vectors. Z: Cross\nproduct of the X vector and the vector from the 2nd to 0th point.\n"},
  {"GetObjectToNodeMatrix", PyvtkMRMLMarkupsPlaneNode_GetObjectToNodeMatrix, METH_VARARGS,
   "GetObjectToNodeMatrix(self, objectToNodeMatrix:vtkMatrix4x4)\n    -> None\nC++: virtual void GetObjectToNodeMatrix(\n    vtkMatrix4x4 *objectToNodeMatrix)\n\nMapping from XYZ plane coordinates to local coordinates\n"},
  {"GetObjectToWorldMatrix", PyvtkMRMLMarkupsPlaneNode_GetObjectToWorldMatrix, METH_VARARGS,
   "GetObjectToWorldMatrix(self, objectToWorldMatrix:vtkMatrix4x4)\n    -> None\nC++: virtual void GetObjectToWorldMatrix(\n    vtkMatrix4x4 *objectToWorldMatrix)\n\nMapping from XYZ plane coordinates to world coordinates\n"},
  {"GetBaseToWorldMatrix", PyvtkMRMLMarkupsPlaneNode_GetBaseToWorldMatrix, METH_VARARGS,
   "GetBaseToWorldMatrix(self, baseToWorldMatrix:vtkMatrix4x4) -> None\nC++: virtual void GetBaseToWorldMatrix(\n    vtkMatrix4x4 *baseToWorldMatrix)\n\nMapping from Base plane coordinates to world coordinates\n"},
  {"GetBaseToNodeMatrix", PyvtkMRMLMarkupsPlaneNode_GetBaseToNodeMatrix, METH_VARARGS,
   "GetBaseToNodeMatrix(self, matrix:vtkMatrix4x4) -> None\nC++: virtual void GetBaseToNodeMatrix(vtkMatrix4x4 *matrix)\nGetBaseToNodeMatrix(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetBaseToNodeMatrix()\n\nMapping from Base plane coordinates to local coordinates\n"},
  {"GetObjectToBaseMatrix", PyvtkMRMLMarkupsPlaneNode_GetObjectToBaseMatrix, METH_VARARGS,
   "GetObjectToBaseMatrix(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetObjectToBaseMatrix()\n\n4x4 matrix specifying the relative (rotation/translation) of the\nplane from the base coordinate system defined by the markup\npoints. Default is the identity matrix.\n"},
  {"GetClosestPointOnPlaneWorld", PyvtkMRMLMarkupsPlaneNode_GetClosestPointOnPlaneWorld, METH_VARARGS,
   "GetClosestPointOnPlaneWorld(self, posWorld:(float, float, float),\n    closestPosWorld:[float, float, float],\n    infinitePlane:bool=True) -> float\nC++: double GetClosestPointOnPlaneWorld(const double posWorld[3],\n    double closestPosWorld[3], bool infinitePlane=true)\n\nGet the closest position on the plane in world coordinates.\nReturns the signed distance from the input point to the plane.\nPositive distance is in the direction of the plane normal, and\nnegative distance is in the opposite direction.\n\\param posWorld input position\n\\param closestPosWorld: output found closest position\n\\param infinitePlane if false, the closest position will be\n    restricted to the plane bounds\n\\return Signed distance from the point to the plane. Positive\n    distance is in the direction of the plane normal\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLMarkupsPlaneNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {"CreateDefaultDisplayNodes", PyvtkMRMLMarkupsPlaneNode_CreateDefaultDisplayNodes, METH_VARARGS,
   "CreateDefaultDisplayNodes(self) -> None\nC++: void CreateDefaultDisplayNodes() override;\n\nCreate default display node or nullptr if does not have one\n"},
  {"GetRASBounds", PyvtkMRMLMarkupsPlaneNode_GetRASBounds, METH_VARARGS,
   "GetRASBounds(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void GetRASBounds(double bounds[6]) override;\n\nReimplemented to recalculate the axis-aligned bounds of the\nplane.\n\\sa GetPlanes(), GetPlanesWorld()\n"},
  {"GetBounds", PyvtkMRMLMarkupsPlaneNode_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nReimplemented to recalculate the axis-aligned bounds of the\nplane.\n\\sa GetPlanes(), GetPlanesWorld()\n"},
  {"GetPlaneType", PyvtkMRMLMarkupsPlaneNode_GetPlaneType, METH_VARARGS,
   "GetPlaneType(self) -> int\nC++: virtual int GetPlaneType()\n\nPlaneType is an enum that represents the method that is used to\ncalculate the size of the ROI. PlaneType3Points: Use 3 points to\ndefine the plane. Point 0 defines the origin, point 1 defines\n  the x-axis, and the final point completes plane definition.\nPlaneTypePointNormal (default): Origin (point 0). Normal (vector\nfrom point 0 to point1). PlaneTypePlaneFit: Plane is fit to any\nnumber of control points.\n"},
  {"SetPlaneType", PyvtkMRMLMarkupsPlaneNode_SetPlaneType, METH_VARARGS,
   "SetPlaneType(self, planeType:int) -> None\nC++: void SetPlaneType(int planeType)\n\nPlaneType is an enum that represents the method that is used to\ncalculate the size of the ROI. PlaneType3Points: Use 3 points to\ndefine the plane. Point 0 defines the origin, point 1 defines\n  the x-axis, and the final point completes plane definition.\nPlaneTypePointNormal (default): Origin (point 0). Normal (vector\nfrom point 0 to point1). PlaneTypePlaneFit: Plane is fit to any\nnumber of control points.\n"},
  {"GetPlaneTypeAsString", PyvtkMRMLMarkupsPlaneNode_GetPlaneTypeAsString, METH_VARARGS,
   "GetPlaneTypeAsString(planeType:int) -> str\nC++: static const char *GetPlaneTypeAsString(int planeType)\n\nPlaneType is an enum that represents the method that is used to\ncalculate the size of the ROI. PlaneType3Points: Use 3 points to\ndefine the plane. Point 0 defines the origin, point 1 defines\n  the x-axis, and the final point completes plane definition.\nPlaneTypePointNormal (default): Origin (point 0). Normal (vector\nfrom point 0 to point1). PlaneTypePlaneFit: Plane is fit to any\nnumber of control points.\n"},
  {"GetPlaneTypeFromString", PyvtkMRMLMarkupsPlaneNode_GetPlaneTypeFromString, METH_VARARGS,
   "GetPlaneTypeFromString(planeType:str) -> int\nC++: static int GetPlaneTypeFromString(const char *planeType)\n\nPlaneType is an enum that represents the method that is used to\ncalculate the size of the ROI. PlaneType3Points: Use 3 points to\ndefine the plane. Point 0 defines the origin, point 1 defines\n  the x-axis, and the final point completes plane definition.\nPlaneTypePointNormal (default): Origin (point 0). Normal (vector\nfrom point 0 to point1). PlaneTypePlaneFit: Plane is fit to any\nnumber of control points.\n"},
  {"GetIsPlaneValid", PyvtkMRMLMarkupsPlaneNode_GetIsPlaneValid, METH_VARARGS,
   "GetIsPlaneValid(self) -> bool\nC++: virtual bool GetIsPlaneValid()\n\nGet plane validity flag. True if the plane is fully defined.\n"},
  {"GenerateOrthogonalMatrix", PyvtkMRMLMarkupsPlaneNode_GenerateOrthogonalMatrix, METH_VARARGS,
   "GenerateOrthogonalMatrix(inputMatrix:vtkMatrix4x4,\n    outputMatrix:vtkMatrix4x4, transform:vtkAbstractTransform=...,\n     applyScaling:bool=True) -> None\nC++: static void GenerateOrthogonalMatrix(\n    vtkMatrix4x4 *inputMatrix, vtkMatrix4x4 *outputMatrix,\n    vtkAbstractTransform *transform=nullptr,\n    bool applyScaling=true)\nGenerateOrthogonalMatrix(xAxis:[float, float, float],\n    yAxis:[float, float, float], zAxis:[float, float, float],\n    origin:[float, float, float], outputMatrix:vtkMatrix4x4,\n    transform:vtkAbstractTransform=..., applyScaling:bool=True)\n    -> None\nC++: static void GenerateOrthogonalMatrix(double xAxis[3],\n    double yAxis[3], double zAxis[3], double origin[3],\n    vtkMatrix4x4 *outputMatrix,\n    vtkAbstractTransform *transform=nullptr,\n    bool applyScaling=true)\n\nHelper method for generating an orthogonal right handed matrix\nfrom axes. Transform can optionally be specified to apply an\nadditional transform on the vectors before generating the matrix.\n"},
  {"ProcessMRMLEvents", PyvtkMRMLMarkupsPlaneNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nRe-implemented to react to changes in internal matrices or\ncontrol points.\n"},
  {"GetPlaneCornerPoints", PyvtkMRMLMarkupsPlaneNode_GetPlaneCornerPoints, METH_VARARGS,
   "GetPlaneCornerPoints(self, points_Node:vtkPoints) -> None\nC++: void GetPlaneCornerPoints(vtkPoints *points_Node)\n\nRetrieves the list of points that define the corners of the\nplane.\n"},
  {"GetPlaneCornerPointsWorld", PyvtkMRMLMarkupsPlaneNode_GetPlaneCornerPointsWorld, METH_VARARGS,
   "GetPlaneCornerPointsWorld(self, points_World:vtkPoints) -> None\nC++: void GetPlaneCornerPointsWorld(vtkPoints *points_World)\n\nRetrieves the list of points that define the corners of the\nplane.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMarkupsPlaneNode_Doc =
  "vtkMRMLMarkupsPlaneNode - MRML node to represent a plane markup\n\n"
  "Superclass: vtkMRMLMarkupsNode\n\n"
  "Plane Markups nodes contain three control points. Visualization\n"
  "parameters are set in the vtkMRMLMarkupsDisplayNode class.\n\n"
  "Markups is intended to be used for manual marking/editing of point\n"
  "positions.\n\n"
  "Coordinate systems used:\n"
  "- Object: Coordinate system of the plane rectangle. Computed from\n"
  "  Base coordinate system by ObjectToBaseMatrix. Origin of the\n"
  "  coordinate system is in the plane rectangle center. X and Y axes of\n"
  "the coordinate system are parallel to the first and second axes of\n"
  "  the plane rectangle. Z axis of the coordinate system is the plane\n"
  "  normal.\n"
  "- Base: Coordinate system computed from markup control point\n"
  "  positions. Origin of the coordinate system is in the first control\n"
  "  point. X coordinate system is the direction from the first control\n"
  "  point to the second. Y coordinate system is orthogonal to the X\n"
  "  coordinate system, in the plane specified by the first 3 control\n"
  "  points. Z axis is the cross product of X and Y coordinate system.\n"
  "- Node: Coordinate system of the markup node. Coordinates of the\n"
  "  control points are stored in this coordinate system.\n"
  "- World: Patient coordinate system (RAS). Transform between Node and\n"
  "  World. coordinate systems are defined by the parent transform of\n"
  "  the node.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsPlaneNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsPlaneNode", // tp_name
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
  PyvtkMRMLMarkupsPlaneNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLMarkupsPlaneNode_StaticNew()
{
  return vtkMRMLMarkupsPlaneNode::New();
}

PyObject *PyvtkMRMLMarkupsPlaneNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMarkupsPlaneNode_Type, PyvtkMRMLMarkupsPlaneNode_Methods,
    "vtkMRMLMarkupsPlaneNode",
 &PyvtkMRMLMarkupsPlaneNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLMarkupsNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "SizeModeAuto", vtkMRMLMarkupsPlaneNode::SizeModeAuto },
        { "SizeModeAbsolute", vtkMRMLMarkupsPlaneNode::SizeModeAbsolute },
        { "SizeMode_Last", vtkMRMLMarkupsPlaneNode::SizeMode_Last },
        { "PlaneType3Points", vtkMRMLMarkupsPlaneNode::PlaneType3Points },
        { "PlaneTypePointNormal", vtkMRMLMarkupsPlaneNode::PlaneTypePointNormal },
        { "PlaneTypePlaneFit", vtkMRMLMarkupsPlaneNode::PlaneTypePlaneFit },
        { "PlaneType_Last", vtkMRMLMarkupsPlaneNode::PlaneType_Last },
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

void PyVTKAddFile_vtkMRMLMarkupsPlaneNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLMarkupsPlaneNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMarkupsPlaneNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

