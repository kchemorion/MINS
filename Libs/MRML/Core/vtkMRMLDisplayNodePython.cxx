// python wrapper for vtkMRMLDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLNode_ClassNew
extern "C" { PyObject *PyvtkMRMLNode_ClassNew(); }
#define DECLARED_PyvtkMRMLNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLDisplayNode_RepresentationType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLDisplayNode.RepresentationType", // tp_name
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
PyObject *PyvtkMRMLDisplayNode_RepresentationType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLDisplayNode_RepresentationType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLDisplayNode_InterpolationType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLDisplayNode.InterpolationType", // tp_name
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
PyObject *PyvtkMRMLDisplayNode_InterpolationType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLDisplayNode_InterpolationType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLDisplayNode_ScalarRangeFlagType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLDisplayNode.ScalarRangeFlagType", // tp_name
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
PyObject *PyvtkMRMLDisplayNode_ScalarRangeFlagType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLDisplayNode_ScalarRangeFlagType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLDisplayNode_ShowModeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLDisplayNode.ShowModeType", // tp_name
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
PyObject *PyvtkMRMLDisplayNode_ShowModeType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLDisplayNode_ShowModeType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLDisplayNode *tempr = vtkMRMLDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLDisplayNode::NewInstance());

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
PyvtkMRMLDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetScalarRangeFlagTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetScalarRangeFlagTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLDisplayNode::GetScalarRangeFlagTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetScalarRangeFlagTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetScalarRangeFlagTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLDisplayNode::GetScalarRangeFlagTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetDisplayableNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayableNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDisplayableNode *tempr = (ap.IsBound() ?
      op->GetDisplayableNode() :
      op->vtkMRMLDisplayNode::GetDisplayableNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

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
      op->vtkMRMLDisplayNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLDisplayNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

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
      op->vtkMRMLDisplayNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLDisplayNode_SetSceneReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSceneReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSceneReferences();
    }
    else
    {
      op->vtkMRMLDisplayNode::SetSceneReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_UpdateReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateReferences();
    }
    else
    {
      op->vtkMRMLDisplayNode::UpdateReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

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
      op->vtkMRMLDisplayNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_UpdateReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateReferenceID(temp0, temp1);
    }
    else
    {
      op->vtkMRMLDisplayNode::UpdateReferenceID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

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
      op->vtkMRMLDisplayNode::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLDisplayNode_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

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
      op->vtkMRMLDisplayNode::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLDisplayNode_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLDisplayNode_SetColor_s1(self, args);
    case 1:
      return PyvtkMRMLDisplayNode_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLDisplayNode_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkMRMLDisplayNode::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetEdgeColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

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
      op->SetEdgeColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetEdgeColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLDisplayNode_SetEdgeColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeColor(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetEdgeColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLDisplayNode_SetEdgeColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLDisplayNode_SetEdgeColor_s1(self, args);
    case 1:
      return PyvtkMRMLDisplayNode_SetEdgeColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEdgeColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLDisplayNode_GetEdgeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetEdgeColor() :
      op->vtkMRMLDisplayNode::GetEdgeColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetSelectedColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

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
      op->SetSelectedColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetSelectedColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLDisplayNode_SetSelectedColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedColor(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetSelectedColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLDisplayNode_SetSelectedColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLDisplayNode_SetSelectedColor_s1(self, args);
    case 1:
      return PyvtkMRMLDisplayNode_SetSelectedColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectedColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLDisplayNode_GetSelectedColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSelectedColor() :
      op->vtkMRMLDisplayNode::GetSelectedColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetSelectedAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedAmbient(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetSelectedAmbient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetSelectedAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSelectedAmbient() :
      op->vtkMRMLDisplayNode::GetSelectedAmbient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetSelectedSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedSpecular(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetSelectedSpecular(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetSelectedSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSelectedSpecular() :
      op->vtkMRMLDisplayNode::GetSelectedSpecular());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointSize(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPointSize() :
      op->vtkMRMLDisplayNode::GetPointSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  double temp0;
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
      op->vtkMRMLDisplayNode::SetLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineWidth() :
      op->vtkMRMLDisplayNode::GetLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtkMRMLDisplayNode::GetRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

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
      op->vtkMRMLDisplayNode::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkMRMLDisplayNode::GetOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetSliceIntersectionOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceIntersectionOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceIntersectionOpacity(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetSliceIntersectionOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetSliceIntersectionOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceIntersectionOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSliceIntersectionOpacity() :
      op->vtkMRMLDisplayNode::GetSliceIntersectionOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAmbient(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetAmbient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmbient() :
      op->vtkMRMLDisplayNode::GetAmbient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiffuse(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetDiffuse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffuse() :
      op->vtkMRMLDisplayNode::GetDiffuse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpecular(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetSpecular(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecular() :
      op->vtkMRMLDisplayNode::GetSpecular());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPower(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetPower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPower() :
      op->vtkMRMLDisplayNode::GetPower());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetMetallic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMetallic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMetallic(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetMetallic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetMetallic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetallic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMetallic() :
      op->vtkMRMLDisplayNode::GetMetallic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetRoughness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRoughness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRoughness(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetRoughness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetRoughness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRoughness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRoughness() :
      op->vtkMRMLDisplayNode::GetRoughness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

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
      op->vtkMRMLDisplayNode::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVisibility() :
      op->vtkMRMLDisplayNode::GetVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLDisplayNode_GetVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVisibility(temp0) :
      op->vtkMRMLDisplayNode::GetVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLDisplayNode_GetVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLDisplayNode_GetVisibility_s1(self, args);
    case 1:
      return PyvtkMRMLDisplayNode_GetVisibility_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVisibility");
  return nullptr;
}


static PyObject *
PyvtkMRMLDisplayNode_VisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VisibilityOn();
    }
    else
    {
      op->vtkMRMLDisplayNode::VisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_VisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VisibilityOff();
    }
    else
    {
      op->vtkMRMLDisplayNode::VisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetVisibility2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility2D(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetVisibility2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetVisibility2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVisibility2D() :
      op->vtkMRMLDisplayNode::GetVisibility2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_Visibility2DOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Visibility2DOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Visibility2DOn();
    }
    else
    {
      op->vtkMRMLDisplayNode::Visibility2DOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_Visibility2DOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Visibility2DOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Visibility2DOff();
    }
    else
    {
      op->vtkMRMLDisplayNode::Visibility2DOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetVisibility3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility3D(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetVisibility3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetVisibility3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVisibility3D() :
      op->vtkMRMLDisplayNode::GetVisibility3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_Visibility3DOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Visibility3DOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Visibility3DOn();
    }
    else
    {
      op->vtkMRMLDisplayNode::Visibility3DOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_Visibility3DOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Visibility3DOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Visibility3DOff();
    }
    else
    {
      op->vtkMRMLDisplayNode::Visibility3DOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeVisibility(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetEdgeVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_EdgeVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeVisibilityOn();
    }
    else
    {
      op->vtkMRMLDisplayNode::EdgeVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_EdgeVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeVisibilityOff();
    }
    else
    {
      op->vtkMRMLDisplayNode::EdgeVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEdgeVisibility() :
      op->vtkMRMLDisplayNode::GetEdgeVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClipping(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClipping() :
      op->vtkMRMLDisplayNode::GetClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_ClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClippingOn();
    }
    else
    {
      op->vtkMRMLDisplayNode::ClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_ClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClippingOff();
    }
    else
    {
      op->vtkMRMLDisplayNode::ClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetSliceIntersectionVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceIntersectionVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceIntersectionVisibility(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetSliceIntersectionVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetSliceIntersectionVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceIntersectionVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceIntersectionVisibility() :
      op->vtkMRMLDisplayNode::GetSliceIntersectionVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SliceIntersectionVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceIntersectionVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceIntersectionVisibilityOn();
    }
    else
    {
      op->vtkMRMLDisplayNode::SliceIntersectionVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SliceIntersectionVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceIntersectionVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceIntersectionVisibilityOff();
    }
    else
    {
      op->vtkMRMLDisplayNode::SliceIntersectionVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetSliceIntersectionThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceIntersectionThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceIntersectionThickness(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetSliceIntersectionThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetSliceIntersectionThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceIntersectionThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceIntersectionThickness() :
      op->vtkMRMLDisplayNode::GetSliceIntersectionThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetFrontfaceCulling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrontfaceCulling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrontfaceCulling(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetFrontfaceCulling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetFrontfaceCulling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontfaceCulling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFrontfaceCulling() :
      op->vtkMRMLDisplayNode::GetFrontfaceCulling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_FrontfaceCullingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrontfaceCullingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FrontfaceCullingOn();
    }
    else
    {
      op->vtkMRMLDisplayNode::FrontfaceCullingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_FrontfaceCullingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrontfaceCullingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FrontfaceCullingOff();
    }
    else
    {
      op->vtkMRMLDisplayNode::FrontfaceCullingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetBackfaceCulling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackfaceCulling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackfaceCulling(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetBackfaceCulling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetBackfaceCulling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackfaceCulling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBackfaceCulling() :
      op->vtkMRMLDisplayNode::GetBackfaceCulling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_BackfaceCullingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackfaceCullingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackfaceCullingOn();
    }
    else
    {
      op->vtkMRMLDisplayNode::BackfaceCullingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_BackfaceCullingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackfaceCullingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackfaceCullingOff();
    }
    else
    {
      op->vtkMRMLDisplayNode::BackfaceCullingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLighting(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetLighting(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLighting() :
      op->vtkMRMLDisplayNode::GetLighting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_LightingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LightingOn();
    }
    else
    {
      op->vtkMRMLDisplayNode::LightingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_LightingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LightingOff();
    }
    else
    {
      op->vtkMRMLDisplayNode::LightingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolation(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetInterpolation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolation() :
      op->vtkMRMLDisplayNode::GetInterpolation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetShading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShading(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetShading(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetShading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShading() :
      op->vtkMRMLDisplayNode::GetShading());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarVisibility(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetScalarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarVisibility() :
      op->vtkMRMLDisplayNode::GetScalarVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_ScalarVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOn();
    }
    else
    {
      op->vtkMRMLDisplayNode::ScalarVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_ScalarVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOff();
    }
    else
    {
      op->vtkMRMLDisplayNode::ScalarVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetVectorVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorVisibility(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetVectorVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetVectorVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorVisibility() :
      op->vtkMRMLDisplayNode::GetVectorVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_VectorVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VectorVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VectorVisibilityOn();
    }
    else
    {
      op->vtkMRMLDisplayNode::VectorVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_VectorVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VectorVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VectorVisibilityOff();
    }
    else
    {
      op->vtkMRMLDisplayNode::VectorVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetTensorVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTensorVisibility(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetTensorVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetTensorVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTensorVisibility() :
      op->vtkMRMLDisplayNode::GetTensorVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_TensorVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TensorVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TensorVisibilityOn();
    }
    else
    {
      op->vtkMRMLDisplayNode::TensorVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_TensorVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TensorVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TensorVisibilityOff();
    }
    else
    {
      op->vtkMRMLDisplayNode::TensorVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetAutoScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoScalarRange(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetAutoScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetAutoScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoScalarRange() :
      op->vtkMRMLDisplayNode::GetAutoScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_AutoScalarRangeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoScalarRangeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoScalarRangeOn();
    }
    else
    {
      op->vtkMRMLDisplayNode::AutoScalarRangeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_AutoScalarRangeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoScalarRangeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoScalarRangeOff();
    }
    else
    {
      op->vtkMRMLDisplayNode::AutoScalarRangeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_UpdateAssignedAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAssignedAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateAssignedAttribute();
    }
    else
    {
      op->vtkMRMLDisplayNode::UpdateAssignedAttribute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_UpdateScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateScalarRange();
    }
    else
    {
      op->vtkMRMLDisplayNode::UpdateScalarRange();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0, temp1);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLDisplayNode_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLDisplayNode_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLDisplayNode_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkMRMLDisplayNode_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}


static PyObject *
PyvtkMRMLDisplayNode_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkMRMLDisplayNode::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetScalarRangeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRangeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarRangeFlag(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetScalarRangeFlag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetScalarRangeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRangeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarRangeFlag() :
      op->vtkMRMLDisplayNode::GetScalarRangeFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetScalarRangeFlagAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRangeFlagAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarRangeFlagAsString() :
      op->vtkMRMLDisplayNode::GetScalarRangeFlagAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetScalarRangeFlagFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRangeFlagFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarRangeFlagFromString(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetScalarRangeFlagFromString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetFolderDisplayOverrideAllowed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFolderDisplayOverrideAllowed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFolderDisplayOverrideAllowed(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetFolderDisplayOverrideAllowed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetFolderDisplayOverrideAllowed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFolderDisplayOverrideAllowed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFolderDisplayOverrideAllowed() :
      op->vtkMRMLDisplayNode::GetFolderDisplayOverrideAllowed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_FolderDisplayOverrideAllowedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FolderDisplayOverrideAllowedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FolderDisplayOverrideAllowedOn();
    }
    else
    {
      op->vtkMRMLDisplayNode::FolderDisplayOverrideAllowedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_FolderDisplayOverrideAllowedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FolderDisplayOverrideAllowedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FolderDisplayOverrideAllowedOff();
    }
    else
    {
      op->vtkMRMLDisplayNode::FolderDisplayOverrideAllowedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetShowMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowMode(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetShowMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetShowMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowMode() :
      op->vtkMRMLDisplayNode::GetShowMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_IsShowModeDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsShowModeDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsShowModeDefault() :
      op->vtkMRMLDisplayNode::IsShowModeDefault());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetShowModeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetShowModeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLDisplayNode::GetShowModeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetShowModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetShowModeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLDisplayNode::GetShowModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetTextureImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetTextureImageDataConnection(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetTextureImageDataConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetTextureImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetTextureImageDataConnection() :
      op->vtkMRMLDisplayNode::GetTextureImageDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetInterpolateTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolateTexture(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetInterpolateTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetInterpolateTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolateTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolateTexture() :
      op->vtkMRMLDisplayNode::GetInterpolateTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_InterpolateTextureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTextureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateTextureOn();
    }
    else
    {
      op->vtkMRMLDisplayNode::InterpolateTextureOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_InterpolateTextureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTextureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateTextureOff();
    }
    else
    {
      op->vtkMRMLDisplayNode::InterpolateTextureOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetAndObserveColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveColorNodeID(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetAndObserveColorNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetColorNodeID() :
      op->vtkMRMLDisplayNode::GetColorNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetColorNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLColorNode *tempr = (ap.IsBound() ?
      op->GetColorNode() :
      op->vtkMRMLDisplayNode::GetColorNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetActiveScalarName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveScalarName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveScalarName(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetActiveScalarName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetActiveScalarName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveScalarName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetActiveScalarName() :
      op->vtkMRMLDisplayNode::GetActiveScalarName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetActiveAttributeLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveAttributeLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveAttributeLocation(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetActiveAttributeLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetActiveAttributeLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveAttributeLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveAttributeLocation() :
      op->vtkMRMLDisplayNode::GetActiveAttributeLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetActiveAttributeLocationAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveAttributeLocationAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetActiveAttributeLocationAsString() :
      op->vtkMRMLDisplayNode::GetActiveAttributeLocationAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetActiveAttributeLocationFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveAttributeLocationFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveAttributeLocationFromString(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetActiveAttributeLocationFromString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetActiveScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetActiveScalar(temp0, temp1);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetActiveScalar(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetScalarDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetScalarDataSet() :
      op->vtkMRMLDisplayNode::GetScalarDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetActiveScalarArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetActiveScalarArray() :
      op->vtkMRMLDisplayNode::GetActiveScalarArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_AddViewNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddViewNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddViewNodeID(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::AddViewNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_RemoveViewNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveViewNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->RemoveViewNodeID(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::RemoveViewNodeID(temp0);
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
PyvtkMRMLDisplayNode_RemoveAllViewNodeIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllViewNodeIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllViewNodeIDs();
    }
    else
    {
      op->vtkMRMLDisplayNode::RemoveAllViewNodeIDs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetNumberOfViewNodeIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfViewNodeIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfViewNodeIDs() :
      op->vtkMRMLDisplayNode::GetNumberOfViewNodeIDs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetNthViewNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthViewNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthViewNodeID(temp0) :
      op->vtkMRMLDisplayNode::GetNthViewNodeID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetViewNodeIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewNodeIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetViewNodeIDs() :
      op->vtkMRMLDisplayNode::GetViewNodeIDs());

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
PyvtkMRMLDisplayNode_IsViewNodeIDPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsViewNodeIDPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsViewNodeIDPresent(temp0) :
      op->vtkMRMLDisplayNode::IsViewNodeIDPresent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_IsDisplayableInView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDisplayableInView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDisplayableInView(temp0) :
      op->vtkMRMLDisplayNode::IsDisplayableInView(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetDisplayableOnlyInView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayableOnlyInView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayableOnlyInView(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetDisplayableOnlyInView(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_SetViewNodeIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewNodeIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayNode *op = static_cast<vtkMRMLDisplayNode *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->SetViewNodeIDs(temp0);
    }
    else
    {
      op->vtkMRMLDisplayNode::SetViewNodeIDs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetAttributeLocationAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAttributeLocationAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLDisplayNode::GetAttributeLocationAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetAttributeLocationFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAttributeLocationFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLDisplayNode::GetAttributeLocationFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_GetTextPropertyAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTextPropertyAsString");

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    std::string tempr = vtkMRMLDisplayNode::GetTextPropertyAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayNode_UpdateTextPropertyFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UpdateTextPropertyFromString");

  std::string temp0;
  vtkTextProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty"))
  {
    vtkMRMLDisplayNode::UpdateTextPropertyFromString(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLDisplayNode\nC++: static vtkMRMLDisplayNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLDisplayNode\nC++: vtkMRMLDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetScalarRangeFlagTypeAsString", PyvtkMRMLDisplayNode_GetScalarRangeFlagTypeAsString, METH_VARARGS,
   "GetScalarRangeFlagTypeAsString(flag:int) -> str\nC++: static const char *GetScalarRangeFlagTypeAsString(int flag)\n\nConvert between scalar range flag type id and string\n\\sa ScalarRangeFlag\n"},
  {"GetScalarRangeFlagTypeFromString", PyvtkMRMLDisplayNode_GetScalarRangeFlagTypeFromString, METH_VARARGS,
   "GetScalarRangeFlagTypeFromString(name:str) -> int\nC++: static int GetScalarRangeFlagTypeFromString(const char *name)\n\nGets scalar range flag type from string\n"},
  {"GetDisplayableNode", PyvtkMRMLDisplayNode_GetDisplayableNode, METH_VARARGS,
   "GetDisplayableNode(self) -> vtkMRMLDisplayableNode\nC++: virtual vtkMRMLDisplayableNode *GetDisplayableNode()\n\nReturns the first displayable node that is associated to this\ndisplay node\n\\sa vtkMRMLDisplayableNode\n"},
  {"CopyContent", PyvtkMRMLDisplayNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLDisplayNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"ProcessMRMLEvents", PyvtkMRMLDisplayNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nPropagate ModifiedEvent generated by the texture image data or\nthe color node.\n\\sa TextureImageDataConnection, ColorNode\n"},
  {"SetSceneReferences", PyvtkMRMLDisplayNode_SetSceneReferences, METH_VARARGS,
   "SetSceneReferences(self) -> None\nC++: void SetSceneReferences() override;\n\nMark the color and views nodes as references.\n"},
  {"UpdateReferences", PyvtkMRMLDisplayNode_UpdateReferences, METH_VARARGS,
   "UpdateReferences(self) -> None\nC++: void UpdateReferences() override;\n\nUpdates this node if it depends on other nodes when the node is\ndeleted in the scene.\n"},
  {"UpdateScene", PyvtkMRMLDisplayNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data.\n"},
  {"UpdateReferenceID", PyvtkMRMLDisplayNode_UpdateReferenceID, METH_VARARGS,
   "UpdateReferenceID(self, oldID:str, newID:str) -> None\nC++: void UpdateReferenceID(const char *oldID, const char *newID)\n    override;\n\nUpdate the stored reference to another node in the scene.\n"},
  {"SetColor", PyvtkMRMLDisplayNode_SetColor, METH_VARARGS,
   "SetColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetColor(double _arg1, double _arg2,\n    double _arg3)\nSetColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetColor(const double _arg[3])\n\nSet the color of the display node.\n\\sa Color, GetColor()\n"},
  {"GetColor", PyvtkMRMLDisplayNode_GetColor, METH_VARARGS,
   "GetColor(self) -> (float, float, float)\nC++: virtual double *GetColor()\n\nGet the color of the display node.\n\\sa Color, SetColor()\n"},
  {"SetEdgeColor", PyvtkMRMLDisplayNode_SetEdgeColor, METH_VARARGS,
   "SetEdgeColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetEdgeColor(double _arg1, double _arg2,\n    double _arg3)\nSetEdgeColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetEdgeColor(const double _arg[3])\n\nSet the edge color of the display node.\n\\sa EdgeColor, GetEdgeColor()\n"},
  {"GetEdgeColor", PyvtkMRMLDisplayNode_GetEdgeColor, METH_VARARGS,
   "GetEdgeColor(self) -> (float, float, float)\nC++: virtual double *GetEdgeColor()\n\nGet the edge color of the display node.\n\\sa EdgeColor, SetEdgeColor()\n"},
  {"SetSelectedColor", PyvtkMRMLDisplayNode_SetSelectedColor, METH_VARARGS,
   "SetSelectedColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetSelectedColor(double _arg1, double _arg2,\n    double _arg3)\nSetSelectedColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetSelectedColor(const double _arg[3])\n\nSet the selected color of the display node.\n\\sa SelectedColor, GetSelectedColor()\n"},
  {"GetSelectedColor", PyvtkMRMLDisplayNode_GetSelectedColor, METH_VARARGS,
   "GetSelectedColor(self) -> (float, float, float)\nC++: virtual double *GetSelectedColor()\n\nGet the selected color of the display node.\n\\sa SelectedColor, SetSelectedColor()\n"},
  {"SetSelectedAmbient", PyvtkMRMLDisplayNode_SetSelectedAmbient, METH_VARARGS,
   "SetSelectedAmbient(self, _arg:float) -> None\nC++: virtual void SetSelectedAmbient(double _arg)\n\nSet the selected ambient coef of the display node.\n\\sa SelectedAmbient, GetSelectedAmbient()\n"},
  {"GetSelectedAmbient", PyvtkMRMLDisplayNode_GetSelectedAmbient, METH_VARARGS,
   "GetSelectedAmbient(self) -> float\nC++: virtual double GetSelectedAmbient()\n\nGet the selected ambient coef of the display node.\n\\sa SelectedAmbient, SetSelectedAmbient()\n"},
  {"SetSelectedSpecular", PyvtkMRMLDisplayNode_SetSelectedSpecular, METH_VARARGS,
   "SetSelectedSpecular(self, _arg:float) -> None\nC++: virtual void SetSelectedSpecular(double _arg)\n\nSet the selected specular coef of the display node.\n\\sa SelectedSpecular, GetSelectedSpecular()\n"},
  {"GetSelectedSpecular", PyvtkMRMLDisplayNode_GetSelectedSpecular, METH_VARARGS,
   "GetSelectedSpecular(self) -> float\nC++: virtual double GetSelectedSpecular()\n\nGet the selected specular coef of the display node.\n\\sa SelectedSpecular, SetSelectedSpecular()\n"},
  {"SetPointSize", PyvtkMRMLDisplayNode_SetPointSize, METH_VARARGS,
   "SetPointSize(self, _arg:float) -> None\nC++: virtual void SetPointSize(double _arg)\n\nSet the diameter of points.\n\\sa PointSize, GetPointSize()\n"},
  {"GetPointSize", PyvtkMRMLDisplayNode_GetPointSize, METH_VARARGS,
   "GetPointSize(self) -> float\nC++: virtual double GetPointSize()\n\nGet the diameter of points.\n\\sa PointSize, SetPointSize()\n"},
  {"SetLineWidth", PyvtkMRMLDisplayNode_SetLineWidth, METH_VARARGS,
   "SetLineWidth(self, _arg:float) -> None\nC++: virtual void SetLineWidth(double _arg)\n\nSet the width of lines.\n\\sa LineWidth, GetLineWidth()\n"},
  {"GetLineWidth", PyvtkMRMLDisplayNode_GetLineWidth, METH_VARARGS,
   "GetLineWidth(self) -> float\nC++: virtual double GetLineWidth()\n\nGet the widget of lines.\n\\sa LineWidth, SetLineWidth()\n"},
  {"SetRepresentation", PyvtkMRMLDisplayNode_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, _arg:int) -> None\nC++: virtual void SetRepresentation(int _arg)\n\nSet the representation of the surface.\n\\sa Representation, GetRepresentation()\n"},
  {"GetRepresentation", PyvtkMRMLDisplayNode_GetRepresentation, METH_VARARGS,
   "GetRepresentation(self) -> int\nC++: virtual int GetRepresentation()\n\nGet the representation of the surface.\n\\sa Representation, SetRepresentation()\n"},
  {"SetOpacity", PyvtkMRMLDisplayNode_SetOpacity, METH_VARARGS,
   "SetOpacity(self, _arg:float) -> None\nC++: virtual void SetOpacity(double _arg)\n\nSet the opacity coef of the display node.\n\\sa Opacity, GetOpacity()\n"},
  {"GetOpacity", PyvtkMRMLDisplayNode_GetOpacity, METH_VARARGS,
   "GetOpacity(self) -> float\nC++: virtual double GetOpacity()\n\nGet the opacity coef of the display node.\n\\sa Opacity, SetOpacity()\n"},
  {"SetSliceIntersectionOpacity", PyvtkMRMLDisplayNode_SetSliceIntersectionOpacity, METH_VARARGS,
   "SetSliceIntersectionOpacity(self, _arg:float) -> None\nC++: virtual void SetSliceIntersectionOpacity(double _arg)\n\nSet the slice intersection opacity coef of the display node.\n\\sa SliceIntersectionOpacity, GetSliceIntersectionOpacity()\n"},
  {"GetSliceIntersectionOpacity", PyvtkMRMLDisplayNode_GetSliceIntersectionOpacity, METH_VARARGS,
   "GetSliceIntersectionOpacity(self) -> float\nC++: virtual double GetSliceIntersectionOpacity()\n\nGet the slice intersection opacity coef of the display node.\n\\sa SliceIntersectionOpacity, SetSliceIntersectionOpacity()\n"},
  {"SetAmbient", PyvtkMRMLDisplayNode_SetAmbient, METH_VARARGS,
   "SetAmbient(self, _arg:float) -> None\nC++: virtual void SetAmbient(double _arg)\n\nSet the ambient coef of the display node.\n\\sa Ambient, GetAmbient()\n"},
  {"GetAmbient", PyvtkMRMLDisplayNode_GetAmbient, METH_VARARGS,
   "GetAmbient(self) -> float\nC++: virtual double GetAmbient()\n\nGet the ambient coef of the display node.\n\\sa Ambient, SetAmbient()\n"},
  {"SetDiffuse", PyvtkMRMLDisplayNode_SetDiffuse, METH_VARARGS,
   "SetDiffuse(self, _arg:float) -> None\nC++: virtual void SetDiffuse(double _arg)\n\nSet the diffuse coef of the display node.\n\\sa Diffuse, GetDiffuse()\n"},
  {"GetDiffuse", PyvtkMRMLDisplayNode_GetDiffuse, METH_VARARGS,
   "GetDiffuse(self) -> float\nC++: virtual double GetDiffuse()\n\nGet the diffuse coef of the display node.\n\\sa Diffuse, SetDiffuse()\n"},
  {"SetSpecular", PyvtkMRMLDisplayNode_SetSpecular, METH_VARARGS,
   "SetSpecular(self, _arg:float) -> None\nC++: virtual void SetSpecular(double _arg)\n\nSet the specular coef of the display node.\n\\sa Specular, GetSpecular()\n"},
  {"GetSpecular", PyvtkMRMLDisplayNode_GetSpecular, METH_VARARGS,
   "GetSpecular(self) -> float\nC++: virtual double GetSpecular()\n\nGet the specular coef of the display node.\n\\sa Specular, SetSpecular()\n"},
  {"SetPower", PyvtkMRMLDisplayNode_SetPower, METH_VARARGS,
   "SetPower(self, _arg:float) -> None\nC++: virtual void SetPower(double _arg)\n\nSet the specular power coef of the display node.\n\\sa Power, GetPower()\n"},
  {"GetPower", PyvtkMRMLDisplayNode_GetPower, METH_VARARGS,
   "GetPower(self) -> float\nC++: virtual double GetPower()\n\nGet the specular power coef of the display node.\n\\sa Power, SetPower()\n"},
  {"SetMetallic", PyvtkMRMLDisplayNode_SetMetallic, METH_VARARGS,
   "SetMetallic(self, _arg:float) -> None\nC++: virtual void SetMetallic(double _arg)\n\nThe metalness of the material; values range from 0.0 (non-metal)\nto 1.0 (metal). Only used in PBR interpolation mode.\n"},
  {"GetMetallic", PyvtkMRMLDisplayNode_GetMetallic, METH_VARARGS,
   "GetMetallic(self) -> float\nC++: virtual double GetMetallic()\n\nThe metalness of the material; values range from 0.0 (non-metal)\nto 1.0 (metal). Only used in PBR interpolation mode.\n"},
  {"SetRoughness", PyvtkMRMLDisplayNode_SetRoughness, METH_VARARGS,
   "SetRoughness(self, _arg:float) -> None\nC++: virtual void SetRoughness(double _arg)\n\nThe roughness of the material; values range from 0.0 (smooth) to\n1.0 (rough). Only used in PBR interpolation mode.\n"},
  {"GetRoughness", PyvtkMRMLDisplayNode_GetRoughness, METH_VARARGS,
   "GetRoughness(self) -> float\nC++: virtual double GetRoughness()\n\nThe roughness of the material; values range from 0.0 (smooth) to\n1.0 (rough). Only used in PBR interpolation mode.\n"},
  {"SetVisibility", PyvtkMRMLDisplayNode_SetVisibility, METH_VARARGS,
   "SetVisibility(self, _arg:int) -> None\nC++: virtual void SetVisibility(int _arg)\n\nSet the visibility of the display node.\n\\sa Visibility, GetVisibility(), VisibilityOn(), VisibilityOff()\n"},
  {"GetVisibility", PyvtkMRMLDisplayNode_GetVisibility, METH_VARARGS,
   "GetVisibility(self) -> int\nC++: virtual int GetVisibility()\nGetVisibility(self, viewNodeID:str) -> bool\nC++: virtual bool GetVisibility(const char *viewNodeID)\n\nGet the visibility of the display node.\n\\sa Visibility, SetVisibility(), VisibilityOn(), VisibilityOff()\n"},
  {"VisibilityOn", PyvtkMRMLDisplayNode_VisibilityOn, METH_VARARGS,
   "VisibilityOn(self) -> None\nC++: virtual void VisibilityOn()\n\nSet the visibility of the display node.\n\\sa Visibility, SetVisibility(), GetVisibility(),\n"},
  {"VisibilityOff", PyvtkMRMLDisplayNode_VisibilityOff, METH_VARARGS,
   "VisibilityOff(self) -> None\nC++: virtual void VisibilityOff()\n\n"},
  {"SetVisibility2D", PyvtkMRMLDisplayNode_SetVisibility2D, METH_VARARGS,
   "SetVisibility2D(self, _arg:int) -> None\nC++: virtual void SetVisibility2D(int _arg)\n\nSet the 2D visibility of the display node.\n\\sa Visibility2D, GetVisibility2D(),\nVisibility2DOn(), Visibility2DOff()\n"},
  {"GetVisibility2D", PyvtkMRMLDisplayNode_GetVisibility2D, METH_VARARGS,
   "GetVisibility2D(self) -> int\nC++: virtual int GetVisibility2D()\n\nGet the 2D visibility of the display node.\n\\sa Visibility2D, SetVisibility2D(),\nVisibility2DOn(), Visibility2DOff()\n"},
  {"Visibility2DOn", PyvtkMRMLDisplayNode_Visibility2DOn, METH_VARARGS,
   "Visibility2DOn(self) -> None\nC++: virtual void Visibility2DOn()\n\nSet the 2D visibility of the display node.\n\\sa Visibility2D, SetVisibility2D(),\nGetVisibility2D(),\n"},
  {"Visibility2DOff", PyvtkMRMLDisplayNode_Visibility2DOff, METH_VARARGS,
   "Visibility2DOff(self) -> None\nC++: virtual void Visibility2DOff()\n\n"},
  {"SetVisibility3D", PyvtkMRMLDisplayNode_SetVisibility3D, METH_VARARGS,
   "SetVisibility3D(self, _arg:int) -> None\nC++: virtual void SetVisibility3D(int _arg)\n\nSet the 3D visibility of the display node.\n\\sa Visibility3D, GetVisibility3D(),\nVisibility3DOn(), Visibility3DOff()\n"},
  {"GetVisibility3D", PyvtkMRMLDisplayNode_GetVisibility3D, METH_VARARGS,
   "GetVisibility3D(self) -> int\nC++: virtual int GetVisibility3D()\n\nGet the 3D visibility of the display node.\n\\sa Visibility3D, SetVisibility3D(),\nVisibility3DOn(), Visibility3DOff()\n"},
  {"Visibility3DOn", PyvtkMRMLDisplayNode_Visibility3DOn, METH_VARARGS,
   "Visibility3DOn(self) -> None\nC++: virtual void Visibility3DOn()\n\nSet the 3D visibility of the display node.\n\\sa Visibility3D, SetVisibility3D(),\nGetVisibility3D(),\n"},
  {"Visibility3DOff", PyvtkMRMLDisplayNode_Visibility3DOff, METH_VARARGS,
   "Visibility3DOff(self) -> None\nC++: virtual void Visibility3DOff()\n\n"},
  {"SetEdgeVisibility", PyvtkMRMLDisplayNode_SetEdgeVisibility, METH_VARARGS,
   "SetEdgeVisibility(self, _arg:int) -> None\nC++: virtual void SetEdgeVisibility(int _arg)\n\nSet the visibility of the edges.\n\\sa EdgeVisibility, GetEdgeVisibility()\n"},
  {"EdgeVisibilityOn", PyvtkMRMLDisplayNode_EdgeVisibilityOn, METH_VARARGS,
   "EdgeVisibilityOn(self) -> None\nC++: virtual void EdgeVisibilityOn()\n\n"},
  {"EdgeVisibilityOff", PyvtkMRMLDisplayNode_EdgeVisibilityOff, METH_VARARGS,
   "EdgeVisibilityOff(self) -> None\nC++: virtual void EdgeVisibilityOff()\n\n"},
  {"GetEdgeVisibility", PyvtkMRMLDisplayNode_GetEdgeVisibility, METH_VARARGS,
   "GetEdgeVisibility(self) -> int\nC++: virtual int GetEdgeVisibility()\n\nGet the visibility of the edges.\n\\sa EdgeVisibility, SetEdgeVisibility()\n"},
  {"SetClipping", PyvtkMRMLDisplayNode_SetClipping, METH_VARARGS,
   "SetClipping(self, _arg:int) -> None\nC++: virtual void SetClipping(int _arg)\n\nSet the clipping of the display node.\n\\sa Clipping, GetClipping(), ClippingOn(), ClippingOff()\n"},
  {"GetClipping", PyvtkMRMLDisplayNode_GetClipping, METH_VARARGS,
   "GetClipping(self) -> int\nC++: virtual int GetClipping()\n\nGet the clipping of the display node.\n\\sa Clipping, SetClipping(), ClippingOn(), ClippingOff()\n"},
  {"ClippingOn", PyvtkMRMLDisplayNode_ClippingOn, METH_VARARGS,
   "ClippingOn(self) -> None\nC++: virtual void ClippingOn()\n\nSet the clipping of the display node.\n\\sa Clipping, SetClipping(), GetClipping()\n"},
  {"ClippingOff", PyvtkMRMLDisplayNode_ClippingOff, METH_VARARGS,
   "ClippingOff(self) -> None\nC++: virtual void ClippingOff()\n\n"},
  {"SetSliceIntersectionVisibility", PyvtkMRMLDisplayNode_SetSliceIntersectionVisibility, METH_VARARGS,
   "SetSliceIntersectionVisibility(self, on:int) -> None\nC++: void SetSliceIntersectionVisibility(int on)\n\nSet the slice intersection visibility of the display node.\nFunction to manage \\sa Visibility2D for backwards compatibility\n\\sa Visibility2D, GetSliceIntersectionVisibility(),\nSliceIntersectionVisibilityOn(),\nSliceIntersectionVisibilityOff()\\deprecated\nSetSliceIntersectionVisibility\n"},
  {"GetSliceIntersectionVisibility", PyvtkMRMLDisplayNode_GetSliceIntersectionVisibility, METH_VARARGS,
   "GetSliceIntersectionVisibility(self) -> int\nC++: int GetSliceIntersectionVisibility()\n\nGet the slice intersection visibility of the display node.\nFunction to manage \\sa Visibility2D for backwards compatibility\n\\sa Visibility2D, SetSliceIntersectionVisibility(),\nSliceIntersectionVisibilityOn(),\nSliceIntersectionVisibilityOff()\\deprecated\nGetSliceIntersectionVisibility\n"},
  {"SliceIntersectionVisibilityOn", PyvtkMRMLDisplayNode_SliceIntersectionVisibilityOn, METH_VARARGS,
   "SliceIntersectionVisibilityOn(self) -> None\nC++: void SliceIntersectionVisibilityOn()\n\nSet the slice intersection visibility of the display node.\nFunction to manage \\sa Visibility2D for backwards compatibility\n\\sa Visibility2D, SetSliceIntersectionVisibility(),\nGetSliceIntersectionVisibility(),\\deprecated\nSliceIntersectionVisibilityOn\n"},
  {"SliceIntersectionVisibilityOff", PyvtkMRMLDisplayNode_SliceIntersectionVisibilityOff, METH_VARARGS,
   "SliceIntersectionVisibilityOff(self) -> None\nC++: void SliceIntersectionVisibilityOff()\n\nSet the slice intersection visibility of the display node.\nFunction to manage \\sa Visibility2D for backwards compatibility\n\\sa Visibility2D, SetSliceIntersectionVisibility(),\nGetSliceIntersectionVisibility(),\\deprecated\nSliceIntersectionVisibilityOff\n"},
  {"SetSliceIntersectionThickness", PyvtkMRMLDisplayNode_SetSliceIntersectionThickness, METH_VARARGS,
   "SetSliceIntersectionThickness(self, _arg:int) -> None\nC++: virtual void SetSliceIntersectionThickness(int _arg)\n\nSet the slice intersection thickness of the display node. In\nvoxels.\n\\sa SliceIntersectionThickness, GetSliceIntersectionThickness()\n"},
  {"GetSliceIntersectionThickness", PyvtkMRMLDisplayNode_GetSliceIntersectionThickness, METH_VARARGS,
   "GetSliceIntersectionThickness(self) -> int\nC++: virtual int GetSliceIntersectionThickness()\n\nGet the slice intersection thickness of the display node. In\nvoxels.\n\\sa SliceIntersectionThickness, SetSliceIntersectionThickness()\n"},
  {"SetFrontfaceCulling", PyvtkMRMLDisplayNode_SetFrontfaceCulling, METH_VARARGS,
   "SetFrontfaceCulling(self, _arg:int) -> None\nC++: virtual void SetFrontfaceCulling(int _arg)\n\nEnable/disable rendering of cells facing the camera (frontface)\nor facing away from the camera (backface). By culling (excluding\nfrom rendering) rendering performance of very complex models may\nbe improved and it may also simplify appearance of\nsemitransparent models. However, if cells are not oriented\nconsistently then enabling culling may make a surface appear\nturned inside out or not just partially rendered. Disabled (all\nfaces are rendered) by default.\n"},
  {"GetFrontfaceCulling", PyvtkMRMLDisplayNode_GetFrontfaceCulling, METH_VARARGS,
   "GetFrontfaceCulling(self) -> int\nC++: virtual int GetFrontfaceCulling()\n\n"},
  {"FrontfaceCullingOn", PyvtkMRMLDisplayNode_FrontfaceCullingOn, METH_VARARGS,
   "FrontfaceCullingOn(self) -> None\nC++: virtual void FrontfaceCullingOn()\n\n"},
  {"FrontfaceCullingOff", PyvtkMRMLDisplayNode_FrontfaceCullingOff, METH_VARARGS,
   "FrontfaceCullingOff(self) -> None\nC++: virtual void FrontfaceCullingOff()\n\n"},
  {"SetBackfaceCulling", PyvtkMRMLDisplayNode_SetBackfaceCulling, METH_VARARGS,
   "SetBackfaceCulling(self, _arg:int) -> None\nC++: virtual void SetBackfaceCulling(int _arg)\n\n"},
  {"GetBackfaceCulling", PyvtkMRMLDisplayNode_GetBackfaceCulling, METH_VARARGS,
   "GetBackfaceCulling(self) -> int\nC++: virtual int GetBackfaceCulling()\n\n"},
  {"BackfaceCullingOn", PyvtkMRMLDisplayNode_BackfaceCullingOn, METH_VARARGS,
   "BackfaceCullingOn(self) -> None\nC++: virtual void BackfaceCullingOn()\n\n"},
  {"BackfaceCullingOff", PyvtkMRMLDisplayNode_BackfaceCullingOff, METH_VARARGS,
   "BackfaceCullingOff(self) -> None\nC++: virtual void BackfaceCullingOff()\n\n"},
  {"SetLighting", PyvtkMRMLDisplayNode_SetLighting, METH_VARARGS,
   "SetLighting(self, _arg:int) -> None\nC++: virtual void SetLighting(int _arg)\n\nEnable/Disable lighting of the display node.\n\\sa Lighting, GetLighting(), LightingOn(),\nLightingOff()\n"},
  {"GetLighting", PyvtkMRMLDisplayNode_GetLighting, METH_VARARGS,
   "GetLighting(self) -> int\nC++: virtual int GetLighting()\n\nGet the lighting of the display node.\n\\sa Lighting, SetLighting(), LightingOn(),\nLightingOff()\n"},
  {"LightingOn", PyvtkMRMLDisplayNode_LightingOn, METH_VARARGS,
   "LightingOn(self) -> None\nC++: virtual void LightingOn()\n\nEnable/Disable the lighting of the display node.\n\\sa Lighting, SetLighting(), GetLighting()\n"},
  {"LightingOff", PyvtkMRMLDisplayNode_LightingOff, METH_VARARGS,
   "LightingOff(self) -> None\nC++: virtual void LightingOff()\n\n"},
  {"SetInterpolation", PyvtkMRMLDisplayNode_SetInterpolation, METH_VARARGS,
   "SetInterpolation(self, _arg:int) -> None\nC++: virtual void SetInterpolation(int _arg)\n\nSet the interpolation of the surface.\n\\sa Interpolation, GetInterpolation()\n"},
  {"GetInterpolation", PyvtkMRMLDisplayNode_GetInterpolation, METH_VARARGS,
   "GetInterpolation(self) -> int\nC++: virtual int GetInterpolation()\n\nGet the interpolation of the surface.\n\\sa Interpolation, SetInterpolation()\n"},
  {"SetShading", PyvtkMRMLDisplayNode_SetShading, METH_VARARGS,
   "SetShading(self, _arg:int) -> None\nC++: virtual void SetShading(int _arg)\n\nSet the shading mode (None, Gouraud, Flat) of the display node.\n\\sa Shading, GetShading()\n"},
  {"GetShading", PyvtkMRMLDisplayNode_GetShading, METH_VARARGS,
   "GetShading(self) -> int\nC++: virtual int GetShading()\n\nGet the shading of the display node.\n\\sa Shading, SetShading()\n"},
  {"SetScalarVisibility", PyvtkMRMLDisplayNode_SetScalarVisibility, METH_VARARGS,
   "SetScalarVisibility(self, _arg:int) -> None\nC++: virtual void SetScalarVisibility(int _arg)\n\nSet the scalar visibility of the display node.\n\\sa ScalarVisibility, GetScalarVisibility(),\n    ScalarVisibilityOn(),\nScalarVisibilityOff()\n"},
  {"GetScalarVisibility", PyvtkMRMLDisplayNode_GetScalarVisibility, METH_VARARGS,
   "GetScalarVisibility(self) -> int\nC++: virtual int GetScalarVisibility()\n\nGet the scalar visibility of the display node.\n\\sa ScalarVisibility, SetScalarVisibility(),\n    ScalarVisibilityOn(),\nScalarVisibilityOff()\n"},
  {"ScalarVisibilityOn", PyvtkMRMLDisplayNode_ScalarVisibilityOn, METH_VARARGS,
   "ScalarVisibilityOn(self) -> None\nC++: virtual void ScalarVisibilityOn()\n\nSet the scalar visibility of the display node.\n\\sa ScalarVisibility, SetScalarVisibility(), GetScalarVisibility\n"},
  {"ScalarVisibilityOff", PyvtkMRMLDisplayNode_ScalarVisibilityOff, METH_VARARGS,
   "ScalarVisibilityOff(self) -> None\nC++: virtual void ScalarVisibilityOff()\n\n"},
  {"SetVectorVisibility", PyvtkMRMLDisplayNode_SetVectorVisibility, METH_VARARGS,
   "SetVectorVisibility(self, _arg:int) -> None\nC++: virtual void SetVectorVisibility(int _arg)\n\nSet the vector visibility of the display node.\n\\sa VectorVisibility, GetVectorVisibility(),\n    VectorVisibilityOn(),\nVectorVisibilityOff()\n"},
  {"GetVectorVisibility", PyvtkMRMLDisplayNode_GetVectorVisibility, METH_VARARGS,
   "GetVectorVisibility(self) -> int\nC++: virtual int GetVectorVisibility()\n\nGet the vector visibility of the display node.\n\\sa VectorVisibility, SetVectorVisibility(),\n    VectorVisibilityOn(),\nVectorVisibilityOff()\n"},
  {"VectorVisibilityOn", PyvtkMRMLDisplayNode_VectorVisibilityOn, METH_VARARGS,
   "VectorVisibilityOn(self) -> None\nC++: virtual void VectorVisibilityOn()\n\nSet the vector visibility of the display node.\n\\sa VectorVisibility, SetVectorVisibility(), GetVectorVisibility\n"},
  {"VectorVisibilityOff", PyvtkMRMLDisplayNode_VectorVisibilityOff, METH_VARARGS,
   "VectorVisibilityOff(self) -> None\nC++: virtual void VectorVisibilityOff()\n\n"},
  {"SetTensorVisibility", PyvtkMRMLDisplayNode_SetTensorVisibility, METH_VARARGS,
   "SetTensorVisibility(self, _arg:int) -> None\nC++: virtual void SetTensorVisibility(int _arg)\n\nSet the tensor visibility of the display node.\n\\sa TensorVisibility, GetTensorVisibility(),\n    TensorVisibilityOn(),\nTensorVisibilityOff()\n"},
  {"GetTensorVisibility", PyvtkMRMLDisplayNode_GetTensorVisibility, METH_VARARGS,
   "GetTensorVisibility(self) -> int\nC++: virtual int GetTensorVisibility()\n\nGet the tensor visibility of the display node.\n\\sa TensorVisibility, SetTensorVisibility(),\n    TensorVisibilityOn(),\nTensorVisibilityOff()\n"},
  {"TensorVisibilityOn", PyvtkMRMLDisplayNode_TensorVisibilityOn, METH_VARARGS,
   "TensorVisibilityOn(self) -> None\nC++: virtual void TensorVisibilityOn()\n\nSet the tensor visibility of the display node.\n\\sa TensorVisibility, SetTensorVisibility(), GetTensorVisibility\n"},
  {"TensorVisibilityOff", PyvtkMRMLDisplayNode_TensorVisibilityOff, METH_VARARGS,
   "TensorVisibilityOff(self) -> None\nC++: virtual void TensorVisibilityOff()\n\n"},
  {"SetAutoScalarRange", PyvtkMRMLDisplayNode_SetAutoScalarRange, METH_VARARGS,
   "SetAutoScalarRange(self, b:int) -> None\nC++: void SetAutoScalarRange(int b)\n\nSet the auto scalar range flag of the display node.\\deprecated\n\\sa SetScalarRangeFlag(), GetAutoScalarRange(),\n    AutoScalarRangeOn(),\nAutoScalarRangeOff()\n"},
  {"GetAutoScalarRange", PyvtkMRMLDisplayNode_GetAutoScalarRange, METH_VARARGS,
   "GetAutoScalarRange(self) -> int\nC++: int GetAutoScalarRange()\n\nGet the auto scalar range flag of the display node.\\deprecated\n\\sa GetScalarRangeFlag(), SetAutoScalarRange(),\n    AutoScalarRangeOn(),\nAutoScalarRangeOff()\n"},
  {"AutoScalarRangeOn", PyvtkMRMLDisplayNode_AutoScalarRangeOn, METH_VARARGS,
   "AutoScalarRangeOn(self) -> None\nC++: void AutoScalarRangeOn()\n\nSet the auto scalar range flag of the display node.\\deprecated\n\\sa SetScalarRangeFlag(), SetAutoScalarRange(),\n    GetAutoScalarRange()\n"},
  {"AutoScalarRangeOff", PyvtkMRMLDisplayNode_AutoScalarRangeOff, METH_VARARGS,
   "AutoScalarRangeOff(self) -> None\nC++: void AutoScalarRangeOff()\n\n"},
  {"UpdateAssignedAttribute", PyvtkMRMLDisplayNode_UpdateAssignedAttribute, METH_VARARGS,
   "UpdateAssignedAttribute(self) -> None\nC++: virtual void UpdateAssignedAttribute()\n\nUpdate the AssignAttribute filter based on its ActiveScalarName\nand its ActiveAttributeLocation To be re-implemented in\nsubclasses if scalar display is supported, to change active\nscalar and modify display pipeline if needed.\n"},
  {"UpdateScalarRange", PyvtkMRMLDisplayNode_UpdateScalarRange, METH_VARARGS,
   "UpdateScalarRange(self) -> None\nC++: virtual void UpdateScalarRange()\n\nUpdate the ScalarRange based on the \\sa ScalarRangeFlag. If \\sa\nUseManualScalarRange is selected then the method has no effect.\nTo be re-implemented in subclasses\n"},
  {"SetScalarRange", PyvtkMRMLDisplayNode_SetScalarRange, METH_VARARGS,
   "SetScalarRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetScalarRange(double _arg1, double _arg2)\nSetScalarRange(self, _arg:(float, float)) -> None\nC++: void SetScalarRange(const double _arg[2])\n\nSet the scalar range of the display node.\n\\sa ScalarRange, GetScalarRange()\n"},
  {"GetScalarRange", PyvtkMRMLDisplayNode_GetScalarRange, METH_VARARGS,
   "GetScalarRange(self) -> (float, float)\nC++: virtual double *GetScalarRange()\n\nGet the scalar range of the display node.\n\\sa ScalarRange, SetScalarRange()\n"},
  {"SetScalarRangeFlag", PyvtkMRMLDisplayNode_SetScalarRangeFlag, METH_VARARGS,
   "SetScalarRangeFlag(self, flag:int) -> None\nC++: virtual void SetScalarRangeFlag(int flag)\n\nSet the scalar range to use with color mapping\n\\sa ScalarRangeFlag, GetScalarRangeFlag(),\n    SetScalarRangeFlagFromString()\n\\sa SetActiveScalarName()\n"},
  {"GetScalarRangeFlag", PyvtkMRMLDisplayNode_GetScalarRangeFlag, METH_VARARGS,
   "GetScalarRangeFlag(self) -> int\nC++: virtual int GetScalarRangeFlag()\n\nGet the interpolation of the surface.\n\\sa ScalarRangeFlag, SetScalarRangeFlag(),\n    GetScalarRangeFlagAsString()\n"},
  {"GetScalarRangeFlagAsString", PyvtkMRMLDisplayNode_GetScalarRangeFlagAsString, METH_VARARGS,
   "GetScalarRangeFlagAsString(self) -> str\nC++: const char *GetScalarRangeFlagAsString()\n\nGet scalar range flag as string\n\\sa ScalarRangeFlag, GetScalarRangeFlag()\n"},
  {"SetScalarRangeFlagFromString", PyvtkMRMLDisplayNode_SetScalarRangeFlagFromString, METH_VARARGS,
   "SetScalarRangeFlagFromString(self, str:str) -> None\nC++: void SetScalarRangeFlagFromString(const char *str)\n\nSet scalar range flag from string\n\\sa ScalarRangeFlag, SetScalarRangeFlag()\n"},
  {"SetFolderDisplayOverrideAllowed", PyvtkMRMLDisplayNode_SetFolderDisplayOverrideAllowed, METH_VARARGS,
   "SetFolderDisplayOverrideAllowed(self, _arg:bool) -> None\nC++: virtual void SetFolderDisplayOverrideAllowed(bool _arg)\n\nSet flag determining whether folders are allowed to override\ndisplay properties.\n\\sa FolderDisplayOverrideAllowed,\n    GetFolderDisplayOverrideAllowed()\n"},
  {"GetFolderDisplayOverrideAllowed", PyvtkMRMLDisplayNode_GetFolderDisplayOverrideAllowed, METH_VARARGS,
   "GetFolderDisplayOverrideAllowed(self) -> bool\nC++: virtual bool GetFolderDisplayOverrideAllowed()\n\nGet flag determining whether folders are allowed to override\ndisplay properties.\n\\sa FolderDisplayOverrideAllowed,\n    SetFolderDisplayOverrideAllowed()\n"},
  {"FolderDisplayOverrideAllowedOn", PyvtkMRMLDisplayNode_FolderDisplayOverrideAllowedOn, METH_VARARGS,
   "FolderDisplayOverrideAllowedOn(self) -> None\nC++: virtual void FolderDisplayOverrideAllowedOn()\n\nSet flag determining whether folders are allowed to override\ndisplay properties.\n\\sa FolderDisplayOverrideAllowed,\n    SetFolderDisplayOverrideAllowed(),\n    GetFolderDisplayOverrideAllowed()\n"},
  {"FolderDisplayOverrideAllowedOff", PyvtkMRMLDisplayNode_FolderDisplayOverrideAllowedOff, METH_VARARGS,
   "FolderDisplayOverrideAllowedOff(self) -> None\nC++: virtual void FolderDisplayOverrideAllowedOff()\n\n"},
  {"SetShowMode", PyvtkMRMLDisplayNode_SetShowMode, METH_VARARGS,
   "SetShowMode(self, _arg:int) -> None\nC++: virtual void SetShowMode(int _arg)\n\nGet/set the behavior when the user requests showing of the\nassociated displayable node (for example, by clicking on the eye\nicon in the subject hierarchy tree). If set to ShowDefault then\nwhen the visibility as automatically adjusted according to the\nshow request. ShowDefault is recommended for most display nodes,\nfor example vtkMRMLModelDisplayNode for a vtkMRMLModelNode. If\nset to ShowIgnore then show request is ignored - visibility has\nto be set manually. ShowIgnore is useful for auxiliary display\nnodes, such as vtkMRMLColorLegendDisplayNode or\nvtkMRMLVolumeRenderingDisplayNode, which should only be shown if\nthe user has explicitly requested it, because rendering could\nunnecessarily clutter the view or would consume significant\ncomputing resources.\n"},
  {"GetShowMode", PyvtkMRMLDisplayNode_GetShowMode, METH_VARARGS,
   "GetShowMode(self) -> int\nC++: virtual int GetShowMode()\n\nGet/set the behavior when the user requests showing of the\nassociated displayable node (for example, by clicking on the eye\nicon in the subject hierarchy tree). If set to ShowDefault then\nwhen the visibility as automatically adjusted according to the\nshow request. ShowDefault is recommended for most display nodes,\nfor example vtkMRMLModelDisplayNode for a vtkMRMLModelNode. If\nset to ShowIgnore then show request is ignored - visibility has\nto be set manually. ShowIgnore is useful for auxiliary display\nnodes, such as vtkMRMLColorLegendDisplayNode or\nvtkMRMLVolumeRenderingDisplayNode, which should only be shown if\nthe user has explicitly requested it, because rendering could\nunnecessarily clutter the view or would consume significant\ncomputing resources.\n"},
  {"IsShowModeDefault", PyvtkMRMLDisplayNode_IsShowModeDefault, METH_VARARGS,
   "IsShowModeDefault(self) -> bool\nC++: bool IsShowModeDefault()\n\nGet/set the behavior when the user requests showing of the\nassociated displayable node (for example, by clicking on the eye\nicon in the subject hierarchy tree). If set to ShowDefault then\nwhen the visibility as automatically adjusted according to the\nshow request. ShowDefault is recommended for most display nodes,\nfor example vtkMRMLModelDisplayNode for a vtkMRMLModelNode. If\nset to ShowIgnore then show request is ignored - visibility has\nto be set manually. ShowIgnore is useful for auxiliary display\nnodes, such as vtkMRMLColorLegendDisplayNode or\nvtkMRMLVolumeRenderingDisplayNode, which should only be shown if\nthe user has explicitly requested it, because rendering could\nunnecessarily clutter the view or would consume significant\ncomputing resources.\n"},
  {"GetShowModeAsString", PyvtkMRMLDisplayNode_GetShowModeAsString, METH_VARARGS,
   "GetShowModeAsString(flag:int) -> str\nC++: static const char *GetShowModeAsString(int flag)\n\nConvert between ShowModeType and string\n\\sa SetShowMode\n"},
  {"GetShowModeFromString", PyvtkMRMLDisplayNode_GetShowModeFromString, METH_VARARGS,
   "GetShowModeFromString(name:str) -> int\nC++: static int GetShowModeFromString(const char *name)\n\nConvert between ShowModeType and string\n\\sa SetShowMode\n"},
  {"SetTextureImageDataConnection", PyvtkMRMLDisplayNode_SetTextureImageDataConnection, METH_VARARGS,
   "SetTextureImageDataConnection(self,\n    ImageDataConnection:vtkAlgorithmOutput) -> None\nC++: virtual void SetTextureImageDataConnection(\n    vtkAlgorithmOutput *ImageDataConnection)\n\nSet and observe the texture image data port.\n\\sa TextureImageDataConnection, GetTextureImageDataConnection()\n"},
  {"GetTextureImageDataConnection", PyvtkMRMLDisplayNode_GetTextureImageDataConnection, METH_VARARGS,
   "GetTextureImageDataConnection(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetTextureImageDataConnection()\n\nGet the texture image data port.\n\\sa TextureImageDataConnection, SetTextureImageDataConnection()\n"},
  {"SetInterpolateTexture", PyvtkMRMLDisplayNode_SetInterpolateTexture, METH_VARARGS,
   "SetInterpolateTexture(self, _arg:int) -> None\nC++: virtual void SetInterpolateTexture(int _arg)\n\nSet the texture interpolation of the display node.\n\\sa InterpolateTexture, GetInterpolateTexture(),\n    InterpolateTextureOn(),\nInterpolateTextureOff()\n"},
  {"GetInterpolateTexture", PyvtkMRMLDisplayNode_GetInterpolateTexture, METH_VARARGS,
   "GetInterpolateTexture(self) -> int\nC++: virtual int GetInterpolateTexture()\n\nGet the texture interpolation of the display node.\n\\sa InterpolateTexture, SetInterpolateTexture(),\n    InterpolateTextureOn(),\nInterpolateTextureOff()\n"},
  {"InterpolateTextureOn", PyvtkMRMLDisplayNode_InterpolateTextureOn, METH_VARARGS,
   "InterpolateTextureOn(self) -> None\nC++: virtual void InterpolateTextureOn()\n\nSet the texture interpolation of the display node.\n\\sa InterpolateTexture, SetInterpolateTexture(),\n    GetInterpolateTexture()\n"},
  {"InterpolateTextureOff", PyvtkMRMLDisplayNode_InterpolateTextureOff, METH_VARARGS,
   "InterpolateTextureOff(self) -> None\nC++: virtual void InterpolateTextureOff()\n\n"},
  {"SetAndObserveColorNodeID", PyvtkMRMLDisplayNode_SetAndObserveColorNodeID, METH_VARARGS,
   "SetAndObserveColorNodeID(self, ColorNodeID:str) -> None\nC++: void SetAndObserveColorNodeID(const std::string &ColorNodeID)\n\nSet and observe color node of the display node. Utility method\nthat conveniently takes a string instead of a char*\n\\sa ColorNodeID, GetColorNodeID()\n"},
  {"GetColorNodeID", PyvtkMRMLDisplayNode_GetColorNodeID, METH_VARARGS,
   "GetColorNodeID(self) -> str\nC++: virtual char *GetColorNodeID()\n\nGet color node ID of the display node.\n\\sa ColorNodeID, SetAndObserveColorNodeID()\n"},
  {"GetColorNode", PyvtkMRMLDisplayNode_GetColorNode, METH_VARARGS,
   "GetColorNode(self) -> vtkMRMLColorNode\nC++: virtual vtkMRMLColorNode *GetColorNode()\n\nGet associated color MRML node. Search the node into the scene if\nthe node hasn't been cached yet. This can be a slow call.\n\\sa ColorNodeID, SetAndObserveColorNodeID, GetColorNodeID()\n"},
  {"SetActiveScalarName", PyvtkMRMLDisplayNode_SetActiveScalarName, METH_VARARGS,
   "SetActiveScalarName(self, _arg:str) -> None\nC++: virtual void SetActiveScalarName(const char *_arg)\n\nSet the active scalar name of the display node.\n\\sa ActiveScalarName, GetActiveScalarName()\n"},
  {"GetActiveScalarName", PyvtkMRMLDisplayNode_GetActiveScalarName, METH_VARARGS,
   "GetActiveScalarName(self) -> str\nC++: virtual char *GetActiveScalarName()\n\nReturn the name of the currently active scalar field for this\nmodel.\n\\sa ActiveScalarName, SetActiveScalarName()\n"},
  {"SetActiveAttributeLocation", PyvtkMRMLDisplayNode_SetActiveAttributeLocation, METH_VARARGS,
   "SetActiveAttributeLocation(self, _arg:int) -> None\nC++: virtual void SetActiveAttributeLocation(int _arg)\n\nSet the active attribute location of the display node.\nvtkAssignAttribute::POINT_DATA by default.\n\\sa ActiveAttributeLocation, GetActiveAttributeLocation(),\n    SetActiveAttributeLocationFromString()\n"},
  {"GetActiveAttributeLocation", PyvtkMRMLDisplayNode_GetActiveAttributeLocation, METH_VARARGS,
   "GetActiveAttributeLocation(self) -> int\nC++: virtual int GetActiveAttributeLocation()\n\nGet the active attribute location of the display node.\n\\sa ActiveAttributeLocation, SetActiveAttributeLocation(),\n    GetActiveAttributeLocationAsString()\n"},
  {"GetActiveAttributeLocationAsString", PyvtkMRMLDisplayNode_GetActiveAttributeLocationAsString, METH_VARARGS,
   "GetActiveAttributeLocationAsString(self) -> str\nC++: const char *GetActiveAttributeLocationAsString()\n\nGet the active attribute location of the display node as string\n\\sa ActiveAttributeLocation, GetActiveAttributeLocation()\n"},
  {"SetActiveAttributeLocationFromString", PyvtkMRMLDisplayNode_SetActiveAttributeLocationFromString, METH_VARARGS,
   "SetActiveAttributeLocationFromString(self, str:str) -> None\nC++: void SetActiveAttributeLocationFromString(const char *str)\n\nSet the active attribute location of the display node from string\n\\sa ActiveAttributeLocation, SetActiveAttributeLocation()\n"},
  {"SetActiveScalar", PyvtkMRMLDisplayNode_SetActiveScalar, METH_VARARGS,
   "SetActiveScalar(self, scalarName:str, location:int) -> None\nC++: virtual void SetActiveScalar(const char *scalarName,\n    int location)\n\nSets active scalar name and attribute location in one step. It is\npreferable to use this method instead of calling\nSetActiveScalarName and SetActiveAttributeLocation separately, to\navoid transient states when scalar name and location are\ntemporarily inconsistent.\n"},
  {"GetScalarDataSet", PyvtkMRMLDisplayNode_GetScalarDataSet, METH_VARARGS,
   "GetScalarDataSet(self) -> vtkDataSet\nC++: virtual vtkDataSet *GetScalarDataSet()\n\nGet data set containing the scalar arrays for this node type. For\nexample for models it is the input mesh, and for markups the\ncurve poly data\n"},
  {"GetActiveScalarArray", PyvtkMRMLDisplayNode_GetActiveScalarArray, METH_VARARGS,
   "GetActiveScalarArray(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetActiveScalarArray()\n\nReturn the current active scalar array (based on active scalar\nname and location) To be re-implemented in subclasses based on\ntheir contained data\n"},
  {"AddViewNodeID", PyvtkMRMLDisplayNode_AddViewNodeID, METH_VARARGS,
   "AddViewNodeID(self, viewNodeID:str) -> None\nC++: void AddViewNodeID(const char *viewNodeID)\n\nAdd View Node ID for the view to display this node in.\n\\sa ViewNodeIDs, RemoveViewNodeID(), RemoveAllViewNodeIDs()\n"},
  {"RemoveViewNodeID", PyvtkMRMLDisplayNode_RemoveViewNodeID, METH_VARARGS,
   "RemoveViewNodeID(self, viewNodeID:str) -> None\nC++: void RemoveViewNodeID(char *viewNodeID)\n\nRemove View Node ID for the view to display this node in. Note\nthat if no view node IDs are specified then the displayable node\nwill be shown in every views. Therefore, to hide a displayable\nnode from a single view, it is not necessary to call\nRemoveViewNodeID (unless it had been explicitly added before) but\nall the other view node IDs must be added instead.\n\\sa ViewNodeIDs, AddViewNodeID(), RemoveAllViewNodeIDs()\n"},
  {"RemoveAllViewNodeIDs", PyvtkMRMLDisplayNode_RemoveAllViewNodeIDs, METH_VARARGS,
   "RemoveAllViewNodeIDs(self) -> None\nC++: void RemoveAllViewNodeIDs()\n\nRemove All View Node IDs for the views to display this node in.\n\\sa ViewNodeIDs, AddViewNodeID(), RemoveViewNodeID()\n"},
  {"GetNumberOfViewNodeIDs", PyvtkMRMLDisplayNode_GetNumberOfViewNodeIDs, METH_VARARGS,
   "GetNumberOfViewNodeIDs(self) -> int\nC++: int GetNumberOfViewNodeIDs()\n\nGet number of View Node ID's for the view to display this node\nin. If 0, display in all views\n\\sa ViewNodeIDs, GetViewNodeIDs(), AddViewNodeID()\n"},
  {"GetNthViewNodeID", PyvtkMRMLDisplayNode_GetNthViewNodeID, METH_VARARGS,
   "GetNthViewNodeID(self, index:int) -> str\nC++: const char *GetNthViewNodeID(unsigned int index)\n\nGet View Node ID's for the view to display this node in. If\nnullptr, display in all views\n\\sa ViewNodeIDs, GetViewNodeIDs(), AddViewNodeID()\n"},
  {"GetViewNodeIDs", PyvtkMRMLDisplayNode_GetViewNodeIDs, METH_VARARGS,
   "GetViewNodeIDs(self) -> (str, ...)\nC++: std::vector<std::string> GetViewNodeIDs()\n\nGet all View Node ID's for the view to display this node in. If\nempty, display in all views\n\\sa ViewNodeIDs, GetNthViewNodeID(), AddViewNodeID()\n"},
  {"IsViewNodeIDPresent", PyvtkMRMLDisplayNode_IsViewNodeIDPresent, METH_VARARGS,
   "IsViewNodeIDPresent(self, viewNodeID:str) -> bool\nC++: bool IsViewNodeIDPresent(const char *viewNodeID)\n\nTrue if the view node id is present in the viewNodeID list false\nif not found\n\\sa ViewNodeIDs, IsDisplayableInView(), AddViewNodeID()\n"},
  {"IsDisplayableInView", PyvtkMRMLDisplayNode_IsDisplayableInView, METH_VARARGS,
   "IsDisplayableInView(self, viewNodeID:str) -> bool\nC++: bool IsDisplayableInView(const char *viewNodeID)\n\nReturns true if the viewNodeID is present in the ViewNodeId list\nor there is no ViewNodeId in the list (meaning all the views\ndisplay the node)\n\\sa ViewNodeIDs, IsViewNodeIDPresent(), AddViewNodeID()\n"},
  {"SetDisplayableOnlyInView", PyvtkMRMLDisplayNode_SetDisplayableOnlyInView, METH_VARARGS,
   "SetDisplayableOnlyInView(self, viewNodeID:str) -> None\nC++: void SetDisplayableOnlyInView(const char *viewNodeID)\n\nSet the View Node ID as the only view to display this node in. If\nthe view node id does not exist, the node will show in all views.\nUses a disable/enable modified event block to avoid flicker.\n\\sa RemoveAllViewNodeIDs(), AddViewNodeID()\n"},
  {"SetViewNodeIDs", PyvtkMRMLDisplayNode_SetViewNodeIDs, METH_VARARGS,
   "SetViewNodeIDs(self, viewNodeIDs:(str, ...)) -> None\nC++: void SetViewNodeIDs(\n    const std::vector<std::string> &viewNodeIDs)\n\nSet all the view node IDs at once. Only trigger Modified() if the\nnew vector is different from the existing vector.\n\\sa GetViewNodeIDs(), AddViewNodeID()\n"},
  {"GetAttributeLocationAsString", PyvtkMRMLDisplayNode_GetAttributeLocationAsString, METH_VARARGS,
   "GetAttributeLocationAsString(id:int) -> str\nC++: static const char *GetAttributeLocationAsString(int id)\n\nConverts attribute location (point or cell data) to string\n"},
  {"GetAttributeLocationFromString", PyvtkMRMLDisplayNode_GetAttributeLocationFromString, METH_VARARGS,
   "GetAttributeLocationFromString(name:str) -> int\nC++: static int GetAttributeLocationFromString(const char *name)\n\nGets attribute location (point or cell data) from string\n"},
  {"GetTextPropertyAsString", PyvtkMRMLDisplayNode_GetTextPropertyAsString, METH_VARARGS,
   "GetTextPropertyAsString(property:vtkTextProperty) -> str\nC++: static std::string GetTextPropertyAsString(\n    vtkTextProperty *property)\n\nReturns a string containing the text style of the\nvtkTextProperty. String format follows html-style CSS\nconventions.\n"},
  {"UpdateTextPropertyFromString", PyvtkMRMLDisplayNode_UpdateTextPropertyFromString, METH_VARARGS,
   "UpdateTextPropertyFromString(inputString:str,\n    property:vtkTextProperty) -> None\nC++: static void UpdateTextPropertyFromString(\n    std::string inputString, vtkTextProperty *property)\n\nUpdate the style of a vtkTextProperty from a string. String\nformat follows html-style CSS conventions.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLDisplayNode_Doc =
  "vtkMRMLDisplayNode - Abstract class that contains graphical display\nproperties for displayable nodes.\n\n"
  "Superclass: vtkMRMLNode\n\n"
  "vtkMRMLDisplayNode fires a ModifiedEvent event when the texture image\n"
  "data or the color node is modified.\n"
  "\\sa vtkMRMLDisplayableNode, TextureImageDataConnection, ColorNode\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLDisplayNode", // tp_name
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
  PyvtkMRMLDisplayNode_Doc, // tp_doc
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

PyObject *PyvtkMRMLDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLDisplayNode_Type, PyvtkMRMLDisplayNode_Methods,
    "vtkMRMLDisplayNode",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLDisplayNode_RepresentationType_Type);
  PyVTKEnum_Add(&PyvtkMRMLDisplayNode_RepresentationType_Type, "vtkMRMLDisplayNode.RepresentationType");

  o = (PyObject *)&PyvtkMRMLDisplayNode_RepresentationType_Type;
  if (PyDict_SetItemString(d, "RepresentationType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLDisplayNode_InterpolationType_Type);
  PyVTKEnum_Add(&PyvtkMRMLDisplayNode_InterpolationType_Type, "vtkMRMLDisplayNode.InterpolationType");

  o = (PyObject *)&PyvtkMRMLDisplayNode_InterpolationType_Type;
  if (PyDict_SetItemString(d, "InterpolationType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLDisplayNode_ScalarRangeFlagType_Type);
  PyVTKEnum_Add(&PyvtkMRMLDisplayNode_ScalarRangeFlagType_Type, "vtkMRMLDisplayNode.ScalarRangeFlagType");

  o = (PyObject *)&PyvtkMRMLDisplayNode_ScalarRangeFlagType_Type;
  if (PyDict_SetItemString(d, "ScalarRangeFlagType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLDisplayNode_ShowModeType_Type);
  PyVTKEnum_Add(&PyvtkMRMLDisplayNode_ShowModeType_Type, "vtkMRMLDisplayNode.ShowModeType");

  o = (PyObject *)&PyvtkMRMLDisplayNode_ShowModeType_Type;
  if (PyDict_SetItemString(d, "ShowModeType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMRMLDisplayNode::RepresentationType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "PointsRepresentation", vtkMRMLDisplayNode::PointsRepresentation },
        { "WireframeRepresentation", vtkMRMLDisplayNode::WireframeRepresentation },
        { "SurfaceRepresentation", vtkMRMLDisplayNode::SurfaceRepresentation },
      };

    o = PyvtkMRMLDisplayNode_RepresentationType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkMRMLDisplayNode::InterpolationType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "FlatInterpolation", vtkMRMLDisplayNode::FlatInterpolation },
        { "GouraudInterpolation", vtkMRMLDisplayNode::GouraudInterpolation },
        { "PhongInterpolation", vtkMRMLDisplayNode::PhongInterpolation },
        { "PBRInterpolation", vtkMRMLDisplayNode::PBRInterpolation },
      };

    o = PyvtkMRMLDisplayNode_InterpolationType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkMRMLDisplayNode::ScalarRangeFlagType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "UseManualScalarRange", vtkMRMLDisplayNode::UseManualScalarRange },
        { "UseDataScalarRange", vtkMRMLDisplayNode::UseDataScalarRange },
        { "UseColorNodeScalarRange", vtkMRMLDisplayNode::UseColorNodeScalarRange },
        { "UseDataTypeScalarRange", vtkMRMLDisplayNode::UseDataTypeScalarRange },
        { "UseDirectMapping", vtkMRMLDisplayNode::UseDirectMapping },
        { "NUM_SCALAR_RANGE_FLAGS", vtkMRMLDisplayNode::NUM_SCALAR_RANGE_FLAGS },
      };

    o = PyvtkMRMLDisplayNode_ScalarRangeFlagType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMRMLDisplayNode::ShowModeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "ShowDefault", vtkMRMLDisplayNode::ShowDefault },
        { "ShowIgnore", vtkMRMLDisplayNode::ShowIgnore },
        { "ShowMode_Last", vtkMRMLDisplayNode::ShowMode_Last },
      };

    o = PyvtkMRMLDisplayNode_ShowModeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyLong_FromLong(vtkMRMLDisplayNode::MenuEvent);
  if (o)
  {
    PyDict_SetItemString(d, "MenuEvent", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

