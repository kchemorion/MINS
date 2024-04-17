// python wrapper for vtkMRMLROIListNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLROIListNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLROIListNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLROIListNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLNode_ClassNew
extern "C" { PyObject *PyvtkMRMLNode_ClassNew(); }
#define DECLARED_PyvtkMRMLNode_ClassNew
#endif

static PyObject *
PyvtkMRMLROIListNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLROIListNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLROIListNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLROIListNode *tempr = vtkMRMLROIListNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLROIListNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLROIListNode::NewInstance());

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
PyvtkMRMLROIListNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLROIListNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLROIListNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLROIListNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

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
      op->vtkMRMLROIListNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLROIListNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

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
      op->vtkMRMLROIListNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_UpdateReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateReferences();
    }
    else
    {
      op->vtkMRMLROIListNode::UpdateReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetNumberOfROIs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfROIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfROIs() :
      op->vtkMRMLROIListNode::GetNumberOfROIs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SetNthROIXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthROIXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

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
    int tempr = (ap.IsBound() ?
      op->SetNthROIXYZ(temp0, temp1, temp2, temp3) :
      op->vtkMRMLROIListNode::SetNthROIXYZ(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetNthROIXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthROIXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNthROIXYZ(temp0) :
      op->vtkMRMLROIListNode::GetNthROIXYZ(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SetNthROIRadiusXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthROIRadiusXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

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
    int tempr = (ap.IsBound() ?
      op->SetNthROIRadiusXYZ(temp0, temp1, temp2, temp3) :
      op->vtkMRMLROIListNode::SetNthROIRadiusXYZ(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetNthROIRadiusXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthROIRadiusXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNthROIRadiusXYZ(temp0) :
      op->vtkMRMLROIListNode::GetNthROIRadiusXYZ(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SetNthROIIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthROIIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

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
    int tempr = (ap.IsBound() ?
      op->SetNthROIIJK(temp0, temp1, temp2, temp3) :
      op->vtkMRMLROIListNode::SetNthROIIJK(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetNthROIIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthROIIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNthROIIJK(temp0) :
      op->vtkMRMLROIListNode::GetNthROIIJK(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SetNthROIRadiusIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthROIRadiusIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

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
    int tempr = (ap.IsBound() ?
      op->SetNthROIRadiusIJK(temp0, temp1, temp2, temp3) :
      op->vtkMRMLROIListNode::SetNthROIRadiusIJK(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetNthROIRadiusIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthROIRadiusIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNthROIRadiusIJK(temp0) :
      op->vtkMRMLROIListNode::GetNthROIRadiusIJK(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SetNthROILabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthROILabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetNthROILabelText(temp0, temp1) :
      op->vtkMRMLROIListNode::SetNthROILabelText(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetNthROILabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthROILabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthROILabelText(temp0) :
      op->vtkMRMLROIListNode::GetNthROILabelText(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SetNthROISelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthROISelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetNthROISelected(temp0, temp1) :
      op->vtkMRMLROIListNode::SetNthROISelected(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetNthROISelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthROISelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNthROISelected(temp0) :
      op->vtkMRMLROIListNode::GetNthROISelected(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SetNthROIID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthROIID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetNthROIID(temp0, temp1) :
      op->vtkMRMLROIListNode::SetNthROIID(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetNthROIID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthROIID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthROIID(temp0) :
      op->vtkMRMLROIListNode::GetNthROIID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_AddROI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddROI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->AddROI() :
      op->vtkMRMLROIListNode::AddROI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_RemoveROI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveROI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveROI(temp0);
    }
    else
    {
      op->vtkMRMLROIListNode::RemoveROI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_RemoveAllROIs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllROIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllROIs();
    }
    else
    {
      op->vtkMRMLROIListNode::RemoveAllROIs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

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
      op->vtkMRMLROIListNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLROIListNode_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

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
      op->vtkMRMLROIListNode::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVisibility() :
      op->vtkMRMLROIListNode::GetVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SetTextScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextScale(temp0);
    }
    else
    {
      op->vtkMRMLROIListNode::SetTextScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetTextScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextScale() :
      op->vtkMRMLROIListNode::GetTextScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

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
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLROIListNode::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLROIListNode_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

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
      op->SetColor(temp0);
    }
    else
    {
      op->vtkMRMLROIListNode::SetColor(temp0);
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
PyvtkMRMLROIListNode_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLROIListNode_SetColor_s1(self, args);
    case 1:
      return PyvtkMRMLROIListNode_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLROIListNode_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkMRMLROIListNode::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SetSelectedColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

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
      op->SetSelectedColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLROIListNode::SetSelectedColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLROIListNode_SetSelectedColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

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
      op->SetSelectedColor(temp0);
    }
    else
    {
      op->vtkMRMLROIListNode::SetSelectedColor(temp0);
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
PyvtkMRMLROIListNode_SetSelectedColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLROIListNode_SetSelectedColor_s1(self, args);
    case 1:
      return PyvtkMRMLROIListNode_SetSelectedColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectedColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLROIListNode_GetSelectedColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSelectedColor() :
      op->vtkMRMLROIListNode::GetSelectedColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkMRMLROIListNode::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkMRMLROIListNode::GetOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAmbient(temp0);
    }
    else
    {
      op->vtkMRMLROIListNode::SetAmbient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmbient() :
      op->vtkMRMLROIListNode::GetAmbient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiffuse(temp0);
    }
    else
    {
      op->vtkMRMLROIListNode::SetDiffuse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffuse() :
      op->vtkMRMLROIListNode::GetDiffuse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpecular(temp0);
    }
    else
    {
      op->vtkMRMLROIListNode::SetSpecular(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecular() :
      op->vtkMRMLROIListNode::GetSpecular());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SetPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPower(temp0);
    }
    else
    {
      op->vtkMRMLROIListNode::SetPower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPower() :
      op->vtkMRMLROIListNode::GetPower());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetVolumeNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVolumeNodeID() :
      op->vtkMRMLROIListNode::GetVolumeNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SetVolumeNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

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
      op->vtkMRMLROIListNode::SetVolumeNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_SetAllVolumeNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllVolumeNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAllVolumeNodeID();
    }
    else
    {
      op->vtkMRMLROIListNode::SetAllVolumeNodeID();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_UpdateIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateIJK();
    }
    else
    {
      op->vtkMRMLROIListNode::UpdateIJK();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLROIListNode_GetNthROINode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthROINode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLROIListNode *op = static_cast<vtkMRMLROIListNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLROINode *tempr = (ap.IsBound() ?
      op->GetNthROINode(temp0) :
      op->vtkMRMLROIListNode::GetNthROINode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLROIListNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLROIListNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLROIListNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLROIListNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLROIListNode\nC++: static vtkMRMLROIListNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLROIListNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLROIListNode\nC++: vtkMRMLROIListNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLROIListNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLROIListNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLROIListNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"Copy", PyvtkMRMLROIListNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLROIListNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"UpdateScene", PyvtkMRMLROIListNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\n\n"},
  {"UpdateReferences", PyvtkMRMLROIListNode_UpdateReferences, METH_VARARGS,
   "UpdateReferences(self) -> None\nC++: void UpdateReferences() override;\n\nupdate display node ids\n"},
  {"GetNumberOfROIs", PyvtkMRMLROIListNode_GetNumberOfROIs, METH_VARARGS,
   "GetNumberOfROIs(self) -> int\nC++: int GetNumberOfROIs()\n\nGet the number of ROIs in the list\n"},
  {"SetNthROIXYZ", PyvtkMRMLROIListNode_SetNthROIXYZ, METH_VARARGS,
   "SetNthROIXYZ(self, n:int, x:float, y:float, z:float) -> int\nC++: int SetNthROIXYZ(int n, double x, double y, double z)\n\nRestrict access to the ROI, pass in a value via the list so that\nthe appropriate events can be invoked. Returns 0 on success\n\nGet/Set for Nth ROI node Position in RAS coordinates Note: The\nROI Position is the center of the ROI\n"},
  {"GetNthROIXYZ", PyvtkMRMLROIListNode_GetNthROIXYZ, METH_VARARGS,
   "GetNthROIXYZ(self, n:int) -> Pointer\nC++: double *GetNthROIXYZ(int n)\n\n"},
  {"SetNthROIRadiusXYZ", PyvtkMRMLROIListNode_SetNthROIRadiusXYZ, METH_VARARGS,
   "SetNthROIRadiusXYZ(self, n:int, Radiusx:float, Radiusy:float,\n    Radiusz:float) -> int\nC++: int SetNthROIRadiusXYZ(int n, double Radiusx, double Radiusy,\n     double Radiusz)\n\nGet/Set for Nth radius of the ROI in RAS coordinates\n"},
  {"GetNthROIRadiusXYZ", PyvtkMRMLROIListNode_GetNthROIRadiusXYZ, METH_VARARGS,
   "GetNthROIRadiusXYZ(self, n:int) -> Pointer\nC++: double *GetNthROIRadiusXYZ(int n)\n\n"},
  {"SetNthROIIJK", PyvtkMRMLROIListNode_SetNthROIIJK, METH_VARARGS,
   "SetNthROIIJK(self, n:int, i:float, j:float, k:float) -> int\nC++: int SetNthROIIJK(int n, double i, double j, double k)\n\nGet/Set for Nth ROI node Position in IJK coordinates Note: The\nROI Position is the center of the ROI\n"},
  {"GetNthROIIJK", PyvtkMRMLROIListNode_GetNthROIIJK, METH_VARARGS,
   "GetNthROIIJK(self, n:int) -> Pointer\nC++: double *GetNthROIIJK(int n)\n\n"},
  {"SetNthROIRadiusIJK", PyvtkMRMLROIListNode_SetNthROIRadiusIJK, METH_VARARGS,
   "SetNthROIRadiusIJK(self, n:int, Radiusi:float, Radiusj:float,\n    Radiusk:float) -> int\nC++: int SetNthROIRadiusIJK(int n, double Radiusi, double Radiusj,\n     double Radiusk)\n\nGet/Set for Nth radius of the ROI in IJK coordinates\n"},
  {"GetNthROIRadiusIJK", PyvtkMRMLROIListNode_GetNthROIRadiusIJK, METH_VARARGS,
   "GetNthROIRadiusIJK(self, n:int) -> Pointer\nC++: double *GetNthROIRadiusIJK(int n)\n\n"},
  {"SetNthROILabelText", PyvtkMRMLROIListNode_SetNthROILabelText, METH_VARARGS,
   "SetNthROILabelText(self, n:int, text:str) -> int\nC++: int SetNthROILabelText(int n, const char *text)\n\nGet/Set for label text of the Nth ROI\n"},
  {"GetNthROILabelText", PyvtkMRMLROIListNode_GetNthROILabelText, METH_VARARGS,
   "GetNthROILabelText(self, n:int) -> str\nC++: const char *GetNthROILabelText(int n)\n\n"},
  {"SetNthROISelected", PyvtkMRMLROIListNode_SetNthROISelected, METH_VARARGS,
   "SetNthROISelected(self, n:int, flag:int) -> int\nC++: int SetNthROISelected(int n, int flag)\n\nGet/Set for selected flag of the Nth ROI\n"},
  {"GetNthROISelected", PyvtkMRMLROIListNode_GetNthROISelected, METH_VARARGS,
   "GetNthROISelected(self, n:int) -> int\nC++: int GetNthROISelected(int n)\n\n"},
  {"SetNthROIID", PyvtkMRMLROIListNode_SetNthROIID, METH_VARARGS,
   "SetNthROIID(self, n:int, id:str) -> int\nC++: int SetNthROIID(int n, const char *id)\n\nGet/Set for ID of the Nth ROI\n"},
  {"GetNthROIID", PyvtkMRMLROIListNode_GetNthROIID, METH_VARARGS,
   "GetNthROIID(self, n:int) -> str\nC++: const char *GetNthROIID(int n)\n\n"},
  {"AddROI", PyvtkMRMLROIListNode_AddROI, METH_VARARGS,
   "AddROI(self) -> int\nC++: int AddROI()\n\nAdd an ROI to the list with default values\n"},
  {"RemoveROI", PyvtkMRMLROIListNode_RemoveROI, METH_VARARGS,
   "RemoveROI(self, i:int) -> None\nC++: void RemoveROI(int i)\n\nRemove an ROI from the list\n"},
  {"RemoveAllROIs", PyvtkMRMLROIListNode_RemoveAllROIs, METH_VARARGS,
   "RemoveAllROIs(self) -> None\nC++: void RemoveAllROIs()\n\nRemove all ROIs from the list\n"},
  {"ProcessMRMLEvents", PyvtkMRMLROIListNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nPropagate events generated in mrml.\n"},
  {"SetVisibility", PyvtkMRMLROIListNode_SetVisibility, METH_VARARGS,
   "SetVisibility(self, visible:int) -> None\nC++: void SetVisibility(int visible)\n\nGet/Set for list visibility\n"},
  {"GetVisibility", PyvtkMRMLROIListNode_GetVisibility, METH_VARARGS,
   "GetVisibility(self) -> int\nC++: virtual int GetVisibility()\n\n"},
  {"SetTextScale", PyvtkMRMLROIListNode_SetTextScale, METH_VARARGS,
   "SetTextScale(self, scale:float) -> None\nC++: void SetTextScale(double scale)\n\nGet/Set for Text scale\n"},
  {"GetTextScale", PyvtkMRMLROIListNode_GetTextScale, METH_VARARGS,
   "GetTextScale(self) -> float\nC++: virtual double GetTextScale()\n\n"},
  {"SetColor", PyvtkMRMLROIListNode_SetColor, METH_VARARGS,
   "SetColor(self, r:float, g:float, b:float) -> None\nC++: void SetColor(double r, double g, double b)\nSetColor(self, c:[float, float, float]) -> None\nC++: void SetColor(double c[3])\n\nGet/Set for ROI and Text color\n"},
  {"GetColor", PyvtkMRMLROIListNode_GetColor, METH_VARARGS,
   "GetColor(self) -> (float, float, float)\nC++: virtual double *GetColor()\n\n"},
  {"SetSelectedColor", PyvtkMRMLROIListNode_SetSelectedColor, METH_VARARGS,
   "SetSelectedColor(self, r:float, g:float, b:float) -> None\nC++: void SetSelectedColor(double r, double g, double b)\nSetSelectedColor(self, c:[float, float, float]) -> None\nC++: void SetSelectedColor(double c[3])\n\nGet/Set for color for when an ROI is selected\n"},
  {"GetSelectedColor", PyvtkMRMLROIListNode_GetSelectedColor, METH_VARARGS,
   "GetSelectedColor(self) -> (float, float, float)\nC++: virtual double *GetSelectedColor()\n\n"},
  {"SetOpacity", PyvtkMRMLROIListNode_SetOpacity, METH_VARARGS,
   "SetOpacity(self, opacity:float) -> None\nC++: void SetOpacity(double opacity)\n\nOpacity of the ROI expressed as a number from 0 to 1\n"},
  {"GetOpacity", PyvtkMRMLROIListNode_GetOpacity, METH_VARARGS,
   "GetOpacity(self) -> float\nC++: virtual double GetOpacity()\n\n"},
  {"SetAmbient", PyvtkMRMLROIListNode_SetAmbient, METH_VARARGS,
   "SetAmbient(self, _arg:float) -> None\nC++: virtual void SetAmbient(double _arg)\n\nAmbient of the ROI expressed as a number from 0 to 100\n"},
  {"GetAmbient", PyvtkMRMLROIListNode_GetAmbient, METH_VARARGS,
   "GetAmbient(self) -> float\nC++: virtual double GetAmbient()\n\n"},
  {"SetDiffuse", PyvtkMRMLROIListNode_SetDiffuse, METH_VARARGS,
   "SetDiffuse(self, _arg:float) -> None\nC++: virtual void SetDiffuse(double _arg)\n\nDiffuse of the ROI expressed as a number from 0 to 100\n"},
  {"GetDiffuse", PyvtkMRMLROIListNode_GetDiffuse, METH_VARARGS,
   "GetDiffuse(self) -> float\nC++: virtual double GetDiffuse()\n\n"},
  {"SetSpecular", PyvtkMRMLROIListNode_SetSpecular, METH_VARARGS,
   "SetSpecular(self, _arg:float) -> None\nC++: virtual void SetSpecular(double _arg)\n\nSpecular of the ROI expressed as a number from 0 to 100\n"},
  {"GetSpecular", PyvtkMRMLROIListNode_GetSpecular, METH_VARARGS,
   "GetSpecular(self) -> float\nC++: virtual double GetSpecular()\n\n"},
  {"SetPower", PyvtkMRMLROIListNode_SetPower, METH_VARARGS,
   "SetPower(self, _arg:float) -> None\nC++: virtual void SetPower(double _arg)\n\nPower of the ROI expressed as a number from 0 to 100\n"},
  {"GetPower", PyvtkMRMLROIListNode_GetPower, METH_VARARGS,
   "GetPower(self) -> float\nC++: virtual double GetPower()\n\n"},
  {"GetVolumeNodeID", PyvtkMRMLROIListNode_GetVolumeNodeID, METH_VARARGS,
   "GetVolumeNodeID(self) -> str\nC++: virtual char *GetVolumeNodeID()\n\nGet/Set for the volume ID associated with the ROI\n"},
  {"SetVolumeNodeID", PyvtkMRMLROIListNode_SetVolumeNodeID, METH_VARARGS,
   "SetVolumeNodeID(self, _arg:str) -> None\nC++: virtual void SetVolumeNodeID(const char *_arg)\n\n"},
  {"SetAllVolumeNodeID", PyvtkMRMLROIListNode_SetAllVolumeNodeID, METH_VARARGS,
   "SetAllVolumeNodeID(self) -> None\nC++: void SetAllVolumeNodeID()\n\nSet the Volume node ID for each ROI node in the list\n"},
  {"UpdateIJK", PyvtkMRMLROIListNode_UpdateIJK, METH_VARARGS,
   "UpdateIJK(self) -> None\nC++: void UpdateIJK()\n\nSynchronize the ROI position and radius in IJK coordinates\naccording RAS coordinates\n"},
  {"GetNthROINode", PyvtkMRMLROIListNode_GetNthROINode, METH_VARARGS,
   "GetNthROINode(self, n:int) -> vtkMRMLROINode\nC++: vtkMRMLROINode *GetNthROINode(int n)\n\ndisallow access to the ROI box by outside classes, have them use\nSetNthROI\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLROIListNode_Doc =
  "vtkMRMLROIListNode - MRML list node to represent a list of ROINODE.\n\n"
  "Superclass: vtkMRMLNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLROIListNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLROIListNode", // tp_name
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
  PyvtkMRMLROIListNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLROIListNode_StaticNew()
{
  return vtkMRMLROIListNode::New();
}

PyObject *PyvtkMRMLROIListNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLROIListNode_Type, PyvtkMRMLROIListNode_Methods,
    "vtkMRMLROIListNode",
 &PyvtkMRMLROIListNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "DisplayModifiedEvent", vtkMRMLROIListNode::DisplayModifiedEvent },
        { "PolyDataModifiedEvent", vtkMRMLROIListNode::PolyDataModifiedEvent },
        { "ROIModifiedEvent", vtkMRMLROIListNode::ROIModifiedEvent },
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

void PyVTKAddFile_vtkMRMLROIListNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLROIListNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLROIListNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

