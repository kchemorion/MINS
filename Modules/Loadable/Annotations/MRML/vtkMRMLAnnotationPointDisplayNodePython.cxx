// python wrapper for vtkMRMLAnnotationPointDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLAnnotationPointDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLAnnotationPointDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLAnnotationPointDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAnnotationDisplayNode_ClassNew
extern "C" { PyObject *PyvtkMRMLAnnotationDisplayNode_ClassNew(); }
#define DECLARED_PyvtkMRMLAnnotationDisplayNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAnnotationPointDisplayNode_GlyphShapes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerAnnotationsModuleMRMLPython.vtkMRMLAnnotationPointDisplayNode.GlyphShapes", // tp_name
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
PyObject *PyvtkMRMLAnnotationPointDisplayNode_GlyphShapes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLAnnotationPointDisplayNode_GlyphShapes_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAnnotationPointDisplayNode_ProjectionFlag_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerAnnotationsModuleMRMLPython.vtkMRMLAnnotationPointDisplayNode.ProjectionFlag", // tp_name
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
PyObject *PyvtkMRMLAnnotationPointDisplayNode_ProjectionFlag_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLAnnotationPointDisplayNode_ProjectionFlag_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAnnotationPointDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLAnnotationPointDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLAnnotationPointDisplayNode *tempr = vtkMRMLAnnotationPointDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAnnotationPointDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLAnnotationPointDisplayNode::NewInstance());

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
PyvtkMRMLAnnotationPointDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLAnnotationPointDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLAnnotationPointDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLAnnotationPointDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

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
      op->vtkMRMLAnnotationPointDisplayNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLAnnotationPointDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

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
      op->vtkMRMLAnnotationPointDisplayNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

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
      op->vtkMRMLAnnotationPointDisplayNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLAnnotationPointDisplayNode_GetMinimumGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinimumGlyphType() :
      op->vtkMRMLAnnotationPointDisplayNode::GetMinimumGlyphType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_GetMaximumGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumGlyphType() :
      op->vtkMRMLAnnotationPointDisplayNode::GetMaximumGlyphType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_SetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

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
      op->vtkMRMLAnnotationPointDisplayNode::SetGlyphType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_GetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphType() :
      op->vtkMRMLAnnotationPointDisplayNode::GetGlyphType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_GlyphTypeIs3D_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GlyphTypeIs3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GlyphTypeIs3D(temp0) :
      op->vtkMRMLAnnotationPointDisplayNode::GlyphTypeIs3D(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_GlyphTypeIs3D_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GlyphTypeIs3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GlyphTypeIs3D() :
      op->vtkMRMLAnnotationPointDisplayNode::GlyphTypeIs3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_GlyphTypeIs3D(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLAnnotationPointDisplayNode_GlyphTypeIs3D_s1(self, args);
    case 0:
      return PyvtkMRMLAnnotationPointDisplayNode_GlyphTypeIs3D_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GlyphTypeIs3D");
  return nullptr;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_GetGlyphTypeAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGlyphTypeAsString() :
      op->vtkMRMLAnnotationPointDisplayNode::GetGlyphTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_GetGlyphTypeAsString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGlyphTypeAsString(temp0) :
      op->vtkMRMLAnnotationPointDisplayNode::GetGlyphTypeAsString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_GetGlyphTypeAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLAnnotationPointDisplayNode_GetGlyphTypeAsString_s1(self, args);
    case 1:
      return PyvtkMRMLAnnotationPointDisplayNode_GetGlyphTypeAsString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGlyphTypeAsString");
  return nullptr;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_SetGlyphTypeFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeFromString(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationPointDisplayNode::SetGlyphTypeFromString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_SetGlyphScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphScale(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationPointDisplayNode::SetGlyphScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_GetGlyphScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGlyphScale() :
      op->vtkMRMLAnnotationPointDisplayNode::GetGlyphScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_CreateBackup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateBackup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateBackup();
    }
    else
    {
      op->vtkMRMLAnnotationPointDisplayNode::CreateBackup();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_RestoreBackup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreBackup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestoreBackup();
    }
    else
    {
      op->vtkMRMLAnnotationPointDisplayNode::RestoreBackup();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_SliceProjectionUseFiducialColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionUseFiducialColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionUseFiducialColorOn();
    }
    else
    {
      op->vtkMRMLAnnotationPointDisplayNode::SliceProjectionUseFiducialColorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_SliceProjectionUseFiducialColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionUseFiducialColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionUseFiducialColorOff();
    }
    else
    {
      op->vtkMRMLAnnotationPointDisplayNode::SliceProjectionUseFiducialColorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_SliceProjectionOutlinedBehindSlicePlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionOutlinedBehindSlicePlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionOutlinedBehindSlicePlaneOn();
    }
    else
    {
      op->vtkMRMLAnnotationPointDisplayNode::SliceProjectionOutlinedBehindSlicePlaneOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationPointDisplayNode_SliceProjectionOutlinedBehindSlicePlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionOutlinedBehindSlicePlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationPointDisplayNode *op = static_cast<vtkMRMLAnnotationPointDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionOutlinedBehindSlicePlaneOff();
    }
    else
    {
      op->vtkMRMLAnnotationPointDisplayNode::SliceProjectionOutlinedBehindSlicePlaneOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLAnnotationPointDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLAnnotationPointDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLAnnotationPointDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLAnnotationPointDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLAnnotationPointDisplayNode\nC++: static vtkMRMLAnnotationPointDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLAnnotationPointDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLAnnotationPointDisplayNode\nC++: vtkMRMLAnnotationPointDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLAnnotationPointDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLAnnotationPointDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLAnnotationPointDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"Copy", PyvtkMRMLAnnotationPointDisplayNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLAnnotationPointDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Annotation)\n"},
  {"UpdateScene", PyvtkMRMLAnnotationPointDisplayNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data\n"},
  {"ProcessMRMLEvents", PyvtkMRMLAnnotationPointDisplayNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"GetMinimumGlyphType", PyvtkMRMLAnnotationPointDisplayNode_GetMinimumGlyphType, METH_VARARGS,
   "GetMinimumGlyphType(self) -> int\nC++: int GetMinimumGlyphType()\n\nReturn the min/max glyph types, for iterating over them in tcl\n"},
  {"GetMaximumGlyphType", PyvtkMRMLAnnotationPointDisplayNode_GetMaximumGlyphType, METH_VARARGS,
   "GetMaximumGlyphType(self) -> int\nC++: int GetMaximumGlyphType()\n\n"},
  {"SetGlyphType", PyvtkMRMLAnnotationPointDisplayNode_SetGlyphType, METH_VARARGS,
   "SetGlyphType(self, type:int) -> None\nC++: void SetGlyphType(int type)\n\nThe glyph type used to display this fiducial\n"},
  {"GetGlyphType", PyvtkMRMLAnnotationPointDisplayNode_GetGlyphType, METH_VARARGS,
   "GetGlyphType(self) -> int\nC++: virtual int GetGlyphType()\n\n"},
  {"GlyphTypeIs3D", PyvtkMRMLAnnotationPointDisplayNode_GlyphTypeIs3D, METH_VARARGS,
   "GlyphTypeIs3D(self, glyphType:int) -> int\nC++: int GlyphTypeIs3D(int glyphType)\nGlyphTypeIs3D(self) -> int\nC++: int GlyphTypeIs3D()\n\nReturns 1 if the type is a 3d one, 0 else\n"},
  {"GetGlyphTypeAsString", PyvtkMRMLAnnotationPointDisplayNode_GetGlyphTypeAsString, METH_VARARGS,
   "GetGlyphTypeAsString(self) -> str\nC++: const char *GetGlyphTypeAsString()\nGetGlyphTypeAsString(self, g:int) -> str\nC++: const char *GetGlyphTypeAsString(int g)\n\nReturn a string representing the glyph type, set it from a string\n"},
  {"SetGlyphTypeFromString", PyvtkMRMLAnnotationPointDisplayNode_SetGlyphTypeFromString, METH_VARARGS,
   "SetGlyphTypeFromString(self, glyphString:str) -> None\nC++: void SetGlyphTypeFromString(const char *glyphString)\n\n"},
  {"SetGlyphScale", PyvtkMRMLAnnotationPointDisplayNode_SetGlyphScale, METH_VARARGS,
   "SetGlyphScale(self, scale:float) -> None\nC++: void SetGlyphScale(double scale)\n\nGet/Set for Symbol scale\n vtkSetMacro(GlyphScale,double);\n"},
  {"GetGlyphScale", PyvtkMRMLAnnotationPointDisplayNode_GetGlyphScale, METH_VARARGS,
   "GetGlyphScale(self) -> float\nC++: virtual double GetGlyphScale()\n\n"},
  {"CreateBackup", PyvtkMRMLAnnotationPointDisplayNode_CreateBackup, METH_VARARGS,
   "CreateBackup(self) -> None\nC++: void CreateBackup() override;\n\nCreate a backup of this node and attach it.\n"},
  {"RestoreBackup", PyvtkMRMLAnnotationPointDisplayNode_RestoreBackup, METH_VARARGS,
   "RestoreBackup(self) -> None\nC++: void RestoreBackup() override;\n\nRestore an attached backup of this node.\n"},
  {"SliceProjectionUseFiducialColorOn", PyvtkMRMLAnnotationPointDisplayNode_SliceProjectionUseFiducialColorOn, METH_VARARGS,
   "SliceProjectionUseFiducialColorOn(self) -> None\nC++: void SliceProjectionUseFiducialColorOn()\n\nSet projection color as fiducial color\n\\sa SetProjectedColor\n"},
  {"SliceProjectionUseFiducialColorOff", PyvtkMRMLAnnotationPointDisplayNode_SliceProjectionUseFiducialColorOff, METH_VARARGS,
   "SliceProjectionUseFiducialColorOff(self) -> None\nC++: void SliceProjectionUseFiducialColorOff()\n\nManually set projection color\n\\sa SetProjectedColor\n"},
  {"SliceProjectionOutlinedBehindSlicePlaneOn", PyvtkMRMLAnnotationPointDisplayNode_SliceProjectionOutlinedBehindSlicePlaneOn, METH_VARARGS,
   "SliceProjectionOutlinedBehindSlicePlaneOn(self) -> None\nC++: void SliceProjectionOutlinedBehindSlicePlaneOn()\n\nSet projection's view different if under/over/in the plane\n\\sa SetProjectedColor\n"},
  {"SliceProjectionOutlinedBehindSlicePlaneOff", PyvtkMRMLAnnotationPointDisplayNode_SliceProjectionOutlinedBehindSlicePlaneOff, METH_VARARGS,
   "SliceProjectionOutlinedBehindSlicePlaneOff(self) -> None\nC++: void SliceProjectionOutlinedBehindSlicePlaneOff()\n\nSet projection's view the same if under/over/in the plane\n\\sa SetProjectedColor\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLAnnotationPointDisplayNode_Doc =
  "vtkMRMLAnnotationPointDisplayNode - MRML node to represent display\nproperties for tractography.\n\n"
  "Superclass: vtkMRMLAnnotationDisplayNode\n\n"
  "vtkMRMLAnnotationPointDisplayNode nodes store display properties of\n"
  "trajectories from tractography in diffusion MRI data, including color\n"
  "type (by bundle, by fiber, or by scalar invariants), display on/off\n"
  "for tensor glyphs and display of trajectory as a line or tube.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAnnotationPointDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerAnnotationsModuleMRMLPython.vtkMRMLAnnotationPointDisplayNode", // tp_name
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
  PyvtkMRMLAnnotationPointDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLAnnotationPointDisplayNode_StaticNew()
{
  return vtkMRMLAnnotationPointDisplayNode::New();
}

PyObject *PyvtkMRMLAnnotationPointDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLAnnotationPointDisplayNode_Type, PyvtkMRMLAnnotationPointDisplayNode_Methods,
    "vtkMRMLAnnotationPointDisplayNode",
 &PyvtkMRMLAnnotationPointDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAnnotationDisplayNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLAnnotationPointDisplayNode_GlyphShapes_Type);
  PyVTKEnum_Add(&PyvtkMRMLAnnotationPointDisplayNode_GlyphShapes_Type, "vtkMRMLAnnotationPointDisplayNode.GlyphShapes");

  o = (PyObject *)&PyvtkMRMLAnnotationPointDisplayNode_GlyphShapes_Type;
  if (PyDict_SetItemString(d, "GlyphShapes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLAnnotationPointDisplayNode_ProjectionFlag_Type);
  PyVTKEnum_Add(&PyvtkMRMLAnnotationPointDisplayNode_ProjectionFlag_Type, "vtkMRMLAnnotationPointDisplayNode.ProjectionFlag");

  o = (PyObject *)&PyvtkMRMLAnnotationPointDisplayNode_ProjectionFlag_Type;
  if (PyDict_SetItemString(d, "ProjectionFlag", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 16; c++)
  {
    typedef vtkMRMLAnnotationPointDisplayNode::GlyphShapes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[16] = {
        { "GlyphMin", vtkMRMLAnnotationPointDisplayNode::GlyphMin },
        { "Vertex2D", vtkMRMLAnnotationPointDisplayNode::Vertex2D },
        { "Dash2D", vtkMRMLAnnotationPointDisplayNode::Dash2D },
        { "Cross2D", vtkMRMLAnnotationPointDisplayNode::Cross2D },
        { "ThickCross2D", vtkMRMLAnnotationPointDisplayNode::ThickCross2D },
        { "Triangle2D", vtkMRMLAnnotationPointDisplayNode::Triangle2D },
        { "Square2D", vtkMRMLAnnotationPointDisplayNode::Square2D },
        { "Circle2D", vtkMRMLAnnotationPointDisplayNode::Circle2D },
        { "Diamond2D", vtkMRMLAnnotationPointDisplayNode::Diamond2D },
        { "Arrow2D", vtkMRMLAnnotationPointDisplayNode::Arrow2D },
        { "ThickArrow2D", vtkMRMLAnnotationPointDisplayNode::ThickArrow2D },
        { "HookedArrow2D", vtkMRMLAnnotationPointDisplayNode::HookedArrow2D },
        { "StarBurst2D", vtkMRMLAnnotationPointDisplayNode::StarBurst2D },
        { "Sphere3D", vtkMRMLAnnotationPointDisplayNode::Sphere3D },
        { "Diamond3D", vtkMRMLAnnotationPointDisplayNode::Diamond3D },
        { "GlyphMax", vtkMRMLAnnotationPointDisplayNode::GlyphMax },
      };

    o = PyvtkMRMLAnnotationPointDisplayNode_GlyphShapes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkMRMLAnnotationPointDisplayNode::ProjectionFlag cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "ProjectionUseFiducialColor", vtkMRMLAnnotationPointDisplayNode::ProjectionUseFiducialColor },
        { "ProjectionOutlinedBehindSlicePlane", vtkMRMLAnnotationPointDisplayNode::ProjectionOutlinedBehindSlicePlane },
      };

    o = PyvtkMRMLAnnotationPointDisplayNode_ProjectionFlag_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLAnnotationPointDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLAnnotationPointDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLAnnotationPointDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

