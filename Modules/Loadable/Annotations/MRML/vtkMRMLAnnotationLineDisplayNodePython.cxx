// python wrapper for vtkMRMLAnnotationLineDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLAnnotationLineDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLAnnotationLineDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLAnnotationLineDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAnnotationDisplayNode_ClassNew
extern "C" { PyObject *PyvtkMRMLAnnotationDisplayNode_ClassNew(); }
#define DECLARED_PyvtkMRMLAnnotationDisplayNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAnnotationLineDisplayNode_ProjectionFlag_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerAnnotationsModuleMRMLPython.vtkMRMLAnnotationLineDisplayNode.ProjectionFlag", // tp_name
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
PyObject *PyvtkMRMLAnnotationLineDisplayNode_ProjectionFlag_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLAnnotationLineDisplayNode_ProjectionFlag_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAnnotationLineDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLAnnotationLineDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLAnnotationLineDisplayNode *tempr = vtkMRMLAnnotationLineDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAnnotationLineDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLAnnotationLineDisplayNode::NewInstance());

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
PyvtkMRMLAnnotationLineDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLAnnotationLineDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLAnnotationLineDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLAnnotationLineDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

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
      op->vtkMRMLAnnotationLineDisplayNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLAnnotationLineDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

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
      op->vtkMRMLAnnotationLineDisplayNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

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
      op->vtkMRMLAnnotationLineDisplayNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLAnnotationLineDisplayNode_SetLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineThickness(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::SetLineThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_GetLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineThickness() :
      op->vtkMRMLAnnotationLineDisplayNode::GetLineThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_SetLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelPosition(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::SetLabelPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_GetLabelPositionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPositionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelPositionMinValue() :
      op->vtkMRMLAnnotationLineDisplayNode::GetLabelPositionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_GetLabelPositionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPositionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelPositionMaxValue() :
      op->vtkMRMLAnnotationLineDisplayNode::GetLabelPositionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_GetLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelPosition() :
      op->vtkMRMLAnnotationLineDisplayNode::GetLabelPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOn();
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::LabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOff();
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::LabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelVisibility(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::SetLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelVisibility() :
      op->vtkMRMLAnnotationLineDisplayNode::GetLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_SetTickSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTickSpacing(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::SetTickSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_GetTickSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTickSpacing() :
      op->vtkMRMLAnnotationLineDisplayNode::GetTickSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_SetMaxTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxTicks(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::SetMaxTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_GetMaxTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxTicks() :
      op->vtkMRMLAnnotationLineDisplayNode::GetMaxTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_SliceProjectionDashedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionDashedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionDashedOn();
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::SliceProjectionDashedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_SliceProjectionDashedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionDashedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionDashedOff();
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::SliceProjectionDashedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_SliceProjectionColoredWhenParallelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionColoredWhenParallelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionColoredWhenParallelOn();
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::SliceProjectionColoredWhenParallelOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_SliceProjectionColoredWhenParallelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionColoredWhenParallelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionColoredWhenParallelOff();
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::SliceProjectionColoredWhenParallelOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_SliceProjectionThickerOnTopOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionThickerOnTopOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionThickerOnTopOn();
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::SliceProjectionThickerOnTopOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_SliceProjectionThickerOnTopOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionThickerOnTopOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionThickerOnTopOff();
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::SliceProjectionThickerOnTopOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_SliceProjectionUseRulerColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionUseRulerColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionUseRulerColorOn();
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::SliceProjectionUseRulerColorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_SliceProjectionUseRulerColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionUseRulerColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionUseRulerColorOff();
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::SliceProjectionUseRulerColorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_SetUnderLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnderLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnderLineThickness(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::SetUnderLineThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_GetUnderLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnderLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUnderLineThickness() :
      op->vtkMRMLAnnotationLineDisplayNode::GetUnderLineThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_SetOverLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOverLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOverLineThickness(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::SetOverLineThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_GetOverLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOverLineThickness() :
      op->vtkMRMLAnnotationLineDisplayNode::GetOverLineThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_CreateBackup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateBackup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateBackup();
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::CreateBackup();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationLineDisplayNode_RestoreBackup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreBackup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationLineDisplayNode *op = static_cast<vtkMRMLAnnotationLineDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestoreBackup();
    }
    else
    {
      op->vtkMRMLAnnotationLineDisplayNode::RestoreBackup();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLAnnotationLineDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLAnnotationLineDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLAnnotationLineDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLAnnotationLineDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLAnnotationLineDisplayNode\nC++: static vtkMRMLAnnotationLineDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLAnnotationLineDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLAnnotationLineDisplayNode\nC++: vtkMRMLAnnotationLineDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLAnnotationLineDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLAnnotationLineDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLAnnotationLineDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"Copy", PyvtkMRMLAnnotationLineDisplayNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLAnnotationLineDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Annotation)\n"},
  {"UpdateScene", PyvtkMRMLAnnotationLineDisplayNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data\n"},
  {"ProcessMRMLEvents", PyvtkMRMLAnnotationLineDisplayNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"SetLineThickness", PyvtkMRMLAnnotationLineDisplayNode_SetLineThickness, METH_VARARGS,
   "SetLineThickness(self, thickness:float) -> None\nC++: void SetLineThickness(double thickness)\n\nGet/Set for Symbol scale\n vtkSetMacro(GlyphScale,double);\n"},
  {"GetLineThickness", PyvtkMRMLAnnotationLineDisplayNode_GetLineThickness, METH_VARARGS,
   "GetLineThickness(self) -> float\nC++: virtual double GetLineThickness()\n\n"},
  {"SetLabelPosition", PyvtkMRMLAnnotationLineDisplayNode_SetLabelPosition, METH_VARARGS,
   "SetLabelPosition(self, _arg:float) -> None\nC++: virtual void SetLabelPosition(double _arg)\n\nGet/Set for LabelPosition\n"},
  {"GetLabelPositionMinValue", PyvtkMRMLAnnotationLineDisplayNode_GetLabelPositionMinValue, METH_VARARGS,
   "GetLabelPositionMinValue(self) -> float\nC++: virtual double GetLabelPositionMinValue()\n\n"},
  {"GetLabelPositionMaxValue", PyvtkMRMLAnnotationLineDisplayNode_GetLabelPositionMaxValue, METH_VARARGS,
   "GetLabelPositionMaxValue(self) -> float\nC++: virtual double GetLabelPositionMaxValue()\n\n"},
  {"GetLabelPosition", PyvtkMRMLAnnotationLineDisplayNode_GetLabelPosition, METH_VARARGS,
   "GetLabelPosition(self) -> float\nC++: virtual double GetLabelPosition()\n\n"},
  {"LabelVisibilityOn", PyvtkMRMLAnnotationLineDisplayNode_LabelVisibilityOn, METH_VARARGS,
   "LabelVisibilityOn(self) -> None\nC++: virtual void LabelVisibilityOn()\n\nGet/Set for LabelVisibility\n"},
  {"LabelVisibilityOff", PyvtkMRMLAnnotationLineDisplayNode_LabelVisibilityOff, METH_VARARGS,
   "LabelVisibilityOff(self) -> None\nC++: virtual void LabelVisibilityOff()\n\n"},
  {"SetLabelVisibility", PyvtkMRMLAnnotationLineDisplayNode_SetLabelVisibility, METH_VARARGS,
   "SetLabelVisibility(self, _arg:int) -> None\nC++: virtual void SetLabelVisibility(int _arg)\n\n"},
  {"GetLabelVisibility", PyvtkMRMLAnnotationLineDisplayNode_GetLabelVisibility, METH_VARARGS,
   "GetLabelVisibility(self) -> int\nC++: virtual int GetLabelVisibility()\n\n"},
  {"SetTickSpacing", PyvtkMRMLAnnotationLineDisplayNode_SetTickSpacing, METH_VARARGS,
   "SetTickSpacing(self, _arg:float) -> None\nC++: virtual void SetTickSpacing(double _arg)\n\nGet/Set for TickSpacing\n"},
  {"GetTickSpacing", PyvtkMRMLAnnotationLineDisplayNode_GetTickSpacing, METH_VARARGS,
   "GetTickSpacing(self) -> float\nC++: virtual double GetTickSpacing()\n\n"},
  {"SetMaxTicks", PyvtkMRMLAnnotationLineDisplayNode_SetMaxTicks, METH_VARARGS,
   "SetMaxTicks(self, _arg:int) -> None\nC++: virtual void SetMaxTicks(int _arg)\n\nGet/Set for maximum number of ticks\n"},
  {"GetMaxTicks", PyvtkMRMLAnnotationLineDisplayNode_GetMaxTicks, METH_VARARGS,
   "GetMaxTicks(self) -> int\nC++: virtual int GetMaxTicks()\n\n"},
  {"SliceProjectionDashedOn", PyvtkMRMLAnnotationLineDisplayNode_SliceProjectionDashedOn, METH_VARARGS,
   "SliceProjectionDashedOn(self) -> None\nC++: void SliceProjectionDashedOn()\n\nSet SliceProjection to Dashed\n"},
  {"SliceProjectionDashedOff", PyvtkMRMLAnnotationLineDisplayNode_SliceProjectionDashedOff, METH_VARARGS,
   "SliceProjectionDashedOff(self) -> None\nC++: void SliceProjectionDashedOff()\n\nSet SliceProjection to Plain\n"},
  {"SliceProjectionColoredWhenParallelOn", PyvtkMRMLAnnotationLineDisplayNode_SliceProjectionColoredWhenParallelOn, METH_VARARGS,
   "SliceProjectionColoredWhenParallelOn(self) -> None\nC++: void SliceProjectionColoredWhenParallelOn()\n\nSet line colored when parallel to slice plane\n"},
  {"SliceProjectionColoredWhenParallelOff", PyvtkMRMLAnnotationLineDisplayNode_SliceProjectionColoredWhenParallelOff, METH_VARARGS,
   "SliceProjectionColoredWhenParallelOff(self) -> None\nC++: void SliceProjectionColoredWhenParallelOff()\n\nSet line color unchanged when parallel to slice plane\n"},
  {"SliceProjectionThickerOnTopOn", PyvtkMRMLAnnotationLineDisplayNode_SliceProjectionThickerOnTopOn, METH_VARARGS,
   "SliceProjectionThickerOnTopOn(self) -> None\nC++: void SliceProjectionThickerOnTopOn()\n\nSet line thicker when on top of the plane, thinner when under\n"},
  {"SliceProjectionThickerOnTopOff", PyvtkMRMLAnnotationLineDisplayNode_SliceProjectionThickerOnTopOff, METH_VARARGS,
   "SliceProjectionThickerOnTopOff(self) -> None\nC++: void SliceProjectionThickerOnTopOff()\n\nSet line thickness uniform\n"},
  {"SliceProjectionUseRulerColorOn", PyvtkMRMLAnnotationLineDisplayNode_SliceProjectionUseRulerColorOn, METH_VARARGS,
   "SliceProjectionUseRulerColorOn(self) -> None\nC++: void SliceProjectionUseRulerColorOn()\n\nSet projection color as ruler color\n\\sa SetProjectedColor\n"},
  {"SliceProjectionUseRulerColorOff", PyvtkMRMLAnnotationLineDisplayNode_SliceProjectionUseRulerColorOff, METH_VARARGS,
   "SliceProjectionUseRulerColorOff(self) -> None\nC++: void SliceProjectionUseRulerColorOff()\n\nManually set projection color\n\\sa SetProjectedColor\n"},
  {"SetUnderLineThickness", PyvtkMRMLAnnotationLineDisplayNode_SetUnderLineThickness, METH_VARARGS,
   "SetUnderLineThickness(self, _arg:float) -> None\nC++: virtual void SetUnderLineThickness(double _arg)\n\nGet/Set the thickness of the line under the plane Default: 1.0\n"},
  {"GetUnderLineThickness", PyvtkMRMLAnnotationLineDisplayNode_GetUnderLineThickness, METH_VARARGS,
   "GetUnderLineThickness(self) -> float\nC++: virtual double GetUnderLineThickness()\n\n"},
  {"SetOverLineThickness", PyvtkMRMLAnnotationLineDisplayNode_SetOverLineThickness, METH_VARARGS,
   "SetOverLineThickness(self, _arg:float) -> None\nC++: virtual void SetOverLineThickness(double _arg)\n\nGet/Set the thickness of the line over the plane Default: 3.0\n"},
  {"GetOverLineThickness", PyvtkMRMLAnnotationLineDisplayNode_GetOverLineThickness, METH_VARARGS,
   "GetOverLineThickness(self) -> float\nC++: virtual double GetOverLineThickness()\n\n"},
  {"CreateBackup", PyvtkMRMLAnnotationLineDisplayNode_CreateBackup, METH_VARARGS,
   "CreateBackup(self) -> None\nC++: void CreateBackup() override;\n\nCreate a backup of this node and attach it.\n"},
  {"RestoreBackup", PyvtkMRMLAnnotationLineDisplayNode_RestoreBackup, METH_VARARGS,
   "RestoreBackup(self) -> None\nC++: void RestoreBackup() override;\n\nRestore an attached backup of this node.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLAnnotationLineDisplayNode_Doc =
  "vtkMRMLAnnotationLineDisplayNode - MRML node to represent display\nproperties for tractography.\n\n"
  "Superclass: vtkMRMLAnnotationDisplayNode\n\n"
  "vtkMRMLAnnotationLineDisplayNode nodes store display properties of\n"
  "trajectories from tractography in diffusion MRI data, including color\n"
  "type (by bundle, by fiber, or by scalar invariants), display on/off\n"
  "for tensor glyphs and display of trajectory as a line or tube.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAnnotationLineDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerAnnotationsModuleMRMLPython.vtkMRMLAnnotationLineDisplayNode", // tp_name
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
  PyvtkMRMLAnnotationLineDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLAnnotationLineDisplayNode_StaticNew()
{
  return vtkMRMLAnnotationLineDisplayNode::New();
}

PyObject *PyvtkMRMLAnnotationLineDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLAnnotationLineDisplayNode_Type, PyvtkMRMLAnnotationLineDisplayNode_Methods,
    "vtkMRMLAnnotationLineDisplayNode",
 &PyvtkMRMLAnnotationLineDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAnnotationDisplayNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLAnnotationLineDisplayNode_ProjectionFlag_Type);
  PyVTKEnum_Add(&PyvtkMRMLAnnotationLineDisplayNode_ProjectionFlag_Type, "vtkMRMLAnnotationLineDisplayNode.ProjectionFlag");

  o = (PyObject *)&PyvtkMRMLAnnotationLineDisplayNode_ProjectionFlag_Type;
  if (PyDict_SetItemString(d, "ProjectionFlag", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkMRMLAnnotationLineDisplayNode::ProjectionFlag cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "ProjectionDashed", vtkMRMLAnnotationLineDisplayNode::ProjectionDashed },
        { "ProjectionColoredWhenParallel", vtkMRMLAnnotationLineDisplayNode::ProjectionColoredWhenParallel },
        { "ProjectionThickerOnTop", vtkMRMLAnnotationLineDisplayNode::ProjectionThickerOnTop },
        { "ProjectionUseRulerColor", vtkMRMLAnnotationLineDisplayNode::ProjectionUseRulerColor },
      };

    o = PyvtkMRMLAnnotationLineDisplayNode_ProjectionFlag_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLAnnotationLineDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLAnnotationLineDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLAnnotationLineDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

