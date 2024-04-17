// python wrapper for vtkMRMLCameraNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLCameraNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLCameraNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLCameraNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLTransformableNode_ClassNew
extern "C" { PyObject *PyvtkMRMLTransformableNode_ClassNew(); }
#define DECLARED_PyvtkMRMLTransformableNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLCameraNode_Direction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLCameraNode.Direction", // tp_name
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
PyObject *PyvtkMRMLCameraNode_Direction_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLCameraNode_Direction_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLCameraNode_RASAxis_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLCameraNode.RASAxis", // tp_name
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
PyObject *PyvtkMRMLCameraNode_RASAxis_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLCameraNode_RASAxis_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLCameraNode_ScreenAxis_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLCameraNode.ScreenAxis", // tp_name
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
PyObject *PyvtkMRMLCameraNode_ScreenAxis_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLCameraNode_ScreenAxis_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLCameraNode_InteractionFlagType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLCameraNode.InteractionFlagType", // tp_name
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
PyObject *PyvtkMRMLCameraNode_InteractionFlagType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLCameraNode_InteractionFlagType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLCameraNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLCameraNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLCameraNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLCameraNode *tempr = vtkMRMLCameraNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLCameraNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLCameraNode::NewInstance());

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
PyvtkMRMLCameraNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLCameraNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLCameraNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLCameraNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

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
      op->vtkMRMLCameraNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

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
      op->vtkMRMLCameraNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLCameraNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLCameraNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_GetActiveTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetActiveTag() :
      op->vtkMRMLCameraNode::GetActiveTag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_SetActiveTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveTag(temp0);
    }
    else
    {
      op->vtkMRMLCameraNode::SetActiveTag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_SetLayoutName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutName(temp0);
    }
    else
    {
      op->vtkMRMLCameraNode::SetLayoutName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_GetLayoutName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLayoutName() :
      op->vtkMRMLCameraNode::GetLayoutName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkMRMLCameraNode::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_SetParallelProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParallelProjection(temp0);
    }
    else
    {
      op->vtkMRMLCameraNode::SetParallelProjection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_GetParallelProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetParallelProjection() :
      op->vtkMRMLCameraNode::GetParallelProjection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_SetParallelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParallelScale(temp0);
    }
    else
    {
      op->vtkMRMLCameraNode::SetParallelScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_GetParallelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetParallelScale() :
      op->vtkMRMLCameraNode::GetParallelScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_SetViewAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetViewAngle(temp0);
    }
    else
    {
      op->vtkMRMLCameraNode::SetViewAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_GetViewAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewAngle() :
      op->vtkMRMLCameraNode::GetViewAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

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
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkMRMLCameraNode::SetPosition(temp0);
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
PyvtkMRMLCameraNode_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLCameraNode::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLCameraNode_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLCameraNode_SetPosition_s1(self, args);
    case 3:
      return PyvtkMRMLCameraNode_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkMRMLCameraNode_GetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkMRMLCameraNode::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLCameraNode_GetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

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
      op->GetPosition(temp0);
    }
    else
    {
      op->vtkMRMLCameraNode::GetPosition(temp0);
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
PyvtkMRMLCameraNode_GetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLCameraNode_GetPosition_s1(self, args);
    case 1:
      return PyvtkMRMLCameraNode_GetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition");
  return nullptr;
}


static PyObject *
PyvtkMRMLCameraNode_SetFocalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

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
      op->SetFocalPoint(temp0);
    }
    else
    {
      op->vtkMRMLCameraNode::SetFocalPoint(temp0);
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
PyvtkMRMLCameraNode_SetFocalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

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
      op->SetFocalPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLCameraNode::SetFocalPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLCameraNode_SetFocalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLCameraNode_SetFocalPoint_s1(self, args);
    case 3:
      return PyvtkMRMLCameraNode_SetFocalPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFocalPoint");
  return nullptr;
}


static PyObject *
PyvtkMRMLCameraNode_GetFocalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetFocalPoint() :
      op->vtkMRMLCameraNode::GetFocalPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLCameraNode_GetFocalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

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
      op->GetFocalPoint(temp0);
    }
    else
    {
      op->vtkMRMLCameraNode::GetFocalPoint(temp0);
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
PyvtkMRMLCameraNode_GetFocalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLCameraNode_GetFocalPoint_s1(self, args);
    case 1:
      return PyvtkMRMLCameraNode_GetFocalPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetFocalPoint");
  return nullptr;
}


