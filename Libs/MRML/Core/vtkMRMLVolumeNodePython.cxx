// python wrapper for vtkMRMLVolumeNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLVolumeNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLVolumeNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLVolumeNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLDisplayableNode_ClassNew
extern "C" { PyObject *PyvtkMRMLDisplayableNode_ClassNew(); }
#define DECLARED_PyvtkMRMLDisplayableNode_ClassNew
#endif

static PyObject *
PyvtkMRMLVolumeNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLVolumeNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLVolumeNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLVolumeNode *tempr = vtkMRMLVolumeNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumeNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLVolumeNode::NewInstance());

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
PyvtkMRMLVolumeNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLVolumeNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLVolumeNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
PyvtkMRMLVolumeNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
      op->vtkMRMLVolumeNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLVolumeNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_CopyOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode"))
  {
    if (ap.IsBound())
    {
      op->CopyOrientation(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::CopyOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
PyvtkMRMLVolumeNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
      op->vtkMRMLVolumeNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_ComputeIJKToRASFromScanOrder(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeIJKToRASFromScanOrder");

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(size2);
  int *temp2 = store2.Data();
  bool temp3 = false;
  vtkMatrix4x4 *temp4 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkMatrix4x4"))
  {
    bool tempr = vtkMRMLVolumeNode::ComputeIJKToRASFromScanOrder(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_ComputeScanOrderFromIJKToRAS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeScanOrderFromIJKToRAS");

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    const char *tempr = vtkMRMLVolumeNode::ComputeScanOrderFromIJKToRAS(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_SetIJKToRASDirections_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIJKToRASDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  double save0[3][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
  {
    vtkPythonArgs::Save(*temp0, *save0, size0[0]*size0[1]);

    if (ap.IsBound())
    {
      op->SetIJKToRASDirections(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::SetIJKToRASDirections(temp0);
    }

    if (vtkPythonArgs::HasChanged(*temp0, *save0, size0[0]*size0[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(0, *temp0, 2, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLVolumeNode_SetIJKToRASDirections_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIJKToRASDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
  {
    if (ap.IsBound())
    {
      op->SetIJKToRASDirections(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkMRMLVolumeNode::SetIJKToRASDirections(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLVolumeNode_SetIJKToRASDirections(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLVolumeNode_SetIJKToRASDirections_s1(self, args);
    case 9:
      return PyvtkMRMLVolumeNode_SetIJKToRASDirections_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetIJKToRASDirections");
  return nullptr;
}


static PyObject *
PyvtkMRMLVolumeNode_SetIToRASDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIToRASDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
      op->SetIToRASDirection(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLVolumeNode::SetIToRASDirection(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_SetJToRASDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJToRASDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
      op->SetJToRASDirection(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLVolumeNode::SetJToRASDirection(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_SetKToRASDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKToRASDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
      op->SetKToRASDirection(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLVolumeNode::SetKToRASDirection(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_GetIJKToRASDirections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIJKToRASDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  double save0[3][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
  {
    vtkPythonArgs::Save(*temp0, *save0, size0[0]*size0[1]);

    if (ap.IsBound())
    {
      op->GetIJKToRASDirections(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::GetIJKToRASDirections(temp0);
    }

    if (vtkPythonArgs::HasChanged(*temp0, *save0, size0[0]*size0[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(0, *temp0, 2, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_GetIToRASDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIToRASDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
      op->GetIToRASDirection(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::GetIToRASDirection(temp0);
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
PyvtkMRMLVolumeNode_GetJToRASDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJToRASDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
      op->GetJToRASDirection(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::GetJToRASDirection(temp0);
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
PyvtkMRMLVolumeNode_GetKToRASDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKToRASDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
      op->GetKToRASDirection(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::GetKToRASDirection(temp0);
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
PyvtkMRMLVolumeNode_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSpacing() :
      op->vtkMRMLVolumeNode::GetSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_SetSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
      op->SetSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLVolumeNode::SetSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLVolumeNode_SetSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
      op->SetSpacing(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::SetSpacing(temp0);
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
PyvtkMRMLVolumeNode_SetSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLVolumeNode_SetSpacing_s1(self, args);
    case 1:
      return PyvtkMRMLVolumeNode_SetSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacing");
  return nullptr;
}


static PyObject *
PyvtkMRMLVolumeNode_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkMRMLVolumeNode::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
      op->vtkMRMLVolumeNode::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLVolumeNode_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::SetOrigin(temp0);
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
PyvtkMRMLVolumeNode_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLVolumeNode_SetOrigin_s1(self, args);
    case 1:
      return PyvtkMRMLVolumeNode_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkMRMLVolumeNode_GetMinSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinSpacing() :
      op->vtkMRMLVolumeNode::GetMinSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_GetMaxSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxSpacing() :
      op->vtkMRMLVolumeNode::GetMaxSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_GetIJKToRASMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIJKToRASMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetIJKToRASMatrix(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::GetIJKToRASMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_GetRASToIJKMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRASToIJKMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetRASToIJKMatrix(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::GetRASToIJKMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_GetIJKToRASDirectionMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIJKToRASDirectionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetIJKToRASDirectionMatrix(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::GetIJKToRASDirectionMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_SetIJKToRASDirectionMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIJKToRASDirectionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetIJKToRASDirectionMatrix(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::SetIJKToRASDirectionMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_SetIJKToRASMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIJKToRASMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetIJKToRASMatrix(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::SetIJKToRASMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_SetRASToIJKMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRASToIJKMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetRASToIJKMatrix(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::SetRASToIJKMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_GetRASBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRASBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
      op->vtkMRMLVolumeNode::GetRASBounds(temp0);
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
PyvtkMRMLVolumeNode_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
      op->vtkMRMLVolumeNode::GetBounds(temp0);
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
PyvtkMRMLVolumeNode_GetSliceBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  vtkMatrix4x4 *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetSliceBounds(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLVolumeNode::GetSliceBounds(temp0, temp1, temp2);
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
PyvtkMRMLVolumeNode_GetVolumeDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumeDisplayNode *tempr = (ap.IsBound() ?
      op->GetVolumeDisplayNode() :
      op->vtkMRMLVolumeNode::GetVolumeDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_SetAndObserveImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveImageData(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::SetAndObserveImageData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_GetImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImageData() :
      op->vtkMRMLVolumeNode::GetImageData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_SetImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetImageDataConnection(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::SetImageDataConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_GetImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetImageDataConnection() :
      op->vtkMRMLVolumeNode::GetImageDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_ShiftImageDataExtentToZeroStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShiftImageDataExtentToZeroStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShiftImageDataExtentToZeroStart();
    }
    else
    {
      op->vtkMRMLVolumeNode::ShiftImageDataExtentToZeroStart();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
      op->vtkMRMLVolumeNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLVolumeNode_CanApplyNonLinearTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanApplyNonLinearTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanApplyNonLinearTransforms() :
      op->vtkMRMLVolumeNode::CanApplyNonLinearTransforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_ApplyTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
      op->vtkMRMLVolumeNode::ApplyTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_ApplyTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

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
      op->vtkMRMLVolumeNode::ApplyTransformMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_ApplyNonLinearTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyNonLinearTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->ApplyNonLinearTransform(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::ApplyNonLinearTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_GetModifiedSinceRead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModifiedSinceRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetModifiedSinceRead() :
      op->vtkMRMLVolumeNode::GetModifiedSinceRead());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_GetImageBackgroundScalarComponentAsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageBackgroundScalarComponentAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetImageBackgroundScalarComponentAsDouble(temp0) :
      op->vtkMRMLVolumeNode::GetImageBackgroundScalarComponentAsDouble(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_CreateDefaultSequenceDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultSequenceDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultSequenceDisplayNodes();
    }
    else
    {
      op->vtkMRMLVolumeNode::CreateDefaultSequenceDisplayNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_IsCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsCentered() :
      op->vtkMRMLVolumeNode::IsCentered());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_AddCenteringTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCenteringTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->AddCenteringTransform() :
      op->vtkMRMLVolumeNode::AddCenteringTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_GetVoxelVectorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoxelVectorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVoxelVectorType() :
      op->vtkMRMLVolumeNode::GetVoxelVectorType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_SetVoxelVectorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoxelVectorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeNode *op = static_cast<vtkMRMLVolumeNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVoxelVectorType(temp0);
    }
    else
    {
      op->vtkMRMLVolumeNode::SetVoxelVectorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_GetVoxelVectorTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVoxelVectorTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLVolumeNode::GetVoxelVectorTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeNode_GetVoxelVectorTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVoxelVectorTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLVolumeNode::GetVoxelVectorTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLVolumeNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLVolumeNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLVolumeNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLVolumeNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLVolumeNode\nC++: static vtkMRMLVolumeNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLVolumeNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLVolumeNode\nC++: vtkMRMLVolumeNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLVolumeNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLVolumeNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLVolumeNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override = 0;\n\nMRMLNode methods\n"},
  {"CopyContent", PyvtkMRMLVolumeNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLVolumeNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"CopyOrientation", PyvtkMRMLVolumeNode_CopyOrientation, METH_VARARGS,
   "CopyOrientation(self, node:vtkMRMLVolumeNode) -> None\nC++: void CopyOrientation(vtkMRMLVolumeNode *node)\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLVolumeNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override = 0;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"UpdateScene", PyvtkMRMLVolumeNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data\n"},
  {"ComputeIJKToRASFromScanOrder", PyvtkMRMLVolumeNode_ComputeIJKToRASFromScanOrder, METH_VARARGS,
   "ComputeIJKToRASFromScanOrder(order:str, spacing:(float, ...),\n    dims:(int, ...), centerImage:bool, IJKToRAS:vtkMatrix4x4)\n    -> bool\nC++: static bool ComputeIJKToRASFromScanOrder(const char *order,\n    const double *spacing, const int *dims, bool centerImage,\n    vtkMatrix4x4 *IJKToRAS)\n\nRAS->IJK Matrix Calculation\n\nThe order of slices in the volume. One of: LR (left-to-right),\nRL, AP, PA, IS, SI. This information is encoded in the\nrasToIJKMatrix. This matrix can be computed either from corner\npoints, or just he scanOrder. Return true on success, false\notherwise\n"},
  {"ComputeScanOrderFromIJKToRAS", PyvtkMRMLVolumeNode_ComputeScanOrderFromIJKToRAS, METH_VARARGS,
   "ComputeScanOrderFromIJKToRAS(IJKToRAS:vtkMatrix4x4) -> str\nC++: static const char *ComputeScanOrderFromIJKToRAS(\n    vtkMatrix4x4 *IJKToRAS)\n\n"},
  {"SetIJKToRASDirections", PyvtkMRMLVolumeNode_SetIJKToRASDirections, METH_VARARGS,
   "SetIJKToRASDirections(self, dirs:[[float, float, float], [float,\n    float, float], [float, float, float]]) -> None\nC++: void SetIJKToRASDirections(double dirs[3][3])\nSetIJKToRASDirections(self, ir:float, jr:float, kr:float,\n    ia:float, ja:float, ka:float, is_:float, js:float, ks:float)\n    -> None\nC++: void SetIJKToRASDirections(double ir, double jr, double kr,\n    double ia, double ja, double ka, double is, double js,\n    double ks)\n\n"},
  {"SetIToRASDirection", PyvtkMRMLVolumeNode_SetIToRASDirection, METH_VARARGS,
   "SetIToRASDirection(self, ir:float, ia:float, is_:float) -> None\nC++: void SetIToRASDirection(double ir, double ia, double is)\n\n"},
  {"SetJToRASDirection", PyvtkMRMLVolumeNode_SetJToRASDirection, METH_VARARGS,
   "SetJToRASDirection(self, jr:float, ja:float, js:float) -> None\nC++: void SetJToRASDirection(double jr, double ja, double js)\n\n"},
  {"SetKToRASDirection", PyvtkMRMLVolumeNode_SetKToRASDirection, METH_VARARGS,
   "SetKToRASDirection(self, kr:float, ka:float, ks:float) -> None\nC++: void SetKToRASDirection(double kr, double ka, double ks)\n\n"},
  {"GetIJKToRASDirections", PyvtkMRMLVolumeNode_GetIJKToRASDirections, METH_VARARGS,
   "GetIJKToRASDirections(self, dirs:[[float, float, float], [float,\n    float, float], [float, float, float]]) -> None\nC++: void GetIJKToRASDirections(double dirs[3][3])\n\n"},
  {"GetIToRASDirection", PyvtkMRMLVolumeNode_GetIToRASDirection, METH_VARARGS,
   "GetIToRASDirection(self, dirs:[float, float, float]) -> None\nC++: void GetIToRASDirection(double dirs[3])\n\n"},
  {"GetJToRASDirection", PyvtkMRMLVolumeNode_GetJToRASDirection, METH_VARARGS,
   "GetJToRASDirection(self, dirs:[float, float, float]) -> None\nC++: void GetJToRASDirection(double dirs[3])\n\n"},
  {"GetKToRASDirection", PyvtkMRMLVolumeNode_GetKToRASDirection, METH_VARARGS,
   "GetKToRASDirection(self, dirs:[float, float, float]) -> None\nC++: void GetKToRASDirection(double dirs[3])\n\n"},
  {"GetSpacing", PyvtkMRMLVolumeNode_GetSpacing, METH_VARARGS,
   "GetSpacing(self) -> (float, float, float)\nC++: virtual double *GetSpacing()\n\nSpacing and Origin, with the Directions, are the independent\nparameters that go to make up the IJKToRAS matrix In setter\nmethods, StorableModifiedTime may need to be updated, which\ncannot be achieved by using vtkGetVector3Macro.\n"},
  {"SetSpacing", PyvtkMRMLVolumeNode_SetSpacing, METH_VARARGS,
   "SetSpacing(self, arg1:float, arg2:float, arg3:float) -> None\nC++: virtual void SetSpacing(double arg1, double arg2,\n    double arg3)\nSetSpacing(self, arg:[float, float, float]) -> None\nC++: virtual void SetSpacing(double arg[3])\n\n"},
  {"GetOrigin", PyvtkMRMLVolumeNode_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"SetOrigin", PyvtkMRMLVolumeNode_SetOrigin, METH_VARARGS,
   "SetOrigin(self, arg1:float, arg2:float, arg3:float) -> None\nC++: virtual void SetOrigin(double arg1, double arg2, double arg3)\nSetOrigin(self, arg:[float, float, float]) -> None\nC++: virtual void SetOrigin(double arg[3])\n\n"},
  {"GetMinSpacing", PyvtkMRMLVolumeNode_GetMinSpacing, METH_VARARGS,
   "GetMinSpacing(self) -> float\nC++: double GetMinSpacing()\n\nUtility function that returns the min spacing between the 3\norientations\n"},
  {"GetMaxSpacing", PyvtkMRMLVolumeNode_GetMaxSpacing, METH_VARARGS,
   "GetMaxSpacing(self) -> float\nC++: double GetMaxSpacing()\n\nUtility function that returns the max spacing between the 3\norientations\n"},
  {"GetIJKToRASMatrix", PyvtkMRMLVolumeNode_GetIJKToRASMatrix, METH_VARARGS,
   "GetIJKToRASMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void GetIJKToRASMatrix(vtkMatrix4x4 *mat)\n\nGet the IJKToRAS Matrix that includes the spacing and origin\ninformation (assumes the image data is Origin 0 0 0 and Spacing 1\n1 1) RASToIJK is the inverse of this\n"},
  {"GetRASToIJKMatrix", PyvtkMRMLVolumeNode_GetRASToIJKMatrix, METH_VARARGS,
   "GetRASToIJKMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void GetRASToIJKMatrix(vtkMatrix4x4 *mat)\n\n"},
  {"GetIJKToRASDirectionMatrix", PyvtkMRMLVolumeNode_GetIJKToRASDirectionMatrix, METH_VARARGS,
   "GetIJKToRASDirectionMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void GetIJKToRASDirectionMatrix(vtkMatrix4x4 *mat)\n\n"},
  {"SetIJKToRASDirectionMatrix", PyvtkMRMLVolumeNode_SetIJKToRASDirectionMatrix, METH_VARARGS,
   "SetIJKToRASDirectionMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void SetIJKToRASDirectionMatrix(vtkMatrix4x4 *mat)\n\n"},
  {"SetIJKToRASMatrix", PyvtkMRMLVolumeNode_SetIJKToRASMatrix, METH_VARARGS,
   "SetIJKToRASMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void SetIJKToRASMatrix(vtkMatrix4x4 *mat)\n\nConvenience methods to set the directions, spacing, and origin\nfrom a matrix\n"},
  {"SetRASToIJKMatrix", PyvtkMRMLVolumeNode_SetRASToIJKMatrix, METH_VARARGS,
   "SetRASToIJKMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void SetRASToIJKMatrix(vtkMatrix4x4 *mat)\n\n"},
  {"GetRASBounds", PyvtkMRMLVolumeNode_GetRASBounds, METH_VARARGS,
   "GetRASBounds(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void GetRASBounds(double bounds[6]) override;\n\nGet bounding box in global RAS form (xmin,xmax, ymin,ymax,\nzmin,zmax). This method returns the bounds of the object with any\ntransforms that may be applied to it.\n\\sa GetSliceBounds(), GetIJKToRASMatrix(),\n    vtkMRMLSliceLogic::GetVolumeSliceBounds()\n\\sa GetNodeBounds()\n"},
  {"GetBounds", PyvtkMRMLVolumeNode_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nGet bounding box in global RAS form (xmin,xmax, ymin,ymax,\nzmin,zmax). This method always returns the bounds of the\nuntransformed object.\n\\sa GetRASBounds()\n"},
  {"GetSliceBounds", PyvtkMRMLVolumeNode_GetSliceBounds, METH_VARARGS,
   "GetSliceBounds(self, bounds:[float, float, float, float, float,\n    float], rasToSlice:vtkMatrix4x4, useVoxelCenter:bool=False)\n    -> None\nC++: void GetSliceBounds(double bounds[6],\n    vtkMatrix4x4 *rasToSlice, bool useVoxelCenter=false)\n\nGet bounding box in slice form (xmin,xmax, ymin,ymax, zmin,zmax).\nIf not rasToSlice is passed, then it returns the bounds in global\nRAS form.\n\\sa GetRASBounds()\nIf useVoxelCenter is set to false (default) then bounds of voxel\nsides are returned (otherwise then bounds of voxels centers are\nreturned).\n"},
  {"GetVolumeDisplayNode", PyvtkMRMLVolumeNode_GetVolumeDisplayNode, METH_VARARGS,
   "GetVolumeDisplayNode(self) -> vtkMRMLVolumeDisplayNode\nC++: virtual vtkMRMLVolumeDisplayNode *GetVolumeDisplayNode()\n\nAssociated display MRML node\n"},
  {"SetAndObserveImageData", PyvtkMRMLVolumeNode_SetAndObserveImageData, METH_VARARGS,
   "SetAndObserveImageData(self, ImageData:vtkImageData) -> None\nC++: virtual void SetAndObserveImageData(vtkImageData *ImageData)\n\nIn the ImageData object origin must be set to (0,0,0) and spacing\nmust be set to (1,1,1). If the variables are set to different\nvalues then the application's behavior is undefined. The reason\nfor not using origin and spacing in vtkImageData is that\nvtkImageData cannot store image orientation, and so it cannot\nstore all the information that is necessary to compute the\nmapping between voxel (IJK) and  physical (RAS) coordinate\nsystems. Instead of storing some information in vtkImageData and\nsome outside, the decision was made to store all information in\nthe MRML node (vtkMRMLVolumeNode::Origin,\nvtkMRMLVolumeNode::Spacing, and\nvtkMRMLVolumeNode::IJKToRASDirections).\n\\sa GetImageData(), SetImageDataConnection()\n"},
  {"GetImageData", PyvtkMRMLVolumeNode_GetImageData, METH_VARARGS,
   "GetImageData(self) -> vtkImageData\nC++: virtual vtkImageData *GetImageData()\n\n"},
  {"SetImageDataConnection", PyvtkMRMLVolumeNode_SetImageDataConnection, METH_VARARGS,
   "SetImageDataConnection(self, inputPort:vtkAlgorithmOutput) -> None\nC++: virtual void SetImageDataConnection(\n    vtkAlgorithmOutput *inputPort)\n\nSet and observe image data pipeline. It is propagated to the\ndisplay nodes.\n\\sa GetImageDataConnection()\n"},
  {"GetImageDataConnection", PyvtkMRMLVolumeNode_GetImageDataConnection, METH_VARARGS,
   "GetImageDataConnection(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetImageDataConnection()\n\nReturn the input image data pipeline.\n"},
  {"ShiftImageDataExtentToZeroStart", PyvtkMRMLVolumeNode_ShiftImageDataExtentToZeroStart, METH_VARARGS,
   "ShiftImageDataExtentToZeroStart(self) -> None\nC++: void ShiftImageDataExtentToZeroStart()\n\nMake sure image data of a volume node has extents that start at\nzero. This needs to be done for compatibility reasons, as many\ncomponents assume the extent has a form of\n(0,dim[0],0,dim[1],0,dim[2]), which is not the case many times\nfor segmentation merged labelmaps.\n"},
  {"ProcessMRMLEvents", PyvtkMRMLVolumeNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"CanApplyNonLinearTransforms", PyvtkMRMLVolumeNode_CanApplyNonLinearTransforms, METH_VARARGS,
   "CanApplyNonLinearTransforms(self) -> bool\nC++: bool CanApplyNonLinearTransforms() override;\n\nReturns true if the transformable node can apply non-linear\ntransforms. A transformable node is always expected to apply\nlinear transforms.\n\\sa ApplyTransformMatrix, ApplyTransform\n"},
  {"ApplyTransform", PyvtkMRMLVolumeNode_ApplyTransform, METH_VARARGS,
   "ApplyTransform(self, transform:vtkAbstractTransform) -> None\nC++: void ApplyTransform(vtkAbstractTransform *transform)\n    override;\n\nTransforms the node with the provided non-linear transform.\n\\sa SetAndObserveTransformNodeID, ApplyTransformMatrix,\n    CanApplyNonLinearTransforms\n"},
  {"ApplyTransformMatrix", PyvtkMRMLVolumeNode_ApplyTransformMatrix, METH_VARARGS,
   "ApplyTransformMatrix(self, transformMatrix:vtkMatrix4x4) -> None\nC++: void ApplyTransformMatrix(vtkMatrix4x4 *transformMatrix)\n    override;\n\nConvenience function to allow transforming a node by specifying a\ntransformation matrix.\n\\sa ApplyTransformMatrix, ApplyTransform\n"},
  {"ApplyNonLinearTransform", PyvtkMRMLVolumeNode_ApplyNonLinearTransform, METH_VARARGS,
   "ApplyNonLinearTransform(self, transform:vtkAbstractTransform)\n    -> None\nC++: virtual void ApplyNonLinearTransform(\n    vtkAbstractTransform *transform)\n\n"},
  {"GetModifiedSinceRead", PyvtkMRMLVolumeNode_GetModifiedSinceRead, METH_VARARGS,
   "GetModifiedSinceRead(self) -> bool\nC++: bool GetModifiedSinceRead() override;\n\nReturns true if the node is more recent than the file on disk.\nThis information can be used by the application to know which\nnode has been modified since it has been last read or written.\nOnly storable properties are considered: even if a \"non storable\"\nproperty (e.g. color of a mesh) is modified after the node is\nbeing loaded, GetModifiedSinceRead() should return false; the new\nproperty value won't be stored on file (only in the MRML scene).\nBy default, calling Modified() on the node doesn't make the node\n\"modified since read\", only calling Modified() on\nStorableModifiedTime does. GetModifiedSinceRead() can be\noverwritten to handle special storable property modification\ntime.\n\\sa GetStoredTime() StorableModifiedTime Modified()\n    StorableModified()\n"},
  {"GetImageBackgroundScalarComponentAsDouble", PyvtkMRMLVolumeNode_GetImageBackgroundScalarComponentAsDouble, METH_VARARGS,
   "GetImageBackgroundScalarComponentAsDouble(self, component:int)\n    -> float\nC++: virtual double GetImageBackgroundScalarComponentAsDouble(\n    int component)\n\nGet background voxel value of the image. It can be used for\nassigning intensity value to \"empty\" voxels when the image is\ntransformed. It is computed as median value of the 8 corner\nvoxels.\n"},
  {"CreateDefaultSequenceDisplayNodes", PyvtkMRMLVolumeNode_CreateDefaultSequenceDisplayNodes, METH_VARARGS,
   "CreateDefaultSequenceDisplayNodes(self) -> None\nC++: void CreateDefaultSequenceDisplayNodes() override;\n\nCreates the most appropriate display node class for storing a\nsequence of these nodes.\n"},
  {"IsCentered", PyvtkMRMLVolumeNode_IsCentered, METH_VARARGS,
   "IsCentered(self) -> bool\nC++: bool IsCentered()\n\nReturns true if the volume center is in the origin.\n"},
  {"AddCenteringTransform", PyvtkMRMLVolumeNode_AddCenteringTransform, METH_VARARGS,
   "AddCenteringTransform(self) -> bool\nC++: bool AddCenteringTransform()\n\nAdd a transform to the scene that puts the center of the volume\nin the origin. Returns true if the parent transform is changed.\n"},
  {"GetVoxelVectorType", PyvtkMRMLVolumeNode_GetVoxelVectorType, METH_VARARGS,
   "GetVoxelVectorType(self) -> int\nC++: virtual int GetVoxelVectorType()\n\nGet/Set how to interpret a scalar components of a voxel.\nVoxelVectorTypeUndefined: voxel type is not specified, scalar or\nindependent scalar components. VoxelVectorTypeSpatialVector:\n3-component spatial vector with RAS components,\n  (sign of first two values are inverted when stored in files as\nLPS)/ VoxelVectorTypeColorRGB: 3-component vector stores red,\ngreen, blue values. VoxelVectorTypeColorRGBA: 4-component vector\nstores red, green, blue, alpha values.\n"},
  {"SetVoxelVectorType", PyvtkMRMLVolumeNode_SetVoxelVectorType, METH_VARARGS,
   "SetVoxelVectorType(self, _arg:int) -> None\nC++: virtual void SetVoxelVectorType(int _arg)\n\n"},
  {"GetVoxelVectorTypeAsString", PyvtkMRMLVolumeNode_GetVoxelVectorTypeAsString, METH_VARARGS,
   "GetVoxelVectorTypeAsString(id:int) -> str\nC++: static const char *GetVoxelVectorTypeAsString(int id)\n\nConvert between voxel type ID and name\n"},
  {"GetVoxelVectorTypeFromString", PyvtkMRMLVolumeNode_GetVoxelVectorTypeFromString, METH_VARARGS,
   "GetVoxelVectorTypeFromString(name:str) -> int\nC++: static int GetVoxelVectorTypeFromString(const char *name)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLVolumeNode_Doc =
  "vtkMRMLVolumeNode - MRML node for representing a volume (image stack).\n\n"
  "Superclass: vtkMRMLDisplayableNode\n\n"
  "Volume nodes describe data sets that can be thought of as stacks of\n"
  "2D images that form a 3D volume.  Volume nodes describe where the\n"
  "images are stored on disk, how to render the data (window and level),\n"
  "and how to read the files.  This information is extracted from the\n"
  "image headers (if they exist) at the time the MRML file is generated.\n"
  "Consequently, MRML files isolate MRML browsers from understanding how\n"
  "to read the myriad of file formats for medical data.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLVolumeNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLVolumeNode", // tp_name
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
  PyvtkMRMLVolumeNode_Doc, // tp_doc
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

PyObject *PyvtkMRMLVolumeNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLVolumeNode_Type, PyvtkMRMLVolumeNode_Methods,
    "vtkMRMLVolumeNode",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLDisplayableNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VoxelVectorTypeUndefined", vtkMRMLVolumeNode::VoxelVectorTypeUndefined },
        { "VoxelVectorTypeSpatial", vtkMRMLVolumeNode::VoxelVectorTypeSpatial },
        { "VoxelVectorTypeColorRGB", vtkMRMLVolumeNode::VoxelVectorTypeColorRGB },
        { "VoxelVectorTypeColorRGBA", vtkMRMLVolumeNode::VoxelVectorTypeColorRGBA },
        { "VoxelVectorType_Last", vtkMRMLVolumeNode::VoxelVectorType_Last },
        { "ImageDataModifiedEvent", vtkMRMLVolumeNode::ImageDataModifiedEvent },
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

void PyVTKAddFile_vtkMRMLVolumeNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLVolumeNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLVolumeNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

