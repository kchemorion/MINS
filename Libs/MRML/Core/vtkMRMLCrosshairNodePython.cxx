// python wrapper for vtkMRMLCrosshairNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLCrosshairNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLCrosshairNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLCrosshairNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLNode_ClassNew
extern "C" { PyObject *PyvtkMRMLNode_ClassNew(); }
#define DECLARED_PyvtkMRMLNode_ClassNew
#endif

static PyObject *
PyvtkMRMLCrosshairNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLCrosshairNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLCrosshairNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLCrosshairNode *tempr = vtkMRMLCrosshairNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLCrosshairNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLCrosshairNode::NewInstance());

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
PyvtkMRMLCrosshairNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLCrosshairNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLCrosshairNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLCrosshairNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

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
      op->vtkMRMLCrosshairNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLCrosshairNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLCrosshairNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetCrosshairMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCrosshairMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCrosshairMode() :
      op->vtkMRMLCrosshairNode::GetCrosshairMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_SetCrosshairMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCrosshairMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCrosshairMode(temp0);
    }
    else
    {
      op->vtkMRMLCrosshairNode::SetCrosshairMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetCrosshairModeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCrosshairModeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLCrosshairNode::GetCrosshairModeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetCrosshairModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCrosshairModeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLCrosshairNode::GetCrosshairModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_SetCrosshairThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCrosshairThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCrosshairThickness(temp0);
    }
    else
    {
      op->vtkMRMLCrosshairNode::SetCrosshairThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetCrosshairThicknessMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCrosshairThicknessMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCrosshairThicknessMinValue() :
      op->vtkMRMLCrosshairNode::GetCrosshairThicknessMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetCrosshairThicknessMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCrosshairThicknessMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCrosshairThicknessMaxValue() :
      op->vtkMRMLCrosshairNode::GetCrosshairThicknessMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetCrosshairThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCrosshairThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCrosshairThickness() :
      op->vtkMRMLCrosshairNode::GetCrosshairThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_SetCrosshairToFine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCrosshairToFine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCrosshairToFine();
    }
    else
    {
      op->vtkMRMLCrosshairNode::SetCrosshairToFine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_SetCrosshairToMedium(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCrosshairToMedium");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCrosshairToMedium();
    }
    else
    {
      op->vtkMRMLCrosshairNode::SetCrosshairToMedium();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_SetCrosshairToThick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCrosshairToThick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCrosshairToThick();
    }
    else
    {
      op->vtkMRMLCrosshairNode::SetCrosshairToThick();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetCrosshairThicknessAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCrosshairThicknessAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLCrosshairNode::GetCrosshairThicknessAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetCrosshairThicknessFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCrosshairThicknessFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLCrosshairNode::GetCrosshairThicknessFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetCrosshairColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCrosshairColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetCrosshairColor() :
      op->vtkMRMLCrosshairNode::GetCrosshairColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_SetCrosshairColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCrosshairColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetCrosshairColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLCrosshairNode::SetCrosshairColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLCrosshairNode_SetCrosshairColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCrosshairColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCrosshairColor(temp0);
    }
    else
    {
      op->vtkMRMLCrosshairNode::SetCrosshairColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLCrosshairNode_SetCrosshairColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLCrosshairNode_SetCrosshairColor_s1(self, args);
    case 1:
      return PyvtkMRMLCrosshairNode_SetCrosshairColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCrosshairColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetCrosshairBehavior(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCrosshairBehavior");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCrosshairBehavior() :
      op->vtkMRMLCrosshairNode::GetCrosshairBehavior());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_SetCrosshairBehavior(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCrosshairBehavior");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCrosshairBehavior(temp0);
    }
    else
    {
      op->vtkMRMLCrosshairNode::SetCrosshairBehavior(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetCrosshairBehaviorAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCrosshairBehaviorAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLCrosshairNode::GetCrosshairBehaviorAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetCrosshairBehaviorFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCrosshairBehaviorFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLCrosshairNode::GetCrosshairBehaviorFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_SetCursorPositionRAS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorPositionRAS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

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
      op->SetCursorPositionRAS(temp0);
    }
    else
    {
      op->vtkMRMLCrosshairNode::SetCursorPositionRAS(temp0);
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
PyvtkMRMLCrosshairNode_SetCursorPositionXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorPositionXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkMRMLSliceNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkMRMLSliceNode"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetCursorPositionXYZ(temp0, temp1);
    }
    else
    {
      op->vtkMRMLCrosshairNode::SetCursorPositionXYZ(temp0, temp1);
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
PyvtkMRMLCrosshairNode_SetCursorPositionInvalid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorPositionInvalid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCursorPositionInvalid();
    }
    else
    {
      op->vtkMRMLCrosshairNode::SetCursorPositionInvalid();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetCursorPositionRAS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorPositionRAS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetCursorPositionRAS(temp0) :
      op->vtkMRMLCrosshairNode::GetCursorPositionRAS(temp0));

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
PyvtkMRMLCrosshairNode_GetCursorPositionXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorPositionXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkMRMLSliceNode *tempr = (ap.IsBound() ?
      op->GetCursorPositionXYZ(temp0) :
      op->vtkMRMLCrosshairNode::GetCursorPositionXYZ(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_SetCrosshairRAS_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCrosshairRAS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

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
      op->SetCrosshairRAS(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLCrosshairNode::SetCrosshairRAS(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLCrosshairNode_SetCrosshairRAS_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCrosshairRAS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCrosshairRAS(temp0);
    }
    else
    {
      op->vtkMRMLCrosshairNode::SetCrosshairRAS(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLCrosshairNode_SetCrosshairRAS_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCrosshairRAS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetCrosshairRAS(temp0, temp1);
    }
    else
    {
      op->vtkMRMLCrosshairNode::SetCrosshairRAS(temp0, temp1);
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
PyvtkMRMLCrosshairNode_SetCrosshairRAS(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLCrosshairNode_SetCrosshairRAS_s1(self, args);
    case 1:
      return PyvtkMRMLCrosshairNode_SetCrosshairRAS_s2(self, args);
    case 2:
      return PyvtkMRMLCrosshairNode_SetCrosshairRAS_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCrosshairRAS");
  return nullptr;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetCrosshairRAS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCrosshairRAS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCrosshairRAS() :
      op->vtkMRMLCrosshairNode::GetCrosshairRAS());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetLightBoxPane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightBoxPane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLightBoxPane() :
      op->vtkMRMLCrosshairNode::GetLightBoxPane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_SetCrosshairName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCrosshairName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCrosshairName(temp0);
    }
    else
    {
      op->vtkMRMLCrosshairNode::SetCrosshairName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetCrosshairName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCrosshairName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCrosshairName() :
      op->vtkMRMLCrosshairNode::GetCrosshairName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_SetFastPick3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFastPick3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFastPick3D(temp0);
    }
    else
    {
      op->vtkMRMLCrosshairNode::SetFastPick3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_GetFastPick3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastPick3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFastPick3D() :
      op->vtkMRMLCrosshairNode::GetFastPick3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_FastPick3DOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastPick3DOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FastPick3DOn();
    }
    else
    {
      op->vtkMRMLCrosshairNode::FastPick3DOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCrosshairNode_FastPick3DOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastPick3DOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCrosshairNode *op = static_cast<vtkMRMLCrosshairNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FastPick3DOff();
    }
    else
    {
      op->vtkMRMLCrosshairNode::FastPick3DOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLCrosshairNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLCrosshairNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLCrosshairNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLCrosshairNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLCrosshairNode\nC++: static vtkMRMLCrosshairNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLCrosshairNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLCrosshairNode\nC++: vtkMRMLCrosshairNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLCrosshairNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLCrosshairNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLCrosshairNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"CopyContent", PyvtkMRMLCrosshairNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLCrosshairNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLCrosshairNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetCrosshairMode", PyvtkMRMLCrosshairNode_GetCrosshairMode, METH_VARARGS,
   "GetCrosshairMode(self) -> int\nC++: virtual int GetCrosshairMode()\n\nConfigure crosshair appearance.\n"},
  {"SetCrosshairMode", PyvtkMRMLCrosshairNode_SetCrosshairMode, METH_VARARGS,
   "SetCrosshairMode(self, _arg:int) -> None\nC++: virtual void SetCrosshairMode(int _arg)\n\n"},
  {"GetCrosshairModeAsString", PyvtkMRMLCrosshairNode_GetCrosshairModeAsString, METH_VARARGS,
   "GetCrosshairModeAsString(id:int) -> str\nC++: static const char *GetCrosshairModeAsString(int id)\n\n"},
  {"GetCrosshairModeFromString", PyvtkMRMLCrosshairNode_GetCrosshairModeFromString, METH_VARARGS,
   "GetCrosshairModeFromString(name:str) -> int\nC++: static int GetCrosshairModeFromString(const char *name)\n\n"},
  {"SetCrosshairThickness", PyvtkMRMLCrosshairNode_SetCrosshairThickness, METH_VARARGS,
   "SetCrosshairThickness(self, _arg:int) -> None\nC++: virtual void SetCrosshairThickness(int _arg)\n\n"},
  {"GetCrosshairThicknessMinValue", PyvtkMRMLCrosshairNode_GetCrosshairThicknessMinValue, METH_VARARGS,
   "GetCrosshairThicknessMinValue(self) -> int\nC++: virtual int GetCrosshairThicknessMinValue()\n\n"},
  {"GetCrosshairThicknessMaxValue", PyvtkMRMLCrosshairNode_GetCrosshairThicknessMaxValue, METH_VARARGS,
   "GetCrosshairThicknessMaxValue(self) -> int\nC++: virtual int GetCrosshairThicknessMaxValue()\n\n"},
  {"GetCrosshairThickness", PyvtkMRMLCrosshairNode_GetCrosshairThickness, METH_VARARGS,
   "GetCrosshairThickness(self) -> int\nC++: virtual int GetCrosshairThickness()\n\n"},
  {"SetCrosshairToFine", PyvtkMRMLCrosshairNode_SetCrosshairToFine, METH_VARARGS,
   "SetCrosshairToFine(self) -> None\nC++: void SetCrosshairToFine()\n\n"},
  {"SetCrosshairToMedium", PyvtkMRMLCrosshairNode_SetCrosshairToMedium, METH_VARARGS,
   "SetCrosshairToMedium(self) -> None\nC++: void SetCrosshairToMedium()\n\n"},
  {"SetCrosshairToThick", PyvtkMRMLCrosshairNode_SetCrosshairToThick, METH_VARARGS,
   "SetCrosshairToThick(self) -> None\nC++: void SetCrosshairToThick()\n\n"},
  {"GetCrosshairThicknessAsString", PyvtkMRMLCrosshairNode_GetCrosshairThicknessAsString, METH_VARARGS,
   "GetCrosshairThicknessAsString(id:int) -> str\nC++: static const char *GetCrosshairThicknessAsString(int id)\n\n"},
  {"GetCrosshairThicknessFromString", PyvtkMRMLCrosshairNode_GetCrosshairThicknessFromString, METH_VARARGS,
   "GetCrosshairThicknessFromString(name:str) -> int\nC++: static int GetCrosshairThicknessFromString(const char *name)\n\n"},
  {"GetCrosshairColor", PyvtkMRMLCrosshairNode_GetCrosshairColor, METH_VARARGS,
   "GetCrosshairColor(self) -> (float, float, float)\nC++: virtual float *GetCrosshairColor()\n\n"},
  {"SetCrosshairColor", PyvtkMRMLCrosshairNode_SetCrosshairColor, METH_VARARGS,
   "SetCrosshairColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetCrosshairColor(float _arg1, float _arg2,\n    float _arg3)\nSetCrosshairColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCrosshairColor(const float _arg[3])\n\n"},
  {"GetCrosshairBehavior", PyvtkMRMLCrosshairNode_GetCrosshairBehavior, METH_VARARGS,
   "GetCrosshairBehavior(self) -> int\nC++: virtual int GetCrosshairBehavior()\n\nConfigure crosshair behavior.\n"},
  {"SetCrosshairBehavior", PyvtkMRMLCrosshairNode_SetCrosshairBehavior, METH_VARARGS,
   "SetCrosshairBehavior(self, _arg:int) -> None\nC++: virtual void SetCrosshairBehavior(int _arg)\n\n"},
  {"GetCrosshairBehaviorAsString", PyvtkMRMLCrosshairNode_GetCrosshairBehaviorAsString, METH_VARARGS,
   "GetCrosshairBehaviorAsString(id:int) -> str\nC++: static const char *GetCrosshairBehaviorAsString(int id)\n\n"},
  {"GetCrosshairBehaviorFromString", PyvtkMRMLCrosshairNode_GetCrosshairBehaviorFromString, METH_VARARGS,
   "GetCrosshairBehaviorFromString(name:str) -> int\nC++: static int GetCrosshairBehaviorFromString(const char *name)\n\n"},
  {"SetCursorPositionRAS", PyvtkMRMLCrosshairNode_SetCursorPositionRAS, METH_VARARGS,
   "SetCursorPositionRAS(self, ras:[float, float, float]) -> None\nC++: void SetCursorPositionRAS(double ras[3])\n\nSet cursor position in 3D. This should be called whenever the\ncursor is moved by using a 3D positioning device (that does not\nhave an associated slice viewer). GetCursorPositionXYZ returns\nwith nullptr if SetCursorPositionRAS is used for setting the\ncursor position, so if slice position is available then\nSetCursorPositionXYZ method should be used instead (it sets both\nXYZ and RAS position, too).\n"},
  {"SetCursorPositionXYZ", PyvtkMRMLCrosshairNode_SetCursorPositionXYZ, METH_VARARGS,
   "SetCursorPositionXYZ(self, xyz:[float, float, float],\n    sliceNode:vtkMRMLSliceNode) -> None\nC++: void SetCursorPositionXYZ(double xyz[3],\n    vtkMRMLSliceNode *sliceNode)\n\nSet cursor position in a 2D slice view. The method also computes\nthe RAS position. This method should be called whenever the mouse\nmoves in a slice viewer.\n"},
  {"SetCursorPositionInvalid", PyvtkMRMLCrosshairNode_SetCursorPositionInvalid, METH_VARARGS,
   "SetCursorPositionInvalid(self) -> None\nC++: void SetCursorPositionInvalid()\n\nInvalidates the cursor position. This should be called whenever\nthe mouse moves out of a view.\n"},
  {"GetCursorPositionRAS", PyvtkMRMLCrosshairNode_GetCursorPositionRAS, METH_VARARGS,
   "GetCursorPositionRAS(self, ras:[float, float, float]) -> bool\nC++: bool GetCursorPositionRAS(double ras[3])\n\nGet the position of the cursor in the current view in RAS\ncoordinate system. Returns false if the cursor position is\nunknown. This is typically called by other classes to get the\ncurrent cursor position after receiving\nCursorPositionModifiedEvent event.\n"},
  {"GetCursorPositionXYZ", PyvtkMRMLCrosshairNode_GetCursorPositionXYZ, METH_VARARGS,
   "GetCursorPositionXYZ(self, xyz:[float, float, float])\n    -> vtkMRMLSliceNode\nC++: vtkMRMLSliceNode *GetCursorPositionXYZ(double xyz[3])\n\nGet the position of the cursor in the current view in XYZ\ncoordinate system. Returns nullptr if the cursor is not in a\nslice viewer. This is typically called by other classes to get\nthe current cursor position after receiving\nCursorPositionModifiedEvent event.\n"},
  {"SetCrosshairRAS", PyvtkMRMLCrosshairNode_SetCrosshairRAS, METH_VARARGS,
   "SetCrosshairRAS(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetCrosshairRAS(double _arg1, double _arg2,\n    double _arg3)\nSetCrosshairRAS(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCrosshairRAS(const double _arg[3])\nSetCrosshairRAS(self, ras:[float, float, float], id:int) -> None\nC++: void SetCrosshairRAS(double ras[3], int id)\n\nSet crosshair position\n"},
  {"GetCrosshairRAS", PyvtkMRMLCrosshairNode_GetCrosshairRAS, METH_VARARGS,
   "GetCrosshairRAS(self) -> (float, float, float)\nC++: virtual double *GetCrosshairRAS()\n\n"},
  {"GetLightBoxPane", PyvtkMRMLCrosshairNode_GetLightBoxPane, METH_VARARGS,
   "GetLightBoxPane(self) -> int\nC++: virtual int GetLightBoxPane()\n\nGet the pane of the lightbox that was last cached\n"},
  {"SetCrosshairName", PyvtkMRMLCrosshairNode_SetCrosshairName, METH_VARARGS,
   "SetCrosshairName(self, name:str) -> None\nC++: void SetCrosshairName(const char *name)\n\nName of the layout\n"},
  {"GetCrosshairName", PyvtkMRMLCrosshairNode_GetCrosshairName, METH_VARARGS,
   "GetCrosshairName(self) -> str\nC++: char *GetCrosshairName()\n\n"},
  {"SetFastPick3D", PyvtkMRMLCrosshairNode_SetFastPick3D, METH_VARARGS,
   "SetFastPick3D(self, _arg:bool) -> None\nC++: virtual void SetFastPick3D(bool _arg)\n\nExperimental feature to choose between fast or accurate position\ncomputation in 3D views. If fast option is chosen then Z-buffer\nin the renderer may be used for determining position along the\nview line in 3D views, which is very fast but may not give\noptimal results because semi-transparent objects, such as\nsemi-transparent models or volume-rendered images are ignored.\nThis property is only for evaluation of this feature and the\nvalue is not stored persistently in the scene file.\n"},
  {"GetFastPick3D", PyvtkMRMLCrosshairNode_GetFastPick3D, METH_VARARGS,
   "GetFastPick3D(self) -> bool\nC++: virtual bool GetFastPick3D()\n\n"},
  {"FastPick3DOn", PyvtkMRMLCrosshairNode_FastPick3DOn, METH_VARARGS,
   "FastPick3DOn(self) -> None\nC++: virtual void FastPick3DOn()\n\n"},
  {"FastPick3DOff", PyvtkMRMLCrosshairNode_FastPick3DOff, METH_VARARGS,
   "FastPick3DOff(self) -> None\nC++: virtual void FastPick3DOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLCrosshairNode_Doc =
  "vtkMRMLCrosshairNode - MRML node for storing a crosshair through RAS\nspace\n\n"
  "Superclass: vtkMRMLNode\n\n"
  "This node stores the information about a crosshair (position, style,\n"
  "attributes)\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLCrosshairNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLCrosshairNode", // tp_name
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
  PyvtkMRMLCrosshairNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLCrosshairNode_StaticNew()
{
  return vtkMRMLCrosshairNode::New();
}

PyObject *PyvtkMRMLCrosshairNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLCrosshairNode_Type, PyvtkMRMLCrosshairNode_Methods,
    "vtkMRMLCrosshairNode",
 &PyvtkMRMLCrosshairNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 19; c++)
  {
    static const struct { const char *name; int value; }
      constants[19] = {
        { "CursorPositionModifiedEvent", vtkMRMLCrosshairNode::CursorPositionModifiedEvent },
        { "NoCrosshair", vtkMRMLCrosshairNode::NoCrosshair },
        { "ShowBasic", vtkMRMLCrosshairNode::ShowBasic },
        { "ShowIntersection", vtkMRMLCrosshairNode::ShowIntersection },
        { "ShowHashmarks", vtkMRMLCrosshairNode::ShowHashmarks },
        { "ShowAll", vtkMRMLCrosshairNode::ShowAll },
        { "ShowSmallBasic", vtkMRMLCrosshairNode::ShowSmallBasic },
        { "ShowSmallIntersection", vtkMRMLCrosshairNode::ShowSmallIntersection },
        { "CrosshairMode_Last", vtkMRMLCrosshairNode::CrosshairMode_Last },
        { "Fine", vtkMRMLCrosshairNode::Fine },
        { "Medium", vtkMRMLCrosshairNode::Medium },
        { "Thick", vtkMRMLCrosshairNode::Thick },
        { "CrosshairThickness_Last", vtkMRMLCrosshairNode::CrosshairThickness_Last },
        { "NoAction", vtkMRMLCrosshairNode::NoAction },
        { "OffsetJumpSlice", vtkMRMLCrosshairNode::OffsetJumpSlice },
        { "Normal", vtkMRMLCrosshairNode::Normal },
        { "CenteredJumpSlice", vtkMRMLCrosshairNode::CenteredJumpSlice },
        { "JumpSlice", vtkMRMLCrosshairNode::JumpSlice },
        { "CrosshairBehavior_Last", vtkMRMLCrosshairNode::CrosshairBehavior_Last },
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

void PyVTKAddFile_vtkMRMLCrosshairNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLCrosshairNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLCrosshairNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

