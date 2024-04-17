// python wrapper for vtkMRMLVolumeHeaderlessStorageNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLVolumeHeaderlessStorageNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLVolumeHeaderlessStorageNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLVolumeHeaderlessStorageNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLStorageNode_ClassNew
extern "C" { PyObject *PyvtkMRMLStorageNode_ClassNew(); }
#define DECLARED_PyvtkMRMLStorageNode_ClassNew
#endif

static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLVolumeHeaderlessStorageNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLVolumeHeaderlessStorageNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLVolumeHeaderlessStorageNode *tempr = vtkMRMLVolumeHeaderlessStorageNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumeHeaderlessStorageNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLVolumeHeaderlessStorageNode::NewInstance());

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
PyvtkMRMLVolumeHeaderlessStorageNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLVolumeHeaderlessStorageNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLVolumeHeaderlessStorageNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLVolumeHeaderlessStorageNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

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
      op->vtkMRMLVolumeHeaderlessStorageNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLVolumeHeaderlessStorageNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_GetFileScanOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileScanOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileScanOrder() :
      op->vtkMRMLVolumeHeaderlessStorageNode::GetFileScanOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScanOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileScanOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileScanOrder(temp0);
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileScanOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_GetFileDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetFileDimensions() :
      op->vtkMRMLVolumeHeaderlessStorageNode::GetFileDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetFileDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetFileDimensions(temp0);
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLVolumeHeaderlessStorageNode_SetFileDimensions_s1(self, args);
    case 1:
      return PyvtkMRMLVolumeHeaderlessStorageNode_SetFileDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFileDimensions");
  return nullptr;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_GetFileSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetFileSpacing() :
      op->vtkMRMLVolumeHeaderlessStorageNode::GetFileSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

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
      op->SetFileSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetFileSpacing(temp0);
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLVolumeHeaderlessStorageNode_SetFileSpacing_s1(self, args);
    case 1:
      return PyvtkMRMLVolumeHeaderlessStorageNode_SetFileSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFileSpacing");
  return nullptr;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileScalarType(temp0);
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_GetFileScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileScalarType() :
      op->vtkMRMLVolumeHeaderlessStorageNode::GetFileScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileScalarTypeToChar();
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileScalarTypeToChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileScalarTypeToShort();
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileScalarTypeToInt();
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileScalarTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileScalarTypeToUnsignedInt();
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileScalarTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileScalarTypeToLong();
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileScalarTypeToLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileScalarTypeToUnsignedLong();
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileScalarTypeToUnsignedLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileScalarTypeToFloat();
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileScalarTypeToDouble();
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_GetFileScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileScalarTypeAsString() :
      op->vtkMRMLVolumeHeaderlessStorageNode::GetFileScalarTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileScalarTypeAsString(temp0);
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileScalarTypeAsString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_GetFileNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileNumberOfScalarComponents() :
      op->vtkMRMLVolumeHeaderlessStorageNode::GetFileNumberOfScalarComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileNumberOfScalarComponents(temp0);
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileNumberOfScalarComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_GetFileLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileLittleEndian() :
      op->vtkMRMLVolumeHeaderlessStorageNode::GetFileLittleEndian());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetFileLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileLittleEndian(temp0);
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetFileLittleEndian(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_FileLittleEndianOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FileLittleEndianOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FileLittleEndianOn();
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::FileLittleEndianOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_FileLittleEndianOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FileLittleEndianOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FileLittleEndianOff();
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::FileLittleEndianOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_GetCenterImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCenterImage() :
      op->vtkMRMLVolumeHeaderlessStorageNode::GetCenterImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_SetCenterImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenterImage(temp0);
    }
    else
    {
      op->vtkMRMLVolumeHeaderlessStorageNode::SetCenterImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_CanReadInReferenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadInReferenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanReadInReferenceNode(temp0) :
      op->vtkMRMLVolumeHeaderlessStorageNode::CanReadInReferenceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeHeaderlessStorageNode_CanWriteFromReferenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanWriteFromReferenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeHeaderlessStorageNode *op = static_cast<vtkMRMLVolumeHeaderlessStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanWriteFromReferenceNode(temp0) :
      op->vtkMRMLVolumeHeaderlessStorageNode::CanWriteFromReferenceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLVolumeHeaderlessStorageNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLVolumeHeaderlessStorageNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLVolumeHeaderlessStorageNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLVolumeHeaderlessStorageNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLVolumeHeaderlessStorageNode\nC++: static vtkMRMLVolumeHeaderlessStorageNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLVolumeHeaderlessStorageNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLVolumeHeaderlessStorageNode\nC++: vtkMRMLVolumeHeaderlessStorageNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLVolumeHeaderlessStorageNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLVolumeHeaderlessStorageNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLVolumeHeaderlessStorageNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"Copy", PyvtkMRMLVolumeHeaderlessStorageNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLVolumeHeaderlessStorageNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Storage, Model)\n"},
  {"GetFileScanOrder", PyvtkMRMLVolumeHeaderlessStorageNode_GetFileScanOrder, METH_VARARGS,
   "GetFileScanOrder(self) -> str\nC++: virtual char *GetFileScanOrder()\n\nScan order in the file\n"},
  {"SetFileScanOrder", PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScanOrder, METH_VARARGS,
   "SetFileScanOrder(self, _arg:str) -> None\nC++: virtual void SetFileScanOrder(const char *_arg)\n\n"},
  {"GetFileDimensions", PyvtkMRMLVolumeHeaderlessStorageNode_GetFileDimensions, METH_VARARGS,
   "GetFileDimensions(self) -> (int, int, int)\nC++: virtual int *GetFileDimensions()\n\nTwo numbers: the number of columns and rows of pixels in each\nimage\n"},
  {"SetFileDimensions", PyvtkMRMLVolumeHeaderlessStorageNode_SetFileDimensions, METH_VARARGS,
   "SetFileDimensions(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetFileDimensions(int _arg1, int _arg2,\n    int _arg3)\nSetFileDimensions(self, _arg:(int, int, int)) -> None\nC++: virtual void SetFileDimensions(const int _arg[3])\n\n"},
  {"GetFileSpacing", PyvtkMRMLVolumeHeaderlessStorageNode_GetFileSpacing, METH_VARARGS,
   "GetFileSpacing(self) -> (float, float, float)\nC++: virtual double *GetFileSpacing()\n\nThree numbers for the dimensions of each voxel, in millimeters\n"},
  {"SetFileSpacing", PyvtkMRMLVolumeHeaderlessStorageNode_SetFileSpacing, METH_VARARGS,
   "SetFileSpacing(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetFileSpacing(double _arg1, double _arg2,\n    double _arg3)\nSetFileSpacing(self, _arg:(float, float, float)) -> None\nC++: virtual void SetFileSpacing(const double _arg[3])\n\n"},
  {"SetFileScalarType", PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarType, METH_VARARGS,
   "SetFileScalarType(self, _arg:int) -> None\nC++: virtual void SetFileScalarType(int _arg)\n\nThe type of data in the file. One of: Char, UnsignedChar, Short,\nUnsignedShort, Int, UnsignedInt, Long, UnsignedLong, Float,\nDouble\n"},
  {"GetFileScalarType", PyvtkMRMLVolumeHeaderlessStorageNode_GetFileScalarType, METH_VARARGS,
   "GetFileScalarType(self) -> int\nC++: virtual int GetFileScalarType()\n\n"},
  {"SetFileScalarTypeToUnsignedChar", PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToUnsignedChar, METH_VARARGS,
   "SetFileScalarTypeToUnsignedChar(self) -> None\nC++: void SetFileScalarTypeToUnsignedChar()\n\n"},
  {"SetFileScalarTypeToChar", PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToChar, METH_VARARGS,
   "SetFileScalarTypeToChar(self) -> None\nC++: void SetFileScalarTypeToChar()\n\n"},
  {"SetFileScalarTypeToShort", PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToShort, METH_VARARGS,
   "SetFileScalarTypeToShort(self) -> None\nC++: void SetFileScalarTypeToShort()\n\n"},
  {"SetFileScalarTypeToUnsignedShort", PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToUnsignedShort, METH_VARARGS,
   "SetFileScalarTypeToUnsignedShort(self) -> None\nC++: void SetFileScalarTypeToUnsignedShort()\n\n"},
  {"SetFileScalarTypeToInt", PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToInt, METH_VARARGS,
   "SetFileScalarTypeToInt(self) -> None\nC++: void SetFileScalarTypeToInt()\n\n"},
  {"SetFileScalarTypeToUnsignedInt", PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToUnsignedInt, METH_VARARGS,
   "SetFileScalarTypeToUnsignedInt(self) -> None\nC++: void SetFileScalarTypeToUnsignedInt()\n\n"},
  {"SetFileScalarTypeToLong", PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToLong, METH_VARARGS,
   "SetFileScalarTypeToLong(self) -> None\nC++: void SetFileScalarTypeToLong()\n\n"},
  {"SetFileScalarTypeToUnsignedLong", PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToUnsignedLong, METH_VARARGS,
   "SetFileScalarTypeToUnsignedLong(self) -> None\nC++: void SetFileScalarTypeToUnsignedLong()\n\n"},
  {"SetFileScalarTypeToFloat", PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToFloat, METH_VARARGS,
   "SetFileScalarTypeToFloat(self) -> None\nC++: void SetFileScalarTypeToFloat()\n\n"},
  {"SetFileScalarTypeToDouble", PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeToDouble, METH_VARARGS,
   "SetFileScalarTypeToDouble(self) -> None\nC++: void SetFileScalarTypeToDouble()\n\n"},
  {"GetFileScalarTypeAsString", PyvtkMRMLVolumeHeaderlessStorageNode_GetFileScalarTypeAsString, METH_VARARGS,
   "GetFileScalarTypeAsString(self) -> str\nC++: const char *GetFileScalarTypeAsString()\n\n"},
  {"SetFileScalarTypeAsString", PyvtkMRMLVolumeHeaderlessStorageNode_SetFileScalarTypeAsString, METH_VARARGS,
   "SetFileScalarTypeAsString(self, __a:str) -> None\nC++: void SetFileScalarTypeAsString(const char *)\n\n"},
  {"GetFileNumberOfScalarComponents", PyvtkMRMLVolumeHeaderlessStorageNode_GetFileNumberOfScalarComponents, METH_VARARGS,
   "GetFileNumberOfScalarComponents(self) -> int\nC++: virtual int GetFileNumberOfScalarComponents()\n\nThe number of scalar components for each voxel. Gray-level data\nhas 1. Color data has 3\n"},
  {"SetFileNumberOfScalarComponents", PyvtkMRMLVolumeHeaderlessStorageNode_SetFileNumberOfScalarComponents, METH_VARARGS,
   "SetFileNumberOfScalarComponents(self, _arg:int) -> None\nC++: virtual void SetFileNumberOfScalarComponents(int _arg)\n\n"},
  {"GetFileLittleEndian", PyvtkMRMLVolumeHeaderlessStorageNode_GetFileLittleEndian, METH_VARARGS,
   "GetFileLittleEndian(self) -> int\nC++: virtual int GetFileLittleEndian()\n\nDescribes the order of bytes for each voxel.  Little endian\npositions the least-significant byte on the rightmost end, and is\ntrue of data generated on a PC or SGI.\n"},
  {"SetFileLittleEndian", PyvtkMRMLVolumeHeaderlessStorageNode_SetFileLittleEndian, METH_VARARGS,
   "SetFileLittleEndian(self, _arg:int) -> None\nC++: virtual void SetFileLittleEndian(int _arg)\n\n"},
  {"FileLittleEndianOn", PyvtkMRMLVolumeHeaderlessStorageNode_FileLittleEndianOn, METH_VARARGS,
   "FileLittleEndianOn(self) -> None\nC++: virtual void FileLittleEndianOn()\n\n"},
  {"FileLittleEndianOff", PyvtkMRMLVolumeHeaderlessStorageNode_FileLittleEndianOff, METH_VARARGS,
   "FileLittleEndianOff(self) -> None\nC++: virtual void FileLittleEndianOff()\n\n"},
  {"GetCenterImage", PyvtkMRMLVolumeHeaderlessStorageNode_GetCenterImage, METH_VARARGS,
   "GetCenterImage(self) -> int\nC++: virtual int GetCenterImage()\n\nCenter image on read\n"},
  {"SetCenterImage", PyvtkMRMLVolumeHeaderlessStorageNode_SetCenterImage, METH_VARARGS,
   "SetCenterImage(self, _arg:int) -> None\nC++: virtual void SetCenterImage(int _arg)\n\n"},
  {"CanReadInReferenceNode", PyvtkMRMLVolumeHeaderlessStorageNode_CanReadInReferenceNode, METH_VARARGS,
   "CanReadInReferenceNode(self, refNode:vtkMRMLNode) -> bool\nC++: bool CanReadInReferenceNode(vtkMRMLNode *refNode) override;\n\nReturn true if node can be read in\n"},
  {"CanWriteFromReferenceNode", PyvtkMRMLVolumeHeaderlessStorageNode_CanWriteFromReferenceNode, METH_VARARGS,
   "CanWriteFromReferenceNode(self, refNode:vtkMRMLNode) -> bool\nC++: bool CanWriteFromReferenceNode(vtkMRMLNode *refNode)\n    override;\n\nReturn true if the node can be written from. Used by WriteData to\nknow if the file can be written from the reference node. By\ndefault it returns the same than CanReadInReferenceNode.\nSubclasses can reimplement the method.\n\\sa CanReadInReferenceNode, WriteData\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLVolumeHeaderlessStorageNode_Doc =
  "vtkMRMLVolumeHeaderlessStorageNode - MRML node for representing a\nvolume storage.\n\n"
  "Superclass: vtkMRMLStorageNode\n\n"
  "vtkMRMLVolumeHeaderlessStorageNode nodes describes how volume data\n"
  "sets is stored on disk.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLVolumeHeaderlessStorageNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLVolumeHeaderlessStorageNode", // tp_name
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
  PyvtkMRMLVolumeHeaderlessStorageNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLVolumeHeaderlessStorageNode_StaticNew()
{
  return vtkMRMLVolumeHeaderlessStorageNode::New();
}

PyObject *PyvtkMRMLVolumeHeaderlessStorageNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLVolumeHeaderlessStorageNode_Type, PyvtkMRMLVolumeHeaderlessStorageNode_Methods,
    "vtkMRMLVolumeHeaderlessStorageNode",
 &PyvtkMRMLVolumeHeaderlessStorageNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLStorageNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLVolumeHeaderlessStorageNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLVolumeHeaderlessStorageNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLVolumeHeaderlessStorageNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

