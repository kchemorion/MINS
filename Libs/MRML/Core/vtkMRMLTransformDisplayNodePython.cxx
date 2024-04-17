// python wrapper for vtkMRMLTransformDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLTransformDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLTransformDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLTransformDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLDisplayNode_ClassNew
extern "C" { PyObject *PyvtkMRMLDisplayNode_ClassNew(); }
#define DECLARED_PyvtkMRMLDisplayNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLTransformDisplayNode_VisualizationModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLTransformDisplayNode.VisualizationModes", // tp_name
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
PyObject *PyvtkMRMLTransformDisplayNode_VisualizationModes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLTransformDisplayNode_VisualizationModes_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLTransformDisplayNode_GlyphTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLTransformDisplayNode.GlyphTypes", // tp_name
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
PyObject *PyvtkMRMLTransformDisplayNode_GlyphTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLTransformDisplayNode_GlyphTypes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLTransformDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLTransformDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLTransformDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLTransformDisplayNode *tempr = vtkMRMLTransformDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLTransformDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLTransformDisplayNode::NewInstance());

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
PyvtkMRMLTransformDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLTransformDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLTransformDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLTransformDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

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
      op->vtkMRMLTransformDisplayNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLTransformDisplayNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLTransformDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

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
      op->vtkMRMLTransformDisplayNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLTransformDisplayNode_GetRegionNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetRegionNode() :
      op->vtkMRMLTransformDisplayNode::GetRegionNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetAndObserveRegionNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveRegionNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveRegionNode(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetAndObserveRegionNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetGlyphPointsNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphPointsNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetGlyphPointsNode() :
      op->vtkMRMLTransformDisplayNode::GetGlyphPointsNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetAndObserveGlyphPointsNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveGlyphPointsNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveGlyphPointsNode(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetAndObserveGlyphPointsNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetVisualizationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisualizationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisualizationMode(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetVisualizationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetVisualizationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisualizationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVisualizationMode() :
      op->vtkMRMLTransformDisplayNode::GetVisualizationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_ConvertVisualizationModeToString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertVisualizationModeToString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLTransformDisplayNode::ConvertVisualizationModeToString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_ConvertVisualizationModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertVisualizationModeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLTransformDisplayNode::ConvertVisualizationModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetGlyphSpacingMm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphSpacingMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphSpacingMm(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetGlyphSpacingMm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetGlyphSpacingMm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphSpacingMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGlyphSpacingMm() :
      op->vtkMRMLTransformDisplayNode::GetGlyphSpacingMm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetGlyphScalePercent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphScalePercent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphScalePercent(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetGlyphScalePercent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetGlyphScalePercent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphScalePercent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGlyphScalePercent() :
      op->vtkMRMLTransformDisplayNode::GetGlyphScalePercent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetGlyphDisplayRangeMaxMm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphDisplayRangeMaxMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphDisplayRangeMaxMm(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetGlyphDisplayRangeMaxMm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetGlyphDisplayRangeMaxMm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphDisplayRangeMaxMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGlyphDisplayRangeMaxMm() :
      op->vtkMRMLTransformDisplayNode::GetGlyphDisplayRangeMaxMm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetGlyphDisplayRangeMinMm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphDisplayRangeMinMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphDisplayRangeMinMm(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetGlyphDisplayRangeMinMm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetGlyphDisplayRangeMinMm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphDisplayRangeMinMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGlyphDisplayRangeMinMm() :
      op->vtkMRMLTransformDisplayNode::GetGlyphDisplayRangeMinMm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphType(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetGlyphType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphType() :
      op->vtkMRMLTransformDisplayNode::GetGlyphType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_ConvertGlyphTypeToString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertGlyphTypeToString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLTransformDisplayNode::ConvertGlyphTypeToString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_ConvertGlyphTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertGlyphTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLTransformDisplayNode::ConvertGlyphTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetGlyphTipLengthPercent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTipLengthPercent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTipLengthPercent(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetGlyphTipLengthPercent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetGlyphTipLengthPercent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphTipLengthPercent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGlyphTipLengthPercent() :
      op->vtkMRMLTransformDisplayNode::GetGlyphTipLengthPercent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetGlyphDiameterMm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphDiameterMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphDiameterMm(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetGlyphDiameterMm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetGlyphDiameterMm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphDiameterMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGlyphDiameterMm() :
      op->vtkMRMLTransformDisplayNode::GetGlyphDiameterMm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetGlyphShaftDiameterPercent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphShaftDiameterPercent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphShaftDiameterPercent(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetGlyphShaftDiameterPercent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetGlyphShaftDiameterPercent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphShaftDiameterPercent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGlyphShaftDiameterPercent() :
      op->vtkMRMLTransformDisplayNode::GetGlyphShaftDiameterPercent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetGlyphResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphResolution(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetGlyphResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetGlyphResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphResolution() :
      op->vtkMRMLTransformDisplayNode::GetGlyphResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetGridScalePercent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalePercent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridScalePercent(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetGridScalePercent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetGridScalePercent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridScalePercent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGridScalePercent() :
      op->vtkMRMLTransformDisplayNode::GetGridScalePercent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetGridSpacingMm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSpacingMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridSpacingMm(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetGridSpacingMm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetGridSpacingMm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridSpacingMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGridSpacingMm() :
      op->vtkMRMLTransformDisplayNode::GetGridSpacingMm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetGridLineDiameterMm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridLineDiameterMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridLineDiameterMm(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetGridLineDiameterMm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetGridLineDiameterMm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridLineDiameterMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGridLineDiameterMm() :
      op->vtkMRMLTransformDisplayNode::GetGridLineDiameterMm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetGridResolutionMm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridResolutionMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridResolutionMm(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetGridResolutionMm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetGridResolutionMm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridResolutionMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGridResolutionMm() :
      op->vtkMRMLTransformDisplayNode::GetGridResolutionMm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetGridShowNonWarped(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridShowNonWarped");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridShowNonWarped(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetGridShowNonWarped(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetGridShowNonWarped(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridShowNonWarped");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGridShowNonWarped() :
      op->vtkMRMLTransformDisplayNode::GetGridShowNonWarped());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetNumberOfContourLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContourLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfContourLevels() :
      op->vtkMRMLTransformDisplayNode::GetNumberOfContourLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetContourLevelsMm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContourLevelsMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetContourLevelsMm(temp0, temp1);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetContourLevelsMm(temp0, temp1);
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
PyvtkMRMLTransformDisplayNode_GetContourLevelsMm_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourLevelsMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetContourLevelsMm() :
      op->vtkMRMLTransformDisplayNode::GetContourLevelsMm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLTransformDisplayNode_GetContourLevelsMm_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourLevelsMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  std::vector<double> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->GetContourLevelsMm(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::GetContourLevelsMm(temp0);
    }

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
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLTransformDisplayNode_GetContourLevelsMm(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLTransformDisplayNode_GetContourLevelsMm_s1(self, args);
    case 1:
      return PyvtkMRMLTransformDisplayNode_GetContourLevelsMm_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetContourLevelsMm");
  return nullptr;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetContourLevelsMmAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourLevelsMmAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetContourLevelsMmAsString() :
      op->vtkMRMLTransformDisplayNode::GetContourLevelsMmAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetContourLevelsMmFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContourLevelsMmFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContourLevelsMmFromString(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetContourLevelsMmFromString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_ConvertContourLevelsFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertContourLevelsFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::vector<double> tempr = vtkMRMLTransformDisplayNode::ConvertContourLevelsFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_ConvertContourLevelsToString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertContourLevelsToString");

  std::vector<double> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    std::string tempr = vtkMRMLTransformDisplayNode::ConvertContourLevelsToString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_IsContourLevelEqual(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsContourLevelEqual");

  std::vector<double> temp0(ap.GetArgSize(0));
  std::vector<double> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = vtkMRMLTransformDisplayNode::IsContourLevelEqual(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetContourResolutionMm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContourResolutionMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContourResolutionMm(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetContourResolutionMm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetContourResolutionMm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourResolutionMm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetContourResolutionMm() :
      op->vtkMRMLTransformDisplayNode::GetContourResolutionMm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetContourOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContourOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContourOpacity(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetContourOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetContourOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetContourOpacity() :
      op->vtkMRMLTransformDisplayNode::GetContourOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetEditorVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEditorVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEditorVisibility() :
      op->vtkMRMLTransformDisplayNode::GetEditorVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetEditorVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEditorVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEditorVisibility(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetEditorVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_EditorVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EditorVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EditorVisibilityOn();
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::EditorVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_EditorVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EditorVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EditorVisibilityOff();
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::EditorVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetEditorSliceIntersectionVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEditorSliceIntersectionVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEditorSliceIntersectionVisibility() :
      op->vtkMRMLTransformDisplayNode::GetEditorSliceIntersectionVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetEditorSliceIntersectionVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEditorSliceIntersectionVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEditorSliceIntersectionVisibility(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetEditorSliceIntersectionVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_EditorSliceIntersectionVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EditorSliceIntersectionVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EditorSliceIntersectionVisibilityOn();
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::EditorSliceIntersectionVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_EditorSliceIntersectionVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EditorSliceIntersectionVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EditorSliceIntersectionVisibilityOff();
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::EditorSliceIntersectionVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetEditorTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEditorTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEditorTranslationEnabled() :
      op->vtkMRMLTransformDisplayNode::GetEditorTranslationEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetEditorTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEditorTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEditorTranslationEnabled(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetEditorTranslationEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_EditorTranslationEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EditorTranslationEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EditorTranslationEnabledOn();
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::EditorTranslationEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_EditorTranslationEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EditorTranslationEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EditorTranslationEnabledOff();
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::EditorTranslationEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetEditorRotationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEditorRotationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEditorRotationEnabled() :
      op->vtkMRMLTransformDisplayNode::GetEditorRotationEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetEditorRotationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEditorRotationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEditorRotationEnabled(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetEditorRotationEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_EditorRotationEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EditorRotationEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EditorRotationEnabledOn();
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::EditorRotationEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_EditorRotationEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EditorRotationEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EditorRotationEnabledOff();
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::EditorRotationEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetEditorScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEditorScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEditorScalingEnabled() :
      op->vtkMRMLTransformDisplayNode::GetEditorScalingEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetEditorScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEditorScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEditorScalingEnabled(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetEditorScalingEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_EditorScalingEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EditorScalingEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EditorScalingEnabledOn();
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::EditorScalingEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_EditorScalingEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EditorScalingEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EditorScalingEnabledOff();
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::EditorScalingEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_UpdateEditorBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateEditorBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateEditorBounds();
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::UpdateEditorBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetDefaultColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultColors();
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetDefaultColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_GetColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColorTransferFunction *tempr = (ap.IsBound() ?
      op->GetColorMap() :
      op->vtkMRMLTransformDisplayNode::GetColorMap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformDisplayNode_SetColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformDisplayNode *op = static_cast<vtkMRMLTransformDisplayNode *>(vp);

  vtkColorTransferFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
  {
    if (ap.IsBound())
    {
      op->SetColorMap(temp0);
    }
    else
    {
      op->vtkMRMLTransformDisplayNode::SetColorMap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLTransformDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLTransformDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLTransformDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLTransformDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLTransformDisplayNode\nC++: static vtkMRMLTransformDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLTransformDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLTransformDisplayNode\nC++: vtkMRMLTransformDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLTransformDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLTransformDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLTransformDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"CopyContent", PyvtkMRMLTransformDisplayNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLTransformDisplayNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLTransformDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, UnstructuredGrid)\n"},
  {"ProcessMRMLEvents", PyvtkMRMLTransformDisplayNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"GetRegionNode", PyvtkMRMLTransformDisplayNode_GetRegionNode, METH_VARARGS,
   "GetRegionNode(self) -> vtkMRMLNode\nC++: vtkMRMLNode *GetRegionNode()\n\nDisplay options A node that defines the region of interest where\nthe transform should be displayed.\n"},
  {"SetAndObserveRegionNode", PyvtkMRMLTransformDisplayNode_SetAndObserveRegionNode, METH_VARARGS,
   "SetAndObserveRegionNode(self, node:vtkMRMLNode) -> None\nC++: void SetAndObserveRegionNode(vtkMRMLNode *node)\n\n"},
  {"GetGlyphPointsNode", PyvtkMRMLTransformDisplayNode_GetGlyphPointsNode, METH_VARARGS,
   "GetGlyphPointsNode(self) -> vtkMRMLNode\nC++: vtkMRMLNode *GetGlyphPointsNode()\n\nA node that defines glyph starting point positions. If not set\nthen glyphs positions are arranged evenly in the full region.\n"},
  {"SetAndObserveGlyphPointsNode", PyvtkMRMLTransformDisplayNode_SetAndObserveGlyphPointsNode, METH_VARARGS,
   "SetAndObserveGlyphPointsNode(self, node:vtkMRMLNode) -> None\nC++: void SetAndObserveGlyphPointsNode(vtkMRMLNode *node)\n\n"},
  {"SetVisualizationMode", PyvtkMRMLTransformDisplayNode_SetVisualizationMode, METH_VARARGS,
   "SetVisualizationMode(self, _arg:int) -> None\nC++: virtual void SetVisualizationMode(int _arg)\n\n"},
  {"GetVisualizationMode", PyvtkMRMLTransformDisplayNode_GetVisualizationMode, METH_VARARGS,
   "GetVisualizationMode(self) -> int\nC++: virtual int GetVisualizationMode()\n\n"},
  {"ConvertVisualizationModeToString", PyvtkMRMLTransformDisplayNode_ConvertVisualizationModeToString, METH_VARARGS,
   "ConvertVisualizationModeToString(modeIndex:int) -> str\nC++: static const char *ConvertVisualizationModeToString(\n    int modeIndex)\n\nConvert visualization mode index to a string for serialization.\nReturns an empty string if the index is unknown.\n"},
  {"ConvertVisualizationModeFromString", PyvtkMRMLTransformDisplayNode_ConvertVisualizationModeFromString, METH_VARARGS,
   "ConvertVisualizationModeFromString(modeString:str) -> int\nC++: static int ConvertVisualizationModeFromString(\n    const char *modeString)\n\nConvert visualization mode string to an index that can be set in\nVisualizationMode. Returns -1 if the string is unknown.\n"},
  {"SetGlyphSpacingMm", PyvtkMRMLTransformDisplayNode_SetGlyphSpacingMm, METH_VARARGS,
   "SetGlyphSpacingMm(self, _arg:float) -> None\nC++: virtual void SetGlyphSpacingMm(double _arg)\n\n"},
  {"GetGlyphSpacingMm", PyvtkMRMLTransformDisplayNode_GetGlyphSpacingMm, METH_VARARGS,
   "GetGlyphSpacingMm(self) -> float\nC++: virtual double GetGlyphSpacingMm()\n\n"},
  {"SetGlyphScalePercent", PyvtkMRMLTransformDisplayNode_SetGlyphScalePercent, METH_VARARGS,
   "SetGlyphScalePercent(self, _arg:float) -> None\nC++: virtual void SetGlyphScalePercent(double _arg)\n\n"},
  {"GetGlyphScalePercent", PyvtkMRMLTransformDisplayNode_GetGlyphScalePercent, METH_VARARGS,
   "GetGlyphScalePercent(self) -> float\nC++: virtual double GetGlyphScalePercent()\n\n"},
  {"SetGlyphDisplayRangeMaxMm", PyvtkMRMLTransformDisplayNode_SetGlyphDisplayRangeMaxMm, METH_VARARGS,
   "SetGlyphDisplayRangeMaxMm(self, _arg:float) -> None\nC++: virtual void SetGlyphDisplayRangeMaxMm(double _arg)\n\n"},
  {"GetGlyphDisplayRangeMaxMm", PyvtkMRMLTransformDisplayNode_GetGlyphDisplayRangeMaxMm, METH_VARARGS,
   "GetGlyphDisplayRangeMaxMm(self) -> float\nC++: virtual double GetGlyphDisplayRangeMaxMm()\n\n"},
  {"SetGlyphDisplayRangeMinMm", PyvtkMRMLTransformDisplayNode_SetGlyphDisplayRangeMinMm, METH_VARARGS,
   "SetGlyphDisplayRangeMinMm(self, _arg:float) -> None\nC++: virtual void SetGlyphDisplayRangeMinMm(double _arg)\n\n"},
  {"GetGlyphDisplayRangeMinMm", PyvtkMRMLTransformDisplayNode_GetGlyphDisplayRangeMinMm, METH_VARARGS,
   "GetGlyphDisplayRangeMinMm(self) -> float\nC++: virtual double GetGlyphDisplayRangeMinMm()\n\n"},
  {"SetGlyphType", PyvtkMRMLTransformDisplayNode_SetGlyphType, METH_VARARGS,
   "SetGlyphType(self, _arg:int) -> None\nC++: virtual void SetGlyphType(int _arg)\n\n"},
  {"GetGlyphType", PyvtkMRMLTransformDisplayNode_GetGlyphType, METH_VARARGS,
   "GetGlyphType(self) -> int\nC++: virtual int GetGlyphType()\n\n"},
  {"ConvertGlyphTypeToString", PyvtkMRMLTransformDisplayNode_ConvertGlyphTypeToString, METH_VARARGS,
   "ConvertGlyphTypeToString(typeIndex:int) -> str\nC++: static const char *ConvertGlyphTypeToString(int typeIndex)\n\nConvert glyph type index to a string for serialization. Returns\nan empty string if the index is unknown.\n"},
  {"ConvertGlyphTypeFromString", PyvtkMRMLTransformDisplayNode_ConvertGlyphTypeFromString, METH_VARARGS,
   "ConvertGlyphTypeFromString(typeString:str) -> int\nC++: static int ConvertGlyphTypeFromString(const char *typeString)\n\nConvert glyph type string to an index that can be set in\nGlyphType. Returns -1 if the string is unknown.\n"},
  {"SetGlyphTipLengthPercent", PyvtkMRMLTransformDisplayNode_SetGlyphTipLengthPercent, METH_VARARGS,
   "SetGlyphTipLengthPercent(self, _arg:float) -> None\nC++: virtual void SetGlyphTipLengthPercent(double _arg)\n\n"},
  {"GetGlyphTipLengthPercent", PyvtkMRMLTransformDisplayNode_GetGlyphTipLengthPercent, METH_VARARGS,
   "GetGlyphTipLengthPercent(self) -> float\nC++: virtual double GetGlyphTipLengthPercent()\n\n"},
  {"SetGlyphDiameterMm", PyvtkMRMLTransformDisplayNode_SetGlyphDiameterMm, METH_VARARGS,
   "SetGlyphDiameterMm(self, _arg:float) -> None\nC++: virtual void SetGlyphDiameterMm(double _arg)\n\n"},
  {"GetGlyphDiameterMm", PyvtkMRMLTransformDisplayNode_GetGlyphDiameterMm, METH_VARARGS,
   "GetGlyphDiameterMm(self) -> float\nC++: virtual double GetGlyphDiameterMm()\n\n"},
  {"SetGlyphShaftDiameterPercent", PyvtkMRMLTransformDisplayNode_SetGlyphShaftDiameterPercent, METH_VARARGS,
   "SetGlyphShaftDiameterPercent(self, _arg:float) -> None\nC++: virtual void SetGlyphShaftDiameterPercent(double _arg)\n\n"},
  {"GetGlyphShaftDiameterPercent", PyvtkMRMLTransformDisplayNode_GetGlyphShaftDiameterPercent, METH_VARARGS,
   "GetGlyphShaftDiameterPercent(self) -> float\nC++: virtual double GetGlyphShaftDiameterPercent()\n\n"},
  {"SetGlyphResolution", PyvtkMRMLTransformDisplayNode_SetGlyphResolution, METH_VARARGS,
   "SetGlyphResolution(self, _arg:int) -> None\nC++: virtual void SetGlyphResolution(int _arg)\n\n"},
  {"GetGlyphResolution", PyvtkMRMLTransformDisplayNode_GetGlyphResolution, METH_VARARGS,
   "GetGlyphResolution(self) -> int\nC++: virtual int GetGlyphResolution()\n\n"},
  {"SetGridScalePercent", PyvtkMRMLTransformDisplayNode_SetGridScalePercent, METH_VARARGS,
   "SetGridScalePercent(self, _arg:float) -> None\nC++: virtual void SetGridScalePercent(double _arg)\n\n"},
  {"GetGridScalePercent", PyvtkMRMLTransformDisplayNode_GetGridScalePercent, METH_VARARGS,
   "GetGridScalePercent(self) -> float\nC++: virtual double GetGridScalePercent()\n\n"},
  {"SetGridSpacingMm", PyvtkMRMLTransformDisplayNode_SetGridSpacingMm, METH_VARARGS,
   "SetGridSpacingMm(self, _arg:float) -> None\nC++: virtual void SetGridSpacingMm(double _arg)\n\n"},
  {"GetGridSpacingMm", PyvtkMRMLTransformDisplayNode_GetGridSpacingMm, METH_VARARGS,
   "GetGridSpacingMm(self) -> float\nC++: virtual double GetGridSpacingMm()\n\n"},
  {"SetGridLineDiameterMm", PyvtkMRMLTransformDisplayNode_SetGridLineDiameterMm, METH_VARARGS,
   "SetGridLineDiameterMm(self, _arg:float) -> None\nC++: virtual void SetGridLineDiameterMm(double _arg)\n\n"},
  {"GetGridLineDiameterMm", PyvtkMRMLTransformDisplayNode_GetGridLineDiameterMm, METH_VARARGS,
   "GetGridLineDiameterMm(self) -> float\nC++: virtual double GetGridLineDiameterMm()\n\n"},
  {"SetGridResolutionMm", PyvtkMRMLTransformDisplayNode_SetGridResolutionMm, METH_VARARGS,
   "SetGridResolutionMm(self, _arg:float) -> None\nC++: virtual void SetGridResolutionMm(double _arg)\n\n"},
  {"GetGridResolutionMm", PyvtkMRMLTransformDisplayNode_GetGridResolutionMm, METH_VARARGS,
   "GetGridResolutionMm(self) -> float\nC++: virtual double GetGridResolutionMm()\n\n"},
  {"SetGridShowNonWarped", PyvtkMRMLTransformDisplayNode_SetGridShowNonWarped, METH_VARARGS,
   "SetGridShowNonWarped(self, _arg:bool) -> None\nC++: virtual void SetGridShowNonWarped(bool _arg)\n\n"},
  {"GetGridShowNonWarped", PyvtkMRMLTransformDisplayNode_GetGridShowNonWarped, METH_VARARGS,
   "GetGridShowNonWarped(self) -> bool\nC++: virtual bool GetGridShowNonWarped()\n\n"},
  {"GetNumberOfContourLevels", PyvtkMRMLTransformDisplayNode_GetNumberOfContourLevels, METH_VARARGS,
   "GetNumberOfContourLevels(self) -> int\nC++: unsigned int GetNumberOfContourLevels()\n\n"},
  {"SetContourLevelsMm", PyvtkMRMLTransformDisplayNode_SetContourLevelsMm, METH_VARARGS,
   "SetContourLevelsMm(self, __a:[float, ...], size:int) -> None\nC++: void SetContourLevelsMm(double *, int size)\n\n"},
  {"GetContourLevelsMm", PyvtkMRMLTransformDisplayNode_GetContourLevelsMm, METH_VARARGS,
   "GetContourLevelsMm(self) -> Pointer\nC++: double *GetContourLevelsMm()\nGetContourLevelsMm(self, levels:[float, ...]) -> None\nC++: void GetContourLevelsMm(std::vector<double> &levels)\n\n"},
  {"GetContourLevelsMmAsString", PyvtkMRMLTransformDisplayNode_GetContourLevelsMmAsString, METH_VARARGS,
   "GetContourLevelsMmAsString(self) -> str\nC++: std::string GetContourLevelsMmAsString()\n\n"},
  {"SetContourLevelsMmFromString", PyvtkMRMLTransformDisplayNode_SetContourLevelsMmFromString, METH_VARARGS,
   "SetContourLevelsMmFromString(self, str:str) -> None\nC++: void SetContourLevelsMmFromString(const char *str)\n\n"},
  {"ConvertContourLevelsFromString", PyvtkMRMLTransformDisplayNode_ConvertContourLevelsFromString, METH_VARARGS,
   "ConvertContourLevelsFromString(str:str) -> (float, ...)\nC++: static std::vector<double> ConvertContourLevelsFromString(\n    const char *str)\n\n"},
  {"ConvertContourLevelsToString", PyvtkMRMLTransformDisplayNode_ConvertContourLevelsToString, METH_VARARGS,
   "ConvertContourLevelsToString(levels:(float, ...)) -> str\nC++: static std::string ConvertContourLevelsToString(\n    const std::vector<double> &levels)\n\n"},
  {"IsContourLevelEqual", PyvtkMRMLTransformDisplayNode_IsContourLevelEqual, METH_VARARGS,
   "IsContourLevelEqual(levels1:(float, ...), levels2:(float, ...))\n    -> bool\nC++: static bool IsContourLevelEqual(\n    const std::vector<double> &levels1,\n    const std::vector<double> &levels2)\n\n"},
  {"SetContourResolutionMm", PyvtkMRMLTransformDisplayNode_SetContourResolutionMm, METH_VARARGS,
   "SetContourResolutionMm(self, _arg:float) -> None\nC++: virtual void SetContourResolutionMm(double _arg)\n\n"},
  {"GetContourResolutionMm", PyvtkMRMLTransformDisplayNode_GetContourResolutionMm, METH_VARARGS,
   "GetContourResolutionMm(self) -> float\nC++: virtual double GetContourResolutionMm()\n\n"},
  {"SetContourOpacity", PyvtkMRMLTransformDisplayNode_SetContourOpacity, METH_VARARGS,
   "SetContourOpacity(self, _arg:float) -> None\nC++: virtual void SetContourOpacity(double _arg)\n\n"},
  {"GetContourOpacity", PyvtkMRMLTransformDisplayNode_GetContourOpacity, METH_VARARGS,
   "GetContourOpacity(self) -> float\nC++: virtual double GetContourOpacity()\n\n"},
  {"GetEditorVisibility", PyvtkMRMLTransformDisplayNode_GetEditorVisibility, METH_VARARGS,
   "GetEditorVisibility(self) -> bool\nC++: virtual bool GetEditorVisibility()\n\n"},
  {"SetEditorVisibility", PyvtkMRMLTransformDisplayNode_SetEditorVisibility, METH_VARARGS,
   "SetEditorVisibility(self, _arg:bool) -> None\nC++: virtual void SetEditorVisibility(bool _arg)\n\n"},
  {"EditorVisibilityOn", PyvtkMRMLTransformDisplayNode_EditorVisibilityOn, METH_VARARGS,
   "EditorVisibilityOn(self) -> None\nC++: virtual void EditorVisibilityOn()\n\n"},
  {"EditorVisibilityOff", PyvtkMRMLTransformDisplayNode_EditorVisibilityOff, METH_VARARGS,
   "EditorVisibilityOff(self) -> None\nC++: virtual void EditorVisibilityOff()\n\n"},
  {"GetEditorSliceIntersectionVisibility", PyvtkMRMLTransformDisplayNode_GetEditorSliceIntersectionVisibility, METH_VARARGS,
   "GetEditorSliceIntersectionVisibility(self) -> bool\nC++: virtual bool GetEditorSliceIntersectionVisibility()\n\n"},
  {"SetEditorSliceIntersectionVisibility", PyvtkMRMLTransformDisplayNode_SetEditorSliceIntersectionVisibility, METH_VARARGS,
   "SetEditorSliceIntersectionVisibility(self, _arg:bool) -> None\nC++: virtual void SetEditorSliceIntersectionVisibility(bool _arg)\n\n"},
  {"EditorSliceIntersectionVisibilityOn", PyvtkMRMLTransformDisplayNode_EditorSliceIntersectionVisibilityOn, METH_VARARGS,
   "EditorSliceIntersectionVisibilityOn(self) -> None\nC++: virtual void EditorSliceIntersectionVisibilityOn()\n\n"},
  {"EditorSliceIntersectionVisibilityOff", PyvtkMRMLTransformDisplayNode_EditorSliceIntersectionVisibilityOff, METH_VARARGS,
   "EditorSliceIntersectionVisibilityOff(self) -> None\nC++: virtual void EditorSliceIntersectionVisibilityOff()\n\n"},
  {"GetEditorTranslationEnabled", PyvtkMRMLTransformDisplayNode_GetEditorTranslationEnabled, METH_VARARGS,
   "GetEditorTranslationEnabled(self) -> bool\nC++: virtual bool GetEditorTranslationEnabled()\n\n"},
  {"SetEditorTranslationEnabled", PyvtkMRMLTransformDisplayNode_SetEditorTranslationEnabled, METH_VARARGS,
   "SetEditorTranslationEnabled(self, _arg:bool) -> None\nC++: virtual void SetEditorTranslationEnabled(bool _arg)\n\n"},
  {"EditorTranslationEnabledOn", PyvtkMRMLTransformDisplayNode_EditorTranslationEnabledOn, METH_VARARGS,
   "EditorTranslationEnabledOn(self) -> None\nC++: virtual void EditorTranslationEnabledOn()\n\n"},
  {"EditorTranslationEnabledOff", PyvtkMRMLTransformDisplayNode_EditorTranslationEnabledOff, METH_VARARGS,
   "EditorTranslationEnabledOff(self) -> None\nC++: virtual void EditorTranslationEnabledOff()\n\n"},
  {"GetEditorRotationEnabled", PyvtkMRMLTransformDisplayNode_GetEditorRotationEnabled, METH_VARARGS,
   "GetEditorRotationEnabled(self) -> bool\nC++: virtual bool GetEditorRotationEnabled()\n\n"},
  {"SetEditorRotationEnabled", PyvtkMRMLTransformDisplayNode_SetEditorRotationEnabled, METH_VARARGS,
   "SetEditorRotationEnabled(self, _arg:bool) -> None\nC++: virtual void SetEditorRotationEnabled(bool _arg)\n\n"},
  {"EditorRotationEnabledOn", PyvtkMRMLTransformDisplayNode_EditorRotationEnabledOn, METH_VARARGS,
   "EditorRotationEnabledOn(self) -> None\nC++: virtual void EditorRotationEnabledOn()\n\n"},
  {"EditorRotationEnabledOff", PyvtkMRMLTransformDisplayNode_EditorRotationEnabledOff, METH_VARARGS,
   "EditorRotationEnabledOff(self) -> None\nC++: virtual void EditorRotationEnabledOff()\n\n"},
  {"GetEditorScalingEnabled", PyvtkMRMLTransformDisplayNode_GetEditorScalingEnabled, METH_VARARGS,
   "GetEditorScalingEnabled(self) -> bool\nC++: virtual bool GetEditorScalingEnabled()\n\n"},
  {"SetEditorScalingEnabled", PyvtkMRMLTransformDisplayNode_SetEditorScalingEnabled, METH_VARARGS,
   "SetEditorScalingEnabled(self, _arg:bool) -> None\nC++: virtual void SetEditorScalingEnabled(bool _arg)\n\n"},
  {"EditorScalingEnabledOn", PyvtkMRMLTransformDisplayNode_EditorScalingEnabledOn, METH_VARARGS,
   "EditorScalingEnabledOn(self) -> None\nC++: virtual void EditorScalingEnabledOn()\n\n"},
  {"EditorScalingEnabledOff", PyvtkMRMLTransformDisplayNode_EditorScalingEnabledOff, METH_VARARGS,
   "EditorScalingEnabledOff(self) -> None\nC++: virtual void EditorScalingEnabledOff()\n\n"},
  {"UpdateEditorBounds", PyvtkMRMLTransformDisplayNode_UpdateEditorBounds, METH_VARARGS,
   "UpdateEditorBounds(self) -> None\nC++: void UpdateEditorBounds()\n\nAsk the editor to recompute its bounds by invoking the\nTransformUpdateEditorBoundsEvent event.\n"},
  {"SetDefaultColors", PyvtkMRMLTransformDisplayNode_SetDefaultColors, METH_VARARGS,
   "SetDefaultColors(self) -> None\nC++: void SetDefaultColors()\n\nSet the default color table Create and a procedural color node\nwith default colors and use it for visualization.\n"},
  {"GetColorMap", PyvtkMRMLTransformDisplayNode_GetColorMap, METH_VARARGS,
   "GetColorMap(self) -> vtkColorTransferFunction\nC++: vtkColorTransferFunction *GetColorMap()\n\n"},
  {"SetColorMap", PyvtkMRMLTransformDisplayNode_SetColorMap, METH_VARARGS,
   "SetColorMap(self, newColorMap:vtkColorTransferFunction) -> None\nC++: void SetColorMap(vtkColorTransferFunction *newColorMap)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLTransformDisplayNode_Doc =
  "vtkMRMLTransformDisplayNode - MRML node to represent display\nproperties for transforms visualization in the slice and 3D viewers.\n\n"
  "Superclass: vtkMRMLDisplayNode\n\n"
  "vtkMRMLTransformDisplayNode nodes store display properties of\n"
  "transforms.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLTransformDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLTransformDisplayNode", // tp_name
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
  PyvtkMRMLTransformDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLTransformDisplayNode_StaticNew()
{
  return vtkMRMLTransformDisplayNode::New();
}

PyObject *PyvtkMRMLTransformDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLTransformDisplayNode_Type, PyvtkMRMLTransformDisplayNode_Methods,
    "vtkMRMLTransformDisplayNode",
 &PyvtkMRMLTransformDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLDisplayNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLTransformDisplayNode_VisualizationModes_Type);
  PyVTKEnum_Add(&PyvtkMRMLTransformDisplayNode_VisualizationModes_Type, "vtkMRMLTransformDisplayNode.VisualizationModes");

  o = (PyObject *)&PyvtkMRMLTransformDisplayNode_VisualizationModes_Type;
  if (PyDict_SetItemString(d, "VisualizationModes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLTransformDisplayNode_GlyphTypes_Type);
  PyVTKEnum_Add(&PyvtkMRMLTransformDisplayNode_GlyphTypes_Type, "vtkMRMLTransformDisplayNode.GlyphTypes");

  o = (PyObject *)&PyvtkMRMLTransformDisplayNode_GlyphTypes_Type;
  if (PyDict_SetItemString(d, "GlyphTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkMRMLTransformDisplayNode::VisualizationModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VIS_MODE_GLYPH", vtkMRMLTransformDisplayNode::VIS_MODE_GLYPH },
        { "VIS_MODE_GRID", vtkMRMLTransformDisplayNode::VIS_MODE_GRID },
        { "VIS_MODE_CONTOUR", vtkMRMLTransformDisplayNode::VIS_MODE_CONTOUR },
        { "VIS_MODE_LAST", vtkMRMLTransformDisplayNode::VIS_MODE_LAST },
      };

    o = PyvtkMRMLTransformDisplayNode_VisualizationModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkMRMLTransformDisplayNode::GlyphTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "GLYPH_TYPE_ARROW", vtkMRMLTransformDisplayNode::GLYPH_TYPE_ARROW },
        { "GLYPH_TYPE_CONE", vtkMRMLTransformDisplayNode::GLYPH_TYPE_CONE },
        { "GLYPH_TYPE_SPHERE", vtkMRMLTransformDisplayNode::GLYPH_TYPE_SPHERE },
        { "GLYPH_TYPE_LAST", vtkMRMLTransformDisplayNode::GLYPH_TYPE_LAST },
      };

    o = PyvtkMRMLTransformDisplayNode_GlyphTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyLong_FromLong(vtkMRMLTransformDisplayNode::TransformUpdateEditorBoundsEvent);
  if (o)
  {
    PyDict_SetItemString(d, "TransformUpdateEditorBoundsEvent", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLTransformDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLTransformDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLTransformDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

