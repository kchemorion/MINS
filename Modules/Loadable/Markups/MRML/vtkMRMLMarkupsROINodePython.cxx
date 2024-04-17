// python wrapper for vtkMRMLMarkupsROINode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkMRMLMarkupsROINode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLMarkupsROINode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLMarkupsROINode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLMarkupsNode_ClassNew
extern "C" { PyObject *PyvtkMRMLMarkupsNode_ClassNew(); }
#define DECLARED_PyvtkMRMLMarkupsNode_ClassNew
#endif

static PyObject *
PyvtkMRMLMarkupsROINode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsROINode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMarkupsROINode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMarkupsROINode *tempr = vtkMRMLMarkupsROINode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsROINode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMarkupsROINode::NewInstance());

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
PyvtkMRMLMarkupsROINode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMarkupsROINode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMarkupsROINode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIcon() :
      op->vtkMRMLMarkupsROINode::GetIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetAddIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAddIcon() :
      op->vtkMRMLMarkupsROINode::GetAddIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetPlaceAddIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceAddIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPlaceAddIcon() :
      op->vtkMRMLMarkupsROINode::GetPlaceAddIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLMarkupsROINode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLMarkupsROINode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetMarkupType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetMarkupType() :
      op->vtkMRMLMarkupsROINode::GetMarkupType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetTypeDisplayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeDisplayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTypeDisplayName() :
      op->vtkMRMLMarkupsROINode::GetTypeDisplayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetDefaultNodeNamePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNodeNamePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultNodeNamePrefix() :
      op->vtkMRMLMarkupsROINode::GetDefaultNodeNamePrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->vtkMRMLMarkupsROINode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLMarkupsROINode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_ApplyTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->vtkMRMLMarkupsROINode::ApplyTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkMRMLMarkupsROINode::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::SetSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsROINode_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->SetSize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::SetSize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsROINode_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsROINode_SetSize_s1(self, args);
    case 3:
      return PyvtkMRMLMarkupsROINode_SetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetSizeWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->GetSizeWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::GetSizeWorld(temp0);
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
PyvtkMRMLMarkupsROINode_SetSizeWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
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
      op->vtkMRMLMarkupsROINode::SetSizeWorld(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsROINode_SetSizeWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->SetSizeWorld(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::SetSizeWorld(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsROINode_SetSizeWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsROINode_SetSizeWorld_s1(self, args);
    case 3:
      return PyvtkMRMLMarkupsROINode_SetSizeWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSizeWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->vtkMRMLMarkupsROINode::GetCenter(temp0);
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
PyvtkMRMLMarkupsROINode_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkMRMLMarkupsROINode::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsROINode_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsROINode_GetCenter_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsROINode_GetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetCenterWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->vtkMRMLMarkupsROINode::GetCenterWorld(temp0);
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
PyvtkMRMLMarkupsROINode_GetCenterWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetCenterWorld() :
      op->vtkMRMLMarkupsROINode::GetCenterWorld());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsROINode_GetCenterWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsROINode_GetCenterWorld_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsROINode_GetCenterWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCenterWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsROINode_SetCenterWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->vtkMRMLMarkupsROINode::SetCenterWorld(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsROINode_SetCenterWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->vtkMRMLMarkupsROINode::SetCenterWorld(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsROINode_SetCenterWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsROINode_SetCenterWorld_s1(self, args);
    case 3:
      return PyvtkMRMLMarkupsROINode_SetCenterWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenterWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsROINode_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->vtkMRMLMarkupsROINode::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsROINode_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->vtkMRMLMarkupsROINode::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsROINode_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsROINode_SetCenter_s1(self, args);
    case 3:
      return PyvtkMRMLMarkupsROINode_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetXAxisWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->GetXAxisWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::GetXAxisWorld(temp0);
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
PyvtkMRMLMarkupsROINode_GetYAxisWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->GetYAxisWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::GetYAxisWorld(temp0);
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
PyvtkMRMLMarkupsROINode_GetZAxisWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->GetZAxisWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::GetZAxisWorld(temp0);
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
PyvtkMRMLMarkupsROINode_GetAxisWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->GetAxisWorld(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::GetAxisWorld(temp0, temp1);
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
PyvtkMRMLMarkupsROINode_GetXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->GetXAxis(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::GetXAxis(temp0);
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
PyvtkMRMLMarkupsROINode_GetYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->GetYAxis(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::GetYAxis(temp0);
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
PyvtkMRMLMarkupsROINode_GetZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->GetZAxis(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::GetZAxis(temp0);
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
PyvtkMRMLMarkupsROINode_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->GetAxis(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::GetAxis(temp0, temp1);
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
PyvtkMRMLMarkupsROINode_GetObjectToNodeMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectToNodeMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetObjectToNodeMatrix() :
      op->vtkMRMLMarkupsROINode::GetObjectToNodeMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_SetAndObserveObjectToNodeMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveObjectToNodeMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveObjectToNodeMatrix(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::SetAndObserveObjectToNodeMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetObjectToWorldMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectToWorldMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetObjectToWorldMatrix() :
      op->vtkMRMLMarkupsROINode::GetObjectToWorldMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetROIType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetROIType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetROIType() :
      op->vtkMRMLMarkupsROINode::GetROIType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_SetROIType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetROIType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetROIType(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::SetROIType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetROITypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetROITypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLMarkupsROINode::GetROITypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetROITypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetROITypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsROINode::GetROITypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_UpdateROIFromControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateROIFromControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateROIFromControlPoints();
    }
    else
    {
      op->vtkMRMLMarkupsROINode::UpdateROIFromControlPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_UpdateBoxROIFromControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateBoxROIFromControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateBoxROIFromControlPoints();
    }
    else
    {
      op->vtkMRMLMarkupsROINode::UpdateBoxROIFromControlPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_UpdateBoundingBoxROIFromControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateBoundingBoxROIFromControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateBoundingBoxROIFromControlPoints();
    }
    else
    {
      op->vtkMRMLMarkupsROINode::UpdateBoundingBoxROIFromControlPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_UpdateControlPointsFromROI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateControlPointsFromROI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateControlPointsFromROI();
    }
    else
    {
      op->vtkMRMLMarkupsROINode::UpdateControlPointsFromROI();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_UpdateControlPointsFromBoundingBoxROI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateControlPointsFromBoundingBoxROI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateControlPointsFromBoundingBoxROI();
    }
    else
    {
      op->vtkMRMLMarkupsROINode::UpdateControlPointsFromBoundingBoxROI();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_UpdateControlPointsFromBoxROI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateControlPointsFromBoxROI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateControlPointsFromBoxROI();
    }
    else
    {
      op->vtkMRMLMarkupsROINode::UpdateControlPointsFromBoxROI();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_OnTransformNodeReferenceChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnTransformNodeReferenceChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  vtkMRMLTransformNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformNode"))
  {
    if (ap.IsBound())
    {
      op->OnTransformNodeReferenceChanged(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::OnTransformNodeReferenceChanged(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->vtkMRMLMarkupsROINode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLMarkupsROINode_UpdateInteractionHandleToWorldMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInteractionHandleToWorldMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateInteractionHandleToWorldMatrix();
    }
    else
    {
      op->vtkMRMLMarkupsROINode::UpdateInteractionHandleToWorldMatrix();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLMarkupsROINode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_CreateDefaultDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultDisplayNodes();
    }
    else
    {
      op->vtkMRMLMarkupsROINode::CreateDefaultDisplayNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetRASBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRASBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->vtkMRMLMarkupsROINode::GetRASBounds(temp0);
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
PyvtkMRMLMarkupsROINode_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->vtkMRMLMarkupsROINode::GetBounds(temp0);
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
PyvtkMRMLMarkupsROINode_GetObjectBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->GetObjectBounds(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::GetObjectBounds(temp0);
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
PyvtkMRMLMarkupsROINode_GetPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  vtkPlanes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
  {
    if (ap.IsBound())
    {
      op->GetPlanes(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::GetPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsROINode_GetPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  vtkPlanes *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPlanes") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetPlanes(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::GetPlanes(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsROINode_GetPlanes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsROINode_GetPlanes_s1(self, args);
    case 2:
      return PyvtkMRMLMarkupsROINode_GetPlanes_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPlanes");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetPlanesWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanesWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  vtkPlanes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
  {
    if (ap.IsBound())
    {
      op->GetPlanesWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::GetPlanesWorld(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsROINode_GetPlanesWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanesWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  vtkPlanes *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPlanes") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetPlanesWorld(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::GetPlanesWorld(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsROINode_GetPlanesWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsROINode_GetPlanesWorld_s1(self, args);
    case 2:
      return PyvtkMRMLMarkupsROINode_GetPlanesWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPlanesWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsROINode_IsPointInROI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointInROI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->IsPointInROI(temp0) :
      op->vtkMRMLMarkupsROINode::IsPointInROI(temp0));

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
PyvtkMRMLMarkupsROINode_IsPointInROIWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointInROIWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->IsPointInROIWorld(temp0) :
      op->vtkMRMLMarkupsROINode::IsPointInROIWorld(temp0));

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
PyvtkMRMLMarkupsROINode_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsideOut(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkMRMLMarkupsROINode::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkMRMLMarkupsROINode::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkMRMLMarkupsROINode::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetImplicitFunction() :
      op->vtkMRMLMarkupsROINode::GetImplicitFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetImplicitFunctionWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitFunctionWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetImplicitFunctionWorld() :
      op->vtkMRMLMarkupsROINode::GetImplicitFunctionWorld());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_CreateROIBoxPolyDataWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateROIBoxPolyDataWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->CreateROIBoxPolyDataWorld() :
      op->vtkMRMLMarkupsROINode::CreateROIBoxPolyDataWorld());

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
PyvtkMRMLMarkupsROINode_SetXYZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetXYZ(temp0) :
      op->vtkMRMLMarkupsROINode::SetXYZ(temp0));

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
PyvtkMRMLMarkupsROINode_SetXYZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->SetXYZ(temp0, temp1, temp2) :
      op->vtkMRMLMarkupsROINode::SetXYZ(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsROINode_SetXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsROINode_SetXYZ_s1(self, args);
    case 3:
      return PyvtkMRMLMarkupsROINode_SetXYZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXYZ");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetXYZ(temp0) :
      op->vtkMRMLMarkupsROINode::GetXYZ(temp0));

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
PyvtkMRMLMarkupsROINode_SetRadiusXYZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->SetRadiusXYZ(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::SetRadiusXYZ(temp0);
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
PyvtkMRMLMarkupsROINode_SetRadiusXYZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->SetRadiusXYZ(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::SetRadiusXYZ(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsROINode_SetRadiusXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsROINode_SetRadiusXYZ_s1(self, args);
    case 3:
      return PyvtkMRMLMarkupsROINode_SetRadiusXYZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRadiusXYZ");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GetRadiusXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->GetRadiusXYZ(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::GetRadiusXYZ(temp0);
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
PyvtkMRMLMarkupsROINode_GetTransformedPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

  vtkPlanes *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkPlanes") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->GetTransformedPlanes(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsROINode::GetTransformedPlanes(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsROINode_GenerateOrthogonalMatrix_s1(PyObject * /*unused*/, PyObject *args)
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
    vtkMRMLMarkupsROINode::GenerateOrthogonalMatrix(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsROINode_GenerateOrthogonalMatrix_s2(PyObject * /*unused*/, PyObject *args)
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

    vtkMRMLMarkupsROINode::GenerateOrthogonalMatrix(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

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
PyvtkMRMLMarkupsROINode_GenerateOrthogonalMatrix(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
    case 3:
    case 4:
      return PyvtkMRMLMarkupsROINode_GenerateOrthogonalMatrix_s1(self, args);
    case 5:
    case 6:
    case 7:
      return PyvtkMRMLMarkupsROINode_GenerateOrthogonalMatrix_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateOrthogonalMatrix");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsROINode_WriteCLI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteCLI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsROINode *op = static_cast<vtkMRMLMarkupsROINode *>(vp);

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
      op->vtkMRMLMarkupsROINode::WriteCLI(temp0, temp1, temp2, temp3);
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

static PyMethodDef PyvtkMRMLMarkupsROINode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMarkupsROINode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMarkupsROINode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMarkupsROINode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLMarkupsROINode\nC++: static vtkMRMLMarkupsROINode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMarkupsROINode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMarkupsROINode\nC++: vtkMRMLMarkupsROINode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMarkupsROINode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMarkupsROINode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetIcon", PyvtkMRMLMarkupsROINode_GetIcon, METH_VARARGS,
   "GetIcon(self) -> str\nC++: const char *GetIcon() override;\n\n"},
  {"GetAddIcon", PyvtkMRMLMarkupsROINode_GetAddIcon, METH_VARARGS,
   "GetAddIcon(self) -> str\nC++: const char *GetAddIcon() override;\n\n"},
  {"GetPlaceAddIcon", PyvtkMRMLMarkupsROINode_GetPlaceAddIcon, METH_VARARGS,
   "GetPlaceAddIcon(self) -> str\nC++: const char *GetPlaceAddIcon() override;\n\n"},
  {"CreateNodeInstance", PyvtkMRMLMarkupsROINode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"GetNodeTagName", PyvtkMRMLMarkupsROINode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetMarkupType", PyvtkMRMLMarkupsROINode_GetMarkupType, METH_VARARGS,
   "GetMarkupType(self) -> str\nC++: const char *GetMarkupType() override;\n\nGet markup type internal name\n"},
  {"GetTypeDisplayName", PyvtkMRMLMarkupsROINode_GetTypeDisplayName, METH_VARARGS,
   "GetTypeDisplayName(self) -> str\nC++: const char *GetTypeDisplayName() override;\n\nGet node type display name (like \"Closed Curve\", \"Markup\", etc).\n\note Subclasses should override this method to provide a more\nappropriate and translatable name.\n"},
  {"GetDefaultNodeNamePrefix", PyvtkMRMLMarkupsROINode_GetDefaultNodeNamePrefix, METH_VARARGS,
   "GetDefaultNodeNamePrefix(self) -> str\nC++: const char *GetDefaultNodeNamePrefix() override;\n\nGet markup short name\n"},
  {"CopyContent", PyvtkMRMLMarkupsROINode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLMarkupsROINode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"ApplyTransform", PyvtkMRMLMarkupsROINode_ApplyTransform, METH_VARARGS,
   "ApplyTransform(self, transform:vtkAbstractTransform) -> None\nC++: void ApplyTransform(vtkAbstractTransform *transform)\n    override;\n\nApply the passed transformation to the ROI\n"},
  {"GetSize", PyvtkMRMLMarkupsROINode_GetSize, METH_VARARGS,
   "GetSize(self) -> (float, float, float)\nC++: virtual double *GetSize()\n\nLength of the ROI sides\n"},
  {"SetSize", PyvtkMRMLMarkupsROINode_SetSize, METH_VARARGS,
   "SetSize(self, size:(float, float, float)) -> None\nC++: void SetSize(const double size[3])\nSetSize(self, x:float, y:float, z:float) -> None\nC++: void SetSize(double x, double y, double z)\n\nLength of the ROI sides\n"},
  {"GetSizeWorld", PyvtkMRMLMarkupsROINode_GetSizeWorld, METH_VARARGS,
   "GetSizeWorld(self, size_World:[float, float, float]) -> None\nC++: void GetSizeWorld(double size_World[3])\n\nLength of the ROI sides\n"},
  {"SetSizeWorld", PyvtkMRMLMarkupsROINode_SetSizeWorld, METH_VARARGS,
   "SetSizeWorld(self, size_World:(float, float, float)) -> None\nC++: void SetSizeWorld(const double size_World[3])\nSetSizeWorld(self, x_World:float, y_World:float, z_World:float)\n    -> None\nC++: void SetSizeWorld(double x_World, double y_World,\n    double z_World)\n\nLength of the ROI sides\n"},
  {"GetCenter", PyvtkMRMLMarkupsROINode_GetCenter, METH_VARARGS,
   "GetCenter(self, center:[float, float, float]) -> None\nC++: void GetCenter(double center[3])\nGetCenter(self) -> vtkVector3d\nC++: vtkVector3d GetCenter()\n\nCenter of the ROI\n"},
  {"GetCenterWorld", PyvtkMRMLMarkupsROINode_GetCenterWorld, METH_VARARGS,
   "GetCenterWorld(self, center:[float, float, float]) -> None\nC++: void GetCenterWorld(double center[3])\nGetCenterWorld(self) -> vtkVector3d\nC++: vtkVector3d GetCenterWorld()\n\nCenter of the ROI\n"},
  {"SetCenterWorld", PyvtkMRMLMarkupsROINode_SetCenterWorld, METH_VARARGS,
   "SetCenterWorld(self, center:(float, float, float)) -> None\nC++: void SetCenterWorld(const double center[3])\nSetCenterWorld(self, x:float, y:float, z:float) -> None\nC++: void SetCenterWorld(double x, double y, double z)\n\nCenter of the ROI\n"},
  {"SetCenter", PyvtkMRMLMarkupsROINode_SetCenter, METH_VARARGS,
   "SetCenter(self, center:(float, float, float)) -> None\nC++: void SetCenter(const double center[3])\nSetCenter(self, x:float, y:float, z:float) -> None\nC++: void SetCenter(double x, double y, double z)\n\nCenter of the ROI\n"},
  {"GetXAxisWorld", PyvtkMRMLMarkupsROINode_GetXAxisWorld, METH_VARARGS,
   "GetXAxisWorld(self, axis_World:[float, float, float]) -> None\nC++: void GetXAxisWorld(double axis_World[3])\n\nThe directional axis of the ROI that are defined by\nObjectToNodeMatrix.\n\\sa GetObjectToNodeMatrix()\n"},
  {"GetYAxisWorld", PyvtkMRMLMarkupsROINode_GetYAxisWorld, METH_VARARGS,
   "GetYAxisWorld(self, axis_World:[float, float, float]) -> None\nC++: void GetYAxisWorld(double axis_World[3])\n\nThe directional axis of the ROI that are defined by\nObjectToNodeMatrix.\n\\sa GetObjectToNodeMatrix()\n"},
  {"GetZAxisWorld", PyvtkMRMLMarkupsROINode_GetZAxisWorld, METH_VARARGS,
   "GetZAxisWorld(self, axis_World:[float, float, float]) -> None\nC++: void GetZAxisWorld(double axis_World[3])\n\nThe directional axis of the ROI that are defined by\nObjectToNodeMatrix.\n\\sa GetObjectToNodeMatrix()\n"},
  {"GetAxisWorld", PyvtkMRMLMarkupsROINode_GetAxisWorld, METH_VARARGS,
   "GetAxisWorld(self, axisIndex:int, axis_World:[float, float,\n    float]) -> None\nC++: void GetAxisWorld(int axisIndex, double axis_World[3])\n\nThe directional axis of the ROI that are defined by\nObjectToNodeMatrix.\n\\sa GetObjectToNodeMatrix()\n"},
  {"GetXAxis", PyvtkMRMLMarkupsROINode_GetXAxis, METH_VARARGS,
   "GetXAxis(self, axis_Node:[float, float, float]) -> None\nC++: void GetXAxis(double axis_Node[3])\n\nThe directional axis of the ROI that are defined by\nObjectToNodeMatrix.\n\\sa GetObjectToNodeMatrix()\n"},
  {"GetYAxis", PyvtkMRMLMarkupsROINode_GetYAxis, METH_VARARGS,
   "GetYAxis(self, axis_Node:[float, float, float]) -> None\nC++: void GetYAxis(double axis_Node[3])\n\nThe directional axis of the ROI that are defined by\nObjectToNodeMatrix.\n\\sa GetObjectToNodeMatrix()\n"},
  {"GetZAxis", PyvtkMRMLMarkupsROINode_GetZAxis, METH_VARARGS,
   "GetZAxis(self, axis_Node:[float, float, float]) -> None\nC++: void GetZAxis(double axis_Node[3])\n\nThe directional axis of the ROI that are defined by\nObjectToNodeMatrix.\n\\sa GetObjectToNodeMatrix()\n"},
  {"GetAxis", PyvtkMRMLMarkupsROINode_GetAxis, METH_VARARGS,
   "GetAxis(self, axisIndex:int, axis_Node:[float, float, float])\n    -> None\nC++: void GetAxis(int axisIndex, double axis_Node[3])\n\nThe directional axis of the ROI that are defined by\nObjectToNodeMatrix.\n\\sa GetObjectToNodeMatrix()\n"},
  {"GetObjectToNodeMatrix", PyvtkMRMLMarkupsROINode_GetObjectToNodeMatrix, METH_VARARGS,
   "GetObjectToNodeMatrix(self) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetObjectToNodeMatrix()\n\n4x4 matrix defining the object center and axis directions within\nthe node coordinate system.\n"},
  {"SetAndObserveObjectToNodeMatrix", PyvtkMRMLMarkupsROINode_SetAndObserveObjectToNodeMatrix, METH_VARARGS,
   "SetAndObserveObjectToNodeMatrix(self,\n    objectToNodeMatrix:vtkMatrix4x4) -> None\nC++: void SetAndObserveObjectToNodeMatrix(\n    vtkMatrix4x4 *objectToNodeMatrix)\n\n4x4 matrix defining the object center and axis directions within\nthe node coordinate system.\n"},
  {"GetObjectToWorldMatrix", PyvtkMRMLMarkupsROINode_GetObjectToWorldMatrix, METH_VARARGS,
   "GetObjectToWorldMatrix(self) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetObjectToWorldMatrix()\n\n4x4 matrix defining the object center and axis directions within\nthe world coordinate system. Changes made to the matrix will not\nbe applied.\n"},
  {"GetROIType", PyvtkMRMLMarkupsROINode_GetROIType, METH_VARARGS,
   "GetROIType(self) -> int\nC++: virtual int GetROIType()\n\nROIType represents the method that is used to calculate the size\nof the ROI. BOX ROI does not require control points to define a\nregion, while the size of a BOUNDING_BOX ROI will be defined by\nthe control points.\n"},
  {"SetROIType", PyvtkMRMLMarkupsROINode_SetROIType, METH_VARARGS,
   "SetROIType(self, roiType:int) -> None\nC++: void SetROIType(int roiType)\n\nROIType represents the method that is used to calculate the size\nof the ROI. BOX ROI does not require control points to define a\nregion, while the size of a BOUNDING_BOX ROI will be defined by\nthe control points.\n"},
  {"GetROITypeAsString", PyvtkMRMLMarkupsROINode_GetROITypeAsString, METH_VARARGS,
   "GetROITypeAsString(roiType:int) -> str\nC++: static const char *GetROITypeAsString(int roiType)\n\nROIType represents the method that is used to calculate the size\nof the ROI. BOX ROI does not require control points to define a\nregion, while the size of a BOUNDING_BOX ROI will be defined by\nthe control points.\n"},
  {"GetROITypeFromString", PyvtkMRMLMarkupsROINode_GetROITypeFromString, METH_VARARGS,
   "GetROITypeFromString(roiType:str) -> int\nC++: static int GetROITypeFromString(const char *roiType)\n\nROIType represents the method that is used to calculate the size\nof the ROI. BOX ROI does not require control points to define a\nregion, while the size of a BOUNDING_BOX ROI will be defined by\nthe control points.\n"},
  {"UpdateROIFromControlPoints", PyvtkMRMLMarkupsROINode_UpdateROIFromControlPoints, METH_VARARGS,
   "UpdateROIFromControlPoints(self) -> None\nC++: virtual void UpdateROIFromControlPoints()\n\nCalculate the ROI dimensions from the control points\n"},
  {"UpdateBoxROIFromControlPoints", PyvtkMRMLMarkupsROINode_UpdateBoxROIFromControlPoints, METH_VARARGS,
   "UpdateBoxROIFromControlPoints(self) -> None\nC++: virtual void UpdateBoxROIFromControlPoints()\n\nCalculate the ROI dimensions from the control points\n"},
  {"UpdateBoundingBoxROIFromControlPoints", PyvtkMRMLMarkupsROINode_UpdateBoundingBoxROIFromControlPoints, METH_VARARGS,
   "UpdateBoundingBoxROIFromControlPoints(self) -> None\nC++: virtual void UpdateBoundingBoxROIFromControlPoints()\n\nCalculate the ROI dimensions from the control points\n"},
  {"UpdateControlPointsFromROI", PyvtkMRMLMarkupsROINode_UpdateControlPointsFromROI, METH_VARARGS,
   "UpdateControlPointsFromROI(self) -> None\nC++: virtual void UpdateControlPointsFromROI()\n\nCalculate the position of control points from the ROI\n"},
  {"UpdateControlPointsFromBoundingBoxROI", PyvtkMRMLMarkupsROINode_UpdateControlPointsFromBoundingBoxROI, METH_VARARGS,
   "UpdateControlPointsFromBoundingBoxROI(self) -> None\nC++: virtual void UpdateControlPointsFromBoundingBoxROI()\n\nCalculate the position of control points from the ROI\n"},
  {"UpdateControlPointsFromBoxROI", PyvtkMRMLMarkupsROINode_UpdateControlPointsFromBoxROI, METH_VARARGS,
   "UpdateControlPointsFromBoxROI(self) -> None\nC++: virtual void UpdateControlPointsFromBoxROI()\n\nCalculate the position of control points from the ROI\n"},
  {"OnTransformNodeReferenceChanged", PyvtkMRMLMarkupsROINode_OnTransformNodeReferenceChanged, METH_VARARGS,
   "OnTransformNodeReferenceChanged(self,\n    transformNode:vtkMRMLTransformNode) -> None\nC++: void OnTransformNodeReferenceChanged(\n    vtkMRMLTransformNode *transformNode) override;\n\nReimplemented to recalculate InteractionHandleToWorld matrix when\nparent transform is changed.\n"},
  {"ProcessMRMLEvents", PyvtkMRMLMarkupsROINode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nAlternative method to propagate events generated in Display nodes\n"},
  {"UpdateInteractionHandleToWorldMatrix", PyvtkMRMLMarkupsROINode_UpdateInteractionHandleToWorldMatrix, METH_VARARGS,
   "UpdateInteractionHandleToWorldMatrix(self) -> None\nC++: void UpdateInteractionHandleToWorldMatrix() override;\n\nUpdate the InteractionHandleToWorldMatrix based on the\nObjectToNode and NodeToWorld transforms.\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLMarkupsROINode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {"CreateDefaultDisplayNodes", PyvtkMRMLMarkupsROINode_CreateDefaultDisplayNodes, METH_VARARGS,
   "CreateDefaultDisplayNodes(self) -> None\nC++: void CreateDefaultDisplayNodes() override;\n\nCreate default display node or nullptr if does not have one\n"},
  {"GetRASBounds", PyvtkMRMLMarkupsROINode_GetRASBounds, METH_VARARGS,
   "GetRASBounds(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void GetRASBounds(double bounds[6]) override;\n\nReimplemented to recalculate the axis-aligned bounds of the ROI.\nIf the ROI is rotated, this function will not reflect the\noriented bounds defined by the ROI. To get the planes that define\nthe oriented bounding box, use GetPlanes()/GetPlanesWorld().\nGetBounds/GetRASBounds will return the axis-aligned bounding box\nin node/world coordinates, while GetPlanes/GetPlanesWorld() will\nreturn the 6 planes that define the faces of the oriented\nbounding box.\n\\sa GetPlanes(), GetPlanesWorld()\n"},
  {"GetBounds", PyvtkMRMLMarkupsROINode_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nReimplemented to recalculate the axis-aligned bounds of the ROI.\nIf the ROI is rotated, this function will not reflect the\noriented bounds defined by the ROI. To get the planes that define\nthe oriented bounding box, use GetPlanes()/GetPlanesWorld().\nGetBounds/GetRASBounds will return the axis-aligned bounding box\nin node/world coordinates, while GetPlanes/GetPlanesWorld() will\nreturn the 6 planes that define the faces of the oriented\nbounding box.\n\\sa GetPlanes(), GetPlanesWorld()\n"},
  {"GetObjectBounds", PyvtkMRMLMarkupsROINode_GetObjectBounds, METH_VARARGS,
   "GetObjectBounds(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void GetObjectBounds(double bounds[6])\n\nGet ROI bounds in Object coordinate system. The difference\ncompared to GetBounds() is that the center of the ROI is the\norigin in the Object coordinate system.\n"},
  {"GetPlanes", PyvtkMRMLMarkupsROINode_GetPlanes, METH_VARARGS,
   "GetPlanes(self, planes:vtkPlanes) -> None\nC++: void GetPlanes(vtkPlanes *planes)\nGetPlanes(self, planes:vtkPlanes, insideOut:bool) -> None\nC++: void GetPlanes(vtkPlanes *planes, bool insideOut)\n\nReturns the planes that define each of the 6 faces of the ROI. If\nInsideOut property of the node is true the normals of the plane\nwill face inward, otherwise the plane normals face outward.\n\\param planes: Output planes object\n"},
  {"GetPlanesWorld", PyvtkMRMLMarkupsROINode_GetPlanesWorld, METH_VARARGS,
   "GetPlanesWorld(self, planes:vtkPlanes) -> None\nC++: void GetPlanesWorld(vtkPlanes *planes)\nGetPlanesWorld(self, planes:vtkPlanes, insideOut:bool) -> None\nC++: void GetPlanesWorld(vtkPlanes *planes, bool insideOut)\n\nReturns the planes that define each of the 6 faces of the ROI. If\nInsideOut property of the node is true the normals of the plane\nwill face inward, otherwise the plane normals face outward.\n\\param planes: Output planes object\n"},
  {"IsPointInROI", PyvtkMRMLMarkupsROINode_IsPointInROI, METH_VARARGS,
   "IsPointInROI(self, point_Node:[float, float, float]) -> bool\nC++: bool IsPointInROI(double point_Node[3])\n\nReturns true if the specified point is within the ROI.\n"},
  {"IsPointInROIWorld", PyvtkMRMLMarkupsROINode_IsPointInROIWorld, METH_VARARGS,
   "IsPointInROIWorld(self, point_World:[float, float, float]) -> bool\nC++: bool IsPointInROIWorld(double point_World[3])\n\nReturns true if the specified point is within the ROI.\n"},
  {"SetInsideOut", PyvtkMRMLMarkupsROINode_SetInsideOut, METH_VARARGS,
   "SetInsideOut(self, insideOut:bool) -> None\nC++: void SetInsideOut(bool insideOut)\n\nGet/Set the ROI inside out flag. Used for computing\nImplicitFunction and bounding planes. It may be also used for\nrendering the ROI differently (e.g., filling inside or outside).\n\\sa GetImplicitFunction, GetImplicitFunctionWorld, GetPlanes\n"},
  {"GetInsideOut", PyvtkMRMLMarkupsROINode_GetInsideOut, METH_VARARGS,
   "GetInsideOut(self) -> bool\nC++: virtual bool GetInsideOut()\n\nGet/Set the ROI inside out flag. Used for computing\nImplicitFunction and bounding planes. It may be also used for\nrendering the ROI differently (e.g., filling inside or outside).\n\\sa GetImplicitFunction, GetImplicitFunctionWorld, GetPlanes\n"},
  {"InsideOutOn", PyvtkMRMLMarkupsROINode_InsideOutOn, METH_VARARGS,
   "InsideOutOn(self) -> None\nC++: virtual void InsideOutOn()\n\nGet/Set the ROI inside out flag. Used for computing\nImplicitFunction and bounding planes. It may be also used for\nrendering the ROI differently (e.g., filling inside or outside).\n\\sa GetImplicitFunction, GetImplicitFunctionWorld, GetPlanes\n"},
  {"InsideOutOff", PyvtkMRMLMarkupsROINode_InsideOutOff, METH_VARARGS,
   "InsideOutOff(self) -> None\nC++: virtual void InsideOutOff()\n\nGet/Set the ROI inside out flag. Used for computing\nImplicitFunction and bounding planes. It may be also used for\nrendering the ROI differently (e.g., filling inside or outside).\n\\sa GetImplicitFunction, GetImplicitFunctionWorld, GetPlanes\n"},
  {"GetImplicitFunction", PyvtkMRMLMarkupsROINode_GetImplicitFunction, METH_VARARGS,
   "GetImplicitFunction(self) -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetImplicitFunction()\n\nGet the implicit function that represents the ROI in node\ncoordinates.\n"},
  {"GetImplicitFunctionWorld", PyvtkMRMLMarkupsROINode_GetImplicitFunctionWorld, METH_VARARGS,
   "GetImplicitFunctionWorld(self) -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetImplicitFunctionWorld()\n\nGet the implicit function that represents the ROI in world\ncoordinates.\n"},
  {"CreateROIBoxPolyDataWorld", PyvtkMRMLMarkupsROINode_CreateROIBoxPolyDataWorld, METH_VARARGS,
   "CreateROIBoxPolyDataWorld(self) -> vtkPolyData\nC++: vtkPolyData *CreateROIBoxPolyDataWorld()\n\nCreate ROI box as surface mesh in the world coordinate system as\na new vtkPolyData object. Only in C++: The caller must take\nownership of the returned object.\n"},
  {"SetXYZ", PyvtkMRMLMarkupsROINode_SetXYZ, METH_VARARGS,
   "SetXYZ(self, center:[float, float, float]) -> int\nC++: int SetXYZ(double center[3])\nSetXYZ(self, x:float, y:float, z:float) -> int\nC++: int SetXYZ(double x, double y, double z)\n\nLegacy method from vtkMRMLAnnotationROINode Get/Set for ROI\nPosition in RAS coordinates Note: The ROI Position is the center\nof the ROI Old API: void SetXYZ(double X, double Y, double Z);\nvoid SetXYZ(double* XYZ); vtkGetVectorMacro(XYZ,double,3);\ndouble* GetXYZ() {return this->GetControlPointCoordinates(0);}\n\\sa SetCenter(), GetCenter()\n"},
  {"GetXYZ", PyvtkMRMLMarkupsROINode_GetXYZ, METH_VARARGS,
   "GetXYZ(self, center:[float, float, float]) -> bool\nC++: bool GetXYZ(double center[3])\n\nLegacy method from vtkMRMLAnnotationROINode Get/Set for ROI\nPosition in RAS coordinates Note: The ROI Position is the center\nof the ROI Old API: void SetXYZ(double X, double Y, double Z);\nvoid SetXYZ(double* XYZ); vtkGetVectorMacro(XYZ,double,3);\ndouble* GetXYZ() {return this->GetControlPointCoordinates(0);}\n\\sa SetCenter(), GetCenter()\n"},
  {"SetRadiusXYZ", PyvtkMRMLMarkupsROINode_SetRadiusXYZ, METH_VARARGS,
   "SetRadiusXYZ(self, radiusXYZ:[float, float, float]) -> None\nC++: void SetRadiusXYZ(double radiusXYZ[3])\nSetRadiusXYZ(self, x:float, y:float, z:float) -> None\nC++: void SetRadiusXYZ(double x, double y, double z)\n\nLegacy method from vtkMRMLAnnotationROINode Get/Set for radius of\nthe ROI in RAS coordinates Old API: void SetRadiusXYZ(double\nRadiusX, double RadiusY, double RadiusZ); void\nSetRadiusXYZ(double* RadiusXYZ);\nvtkGetVectorMacro(RadiusXYZ,double,3);\n\\sa SetSize(), GetSize()\n"},
  {"GetRadiusXYZ", PyvtkMRMLMarkupsROINode_GetRadiusXYZ, METH_VARARGS,
   "GetRadiusXYZ(self, radiusXYZ:[float, float, float]) -> None\nC++: void GetRadiusXYZ(double radiusXYZ[3])\n\nLegacy method from vtkMRMLAnnotationROINode Get/Set for radius of\nthe ROI in RAS coordinates Old API: void SetRadiusXYZ(double\nRadiusX, double RadiusY, double RadiusZ); void\nSetRadiusXYZ(double* RadiusXYZ);\nvtkGetVectorMacro(RadiusXYZ,double,3);\n\\sa SetSize(), GetSize()\n"},
  {"GetTransformedPlanes", PyvtkMRMLMarkupsROINode_GetTransformedPlanes, METH_VARARGS,
   "GetTransformedPlanes(self, planes:vtkPlanes, insideOut:bool=False)\n     -> None\nC++: void GetTransformedPlanes(vtkPlanes *planes,\n    bool insideOut=false)\n\nLegacy method from vtkMRMLAnnotationROINode\n\\sa GetPlanes(), GetPlanesWorld(),\n    vtkMRMLAnnotationROINode::GetTransformedPlanes()\n"},
  {"GenerateOrthogonalMatrix", PyvtkMRMLMarkupsROINode_GenerateOrthogonalMatrix, METH_VARARGS,
   "GenerateOrthogonalMatrix(inputMatrix:vtkMatrix4x4,\n    outputMatrix:vtkMatrix4x4, transform:vtkAbstractTransform=...,\n     applyScaling:bool=True) -> None\nC++: static void GenerateOrthogonalMatrix(\n    vtkMatrix4x4 *inputMatrix, vtkMatrix4x4 *outputMatrix,\n    vtkAbstractTransform *transform=nullptr,\n    bool applyScaling=true)\nGenerateOrthogonalMatrix(xAxis:[float, float, float],\n    yAxis:[float, float, float], zAxis:[float, float, float],\n    origin:[float, float, float], outputMatrix:vtkMatrix4x4,\n    transform:vtkAbstractTransform=..., applyScaling:bool=True)\n    -> None\nC++: static void GenerateOrthogonalMatrix(double xAxis[3],\n    double yAxis[3], double zAxis[3], double origin[3],\n    vtkMatrix4x4 *outputMatrix,\n    vtkAbstractTransform *transform=nullptr,\n    bool applyScaling=true)\n\nHelper method for generating an orthogonal right handed matrix\nfrom axes. Transform can optionally be specified to apply an\nadditional transform on the vectors before generating the matrix.\n"},
  {"WriteCLI", PyvtkMRMLMarkupsROINode_WriteCLI, METH_VARARGS,
   "WriteCLI(self, commandLine:[str, ...], prefix:str,\n    coordinateSystem:int=..., multipleFlag:int=1) -> None\nC++: void WriteCLI(std::vector<std::string> &commandLine,\n    std::string prefix,\n    int coordinateSystem=vtkMRMLStorageNode::CoordinateSystemRAS,\n    int multipleFlag=1) override;\n\nWrite this node's information to a vector of strings for passing\nto a CLI, precede each datum with the prefix if not an empty\nstring coordinateSystemFlag =\nvtkMRMLStorageNode::CoordinateSystemRAS or\nvtkMRMLStorageNode::CoordinateSystemLPS multipleFlag = 1 for the\nwhole list, 1 for the first selected control point\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMarkupsROINode_Doc =
  "vtkMRMLMarkupsROINode - MRML node to represent an ROI markup\n\n"
  "Superclass: vtkMRMLMarkupsNode\n\n"
  "Coordinate systems used:\n"
  "- Object: Coordinate system that the ROI. Origin of the coordinate\n"
  "  system is in the center of the ROI box. Axes of the coordinate\n"
  "  system are aligned with the axes of the ROI box.\n"
  "- Node: Coordinate system of the markup node. Coordinates of the\n"
  "  control points are stored in this coordinate system.\n"
  "- World: Patient coordinate system (RAS). Transform between Node and\n"
  "  World coordinate systems are defined by the parent transform of the\n"
  "node.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsROINode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsROINode", // tp_name
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
  PyvtkMRMLMarkupsROINode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLMarkupsROINode_StaticNew()
{
  return vtkMRMLMarkupsROINode::New();
}

PyObject *PyvtkMRMLMarkupsROINode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMarkupsROINode_Type, PyvtkMRMLMarkupsROINode_Methods,
    "vtkMRMLMarkupsROINode",
 &PyvtkMRMLMarkupsROINode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLMarkupsNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "ROITypeBox", vtkMRMLMarkupsROINode::ROITypeBox },
        { "ROITypeBoundingBox", vtkMRMLMarkupsROINode::ROITypeBoundingBox },
        { "ROIType_Last", vtkMRMLMarkupsROINode::ROIType_Last },
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

void PyVTKAddFile_vtkMRMLMarkupsROINode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLMarkupsROINode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMarkupsROINode", o) != 0)
  {
    Py_DECREF(o);
  }

}

