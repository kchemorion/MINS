// python wrapper for vtkMRMLROINode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLROINode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLROINode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLROINode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLTransformableNode_ClassNew
extern "C" { PyObject *PyvtkMRMLTransformableNode_ClassNew(); }
#define DECLARED_PyvtkMRMLTransformableNode_ClassNew
#endif

static PyObject *
PyvtkMRMLROINode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLROINode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLROINode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLROINode *tempr = vtkMRMLROINode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLROINode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLROINode::NewInstance());

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
PyvtkMRMLROINode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLROINode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLROINode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLROINode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_ReadXMLString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadXMLString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReadXMLString(temp0);
    }
    else
    {
      op->vtkMRMLROINode::ReadXMLString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

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
      op->vtkMRMLROINode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLROINode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

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
      op->vtkMRMLROINode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_UpdateReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateReferences();
    }
    else
    {
      op->vtkMRMLROINode::UpdateReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_VisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VisibilityOn();
    }
    else
    {
      op->vtkMRMLROINode::VisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_VisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VisibilityOff();
    }
    else
    {
      op->vtkMRMLROINode::VisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_GetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVisibility() :
      op->vtkMRMLROINode::GetVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkMRMLROINode::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_InteractiveModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveModeOn();
    }
    else
    {
      op->vtkMRMLROINode::InteractiveModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_InteractiveModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveModeOff();
    }
    else
    {
      op->vtkMRMLROINode::InteractiveModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_GetInteractiveMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractiveMode() :
      op->vtkMRMLROINode::GetInteractiveMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_SetInteractiveMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractiveMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractiveMode(temp0);
    }
    else
    {
      op->vtkMRMLROINode::SetInteractiveMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_SetXYZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

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
      op->SetXYZ(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLROINode::SetXYZ(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLROINode_SetXYZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetXYZ(temp0);
    }
    else
    {
      op->vtkMRMLROINode::SetXYZ(temp0);
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
PyvtkMRMLROINode_SetXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLROINode_SetXYZ_s1(self, args);
    case 1:
      return PyvtkMRMLROINode_SetXYZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXYZ");
  return nullptr;
}


static PyObject *
PyvtkMRMLROINode_GetXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetXYZ() :
      op->vtkMRMLROINode::GetXYZ());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_SetRadiusXYZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

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
      op->vtkMRMLROINode::SetRadiusXYZ(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLROINode_SetRadiusXYZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
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
      op->vtkMRMLROINode::SetRadiusXYZ(temp0);
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
PyvtkMRMLROINode_SetRadiusXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLROINode_SetRadiusXYZ_s1(self, args);
    case 1:
      return PyvtkMRMLROINode_SetRadiusXYZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRadiusXYZ");
  return nullptr;
}


static PyObject *
PyvtkMRMLROINode_GetRadiusXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRadiusXYZ() :
      op->vtkMRMLROINode::GetRadiusXYZ());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_SetIJK_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

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
      op->SetIJK(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLROINode::SetIJK(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLROINode_SetIJK_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetIJK(temp0);
    }
    else
    {
      op->vtkMRMLROINode::SetIJK(temp0);
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
PyvtkMRMLROINode_SetIJK(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLROINode_SetIJK_s1(self, args);
    case 1:
      return PyvtkMRMLROINode_SetIJK_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetIJK");
  return nullptr;
}


static PyObject *
PyvtkMRMLROINode_GetIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetIJK() :
      op->vtkMRMLROINode::GetIJK());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_SetRadiusIJK_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

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
      op->SetRadiusIJK(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLROINode::SetRadiusIJK(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLROINode_SetRadiusIJK_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetRadiusIJK(temp0);
    }
    else
    {
      op->vtkMRMLROINode::SetRadiusIJK(temp0);
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
PyvtkMRMLROINode_SetRadiusIJK(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLROINode_SetRadiusIJK_s1(self, args);
    case 1:
      return PyvtkMRMLROINode_SetRadiusIJK_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRadiusIJK");
  return nullptr;
}


static PyObject *
PyvtkMRMLROINode_GetRadiusIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRadiusIJK() :
      op->vtkMRMLROINode::GetRadiusIJK());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  int temp0;
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
      op->vtkMRMLROINode::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkMRMLROINode::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkMRMLROINode::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkMRMLROINode::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_SetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelText(temp0);
    }
    else
    {
      op->vtkMRMLROINode::SetLabelText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_GetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelText() :
      op->vtkMRMLROINode::GetLabelText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

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
      op->vtkMRMLROINode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLROINode_GetVolumeNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVolumeNodeID() :
      op->vtkMRMLROINode::GetVolumeNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_SetVolumeNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolumeNodeID(temp0);
    }
    else
    {
      op->vtkMRMLROINode::SetVolumeNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_CanApplyNonLinearTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanApplyNonLinearTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanApplyNonLinearTransforms() :
      op->vtkMRMLROINode::CanApplyNonLinearTransforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_ApplyTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

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
      op->vtkMRMLROINode::ApplyTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROINode_GetTransformedPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROINode *op = static_cast<vtkMRMLROINode *>(vp);

  vtkPlanes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
  {
    if (ap.IsBound())
    {
      op->GetTransformedPlanes(temp0);
    }
    else
    {
      op->vtkMRMLROINode::GetTransformedPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLROINode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLROINode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLROINode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLROINode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLROINode\nC++: static vtkMRMLROINode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLROINode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLROINode\nC++: vtkMRMLROINode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLROINode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLROINode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLROINode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRML methods\n"},
  {"ReadXMLString", PyvtkMRMLROINode_ReadXMLString, METH_VARARGS,
   "ReadXMLString(self, keyValuePairs:str) -> None\nC++: virtual void ReadXMLString(const char *keyValuePairs)\n\n"},
  {"Copy", PyvtkMRMLROINode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLROINode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"UpdateScene", PyvtkMRMLROINode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\n\n"},
  {"UpdateReferences", PyvtkMRMLROINode_UpdateReferences, METH_VARARGS,
   "UpdateReferences(self) -> None\nC++: void UpdateReferences() override;\n\nupdate display node ids\n"},
  {"VisibilityOn", PyvtkMRMLROINode_VisibilityOn, METH_VARARGS,
   "VisibilityOn(self) -> None\nC++: virtual void VisibilityOn()\n\nIndicates if the ROI is visible\n"},
  {"VisibilityOff", PyvtkMRMLROINode_VisibilityOff, METH_VARARGS,
   "VisibilityOff(self) -> None\nC++: virtual void VisibilityOff()\n\n"},
  {"GetVisibility", PyvtkMRMLROINode_GetVisibility, METH_VARARGS,
   "GetVisibility(self) -> int\nC++: virtual int GetVisibility()\n\n"},
  {"SetVisibility", PyvtkMRMLROINode_SetVisibility, METH_VARARGS,
   "SetVisibility(self, _arg:int) -> None\nC++: virtual void SetVisibility(int _arg)\n\n"},
  {"InteractiveModeOn", PyvtkMRMLROINode_InteractiveModeOn, METH_VARARGS,
   "InteractiveModeOn(self) -> None\nC++: virtual void InteractiveModeOn()\n\nIndicates if the ROI is updated interactively\n"},
  {"InteractiveModeOff", PyvtkMRMLROINode_InteractiveModeOff, METH_VARARGS,
   "InteractiveModeOff(self) -> None\nC++: virtual void InteractiveModeOff()\n\n"},
  {"GetInteractiveMode", PyvtkMRMLROINode_GetInteractiveMode, METH_VARARGS,
   "GetInteractiveMode(self) -> int\nC++: virtual int GetInteractiveMode()\n\n"},
  {"SetInteractiveMode", PyvtkMRMLROINode_SetInteractiveMode, METH_VARARGS,
   "SetInteractiveMode(self, _arg:int) -> None\nC++: virtual void SetInteractiveMode(int _arg)\n\n"},
  {"SetXYZ", PyvtkMRMLROINode_SetXYZ, METH_VARARGS,
   "SetXYZ(self, X:float, Y:float, Z:float) -> None\nC++: void SetXYZ(double X, double Y, double Z)\nSetXYZ(self, XYZ:[float, ...]) -> None\nC++: void SetXYZ(double *XYZ)\n\nGet/Set for ROI Position in RAS coordinates Note: The ROI\nPosition is the center of the ROI\n"},
  {"GetXYZ", PyvtkMRMLROINode_GetXYZ, METH_VARARGS,
   "GetXYZ(self) -> (float, float, float)\nC++: virtual double *GetXYZ()\n\n"},
  {"SetRadiusXYZ", PyvtkMRMLROINode_SetRadiusXYZ, METH_VARARGS,
   "SetRadiusXYZ(self, RadiusX:float, RadiusY:float, RadiusZ:float)\n    -> None\nC++: void SetRadiusXYZ(double RadiusX, double RadiusY,\n    double RadiusZ)\nSetRadiusXYZ(self, RadiusXYZ:[float, ...]) -> None\nC++: void SetRadiusXYZ(double *RadiusXYZ)\n\nGet/Set for radius of the ROI in RAS coordinates\n"},
  {"GetRadiusXYZ", PyvtkMRMLROINode_GetRadiusXYZ, METH_VARARGS,
   "GetRadiusXYZ(self) -> (float, float, float)\nC++: virtual double *GetRadiusXYZ()\n\n"},
  {"SetIJK", PyvtkMRMLROINode_SetIJK, METH_VARARGS,
   "SetIJK(self, I:float, J:float, K:float) -> None\nC++: void SetIJK(double I, double J, double K)\nSetIJK(self, IJK:[float, ...]) -> None\nC++: void SetIJK(double *IJK)\n\nGet/Set for ROI Position in IJK coordinates\n"},
  {"GetIJK", PyvtkMRMLROINode_GetIJK, METH_VARARGS,
   "GetIJK(self) -> (float, float, float)\nC++: virtual double *GetIJK()\n\n"},
  {"SetRadiusIJK", PyvtkMRMLROINode_SetRadiusIJK, METH_VARARGS,
   "SetRadiusIJK(self, RadiusI:float, RadiusJ:float, RadiusK:float)\n    -> None\nC++: void SetRadiusIJK(double RadiusI, double RadiusJ,\n    double RadiusK)\nSetRadiusIJK(self, RadiusIJK:[float, ...]) -> None\nC++: void SetRadiusIJK(double *RadiusIJK)\n\nGet/Set for radius of the ROI in IJK coordinates\n"},
  {"GetRadiusIJK", PyvtkMRMLROINode_GetRadiusIJK, METH_VARARGS,
   "GetRadiusIJK(self) -> (float, float, float)\nC++: virtual double *GetRadiusIJK()\n\n"},
  {"SetInsideOut", PyvtkMRMLROINode_SetInsideOut, METH_VARARGS,
   "SetInsideOut(self, _arg:int) -> None\nC++: virtual void SetInsideOut(int _arg)\n\nSet/Get the InsideOut flag. This data member is used in\nconjunction with the GetPlanes() method. When off, the normals\npoint out of the box. When on, the normals point into the\nhexahedron.  InsideOut is off by default.\n"},
  {"GetInsideOut", PyvtkMRMLROINode_GetInsideOut, METH_VARARGS,
   "GetInsideOut(self) -> int\nC++: virtual int GetInsideOut()\n\n"},
  {"InsideOutOn", PyvtkMRMLROINode_InsideOutOn, METH_VARARGS,
   "InsideOutOn(self) -> None\nC++: virtual void InsideOutOn()\n\n"},
  {"InsideOutOff", PyvtkMRMLROINode_InsideOutOff, METH_VARARGS,
   "InsideOutOff(self) -> None\nC++: virtual void InsideOutOff()\n\n"},
  {"SetLabelText", PyvtkMRMLROINode_SetLabelText, METH_VARARGS,
   "SetLabelText(self, _arg:str) -> None\nC++: virtual void SetLabelText(const char *_arg)\n\nGet/Set for LabelText\n"},
  {"GetLabelText", PyvtkMRMLROINode_GetLabelText, METH_VARARGS,
   "GetLabelText(self) -> str\nC++: virtual char *GetLabelText()\n\n"},
  {"ProcessMRMLEvents", PyvtkMRMLROINode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nalternative method to propagate events generated in Transform\nnodes\n"},
  {"GetVolumeNodeID", PyvtkMRMLROINode_GetVolumeNodeID, METH_VARARGS,
   "GetVolumeNodeID(self) -> str\nC++: virtual char *GetVolumeNodeID()\n\n"},
  {"SetVolumeNodeID", PyvtkMRMLROINode_SetVolumeNodeID, METH_VARARGS,
   "SetVolumeNodeID(self, _arg:str) -> None\nC++: virtual void SetVolumeNodeID(const char *_arg)\n\n"},
  {"CanApplyNonLinearTransforms", PyvtkMRMLROINode_CanApplyNonLinearTransforms, METH_VARARGS,
   "CanApplyNonLinearTransforms(self) -> bool\nC++: bool CanApplyNonLinearTransforms() override;\n\ntransform utility functions\n"},
  {"ApplyTransform", PyvtkMRMLROINode_ApplyTransform, METH_VARARGS,
   "ApplyTransform(self, transform:vtkAbstractTransform) -> None\nC++: void ApplyTransform(vtkAbstractTransform *transform)\n    override;\n\nTransforms the node with the provided non-linear transform.\n\\sa SetAndObserveTransformNodeID, ApplyTransformMatrix,\n    CanApplyNonLinearTransforms\n"},
  {"GetTransformedPlanes", PyvtkMRMLROINode_GetTransformedPlanes, METH_VARARGS,
   "GetTransformedPlanes(self, planes:vtkPlanes) -> None\nC++: void GetTransformedPlanes(vtkPlanes *planes)\n\nDescription get transformed planes for the ROI region\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLROINode_Doc =
  "vtkMRMLROINode - MRML node to represent a 3D ROI.\n\n"
  "Superclass: vtkMRMLTransformableNode\n\n"
  "Model nodes describe ROI data.  They indicate where the ROI is\n"
  "located and the size of the ROI.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLROINode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLROINode", // tp_name
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
  PyvtkMRMLROINode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLROINode_StaticNew()
{
  return vtkMRMLROINode::New();
}

PyObject *PyvtkMRMLROINode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLROINode_Type, PyvtkMRMLROINode_Methods,
    "vtkMRMLROINode",
 &PyvtkMRMLROINode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLTransformableNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLROINode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLROINode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLROINode", o) != 0)
  {
    Py_DECREF(o);
  }

}

