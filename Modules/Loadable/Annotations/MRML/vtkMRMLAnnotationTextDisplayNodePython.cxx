// python wrapper for vtkMRMLAnnotationTextDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLAnnotationTextDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLAnnotationTextDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLAnnotationTextDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAnnotationDisplayNode_ClassNew
extern "C" { PyObject *PyvtkMRMLAnnotationDisplayNode_ClassNew(); }
#define DECLARED_PyvtkMRMLAnnotationDisplayNode_ClassNew
#endif

static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAnnotationTextDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLAnnotationTextDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLAnnotationTextDisplayNode *tempr = vtkMRMLAnnotationTextDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAnnotationTextDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLAnnotationTextDisplayNode::NewInstance());

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
PyvtkMRMLAnnotationTextDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLAnnotationTextDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLAnnotationTextDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLAnnotationTextDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

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
      op->vtkMRMLAnnotationTextDisplayNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLAnnotationTextDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

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
      op->vtkMRMLAnnotationTextDisplayNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

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
      op->vtkMRMLAnnotationTextDisplayNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLAnnotationTextDisplayNode_SetTextScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

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
      op->vtkMRMLAnnotationTextDisplayNode::SetTextScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetTextScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextScale() :
      op->vtkMRMLAnnotationTextDisplayNode::GetTextScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_SetUseLineWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLineWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseLineWrap(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::SetUseLineWrap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetUseLineWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLineWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseLineWrap() :
      op->vtkMRMLAnnotationTextDisplayNode::GetUseLineWrap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_UseLineWrapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLineWrapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLineWrapOn();
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::UseLineWrapOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_UseLineWrapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLineWrapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLineWrapOff();
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::UseLineWrapOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_SetMaxCharactersPerLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxCharactersPerLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxCharactersPerLine(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::SetMaxCharactersPerLine(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetMaxCharactersPerLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCharactersPerLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaxCharactersPerLine() :
      op->vtkMRMLAnnotationTextDisplayNode::GetMaxCharactersPerLine());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_SetShowBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowBorder(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::SetShowBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetShowBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowBorder() :
      op->vtkMRMLAnnotationTextDisplayNode::GetShowBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_ShowBorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowBorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowBorderOn();
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::ShowBorderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_ShowBorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowBorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowBorderOff();
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::ShowBorderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_SetShowLeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowLeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowLeader(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::SetShowLeader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetShowLeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowLeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowLeader() :
      op->vtkMRMLAnnotationTextDisplayNode::GetShowLeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_ShowLeaderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowLeaderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowLeaderOn();
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::ShowLeaderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_ShowLeaderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowLeaderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowLeaderOff();
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::ShowLeaderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_SetUseThreeDimensionalLeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseThreeDimensionalLeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseThreeDimensionalLeader(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::SetUseThreeDimensionalLeader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetUseThreeDimensionalLeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseThreeDimensionalLeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseThreeDimensionalLeader() :
      op->vtkMRMLAnnotationTextDisplayNode::GetUseThreeDimensionalLeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_UseThreeDimensionalLeaderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseThreeDimensionalLeaderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseThreeDimensionalLeaderOn();
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::UseThreeDimensionalLeaderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_UseThreeDimensionalLeaderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseThreeDimensionalLeaderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseThreeDimensionalLeaderOff();
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::UseThreeDimensionalLeaderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_SetShowArrowHead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowArrowHead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowArrowHead(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::SetShowArrowHead(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetShowArrowHead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowArrowHead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowArrowHead() :
      op->vtkMRMLAnnotationTextDisplayNode::GetShowArrowHead());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_ShowArrowHeadOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowArrowHeadOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowArrowHeadOn();
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::ShowArrowHeadOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_ShowArrowHeadOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowArrowHeadOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowArrowHeadOff();
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::ShowArrowHeadOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_SetLeaderGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeaderGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeaderGlyphSize(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::SetLeaderGlyphSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetLeaderGlyphSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeaderGlyphSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLeaderGlyphSizeMinValue() :
      op->vtkMRMLAnnotationTextDisplayNode::GetLeaderGlyphSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetLeaderGlyphSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeaderGlyphSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLeaderGlyphSizeMaxValue() :
      op->vtkMRMLAnnotationTextDisplayNode::GetLeaderGlyphSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetLeaderGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeaderGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLeaderGlyphSize() :
      op->vtkMRMLAnnotationTextDisplayNode::GetLeaderGlyphSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_SetMaximumLeaderGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLeaderGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumLeaderGlyphSize(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::SetMaximumLeaderGlyphSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetMaximumLeaderGlyphSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLeaderGlyphSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLeaderGlyphSizeMinValue() :
      op->vtkMRMLAnnotationTextDisplayNode::GetMaximumLeaderGlyphSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetMaximumLeaderGlyphSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLeaderGlyphSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLeaderGlyphSizeMaxValue() :
      op->vtkMRMLAnnotationTextDisplayNode::GetMaximumLeaderGlyphSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetMaximumLeaderGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLeaderGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLeaderGlyphSize() :
      op->vtkMRMLAnnotationTextDisplayNode::GetMaximumLeaderGlyphSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::SetPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetPaddingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingMinValue() :
      op->vtkMRMLAnnotationTextDisplayNode::GetPaddingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetPaddingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingMaxValue() :
      op->vtkMRMLAnnotationTextDisplayNode::GetPaddingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkMRMLAnnotationTextDisplayNode::GetPadding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_SetAttachEdgeOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttachEdgeOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttachEdgeOnly(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::SetAttachEdgeOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetAttachEdgeOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttachEdgeOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttachEdgeOnly() :
      op->vtkMRMLAnnotationTextDisplayNode::GetAttachEdgeOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_AttachEdgeOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttachEdgeOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AttachEdgeOnlyOn();
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::AttachEdgeOnlyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_AttachEdgeOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttachEdgeOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AttachEdgeOnlyOff();
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::AttachEdgeOnlyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_CreateBackup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateBackup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateBackup();
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::CreateBackup();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_RestoreBackup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreBackup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestoreBackup();
    }
    else
    {
      op->vtkMRMLAnnotationTextDisplayNode::RestoreBackup();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationTextDisplayNode_GetLineWrappedText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWrappedText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationTextDisplayNode *op = static_cast<vtkMRMLAnnotationTextDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetLineWrappedText(temp0) :
      op->vtkMRMLAnnotationTextDisplayNode::GetLineWrappedText(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLAnnotationTextDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLAnnotationTextDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLAnnotationTextDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLAnnotationTextDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLAnnotationTextDisplayNode\nC++: static vtkMRMLAnnotationTextDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLAnnotationTextDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLAnnotationTextDisplayNode\nC++: vtkMRMLAnnotationTextDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLAnnotationTextDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLAnnotationTextDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLAnnotationTextDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"Copy", PyvtkMRMLAnnotationTextDisplayNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLAnnotationTextDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Annotation)\n"},
  {"UpdateScene", PyvtkMRMLAnnotationTextDisplayNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data\n"},
  {"ProcessMRMLEvents", PyvtkMRMLAnnotationTextDisplayNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"SetTextScale", PyvtkMRMLAnnotationTextDisplayNode_SetTextScale, METH_VARARGS,
   "SetTextScale(self, scale:float) -> None\nC++: void SetTextScale(double scale)\n\nGet/Set for Text scale\n"},
  {"GetTextScale", PyvtkMRMLAnnotationTextDisplayNode_GetTextScale, METH_VARARGS,
   "GetTextScale(self) -> float\nC++: virtual double GetTextScale()\n\nGet/Set for Text scale\n"},
  {"SetUseLineWrap", PyvtkMRMLAnnotationTextDisplayNode_SetUseLineWrap, METH_VARARGS,
   "SetUseLineWrap(self, _arg:int) -> None\nC++: virtual void SetUseLineWrap(int _arg)\n\nEnable/disable using automatic line wrap on text lines that are\nlonger than MaxCharactersPerLine\n"},
  {"GetUseLineWrap", PyvtkMRMLAnnotationTextDisplayNode_GetUseLineWrap, METH_VARARGS,
   "GetUseLineWrap(self) -> int\nC++: virtual int GetUseLineWrap()\n\n"},
  {"UseLineWrapOn", PyvtkMRMLAnnotationTextDisplayNode_UseLineWrapOn, METH_VARARGS,
   "UseLineWrapOn(self) -> None\nC++: virtual void UseLineWrapOn()\n\n"},
  {"UseLineWrapOff", PyvtkMRMLAnnotationTextDisplayNode_UseLineWrapOff, METH_VARARGS,
   "UseLineWrapOff(self) -> None\nC++: virtual void UseLineWrapOff()\n\n"},
  {"SetMaxCharactersPerLine", PyvtkMRMLAnnotationTextDisplayNode_SetMaxCharactersPerLine, METH_VARARGS,
   "SetMaxCharactersPerLine(self, _arg:int) -> None\nC++: virtual void SetMaxCharactersPerLine(unsigned int _arg)\n\nSet the maximum number of characters in a text line, used if\nUseLineWrap is true\n"},
  {"GetMaxCharactersPerLine", PyvtkMRMLAnnotationTextDisplayNode_GetMaxCharactersPerLine, METH_VARARGS,
   "GetMaxCharactersPerLine(self) -> int\nC++: virtual unsigned int GetMaxCharactersPerLine()\n\n"},
  {"SetShowBorder", PyvtkMRMLAnnotationTextDisplayNode_SetShowBorder, METH_VARARGS,
   "SetShowBorder(self, _arg:int) -> None\nC++: virtual void SetShowBorder(int _arg)\n\nbased on vtkCaptionActor2D.h Enable/disable the placement of a\nborder around the text.\n"},
  {"GetShowBorder", PyvtkMRMLAnnotationTextDisplayNode_GetShowBorder, METH_VARARGS,
   "GetShowBorder(self) -> int\nC++: virtual int GetShowBorder()\n\n"},
  {"ShowBorderOn", PyvtkMRMLAnnotationTextDisplayNode_ShowBorderOn, METH_VARARGS,
   "ShowBorderOn(self) -> None\nC++: virtual void ShowBorderOn()\n\n"},
  {"ShowBorderOff", PyvtkMRMLAnnotationTextDisplayNode_ShowBorderOff, METH_VARARGS,
   "ShowBorderOff(self) -> None\nC++: virtual void ShowBorderOff()\n\n"},
  {"SetShowLeader", PyvtkMRMLAnnotationTextDisplayNode_SetShowLeader, METH_VARARGS,
   "SetShowLeader(self, _arg:int) -> None\nC++: virtual void SetShowLeader(int _arg)\n\nEnable/disable drawing a \"line\" from the caption to the\nattachment point.\n"},
  {"GetShowLeader", PyvtkMRMLAnnotationTextDisplayNode_GetShowLeader, METH_VARARGS,
   "GetShowLeader(self) -> int\nC++: virtual int GetShowLeader()\n\n"},
  {"ShowLeaderOn", PyvtkMRMLAnnotationTextDisplayNode_ShowLeaderOn, METH_VARARGS,
   "ShowLeaderOn(self) -> None\nC++: virtual void ShowLeaderOn()\n\n"},
  {"ShowLeaderOff", PyvtkMRMLAnnotationTextDisplayNode_ShowLeaderOff, METH_VARARGS,
   "ShowLeaderOff(self) -> None\nC++: virtual void ShowLeaderOff()\n\n"},
  {"SetUseThreeDimensionalLeader", PyvtkMRMLAnnotationTextDisplayNode_SetUseThreeDimensionalLeader, METH_VARARGS,
   "SetUseThreeDimensionalLeader(self, _arg:int) -> None\nC++: virtual void SetUseThreeDimensionalLeader(int _arg)\n\nIndicate whether the leader is 2D (no hidden line) or 3D\n(z-buffered). Only used in the 3d displayable managers, 2d ones\nset it off\n"},
  {"GetUseThreeDimensionalLeader", PyvtkMRMLAnnotationTextDisplayNode_GetUseThreeDimensionalLeader, METH_VARARGS,
   "GetUseThreeDimensionalLeader(self) -> int\nC++: virtual int GetUseThreeDimensionalLeader()\n\n"},
  {"UseThreeDimensionalLeaderOn", PyvtkMRMLAnnotationTextDisplayNode_UseThreeDimensionalLeaderOn, METH_VARARGS,
   "UseThreeDimensionalLeaderOn(self) -> None\nC++: virtual void UseThreeDimensionalLeaderOn()\n\n"},
  {"UseThreeDimensionalLeaderOff", PyvtkMRMLAnnotationTextDisplayNode_UseThreeDimensionalLeaderOff, METH_VARARGS,
   "UseThreeDimensionalLeaderOff(self) -> None\nC++: virtual void UseThreeDimensionalLeaderOff()\n\n"},
  {"SetShowArrowHead", PyvtkMRMLAnnotationTextDisplayNode_SetShowArrowHead, METH_VARARGS,
   "SetShowArrowHead(self, _arg:int) -> None\nC++: virtual void SetShowArrowHead(int _arg)\n\nEnable/disable showing the arrow head glyph at the end of the\nleader. Only used if ShowLeader is true\n"},
  {"GetShowArrowHead", PyvtkMRMLAnnotationTextDisplayNode_GetShowArrowHead, METH_VARARGS,
   "GetShowArrowHead(self) -> int\nC++: virtual int GetShowArrowHead()\n\n"},
  {"ShowArrowHeadOn", PyvtkMRMLAnnotationTextDisplayNode_ShowArrowHeadOn, METH_VARARGS,
   "ShowArrowHeadOn(self) -> None\nC++: virtual void ShowArrowHeadOn()\n\n"},
  {"ShowArrowHeadOff", PyvtkMRMLAnnotationTextDisplayNode_ShowArrowHeadOff, METH_VARARGS,
   "ShowArrowHeadOff(self) -> None\nC++: virtual void ShowArrowHeadOff()\n\n"},
  {"SetLeaderGlyphSize", PyvtkMRMLAnnotationTextDisplayNode_SetLeaderGlyphSize, METH_VARARGS,
   "SetLeaderGlyphSize(self, _arg:float) -> None\nC++: virtual void SetLeaderGlyphSize(double _arg)\n\nSpecify the relative size of the leader head. This is expressed\nas a fraction of the size (diagonal length) of the renderer. The\nleader head is automatically scaled so that window resize,\nzooming or other camera motion results in proportional changes in\nsize to the leader glyph. Only used if ShowArrow is true.\n"},
  {"GetLeaderGlyphSizeMinValue", PyvtkMRMLAnnotationTextDisplayNode_GetLeaderGlyphSizeMinValue, METH_VARARGS,
   "GetLeaderGlyphSizeMinValue(self) -> float\nC++: virtual double GetLeaderGlyphSizeMinValue()\n\n"},
  {"GetLeaderGlyphSizeMaxValue", PyvtkMRMLAnnotationTextDisplayNode_GetLeaderGlyphSizeMaxValue, METH_VARARGS,
   "GetLeaderGlyphSizeMaxValue(self) -> float\nC++: virtual double GetLeaderGlyphSizeMaxValue()\n\n"},
  {"GetLeaderGlyphSize", PyvtkMRMLAnnotationTextDisplayNode_GetLeaderGlyphSize, METH_VARARGS,
   "GetLeaderGlyphSize(self) -> float\nC++: virtual double GetLeaderGlyphSize()\n\n"},
  {"SetMaximumLeaderGlyphSize", PyvtkMRMLAnnotationTextDisplayNode_SetMaximumLeaderGlyphSize, METH_VARARGS,
   "SetMaximumLeaderGlyphSize(self, _arg:int) -> None\nC++: virtual void SetMaximumLeaderGlyphSize(int _arg)\n\nSpecify the maximum size of the leader head (if any) in pixels.\nThis is used in conjunction with LeaderGlyphSize to cap the\nmaximum size of the LeaderGlyph.\n"},
  {"GetMaximumLeaderGlyphSizeMinValue", PyvtkMRMLAnnotationTextDisplayNode_GetMaximumLeaderGlyphSizeMinValue, METH_VARARGS,
   "GetMaximumLeaderGlyphSizeMinValue(self) -> int\nC++: virtual int GetMaximumLeaderGlyphSizeMinValue()\n\n"},
  {"GetMaximumLeaderGlyphSizeMaxValue", PyvtkMRMLAnnotationTextDisplayNode_GetMaximumLeaderGlyphSizeMaxValue, METH_VARARGS,
   "GetMaximumLeaderGlyphSizeMaxValue(self) -> int\nC++: virtual int GetMaximumLeaderGlyphSizeMaxValue()\n\n"},
  {"GetMaximumLeaderGlyphSize", PyvtkMRMLAnnotationTextDisplayNode_GetMaximumLeaderGlyphSize, METH_VARARGS,
   "GetMaximumLeaderGlyphSize(self) -> int\nC++: virtual int GetMaximumLeaderGlyphSize()\n\n"},
  {"SetPadding", PyvtkMRMLAnnotationTextDisplayNode_SetPadding, METH_VARARGS,
   "SetPadding(self, _arg:int) -> None\nC++: virtual void SetPadding(int _arg)\n\nSet/Get the padding between the caption and the border. The value\nis specified in pixels.\n"},
  {"GetPaddingMinValue", PyvtkMRMLAnnotationTextDisplayNode_GetPaddingMinValue, METH_VARARGS,
   "GetPaddingMinValue(self) -> int\nC++: virtual int GetPaddingMinValue()\n\n"},
  {"GetPaddingMaxValue", PyvtkMRMLAnnotationTextDisplayNode_GetPaddingMaxValue, METH_VARARGS,
   "GetPaddingMaxValue(self) -> int\nC++: virtual int GetPaddingMaxValue()\n\n"},
  {"GetPadding", PyvtkMRMLAnnotationTextDisplayNode_GetPadding, METH_VARARGS,
   "GetPadding(self) -> int\nC++: virtual int GetPadding()\n\n"},
  {"SetAttachEdgeOnly", PyvtkMRMLAnnotationTextDisplayNode_SetAttachEdgeOnly, METH_VARARGS,
   "SetAttachEdgeOnly(self, _arg:int) -> None\nC++: virtual void SetAttachEdgeOnly(int _arg)\n\nEnable/disable whether to attach the arrow only to the edge, NOT\nthe vertices of the caption border.\n"},
  {"GetAttachEdgeOnly", PyvtkMRMLAnnotationTextDisplayNode_GetAttachEdgeOnly, METH_VARARGS,
   "GetAttachEdgeOnly(self) -> int\nC++: virtual int GetAttachEdgeOnly()\n\n"},
  {"AttachEdgeOnlyOn", PyvtkMRMLAnnotationTextDisplayNode_AttachEdgeOnlyOn, METH_VARARGS,
   "AttachEdgeOnlyOn(self) -> None\nC++: virtual void AttachEdgeOnlyOn()\n\n"},
  {"AttachEdgeOnlyOff", PyvtkMRMLAnnotationTextDisplayNode_AttachEdgeOnlyOff, METH_VARARGS,
   "AttachEdgeOnlyOff(self) -> None\nC++: virtual void AttachEdgeOnlyOff()\n\n"},
  {"CreateBackup", PyvtkMRMLAnnotationTextDisplayNode_CreateBackup, METH_VARARGS,
   "CreateBackup(self) -> None\nC++: void CreateBackup() override;\n\nCreate a backup of this node and attach it.\n"},
  {"RestoreBackup", PyvtkMRMLAnnotationTextDisplayNode_RestoreBackup, METH_VARARGS,
   "RestoreBackup(self) -> None\nC++: void RestoreBackup() override;\n\nRestore an attached backup of this node.\n"},
  {"GetLineWrappedText", PyvtkMRMLAnnotationTextDisplayNode_GetLineWrappedText, METH_VARARGS,
   "GetLineWrappedText(self, inputText:str) -> str\nC++: std::string GetLineWrappedText(std::string inputText)\n\nUtility function to return a new string with\n\n's inserted in the input string to bring each line down below the\nMaxCharactersPerLine. Tries to insert breaks between words, but\nwill force breaks where there are no spaces if necessary\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLAnnotationTextDisplayNode_Doc =
  "vtkMRMLAnnotationTextDisplayNode - MRML node to represent display\nproperties for tractography.\n\n"
  "Superclass: vtkMRMLAnnotationDisplayNode\n\n"
  "vtkMRMLAnnotationTextDisplayNode nodes store display properties of\n"
  "trajectories from tractography in diffusion MRI data, including color\n"
  "type (by bundle, by fiber, or by scalar invariants), display on/off\n"
  "for tensor glyphs and display of trajectory as a line or tube.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAnnotationTextDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerAnnotationsModuleMRMLPython.vtkMRMLAnnotationTextDisplayNode", // tp_name
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
  PyvtkMRMLAnnotationTextDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLAnnotationTextDisplayNode_StaticNew()
{
  return vtkMRMLAnnotationTextDisplayNode::New();
}

PyObject *PyvtkMRMLAnnotationTextDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLAnnotationTextDisplayNode_Type, PyvtkMRMLAnnotationTextDisplayNode_Methods,
    "vtkMRMLAnnotationTextDisplayNode",
 &PyvtkMRMLAnnotationTextDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAnnotationDisplayNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLAnnotationTextDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLAnnotationTextDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLAnnotationTextDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