static PyObject *
PyvtkMRMLCameraNode_SetViewUp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

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
      op->SetViewUp(temp0);
    }
    else
    {
      op->vtkMRMLCameraNode::SetViewUp(temp0);
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
PyvtkMRMLCameraNode_SetViewUp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

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
      op->SetViewUp(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLCameraNode::SetViewUp(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLCameraNode_SetViewUp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLCameraNode_SetViewUp_s1(self, args);
    case 3:
      return PyvtkMRMLCameraNode_SetViewUp_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetViewUp");
  return nullptr;
}


static PyObject *
PyvtkMRMLCameraNode_GetViewUp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetViewUp() :
      op->vtkMRMLCameraNode::GetViewUp());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLCameraNode_GetViewUp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

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
      op->GetViewUp(temp0);
    }
    else
    {
      op->vtkMRMLCameraNode::GetViewUp(temp0);
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
PyvtkMRMLCameraNode_GetViewUp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLCameraNode_GetViewUp_s1(self, args);
    case 1:
      return PyvtkMRMLCameraNode_GetViewUp_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetViewUp");
  return nullptr;
}


static PyObject *
PyvtkMRMLCameraNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

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
      op->vtkMRMLCameraNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLCameraNode_GetAppliedTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppliedTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetAppliedTransform() :
      op->vtkMRMLCameraNode::GetAppliedTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_SetAppliedTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppliedTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetAppliedTransform(temp0);
    }
    else
    {
      op->vtkMRMLCameraNode::SetAppliedTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_ResetClippingRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetClippingRange();
    }
    else
    {
      op->vtkMRMLCameraNode::ResetClippingRange();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_RotateTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  typedef vtkMRMLCameraNode::Direction temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkMRMLCameraNode.Direction"))
  {
    if (ap.IsBound())
    {
      op->RotateTo(temp0);
    }
    else
    {
      op->vtkMRMLCameraNode::RotateTo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_RotateAround_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateAround");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  typedef vtkMRMLCameraNode::RASAxis temp0_type;
  temp0_type temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetEnumValue(temp0, "vtkMRMLCameraNode.RASAxis") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RotateAround(temp0, temp1);
    }
    else
    {
      op->vtkMRMLCameraNode::RotateAround(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLCameraNode_RotateAround_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateAround");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  typedef vtkMRMLCameraNode::RASAxis temp0_type;
  temp0_type temp0;
  double temp1 = 15.;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetEnumValue(temp0, "vtkMRMLCameraNode.RASAxis") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->RotateAround(temp0, temp1);
    }
    else
    {
      op->vtkMRMLCameraNode::RotateAround(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLCameraNode_RotateAround_Methods[] = {
  {"RotateAround", PyvtkMRMLCameraNode_RotateAround_s1, METH_VARARGS,
   "@Eq vtkMRMLCameraNode.RASAxis"},
  {"RotateAround", PyvtkMRMLCameraNode_RotateAround_s2, METH_VARARGS,
   "@E|d vtkMRMLCameraNode.RASAxis"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLCameraNode_RotateAround(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLCameraNode_RotateAround_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLCameraNode_RotateAround_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RotateAround");
  return nullptr;
}


static PyObject *
PyvtkMRMLCameraNode_TranslateAlong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslateAlong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  typedef vtkMRMLCameraNode::ScreenAxis temp0_type;
  temp0_type temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetEnumValue(temp0, "vtkMRMLCameraNode.ScreenAxis") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->TranslateAlong(temp0, temp1);
    }
    else
    {
      op->vtkMRMLCameraNode::TranslateAlong(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_Reset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  bool temp0 = false;
  bool temp1 = true;
  bool temp2 = true;
  vtkRenderer *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 4) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkRenderer")))
  {
    if (ap.IsBound())
    {
      op->Reset(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLCameraNode::Reset(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLCameraNode_Reset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

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
      op->vtkMRMLCameraNode::Reset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLCameraNode_Reset_Methods[] = {
  {"Reset", PyvtkMRMLCameraNode_Reset_s1, METH_VARARGS,
   "@q|qqV *vtkRenderer"},
  {"Reset", PyvtkMRMLCameraNode_Reset_s2, METH_VARARGS,
   "@V *vtkMRMLNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLCameraNode_Reset(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLCameraNode_Reset_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
    case 4:
      return PyvtkMRMLCameraNode_Reset_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Reset");
  return nullptr;
}


static PyObject *
PyvtkMRMLCameraNode_SetInteracting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteracting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteracting(temp0);
    }
    else
    {
      op->vtkMRMLCameraNode::SetInteracting(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_GetInteracting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteracting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteracting() :
      op->vtkMRMLCameraNode::GetInteracting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_InteractingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractingOn();
    }
    else
    {
      op->vtkMRMLCameraNode::InteractingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_InteractingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractingOff();
    }
    else
    {
      op->vtkMRMLCameraNode::InteractingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_SetInteractionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionFlags(temp0);
    }
    else
    {
      op->vtkMRMLCameraNode::SetInteractionFlags(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraNode_GetInteractionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraNode *op = static_cast<vtkMRMLCameraNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetInteractionFlags() :
      op->vtkMRMLCameraNode::GetInteractionFlags());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLCameraNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLCameraNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLCameraNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLCameraNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLCameraNode\nC++: static vtkMRMLCameraNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLCameraNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLCameraNode\nC++: vtkMRMLCameraNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLCameraNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLCameraNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLCameraNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"Copy", PyvtkMRMLCameraNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"CopyContent", PyvtkMRMLCameraNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLCameraNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLCameraNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetActiveTag", PyvtkMRMLCameraNode_GetActiveTag, METH_VARARGS,
   "GetActiveTag(self) -> str\nC++: const char *GetActiveTag()\n\nDeprecated. Use SetLayoutName instead. Set the camera active tag,\ni.e. the tag for which object (view) this camera is active.\n"},
  {"SetActiveTag", PyvtkMRMLCameraNode_SetActiveTag, METH_VARARGS,
   "SetActiveTag(self, __a:str) -> None\nC++: virtual void SetActiveTag(const char *)\n\n"},
  {"SetLayoutName", PyvtkMRMLCameraNode_SetLayoutName, METH_VARARGS,
   "SetLayoutName(self, layoutName:str) -> None\nC++: void SetLayoutName(const char *layoutName)\n\nName of the layout widget that this camera is used in. Must be\nunique between all the slice composite nodes because it is used\nas a singleton tag. Must be the same as the slice node. No name\n(i.e. \"\") by default. Typical names are numbers: \"1\", \"2\", ... to\nuniquely define the 3D view node.\n\\sa vtkMRMLViewNode::SetLayoutName\n"},
  {"GetLayoutName", PyvtkMRMLCameraNode_GetLayoutName, METH_VARARGS,
   "GetLayoutName(self) -> str\nC++: char *GetLayoutName()\n\n"},
  {"GetCamera", PyvtkMRMLCameraNode_GetCamera, METH_VARARGS,
   "GetCamera(self) -> vtkCamera\nC++: virtual vtkCamera *GetCamera()\n\nvtkCamera\n"},
  {"SetParallelProjection", PyvtkMRMLCameraNode_SetParallelProjection, METH_VARARGS,
   "SetParallelProjection(self, parallelProjection:int) -> None\nC++: void SetParallelProjection(int parallelProjection)\n\nSet camera ParallelProjection flag\n"},
  {"GetParallelProjection", PyvtkMRMLCameraNode_GetParallelProjection, METH_VARARGS,
   "GetParallelProjection(self) -> int\nC++: int GetParallelProjection()\n\nSet camera ParallelProjection flag\n"},
  {"SetParallelScale", PyvtkMRMLCameraNode_SetParallelScale, METH_VARARGS,
   "SetParallelScale(self, scale:float) -> None\nC++: void SetParallelScale(double scale)\n\nSet camera Parallel Scale\n"},
  {"GetParallelScale", PyvtkMRMLCameraNode_GetParallelScale, METH_VARARGS,
   "GetParallelScale(self) -> float\nC++: double GetParallelScale()\n\nSet camera Parallel Scale\n"},
  {"SetViewAngle", PyvtkMRMLCameraNode_SetViewAngle, METH_VARARGS,
   "SetViewAngle(self, viewAngle:float) -> None\nC++: void SetViewAngle(double viewAngle)\n\nSet the camera view angle\n\\sa GetViewAngle(), vtkCamera::SetViewAngle(),\n    SetParallelScale(),\nSetParallelProjection()\n"},
  {"GetViewAngle", PyvtkMRMLCameraNode_GetViewAngle, METH_VARARGS,
   "GetViewAngle(self) -> float\nC++: double GetViewAngle()\n\nGet the camera view angle\n\\sa SetViewAngle(), vtkCamera::GetViewAngle(),\n    GetParallelScale(),\nGetParallelProjection()\n"},
  {"SetPosition", PyvtkMRMLCameraNode_SetPosition, METH_VARARGS,
   "SetPosition(self, position:[float, float, float]) -> None\nC++: void SetPosition(double position[3])\nSetPosition(self, x:float, y:float, z:float) -> None\nC++: void SetPosition(double x, double y, double z)\n\nSet the position of the camera in world coordinates. It is\nrecommended to call ResetClippingRange() after calling this to\nensure that all objects that should be visible are rendered.\n\\sa GetPosition(), SetFocalPoint(), SetViewUp(),\n    ResetClippingRange()\n"},
  {"GetPosition", PyvtkMRMLCameraNode_GetPosition, METH_VARARGS,
   "GetPosition(self) -> (float, float, float)\nC++: double *GetPosition()\nGetPosition(self, position:[float, float, float]) -> None\nC++: void GetPosition(double position[3])\n\nGet the position of the camera in world coordinates.\n\\sa SetPosition(), GetFocalPoint(), GetViewUp()\n"},
  {"SetFocalPoint", PyvtkMRMLCameraNode_SetFocalPoint, METH_VARARGS,
   "SetFocalPoint(self, focalPoint:[float, float, float]) -> None\nC++: void SetFocalPoint(double focalPoint[3])\nSetFocalPoint(self, x:float, y:float, z:float) -> None\nC++: void SetFocalPoint(double x, double y, double z)\n\nSet the focal point of the camera in world coordinates. It is\nalso the point around which the camera rotates around.\n\\sa GetFocalPoint(), SetPosition(), SetViewUp()\n"},
  {"GetFocalPoint", PyvtkMRMLCameraNode_GetFocalPoint, METH_VARARGS,
   "GetFocalPoint(self) -> (float, float, float)\nC++: double *GetFocalPoint()\nGetFocalPoint(self, focalPoint:[float, float, float]) -> None\nC++: void GetFocalPoint(double focalPoint[3])\n\nGet the focal point of the camera in world coordinates.\n\\sa SetFocalPoint(), GetPosition(), GetViewUp()\n"},
  {"SetViewUp", PyvtkMRMLCameraNode_SetViewUp, METH_VARARGS,
   "SetViewUp(self, viewUp:[float, float, float]) -> None\nC++: void SetViewUp(double viewUp[3])\nSetViewUp(self, vx:float, vy:float, vz:float) -> None\nC++: void SetViewUp(double vx, double vy, double vz)\n\nSet camera Up vector\n\\sa GetViewUp(), SetPosition(), SetFocalPoint()\n"},
  {"GetViewUp", PyvtkMRMLCameraNode_GetViewUp, METH_VARARGS,
   "GetViewUp(self) -> (float, float, float)\nC++: double *GetViewUp()\nGetViewUp(self, viewUp:[float, float, float]) -> None\nC++: void GetViewUp(double viewUp[3])\n\nGet camera Up vector\n\\sa SetViewUp(), GetPosition(), GetFocalPoint()\n"},
  {"ProcessMRMLEvents", PyvtkMRMLCameraNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Camera nodes\n"},
  {"GetAppliedTransform", PyvtkMRMLCameraNode_GetAppliedTransform, METH_VARARGS,
   "GetAppliedTransform(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetAppliedTransform()\n\nThis is the transform that was last applied to the position,\nfocal point, and up vector (for any new transforms, the\nincremental difference is calculated and applied to the\nparameters)\n"},
  {"SetAppliedTransform", PyvtkMRMLCameraNode_SetAppliedTransform, METH_VARARGS,
   "SetAppliedTransform(self, appliedTransform:vtkMatrix4x4) -> None\nC++: virtual void SetAppliedTransform(\n    vtkMatrix4x4 *appliedTransform)\n\n"},
  {"ResetClippingRange", PyvtkMRMLCameraNode_ResetClippingRange, METH_VARARGS,
   "ResetClippingRange(self) -> None\nC++: void ResetClippingRange()\n\nReset the clipping range just based on its position and focal\npoint\n"},
  {"RotateTo", PyvtkMRMLCameraNode_RotateTo, METH_VARARGS,
   "RotateTo(self, position:Direction) -> None\nC++: void RotateTo(Direction position)\n\nMoves the camera toward a position. Keeps the same distance to\nthe focal point.\n"},
  {"RotateAround", PyvtkMRMLCameraNode_RotateAround, METH_VARARGS,
   "RotateAround(self, axis:RASAxis, clockWise:bool) -> None\nC++: void RotateAround(RASAxis axis, bool clockWise)\nRotateAround(self, axis:RASAxis, angle:float=15.) -> None\nC++: void RotateAround(RASAxis axis, double angle=15.)\n\nUtility function that rotates of 15 degrees around an axis. Call\nRotateAround 6 times to make a right angle\n"},
  {"TranslateAlong", PyvtkMRMLCameraNode_TranslateAlong, METH_VARARGS,
   "TranslateAlong(self, axis:ScreenAxis, positive:bool) -> None\nC++: void TranslateAlong(ScreenAxis axis, bool positive)\n\nTranslate the camera and focal point of a 6th of the screen\nwidth. Call TranslateAround 6 times to not see what was on screen\nbefore.\n"},
  {"Reset", PyvtkMRMLCameraNode_Reset, METH_VARARGS,
   "Reset(self, resetRotation:bool, resetTranslation:bool=True,\n    resetDistance:bool=True, renderer:vtkRenderer=...) -> None\nC++: void Reset(bool resetRotation, bool resetTranslation=true,\n    bool resetDistance=true, vtkRenderer *renderer=nullptr)\nReset(self, defaultNode:vtkMRMLNode) -> None\nC++: virtual void Reset(vtkMRMLNode *defaultNode)\n\n"},
  {"SetInteracting", PyvtkMRMLCameraNode_SetInteracting, METH_VARARGS,
   "SetInteracting(self, __a:int) -> None\nC++: void SetInteracting(int)\n\nGet/Set a flag indicating whether this node is actively being\nmanipulated (usually) by a user interface. This flag is used by\nlogic classes to determine whether state changes should be\npropagated to other nodes to implement linked controls. Does not\ncause a Modified().\n"},
  {"GetInteracting", PyvtkMRMLCameraNode_GetInteracting, METH_VARARGS,
   "GetInteracting(self) -> int\nC++: virtual int GetInteracting()\n\n"},
  {"InteractingOn", PyvtkMRMLCameraNode_InteractingOn, METH_VARARGS,
   "InteractingOn(self) -> None\nC++: virtual void InteractingOn()\n\n"},
  {"InteractingOff", PyvtkMRMLCameraNode_InteractingOff, METH_VARARGS,
   "InteractingOff(self) -> None\nC++: virtual void InteractingOff()\n\n"},
  {"SetInteractionFlags", PyvtkMRMLCameraNode_SetInteractionFlags, METH_VARARGS,
   "SetInteractionFlags(self, __a:int) -> None\nC++: void SetInteractionFlags(unsigned int)\n\nGet/Set a flag indicating what parameters are being manipulated\nwithin calls to InteractingOn() and InteractingOff(). These\nfields are used to propagate linked behaviors. This flag is a\nbitfield, with multiple parameters OR'd to compose the flag. Does\nnot cause a Modified().\n"},
  {"GetInteractionFlags", PyvtkMRMLCameraNode_GetInteractionFlags, METH_VARARGS,
   "GetInteractionFlags(self) -> int\nC++: virtual unsigned int GetInteractionFlags()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLCameraNode_Doc =
  "vtkMRMLCameraNode - MRML node to represent camera node\n\n"
  "Superclass: vtkMRMLTransformableNode\n\n"
  "Camera node uses vtkCamera to store the state of the camera\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLCameraNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLCameraNode", // tp_name
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
  PyvtkMRMLCameraNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLCameraNode_StaticNew()
{
  return vtkMRMLCameraNode::New();
}

PyObject *PyvtkMRMLCameraNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLCameraNode_Type, PyvtkMRMLCameraNode_Methods,
    "vtkMRMLCameraNode",
 &PyvtkMRMLCameraNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLTransformableNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLCameraNode_Direction_Type);
  PyVTKEnum_Add(&PyvtkMRMLCameraNode_Direction_Type, "vtkMRMLCameraNode.Direction");

  o = (PyObject *)&PyvtkMRMLCameraNode_Direction_Type;
  if (PyDict_SetItemString(d, "Direction", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLCameraNode_RASAxis_Type);
  PyVTKEnum_Add(&PyvtkMRMLCameraNode_RASAxis_Type, "vtkMRMLCameraNode.RASAxis");

  o = (PyObject *)&PyvtkMRMLCameraNode_RASAxis_Type;
  if (PyDict_SetItemString(d, "RASAxis", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLCameraNode_ScreenAxis_Type);
  PyVTKEnum_Add(&PyvtkMRMLCameraNode_ScreenAxis_Type, "vtkMRMLCameraNode.ScreenAxis");

  o = (PyObject *)&PyvtkMRMLCameraNode_ScreenAxis_Type;
  if (PyDict_SetItemString(d, "ScreenAxis", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLCameraNode_InteractionFlagType_Type);
  PyVTKEnum_Add(&PyvtkMRMLCameraNode_InteractionFlagType_Type, "vtkMRMLCameraNode.InteractionFlagType");

  o = (PyObject *)&PyvtkMRMLCameraNode_InteractionFlagType_Type;
  if (PyDict_SetItemString(d, "InteractionFlagType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "LayoutNameModifiedEvent", vtkMRMLCameraNode::LayoutNameModifiedEvent },
        { "ActiveTagModifiedEvent", vtkMRMLCameraNode::ActiveTagModifiedEvent },
        { "CameraInteractionEvent", vtkMRMLCameraNode::CameraInteractionEvent },
        { "ResetCameraClippingEvent", vtkMRMLCameraNode::ResetCameraClippingEvent },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkMRMLCameraNode::Direction cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "Right", vtkMRMLCameraNode::Right },
        { "Left", vtkMRMLCameraNode::Left },
        { "Anterior", vtkMRMLCameraNode::Anterior },
        { "Posterior", vtkMRMLCameraNode::Posterior },
        { "Superior", vtkMRMLCameraNode::Superior },
        { "Inferior", vtkMRMLCameraNode::Inferior },
      };

    o = PyvtkMRMLCameraNode_Direction_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMRMLCameraNode::RASAxis cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "R", vtkMRMLCameraNode::R },
        { "A", vtkMRMLCameraNode::A },
        { "S", vtkMRMLCameraNode::S },
      };

    o = PyvtkMRMLCameraNode_RASAxis_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMRMLCameraNode::ScreenAxis cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "X", vtkMRMLCameraNode::X },
        { "Y", vtkMRMLCameraNode::Y },
        { "Z", vtkMRMLCameraNode::Z },
      };

    o = PyvtkMRMLCameraNode_ScreenAxis_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkMRMLCameraNode::InteractionFlagType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "None_", vtkMRMLCameraNode::None },
        { "LookFromAxis", vtkMRMLCameraNode::LookFromAxis },
        { "ZoomInFlag", vtkMRMLCameraNode::ZoomInFlag },
        { "ZoomOutFlag", vtkMRMLCameraNode::ZoomOutFlag },
        { "CenterFlag", vtkMRMLCameraNode::CenterFlag },
        { "CameraInteractionFlag", vtkMRMLCameraNode::CameraInteractionFlag },
      };

    o = PyvtkMRMLCameraNode_InteractionFlagType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLCameraNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLCameraNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLCameraNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

