// python wrapper for vtkMRMLAnnotationROINode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLAnnotationROINode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLAnnotationROINode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLAnnotationROINode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAnnotationLinesNode_ClassNew
extern "C" { PyObject *PyvtkMRMLAnnotationLinesNode_ClassNew(); }
#define DECLARED_PyvtkMRMLAnnotationLinesNode_ClassNew
#endif

static PyObject *
PyvtkMRMLAnnotationROINode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAnnotationROINode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLAnnotationROINode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLAnnotationROINode *tempr = vtkMRMLAnnotationROINode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAnnotationROINode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLAnnotationROINode::NewInstance());

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
PyvtkMRMLAnnotationROINode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLAnnotationROINode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLAnnotationROINode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLAnnotationROINode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLAnnotationROINode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_GetIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIcon() :
      op->vtkMRMLAnnotationROINode::GetIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->vtkMRMLAnnotationROINode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLAnnotationROINode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->vtkMRMLAnnotationROINode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->vtkMRMLAnnotationROINode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLAnnotationROINode_InteractiveModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveModeOn();
    }
    else
    {
      op->vtkMRMLAnnotationROINode::InteractiveModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_InteractiveModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveModeOff();
    }
    else
    {
      op->vtkMRMLAnnotationROINode::InteractiveModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_GetInteractiveMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractiveMode() :
      op->vtkMRMLAnnotationROINode::GetInteractiveMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_SetInteractiveMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractiveMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->vtkMRMLAnnotationROINode::SetInteractiveMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkMRMLAnnotationROINode::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkMRMLAnnotationROINode::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkMRMLAnnotationROINode::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->vtkMRMLAnnotationROINode::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_GetROIAnnotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetROIAnnotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetROIAnnotationScale() :
      op->vtkMRMLAnnotationROINode::GetROIAnnotationScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_SetROIAnnotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetROIAnnotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetROIAnnotationScale(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationROINode::SetROIAnnotationScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_GetROIAnnotationVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetROIAnnotationVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetROIAnnotationVisibility() :
      op->vtkMRMLAnnotationROINode::GetROIAnnotationVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_SetROIAnnotationVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetROIAnnotationVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetROIAnnotationVisibility(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationROINode::SetROIAnnotationVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_GetPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPointColor() :
      op->vtkMRMLAnnotationROINode::GetPointColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_SetPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->SetPointColor(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationROINode::SetPointColor(temp0);
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
PyvtkMRMLAnnotationROINode_GetLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLineColor() :
      op->vtkMRMLAnnotationROINode::GetLineColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_SetLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->SetLineColor(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationROINode::SetLineColor(temp0);
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
PyvtkMRMLAnnotationROINode_GetROIAnnotationTextColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetROIAnnotationTextColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetROIAnnotationTextColor() :
      op->vtkMRMLAnnotationROINode::GetROIAnnotationTextColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_SetROIAnnotationTextColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetROIAnnotationTextColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->SetROIAnnotationTextColor(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationROINode::SetROIAnnotationTextColor(temp0);
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
PyvtkMRMLAnnotationROINode_ApplyTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->vtkMRMLAnnotationROINode::ApplyTransformMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_ApplyTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->vtkMRMLAnnotationROINode::ApplyTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_GetTransformedPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->vtkMRMLAnnotationROINode::GetTransformedPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationROINode::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_GetXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->vtkMRMLAnnotationROINode::GetXYZ(temp0));

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
PyvtkMRMLAnnotationROINode_SetXYZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->vtkMRMLAnnotationROINode::SetXYZ(temp0));

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
PyvtkMRMLAnnotationROINode_SetXYZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->vtkMRMLAnnotationROINode::SetXYZ(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationROINode_SetXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLAnnotationROINode_SetXYZ_s1(self, args);
    case 3:
      return PyvtkMRMLAnnotationROINode_SetXYZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXYZ");
  return nullptr;
}


static PyObject *
PyvtkMRMLAnnotationROINode_GetRadiusXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetRadiusXYZ(temp0) :
      op->vtkMRMLAnnotationROINode::GetRadiusXYZ(temp0));

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
PyvtkMRMLAnnotationROINode_SetRadiusXYZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetRadiusXYZ(temp0) :
      op->vtkMRMLAnnotationROINode::SetRadiusXYZ(temp0));

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
PyvtkMRMLAnnotationROINode_SetRadiusXYZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->SetRadiusXYZ(temp0, temp1, temp2) :
      op->vtkMRMLAnnotationROINode::SetRadiusXYZ(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationROINode_SetRadiusXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLAnnotationROINode_SetRadiusXYZ_s1(self, args);
    case 3:
      return PyvtkMRMLAnnotationROINode_SetRadiusXYZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRadiusXYZ");
  return nullptr;
}


static PyObject *
PyvtkMRMLAnnotationROINode_SetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->vtkMRMLAnnotationROINode::SetLabelText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_GetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelText() :
      op->vtkMRMLAnnotationROINode::GetLabelText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_GetVolumeNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVolumeNodeID() :
      op->vtkMRMLAnnotationROINode::GetVolumeNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_SetVolumeNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->vtkMRMLAnnotationROINode::SetVolumeNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationROINode_GetRASBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRASBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->vtkMRMLAnnotationROINode::GetRASBounds(temp0);
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
PyvtkMRMLAnnotationROINode_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationROINode *op = static_cast<vtkMRMLAnnotationROINode *>(vp);

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
      op->vtkMRMLAnnotationROINode::GetBounds(temp0);
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

static PyMethodDef PyvtkMRMLAnnotationROINode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLAnnotationROINode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLAnnotationROINode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLAnnotationROINode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLAnnotationROINode\nC++: static vtkMRMLAnnotationROINode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLAnnotationROINode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLAnnotationROINode\nC++: vtkMRMLAnnotationROINode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLAnnotationROINode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLAnnotationROINode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLAnnotationROINode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"GetNodeTagName", PyvtkMRMLAnnotationROINode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nDescription: Get node XML tag name (like Volume, Model)\n"},
  {"GetIcon", PyvtkMRMLAnnotationROINode_GetIcon, METH_VARARGS,
   "GetIcon(self) -> str\nC++: const char *GetIcon() override;\n\n"},
  {"CopyContent", PyvtkMRMLAnnotationROINode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLAnnotationROINode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"UpdateScene", PyvtkMRMLAnnotationROINode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data\n"},
  {"ProcessMRMLEvents", PyvtkMRMLAnnotationROINode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nDescription: alternative method to propagate events generated in\nDisplay nodes\n"},
  {"InteractiveModeOn", PyvtkMRMLAnnotationROINode_InteractiveModeOn, METH_VARARGS,
   "InteractiveModeOn(self) -> None\nC++: virtual void InteractiveModeOn()\n\nIndicates if the ROI is updated interactively\n"},
  {"InteractiveModeOff", PyvtkMRMLAnnotationROINode_InteractiveModeOff, METH_VARARGS,
   "InteractiveModeOff(self) -> None\nC++: virtual void InteractiveModeOff()\n\n"},
  {"GetInteractiveMode", PyvtkMRMLAnnotationROINode_GetInteractiveMode, METH_VARARGS,
   "GetInteractiveMode(self) -> int\nC++: virtual int GetInteractiveMode()\n\n"},
  {"SetInteractiveMode", PyvtkMRMLAnnotationROINode_SetInteractiveMode, METH_VARARGS,
   "SetInteractiveMode(self, _arg:int) -> None\nC++: virtual void SetInteractiveMode(int _arg)\n\n"},
  {"InsideOutOn", PyvtkMRMLAnnotationROINode_InsideOutOn, METH_VARARGS,
   "InsideOutOn(self) -> None\nC++: virtual void InsideOutOn()\n\nIndicates if the ROI box is inside out\n"},
  {"InsideOutOff", PyvtkMRMLAnnotationROINode_InsideOutOff, METH_VARARGS,
   "InsideOutOff(self) -> None\nC++: virtual void InsideOutOff()\n\n"},
  {"GetInsideOut", PyvtkMRMLAnnotationROINode_GetInsideOut, METH_VARARGS,
   "GetInsideOut(self) -> int\nC++: virtual int GetInsideOut()\n\n"},
  {"SetInsideOut", PyvtkMRMLAnnotationROINode_SetInsideOut, METH_VARARGS,
   "SetInsideOut(self, _arg:int) -> None\nC++: virtual void SetInsideOut(int _arg)\n\n"},
  {"GetROIAnnotationScale", PyvtkMRMLAnnotationROINode_GetROIAnnotationScale, METH_VARARGS,
   "GetROIAnnotationScale(self) -> float\nC++: double GetROIAnnotationScale()\n\nDescription: KP Define - should be part of\nAnnotationRulerDisplayNode\n"},
  {"SetROIAnnotationScale", PyvtkMRMLAnnotationROINode_SetROIAnnotationScale, METH_VARARGS,
   "SetROIAnnotationScale(self, init:float) -> None\nC++: void SetROIAnnotationScale(double init)\n\n"},
  {"GetROIAnnotationVisibility", PyvtkMRMLAnnotationROINode_GetROIAnnotationVisibility, METH_VARARGS,
   "GetROIAnnotationVisibility(self) -> int\nC++: int GetROIAnnotationVisibility()\n\nDescription: get/set the visibility of any text associated with\nthe ROI\n"},
  {"SetROIAnnotationVisibility", PyvtkMRMLAnnotationROINode_SetROIAnnotationVisibility, METH_VARARGS,
   "SetROIAnnotationVisibility(self, flag:int) -> None\nC++: void SetROIAnnotationVisibility(int flag)\n\n"},
  {"GetPointColor", PyvtkMRMLAnnotationROINode_GetPointColor, METH_VARARGS,
   "GetPointColor(self) -> Pointer\nC++: double *GetPointColor()\n\nDescription: get/set the point representation color\n"},
  {"SetPointColor", PyvtkMRMLAnnotationROINode_SetPointColor, METH_VARARGS,
   "SetPointColor(self, initColor:[float, float, float]) -> None\nC++: void SetPointColor(double initColor[3])\n\n"},
  {"GetLineColor", PyvtkMRMLAnnotationROINode_GetLineColor, METH_VARARGS,
   "GetLineColor(self) -> Pointer\nC++: double *GetLineColor()\n\nDescription: get/set the line representation color\n"},
  {"SetLineColor", PyvtkMRMLAnnotationROINode_SetLineColor, METH_VARARGS,
   "SetLineColor(self, newColor:[float, float, float]) -> None\nC++: void SetLineColor(double newColor[3])\n\n"},
  {"GetROIAnnotationTextColor", PyvtkMRMLAnnotationROINode_GetROIAnnotationTextColor, METH_VARARGS,
   "GetROIAnnotationTextColor(self) -> Pointer\nC++: double *GetROIAnnotationTextColor()\n\nDescription: get/set the ROI annotation text color\n"},
  {"SetROIAnnotationTextColor", PyvtkMRMLAnnotationROINode_SetROIAnnotationTextColor, METH_VARARGS,
   "SetROIAnnotationTextColor(self, initColor:[float, float, float])\n    -> None\nC++: void SetROIAnnotationTextColor(double initColor[3])\n\n"},
  {"ApplyTransformMatrix", PyvtkMRMLAnnotationROINode_ApplyTransformMatrix, METH_VARARGS,
   "ApplyTransformMatrix(self, transformMatrix:vtkMatrix4x4) -> None\nC++: void ApplyTransformMatrix(vtkMatrix4x4 *transformMatrix)\n    override;\n\nDescription: transform utility functions\n"},
  {"ApplyTransform", PyvtkMRMLAnnotationROINode_ApplyTransform, METH_VARARGS,
   "ApplyTransform(self, transform:vtkAbstractTransform) -> None\nC++: void ApplyTransform(vtkAbstractTransform *transform)\n    override;\n\nTransforms the node with the provided non-linear transform.\n\\sa SetAndObserveTransformNodeID, ApplyTransformMatrix,\n    CanApplyNonLinearTransforms\n"},
  {"GetTransformedPlanes", PyvtkMRMLAnnotationROINode_GetTransformedPlanes, METH_VARARGS,
   "GetTransformedPlanes(self, planes:vtkPlanes) -> None\nC++: virtual void GetTransformedPlanes(vtkPlanes *planes)\n\n"},
  {"Initialize", PyvtkMRMLAnnotationROINode_Initialize, METH_VARARGS,
   "Initialize(self, mrmlScene:vtkMRMLScene) -> None\nC++: void Initialize(vtkMRMLScene *mrmlScene) override;\n\nDescription: Add ROI to scene and add display nodes\n"},
  {"GetXYZ", PyvtkMRMLAnnotationROINode_GetXYZ, METH_VARARGS,
   "GetXYZ(self, point:[float, float, float]) -> bool\nC++: bool GetXYZ(double point[3])\n\nGet/Set for ROI Position in RAS coordinates Note: The ROI\nPosition is the center of the ROI Old API: void SetXYZ(double X,\ndouble Y, double Z); void SetXYZ(double* XYZ);\nvtkGetVectorMacro(XYZ,double,3); returns true and control point\ncoordinate 0 on success, false and 0,0,0 on failure\n"},
  {"SetXYZ", PyvtkMRMLAnnotationROINode_SetXYZ, METH_VARARGS,
   "SetXYZ(self, newControl:[float, float, float]) -> int\nC++: int SetXYZ(double newControl[3])\nSetXYZ(self, nC1:float, nC2:float, nC3:float) -> int\nC++: int SetXYZ(double nC1, double nC2, double nC3)\n\n"},
  {"GetRadiusXYZ", PyvtkMRMLAnnotationROINode_GetRadiusXYZ, METH_VARARGS,
   "GetRadiusXYZ(self, point:[float, float, float]) -> bool\nC++: bool GetRadiusXYZ(double point[3])\n\nGet/Set for radius of the ROI in RAS coordinates Old API: void\nSetRadiusXYZ(double RadiusX, double RadiusY, double RadiusZ);\nvoid SetRadiusXYZ(double* RadiusXYZ);\nvtkGetVectorMacro(RadiusXYZ,double,3);\n"},
  {"SetRadiusXYZ", PyvtkMRMLAnnotationROINode_SetRadiusXYZ, METH_VARARGS,
   "SetRadiusXYZ(self, newControl:[float, float, float]) -> int\nC++: int SetRadiusXYZ(double newControl[3])\nSetRadiusXYZ(self, nC1:float, nC2:float, nC3:float) -> int\nC++: int SetRadiusXYZ(double nC1, double nC2, double nC3)\n\n"},
  {"SetLabelText", PyvtkMRMLAnnotationROINode_SetLabelText, METH_VARARGS,
   "SetLabelText(self, _arg:str) -> None\nC++: virtual void SetLabelText(const char *_arg)\n\nGet/Set for LabelText\n"},
  {"GetLabelText", PyvtkMRMLAnnotationROINode_GetLabelText, METH_VARARGS,
   "GetLabelText(self) -> str\nC++: virtual char *GetLabelText()\n\n"},
  {"GetVolumeNodeID", PyvtkMRMLAnnotationROINode_GetVolumeNodeID, METH_VARARGS,
   "GetVolumeNodeID(self) -> str\nC++: virtual char *GetVolumeNodeID()\n\nGet/Set for the volume node ID associated with this ROI\n"},
  {"SetVolumeNodeID", PyvtkMRMLAnnotationROINode_SetVolumeNodeID, METH_VARARGS,
   "SetVolumeNodeID(self, _arg:str) -> None\nC++: virtual void SetVolumeNodeID(const char *_arg)\n\n"},
  {"GetRASBounds", PyvtkMRMLAnnotationROINode_GetRASBounds, METH_VARARGS,
   "GetRASBounds(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void GetRASBounds(double bounds[6]) override;\n\nGet bounding box in global RAS form (xmin,xmax, ymin,ymax,\nzmin,zmax). The default implementation in the model node would\nnot work correctly, as the polydata in this class is used for\nstoring the centerpoint position and radius.\n\\sa GetBounds()\n"},
  {"GetBounds", PyvtkMRMLAnnotationROINode_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nGet bounding box in global RAS form (xmin,xmax, ymin,ymax,\nzmin,zmax). This method always returns the bounds of the\nuntransformed object.\n\\sa GetRASBounds()\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLAnnotationROINode_Doc =
  "vtkMRMLAnnotationROINode - no description provided.\n\n"
  "Superclass: vtkMRMLAnnotationLinesNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAnnotationROINode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerAnnotationsModuleMRMLPython.vtkMRMLAnnotationROINode", // tp_name
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
  PyvtkMRMLAnnotationROINode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLAnnotationROINode_StaticNew()
{
  return vtkMRMLAnnotationROINode::New();
}

PyObject *PyvtkMRMLAnnotationROINode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLAnnotationROINode_Type, PyvtkMRMLAnnotationROINode_Methods,
    "vtkMRMLAnnotationROINode",
 &PyvtkMRMLAnnotationROINode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAnnotationLinesNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "ROINodeAddedEvent", vtkMRMLAnnotationROINode::ROINodeAddedEvent },
        { "ValueModifiedEvent", vtkMRMLAnnotationROINode::ValueModifiedEvent },
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

void PyVTKAddFile_vtkMRMLAnnotationROINode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLAnnotationROINode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLAnnotationROINode", o) != 0)
  {
    Py_DECREF(o);
  }

}

