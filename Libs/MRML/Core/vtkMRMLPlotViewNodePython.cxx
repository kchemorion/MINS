// python wrapper for vtkMRMLPlotViewNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLPlotViewNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLPlotViewNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLPlotViewNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractViewNode_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractViewNode_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractViewNode_ClassNew
#endif

static PyObject *
PyvtkMRMLPlotViewNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLPlotViewNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLPlotViewNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLPlotViewNode *tempr = vtkMRMLPlotViewNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLPlotViewNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLPlotViewNode::NewInstance());

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
PyvtkMRMLPlotViewNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLPlotViewNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLPlotViewNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLPlotViewNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

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
      op->vtkMRMLPlotViewNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLPlotViewNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLPlotViewNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_SetPlotChartNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotChartNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlotChartNodeID(temp0);
    }
    else
    {
      op->vtkMRMLPlotViewNode::SetPlotChartNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_GetPlotChartNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotChartNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPlotChartNodeID() :
      op->vtkMRMLPlotViewNode::GetPlotChartNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_GetPlotChartNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotChartNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLPlotChartNode *tempr = (ap.IsBound() ?
      op->GetPlotChartNode() :
      op->vtkMRMLPlotViewNode::GetPlotChartNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_SetDoPropagatePlotChartSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDoPropagatePlotChartSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDoPropagatePlotChartSelection(temp0);
    }
    else
    {
      op->vtkMRMLPlotViewNode::SetDoPropagatePlotChartSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_GetDoPropagatePlotChartSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDoPropagatePlotChartSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDoPropagatePlotChartSelection() :
      op->vtkMRMLPlotViewNode::GetDoPropagatePlotChartSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_GetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionMode() :
      op->vtkMRMLPlotViewNode::GetInteractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_SetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionMode(temp0);
    }
    else
    {
      op->vtkMRMLPlotViewNode::SetInteractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_EnablePointMoveAlongXOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnablePointMoveAlongXOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnablePointMoveAlongXOn();
    }
    else
    {
      op->vtkMRMLPlotViewNode::EnablePointMoveAlongXOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_EnablePointMoveAlongXOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnablePointMoveAlongXOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnablePointMoveAlongXOff();
    }
    else
    {
      op->vtkMRMLPlotViewNode::EnablePointMoveAlongXOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_GetEnablePointMoveAlongX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnablePointMoveAlongX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnablePointMoveAlongX() :
      op->vtkMRMLPlotViewNode::GetEnablePointMoveAlongX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_SetEnablePointMoveAlongX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnablePointMoveAlongX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnablePointMoveAlongX(temp0);
    }
    else
    {
      op->vtkMRMLPlotViewNode::SetEnablePointMoveAlongX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_EnablePointMoveAlongYOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnablePointMoveAlongYOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnablePointMoveAlongYOn();
    }
    else
    {
      op->vtkMRMLPlotViewNode::EnablePointMoveAlongYOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_EnablePointMoveAlongYOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnablePointMoveAlongYOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnablePointMoveAlongYOff();
    }
    else
    {
      op->vtkMRMLPlotViewNode::EnablePointMoveAlongYOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_GetEnablePointMoveAlongY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnablePointMoveAlongY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnablePointMoveAlongY() :
      op->vtkMRMLPlotViewNode::GetEnablePointMoveAlongY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_SetEnablePointMoveAlongY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnablePointMoveAlongY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnablePointMoveAlongY(temp0);
    }
    else
    {
      op->vtkMRMLPlotViewNode::SetEnablePointMoveAlongY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_GetInteractionModeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInteractionModeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLPlotViewNode::GetInteractionModeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_GetInteractionModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInteractionModeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLPlotViewNode::GetInteractionModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotViewNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

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
      op->vtkMRMLPlotViewNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLPlotViewNode_GetPlotChartNodeReferenceRole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotChartNodeReferenceRole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotViewNode *op = static_cast<vtkMRMLPlotViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPlotChartNodeReferenceRole() :
      op->vtkMRMLPlotViewNode::GetPlotChartNodeReferenceRole());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLPlotViewNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLPlotViewNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLPlotViewNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLPlotViewNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLPlotViewNode\nC++: static vtkMRMLPlotViewNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLPlotViewNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLPlotViewNode\nC++: vtkMRMLPlotViewNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLPlotViewNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLPlotViewNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLPlotViewNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"CopyContent", PyvtkMRMLPlotViewNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLPlotViewNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLPlotViewNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model).\n"},
  {"SetPlotChartNodeID", PyvtkMRMLPlotViewNode_SetPlotChartNodeID, METH_VARARGS,
   "SetPlotChartNodeID(self, PlotChartNodeID:str) -> None\nC++: virtual void SetPlotChartNodeID(const char *PlotChartNodeID)\n\nSet and Update the PlotChart node id displayed in this PlotView.\n"},
  {"GetPlotChartNodeID", PyvtkMRMLPlotViewNode_GetPlotChartNodeID, METH_VARARGS,
   "GetPlotChartNodeID(self) -> str\nC++: const char *GetPlotChartNodeID()\n\nGet the PlotChart node id displayed in this PlotView.\n"},
  {"GetPlotChartNode", PyvtkMRMLPlotViewNode_GetPlotChartNode, METH_VARARGS,
   "GetPlotChartNode(self) -> vtkMRMLPlotChartNode\nC++: vtkMRMLPlotChartNode *GetPlotChartNode()\n\nGet the PlotChart node displayed in this PlotView.\n"},
  {"SetDoPropagatePlotChartSelection", PyvtkMRMLPlotViewNode_SetDoPropagatePlotChartSelection, METH_VARARGS,
   "SetDoPropagatePlotChartSelection(self, _arg:bool) -> None\nC++: virtual void SetDoPropagatePlotChartSelection(bool _arg)\n\nConfigures the behavior of PropagatePlotChartSelection(). If\nDoPropagatePlotChartSelection set to false then this view will\nnot be affected by PropagatePlotChartSelection. Default value is\ntrue.\n"},
  {"GetDoPropagatePlotChartSelection", PyvtkMRMLPlotViewNode_GetDoPropagatePlotChartSelection, METH_VARARGS,
   "GetDoPropagatePlotChartSelection(self) -> bool\nC++: virtual bool GetDoPropagatePlotChartSelection()\n\n"},
  {"GetInteractionMode", PyvtkMRMLPlotViewNode_GetInteractionMode, METH_VARARGS,
   "GetInteractionMode(self) -> int\nC++: virtual int GetInteractionMode()\n\nGet/Set interaction mode for mouse left-click and drag.\nInteractionModePanView: pans chart view\nInteractionModeSelectPoints: select points with rectangular shape\nInteractionModeFreehandSelectPoints: select points with free-hand\ndrawn shape InteractionModeMovePoints: move plot data points\n"},
  {"SetInteractionMode", PyvtkMRMLPlotViewNode_SetInteractionMode, METH_VARARGS,
   "SetInteractionMode(self, _arg:int) -> None\nC++: virtual void SetInteractionMode(int _arg)\n\n"},
  {"EnablePointMoveAlongXOn", PyvtkMRMLPlotViewNode_EnablePointMoveAlongXOn, METH_VARARGS,
   "EnablePointMoveAlongXOn(self) -> None\nC++: virtual void EnablePointMoveAlongXOn()\n\nEnable moving of data points along X axis by click-and-drag in\nplot views. Points may only be moved in the view if moving is\nenabled in the plot chart node as well.\n"},
  {"EnablePointMoveAlongXOff", PyvtkMRMLPlotViewNode_EnablePointMoveAlongXOff, METH_VARARGS,
   "EnablePointMoveAlongXOff(self) -> None\nC++: virtual void EnablePointMoveAlongXOff()\n\n"},
  {"GetEnablePointMoveAlongX", PyvtkMRMLPlotViewNode_GetEnablePointMoveAlongX, METH_VARARGS,
   "GetEnablePointMoveAlongX(self) -> bool\nC++: virtual bool GetEnablePointMoveAlongX()\n\n"},
  {"SetEnablePointMoveAlongX", PyvtkMRMLPlotViewNode_SetEnablePointMoveAlongX, METH_VARARGS,
   "SetEnablePointMoveAlongX(self, _arg:bool) -> None\nC++: virtual void SetEnablePointMoveAlongX(bool _arg)\n\n"},
  {"EnablePointMoveAlongYOn", PyvtkMRMLPlotViewNode_EnablePointMoveAlongYOn, METH_VARARGS,
   "EnablePointMoveAlongYOn(self) -> None\nC++: virtual void EnablePointMoveAlongYOn()\n\nEnable moving of data points along Y axis by click-and-drag in\nplot views. Points may only be moved in the view if moving is\nenabled in the plot chart node as well.\n"},
  {"EnablePointMoveAlongYOff", PyvtkMRMLPlotViewNode_EnablePointMoveAlongYOff, METH_VARARGS,
   "EnablePointMoveAlongYOff(self) -> None\nC++: virtual void EnablePointMoveAlongYOff()\n\n"},
  {"GetEnablePointMoveAlongY", PyvtkMRMLPlotViewNode_GetEnablePointMoveAlongY, METH_VARARGS,
   "GetEnablePointMoveAlongY(self) -> bool\nC++: virtual bool GetEnablePointMoveAlongY()\n\n"},
  {"SetEnablePointMoveAlongY", PyvtkMRMLPlotViewNode_SetEnablePointMoveAlongY, METH_VARARGS,
   "SetEnablePointMoveAlongY(self, _arg:bool) -> None\nC++: virtual void SetEnablePointMoveAlongY(bool _arg)\n\n"},
  {"GetInteractionModeAsString", PyvtkMRMLPlotViewNode_GetInteractionModeAsString, METH_VARARGS,
   "GetInteractionModeAsString(id:int) -> str\nC++: static const char *GetInteractionModeAsString(int id)\n\nConvert between interaction mode ID and name\n"},
  {"GetInteractionModeFromString", PyvtkMRMLPlotViewNode_GetInteractionModeFromString, METH_VARARGS,
   "GetInteractionModeFromString(name:str) -> int\nC++: static int GetInteractionModeFromString(const char *name)\n\n"},
  {"ProcessMRMLEvents", PyvtkMRMLPlotViewNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nMethod to propagate events generated in mrml.\n"},
  {"GetPlotChartNodeReferenceRole", PyvtkMRMLPlotViewNode_GetPlotChartNodeReferenceRole, METH_VARARGS,
   "GetPlotChartNodeReferenceRole(self) -> str\nC++: virtual const char *GetPlotChartNodeReferenceRole()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLPlotViewNode_Doc =
  "vtkMRMLPlotViewNode - MRML node to represent Plot view parameters.\n\n"
  "Superclass: vtkMRMLAbstractViewNode\n\n"
  "PlotViewNodes are associated one to one with a PlotWidget.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLPlotViewNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLPlotViewNode", // tp_name
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
  PyvtkMRMLPlotViewNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLPlotViewNode_StaticNew()
{
  return vtkMRMLPlotViewNode::New();
}

PyObject *PyvtkMRMLPlotViewNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLPlotViewNode_Type, PyvtkMRMLPlotViewNode_Methods,
    "vtkMRMLPlotViewNode",
 &PyvtkMRMLPlotViewNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractViewNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "InteractionModePanView", vtkMRMLPlotViewNode::InteractionModePanView },
        { "InteractionModeSelectPoints", vtkMRMLPlotViewNode::InteractionModeSelectPoints },
        { "InteractionModeFreehandSelectPoints", vtkMRMLPlotViewNode::InteractionModeFreehandSelectPoints },
        { "InteractionModeMovePoints", vtkMRMLPlotViewNode::InteractionModeMovePoints },
        { "InteractionMode_Last", vtkMRMLPlotViewNode::InteractionMode_Last },
        { "PlotChartNodeChangedEvent", vtkMRMLPlotViewNode::PlotChartNodeChangedEvent },
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

void PyVTKAddFile_vtkMRMLPlotViewNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLPlotViewNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLPlotViewNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

