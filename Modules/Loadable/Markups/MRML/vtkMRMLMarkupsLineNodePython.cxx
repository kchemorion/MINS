// python wrapper for vtkMRMLMarkupsLineNode
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
#include "vtkMRMLMarkupsLineNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLMarkupsLineNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLMarkupsLineNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLMarkupsNode_ClassNew
extern "C" { PyObject *PyvtkMRMLMarkupsNode_ClassNew(); }
#define DECLARED_PyvtkMRMLMarkupsNode_ClassNew
#endif

static PyObject *
PyvtkMRMLMarkupsLineNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsLineNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMarkupsLineNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMarkupsLineNode *tempr = vtkMRMLMarkupsLineNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsLineNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMarkupsLineNode::NewInstance());

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
PyvtkMRMLMarkupsLineNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMarkupsLineNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMarkupsLineNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_GetIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIcon() :
      op->vtkMRMLMarkupsLineNode::GetIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_GetAddIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAddIcon() :
      op->vtkMRMLMarkupsLineNode::GetAddIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_GetPlaceAddIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceAddIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPlaceAddIcon() :
      op->vtkMRMLMarkupsLineNode::GetPlaceAddIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLMarkupsLineNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLMarkupsLineNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_GetMarkupType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetMarkupType() :
      op->vtkMRMLMarkupsLineNode::GetMarkupType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_GetTypeDisplayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeDisplayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTypeDisplayName() :
      op->vtkMRMLMarkupsLineNode::GetTypeDisplayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_GetDefaultNodeNamePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNodeNamePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultNodeNamePrefix() :
      op->vtkMRMLMarkupsLineNode::GetDefaultNodeNamePrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLMarkupsLineNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_GetLineLengthWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineLengthWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineLengthWorld() :
      op->vtkMRMLMarkupsLineNode::GetLineLengthWorld());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_GetLineStartPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetLineStartPosition(temp0) :
      op->vtkMRMLMarkupsLineNode::GetLineStartPosition(temp0));

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
PyvtkMRMLMarkupsLineNode_GetLineStartPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetLineStartPosition() :
      op->vtkMRMLMarkupsLineNode::GetLineStartPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsLineNode_GetLineStartPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsLineNode_GetLineStartPosition_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsLineNode_GetLineStartPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLineStartPosition");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_GetLineEndPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineEndPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetLineEndPosition(temp0) :
      op->vtkMRMLMarkupsLineNode::GetLineEndPosition(temp0));

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
PyvtkMRMLMarkupsLineNode_GetLineEndPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineEndPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetLineEndPosition() :
      op->vtkMRMLMarkupsLineNode::GetLineEndPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsLineNode_GetLineEndPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsLineNode_GetLineEndPosition_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsLineNode_GetLineEndPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLineEndPosition");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_GetLineStartPositionWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStartPositionWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetLineStartPositionWorld(temp0) :
      op->vtkMRMLMarkupsLineNode::GetLineStartPositionWorld(temp0));

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
PyvtkMRMLMarkupsLineNode_GetLineStartPositionWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStartPositionWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetLineStartPositionWorld() :
      op->vtkMRMLMarkupsLineNode::GetLineStartPositionWorld());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsLineNode_GetLineStartPositionWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsLineNode_GetLineStartPositionWorld_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsLineNode_GetLineStartPositionWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLineStartPositionWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_GetLineEndPositionWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineEndPositionWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetLineEndPositionWorld(temp0) :
      op->vtkMRMLMarkupsLineNode::GetLineEndPositionWorld(temp0));

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
PyvtkMRMLMarkupsLineNode_GetLineEndPositionWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineEndPositionWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetLineEndPositionWorld() :
      op->vtkMRMLMarkupsLineNode::GetLineEndPositionWorld());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsLineNode_GetLineEndPositionWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsLineNode_GetLineEndPositionWorld_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsLineNode_GetLineEndPositionWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLineEndPositionWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_SetLineStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

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
      op->SetLineStartPosition(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsLineNode::SetLineStartPosition(temp0);
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
PyvtkMRMLMarkupsLineNode_SetLineEndPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineEndPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

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
      op->SetLineEndPosition(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsLineNode::SetLineEndPosition(temp0);
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
PyvtkMRMLMarkupsLineNode_SetLineStartPositionWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStartPositionWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

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
      op->SetLineStartPositionWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsLineNode::SetLineStartPositionWorld(temp0);
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
PyvtkMRMLMarkupsLineNode_SetLineEndPositionWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineEndPositionWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

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
      op->SetLineEndPositionWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsLineNode::SetLineEndPositionWorld(temp0);
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
PyvtkMRMLMarkupsLineNode_GetPosition1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetPosition1(temp0) :
      op->vtkMRMLMarkupsLineNode::GetPosition1(temp0));

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
PyvtkMRMLMarkupsLineNode_GetPosition1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition1() :
      op->vtkMRMLMarkupsLineNode::GetPosition1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsLineNode_GetPosition1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsLineNode_GetPosition1_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsLineNode_GetPosition1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition1");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_GetPosition2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetPosition2(temp0) :
      op->vtkMRMLMarkupsLineNode::GetPosition2(temp0));

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
PyvtkMRMLMarkupsLineNode_GetPosition2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition2() :
      op->vtkMRMLMarkupsLineNode::GetPosition2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsLineNode_GetPosition2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsLineNode_GetPosition2_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsLineNode_GetPosition2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition2");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_GetPositionWorldCoordinates1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionWorldCoordinates1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetPositionWorldCoordinates1(temp0) :
      op->vtkMRMLMarkupsLineNode::GetPositionWorldCoordinates1(temp0));

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
PyvtkMRMLMarkupsLineNode_GetPositionWorldCoordinates2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionWorldCoordinates2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetPositionWorldCoordinates2(temp0) :
      op->vtkMRMLMarkupsLineNode::GetPositionWorldCoordinates2(temp0));

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
PyvtkMRMLMarkupsLineNode_SetPosition1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->SetPosition1(temp0) :
      op->vtkMRMLMarkupsLineNode::SetPosition1(temp0));

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
PyvtkMRMLMarkupsLineNode_SetPosition1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->SetPosition1(temp0, temp1, temp2) :
      op->vtkMRMLMarkupsLineNode::SetPosition1(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsLineNode_SetPosition1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsLineNode_SetPosition1_s1(self, args);
    case 3:
      return PyvtkMRMLMarkupsLineNode_SetPosition1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition1");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_SetPosition2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->SetPosition2(temp0) :
      op->vtkMRMLMarkupsLineNode::SetPosition2(temp0));

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
PyvtkMRMLMarkupsLineNode_SetPosition2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->SetPosition2(temp0, temp1, temp2) :
      op->vtkMRMLMarkupsLineNode::SetPosition2(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsLineNode_SetPosition2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsLineNode_SetPosition2_s1(self, args);
    case 3:
      return PyvtkMRMLMarkupsLineNode_SetPosition2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition2");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsLineNode_SetPositionWorldCoordinates1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionWorldCoordinates1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->SetPositionWorldCoordinates1(temp0) :
      op->vtkMRMLMarkupsLineNode::SetPositionWorldCoordinates1(temp0));

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
PyvtkMRMLMarkupsLineNode_SetPositionWorldCoordinates2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionWorldCoordinates2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsLineNode *op = static_cast<vtkMRMLMarkupsLineNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->SetPositionWorldCoordinates2(temp0) :
      op->vtkMRMLMarkupsLineNode::SetPositionWorldCoordinates2(temp0));

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

static PyMethodDef PyvtkMRMLMarkupsLineNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMarkupsLineNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMarkupsLineNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMarkupsLineNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLMarkupsLineNode\nC++: static vtkMRMLMarkupsLineNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMarkupsLineNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMarkupsLineNode\nC++: vtkMRMLMarkupsLineNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMarkupsLineNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMarkupsLineNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetIcon", PyvtkMRMLMarkupsLineNode_GetIcon, METH_VARARGS,
   "GetIcon(self) -> str\nC++: const char *GetIcon() override;\n\n"},
  {"GetAddIcon", PyvtkMRMLMarkupsLineNode_GetAddIcon, METH_VARARGS,
   "GetAddIcon(self) -> str\nC++: const char *GetAddIcon() override;\n\n"},
  {"GetPlaceAddIcon", PyvtkMRMLMarkupsLineNode_GetPlaceAddIcon, METH_VARARGS,
   "GetPlaceAddIcon(self) -> str\nC++: const char *GetPlaceAddIcon() override;\n\n"},
  {"CreateNodeInstance", PyvtkMRMLMarkupsLineNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"GetNodeTagName", PyvtkMRMLMarkupsLineNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetMarkupType", PyvtkMRMLMarkupsLineNode_GetMarkupType, METH_VARARGS,
   "GetMarkupType(self) -> str\nC++: const char *GetMarkupType() override;\n\nGet markup type internal name\n"},
  {"GetTypeDisplayName", PyvtkMRMLMarkupsLineNode_GetTypeDisplayName, METH_VARARGS,
   "GetTypeDisplayName(self) -> str\nC++: const char *GetTypeDisplayName() override;\n\nGet node type display name (like \"Closed Curve\", \"Markup\", etc).\n\note Subclasses should override this method to provide a more\nappropriate and translatable name.\n"},
  {"GetDefaultNodeNamePrefix", PyvtkMRMLMarkupsLineNode_GetDefaultNodeNamePrefix, METH_VARARGS,
   "GetDefaultNodeNamePrefix(self) -> str\nC++: const char *GetDefaultNodeNamePrefix() override;\n\nGet markup short name\n"},
  {"HasCopyContent", PyvtkMRMLMarkupsLineNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"GetLineLengthWorld", PyvtkMRMLMarkupsLineNode_GetLineLengthWorld, METH_VARARGS,
   "GetLineLengthWorld(self) -> float\nC++: virtual double GetLineLengthWorld()\n\nReturn line length (distance between the two line endpoints) in\nworld coordinate system.\n"},
  {"GetLineStartPosition", PyvtkMRMLMarkupsLineNode_GetLineStartPosition, METH_VARARGS,
   "GetLineStartPosition(self, position:[float, float, float]) -> bool\nC++: bool GetLineStartPosition(double position[3])\nGetLineStartPosition(self) -> vtkVector3d\nC++: vtkVector3d GetLineStartPosition()\n\nConvenience method to get the line start or end position (control\npoint indices 0 and 1). Returns true if the point position is\ndefined.\n"},
  {"GetLineEndPosition", PyvtkMRMLMarkupsLineNode_GetLineEndPosition, METH_VARARGS,
   "GetLineEndPosition(self, position:[float, float, float]) -> bool\nC++: bool GetLineEndPosition(double position[3])\nGetLineEndPosition(self) -> vtkVector3d\nC++: vtkVector3d GetLineEndPosition()\n\nConvenience method to get the line start or end position (control\npoint indices 0 and 1). Returns true if the point position is\ndefined.\n"},
  {"GetLineStartPositionWorld", PyvtkMRMLMarkupsLineNode_GetLineStartPositionWorld, METH_VARARGS,
   "GetLineStartPositionWorld(self, position:[float, float, float])\n    -> bool\nC++: bool GetLineStartPositionWorld(double position[3])\nGetLineStartPositionWorld(self) -> vtkVector3d\nC++: vtkVector3d GetLineStartPositionWorld()\n\nConvenience method to get the line start or end position (control\npoint indices 0 and 1). Returns true if the point position is\ndefined.\n"},
  {"GetLineEndPositionWorld", PyvtkMRMLMarkupsLineNode_GetLineEndPositionWorld, METH_VARARGS,
   "GetLineEndPositionWorld(self, position:[float, float, float])\n    -> bool\nC++: bool GetLineEndPositionWorld(double position[3])\nGetLineEndPositionWorld(self) -> vtkVector3d\nC++: vtkVector3d GetLineEndPositionWorld()\n\nConvenience method to get the line start or end position (control\npoint indices 0 and 1). Returns true if the point position is\ndefined.\n"},
  {"SetLineStartPosition", PyvtkMRMLMarkupsLineNode_SetLineStartPosition, METH_VARARGS,
   "SetLineStartPosition(self, position:[float, float, float]) -> None\nC++: void SetLineStartPosition(double position[3])\n\nConvenience method to get the line start or end position (control\npoint indices 0 and 1).\n"},
  {"SetLineEndPosition", PyvtkMRMLMarkupsLineNode_SetLineEndPosition, METH_VARARGS,
   "SetLineEndPosition(self, position:[float, float, float]) -> None\nC++: void SetLineEndPosition(double position[3])\n\nConvenience method to get the line start or end position (control\npoint indices 0 and 1).\n"},
  {"SetLineStartPositionWorld", PyvtkMRMLMarkupsLineNode_SetLineStartPositionWorld, METH_VARARGS,
   "SetLineStartPositionWorld(self, position:[float, float, float])\n    -> None\nC++: void SetLineStartPositionWorld(double position[3])\n\nConvenience method to get the line start or end position (control\npoint indices 0 and 1).\n"},
  {"SetLineEndPositionWorld", PyvtkMRMLMarkupsLineNode_SetLineEndPositionWorld, METH_VARARGS,
   "SetLineEndPositionWorld(self, position:[float, float, float])\n    -> None\nC++: void SetLineEndPositionWorld(double position[3])\n\nConvenience method to get the line start or end position (control\npoint indices 0 and 1).\n"},
  {"GetPosition1", PyvtkMRMLMarkupsLineNode_GetPosition1, METH_VARARGS,
   "GetPosition1(self, position:[float, float, float]) -> bool\nC++: bool GetPosition1(double position[3])\nGetPosition1(self) -> Pointer\nC++: double *GetPosition1()\n\nThis method is deprecated (it was added for backward\ncompatibility with vtkMRMLAnnotationRulerNode and will be removed\nin the future). Use GetLineStartPosition/GetLineEndPosition\nmethod instead. Get line start/end point in local coordinate\nsystem. Returns true if the point position is defined.\n"},
  {"GetPosition2", PyvtkMRMLMarkupsLineNode_GetPosition2, METH_VARARGS,
   "GetPosition2(self, position:[float, float, float]) -> bool\nC++: bool GetPosition2(double position[3])\nGetPosition2(self) -> Pointer\nC++: double *GetPosition2()\n\nThis method is deprecated (it was added for backward\ncompatibility with vtkMRMLAnnotationRulerNode and will be removed\nin the future). Use GetLineStartPosition/GetLineEndPosition\nmethod instead. Get line start/end point in local coordinate\nsystem. Returns true if the point position is defined.\n"},
  {"GetPositionWorldCoordinates1", PyvtkMRMLMarkupsLineNode_GetPositionWorldCoordinates1, METH_VARARGS,
   "GetPositionWorldCoordinates1(self, position:[float, float, float])\n     -> bool\nC++: bool GetPositionWorldCoordinates1(double position[3])\n\nThis method is deprecated (it was added for backward\ncompatibility with vtkMRMLAnnotationRulerNode and will be removed\nin the future). Use\nGetLineStartPositionWorld/GetLineEndPositionWorld method instead.\nGet line start/end point in world coordinate system. Returns true\nif the point position is defined.\n"},
  {"GetPositionWorldCoordinates2", PyvtkMRMLMarkupsLineNode_GetPositionWorldCoordinates2, METH_VARARGS,
   "GetPositionWorldCoordinates2(self, position:[float, float, float])\n     -> bool\nC++: bool GetPositionWorldCoordinates2(double position[3])\n\nThis method is deprecated (it was added for backward\ncompatibility with vtkMRMLAnnotationRulerNode and will be removed\nin the future). Use\nGetLineStartPositionWorld/GetLineEndPositionWorld method instead.\nGet line start/end point in world coordinate system. Returns true\nif the point position is defined.\n"},
  {"SetPosition1", PyvtkMRMLMarkupsLineNode_SetPosition1, METH_VARARGS,
   "SetPosition1(self, newControl:[float, float, float]) -> bool\nC++: bool SetPosition1(double newControl[3])\nSetPosition1(self, nC1:float, nC2:float, nC3:float) -> bool\nC++: bool SetPosition1(double nC1, double nC2, double nC3)\n\nThis method is deprecated (it was added for backward\ncompatibility with vtkMRMLAnnotationRulerNode and will be removed\nin the future). Use SetLineStartPosition/SetLineEndPosition\nmethod instead. Set line start/end point in local coordinate\nsystem. Returns true if the operation is successful.\n"},
  {"SetPosition2", PyvtkMRMLMarkupsLineNode_SetPosition2, METH_VARARGS,
   "SetPosition2(self, newControl:[float, float, float]) -> bool\nC++: bool SetPosition2(double newControl[3])\nSetPosition2(self, nC1:float, nC2:float, nC3:float) -> bool\nC++: bool SetPosition2(double nC1, double nC2, double nC3)\n\nThis method is deprecated (it was added for backward\ncompatibility with vtkMRMLAnnotationRulerNode and will be removed\nin the future). Use SetLineStartPosition/SetLineEndPosition\nmethod instead. Set line start/end point in local coordinate\nsystem. Returns true if the operation is successful.\n"},
  {"SetPositionWorldCoordinates1", PyvtkMRMLMarkupsLineNode_SetPositionWorldCoordinates1, METH_VARARGS,
   "SetPositionWorldCoordinates1(self, newControl:[float, float,\n    float]) -> bool\nC++: bool SetPositionWorldCoordinates1(double newControl[3])\n\nThis method is deprecated (it was added for backward\ncompatibility with vtkMRMLAnnotationRulerNode and will be removed\nin the future). Use\nSetLineStartPositionWorld/SetLineEndPositionWorld method instead.\nSet line start/end point in world coordinate system. Returns true\nif the operation is successful.\n"},
  {"SetPositionWorldCoordinates2", PyvtkMRMLMarkupsLineNode_SetPositionWorldCoordinates2, METH_VARARGS,
   "SetPositionWorldCoordinates2(self, newControl:[float, float,\n    float]) -> bool\nC++: bool SetPositionWorldCoordinates2(double newControl[3])\n\nThis method is deprecated (it was added for backward\ncompatibility with vtkMRMLAnnotationRulerNode and will be removed\nin the future). Use\nSetLineStartPositionWorld/SetLineEndPositionWorld method instead.\nSet line start/end point in world coordinate system. Returns true\nif the operation is successful.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMarkupsLineNode_Doc =
  "vtkMRMLMarkupsLineNode - MRML node to represent a line markup\n\n"
  "Superclass: vtkMRMLMarkupsNode\n\n"
  "Line Markups nodes contain two control points. Visualization\n"
  "parameters are set in the vtkMRMLMarkupsDisplayNode class.\n\n"
  "Markups is intended to be used for manual marking/editing of point\n"
  "positions.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsLineNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsLineNode", // tp_name
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
  PyvtkMRMLMarkupsLineNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLMarkupsLineNode_StaticNew()
{
  return vtkMRMLMarkupsLineNode::New();
}

PyObject *PyvtkMRMLMarkupsLineNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMarkupsLineNode_Type, PyvtkMRMLMarkupsLineNode_Methods,
    "vtkMRMLMarkupsLineNode",
 &PyvtkMRMLMarkupsLineNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLMarkupsNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLMarkupsLineNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLMarkupsLineNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMarkupsLineNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

