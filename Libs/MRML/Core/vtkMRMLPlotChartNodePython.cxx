// python wrapper for vtkMRMLPlotChartNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLPlotChartNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLPlotChartNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLPlotChartNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLNode_ClassNew
extern "C" { PyObject *PyvtkMRMLNode_ClassNew(); }
#define DECLARED_PyvtkMRMLNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLPlotChartNode_PlotSeriesNodeProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLPlotChartNode.PlotSeriesNodeProperty", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkMRMLPlotChartNode_PlotSeriesNodeProperty_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLPlotChartNode_PlotSeriesNodeProperty_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLPlotChartNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLPlotChartNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLPlotChartNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLPlotChartNode *tempr = vtkMRMLPlotChartNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLPlotChartNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLPlotChartNode::NewInstance());

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
PyvtkMRMLPlotChartNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLPlotChartNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLPlotChartNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLPlotChartNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

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
      op->vtkMRMLPlotChartNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLPlotChartNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLPlotChartNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

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
      op->vtkMRMLPlotChartNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLPlotChartNode_GetPlotSeriesNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotSeriesNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPlotSeriesNodeID() :
      op->vtkMRMLPlotChartNode::GetPlotSeriesNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetPlotSeriesNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotSeriesNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLPlotSeriesNode *tempr = (ap.IsBound() ?
      op->GetPlotSeriesNode() :
      op->vtkMRMLPlotChartNode::GetPlotSeriesNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetNthPlotSeriesNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthPlotSeriesNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthPlotSeriesNodeID(temp0) :
      op->vtkMRMLPlotChartNode::GetNthPlotSeriesNodeID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetNthPlotSeriesNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthPlotSeriesNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLPlotSeriesNode *tempr = (ap.IsBound() ?
      op->GetNthPlotSeriesNode(temp0) :
      op->vtkMRMLPlotChartNode::GetNthPlotSeriesNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetPlotSeriesNodeIndexFromID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotSeriesNodeIndexFromID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotSeriesNodeIndexFromID(temp0) :
      op->vtkMRMLPlotChartNode::GetPlotSeriesNodeIndexFromID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetPlotSeriesNodeIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotSeriesNodeIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotSeriesNodeIDs(temp0) :
      op->vtkMRMLPlotChartNode::GetPlotSeriesNodeIDs(temp0));

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp0.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp0.data(), temp0.size()));
      ap.SetContents(0, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetPlotSeriesNodeNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotSeriesNodeNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotSeriesNodeNames(temp0) :
      op->vtkMRMLPlotChartNode::GetPlotSeriesNodeNames(temp0));

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp0.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp0.data(), temp0.size()));
      ap.SetContents(0, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetNumberOfPlotSeriesNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlotSeriesNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPlotSeriesNodes() :
      op->vtkMRMLPlotChartNode::GetNumberOfPlotSeriesNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_AddAndObservePlotSeriesNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAndObservePlotSeriesNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddAndObservePlotSeriesNodeID(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::AddAndObservePlotSeriesNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetAndObservePlotSeriesNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObservePlotSeriesNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndObservePlotSeriesNodeID(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetAndObservePlotSeriesNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetAndObserveNthPlotSeriesNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveNthPlotSeriesNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveNthPlotSeriesNodeID(temp0, temp1);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetAndObserveNthPlotSeriesNodeID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_RemovePlotSeriesNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePlotSeriesNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemovePlotSeriesNodeID(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::RemovePlotSeriesNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_RemoveNthPlotSeriesNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNthPlotSeriesNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveNthPlotSeriesNodeID(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::RemoveNthPlotSeriesNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_RemoveAllPlotSeriesNodeIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPlotSeriesNodeIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllPlotSeriesNodeIDs();
    }
    else
    {
      op->vtkMRMLPlotChartNode::RemoveAllPlotSeriesNodeIDs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_HasPlotSeriesNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasPlotSeriesNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasPlotSeriesNodeID(temp0) :
      op->vtkMRMLPlotChartNode::HasPlotSeriesNodeID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkMRMLPlotChartNode::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleFontSize(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetTitleFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleFontSize() :
      op->vtkMRMLPlotChartNode::GetTitleFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_TitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TitleVisibilityOn();
    }
    else
    {
      op->vtkMRMLPlotChartNode::TitleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_TitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TitleVisibilityOff();
    }
    else
    {
      op->vtkMRMLPlotChartNode::TitleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTitleVisibility() :
      op->vtkMRMLPlotChartNode::GetTitleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleVisibility(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetTitleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GridVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GridVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GridVisibilityOn();
    }
    else
    {
      op->vtkMRMLPlotChartNode::GridVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GridVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GridVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GridVisibilityOff();
    }
    else
    {
      op->vtkMRMLPlotChartNode::GridVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGridVisibility() :
      op->vtkMRMLPlotChartNode::GetGridVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridVisibility(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetGridVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_LegendVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegendVisibilityOn();
    }
    else
    {
      op->vtkMRMLPlotChartNode::LegendVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_LegendVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegendVisibilityOff();
    }
    else
    {
      op->vtkMRMLPlotChartNode::LegendVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLegendVisibility() :
      op->vtkMRMLPlotChartNode::GetLegendVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegendVisibility(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetLegendVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetLegendFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegendFontSize(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetLegendFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetLegendFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLegendFontSize() :
      op->vtkMRMLPlotChartNode::GetLegendFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetXAxisRangeAuto(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisRangeAuto");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetXAxisRangeAuto() :
      op->vtkMRMLPlotChartNode::GetXAxisRangeAuto());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetXAxisRangeAuto(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisRangeAuto");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisRangeAuto(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetXAxisRangeAuto(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_XAxisRangeAutoOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisRangeAutoOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisRangeAutoOn();
    }
    else
    {
      op->vtkMRMLPlotChartNode::XAxisRangeAutoOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_XAxisRangeAutoOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisRangeAutoOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisRangeAutoOff();
    }
    else
    {
      op->vtkMRMLPlotChartNode::XAxisRangeAutoOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetYAxisRangeAuto(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisRangeAuto");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetYAxisRangeAuto() :
      op->vtkMRMLPlotChartNode::GetYAxisRangeAuto());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetYAxisRangeAuto(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisRangeAuto");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisRangeAuto(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetYAxisRangeAuto(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_YAxisRangeAutoOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisRangeAutoOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisRangeAutoOn();
    }
    else
    {
      op->vtkMRMLPlotChartNode::YAxisRangeAutoOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_YAxisRangeAutoOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisRangeAutoOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisRangeAutoOff();
    }
    else
    {
      op->vtkMRMLPlotChartNode::YAxisRangeAutoOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetXAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetXAxisRange() :
      op->vtkMRMLPlotChartNode::GetXAxisRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetXAxisRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetXAxisRange(temp0, temp1);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetXAxisRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLPlotChartNode_SetXAxisRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisRange(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetXAxisRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLPlotChartNode_SetXAxisRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLPlotChartNode_SetXAxisRange_s1(self, args);
    case 1:
      return PyvtkMRMLPlotChartNode_SetXAxisRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXAxisRange");
  return nullptr;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetYAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetYAxisRange() :
      op->vtkMRMLPlotChartNode::GetYAxisRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetYAxisRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetYAxisRange(temp0, temp1);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetYAxisRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLPlotChartNode_SetYAxisRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisRange(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetYAxisRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLPlotChartNode_SetYAxisRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLPlotChartNode_SetYAxisRange_s1(self, args);
    case 1:
      return PyvtkMRMLPlotChartNode_SetYAxisRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetYAxisRange");
  return nullptr;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetXAxisLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetXAxisLogScale() :
      op->vtkMRMLPlotChartNode::GetXAxisLogScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetXAxisLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisLogScale(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetXAxisLogScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_XAxisLogScaleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisLogScaleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisLogScaleOn();
    }
    else
    {
      op->vtkMRMLPlotChartNode::XAxisLogScaleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_XAxisLogScaleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisLogScaleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisLogScaleOff();
    }
    else
    {
      op->vtkMRMLPlotChartNode::XAxisLogScaleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetYAxisLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetYAxisLogScale() :
      op->vtkMRMLPlotChartNode::GetYAxisLogScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetYAxisLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisLogScale(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetYAxisLogScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_YAxisLogScaleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisLogScaleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisLogScaleOn();
    }
    else
    {
      op->vtkMRMLPlotChartNode::YAxisLogScaleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_YAxisLogScaleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisLogScaleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisLogScaleOff();
    }
    else
    {
      op->vtkMRMLPlotChartNode::YAxisLogScaleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetXAxisTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisTitle(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetXAxisTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetXAxisTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXAxisTitle() :
      op->vtkMRMLPlotChartNode::GetXAxisTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_XAxisTitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisTitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisTitleVisibilityOn();
    }
    else
    {
      op->vtkMRMLPlotChartNode::XAxisTitleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_XAxisTitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisTitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisTitleVisibilityOff();
    }
    else
    {
      op->vtkMRMLPlotChartNode::XAxisTitleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetXAxisTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetXAxisTitleVisibility() :
      op->vtkMRMLPlotChartNode::GetXAxisTitleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetXAxisTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisTitleVisibility(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetXAxisTitleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetYAxisTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisTitle(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetYAxisTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetYAxisTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYAxisTitle() :
      op->vtkMRMLPlotChartNode::GetYAxisTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_YAxisTitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisTitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisTitleVisibilityOn();
    }
    else
    {
      op->vtkMRMLPlotChartNode::YAxisTitleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_YAxisTitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisTitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisTitleVisibilityOff();
    }
    else
    {
      op->vtkMRMLPlotChartNode::YAxisTitleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetYAxisTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetYAxisTitleVisibility() :
      op->vtkMRMLPlotChartNode::GetYAxisTitleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetYAxisTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisTitleVisibility(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetYAxisTitleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetAxisTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitleFontSize(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetAxisTitleFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetAxisTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisTitleFontSize() :
      op->vtkMRMLPlotChartNode::GetAxisTitleFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelFontSize(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetAxisLabelFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelFontSize() :
      op->vtkMRMLPlotChartNode::GetAxisLabelFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetFontType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFontType(temp0);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetFontType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetFontType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFontType() :
      op->vtkMRMLPlotChartNode::GetFontType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_EnablePointMoveAlongXOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnablePointMoveAlongXOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnablePointMoveAlongXOn();
    }
    else
    {
      op->vtkMRMLPlotChartNode::EnablePointMoveAlongXOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_EnablePointMoveAlongXOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnablePointMoveAlongXOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnablePointMoveAlongXOff();
    }
    else
    {
      op->vtkMRMLPlotChartNode::EnablePointMoveAlongXOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetEnablePointMoveAlongX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnablePointMoveAlongX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnablePointMoveAlongX() :
      op->vtkMRMLPlotChartNode::GetEnablePointMoveAlongX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetEnablePointMoveAlongX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnablePointMoveAlongX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

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
      op->vtkMRMLPlotChartNode::SetEnablePointMoveAlongX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_EnablePointMoveAlongYOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnablePointMoveAlongYOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnablePointMoveAlongYOn();
    }
    else
    {
      op->vtkMRMLPlotChartNode::EnablePointMoveAlongYOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_EnablePointMoveAlongYOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnablePointMoveAlongYOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnablePointMoveAlongYOff();
    }
    else
    {
      op->vtkMRMLPlotChartNode::EnablePointMoveAlongYOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetEnablePointMoveAlongY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnablePointMoveAlongY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnablePointMoveAlongY() :
      op->vtkMRMLPlotChartNode::GetEnablePointMoveAlongY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetEnablePointMoveAlongY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnablePointMoveAlongY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

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
      op->vtkMRMLPlotChartNode::SetEnablePointMoveAlongY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetPlotSeriesNodeReferenceRole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotSeriesNodeReferenceRole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPlotSeriesNodeReferenceRole() :
      op->vtkMRMLPlotChartNode::GetPlotSeriesNodeReferenceRole());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_SetPropertyToAllPlotSeriesNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertyToAllPlotSeriesNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  typedef vtkMRMLPlotChartNode::PlotSeriesNodeProperty temp0_type;
  temp0_type temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetEnumValue(temp0, "vtkMRMLPlotChartNode.PlotSeriesNodeProperty") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPropertyToAllPlotSeriesNodes(temp0, temp1);
    }
    else
    {
      op->vtkMRMLPlotChartNode::SetPropertyToAllPlotSeriesNodes(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLPlotChartNode_GetPropertyFromAllPlotSeriesNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyFromAllPlotSeriesNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLPlotChartNode *op = static_cast<vtkMRMLPlotChartNode *>(vp);

  typedef vtkMRMLPlotChartNode::PlotSeriesNodeProperty temp0_type;
  temp0_type temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetEnumValue(temp0, "vtkMRMLPlotChartNode.PlotSeriesNodeProperty") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPropertyFromAllPlotSeriesNodes(temp0, temp1) :
      op->vtkMRMLPlotChartNode::GetPropertyFromAllPlotSeriesNodes(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLPlotChartNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLPlotChartNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLPlotChartNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLPlotChartNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLPlotChartNode\nC++: static vtkMRMLPlotChartNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLPlotChartNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLPlotChartNode\nC++: vtkMRMLPlotChartNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLPlotChartNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLPlotChartNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLPlotChartNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"CopyContent", PyvtkMRMLPlotChartNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLPlotChartNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLPlotChartNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model).\n"},
  {"ProcessMRMLEvents", PyvtkMRMLPlotChartNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nMethod to propagate events generated in mrml.\n"},
  {"GetPlotSeriesNodeID", PyvtkMRMLPlotChartNode_GetPlotSeriesNodeID, METH_VARARGS,
   "GetPlotSeriesNodeID(self) -> str\nC++: const char *GetPlotSeriesNodeID()\n\nAccess methods\n\nConvenience method that returns the ID of the first plot data\nnode in the chart.\n\\sa GetNthPlotSeriesNodeID(int), GetPlotSeriesNode()\n"},
  {"GetPlotSeriesNode", PyvtkMRMLPlotChartNode_GetPlotSeriesNode, METH_VARARGS,
   "GetPlotSeriesNode(self) -> vtkMRMLPlotSeriesNode\nC++: vtkMRMLPlotSeriesNode *GetPlotSeriesNode()\n\nConvenience method that returns the first plot data node.\n\\sa GetNthPlotSeriesNode(int), GetPlotSeriesNodeID()\n"},
  {"GetNthPlotSeriesNodeID", PyvtkMRMLPlotChartNode_GetNthPlotSeriesNodeID, METH_VARARGS,
   "GetNthPlotSeriesNodeID(self, n:int) -> str\nC++: const char *GetNthPlotSeriesNodeID(int n)\n\nReturn the ID of n-th plot data node ID. Or 0 if no such node\nexist.\n"},
  {"GetNthPlotSeriesNode", PyvtkMRMLPlotChartNode_GetNthPlotSeriesNode, METH_VARARGS,
   "GetNthPlotSeriesNode(self, n:int) -> vtkMRMLPlotSeriesNode\nC++: vtkMRMLPlotSeriesNode *GetNthPlotSeriesNode(int n)\n\nGet associated plot data node. Can be 0 in temporary states; e.g.\nif the plot node has no scene, or if the associated plot is not\nyet into the scene.\n"},
  {"GetPlotSeriesNodeIndexFromID", PyvtkMRMLPlotChartNode_GetPlotSeriesNodeIndexFromID, METH_VARARGS,
   "GetPlotSeriesNodeIndexFromID(self, plotSeriesNodeID:str) -> int\nC++: int GetPlotSeriesNodeIndexFromID(\n    const char *plotSeriesNodeID)\n\nReturn the index of the Nth plot node ID. If not found, it\nreturns -1.\n"},
  {"GetPlotSeriesNodeIDs", PyvtkMRMLPlotChartNode_GetPlotSeriesNodeIDs, METH_VARARGS,
   "GetPlotSeriesNodeIDs(self, plotSeriesNodeIDs:[str, ...]) -> int\nC++: virtual int GetPlotSeriesNodeIDs(\n    std::vector<std::string> &plotSeriesNodeIDs)\n\nGet IDs of all associated plot data nodes.\n"},
  {"GetPlotSeriesNodeNames", PyvtkMRMLPlotChartNode_GetPlotSeriesNodeNames, METH_VARARGS,
   "GetPlotSeriesNodeNames(self, plotSeriesNodeNames:[str, ...])\n    -> int\nC++: virtual int GetPlotSeriesNodeNames(\n    std::vector<std::string> &plotSeriesNodeNames)\n\nGet names of all associated plot data nodes.\n"},
  {"GetNumberOfPlotSeriesNodes", PyvtkMRMLPlotChartNode_GetNumberOfPlotSeriesNodes, METH_VARARGS,
   "GetNumberOfPlotSeriesNodes(self) -> int\nC++: int GetNumberOfPlotSeriesNodes()\n\nReturn the number of plot node IDs (and plot nodes as they always\nhave the same size).\n"},
  {"AddAndObservePlotSeriesNodeID", PyvtkMRMLPlotChartNode_AddAndObservePlotSeriesNodeID, METH_VARARGS,
   "AddAndObservePlotSeriesNodeID(self, plotSeriesNodeID:str) -> None\nC++: void AddAndObservePlotSeriesNodeID(\n    const char *plotSeriesNodeID)\n\nAdds a plot data node to the chart.\n\\sa SetAndObserverNthPlotSeriesNodeID(int, const char*)\n"},
  {"SetAndObservePlotSeriesNodeID", PyvtkMRMLPlotChartNode_SetAndObservePlotSeriesNodeID, METH_VARARGS,
   "SetAndObservePlotSeriesNodeID(self, plotSeriesNodeID:str) -> None\nC++: void SetAndObservePlotSeriesNodeID(\n    const char *plotSeriesNodeID)\n\nConvenience method that sets the first plot data node in the\nchart.\n\\sa SetAndObserverNthPlotSeriesNodeID(int, const char*)\n"},
  {"SetAndObserveNthPlotSeriesNodeID", PyvtkMRMLPlotChartNode_SetAndObserveNthPlotSeriesNodeID, METH_VARARGS,
   "SetAndObserveNthPlotSeriesNodeID(self, n:int,\n    plotSeriesNodeID:str) -> None\nC++: void SetAndObserveNthPlotSeriesNodeID(int n,\n    const char *plotSeriesNodeID)\n\nSet and observe the Nth plot data node ID in the list. If n is\nlarger than the number of plot nodes, the plot node ID is added\nat the end of the list. If PlotSeriesNodeID is 0, the node ID is\nremoved from the list.\n\\sa SetAndObservePlotSeriesNodeID(const char*),\nAddAndObservePlotSeriesNodeID(const char *),\nRemoveNthPlotSeriesNodeID(int)\n"},
  {"RemovePlotSeriesNodeID", PyvtkMRMLPlotChartNode_RemovePlotSeriesNodeID, METH_VARARGS,
   "RemovePlotSeriesNodeID(self, plotSeriesNodeID:str) -> None\nC++: void RemovePlotSeriesNodeID(const char *plotSeriesNodeID)\n\nRemoves a plot data node from the chart.\n\\sa SetAndObserverNthPlotSeriesNodeID(int, const char*)\n"},
  {"RemoveNthPlotSeriesNodeID", PyvtkMRMLPlotChartNode_RemoveNthPlotSeriesNodeID, METH_VARARGS,
   "RemoveNthPlotSeriesNodeID(self, n:int) -> None\nC++: void RemoveNthPlotSeriesNodeID(int n)\n\nRemoves n-th plot data node from the chart.\n\\sa SetAndObserverNthPlotSeriesNodeID(int, const char*)\n"},
  {"RemoveAllPlotSeriesNodeIDs", PyvtkMRMLPlotChartNode_RemoveAllPlotSeriesNodeIDs, METH_VARARGS,
   "RemoveAllPlotSeriesNodeIDs(self) -> None\nC++: void RemoveAllPlotSeriesNodeIDs()\n\nRemove all plot data nodes from the chart.\n"},
  {"HasPlotSeriesNodeID", PyvtkMRMLPlotChartNode_HasPlotSeriesNodeID, METH_VARARGS,
   "HasPlotSeriesNodeID(self, plotSeriesNodeID:str) -> bool\nC++: bool HasPlotSeriesNodeID(const char *plotSeriesNodeID)\n\nReturn true if PlotSeriesNodeID is in the plot node ID list.\n"},
  {"SetTitle", PyvtkMRMLPlotChartNode_SetTitle, METH_VARARGS,
   "SetTitle(self, _arg:str) -> None\nC++: virtual void SetTitle(const char *_arg)\n\nTitle of the chart\n"},
  {"GetTitle", PyvtkMRMLPlotChartNode_GetTitle, METH_VARARGS,
   "GetTitle(self) -> str\nC++: virtual char *GetTitle()\n\n"},
  {"SetTitleFontSize", PyvtkMRMLPlotChartNode_SetTitleFontSize, METH_VARARGS,
   "SetTitleFontSize(self, _arg:int) -> None\nC++: virtual void SetTitleFontSize(int _arg)\n\nTitle font size. Default: 20.\n"},
  {"GetTitleFontSize", PyvtkMRMLPlotChartNode_GetTitleFontSize, METH_VARARGS,
   "GetTitleFontSize(self) -> int\nC++: virtual int GetTitleFontSize()\n\n"},
  {"TitleVisibilityOn", PyvtkMRMLPlotChartNode_TitleVisibilityOn, METH_VARARGS,
   "TitleVisibilityOn(self) -> None\nC++: virtual void TitleVisibilityOn()\n\nShow title of the chart\n"},
  {"TitleVisibilityOff", PyvtkMRMLPlotChartNode_TitleVisibilityOff, METH_VARARGS,
   "TitleVisibilityOff(self) -> None\nC++: virtual void TitleVisibilityOff()\n\n"},
  {"GetTitleVisibility", PyvtkMRMLPlotChartNode_GetTitleVisibility, METH_VARARGS,
   "GetTitleVisibility(self) -> bool\nC++: virtual bool GetTitleVisibility()\n\n"},
  {"SetTitleVisibility", PyvtkMRMLPlotChartNode_SetTitleVisibility, METH_VARARGS,
   "SetTitleVisibility(self, _arg:bool) -> None\nC++: virtual void SetTitleVisibility(bool _arg)\n\n"},
  {"GridVisibilityOn", PyvtkMRMLPlotChartNode_GridVisibilityOn, METH_VARARGS,
   "GridVisibilityOn(self) -> None\nC++: virtual void GridVisibilityOn()\n\nShow horizontal and vertical grid lines\n"},
  {"GridVisibilityOff", PyvtkMRMLPlotChartNode_GridVisibilityOff, METH_VARARGS,
   "GridVisibilityOff(self) -> None\nC++: virtual void GridVisibilityOff()\n\n"},
  {"GetGridVisibility", PyvtkMRMLPlotChartNode_GetGridVisibility, METH_VARARGS,
   "GetGridVisibility(self) -> bool\nC++: virtual bool GetGridVisibility()\n\n"},
  {"SetGridVisibility", PyvtkMRMLPlotChartNode_SetGridVisibility, METH_VARARGS,
   "SetGridVisibility(self, _arg:bool) -> None\nC++: virtual void SetGridVisibility(bool _arg)\n\n"},
  {"LegendVisibilityOn", PyvtkMRMLPlotChartNode_LegendVisibilityOn, METH_VARARGS,
   "LegendVisibilityOn(self) -> None\nC++: virtual void LegendVisibilityOn()\n\nShow horizontal and vertical grid lines\n"},
  {"LegendVisibilityOff", PyvtkMRMLPlotChartNode_LegendVisibilityOff, METH_VARARGS,
   "LegendVisibilityOff(self) -> None\nC++: virtual void LegendVisibilityOff()\n\n"},
  {"GetLegendVisibility", PyvtkMRMLPlotChartNode_GetLegendVisibility, METH_VARARGS,
   "GetLegendVisibility(self) -> bool\nC++: virtual bool GetLegendVisibility()\n\n"},
  {"SetLegendVisibility", PyvtkMRMLPlotChartNode_SetLegendVisibility, METH_VARARGS,
   "SetLegendVisibility(self, _arg:bool) -> None\nC++: virtual void SetLegendVisibility(bool _arg)\n\n"},
  {"SetLegendFontSize", PyvtkMRMLPlotChartNode_SetLegendFontSize, METH_VARARGS,
   "SetLegendFontSize(self, _arg:int) -> None\nC++: virtual void SetLegendFontSize(int _arg)\n\nTitle font size. Default: 20.\n"},
  {"GetLegendFontSize", PyvtkMRMLPlotChartNode_GetLegendFontSize, METH_VARARGS,
   "GetLegendFontSize(self) -> int\nC++: virtual int GetLegendFontSize()\n\n"},
  {"GetXAxisRangeAuto", PyvtkMRMLPlotChartNode_GetXAxisRangeAuto, METH_VARARGS,
   "GetXAxisRangeAuto(self) -> bool\nC++: virtual bool GetXAxisRangeAuto()\n\n"},
  {"SetXAxisRangeAuto", PyvtkMRMLPlotChartNode_SetXAxisRangeAuto, METH_VARARGS,
   "SetXAxisRangeAuto(self, _arg:bool) -> None\nC++: virtual void SetXAxisRangeAuto(bool _arg)\n\n"},
  {"XAxisRangeAutoOn", PyvtkMRMLPlotChartNode_XAxisRangeAutoOn, METH_VARARGS,
   "XAxisRangeAutoOn(self) -> None\nC++: virtual void XAxisRangeAutoOn()\n\n"},
  {"XAxisRangeAutoOff", PyvtkMRMLPlotChartNode_XAxisRangeAutoOff, METH_VARARGS,
   "XAxisRangeAutoOff(self) -> None\nC++: virtual void XAxisRangeAutoOff()\n\n"},
  {"GetYAxisRangeAuto", PyvtkMRMLPlotChartNode_GetYAxisRangeAuto, METH_VARARGS,
   "GetYAxisRangeAuto(self) -> bool\nC++: virtual bool GetYAxisRangeAuto()\n\n"},
  {"SetYAxisRangeAuto", PyvtkMRMLPlotChartNode_SetYAxisRangeAuto, METH_VARARGS,
   "SetYAxisRangeAuto(self, _arg:bool) -> None\nC++: virtual void SetYAxisRangeAuto(bool _arg)\n\n"},
  {"YAxisRangeAutoOn", PyvtkMRMLPlotChartNode_YAxisRangeAutoOn, METH_VARARGS,
   "YAxisRangeAutoOn(self) -> None\nC++: virtual void YAxisRangeAutoOn()\n\n"},
  {"YAxisRangeAutoOff", PyvtkMRMLPlotChartNode_YAxisRangeAutoOff, METH_VARARGS,
   "YAxisRangeAutoOff(self) -> None\nC++: virtual void YAxisRangeAutoOff()\n\n"},
  {"GetXAxisRange", PyvtkMRMLPlotChartNode_GetXAxisRange, METH_VARARGS,
   "GetXAxisRange(self) -> (float, float)\nC++: virtual double *GetXAxisRange()\n\n"},
  {"SetXAxisRange", PyvtkMRMLPlotChartNode_SetXAxisRange, METH_VARARGS,
   "SetXAxisRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetXAxisRange(double _arg1, double _arg2)\nSetXAxisRange(self, _arg:(float, float)) -> None\nC++: void SetXAxisRange(const double _arg[2])\n\n"},
  {"GetYAxisRange", PyvtkMRMLPlotChartNode_GetYAxisRange, METH_VARARGS,
   "GetYAxisRange(self) -> (float, float)\nC++: virtual double *GetYAxisRange()\n\n"},
  {"SetYAxisRange", PyvtkMRMLPlotChartNode_SetYAxisRange, METH_VARARGS,
   "SetYAxisRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetYAxisRange(double _arg1, double _arg2)\nSetYAxisRange(self, _arg:(float, float)) -> None\nC++: void SetYAxisRange(const double _arg[2])\n\n"},
  {"GetXAxisLogScale", PyvtkMRMLPlotChartNode_GetXAxisLogScale, METH_VARARGS,
   "GetXAxisLogScale(self) -> bool\nC++: virtual bool GetXAxisLogScale()\n\nEnable logarithmic scaling of X axis. Only positive axis range\ncan be displayed using logarithmic scale.\n"},
  {"SetXAxisLogScale", PyvtkMRMLPlotChartNode_SetXAxisLogScale, METH_VARARGS,
   "SetXAxisLogScale(self, _arg:bool) -> None\nC++: virtual void SetXAxisLogScale(bool _arg)\n\n"},
  {"XAxisLogScaleOn", PyvtkMRMLPlotChartNode_XAxisLogScaleOn, METH_VARARGS,
   "XAxisLogScaleOn(self) -> None\nC++: virtual void XAxisLogScaleOn()\n\n"},
  {"XAxisLogScaleOff", PyvtkMRMLPlotChartNode_XAxisLogScaleOff, METH_VARARGS,
   "XAxisLogScaleOff(self) -> None\nC++: virtual void XAxisLogScaleOff()\n\n"},
  {"GetYAxisLogScale", PyvtkMRMLPlotChartNode_GetYAxisLogScale, METH_VARARGS,
   "GetYAxisLogScale(self) -> bool\nC++: virtual bool GetYAxisLogScale()\n\nEnable logarithmic scaling of Y axis. Only positive axis range\ncan be displayed using logarithmic scale.\n"},
  {"SetYAxisLogScale", PyvtkMRMLPlotChartNode_SetYAxisLogScale, METH_VARARGS,
   "SetYAxisLogScale(self, _arg:bool) -> None\nC++: virtual void SetYAxisLogScale(bool _arg)\n\n"},
  {"YAxisLogScaleOn", PyvtkMRMLPlotChartNode_YAxisLogScaleOn, METH_VARARGS,
   "YAxisLogScaleOn(self) -> None\nC++: virtual void YAxisLogScaleOn()\n\n"},
  {"YAxisLogScaleOff", PyvtkMRMLPlotChartNode_YAxisLogScaleOff, METH_VARARGS,
   "YAxisLogScaleOff(self) -> None\nC++: virtual void YAxisLogScaleOff()\n\n"},
  {"SetXAxisTitle", PyvtkMRMLPlotChartNode_SetXAxisTitle, METH_VARARGS,
   "SetXAxisTitle(self, _arg:str) -> None\nC++: virtual void SetXAxisTitle(const char *_arg)\n\nTitle of X axis\n"},
  {"GetXAxisTitle", PyvtkMRMLPlotChartNode_GetXAxisTitle, METH_VARARGS,
   "GetXAxisTitle(self) -> str\nC++: virtual char *GetXAxisTitle()\n\n"},
  {"XAxisTitleVisibilityOn", PyvtkMRMLPlotChartNode_XAxisTitleVisibilityOn, METH_VARARGS,
   "XAxisTitleVisibilityOn(self) -> None\nC++: virtual void XAxisTitleVisibilityOn()\n\nShow title of X axis\n"},
  {"XAxisTitleVisibilityOff", PyvtkMRMLPlotChartNode_XAxisTitleVisibilityOff, METH_VARARGS,
   "XAxisTitleVisibilityOff(self) -> None\nC++: virtual void XAxisTitleVisibilityOff()\n\n"},
  {"GetXAxisTitleVisibility", PyvtkMRMLPlotChartNode_GetXAxisTitleVisibility, METH_VARARGS,
   "GetXAxisTitleVisibility(self) -> bool\nC++: virtual bool GetXAxisTitleVisibility()\n\n"},
  {"SetXAxisTitleVisibility", PyvtkMRMLPlotChartNode_SetXAxisTitleVisibility, METH_VARARGS,
   "SetXAxisTitleVisibility(self, _arg:bool) -> None\nC++: virtual void SetXAxisTitleVisibility(bool _arg)\n\n"},
  {"SetYAxisTitle", PyvtkMRMLPlotChartNode_SetYAxisTitle, METH_VARARGS,
   "SetYAxisTitle(self, _arg:str) -> None\nC++: virtual void SetYAxisTitle(const char *_arg)\n\nTitle of Y axis\n"},
  {"GetYAxisTitle", PyvtkMRMLPlotChartNode_GetYAxisTitle, METH_VARARGS,
   "GetYAxisTitle(self) -> str\nC++: virtual char *GetYAxisTitle()\n\n"},
  {"YAxisTitleVisibilityOn", PyvtkMRMLPlotChartNode_YAxisTitleVisibilityOn, METH_VARARGS,
   "YAxisTitleVisibilityOn(self) -> None\nC++: virtual void YAxisTitleVisibilityOn()\n\nShow title of Y axis\n"},
  {"YAxisTitleVisibilityOff", PyvtkMRMLPlotChartNode_YAxisTitleVisibilityOff, METH_VARARGS,
   "YAxisTitleVisibilityOff(self) -> None\nC++: virtual void YAxisTitleVisibilityOff()\n\n"},
  {"GetYAxisTitleVisibility", PyvtkMRMLPlotChartNode_GetYAxisTitleVisibility, METH_VARARGS,
   "GetYAxisTitleVisibility(self) -> bool\nC++: virtual bool GetYAxisTitleVisibility()\n\n"},
  {"SetYAxisTitleVisibility", PyvtkMRMLPlotChartNode_SetYAxisTitleVisibility, METH_VARARGS,
   "SetYAxisTitleVisibility(self, _arg:bool) -> None\nC++: virtual void SetYAxisTitleVisibility(bool _arg)\n\n"},
  {"SetAxisTitleFontSize", PyvtkMRMLPlotChartNode_SetAxisTitleFontSize, METH_VARARGS,
   "SetAxisTitleFontSize(self, _arg:int) -> None\nC++: virtual void SetAxisTitleFontSize(int _arg)\n\nAxis title font size. Default: 16.\n"},
  {"GetAxisTitleFontSize", PyvtkMRMLPlotChartNode_GetAxisTitleFontSize, METH_VARARGS,
   "GetAxisTitleFontSize(self) -> int\nC++: virtual int GetAxisTitleFontSize()\n\n"},
  {"SetAxisLabelFontSize", PyvtkMRMLPlotChartNode_SetAxisLabelFontSize, METH_VARARGS,
   "SetAxisLabelFontSize(self, _arg:int) -> None\nC++: virtual void SetAxisLabelFontSize(int _arg)\n\nAxis label font size. Default: 12.\n"},
  {"GetAxisLabelFontSize", PyvtkMRMLPlotChartNode_GetAxisLabelFontSize, METH_VARARGS,
   "GetAxisLabelFontSize(self) -> int\nC++: virtual int GetAxisLabelFontSize()\n\n"},
  {"SetFontType", PyvtkMRMLPlotChartNode_SetFontType, METH_VARARGS,
   "SetFontType(self, _arg:str) -> None\nC++: virtual void SetFontType(const char *_arg)\n\nFont type for all text in the chart: \"Arial\", \"Times\", \"Courier\"\n"},
  {"GetFontType", PyvtkMRMLPlotChartNode_GetFontType, METH_VARARGS,
   "GetFontType(self) -> str\nC++: virtual char *GetFontType()\n\n"},
  {"EnablePointMoveAlongXOn", PyvtkMRMLPlotChartNode_EnablePointMoveAlongXOn, METH_VARARGS,
   "EnablePointMoveAlongXOn(self) -> None\nC++: virtual void EnablePointMoveAlongXOn()\n\nEnable moving of data points along X axis by click-and-drag in\nplot views. Points may only be moved in the view if moving is\nenabled in the plot view node as well.\n"},
  {"EnablePointMoveAlongXOff", PyvtkMRMLPlotChartNode_EnablePointMoveAlongXOff, METH_VARARGS,
   "EnablePointMoveAlongXOff(self) -> None\nC++: virtual void EnablePointMoveAlongXOff()\n\n"},
  {"GetEnablePointMoveAlongX", PyvtkMRMLPlotChartNode_GetEnablePointMoveAlongX, METH_VARARGS,
   "GetEnablePointMoveAlongX(self) -> bool\nC++: virtual bool GetEnablePointMoveAlongX()\n\n"},
  {"SetEnablePointMoveAlongX", PyvtkMRMLPlotChartNode_SetEnablePointMoveAlongX, METH_VARARGS,
   "SetEnablePointMoveAlongX(self, _arg:bool) -> None\nC++: virtual void SetEnablePointMoveAlongX(bool _arg)\n\n"},
  {"EnablePointMoveAlongYOn", PyvtkMRMLPlotChartNode_EnablePointMoveAlongYOn, METH_VARARGS,
   "EnablePointMoveAlongYOn(self) -> None\nC++: virtual void EnablePointMoveAlongYOn()\n\nEnable moving of data points along Y axis by click-and-drag in\nplot views. Points may only be moved in the view if moving is\nenabled in the plot view node as well.\n"},
  {"EnablePointMoveAlongYOff", PyvtkMRMLPlotChartNode_EnablePointMoveAlongYOff, METH_VARARGS,
   "EnablePointMoveAlongYOff(self) -> None\nC++: virtual void EnablePointMoveAlongYOff()\n\n"},
  {"GetEnablePointMoveAlongY", PyvtkMRMLPlotChartNode_GetEnablePointMoveAlongY, METH_VARARGS,
   "GetEnablePointMoveAlongY(self) -> bool\nC++: virtual bool GetEnablePointMoveAlongY()\n\n"},
  {"SetEnablePointMoveAlongY", PyvtkMRMLPlotChartNode_SetEnablePointMoveAlongY, METH_VARARGS,
   "SetEnablePointMoveAlongY(self, _arg:bool) -> None\nC++: virtual void SetEnablePointMoveAlongY(bool _arg)\n\n"},
  {"GetPlotSeriesNodeReferenceRole", PyvtkMRMLPlotChartNode_GetPlotSeriesNodeReferenceRole, METH_VARARGS,
   "GetPlotSeriesNodeReferenceRole(self) -> str\nC++: virtual const char *GetPlotSeriesNodeReferenceRole()\n\nNode reference role used for storing plot data node references\n"},
  {"SetPropertyToAllPlotSeriesNodes", PyvtkMRMLPlotChartNode_SetPropertyToAllPlotSeriesNodes, METH_VARARGS,
   "SetPropertyToAllPlotSeriesNodes(self,\n    plotProperty:PlotSeriesNodeProperty, value:str) -> None\nC++: void SetPropertyToAllPlotSeriesNodes(\n    PlotSeriesNodeProperty plotProperty, const char *value)\n\nHelper function to set common properties for all associated plot\ndata nodes\n"},
  {"GetPropertyFromAllPlotSeriesNodes", PyvtkMRMLPlotChartNode_GetPropertyFromAllPlotSeriesNodes, METH_VARARGS,
   "GetPropertyFromAllPlotSeriesNodes(self,\n    plotProperty:PlotSeriesNodeProperty, value:str) -> bool\nC++: bool GetPropertyFromAllPlotSeriesNodes(\n    PlotSeriesNodeProperty plotProperty, std::string &value)\n\nHelper function to get common properties from all associated plot\ndata nodes. Returns false if property is not the same in all\nplots. value contains the value found in the first plot data\nnode.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLPlotChartNode_Doc =
  "vtkMRMLPlotChartNode - MRML node for referencing a collection of data\nto plot.\n\n"
  "Superclass: vtkMRMLNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLPlotChartNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLPlotChartNode", // tp_name
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
  PyvtkMRMLPlotChartNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLPlotChartNode_StaticNew()
{
  return vtkMRMLPlotChartNode::New();
}

PyObject *PyvtkMRMLPlotChartNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLPlotChartNode_Type, PyvtkMRMLPlotChartNode_Methods,
    "vtkMRMLPlotChartNode",
 &PyvtkMRMLPlotChartNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLPlotChartNode_PlotSeriesNodeProperty_Type);
  PyVTKEnum_Add(&PyvtkMRMLPlotChartNode_PlotSeriesNodeProperty_Type, "vtkMRMLPlotChartNode.PlotSeriesNodeProperty");

  o = (PyObject *)&PyvtkMRMLPlotChartNode_PlotSeriesNodeProperty_Type;
  if (PyDict_SetItemString(d, "PlotSeriesNodeProperty", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 1; c++)
  {
    static const struct { const char *name; int value; }
      constants[1] = {
        { "PlotModifiedEvent", vtkMRMLPlotChartNode::PlotModifiedEvent },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkMRMLPlotChartNode::PlotSeriesNodeProperty cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "PlotType", vtkMRMLPlotChartNode::PlotType },
        { "PlotXColumnName", vtkMRMLPlotChartNode::PlotXColumnName },
        { "PlotYColumnName", vtkMRMLPlotChartNode::PlotYColumnName },
        { "PlotMarkerStyle", vtkMRMLPlotChartNode::PlotMarkerStyle },
      };

    o = PyvtkMRMLPlotChartNode_PlotSeriesNodeProperty_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLPlotChartNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLPlotChartNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLPlotChartNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

