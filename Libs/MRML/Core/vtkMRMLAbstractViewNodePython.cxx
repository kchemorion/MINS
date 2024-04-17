// python wrapper for vtkMRMLAbstractViewNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLAbstractViewNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLAbstractViewNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLAbstractViewNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLNode_ClassNew
extern "C" { PyObject *PyvtkMRMLNode_ClassNew(); }
#define DECLARED_PyvtkMRMLNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAbstractViewNode_OrientationMarkerTypeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLAbstractViewNode.OrientationMarkerTypeType", // tp_name
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
PyObject *PyvtkMRMLAbstractViewNode_OrientationMarkerTypeType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLAbstractViewNode_OrientationMarkerTypeType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAbstractViewNode_OrientationMarkerSizeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLAbstractViewNode.OrientationMarkerSizeType", // tp_name
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
PyObject *PyvtkMRMLAbstractViewNode_OrientationMarkerSizeType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLAbstractViewNode_OrientationMarkerSizeType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAbstractViewNode_RulerTypeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLAbstractViewNode.RulerTypeType", // tp_name
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
PyObject *PyvtkMRMLAbstractViewNode_RulerTypeType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLAbstractViewNode_RulerTypeType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAbstractViewNode_RulerColorType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLAbstractViewNode.RulerColorType", // tp_name
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
PyObject *PyvtkMRMLAbstractViewNode_RulerColorType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLAbstractViewNode_RulerColorType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLAbstractViewNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAbstractViewNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLAbstractViewNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLAbstractViewNode *tempr = vtkMRMLAbstractViewNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAbstractViewNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLAbstractViewNode::NewInstance());

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
PyvtkMRMLAbstractViewNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLAbstractViewNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLAbstractViewNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

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
      op->vtkMRMLAbstractViewNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLAbstractViewNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

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
      op->vtkMRMLAbstractViewNode::Reset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetLayoutName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

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
      op->vtkMRMLAbstractViewNode::SetLayoutName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetLayoutName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLayoutName() :
      op->vtkMRMLAbstractViewNode::GetLayoutName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetViewGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetViewGroup(temp0);
    }
    else
    {
      op->vtkMRMLAbstractViewNode::SetViewGroup(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetViewGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetViewGroup() :
      op->vtkMRMLAbstractViewNode::GetViewGroup());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetLayoutLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutLabel(temp0);
    }
    else
    {
      op->vtkMRMLAbstractViewNode::SetLayoutLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetLayoutLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLayoutLabel() :
      op->vtkMRMLAbstractViewNode::GetLayoutLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActive() :
      op->vtkMRMLAbstractViewNode::GetActive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActive(temp0);
    }
    else
    {
      op->vtkMRMLAbstractViewNode::SetActive(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVisibility() :
      op->vtkMRMLAbstractViewNode::GetVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

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
      op->vtkMRMLAbstractViewNode::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetInteractionNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLInteractionNode *tempr = (ap.IsBound() ?
      op->GetInteractionNode() :
      op->vtkMRMLAbstractViewNode::GetInteractionNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetInteractionNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetInteractionNodeID(temp0) :
      op->vtkMRMLAbstractViewNode::SetInteractionNodeID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetInteractionNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetInteractionNode(temp0) :
      op->vtkMRMLAbstractViewNode::SetInteractionNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_IsMappedInLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMappedInLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsMappedInLayout() :
      op->vtkMRMLAbstractViewNode::IsMappedInLayout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetMappedInLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMappedInLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMappedInLayout(temp0);
    }
    else
    {
      op->vtkMRMLAbstractViewNode::SetMappedInLayout(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetParentLayoutNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentLayoutNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetParentLayoutNode() :
      op->vtkMRMLAbstractViewNode::GetParentLayoutNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetAndObserveParentLayoutNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveParentLayoutNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetAndObserveParentLayoutNodeID(temp0) :
      op->vtkMRMLAbstractViewNode::SetAndObserveParentLayoutNodeID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetAndObserveParentLayoutNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveParentLayoutNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetAndObserveParentLayoutNode(temp0) :
      op->vtkMRMLAbstractViewNode::SetAndObserveParentLayoutNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_IsViewVisibleInLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsViewVisibleInLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsViewVisibleInLayout() :
      op->vtkMRMLAbstractViewNode::IsViewVisibleInLayout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor() :
      op->vtkMRMLAbstractViewNode::GetBackgroundColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

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
      op->SetBackgroundColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLAbstractViewNode::SetBackgroundColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAbstractViewNode_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundColor(temp0);
    }
    else
    {
      op->vtkMRMLAbstractViewNode::SetBackgroundColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAbstractViewNode_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLAbstractViewNode_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkMRMLAbstractViewNode_SetBackgroundColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetBackgroundColor2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor2() :
      op->vtkMRMLAbstractViewNode::GetBackgroundColor2());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetBackgroundColor2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

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
      op->SetBackgroundColor2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLAbstractViewNode::SetBackgroundColor2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAbstractViewNode_SetBackgroundColor2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundColor2(temp0);
    }
    else
    {
      op->vtkMRMLAbstractViewNode::SetBackgroundColor2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAbstractViewNode_SetBackgroundColor2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLAbstractViewNode_SetBackgroundColor2_s1(self, args);
    case 1:
      return PyvtkMRMLAbstractViewNode_SetBackgroundColor2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor2");
  return nullptr;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetLayoutColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

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
      op->SetLayoutColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLAbstractViewNode::SetLayoutColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAbstractViewNode_SetLayoutColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutColor(temp0);
    }
    else
    {
      op->vtkMRMLAbstractViewNode::SetLayoutColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAbstractViewNode_SetLayoutColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLAbstractViewNode_SetLayoutColor_s1(self, args);
    case 1:
      return PyvtkMRMLAbstractViewNode_SetLayoutColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLayoutColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetLayoutColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLayoutColor() :
      op->vtkMRMLAbstractViewNode::GetLayoutColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetRedColor(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRedColor");

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double *tempr = vtkMRMLAbstractViewNode::GetRedColor();

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetYellowColor(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetYellowColor");

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double *tempr = vtkMRMLAbstractViewNode::GetYellowColor();

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetGreenColor(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGreenColor");

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double *tempr = vtkMRMLAbstractViewNode::GetGreenColor();

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetCompareColor(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCompareColor");

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double *tempr = vtkMRMLAbstractViewNode::GetCompareColor();

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetGrayColor(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGrayColor");

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double *tempr = vtkMRMLAbstractViewNode::GetGrayColor();

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetThreeDViewBlueColor(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetThreeDViewBlueColor");

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double *tempr = vtkMRMLAbstractViewNode::GetThreeDViewBlueColor();

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetOrientationMarkerEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMarkerEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOrientationMarkerEnabled() :
      op->vtkMRMLAbstractViewNode::GetOrientationMarkerEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetOrientationMarkerType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationMarkerType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationMarkerType(temp0);
    }
    else
    {
      op->vtkMRMLAbstractViewNode::SetOrientationMarkerType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetOrientationMarkerType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMarkerType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMarkerType() :
      op->vtkMRMLAbstractViewNode::GetOrientationMarkerType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetOrientationMarkerHumanModelNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationMarkerHumanModelNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationMarkerHumanModelNodeID(temp0);
    }
    else
    {
      op->vtkMRMLAbstractViewNode::SetOrientationMarkerHumanModelNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetOrientationMarkerHumanModelNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMarkerHumanModelNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOrientationMarkerHumanModelNodeID() :
      op->vtkMRMLAbstractViewNode::GetOrientationMarkerHumanModelNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetOrientationMarkerHumanModelNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMarkerHumanModelNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLModelNode *tempr = (ap.IsBound() ?
      op->GetOrientationMarkerHumanModelNode() :
      op->vtkMRMLAbstractViewNode::GetOrientationMarkerHumanModelNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetOrientationMarkerTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetOrientationMarkerTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLAbstractViewNode::GetOrientationMarkerTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetOrientationMarkerTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetOrientationMarkerTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAbstractViewNode::GetOrientationMarkerTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetOrientationMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationMarkerSize(temp0);
    }
    else
    {
      op->vtkMRMLAbstractViewNode::SetOrientationMarkerSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetOrientationMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMarkerSize() :
      op->vtkMRMLAbstractViewNode::GetOrientationMarkerSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetOrientationMarkerSizeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetOrientationMarkerSizeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLAbstractViewNode::GetOrientationMarkerSizeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetOrientationMarkerSizeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetOrientationMarkerSizeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAbstractViewNode::GetOrientationMarkerSizeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetRulerEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRulerEnabled() :
      op->vtkMRMLAbstractViewNode::GetRulerEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetRulerType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRulerType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRulerType(temp0);
    }
    else
    {
      op->vtkMRMLAbstractViewNode::SetRulerType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetRulerType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRulerType() :
      op->vtkMRMLAbstractViewNode::GetRulerType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetRulerTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRulerTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLAbstractViewNode::GetRulerTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetRulerTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRulerTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAbstractViewNode::GetRulerTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetRulerColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRulerColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRulerColor(temp0);
    }
    else
    {
      op->vtkMRMLAbstractViewNode::SetRulerColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetRulerColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRulerColor() :
      op->vtkMRMLAbstractViewNode::GetRulerColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetRulerColorAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRulerColorAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLAbstractViewNode::GetRulerColorAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetRulerColorFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRulerColorFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAbstractViewNode::GetRulerColorFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAxisLabel(temp0) :
      op->vtkMRMLAbstractViewNode::GetAxisLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_SetAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabel(temp0, temp1);
    }
    else
    {
      op->vtkMRMLAbstractViewNode::SetAxisLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractViewNode_GetDirectionLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectionLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  bool temp1 = true;
  double temp2 = 1.0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    std::string tempr = (ap.IsBound() ?
      op->GetDirectionLabel(temp0, temp1, temp2) :
      op->vtkMRMLAbstractViewNode::GetDirectionLabel(temp0, temp1, temp2));

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
PyvtkMRMLAbstractViewNode_GetMaximizedState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximizedState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractViewNode *op = static_cast<vtkMRMLAbstractViewNode *>(vp);

  bool temp0;
  bool temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMRMLLayoutNode *tempr = (ap.IsBound() ?
      op->GetMaximizedState(temp0, temp1) :
      op->vtkMRMLAbstractViewNode::GetMaximizedState(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLAbstractViewNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLAbstractViewNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLAbstractViewNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLAbstractViewNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLAbstractViewNode\nC++: static vtkMRMLAbstractViewNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLAbstractViewNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLAbstractViewNode\nC++: vtkMRMLAbstractViewNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLAbstractViewNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLAbstractViewNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CopyContent", PyvtkMRMLAbstractViewNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLAbstractViewNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"Reset", PyvtkMRMLAbstractViewNode_Reset, METH_VARARGS,
   "Reset(self, defaultNode:vtkMRMLNode) -> None\nC++: void Reset(vtkMRMLNode *defaultNode) override;\n\nReimplemented to preserve layout label when reset.\n\\sa GetLayoutLabel()\n"},
  {"SetLayoutName", PyvtkMRMLAbstractViewNode_SetLayoutName, METH_VARARGS,
   "SetLayoutName(self, layoutName:str) -> None\nC++: void SetLayoutName(const char *layoutName)\n\nName of the layout. Must be unique between all the view nodes of\nthe same type because it is used as a singleton tag. Typical\nnames can be colors \"Red\", \"Green\", \"Yellow\",... or numbers \"1\",\n\"2\"... to uniquely define the node. No name (i.e. \"\") by default.\n\\sa SetSingletonTag(), SetViewLabel()\n"},
  {"GetLayoutName", PyvtkMRMLAbstractViewNode_GetLayoutName, METH_VARARGS,
   "GetLayoutName(self) -> str\nC++: const char *GetLayoutName()\n\n"},
  {"SetViewGroup", PyvtkMRMLAbstractViewNode_SetViewGroup, METH_VARARGS,
   "SetViewGroup(self, _arg:int) -> None\nC++: virtual void SetViewGroup(int _arg)\n\nAn optional identifier to link groups of views. Views that have\nmatching ViewGroup value are in the same group. ViewGroup is used\nfor restricting scope of:\n\\li Linked slice view property changes (is slices are linked, a\n    property change\n    will only change views in the same group)\n\\li Crosshair jump to slice (if crosshair is moved with\n    shift+mousemove and slice\n    jump is enabled, only those slices will be moved that are in\nthe same group as\n    the view where the mouse was)\n\\li Slice intersection display (slice intersections will only\n    shown of those slices\n    that are in the same group)\n"},
  {"GetViewGroup", PyvtkMRMLAbstractViewNode_GetViewGroup, METH_VARARGS,
   "GetViewGroup(self) -> int\nC++: virtual int GetViewGroup()\n\n"},
  {"SetLayoutLabel", PyvtkMRMLAbstractViewNode_SetLayoutLabel, METH_VARARGS,
   "SetLayoutLabel(self, _arg:str) -> None\nC++: virtual void SetLayoutLabel(const char *_arg)\n\nLabel for the view. Usually a 1 character label, e.g. R, 1, 2,\netc.\n\\sa SetLayoutName()\n"},
  {"GetLayoutLabel", PyvtkMRMLAbstractViewNode_GetLayoutLabel, METH_VARARGS,
   "GetLayoutLabel(self) -> str\nC++: virtual char *GetLayoutLabel()\n\n"},
  {"GetActive", PyvtkMRMLAbstractViewNode_GetActive, METH_VARARGS,
   "GetActive(self) -> int\nC++: virtual int GetActive()\n\nIndicates whether or not the view is active\n"},
  {"SetActive", PyvtkMRMLAbstractViewNode_SetActive, METH_VARARGS,
   "SetActive(self, _arg:int) -> None\nC++: virtual void SetActive(int _arg)\n\n"},
  {"GetVisibility", PyvtkMRMLAbstractViewNode_GetVisibility, METH_VARARGS,
   "GetVisibility(self) -> int\nC++: virtual int GetVisibility()\n\nIndicates whether or not the view is visible.\n\nIf it is not visible, then the view is not shown in any of the\nview layouts, but can be privately used by modules.\n\n\\sa IsViewVisibleInLayout()\n\\sa IsMappedInLayout()\n"},
  {"SetVisibility", PyvtkMRMLAbstractViewNode_SetVisibility, METH_VARARGS,
   "SetVisibility(self, _arg:int) -> None\nC++: virtual void SetVisibility(int _arg)\n\n"},
  {"GetInteractionNode", PyvtkMRMLAbstractViewNode_GetInteractionNode, METH_VARARGS,
   "GetInteractionNode(self) -> vtkMRMLInteractionNode\nC++: vtkMRMLInteractionNode *GetInteractionNode()\n\nGet interaction node.\n\nIf no node reference has been explicitly set using\nSetInteractionNode() or SetInteractionNodeID(), return the\nsingleton interaction node.\n\nThe singleton interaction node is considered to be the default\ninteraction node. Associating a specific interaction node to one\nor a multiple views allows to control the interaction mode\nassociated with these views.\n\nSince by default, the interaction node is a singleton, a new\ninteraction node may be created doing the following:\n\n{.cpp}\nvtkNewinteractionNode;\ninteractionNode->SetSingletonOff();\nthis->GetMRMLScene()->AddNode(interactionNode.GetPointer());\n\n\\sa SetInteractionNodeID() SetInteractionNode()\n"},
  {"SetInteractionNodeID", PyvtkMRMLAbstractViewNode_SetInteractionNodeID, METH_VARARGS,
   "SetInteractionNodeID(self, interactionNodeId:str) -> bool\nC++: bool SetInteractionNodeID(const char *interactionNodeId)\n\nSet interaction node reference.\n\\sa GetInteractionNode()\n"},
  {"SetInteractionNode", PyvtkMRMLAbstractViewNode_SetInteractionNode, METH_VARARGS,
   "SetInteractionNode(self, node:vtkMRMLNode) -> bool\nC++: bool SetInteractionNode(vtkMRMLNode *node)\n\nSet interaction node reference.\n\\sa GetInteractionNode()\n"},
  {"IsMappedInLayout", PyvtkMRMLAbstractViewNode_IsMappedInLayout, METH_VARARGS,
   "IsMappedInLayout(self) -> int\nC++: virtual int IsMappedInLayout()\n\nIndicates whether or not the view is mapped in the current\nlayout.\n\\sa GetVisibility()\n\\sa IsViewVisibleInLayout()\n\\sa vtkMRMLLayoutNode::SetViewArrangement()\n"},
  {"SetMappedInLayout", PyvtkMRMLAbstractViewNode_SetMappedInLayout, METH_VARARGS,
   "SetMappedInLayout(self, value:int) -> None\nC++: virtual void SetMappedInLayout(int value)\n\n"},
  {"GetParentLayoutNode", PyvtkMRMLAbstractViewNode_GetParentLayoutNode, METH_VARARGS,
   "GetParentLayoutNode(self) -> vtkMRMLNode\nC++: vtkMRMLNode *GetParentLayoutNode()\n\nGet parent layout node. Default is no reference, meaning that the\nview is managed by the main layout. Non-empty reference means\nstandalone view or view managed by another layout.\n"},
  {"SetAndObserveParentLayoutNodeID", PyvtkMRMLAbstractViewNode_SetAndObserveParentLayoutNodeID, METH_VARARGS,
   "SetAndObserveParentLayoutNodeID(self, layoutNodeId:str) -> bool\nC++: bool SetAndObserveParentLayoutNodeID(\n    const char *layoutNodeId)\n\nSet parent layout node reference\n\\sa GetParentLayoutNode\n"},
  {"SetAndObserveParentLayoutNode", PyvtkMRMLAbstractViewNode_SetAndObserveParentLayoutNode, METH_VARARGS,
   "SetAndObserveParentLayoutNode(self, node:vtkMRMLNode) -> bool\nC++: bool SetAndObserveParentLayoutNode(vtkMRMLNode *node)\n\nSet parent layout node reference\n\\sa GetParentLayoutNode\n"},
  {"IsViewVisibleInLayout", PyvtkMRMLAbstractViewNode_IsViewVisibleInLayout, METH_VARARGS,
   "IsViewVisibleInLayout(self) -> bool\nC++: bool IsViewVisibleInLayout()\n\nIndicates whether or not the view is visible in the current\n    layout.\n\nA view is visible in the current layout it is both mapped in\nlayout and visible.\n\n\\sa GetVisibility()\n\\sa IsMappedInLayout()\n\\sa vtkMRMLLayoutNode::SetViewArrangement()\n"},
  {"GetBackgroundColor", PyvtkMRMLAbstractViewNode_GetBackgroundColor, METH_VARARGS,
   "GetBackgroundColor(self) -> (float, float, float)\nC++: virtual double *GetBackgroundColor()\n\n1st background color of the view. Black (0,0,0) by default.\n\\sa SetBackgroundColor2()\n"},
  {"SetBackgroundColor", PyvtkMRMLAbstractViewNode_SetBackgroundColor, METH_VARARGS,
   "SetBackgroundColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetBackgroundColor(double _arg1, double _arg2,\n    double _arg3)\nSetBackgroundColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetBackgroundColor(const double _arg[3])\n\n"},
  {"GetBackgroundColor2", PyvtkMRMLAbstractViewNode_GetBackgroundColor2, METH_VARARGS,
   "GetBackgroundColor2(self) -> (float, float, float)\nC++: virtual double *GetBackgroundColor2()\n\n2nd background color of the view Black (0,0,0) by default.\n\\sa SetBackgroundColor2()\n"},
  {"SetBackgroundColor2", PyvtkMRMLAbstractViewNode_SetBackgroundColor2, METH_VARARGS,
   "SetBackgroundColor2(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetBackgroundColor2(double _arg1, double _arg2,\n    double _arg3)\nSetBackgroundColor2(self, _arg:(float, float, float)) -> None\nC++: virtual void SetBackgroundColor2(const double _arg[3])\n\n"},
  {"SetLayoutColor", PyvtkMRMLAbstractViewNode_SetLayoutColor, METH_VARARGS,
   "SetLayoutColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetLayoutColor(double _arg1, double _arg2,\n    double _arg3)\nSetLayoutColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetLayoutColor(const double _arg[3])\n\nColor for view header in layout as RGB Gray by default\n"},
  {"GetLayoutColor", PyvtkMRMLAbstractViewNode_GetLayoutColor, METH_VARARGS,
   "GetLayoutColor(self) -> (float, float, float)\nC++: virtual double *GetLayoutColor()\n\n"},
  {"GetRedColor", PyvtkMRMLAbstractViewNode_GetRedColor, METH_VARARGS,
   "GetRedColor() -> (float, float, float)\nC++: static double *GetRedColor()\n\n"},
  {"GetYellowColor", PyvtkMRMLAbstractViewNode_GetYellowColor, METH_VARARGS,
   "GetYellowColor() -> (float, float, float)\nC++: static double *GetYellowColor()\n\n"},
  {"GetGreenColor", PyvtkMRMLAbstractViewNode_GetGreenColor, METH_VARARGS,
   "GetGreenColor() -> (float, float, float)\nC++: static double *GetGreenColor()\n\n"},
  {"GetCompareColor", PyvtkMRMLAbstractViewNode_GetCompareColor, METH_VARARGS,
   "GetCompareColor() -> (float, float, float)\nC++: static double *GetCompareColor()\n\n"},
  {"GetGrayColor", PyvtkMRMLAbstractViewNode_GetGrayColor, METH_VARARGS,
   "GetGrayColor() -> (float, float, float)\nC++: static double *GetGrayColor()\n\n"},
  {"GetThreeDViewBlueColor", PyvtkMRMLAbstractViewNode_GetThreeDViewBlueColor, METH_VARARGS,
   "GetThreeDViewBlueColor() -> (float, float, float)\nC++: static double *GetThreeDViewBlueColor()\n\n"},
  {"GetOrientationMarkerEnabled", PyvtkMRMLAbstractViewNode_GetOrientationMarkerEnabled, METH_VARARGS,
   "GetOrientationMarkerEnabled(self) -> bool\nC++: virtual bool GetOrientationMarkerEnabled()\n\nTells if it is meaningful to display orientation marker in this\nview. It is set statically in each specific view node class and\ncannot be changed dynamically.\n"},
  {"SetOrientationMarkerType", PyvtkMRMLAbstractViewNode_SetOrientationMarkerType, METH_VARARGS,
   "SetOrientationMarkerType(self, _arg:int) -> None\nC++: virtual void SetOrientationMarkerType(int _arg)\n\nGet/Set orientation marker type (e.g., not displayed, cube,\nhuman, coordinate system axes)\n"},
  {"GetOrientationMarkerType", PyvtkMRMLAbstractViewNode_GetOrientationMarkerType, METH_VARARGS,
   "GetOrientationMarkerType(self) -> int\nC++: virtual int GetOrientationMarkerType()\n\n"},
  {"SetOrientationMarkerHumanModelNodeID", PyvtkMRMLAbstractViewNode_SetOrientationMarkerHumanModelNodeID, METH_VARARGS,
   "SetOrientationMarkerHumanModelNodeID(self, modelNodeId:str)\n    -> None\nC++: void SetOrientationMarkerHumanModelNodeID(\n    const char *modelNodeId)\n\nGet/Set a custom human orientation marker model. If nullptr or\ninvalid node ID is specified then the default human model will be\nused. If the node has point data array with the name \"Color\" and\n3 scalar components then it will be used to specify RGB color for\nthe model. If no color point data is specified then the solid\ncolor specified in the model node's first display node will be\nused as color.\n"},
  {"GetOrientationMarkerHumanModelNodeID", PyvtkMRMLAbstractViewNode_GetOrientationMarkerHumanModelNodeID, METH_VARARGS,
   "GetOrientationMarkerHumanModelNodeID(self) -> str\nC++: const char *GetOrientationMarkerHumanModelNodeID()\n\n"},
  {"GetOrientationMarkerHumanModelNode", PyvtkMRMLAbstractViewNode_GetOrientationMarkerHumanModelNode, METH_VARARGS,
   "GetOrientationMarkerHumanModelNode(self) -> vtkMRMLModelNode\nC++: vtkMRMLModelNode *GetOrientationMarkerHumanModelNode()\n\n"},
  {"GetOrientationMarkerTypeAsString", PyvtkMRMLAbstractViewNode_GetOrientationMarkerTypeAsString, METH_VARARGS,
   "GetOrientationMarkerTypeAsString(id:int) -> str\nC++: static const char *GetOrientationMarkerTypeAsString(int id)\n\nConvert between orientation marker type ID and name\n"},
  {"GetOrientationMarkerTypeFromString", PyvtkMRMLAbstractViewNode_GetOrientationMarkerTypeFromString, METH_VARARGS,
   "GetOrientationMarkerTypeFromString(name:str) -> int\nC++: static int GetOrientationMarkerTypeFromString(\n    const char *name)\n\n"},
  {"SetOrientationMarkerSize", PyvtkMRMLAbstractViewNode_SetOrientationMarkerSize, METH_VARARGS,
   "SetOrientationMarkerSize(self, _arg:int) -> None\nC++: virtual void SetOrientationMarkerSize(int _arg)\n\nGet/Set orientation marker is size. There are a few predefined\nmarker sizes, defined by an enumerated value (e.g., small,\nmedium, large).\n"},
  {"GetOrientationMarkerSize", PyvtkMRMLAbstractViewNode_GetOrientationMarkerSize, METH_VARARGS,
   "GetOrientationMarkerSize(self) -> int\nC++: virtual int GetOrientationMarkerSize()\n\n"},
  {"GetOrientationMarkerSizeAsString", PyvtkMRMLAbstractViewNode_GetOrientationMarkerSizeAsString, METH_VARARGS,
   "GetOrientationMarkerSizeAsString(id:int) -> str\nC++: static const char *GetOrientationMarkerSizeAsString(int id)\n\nConvert between orientation marker type ID and name\n"},
  {"GetOrientationMarkerSizeFromString", PyvtkMRMLAbstractViewNode_GetOrientationMarkerSizeFromString, METH_VARARGS,
   "GetOrientationMarkerSizeFromString(name:str) -> int\nC++: static int GetOrientationMarkerSizeFromString(\n    const char *name)\n\n"},
  {"GetRulerEnabled", PyvtkMRMLAbstractViewNode_GetRulerEnabled, METH_VARARGS,
   "GetRulerEnabled(self) -> bool\nC++: virtual bool GetRulerEnabled()\n\nTells if it is meaningful to display ruler in this view. It is\nset statically in each specific view node class and cannot be\nchanged dynamically.\n"},
  {"SetRulerType", PyvtkMRMLAbstractViewNode_SetRulerType, METH_VARARGS,
   "SetRulerType(self, _arg:int) -> None\nC++: virtual void SetRulerType(int _arg)\n\nGet/Set ruler type (e.g., not displayed, thin, thick)\n"},
  {"GetRulerType", PyvtkMRMLAbstractViewNode_GetRulerType, METH_VARARGS,
   "GetRulerType(self) -> int\nC++: virtual int GetRulerType()\n\n"},
  {"GetRulerTypeAsString", PyvtkMRMLAbstractViewNode_GetRulerTypeAsString, METH_VARARGS,
   "GetRulerTypeAsString(id:int) -> str\nC++: static const char *GetRulerTypeAsString(int id)\n\nConvert between ruler type ID and name\n"},
  {"GetRulerTypeFromString", PyvtkMRMLAbstractViewNode_GetRulerTypeFromString, METH_VARARGS,
   "GetRulerTypeFromString(name:str) -> int\nC++: static int GetRulerTypeFromString(const char *name)\n\n"},
  {"SetRulerColor", PyvtkMRMLAbstractViewNode_SetRulerColor, METH_VARARGS,
   "SetRulerColor(self, _arg:int) -> None\nC++: virtual void SetRulerColor(int _arg)\n\nGet/Set ruler color (e.g., white or black)\n"},
  {"GetRulerColor", PyvtkMRMLAbstractViewNode_GetRulerColor, METH_VARARGS,
   "GetRulerColor(self) -> int\nC++: virtual int GetRulerColor()\n\n"},
  {"GetRulerColorAsString", PyvtkMRMLAbstractViewNode_GetRulerColorAsString, METH_VARARGS,
   "GetRulerColorAsString(id:int) -> str\nC++: static const char *GetRulerColorAsString(int id)\n\nConvert between ruler color ID and name\n"},
  {"GetRulerColorFromString", PyvtkMRMLAbstractViewNode_GetRulerColorFromString, METH_VARARGS,
   "GetRulerColorFromString(name:str) -> int\nC++: static int GetRulerColorFromString(const char *name)\n\n"},
  {"GetAxisLabel", PyvtkMRMLAbstractViewNode_GetAxisLabel, METH_VARARGS,
   "GetAxisLabel(self, labelIndex:int) -> str\nC++: const char *GetAxisLabel(int labelIndex)\n\nGet/Set labels of coordinate system axes. Order of labels: -X,\n+X, -Y, +Y, -Z, +Z. Default: L, R, P, A, I, S Note that these\nlabels are used for display only (for example, showing organ\nspecific directions, such as \"Temporal\" and \"Nasal\" instead of\n\"Left\" and \"Right\"). Therefore, changing labels will not change\norientation of displayed data in the view.\n"},
  {"SetAxisLabel", PyvtkMRMLAbstractViewNode_SetAxisLabel, METH_VARARGS,
   "SetAxisLabel(self, labelIndex:int, label:str) -> None\nC++: void SetAxisLabel(int labelIndex, const char *label)\n\n"},
  {"GetDirectionLabel", PyvtkMRMLAbstractViewNode_GetDirectionLabel, METH_VARARGS,
   "GetDirectionLabel(self, direction:[float, float, float],\n    positive:bool=True, toleranceDeg:float=1.0) -> str\nC++: std::string GetDirectionLabel(double direction[3],\n    bool positive=true, double toleranceDeg=1.0)\n\nReturns label for the specified direction. For example, (1,0,0)\ndirection returns the positive x axis label \"R\". toleranceDeg\nspecifies the tolerance when when determining if the direction is\nparallel with an axis.\n"},
  {"GetMaximizedState", PyvtkMRMLAbstractViewNode_GetMaximizedState, METH_VARARGS,
   "GetMaximizedState(self, maximized:bool, canBeMaximized:bool)\n    -> vtkMRMLLayoutNode\nC++: vtkMRMLLayoutNode *GetMaximizedState(bool &maximized,\n    bool &canBeMaximized)\n\nGet maximized state of the view.\n\\param maximized is true if the view is temporarily maximized to\n    fill the view layout.\n\\param canBeMaximized is true if the view is in a view layout\n    (not a standalone widget).\n\\returns layout node that this view belongs to.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLAbstractViewNode_Doc =
  "vtkMRMLAbstractViewNode - Abstract MRML node to represent a view.\n\n"
  "Superclass: vtkMRMLNode\n\n"
  "The class holds the properties common to any view type (3D, slice,\n"
  "chart..) Views are not hidden from editors by default (HideFromEditor\n"
  "is 0)\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAbstractViewNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLAbstractViewNode", // tp_name
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
  PyvtkMRMLAbstractViewNode_Doc, // tp_doc
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

PyObject *PyvtkMRMLAbstractViewNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLAbstractViewNode_Type, PyvtkMRMLAbstractViewNode_Methods,
    "vtkMRMLAbstractViewNode",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLAbstractViewNode_OrientationMarkerTypeType_Type);
  PyVTKEnum_Add(&PyvtkMRMLAbstractViewNode_OrientationMarkerTypeType_Type, "vtkMRMLAbstractViewNode.OrientationMarkerTypeType");

  o = (PyObject *)&PyvtkMRMLAbstractViewNode_OrientationMarkerTypeType_Type;
  if (PyDict_SetItemString(d, "OrientationMarkerTypeType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLAbstractViewNode_OrientationMarkerSizeType_Type);
  PyVTKEnum_Add(&PyvtkMRMLAbstractViewNode_OrientationMarkerSizeType_Type, "vtkMRMLAbstractViewNode.OrientationMarkerSizeType");

  o = (PyObject *)&PyvtkMRMLAbstractViewNode_OrientationMarkerSizeType_Type;
  if (PyDict_SetItemString(d, "OrientationMarkerSizeType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLAbstractViewNode_RulerTypeType_Type);
  PyVTKEnum_Add(&PyvtkMRMLAbstractViewNode_RulerTypeType_Type, "vtkMRMLAbstractViewNode.RulerTypeType");

  o = (PyObject *)&PyvtkMRMLAbstractViewNode_RulerTypeType_Type;
  if (PyDict_SetItemString(d, "RulerTypeType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLAbstractViewNode_RulerColorType_Type);
  PyVTKEnum_Add(&PyvtkMRMLAbstractViewNode_RulerColorType_Type, "vtkMRMLAbstractViewNode.RulerColorType");

  o = (PyObject *)&PyvtkMRMLAbstractViewNode_RulerColorType_Type;
  if (PyDict_SetItemString(d, "RulerColorType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkMRMLAbstractViewNode::OrientationMarkerTypeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "OrientationMarkerTypeNone", vtkMRMLAbstractViewNode::OrientationMarkerTypeNone },
        { "OrientationMarkerTypeCube", vtkMRMLAbstractViewNode::OrientationMarkerTypeCube },
        { "OrientationMarkerTypeHuman", vtkMRMLAbstractViewNode::OrientationMarkerTypeHuman },
        { "OrientationMarkerTypeAxes", vtkMRMLAbstractViewNode::OrientationMarkerTypeAxes },
        { "OrientationMarkerType_Last", vtkMRMLAbstractViewNode::OrientationMarkerType_Last },
      };

    o = PyvtkMRMLAbstractViewNode_OrientationMarkerTypeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkMRMLAbstractViewNode::OrientationMarkerSizeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "OrientationMarkerSizeSmall", vtkMRMLAbstractViewNode::OrientationMarkerSizeSmall },
        { "OrientationMarkerSizeMedium", vtkMRMLAbstractViewNode::OrientationMarkerSizeMedium },
        { "OrientationMarkerSizeLarge", vtkMRMLAbstractViewNode::OrientationMarkerSizeLarge },
        { "OrientationMarkerSize_Last", vtkMRMLAbstractViewNode::OrientationMarkerSize_Last },
      };

    o = PyvtkMRMLAbstractViewNode_OrientationMarkerSizeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkMRMLAbstractViewNode::RulerTypeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "RulerTypeNone", vtkMRMLAbstractViewNode::RulerTypeNone },
        { "RulerTypeThin", vtkMRMLAbstractViewNode::RulerTypeThin },
        { "RulerTypeThick", vtkMRMLAbstractViewNode::RulerTypeThick },
        { "RulerType_Last", vtkMRMLAbstractViewNode::RulerType_Last },
      };

    o = PyvtkMRMLAbstractViewNode_RulerTypeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkMRMLAbstractViewNode::RulerColorType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "RulerColorWhite", vtkMRMLAbstractViewNode::RulerColorWhite },
        { "RulerColorBlack", vtkMRMLAbstractViewNode::RulerColorBlack },
        { "RulerColorYellow", vtkMRMLAbstractViewNode::RulerColorYellow },
        { "RulerColor_Last", vtkMRMLAbstractViewNode::RulerColor_Last },
      };

    o = PyvtkMRMLAbstractViewNode_RulerColorType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLAbstractViewNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLAbstractViewNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLAbstractViewNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

