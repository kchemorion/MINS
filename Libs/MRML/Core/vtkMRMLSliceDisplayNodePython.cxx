// python wrapper for vtkMRMLSliceDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSliceDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSliceDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSliceDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLModelDisplayNode_ClassNew
extern "C" { PyObject *PyvtkMRMLModelDisplayNode_ClassNew(); }
#define DECLARED_PyvtkMRMLModelDisplayNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceDisplayNode_IntersectingSlicesInteractiveMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSliceDisplayNode.IntersectingSlicesInteractiveMode", // tp_name
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
PyObject *PyvtkMRMLSliceDisplayNode_IntersectingSlicesInteractiveMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLSliceDisplayNode_IntersectingSlicesInteractiveMode_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceDisplayNode_HandlesVisibilityMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSliceDisplayNode.HandlesVisibilityMode", // tp_name
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
PyObject *PyvtkMRMLSliceDisplayNode_HandlesVisibilityMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLSliceDisplayNode_HandlesVisibilityMode_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceDisplayNode_IntersectionMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSliceDisplayNode.IntersectionMode", // tp_name
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
PyObject *PyvtkMRMLSliceDisplayNode_IntersectionMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLSliceDisplayNode_IntersectionMode_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceDisplayNode_LineThicknessMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSliceDisplayNode.LineThicknessMode", // tp_name
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
PyObject *PyvtkMRMLSliceDisplayNode_LineThicknessMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLSliceDisplayNode_LineThicknessMode_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceDisplayNode_ComponentType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSliceDisplayNode.ComponentType", // tp_name
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
PyObject *PyvtkMRMLSliceDisplayNode_ComponentType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLSliceDisplayNode_ComponentType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLSliceDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSliceDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSliceDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSliceDisplayNode *tempr = vtkMRMLSliceDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSliceDisplayNode::NewInstance());

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
PyvtkMRMLSliceDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSliceDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSliceDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

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
      op->vtkMRMLSliceDisplayNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLSliceDisplayNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLSliceDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLSliceDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntersectingSlicesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIntersectingSlicesVisibility() :
      op->vtkMRMLSliceDisplayNode::GetIntersectingSlicesVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_SetIntersectingSlicesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntersectingSlicesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntersectingSlicesVisibility(temp0);
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::SetIntersectingSlicesVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_IntersectingSlicesVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectingSlicesVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntersectingSlicesVisibilityOn();
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::IntersectingSlicesVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_IntersectingSlicesVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectingSlicesVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntersectingSlicesVisibilityOff();
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::IntersectingSlicesVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetIntersectingThickSlabVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntersectingThickSlabVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIntersectingThickSlabVisibility() :
      op->vtkMRMLSliceDisplayNode::GetIntersectingThickSlabVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_SetIntersectingThickSlabVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntersectingThickSlabVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntersectingThickSlabVisibility(temp0);
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::SetIntersectingThickSlabVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_IntersectingThickSlabVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectingThickSlabVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntersectingThickSlabVisibilityOn();
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::IntersectingThickSlabVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_IntersectingThickSlabVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectingThickSlabVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntersectingThickSlabVisibilityOff();
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::IntersectingThickSlabVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntersectingSlicesInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIntersectingSlicesInteractive() :
      op->vtkMRMLSliceDisplayNode::GetIntersectingSlicesInteractive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_SetIntersectingSlicesInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntersectingSlicesInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntersectingSlicesInteractive(temp0);
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::SetIntersectingSlicesInteractive(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_IntersectingSlicesInteractiveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectingSlicesInteractiveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntersectingSlicesInteractiveOn();
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::IntersectingSlicesInteractiveOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_IntersectingSlicesInteractiveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectingSlicesInteractiveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntersectingSlicesInteractiveOff();
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::IntersectingSlicesInteractiveOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetIntersectingThickSlabInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntersectingThickSlabInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIntersectingThickSlabInteractive() :
      op->vtkMRMLSliceDisplayNode::GetIntersectingThickSlabInteractive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_SetIntersectingThickSlabInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntersectingThickSlabInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntersectingThickSlabInteractive(temp0);
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::SetIntersectingThickSlabInteractive(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_IntersectingThickSlabInteractiveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectingThickSlabInteractiveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntersectingThickSlabInteractiveOn();
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::IntersectingThickSlabInteractiveOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_IntersectingThickSlabInteractiveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectingThickSlabInteractiveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntersectingThickSlabInteractiveOff();
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::IntersectingThickSlabInteractiveOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntersectingSlicesTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIntersectingSlicesTranslationEnabled() :
      op->vtkMRMLSliceDisplayNode::GetIntersectingSlicesTranslationEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_SetIntersectingSlicesTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntersectingSlicesTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntersectingSlicesTranslationEnabled(temp0);
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::SetIntersectingSlicesTranslationEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_IntersectingSlicesTranslationEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectingSlicesTranslationEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntersectingSlicesTranslationEnabledOn();
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::IntersectingSlicesTranslationEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_IntersectingSlicesTranslationEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectingSlicesTranslationEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntersectingSlicesTranslationEnabledOff();
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::IntersectingSlicesTranslationEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesRotationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntersectingSlicesRotationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIntersectingSlicesRotationEnabled() :
      op->vtkMRMLSliceDisplayNode::GetIntersectingSlicesRotationEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_SetIntersectingSlicesRotationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntersectingSlicesRotationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntersectingSlicesRotationEnabled(temp0);
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::SetIntersectingSlicesRotationEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_IntersectingSlicesRotationEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectingSlicesRotationEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntersectingSlicesRotationEnabledOn();
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::IntersectingSlicesRotationEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_IntersectingSlicesRotationEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectingSlicesRotationEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntersectingSlicesRotationEnabledOff();
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::IntersectingSlicesRotationEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_SetIntersectingSlicesInteractiveModeEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntersectingSlicesInteractiveModeEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  typedef vtkMRMLSliceDisplayNode::IntersectingSlicesInteractiveMode temp0_type;
  temp0_type temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetEnumValue(temp0, "vtkMRMLSliceDisplayNode.IntersectingSlicesInteractiveMode") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetIntersectingSlicesInteractiveModeEnabled(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::SetIntersectingSlicesInteractiveModeEnabled(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesInteractiveModeEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntersectingSlicesInteractiveModeEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  typedef vtkMRMLSliceDisplayNode::IntersectingSlicesInteractiveMode temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkMRMLSliceDisplayNode.IntersectingSlicesInteractiveMode"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIntersectingSlicesInteractiveModeEnabled(temp0) :
      op->vtkMRMLSliceDisplayNode::GetIntersectingSlicesInteractiveModeEnabled(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesInteractiveHandlesVisibilityMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntersectingSlicesInteractiveHandlesVisibilityMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntersectingSlicesInteractiveHandlesVisibilityMode() :
      op->vtkMRMLSliceDisplayNode::GetIntersectingSlicesInteractiveHandlesVisibilityMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_SetIntersectingSlicesInteractiveHandlesVisibilityMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntersectingSlicesInteractiveHandlesVisibilityMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntersectingSlicesInteractiveHandlesVisibilityMode(temp0);
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::SetIntersectingSlicesInteractiveHandlesVisibilityMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesInteractiveHandlesVisibilityModeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetIntersectingSlicesInteractiveHandlesVisibilityModeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLSliceDisplayNode::GetIntersectingSlicesInteractiveHandlesVisibilityModeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesInteractiveHandlesVisibilityModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetIntersectingSlicesInteractiveHandlesVisibilityModeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSliceDisplayNode::GetIntersectingSlicesInteractiveHandlesVisibilityModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesIntersectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntersectingSlicesIntersectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntersectingSlicesIntersectionMode() :
      op->vtkMRMLSliceDisplayNode::GetIntersectingSlicesIntersectionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_SetIntersectingSlicesIntersectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntersectingSlicesIntersectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntersectingSlicesIntersectionMode(temp0);
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::SetIntersectingSlicesIntersectionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesIntersectionModeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetIntersectingSlicesIntersectionModeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLSliceDisplayNode::GetIntersectingSlicesIntersectionModeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesIntersectionModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetIntersectingSlicesIntersectionModeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSliceDisplayNode::GetIntersectingSlicesIntersectionModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesLineThicknessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntersectingSlicesLineThicknessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntersectingSlicesLineThicknessMode() :
      op->vtkMRMLSliceDisplayNode::GetIntersectingSlicesLineThicknessMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_SetIntersectingSlicesLineThicknessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntersectingSlicesLineThicknessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntersectingSlicesLineThicknessMode(temp0);
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::SetIntersectingSlicesLineThicknessMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesLineThicknessModeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetIntersectingSlicesLineThicknessModeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLSliceDisplayNode::GetIntersectingSlicesLineThicknessModeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesLineThicknessModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetIntersectingSlicesLineThicknessModeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSliceDisplayNode::GetIntersectingSlicesLineThicknessModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetDefaultContextName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDefaultContextName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSliceDisplayNode::GetDefaultContextName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetActiveComponentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  std::string temp0 = vtkMRMLSliceDisplayNode::GetDefaultContextName();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponentType(temp0) :
      op->vtkMRMLSliceDisplayNode::GetActiveComponentType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetActiveComponentIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponentIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  std::string temp0 = vtkMRMLSliceDisplayNode::GetDefaultContextName();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponentIndex(temp0) :
      op->vtkMRMLSliceDisplayNode::GetActiveComponentIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_SetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  int temp0;
  int temp1;
  std::string temp2 = vtkMRMLSliceDisplayNode::GetDefaultContextName();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetActiveComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceDisplayNode::SetActiveComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_HasActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasActiveComponent() :
      op->vtkMRMLSliceDisplayNode::HasActiveComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceDisplayNode_GetActiveComponentInteractionContexts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponentInteractionContexts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceDisplayNode *op = static_cast<vtkMRMLSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetActiveComponentInteractionContexts() :
      op->vtkMRMLSliceDisplayNode::GetActiveComponentInteractionContexts());

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

static PyMethodDef PyvtkMRMLSliceDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSliceDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSliceDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSliceDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLSliceDisplayNode\nC++: static vtkMRMLSliceDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSliceDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSliceDisplayNode\nC++: vtkMRMLSliceDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSliceDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSliceDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CopyContent", PyvtkMRMLSliceDisplayNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLSliceDisplayNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"CreateNodeInstance", PyvtkMRMLSliceDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"GetNodeTagName", PyvtkMRMLSliceDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetIntersectingSlicesVisibility", PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesVisibility, METH_VARARGS,
   "GetIntersectingSlicesVisibility(self) -> bool\nC++: bool GetIntersectingSlicesVisibility()\n\nToggles visibility of intersections of other slices in the slice\nviewer\n"},
  {"SetIntersectingSlicesVisibility", PyvtkMRMLSliceDisplayNode_SetIntersectingSlicesVisibility, METH_VARARGS,
   "SetIntersectingSlicesVisibility(self, visible:bool) -> None\nC++: void SetIntersectingSlicesVisibility(bool visible)\n\nToggles visibility of intersections of other slices in the slice\nviewer\n"},
  {"IntersectingSlicesVisibilityOn", PyvtkMRMLSliceDisplayNode_IntersectingSlicesVisibilityOn, METH_VARARGS,
   "IntersectingSlicesVisibilityOn(self) -> None\nC++: virtual void IntersectingSlicesVisibilityOn()\n\nToggles visibility of intersections of other slices in the slice\nviewer\n"},
  {"IntersectingSlicesVisibilityOff", PyvtkMRMLSliceDisplayNode_IntersectingSlicesVisibilityOff, METH_VARARGS,
   "IntersectingSlicesVisibilityOff(self) -> None\nC++: virtual void IntersectingSlicesVisibilityOff()\n\nToggles visibility of intersections of other slices in the slice\nviewer\n"},
  {"GetIntersectingThickSlabVisibility", PyvtkMRMLSliceDisplayNode_GetIntersectingThickSlabVisibility, METH_VARARGS,
   "GetIntersectingThickSlabVisibility(self) -> bool\nC++: virtual bool GetIntersectingThickSlabVisibility()\n\nToggles visibility of thick slabs of other slices in the slice\nviewer\n"},
  {"SetIntersectingThickSlabVisibility", PyvtkMRMLSliceDisplayNode_SetIntersectingThickSlabVisibility, METH_VARARGS,
   "SetIntersectingThickSlabVisibility(self, _arg:bool) -> None\nC++: virtual void SetIntersectingThickSlabVisibility(bool _arg)\n\nToggles visibility of thick slabs of other slices in the slice\nviewer\n"},
  {"IntersectingThickSlabVisibilityOn", PyvtkMRMLSliceDisplayNode_IntersectingThickSlabVisibilityOn, METH_VARARGS,
   "IntersectingThickSlabVisibilityOn(self) -> None\nC++: virtual void IntersectingThickSlabVisibilityOn()\n\nToggles visibility of thick slabs of other slices in the slice\nviewer\n"},
  {"IntersectingThickSlabVisibilityOff", PyvtkMRMLSliceDisplayNode_IntersectingThickSlabVisibilityOff, METH_VARARGS,
   "IntersectingThickSlabVisibilityOff(self) -> None\nC++: virtual void IntersectingThickSlabVisibilityOff()\n\nToggles visibility of thick slabs of other slices in the slice\nviewer\n"},
  {"GetIntersectingSlicesInteractive", PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesInteractive, METH_VARARGS,
   "GetIntersectingSlicesInteractive(self) -> bool\nC++: virtual bool GetIntersectingSlicesInteractive()\n\nToggles interaction with slice intersections\n"},
  {"SetIntersectingSlicesInteractive", PyvtkMRMLSliceDisplayNode_SetIntersectingSlicesInteractive, METH_VARARGS,
   "SetIntersectingSlicesInteractive(self, _arg:bool) -> None\nC++: virtual void SetIntersectingSlicesInteractive(bool _arg)\n\nToggles interaction with slice intersections\n"},
  {"IntersectingSlicesInteractiveOn", PyvtkMRMLSliceDisplayNode_IntersectingSlicesInteractiveOn, METH_VARARGS,
   "IntersectingSlicesInteractiveOn(self) -> None\nC++: virtual void IntersectingSlicesInteractiveOn()\n\nToggles interaction with slice intersections\n"},
  {"IntersectingSlicesInteractiveOff", PyvtkMRMLSliceDisplayNode_IntersectingSlicesInteractiveOff, METH_VARARGS,
   "IntersectingSlicesInteractiveOff(self) -> None\nC++: virtual void IntersectingSlicesInteractiveOff()\n\nToggles interaction with slice intersections\n"},
  {"GetIntersectingThickSlabInteractive", PyvtkMRMLSliceDisplayNode_GetIntersectingThickSlabInteractive, METH_VARARGS,
   "GetIntersectingThickSlabInteractive(self) -> bool\nC++: virtual bool GetIntersectingThickSlabInteractive()\n\nToggles interaction with thick slab intersections\n"},
  {"SetIntersectingThickSlabInteractive", PyvtkMRMLSliceDisplayNode_SetIntersectingThickSlabInteractive, METH_VARARGS,
   "SetIntersectingThickSlabInteractive(self, _arg:bool) -> None\nC++: virtual void SetIntersectingThickSlabInteractive(bool _arg)\n\nToggles interaction with thick slab intersections\n"},
  {"IntersectingThickSlabInteractiveOn", PyvtkMRMLSliceDisplayNode_IntersectingThickSlabInteractiveOn, METH_VARARGS,
   "IntersectingThickSlabInteractiveOn(self) -> None\nC++: virtual void IntersectingThickSlabInteractiveOn()\n\nToggles interaction with thick slab intersections\n"},
  {"IntersectingThickSlabInteractiveOff", PyvtkMRMLSliceDisplayNode_IntersectingThickSlabInteractiveOff, METH_VARARGS,
   "IntersectingThickSlabInteractiveOff(self) -> None\nC++: virtual void IntersectingThickSlabInteractiveOff()\n\nToggles interaction with thick slab intersections\n"},
  {"GetIntersectingSlicesTranslationEnabled", PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesTranslationEnabled, METH_VARARGS,
   "GetIntersectingSlicesTranslationEnabled(self) -> bool\nC++: virtual bool GetIntersectingSlicesTranslationEnabled()\n\nEnable/disable interaction handles\n"},
  {"SetIntersectingSlicesTranslationEnabled", PyvtkMRMLSliceDisplayNode_SetIntersectingSlicesTranslationEnabled, METH_VARARGS,
   "SetIntersectingSlicesTranslationEnabled(self, _arg:bool) -> None\nC++: virtual void SetIntersectingSlicesTranslationEnabled(\n    bool _arg)\n\nEnable/disable interaction handles\n"},
  {"IntersectingSlicesTranslationEnabledOn", PyvtkMRMLSliceDisplayNode_IntersectingSlicesTranslationEnabledOn, METH_VARARGS,
   "IntersectingSlicesTranslationEnabledOn(self) -> None\nC++: virtual void IntersectingSlicesTranslationEnabledOn()\n\nEnable/disable interaction handles\n"},
  {"IntersectingSlicesTranslationEnabledOff", PyvtkMRMLSliceDisplayNode_IntersectingSlicesTranslationEnabledOff, METH_VARARGS,
   "IntersectingSlicesTranslationEnabledOff(self) -> None\nC++: virtual void IntersectingSlicesTranslationEnabledOff()\n\nEnable/disable interaction handles\n"},
  {"GetIntersectingSlicesRotationEnabled", PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesRotationEnabled, METH_VARARGS,
   "GetIntersectingSlicesRotationEnabled(self) -> bool\nC++: virtual bool GetIntersectingSlicesRotationEnabled()\n\nEnable/disable interaction handles\n"},
  {"SetIntersectingSlicesRotationEnabled", PyvtkMRMLSliceDisplayNode_SetIntersectingSlicesRotationEnabled, METH_VARARGS,
   "SetIntersectingSlicesRotationEnabled(self, _arg:bool) -> None\nC++: virtual void SetIntersectingSlicesRotationEnabled(bool _arg)\n\nEnable/disable interaction handles\n"},
  {"IntersectingSlicesRotationEnabledOn", PyvtkMRMLSliceDisplayNode_IntersectingSlicesRotationEnabledOn, METH_VARARGS,
   "IntersectingSlicesRotationEnabledOn(self) -> None\nC++: virtual void IntersectingSlicesRotationEnabledOn()\n\nEnable/disable interaction handles\n"},
  {"IntersectingSlicesRotationEnabledOff", PyvtkMRMLSliceDisplayNode_IntersectingSlicesRotationEnabledOff, METH_VARARGS,
   "IntersectingSlicesRotationEnabledOff(self) -> None\nC++: virtual void IntersectingSlicesRotationEnabledOff()\n\nEnable/disable interaction handles\n"},
  {"SetIntersectingSlicesInteractiveModeEnabled", PyvtkMRMLSliceDisplayNode_SetIntersectingSlicesInteractiveModeEnabled, METH_VARARGS,
   "SetIntersectingSlicesInteractiveModeEnabled(self,\n    mode:IntersectingSlicesInteractiveMode, enabled:bool) -> None\nC++: void SetIntersectingSlicesInteractiveModeEnabled(\n    IntersectingSlicesInteractiveMode mode, bool enabled)\n\nEnable/disable interaction handles.\n\\sa IntersectingSlicesInteractiveMode,\n    SetIntersectingSlicesTranslationEnabled,\n    SetIntersectingSlicesRotationEnabled\n"},
  {"GetIntersectingSlicesInteractiveModeEnabled", PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesInteractiveModeEnabled, METH_VARARGS,
   "GetIntersectingSlicesInteractiveModeEnabled(self,\n    mode:IntersectingSlicesInteractiveMode) -> bool\nC++: bool GetIntersectingSlicesInteractiveModeEnabled(\n    IntersectingSlicesInteractiveMode mode)\n\nEnable/disable interaction handles.\n\\sa IntersectingSlicesInteractiveMode,\n    SetIntersectingSlicesTranslationEnabled,\n    SetIntersectingSlicesRotationEnabled\n"},
  {"GetIntersectingSlicesInteractiveHandlesVisibilityMode", PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesInteractiveHandlesVisibilityMode, METH_VARARGS,
   "GetIntersectingSlicesInteractiveHandlesVisibilityMode(self) -> int\nC++: virtual int GetIntersectingSlicesInteractiveHandlesVisibilityMode(\n    )\n\nGet/Set interaction handles visibility mode.\n\\sa HandlesVisibilityMode\n"},
  {"SetIntersectingSlicesInteractiveHandlesVisibilityMode", PyvtkMRMLSliceDisplayNode_SetIntersectingSlicesInteractiveHandlesVisibilityMode, METH_VARARGS,
   "SetIntersectingSlicesInteractiveHandlesVisibilityMode(self,\n    _arg:int) -> None\nC++: virtual void SetIntersectingSlicesInteractiveHandlesVisibilityMode(\n    int _arg)\n\nGet/Set interaction handles visibility mode.\n\\sa HandlesVisibilityMode\n"},
  {"GetIntersectingSlicesInteractiveHandlesVisibilityModeAsString", PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesInteractiveHandlesVisibilityModeAsString, METH_VARARGS,
   "GetIntersectingSlicesInteractiveHandlesVisibilityModeAsString(\n    id:int) -> str\nC++: static const char *GetIntersectingSlicesInteractiveHandlesVisibilityModeAsString(\n    int id)\n\nConvert between intersecting slices interactive handles\nvisibility mode ID and string.\n"},
  {"GetIntersectingSlicesInteractiveHandlesVisibilityModeFromString", PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesInteractiveHandlesVisibilityModeFromString, METH_VARARGS,
   "GetIntersectingSlicesInteractiveHandlesVisibilityModeFromString(\n    __a:str) -> int\nC++: static int GetIntersectingSlicesInteractiveHandlesVisibilityModeFromString(\n    const char *)\n\nConvert between intersecting slices interactive handles\nvisibility mode ID and string.\n"},
  {"GetIntersectingSlicesIntersectionMode", PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesIntersectionMode, METH_VARARGS,
   "GetIntersectingSlicesIntersectionMode(self) -> int\nC++: virtual int GetIntersectingSlicesIntersectionMode()\n\nGet/set intersection mode.\n\\sa IntersectionMode\n"},
  {"SetIntersectingSlicesIntersectionMode", PyvtkMRMLSliceDisplayNode_SetIntersectingSlicesIntersectionMode, METH_VARARGS,
   "SetIntersectingSlicesIntersectionMode(self, _arg:int) -> None\nC++: virtual void SetIntersectingSlicesIntersectionMode(int _arg)\n\nGet/set intersection mode.\n\\sa IntersectionMode\n"},
  {"GetIntersectingSlicesIntersectionModeAsString", PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesIntersectionModeAsString, METH_VARARGS,
   "GetIntersectingSlicesIntersectionModeAsString(id:int) -> str\nC++: static const char *GetIntersectingSlicesIntersectionModeAsString(\n    int id)\n\nConvert between intersecting slices intersection mode ID and\nstring.\n"},
  {"GetIntersectingSlicesIntersectionModeFromString", PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesIntersectionModeFromString, METH_VARARGS,
   "GetIntersectingSlicesIntersectionModeFromString(__a:str) -> int\nC++: static int GetIntersectingSlicesIntersectionModeFromString(\n    const char *)\n\nConvert between intersecting slices intersection mode ID and\nstring.\n"},
  {"GetIntersectingSlicesLineThicknessMode", PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesLineThicknessMode, METH_VARARGS,
   "GetIntersectingSlicesLineThicknessMode(self) -> int\nC++: virtual int GetIntersectingSlicesLineThicknessMode()\n\nGet/set line thickness mode.\n\\sa LineThicknessMode\n"},
  {"SetIntersectingSlicesLineThicknessMode", PyvtkMRMLSliceDisplayNode_SetIntersectingSlicesLineThicknessMode, METH_VARARGS,
   "SetIntersectingSlicesLineThicknessMode(self, _arg:int) -> None\nC++: virtual void SetIntersectingSlicesLineThicknessMode(int _arg)\n\nGet/set line thickness mode.\n\\sa LineThicknessMode\n"},
  {"GetIntersectingSlicesLineThicknessModeAsString", PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesLineThicknessModeAsString, METH_VARARGS,
   "GetIntersectingSlicesLineThicknessModeAsString(id:int) -> str\nC++: static const char *GetIntersectingSlicesLineThicknessModeAsString(\n    int id)\n\nConvert between intersecting slices line thickness mode ID and\nstring\n\\sa LineThicknessMode\n"},
  {"GetIntersectingSlicesLineThicknessModeFromString", PyvtkMRMLSliceDisplayNode_GetIntersectingSlicesLineThicknessModeFromString, METH_VARARGS,
   "GetIntersectingSlicesLineThicknessModeFromString(__a:str) -> int\nC++: static int GetIntersectingSlicesLineThicknessModeFromString(\n    const char *)\n\nConvert between intersecting slices line thickness mode ID and\nstring\n\\sa LineThicknessMode\n"},
  {"GetDefaultContextName", PyvtkMRMLSliceDisplayNode_GetDefaultContextName, METH_VARARGS,
   "GetDefaultContextName() -> str\nC++: static const std::string GetDefaultContextName()\n\nGet name of the default interaction context (typically the mouse)\n"},
  {"GetActiveComponentType", PyvtkMRMLSliceDisplayNode_GetActiveComponentType, METH_VARARGS,
   "GetActiveComponentType(self, context:str=...) -> int\nC++: int GetActiveComponentType(\n    std::string context=vtkMRMLSliceDisplayNode::GetDefaultContextName(\n    ))\n\nActive component (that the mouse or other interaction context is\nhovered over). This property is computed on-the-fly and saved to\nfile.\n\\param context Name of the interaction context. By default it is\n    empty string, meaning mouse.\n  Additional devices, such as virtual reality controllers can\nspecify additional context names.\n  This mechanism allows interacting with multiple markups at the\nsame time (user can grab\n  different markup points with each controller at the same time).\n\\sa ComponentType\n"},
  {"GetActiveComponentIndex", PyvtkMRMLSliceDisplayNode_GetActiveComponentIndex, METH_VARARGS,
   "GetActiveComponentIndex(self, context:str=...) -> int\nC++: int GetActiveComponentIndex(\n    std::string context=vtkMRMLSliceDisplayNode::GetDefaultContextName(\n    ))\n\nIndex of active component (that the mouse or other interaction\ncontext is hovered over). This property is computed on-the-fly\nand saved to file.\n\\param context Name of the interaction context. By default it is\n    empty string, meaning mouse\n"},
  {"SetActiveComponent", PyvtkMRMLSliceDisplayNode_SetActiveComponent, METH_VARARGS,
   "SetActiveComponent(self, componentType:int, componentIndex:int,\n    context:str=...) -> None\nC++: void SetActiveComponent(int componentType,\n    int componentIndex,\n    std::string context=vtkMRMLSliceDisplayNode::GetDefaultContextName(\n    ))\n\nSet active component type and index for interaction context\n(empty by default, meaning mouse)\n"},
  {"HasActiveComponent", PyvtkMRMLSliceDisplayNode_HasActiveComponent, METH_VARARGS,
   "HasActiveComponent(self) -> bool\nC++: bool HasActiveComponent()\n\nQuery if there is an active component for any interaction context\n"},
  {"GetActiveComponentInteractionContexts", PyvtkMRMLSliceDisplayNode_GetActiveComponentInteractionContexts, METH_VARARGS,
   "GetActiveComponentInteractionContexts(self) -> (str, ...)\nC++: std::vector<std::string> GetActiveComponentInteractionContexts(\n    )\n\nGet list of interaction context names that have active components\n\\return List of interaction context names that have active\n    components\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSliceDisplayNode_Doc =
  "vtkMRMLSliceDisplayNode - MRML node to store display properties of\nslice nodes.\n\n"
  "Superclass: vtkMRMLModelDisplayNode\n\n"
  "This node controls appearance of slice intersections in slice views\n"
  "and slices in 3D views.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSliceDisplayNode", // tp_name
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
  PyvtkMRMLSliceDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSliceDisplayNode_StaticNew()
{
  return vtkMRMLSliceDisplayNode::New();
}

PyObject *PyvtkMRMLSliceDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSliceDisplayNode_Type, PyvtkMRMLSliceDisplayNode_Methods,
    "vtkMRMLSliceDisplayNode",
 &PyvtkMRMLSliceDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLModelDisplayNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLSliceDisplayNode_IntersectingSlicesInteractiveMode_Type);
  PyVTKEnum_Add(&PyvtkMRMLSliceDisplayNode_IntersectingSlicesInteractiveMode_Type, "vtkMRMLSliceDisplayNode.IntersectingSlicesInteractiveMode");

  o = (PyObject *)&PyvtkMRMLSliceDisplayNode_IntersectingSlicesInteractiveMode_Type;
  if (PyDict_SetItemString(d, "IntersectingSlicesInteractiveMode", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLSliceDisplayNode_HandlesVisibilityMode_Type);
  PyVTKEnum_Add(&PyvtkMRMLSliceDisplayNode_HandlesVisibilityMode_Type, "vtkMRMLSliceDisplayNode.HandlesVisibilityMode");

  o = (PyObject *)&PyvtkMRMLSliceDisplayNode_HandlesVisibilityMode_Type;
  if (PyDict_SetItemString(d, "HandlesVisibilityMode", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLSliceDisplayNode_IntersectionMode_Type);
  PyVTKEnum_Add(&PyvtkMRMLSliceDisplayNode_IntersectionMode_Type, "vtkMRMLSliceDisplayNode.IntersectionMode");

  o = (PyObject *)&PyvtkMRMLSliceDisplayNode_IntersectionMode_Type;
  if (PyDict_SetItemString(d, "IntersectionMode", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLSliceDisplayNode_LineThicknessMode_Type);
  PyVTKEnum_Add(&PyvtkMRMLSliceDisplayNode_LineThicknessMode_Type, "vtkMRMLSliceDisplayNode.LineThicknessMode");

  o = (PyObject *)&PyvtkMRMLSliceDisplayNode_LineThicknessMode_Type;
  if (PyDict_SetItemString(d, "LineThicknessMode", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLSliceDisplayNode_ComponentType_Type);
  PyVTKEnum_Add(&PyvtkMRMLSliceDisplayNode_ComponentType_Type, "vtkMRMLSliceDisplayNode.ComponentType");

  o = (PyObject *)&PyvtkMRMLSliceDisplayNode_ComponentType_Type;
  if (PyDict_SetItemString(d, "ComponentType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkMRMLSliceDisplayNode::IntersectingSlicesInteractiveMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "ModeRotation", vtkMRMLSliceDisplayNode::ModeRotation },
        { "ModeTranslation", vtkMRMLSliceDisplayNode::ModeTranslation },
      };

    o = PyvtkMRMLSliceDisplayNode_IntersectingSlicesInteractiveMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkMRMLSliceDisplayNode::HandlesVisibilityMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "NeverVisible", vtkMRMLSliceDisplayNode::NeverVisible },
        { "NearbyVisible", vtkMRMLSliceDisplayNode::NearbyVisible },
        { "AlwaysVisible", vtkMRMLSliceDisplayNode::AlwaysVisible },
        { "HandlesVisibilityMode_Last", vtkMRMLSliceDisplayNode::HandlesVisibilityMode_Last },
      };

    o = PyvtkMRMLSliceDisplayNode_HandlesVisibilityMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMRMLSliceDisplayNode::IntersectionMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "SkipLineCrossings", vtkMRMLSliceDisplayNode::SkipLineCrossings },
        { "FullLines", vtkMRMLSliceDisplayNode::FullLines },
        { "IntersectionMode_Last", vtkMRMLSliceDisplayNode::IntersectionMode_Last },
      };

    o = PyvtkMRMLSliceDisplayNode_IntersectionMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkMRMLSliceDisplayNode::LineThicknessMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "FineLines", vtkMRMLSliceDisplayNode::FineLines },
        { "MediumLines", vtkMRMLSliceDisplayNode::MediumLines },
        { "ThickLines", vtkMRMLSliceDisplayNode::ThickLines },
        { "LineThicknessMode_Last", vtkMRMLSliceDisplayNode::LineThicknessMode_Last },
      };

    o = PyvtkMRMLSliceDisplayNode_LineThicknessMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkMRMLSliceDisplayNode::ComponentType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "ComponentNone", vtkMRMLSliceDisplayNode::ComponentNone },
        { "ComponentTranslateIntersectingSlicesHandle", vtkMRMLSliceDisplayNode::ComponentTranslateIntersectingSlicesHandle },
        { "ComponentRotateIntersectingSlicesHandle", vtkMRMLSliceDisplayNode::ComponentRotateIntersectingSlicesHandle },
        { "ComponentTranslateSingleIntersectingSliceHandle", vtkMRMLSliceDisplayNode::ComponentTranslateSingleIntersectingSliceHandle },
        { "ComponentSliceIntersection", vtkMRMLSliceDisplayNode::ComponentSliceIntersection },
        { "ComponentTranslateIntersectingThickSlabHandle", vtkMRMLSliceDisplayNode::ComponentTranslateIntersectingThickSlabHandle },
        { "Component_Last", vtkMRMLSliceDisplayNode::Component_Last },
      };

    o = PyvtkMRMLSliceDisplayNode_ComponentType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLSliceDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSliceDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSliceDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

