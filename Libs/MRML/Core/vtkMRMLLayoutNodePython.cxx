// python wrapper for vtkMRMLLayoutNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLLayoutNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLLayoutNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLLayoutNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractLayoutNode_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractLayoutNode_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractLayoutNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLLayoutNode_SlicerLayout_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLLayoutNode.SlicerLayout", // tp_name
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
PyObject *PyvtkMRMLLayoutNode_SlicerLayout_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLLayoutNode_SlicerLayout_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLLayoutNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLLayoutNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLLayoutNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLLayoutNode *tempr = vtkMRMLLayoutNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLLayoutNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLLayoutNode::NewInstance());

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
PyvtkMRMLLayoutNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLLayoutNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLLayoutNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLLayoutNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

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
      op->vtkMRMLLayoutNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->Reset(temp0);
    }
    else
    {
      op->vtkMRMLLayoutNode::Reset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetViewArrangement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewArrangement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetViewArrangement() :
      op->vtkMRMLLayoutNode::GetViewArrangement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_SetViewArrangement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewArrangement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetViewArrangement(temp0);
    }
    else
    {
      op->vtkMRMLLayoutNode::SetViewArrangement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetGUIPanelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGUIPanelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGUIPanelVisibility() :
      op->vtkMRMLLayoutNode::GetGUIPanelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_SetGUIPanelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGUIPanelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGUIPanelVisibility(temp0);
    }
    else
    {
      op->vtkMRMLLayoutNode::SetGUIPanelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetBottomPanelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomPanelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBottomPanelVisibility() :
      op->vtkMRMLLayoutNode::GetBottomPanelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_SetBottomPanelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomPanelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomPanelVisibility(temp0);
    }
    else
    {
      op->vtkMRMLLayoutNode::SetBottomPanelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetGUIPanelLR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGUIPanelLR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGUIPanelLR() :
      op->vtkMRMLLayoutNode::GetGUIPanelLR());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_SetGUIPanelLR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGUIPanelLR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGUIPanelLR(temp0);
    }
    else
    {
      op->vtkMRMLLayoutNode::SetGUIPanelLR(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetCollapseSliceControllers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollapseSliceControllers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCollapseSliceControllers() :
      op->vtkMRMLLayoutNode::GetCollapseSliceControllers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_SetCollapseSliceControllers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollapseSliceControllers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCollapseSliceControllers(temp0);
    }
    else
    {
      op->vtkMRMLLayoutNode::SetCollapseSliceControllers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetNumberOfCompareViewRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCompareViewRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCompareViewRows() :
      op->vtkMRMLLayoutNode::GetNumberOfCompareViewRows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_SetNumberOfCompareViewRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCompareViewRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfCompareViewRows(temp0);
    }
    else
    {
      op->vtkMRMLLayoutNode::SetNumberOfCompareViewRows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetNumberOfCompareViewRowsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCompareViewRowsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCompareViewRowsMinValue() :
      op->vtkMRMLLayoutNode::GetNumberOfCompareViewRowsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetNumberOfCompareViewRowsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCompareViewRowsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCompareViewRowsMaxValue() :
      op->vtkMRMLLayoutNode::GetNumberOfCompareViewRowsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetNumberOfCompareViewColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCompareViewColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCompareViewColumns() :
      op->vtkMRMLLayoutNode::GetNumberOfCompareViewColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_SetNumberOfCompareViewColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCompareViewColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfCompareViewColumns(temp0);
    }
    else
    {
      op->vtkMRMLLayoutNode::SetNumberOfCompareViewColumns(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetNumberOfCompareViewColumnsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCompareViewColumnsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCompareViewColumnsMinValue() :
      op->vtkMRMLLayoutNode::GetNumberOfCompareViewColumnsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetNumberOfCompareViewColumnsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCompareViewColumnsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCompareViewColumnsMaxValue() :
      op->vtkMRMLLayoutNode::GetNumberOfCompareViewColumnsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetNumberOfCompareViewLightboxRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCompareViewLightboxRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCompareViewLightboxRows() :
      op->vtkMRMLLayoutNode::GetNumberOfCompareViewLightboxRows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_SetNumberOfCompareViewLightboxRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCompareViewLightboxRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfCompareViewLightboxRows(temp0);
    }
    else
    {
      op->vtkMRMLLayoutNode::SetNumberOfCompareViewLightboxRows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetNumberOfCompareViewLightboxRowsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCompareViewLightboxRowsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCompareViewLightboxRowsMinValue() :
      op->vtkMRMLLayoutNode::GetNumberOfCompareViewLightboxRowsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetNumberOfCompareViewLightboxRowsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCompareViewLightboxRowsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCompareViewLightboxRowsMaxValue() :
      op->vtkMRMLLayoutNode::GetNumberOfCompareViewLightboxRowsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetNumberOfCompareViewLightboxColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCompareViewLightboxColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCompareViewLightboxColumns() :
      op->vtkMRMLLayoutNode::GetNumberOfCompareViewLightboxColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_SetNumberOfCompareViewLightboxColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCompareViewLightboxColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfCompareViewLightboxColumns(temp0);
    }
    else
    {
      op->vtkMRMLLayoutNode::SetNumberOfCompareViewLightboxColumns(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetNumberOfCompareViewLightboxColumnsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCompareViewLightboxColumnsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCompareViewLightboxColumnsMinValue() :
      op->vtkMRMLLayoutNode::GetNumberOfCompareViewLightboxColumnsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetNumberOfCompareViewLightboxColumnsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCompareViewLightboxColumnsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCompareViewLightboxColumnsMaxValue() :
      op->vtkMRMLLayoutNode::GetNumberOfCompareViewLightboxColumnsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetMainPanelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMainPanelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMainPanelSize() :
      op->vtkMRMLLayoutNode::GetMainPanelSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_SetMainPanelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMainPanelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMainPanelSize(temp0);
    }
    else
    {
      op->vtkMRMLLayoutNode::SetMainPanelSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetSecondaryPanelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondaryPanelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSecondaryPanelSize() :
      op->vtkMRMLLayoutNode::GetSecondaryPanelSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_SetSecondaryPanelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryPanelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSecondaryPanelSize(temp0);
    }
    else
    {
      op->vtkMRMLLayoutNode::SetSecondaryPanelSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetSelectedModule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedModule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSelectedModule() :
      op->vtkMRMLLayoutNode::GetSelectedModule());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_SetSelectedModule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedModule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedModule(temp0);
    }
    else
    {
      op->vtkMRMLLayoutNode::SetSelectedModule(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetMaximizedViewNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximizedViewNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLAbstractViewNode *tempr = (ap.IsBound() ?
      op->GetMaximizedViewNode(temp0) :
      op->vtkMRMLLayoutNode::GetMaximizedViewNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetNumberOfMaximizedViewNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMaximizedViewNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMaximizedViewNodes() :
      op->vtkMRMLLayoutNode::GetNumberOfMaximizedViewNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_AddMaximizedViewNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMaximizedViewNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  vtkMRMLAbstractViewNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLAbstractViewNode"))
  {
    if (ap.IsBound())
    {
      op->AddMaximizedViewNode(temp0);
    }
    else
    {
      op->vtkMRMLLayoutNode::AddMaximizedViewNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_RemoveMaximizedViewNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveMaximizedViewNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  vtkMRMLAbstractViewNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLAbstractViewNode"))
  {
    if (ap.IsBound())
    {
      op->RemoveMaximizedViewNode(temp0);
    }
    else
    {
      op->vtkMRMLLayoutNode::RemoveMaximizedViewNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_RemoveAllMaximizedViewNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllMaximizedViewNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllMaximizedViewNodes();
    }
    else
    {
      op->vtkMRMLLayoutNode::RemoveAllMaximizedViewNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_IsMaximizedViewNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMaximizedViewNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  vtkMRMLAbstractViewNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLAbstractViewNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsMaximizedViewNode(temp0) :
      op->vtkMRMLLayoutNode::IsMaximizedViewNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLLayoutNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_AddLayoutDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLayoutDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->AddLayoutDescription(temp0, temp1) :
      op->vtkMRMLLayoutNode::AddLayoutDescription(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_SetLayoutDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetLayoutDescription(temp0, temp1) :
      op->vtkMRMLLayoutNode::SetLayoutDescription(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_IsLayoutDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLayoutDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsLayoutDescription(temp0) :
      op->vtkMRMLLayoutNode::IsLayoutDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetLayoutDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetLayoutDescription(temp0) :
      op->vtkMRMLLayoutNode::GetLayoutDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetCurrentLayoutDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentLayoutDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCurrentLayoutDescription() :
      op->vtkMRMLLayoutNode::GetCurrentLayoutDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_GetLayoutRootElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutRootElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutNode *op = static_cast<vtkMRMLLayoutNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->GetLayoutRootElement() :
      op->vtkMRMLLayoutNode::GetLayoutRootElement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutNode_ParseLayout(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ParseLayout");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkXMLDataElement *tempr = vtkMRMLLayoutNode::ParseLayout(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLLayoutNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLLayoutNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLLayoutNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLLayoutNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLLayoutNode\nC++: static vtkMRMLLayoutNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLLayoutNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLLayoutNode\nC++: vtkMRMLLayoutNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLLayoutNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLLayoutNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLLayoutNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"Copy", PyvtkMRMLLayoutNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"Reset", PyvtkMRMLLayoutNode_Reset, METH_VARARGS,
   "Reset(self, defaultNode:vtkMRMLNode) -> None\nC++: void Reset(vtkMRMLNode *defaultNode) override;\n\nReimplemented to reset maximized view node.\n"},
  {"GetViewArrangement", PyvtkMRMLLayoutNode_GetViewArrangement, METH_VARARGS,
   "GetViewArrangement(self) -> int\nC++: virtual int GetViewArrangement()\n\nGet/Set for Current layout\n"},
  {"SetViewArrangement", PyvtkMRMLLayoutNode_SetViewArrangement, METH_VARARGS,
   "SetViewArrangement(self, __a:int) -> None\nC++: virtual void SetViewArrangement(int)\n\n"},
  {"GetGUIPanelVisibility", PyvtkMRMLLayoutNode_GetGUIPanelVisibility, METH_VARARGS,
   "GetGUIPanelVisibility(self) -> int\nC++: virtual int GetGUIPanelVisibility()\n\n"},
  {"SetGUIPanelVisibility", PyvtkMRMLLayoutNode_SetGUIPanelVisibility, METH_VARARGS,
   "SetGUIPanelVisibility(self, _arg:int) -> None\nC++: virtual void SetGUIPanelVisibility(int _arg)\n\n"},
  {"GetBottomPanelVisibility", PyvtkMRMLLayoutNode_GetBottomPanelVisibility, METH_VARARGS,
   "GetBottomPanelVisibility(self) -> int\nC++: virtual int GetBottomPanelVisibility()\n\n"},
  {"SetBottomPanelVisibility", PyvtkMRMLLayoutNode_SetBottomPanelVisibility, METH_VARARGS,
   "SetBottomPanelVisibility(self, _arg:int) -> None\nC++: virtual void SetBottomPanelVisibility(int _arg)\n\n"},
  {"GetGUIPanelLR", PyvtkMRMLLayoutNode_GetGUIPanelLR, METH_VARARGS,
   "GetGUIPanelLR(self) -> int\nC++: virtual int GetGUIPanelLR()\n\n0 is left side, 1 is right side\n"},
  {"SetGUIPanelLR", PyvtkMRMLLayoutNode_SetGUIPanelLR, METH_VARARGS,
   "SetGUIPanelLR(self, _arg:int) -> None\nC++: virtual void SetGUIPanelLR(int _arg)\n\n"},
  {"GetCollapseSliceControllers", PyvtkMRMLLayoutNode_GetCollapseSliceControllers, METH_VARARGS,
   "GetCollapseSliceControllers(self) -> int\nC++: virtual int GetCollapseSliceControllers()\n\nControl the collapse state of the SliceControllers\n"},
  {"SetCollapseSliceControllers", PyvtkMRMLLayoutNode_SetCollapseSliceControllers, METH_VARARGS,
   "SetCollapseSliceControllers(self, _arg:int) -> None\nC++: virtual void SetCollapseSliceControllers(int _arg)\n\n"},
  {"GetNumberOfCompareViewRows", PyvtkMRMLLayoutNode_GetNumberOfCompareViewRows, METH_VARARGS,
   "GetNumberOfCompareViewRows(self) -> int\nC++: virtual int GetNumberOfCompareViewRows()\n\nCompareView configuration Get/Set methods\n"},
  {"SetNumberOfCompareViewRows", PyvtkMRMLLayoutNode_SetNumberOfCompareViewRows, METH_VARARGS,
   "SetNumberOfCompareViewRows(self, _arg:int) -> None\nC++: virtual void SetNumberOfCompareViewRows(int _arg)\n\n"},
  {"GetNumberOfCompareViewRowsMinValue", PyvtkMRMLLayoutNode_GetNumberOfCompareViewRowsMinValue, METH_VARARGS,
   "GetNumberOfCompareViewRowsMinValue(self) -> int\nC++: virtual int GetNumberOfCompareViewRowsMinValue()\n\n"},
  {"GetNumberOfCompareViewRowsMaxValue", PyvtkMRMLLayoutNode_GetNumberOfCompareViewRowsMaxValue, METH_VARARGS,
   "GetNumberOfCompareViewRowsMaxValue(self) -> int\nC++: virtual int GetNumberOfCompareViewRowsMaxValue()\n\n"},
  {"GetNumberOfCompareViewColumns", PyvtkMRMLLayoutNode_GetNumberOfCompareViewColumns, METH_VARARGS,
   "GetNumberOfCompareViewColumns(self) -> int\nC++: virtual int GetNumberOfCompareViewColumns()\n\n"},
  {"SetNumberOfCompareViewColumns", PyvtkMRMLLayoutNode_SetNumberOfCompareViewColumns, METH_VARARGS,
   "SetNumberOfCompareViewColumns(self, _arg:int) -> None\nC++: virtual void SetNumberOfCompareViewColumns(int _arg)\n\n"},
  {"GetNumberOfCompareViewColumnsMinValue", PyvtkMRMLLayoutNode_GetNumberOfCompareViewColumnsMinValue, METH_VARARGS,
   "GetNumberOfCompareViewColumnsMinValue(self) -> int\nC++: virtual int GetNumberOfCompareViewColumnsMinValue()\n\n"},
  {"GetNumberOfCompareViewColumnsMaxValue", PyvtkMRMLLayoutNode_GetNumberOfCompareViewColumnsMaxValue, METH_VARARGS,
   "GetNumberOfCompareViewColumnsMaxValue(self) -> int\nC++: virtual int GetNumberOfCompareViewColumnsMaxValue()\n\n"},
  {"GetNumberOfCompareViewLightboxRows", PyvtkMRMLLayoutNode_GetNumberOfCompareViewLightboxRows, METH_VARARGS,
   "GetNumberOfCompareViewLightboxRows(self) -> int\nC++: virtual int GetNumberOfCompareViewLightboxRows()\n\nCompareView lightbox configuration Get/Set methods\n"},
  {"SetNumberOfCompareViewLightboxRows", PyvtkMRMLLayoutNode_SetNumberOfCompareViewLightboxRows, METH_VARARGS,
   "SetNumberOfCompareViewLightboxRows(self, _arg:int) -> None\nC++: virtual void SetNumberOfCompareViewLightboxRows(int _arg)\n\n"},
  {"GetNumberOfCompareViewLightboxRowsMinValue", PyvtkMRMLLayoutNode_GetNumberOfCompareViewLightboxRowsMinValue, METH_VARARGS,
   "GetNumberOfCompareViewLightboxRowsMinValue(self) -> int\nC++: virtual int GetNumberOfCompareViewLightboxRowsMinValue()\n\n"},
  {"GetNumberOfCompareViewLightboxRowsMaxValue", PyvtkMRMLLayoutNode_GetNumberOfCompareViewLightboxRowsMaxValue, METH_VARARGS,
   "GetNumberOfCompareViewLightboxRowsMaxValue(self) -> int\nC++: virtual int GetNumberOfCompareViewLightboxRowsMaxValue()\n\n"},
  {"GetNumberOfCompareViewLightboxColumns", PyvtkMRMLLayoutNode_GetNumberOfCompareViewLightboxColumns, METH_VARARGS,
   "GetNumberOfCompareViewLightboxColumns(self) -> int\nC++: virtual int GetNumberOfCompareViewLightboxColumns()\n\n"},
  {"SetNumberOfCompareViewLightboxColumns", PyvtkMRMLLayoutNode_SetNumberOfCompareViewLightboxColumns, METH_VARARGS,
   "SetNumberOfCompareViewLightboxColumns(self, _arg:int) -> None\nC++: virtual void SetNumberOfCompareViewLightboxColumns(int _arg)\n\n"},
  {"GetNumberOfCompareViewLightboxColumnsMinValue", PyvtkMRMLLayoutNode_GetNumberOfCompareViewLightboxColumnsMinValue, METH_VARARGS,
   "GetNumberOfCompareViewLightboxColumnsMinValue(self) -> int\nC++: virtual int GetNumberOfCompareViewLightboxColumnsMinValue()\n\n"},
  {"GetNumberOfCompareViewLightboxColumnsMaxValue", PyvtkMRMLLayoutNode_GetNumberOfCompareViewLightboxColumnsMaxValue, METH_VARARGS,
   "GetNumberOfCompareViewLightboxColumnsMaxValue(self) -> int\nC++: virtual int GetNumberOfCompareViewLightboxColumnsMaxValue()\n\n"},
  {"GetMainPanelSize", PyvtkMRMLLayoutNode_GetMainPanelSize, METH_VARARGS,
   "GetMainPanelSize(self) -> int\nC++: virtual int GetMainPanelSize()\n\nSet/Get the size of the main and secondary panels (size of Frame1\nin each panel)\n"},
  {"SetMainPanelSize", PyvtkMRMLLayoutNode_SetMainPanelSize, METH_VARARGS,
   "SetMainPanelSize(self, _arg:int) -> None\nC++: virtual void SetMainPanelSize(int _arg)\n\n"},
  {"GetSecondaryPanelSize", PyvtkMRMLLayoutNode_GetSecondaryPanelSize, METH_VARARGS,
   "GetSecondaryPanelSize(self) -> int\nC++: virtual int GetSecondaryPanelSize()\n\n"},
  {"SetSecondaryPanelSize", PyvtkMRMLLayoutNode_SetSecondaryPanelSize, METH_VARARGS,
   "SetSecondaryPanelSize(self, _arg:int) -> None\nC++: virtual void SetSecondaryPanelSize(int _arg)\n\n"},
  {"GetSelectedModule", PyvtkMRMLLayoutNode_GetSelectedModule, METH_VARARGS,
   "GetSelectedModule(self) -> str\nC++: virtual char *GetSelectedModule()\n\nSet/Get the size of the last selected module\n"},
  {"SetSelectedModule", PyvtkMRMLLayoutNode_SetSelectedModule, METH_VARARGS,
   "SetSelectedModule(self, _arg:str) -> None\nC++: virtual void SetSelectedModule(const char *_arg)\n\n"},
  {"GetMaximizedViewNode", PyvtkMRMLLayoutNode_GetMaximizedViewNode, METH_VARARGS,
   "GetMaximizedViewNode(self, maximizedViewNodeIndex:int)\n    -> vtkMRMLAbstractViewNode\nC++: vtkMRMLAbstractViewNode *GetMaximizedViewNode(\n    int maximizedViewNodeIndex)\n\nSet/Get the N-th view that are temporarily shown maximized. Only\none view can be maximized in each viewport.\n"},
  {"GetNumberOfMaximizedViewNodes", PyvtkMRMLLayoutNode_GetNumberOfMaximizedViewNodes, METH_VARARGS,
   "GetNumberOfMaximizedViewNodes(self) -> int\nC++: int GetNumberOfMaximizedViewNodes()\n\n"},
  {"AddMaximizedViewNode", PyvtkMRMLLayoutNode_AddMaximizedViewNode, METH_VARARGS,
   "AddMaximizedViewNode(self,\n    maximizedViewNode:vtkMRMLAbstractViewNode) -> None\nC++: void AddMaximizedViewNode(\n    vtkMRMLAbstractViewNode *maximizedViewNode)\n\n"},
  {"RemoveMaximizedViewNode", PyvtkMRMLLayoutNode_RemoveMaximizedViewNode, METH_VARARGS,
   "RemoveMaximizedViewNode(self,\n    maximizedViewNode:vtkMRMLAbstractViewNode) -> None\nC++: void RemoveMaximizedViewNode(\n    vtkMRMLAbstractViewNode *maximizedViewNode)\n\n"},
  {"RemoveAllMaximizedViewNodes", PyvtkMRMLLayoutNode_RemoveAllMaximizedViewNodes, METH_VARARGS,
   "RemoveAllMaximizedViewNodes(self) -> None\nC++: void RemoveAllMaximizedViewNodes()\n\n"},
  {"IsMaximizedViewNode", PyvtkMRMLLayoutNode_IsMaximizedViewNode, METH_VARARGS,
   "IsMaximizedViewNode(self, viewNode:vtkMRMLAbstractViewNode)\n    -> bool\nC++: bool IsMaximizedViewNode(vtkMRMLAbstractViewNode *viewNode)\n\n"},
  {"GetNodeTagName", PyvtkMRMLLayoutNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"AddLayoutDescription", PyvtkMRMLLayoutNode_AddLayoutDescription, METH_VARARGS,
   "AddLayoutDescription(self, layout:int, layoutDescription:str)\n    -> bool\nC++: bool AddLayoutDescription(int layout,\n    const char *layoutDescription)\n\nAdds a layout description with integer identifier \"layout\".\nReturns false without making any modifications if the integer\nidentifier \"layout\" has already been added.\n"},
  {"SetLayoutDescription", PyvtkMRMLLayoutNode_SetLayoutDescription, METH_VARARGS,
   "SetLayoutDescription(self, layout:int, layoutDescription:str)\n    -> bool\nC++: bool SetLayoutDescription(int layout,\n    const char *layoutDescription)\n\nModifies a layout description for integer identifier \"layout\".\nReturns false without making any modifications if the integer\nidentifier \"layout\" has NOT already been added.\n"},
  {"IsLayoutDescription", PyvtkMRMLLayoutNode_IsLayoutDescription, METH_VARARGS,
   "IsLayoutDescription(self, layout:int) -> bool\nC++: bool IsLayoutDescription(int layout)\n\nQuery whether a layout exists with a specified integer identifier\n"},
  {"GetLayoutDescription", PyvtkMRMLLayoutNode_GetLayoutDescription, METH_VARARGS,
   "GetLayoutDescription(self, layout:int) -> str\nC++: std::string GetLayoutDescription(int layout)\n\nGet the layout description associated with a specified integer\nidentifier. The empty string is returned if the layout does not\nexist.\n"},
  {"GetCurrentLayoutDescription", PyvtkMRMLLayoutNode_GetCurrentLayoutDescription, METH_VARARGS,
   "GetCurrentLayoutDescription(self) -> str\nC++: virtual char *GetCurrentLayoutDescription()\n\n"},
  {"GetLayoutRootElement", PyvtkMRMLLayoutNode_GetLayoutRootElement, METH_VARARGS,
   "GetLayoutRootElement(self) -> vtkXMLDataElement\nC++: virtual vtkXMLDataElement *GetLayoutRootElement()\n\n"},
  {"ParseLayout", PyvtkMRMLLayoutNode_ParseLayout, METH_VARARGS,
   "ParseLayout(description:str) -> vtkXMLDataElement\nC++: static vtkXMLDataElement *ParseLayout(\n    const char *description)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLLayoutNode_Doc =
  "vtkMRMLLayoutNode - Node that describes the view layout of the\napplication.\n\n"
  "Superclass: vtkMRMLAbstractLayoutNode\n\n"
  "When the scene is closing (vtkMRMLScene::Clear), the view arrangement\n"
  "is set to none due to the Copy() call on an empty node.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLLayoutNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLLayoutNode", // tp_name
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
  PyvtkMRMLLayoutNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLLayoutNode_StaticNew()
{
  return vtkMRMLLayoutNode::New();
}

PyObject *PyvtkMRMLLayoutNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLLayoutNode_Type, PyvtkMRMLLayoutNode_Methods,
    "vtkMRMLLayoutNode",
 &PyvtkMRMLLayoutNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractLayoutNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLLayoutNode_SlicerLayout_Type);
  PyVTKEnum_Add(&PyvtkMRMLLayoutNode_SlicerLayout_Type, "vtkMRMLLayoutNode.SlicerLayout");

  o = (PyObject *)&PyvtkMRMLLayoutNode_SlicerLayout_Type;
  if (PyDict_SetItemString(d, "SlicerLayout", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 38; c++)
  {
    typedef vtkMRMLLayoutNode::SlicerLayout cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[38] = {
        { "SlicerLayoutInitialView", vtkMRMLLayoutNode::SlicerLayoutInitialView },
        { "SlicerLayoutDefaultView", vtkMRMLLayoutNode::SlicerLayoutDefaultView },
        { "SlicerLayoutConventionalView", vtkMRMLLayoutNode::SlicerLayoutConventionalView },
        { "SlicerLayoutFourUpView", vtkMRMLLayoutNode::SlicerLayoutFourUpView },
        { "SlicerLayoutOneUp3DView", vtkMRMLLayoutNode::SlicerLayoutOneUp3DView },
        { "SlicerLayoutOneUpRedSliceView", vtkMRMLLayoutNode::SlicerLayoutOneUpRedSliceView },
        { "SlicerLayoutOneUpYellowSliceView", vtkMRMLLayoutNode::SlicerLayoutOneUpYellowSliceView },
        { "SlicerLayoutOneUpGreenSliceView", vtkMRMLLayoutNode::SlicerLayoutOneUpGreenSliceView },
        { "SlicerLayoutTabbed3DView", vtkMRMLLayoutNode::SlicerLayoutTabbed3DView },
        { "SlicerLayoutTabbedSliceView", vtkMRMLLayoutNode::SlicerLayoutTabbedSliceView },
        { "SlicerLayoutCompareView", vtkMRMLLayoutNode::SlicerLayoutCompareView },
        { "SlicerLayoutNone", vtkMRMLLayoutNode::SlicerLayoutNone },
        { "SlicerLayoutDual3DView", vtkMRMLLayoutNode::SlicerLayoutDual3DView },
        { "SlicerLayoutConventionalWidescreenView", vtkMRMLLayoutNode::SlicerLayoutConventionalWidescreenView },
        { "SlicerLayoutCompareWidescreenView", vtkMRMLLayoutNode::SlicerLayoutCompareWidescreenView },
        { "SlicerLayoutTriple3DEndoscopyView", vtkMRMLLayoutNode::SlicerLayoutTriple3DEndoscopyView },
        { "SlicerLayoutThreeOverThreeView", vtkMRMLLayoutNode::SlicerLayoutThreeOverThreeView },
        { "SlicerLayoutFourOverFourView", vtkMRMLLayoutNode::SlicerLayoutFourOverFourView },
        { "SlicerLayoutCompareGridView", vtkMRMLLayoutNode::SlicerLayoutCompareGridView },
        { "SlicerLayoutTwoOverTwoView", vtkMRMLLayoutNode::SlicerLayoutTwoOverTwoView },
        { "SlicerLayoutSideBySideView", vtkMRMLLayoutNode::SlicerLayoutSideBySideView },
        { "SlicerLayoutFourByThreeSliceView", vtkMRMLLayoutNode::SlicerLayoutFourByThreeSliceView },
        { "SlicerLayoutFourByTwoSliceView", vtkMRMLLayoutNode::SlicerLayoutFourByTwoSliceView },
        { "SlicerLayoutFiveByTwoSliceView", vtkMRMLLayoutNode::SlicerLayoutFiveByTwoSliceView },
        { "SlicerLayoutThreeByThreeSliceView", vtkMRMLLayoutNode::SlicerLayoutThreeByThreeSliceView },
        { "SlicerLayoutFourUpTableView", vtkMRMLLayoutNode::SlicerLayoutFourUpTableView },
        { "SlicerLayout3DTableView", vtkMRMLLayoutNode::SlicerLayout3DTableView },
        { "SlicerLayoutConventionalPlotView", vtkMRMLLayoutNode::SlicerLayoutConventionalPlotView },
        { "SlicerLayoutFourUpPlotView", vtkMRMLLayoutNode::SlicerLayoutFourUpPlotView },
        { "SlicerLayoutFourUpPlotTableView", vtkMRMLLayoutNode::SlicerLayoutFourUpPlotTableView },
        { "SlicerLayoutOneUpPlotView", vtkMRMLLayoutNode::SlicerLayoutOneUpPlotView },
        { "SlicerLayoutThreeOverThreePlotView", vtkMRMLLayoutNode::SlicerLayoutThreeOverThreePlotView },
        { "SlicerLayoutDicomBrowserView", vtkMRMLLayoutNode::SlicerLayoutDicomBrowserView },
        { "SlicerLayoutDualMonitorFourUpView", vtkMRMLLayoutNode::SlicerLayoutDualMonitorFourUpView },
        { "SlicerLayoutFinalView", vtkMRMLLayoutNode::SlicerLayoutFinalView },
        { "SlicerLayoutMaximizedView", vtkMRMLLayoutNode::SlicerLayoutMaximizedView },
        { "SlicerLayoutCustomView", vtkMRMLLayoutNode::SlicerLayoutCustomView },
        { "SlicerLayoutUserView", vtkMRMLLayoutNode::SlicerLayoutUserView },
      };

    o = PyvtkMRMLLayoutNode_SlicerLayout_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLLayoutNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLLayoutNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLLayoutNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

