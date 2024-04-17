// python wrapper for vtkMRMLPlotSeriesNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLPlotSeriesNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLPlotSeriesNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLPlotSeriesNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLNode_ClassNew
extern "C" { PyObject *PyvtkMRMLNode_ClassNew(); }
#define DECLARED_PyvtkMRMLNode_ClassNew
#endif

static PyObject *
PyvtkMRMLPlotSeriesNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLPlotSeriesNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLPlotSeriesNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLPlotSeriesNode *tempr = vtkMRMLPlotSeriesNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLPlotSeriesNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLPlotSeriesNode::NewInstance());

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
PyvtkMRMLPlotSeriesNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLPlotSeriesNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLPlotSeriesNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLPlotSeriesNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLPlotSeriesNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_SetAndObserveTableNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveTableNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveTableNodeID(temp0);
    }
    else
    {
      op->vtkMRMLPlotSeriesNode::SetAndObserveTableNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetTableNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLTableNode *tempr = (ap.IsBound() ?
      op->GetTableNode() :
      op->vtkMRMLPlotSeriesNode::GetTableNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

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
      op->vtkMRMLPlotSeriesNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLPlotSeriesNode_GetTableNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTableNodeID() :
      op->vtkMRMLPlotSeriesNode::GetTableNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_SetPlotType_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlotType(temp0);
    }
    else
    {
      op->vtkMRMLPlotSeriesNode::SetPlotType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLPlotSeriesNode_SetPlotType_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlotType(temp0);
    }
    else
    {
      op->vtkMRMLPlotSeriesNode::SetPlotType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLPlotSeriesNode_SetPlotType_Methods[] = {
  {"SetPlotType", PyvtkMRMLPlotSeriesNode_SetPlotType_s1, METH_VARARGS,
   "@i"},
  {"SetPlotType", PyvtkMRMLPlotSeriesNode_SetPlotType_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLPlotSeriesNode_SetPlotType(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLPlotSeriesNode_SetPlotType_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPlotType");
  return nullptr;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetPlotType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotType() :
      op->vtkMRMLPlotSeriesNode::GetPlotType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetXColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetXColumnName() :
      op->vtkMRMLPlotSeriesNode::GetXColumnName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_SetXColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXColumnName(temp0);
    }
    else
    {
      op->vtkMRMLPlotSeriesNode::SetXColumnName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetYColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetYColumnName() :
      op->vtkMRMLPlotSeriesNode::GetYColumnName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_SetYColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYColumnName(temp0);
    }
    else
    {
      op->vtkMRMLPlotSeriesNode::SetYColumnName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetLabelColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetLabelColumnName() :
      op->vtkMRMLPlotSeriesNode::GetLabelColumnName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_SetLabelColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelColumnName(temp0);
    }
    else
    {
      op->vtkMRMLPlotSeriesNode::SetLabelColumnName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetPlotTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPlotTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLPlotSeriesNode::GetPlotTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetPlotTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPlotTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLPlotSeriesNode::GetPlotTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_SetMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMarkerStyle(temp0);
    }
    else
    {
      op->vtkMRMLPlotSeriesNode::SetMarkerStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMarkerStyle() :
      op->vtkMRMLPlotSeriesNode::GetMarkerStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetMarkerStyleAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMarkerStyleAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLPlotSeriesNode::GetMarkerStyleAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetMarkerStyleFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMarkerStyleFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLPlotSeriesNode::GetMarkerStyleFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMarkerSize() :
      op->vtkMRMLPlotSeriesNode::GetMarkerSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_SetMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMarkerSize(temp0);
    }
    else
    {
      op->vtkMRMLPlotSeriesNode::SetMarkerSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_SetLineStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineStyle(temp0);
    }
    else
    {
      op->vtkMRMLPlotSeriesNode::SetLineStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetLineStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineStyle() :
      op->vtkMRMLPlotSeriesNode::GetLineStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetLineStyleAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStyleAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLineStyleAsString(temp0) :
      op->vtkMRMLPlotSeriesNode::GetLineStyleAsString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetLineStyleFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStyleFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineStyleFromString(temp0) :
      op->vtkMRMLPlotSeriesNode::GetLineStyleFromString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLineWidth() :
      op->vtkMRMLPlotSeriesNode::GetLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineWidth(temp0);
    }
    else
    {
      op->vtkMRMLPlotSeriesNode::SetLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkMRMLPlotSeriesNode::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

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
      op->vtkMRMLPlotSeriesNode::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLPlotSeriesNode_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkMRMLPlotSeriesNode::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLPlotSeriesNode_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLPlotSeriesNode_SetColor_s1(self, args);
    case 1:
      return PyvtkMRMLPlotSeriesNode_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_SetUniqueColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniqueColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->SetUniqueColor(temp0);
    }
    else
    {
      op->vtkMRMLPlotSeriesNode::SetUniqueColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkMRMLPlotSeriesNode::GetOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

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
      op->vtkMRMLPlotSeriesNode::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotSeriesNode_IsXColumnRequired(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsXColumnRequired");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotSeriesNode *op = static_cast<vtkMRMLPlotSeriesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsXColumnRequired() :
      op->vtkMRMLPlotSeriesNode::IsXColumnRequired());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLPlotSeriesNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLPlotSeriesNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLPlotSeriesNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLPlotSeriesNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLPlotSeriesNode\nC++: static vtkMRMLPlotSeriesNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLPlotSeriesNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLPlotSeriesNode\nC++: vtkMRMLPlotSeriesNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLPlotSeriesNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLPlotSeriesNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLPlotSeriesNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nStandard methods for MRML nodes\n"},
  {"GetNodeTagName", PyvtkMRMLPlotSeriesNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model).\n"},
  {"SetAndObserveTableNodeID", PyvtkMRMLPlotSeriesNode_SetAndObserveTableNodeID, METH_VARARGS,
   "SetAndObserveTableNodeID(self, tableNodeID:str) -> None\nC++: virtual void SetAndObserveTableNodeID(\n    const std::string &tableNodeID)\n\nSet and observe Table node ID. Utility method that conveniently\ntakes a string instead of a char*.\n\\sa TableNodeID, GetTableNodeID(), SetInputData()\n"},
  {"GetTableNode", PyvtkMRMLPlotSeriesNode_GetTableNode, METH_VARARGS,
   "GetTableNode(self) -> vtkMRMLTableNode\nC++: virtual vtkMRMLTableNode *GetTableNode()\n\nGet associated Table MRML node.\n"},
  {"ProcessMRMLEvents", PyvtkMRMLPlotSeriesNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nMethod to propagate events generated in Plot nodes.\n"},
  {"GetTableNodeID", PyvtkMRMLPlotSeriesNode_GetTableNodeID, METH_VARARGS,
   "GetTableNodeID(self) -> str\nC++: const char *GetTableNodeID()\n\nGet referenced transform node id\n"},
  {"SetPlotType", PyvtkMRMLPlotSeriesNode_SetPlotType, METH_VARARGS,
   "SetPlotType(self, _arg:int) -> None\nC++: virtual void SetPlotType(int _arg)\nSetPlotType(self, type:str) -> None\nC++: virtual void SetPlotType(const char *type)\n\nGet and Set Macros Get/Set the type of the plot (line, bar,\nscatter, scatter bar). PlotTypeLine: line points are equally\nspaced along X axis, Y column defines height of each point\nPlotTypeBar: vertical bars equally spaced along X axis, Y column\ndefines height of each bar PlotTypeScatter: X and Y columns\ndefine X and Y coordinates of points, connected by line\nPlotTypeScatterBar: X and Y columns define bar position and\nheight\n"},
  {"GetPlotType", PyvtkMRMLPlotSeriesNode_GetPlotType, METH_VARARGS,
   "GetPlotType(self) -> int\nC++: virtual int GetPlotType()\n\n"},
  {"GetXColumnName", PyvtkMRMLPlotSeriesNode_GetXColumnName, METH_VARARGS,
   "GetXColumnName(self) -> str\nC++: virtual std::string GetXColumnName()\n\nGet the name of the Y column in the referenced table (for scatter\nplots).\n"},
  {"SetXColumnName", PyvtkMRMLPlotSeriesNode_SetXColumnName, METH_VARARGS,
   "SetXColumnName(self, _arg:str) -> None\nC++: virtual void SetXColumnName(std::string _arg)\n\n"},
  {"GetYColumnName", PyvtkMRMLPlotSeriesNode_GetYColumnName, METH_VARARGS,
   "GetYColumnName(self) -> str\nC++: virtual std::string GetYColumnName()\n\nGet the name of the Y column in the referenced table.\n"},
  {"SetYColumnName", PyvtkMRMLPlotSeriesNode_SetYColumnName, METH_VARARGS,
   "SetYColumnName(self, _arg:str) -> None\nC++: virtual void SetYColumnName(std::string _arg)\n\n"},
  {"GetLabelColumnName", PyvtkMRMLPlotSeriesNode_GetLabelColumnName, METH_VARARGS,
   "GetLabelColumnName(self) -> str\nC++: virtual std::string GetLabelColumnName()\n\nGet/Set the name of the X (for scatter plot) or labels (for line\nor bar plot) column in the referenced table.\n"},
  {"SetLabelColumnName", PyvtkMRMLPlotSeriesNode_SetLabelColumnName, METH_VARARGS,
   "SetLabelColumnName(self, _arg:str) -> None\nC++: virtual void SetLabelColumnName(std::string _arg)\n\n"},
  {"GetPlotTypeAsString", PyvtkMRMLPlotSeriesNode_GetPlotTypeAsString, METH_VARARGS,
   "GetPlotTypeAsString(id:int) -> str\nC++: static const char *GetPlotTypeAsString(int id)\n\nConvert between plot type ID and name\n"},
  {"GetPlotTypeFromString", PyvtkMRMLPlotSeriesNode_GetPlotTypeFromString, METH_VARARGS,
   "GetPlotTypeFromString(name:str) -> int\nC++: static int GetPlotTypeFromString(const char *name)\n\n"},
  {"SetMarkerStyle", PyvtkMRMLPlotSeriesNode_SetMarkerStyle, METH_VARARGS,
   "SetMarkerStyle(self, _arg:int) -> None\nC++: virtual void SetMarkerStyle(int _arg)\n\nUtility methods to set/get the marker style available for line\nplots. Valid values: MarkerStyleNone, MarkerStyleCross,\nMarkerStylePlus, MarkerStyleSquare, MarkerStyleCircle,\nMarkerStyleDiamond\n"},
  {"GetMarkerStyle", PyvtkMRMLPlotSeriesNode_GetMarkerStyle, METH_VARARGS,
   "GetMarkerStyle(self) -> int\nC++: virtual int GetMarkerStyle()\n\n"},
  {"GetMarkerStyleAsString", PyvtkMRMLPlotSeriesNode_GetMarkerStyleAsString, METH_VARARGS,
   "GetMarkerStyleAsString(id:int) -> str\nC++: static const char *GetMarkerStyleAsString(int id)\n\nConvert between plot markers style ID and name\n"},
  {"GetMarkerStyleFromString", PyvtkMRMLPlotSeriesNode_GetMarkerStyleFromString, METH_VARARGS,
   "GetMarkerStyleFromString(name:str) -> int\nC++: static int GetMarkerStyleFromString(const char *name)\n\n"},
  {"GetMarkerSize", PyvtkMRMLPlotSeriesNode_GetMarkerSize, METH_VARARGS,
   "GetMarkerSize(self) -> float\nC++: virtual float GetMarkerSize()\n\nUtility methods to set/get the marker size available for line\nplots.\n"},
  {"SetMarkerSize", PyvtkMRMLPlotSeriesNode_SetMarkerSize, METH_VARARGS,
   "SetMarkerSize(self, _arg:float) -> None\nC++: virtual void SetMarkerSize(float _arg)\n\n"},
  {"SetLineStyle", PyvtkMRMLPlotSeriesNode_SetLineStyle, METH_VARARGS,
   "SetLineStyle(self, _arg:int) -> None\nC++: virtual void SetLineStyle(int _arg)\n\nSet/get the line style. Valid values: LineStyleNone,\nLineStyleSolid, LineStyleDash, LineStyleDot, LineStyleDashDot,\nLineStyleDashDotDot.\n"},
  {"GetLineStyle", PyvtkMRMLPlotSeriesNode_GetLineStyle, METH_VARARGS,
   "GetLineStyle(self) -> int\nC++: virtual int GetLineStyle()\n\n"},
  {"GetLineStyleAsString", PyvtkMRMLPlotSeriesNode_GetLineStyleAsString, METH_VARARGS,
   "GetLineStyleAsString(self, id:int) -> str\nC++: const char *GetLineStyleAsString(int id)\n\nConvert between line style ID and name\n"},
  {"GetLineStyleFromString", PyvtkMRMLPlotSeriesNode_GetLineStyleFromString, METH_VARARGS,
   "GetLineStyleFromString(self, name:str) -> int\nC++: int GetLineStyleFromString(const char *name)\n\n"},
  {"GetLineWidth", PyvtkMRMLPlotSeriesNode_GetLineWidth, METH_VARARGS,
   "GetLineWidth(self) -> float\nC++: virtual float GetLineWidth()\n\nUtility methods to set/get the Line width available for Line\nPlots.\n"},
  {"SetLineWidth", PyvtkMRMLPlotSeriesNode_SetLineWidth, METH_VARARGS,
   "SetLineWidth(self, _arg:float) -> None\nC++: virtual void SetLineWidth(float _arg)\n\n"},
  {"GetColor", PyvtkMRMLPlotSeriesNode_GetColor, METH_VARARGS,
   "GetColor(self) -> (float, float, float)\nC++: virtual double *GetColor()\n\nSet/Get Color of the line and markers of the plot\n"},
  {"SetColor", PyvtkMRMLPlotSeriesNode_SetColor, METH_VARARGS,
   "SetColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetColor(double _arg1, double _arg2,\n    double _arg3)\nSetColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetColor(const double _arg[3])\n\n"},
  {"SetUniqueColor", PyvtkMRMLPlotSeriesNode_SetUniqueColor, METH_VARARGS,
   "SetUniqueColor(self, colorTableNodeID:str=...) -> None\nC++: void SetUniqueColor(const char *colorTableNodeID=nullptr)\n\nUtility function that generates a color that is not used by other\nplot series nodes. If colorTableNodeID is not specified then\nvtkMRMLColorTableNodeRandom is used.\n"},
  {"GetOpacity", PyvtkMRMLPlotSeriesNode_GetOpacity, METH_VARARGS,
   "GetOpacity(self) -> float\nC++: virtual double GetOpacity()\n\nGet set line opacity\n"},
  {"SetOpacity", PyvtkMRMLPlotSeriesNode_SetOpacity, METH_VARARGS,
   "SetOpacity(self, _arg:float) -> None\nC++: virtual void SetOpacity(double _arg)\n\n"},
  {"IsXColumnRequired", PyvtkMRMLPlotSeriesNode_IsXColumnRequired, METH_VARARGS,
   "IsXColumnRequired(self) -> bool\nC++: bool IsXColumnRequired()\n\nReturns true if X column is required (true for scatter plots)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLPlotSeriesNode_Doc =
  "vtkMRMLPlotSeriesNode - MRML node to represent a vtkPlot object\n\n"
  "Superclass: vtkMRMLNode\n\n"
  "Plot nodes describe the properties of a single plot: input data (one\n"
  "or two columns of a table node), and display properties (plot type,\n"
  "marker style, color, etc).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLPlotSeriesNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLPlotSeriesNode", // tp_name
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
  PyvtkMRMLPlotSeriesNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLPlotSeriesNode_StaticNew()
{
  return vtkMRMLPlotSeriesNode::New();
}

PyObject *PyvtkMRMLPlotSeriesNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLPlotSeriesNode_Type, PyvtkMRMLPlotSeriesNode_Methods,
    "vtkMRMLPlotSeriesNode",
 &PyvtkMRMLPlotSeriesNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 20; c++)
  {
    static const struct { const char *name; int value; }
      constants[20] = {
        { "PlotTypeLine", vtkMRMLPlotSeriesNode::PlotTypeLine },
        { "PlotTypeBar", vtkMRMLPlotSeriesNode::PlotTypeBar },
        { "PlotTypeScatter", vtkMRMLPlotSeriesNode::PlotTypeScatter },
        { "PlotTypeScatterBar", vtkMRMLPlotSeriesNode::PlotTypeScatterBar },
        { "PlotType_Last", vtkMRMLPlotSeriesNode::PlotType_Last },
        { "MarkerStyleNone", vtkMRMLPlotSeriesNode::MarkerStyleNone },
        { "MarkerStyleCross", vtkMRMLPlotSeriesNode::MarkerStyleCross },
        { "MarkerStylePlus", vtkMRMLPlotSeriesNode::MarkerStylePlus },
        { "MarkerStyleSquare", vtkMRMLPlotSeriesNode::MarkerStyleSquare },
        { "MarkerStyleCircle", vtkMRMLPlotSeriesNode::MarkerStyleCircle },
        { "MarkerStyleDiamond", vtkMRMLPlotSeriesNode::MarkerStyleDiamond },
        { "MarkerStyle_Last", vtkMRMLPlotSeriesNode::MarkerStyle_Last },
        { "LineStyleNone", vtkMRMLPlotSeriesNode::LineStyleNone },
        { "LineStyleSolid", vtkMRMLPlotSeriesNode::LineStyleSolid },
        { "LineStyleDash", vtkMRMLPlotSeriesNode::LineStyleDash },
        { "LineStyleDot", vtkMRMLPlotSeriesNode::LineStyleDot },
        { "LineStyleDashDot", vtkMRMLPlotSeriesNode::LineStyleDashDot },
        { "LineStyleDashDotDot", vtkMRMLPlotSeriesNode::LineStyleDashDotDot },
        { "LineStyle_Last", vtkMRMLPlotSeriesNode::LineStyle_Last },
        { "TableModifiedEvent", vtkMRMLPlotSeriesNode::TableModifiedEvent },
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

void PyVTKAddFile_vtkMRMLPlotSeriesNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLPlotSeriesNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLPlotSeriesNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

