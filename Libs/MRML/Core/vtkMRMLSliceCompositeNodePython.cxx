// python wrapper for vtkMRMLSliceCompositeNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSliceCompositeNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSliceCompositeNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSliceCompositeNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLNode_ClassNew
extern "C" { PyObject *PyvtkMRMLNode_ClassNew(); }
#define DECLARED_PyvtkMRMLNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceCompositeNode_InteractionFlagType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSliceCompositeNode.InteractionFlagType", // tp_name
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
PyObject *PyvtkMRMLSliceCompositeNode_InteractionFlagType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLSliceCompositeNode_InteractionFlagType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLSliceCompositeNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSliceCompositeNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSliceCompositeNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSliceCompositeNode *tempr = vtkMRMLSliceCompositeNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceCompositeNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSliceCompositeNode::NewInstance());

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
PyvtkMRMLSliceCompositeNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSliceCompositeNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSliceCompositeNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLSliceCompositeNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

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
      op->vtkMRMLSliceCompositeNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLSliceCompositeNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLSliceCompositeNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetBackgroundVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBackgroundVolumeID() :
      op->vtkMRMLSliceCompositeNode::GetBackgroundVolumeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetBackgroundVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundVolumeID(temp0);
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::SetBackgroundVolumeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetReferenceBackgroundVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceBackgroundVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceBackgroundVolumeID(temp0);
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::SetReferenceBackgroundVolumeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetForegroundVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForegroundVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetForegroundVolumeID() :
      op->vtkMRMLSliceCompositeNode::GetForegroundVolumeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetForegroundVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForegroundVolumeID(temp0);
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::SetForegroundVolumeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetReferenceForegroundVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceForegroundVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceForegroundVolumeID(temp0);
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::SetReferenceForegroundVolumeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetLabelVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLabelVolumeID() :
      op->vtkMRMLSliceCompositeNode::GetLabelVolumeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetLabelVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelVolumeID(temp0);
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::SetLabelVolumeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetReferenceLabelVolumeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceLabelVolumeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceLabelVolumeID(temp0);
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::SetReferenceLabelVolumeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetCompositing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompositing() :
      op->vtkMRMLSliceCompositeNode::GetCompositing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetCompositing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompositing(temp0);
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::SetCompositing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetForegroundOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForegroundOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetForegroundOpacity() :
      op->vtkMRMLSliceCompositeNode::GetForegroundOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetForegroundOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForegroundOpacity(temp0);
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::SetForegroundOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetLabelOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelOpacity() :
      op->vtkMRMLSliceCompositeNode::GetLabelOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetLabelOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelOpacity(temp0);
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::SetLabelOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetLinkedControl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedControl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLinkedControl() :
      op->vtkMRMLSliceCompositeNode::GetLinkedControl());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetLinkedControl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinkedControl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLinkedControl(temp0);
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::SetLinkedControl(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_LinkedControlOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LinkedControlOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LinkedControlOn();
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::LinkedControlOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_LinkedControlOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LinkedControlOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LinkedControlOff();
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::LinkedControlOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetHotLinkedControl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotLinkedControl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHotLinkedControl() :
      op->vtkMRMLSliceCompositeNode::GetHotLinkedControl());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetHotLinkedControl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHotLinkedControl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHotLinkedControl(temp0);
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::SetHotLinkedControl(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_HotLinkedControlOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HotLinkedControlOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HotLinkedControlOn();
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::HotLinkedControlOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_HotLinkedControlOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HotLinkedControlOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HotLinkedControlOff();
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::HotLinkedControlOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetFiducialVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiducialVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFiducialVisibility() :
      op->vtkMRMLSliceCompositeNode::GetFiducialVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetFiducialVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFiducialVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFiducialVisibility(temp0);
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::SetFiducialVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetFiducialLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiducialLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFiducialLabelVisibility() :
      op->vtkMRMLSliceCompositeNode::GetFiducialLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetFiducialLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFiducialLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFiducialLabelVisibility(temp0);
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::SetFiducialLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetSliceIntersectionVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceIntersectionVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceIntersectionVisibility() :
      op->vtkMRMLSliceCompositeNode::GetSliceIntersectionVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetSliceIntersectionVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceIntersectionVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

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
      op->vtkMRMLSliceCompositeNode::SetSliceIntersectionVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetDoPropagateVolumeSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDoPropagateVolumeSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDoPropagateVolumeSelection(temp0);
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::SetDoPropagateVolumeSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetDoPropagateVolumeSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDoPropagateVolumeSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDoPropagateVolumeSelection() :
      op->vtkMRMLSliceCompositeNode::GetDoPropagateVolumeSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetLayoutName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

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
      op->vtkMRMLSliceCompositeNode::SetLayoutName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetLayoutName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLayoutName() :
      op->vtkMRMLSliceCompositeNode::GetLayoutName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetInteracting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteracting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

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
      op->vtkMRMLSliceCompositeNode::SetInteracting(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetInteracting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteracting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteracting() :
      op->vtkMRMLSliceCompositeNode::GetInteracting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_InteractingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractingOn();
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::InteractingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_InteractingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractingOff();
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::InteractingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetInteractionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

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
      op->vtkMRMLSliceCompositeNode::SetInteractionFlags(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetInteractionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetInteractionFlags() :
      op->vtkMRMLSliceCompositeNode::GetInteractionFlags());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_SetInteractionFlagsModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionFlagsModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionFlagsModifier(temp0);
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::SetInteractionFlagsModifier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_GetInteractionFlagsModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionFlagsModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetInteractionFlagsModifier() :
      op->vtkMRMLSliceCompositeNode::GetInteractionFlagsModifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceCompositeNode_ResetInteractionFlagsModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetInteractionFlagsModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceCompositeNode *op = static_cast<vtkMRMLSliceCompositeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetInteractionFlagsModifier();
    }
    else
    {
      op->vtkMRMLSliceCompositeNode::ResetInteractionFlagsModifier();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSliceCompositeNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSliceCompositeNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSliceCompositeNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSliceCompositeNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLSliceCompositeNode\nC++: static vtkMRMLSliceCompositeNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSliceCompositeNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSliceCompositeNode\nC++: vtkMRMLSliceCompositeNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSliceCompositeNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSliceCompositeNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLSliceCompositeNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"CopyContent", PyvtkMRMLSliceCompositeNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLSliceCompositeNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLSliceCompositeNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetBackgroundVolumeID", PyvtkMRMLSliceCompositeNode_GetBackgroundVolumeID, METH_VARARGS,
   "GetBackgroundVolumeID(self) -> str\nC++: const char *GetBackgroundVolumeID()\n\nthe ID of a MRMLVolumeNode\n"},
  {"SetBackgroundVolumeID", PyvtkMRMLSliceCompositeNode_SetBackgroundVolumeID, METH_VARARGS,
   "SetBackgroundVolumeID(self, id:str) -> None\nC++: void SetBackgroundVolumeID(const char *id)\n\n"},
  {"SetReferenceBackgroundVolumeID", PyvtkMRMLSliceCompositeNode_SetReferenceBackgroundVolumeID, METH_VARARGS,
   "SetReferenceBackgroundVolumeID(self, id:str) -> None\nC++: void SetReferenceBackgroundVolumeID(const char *id)\n\n"},
  {"GetForegroundVolumeID", PyvtkMRMLSliceCompositeNode_GetForegroundVolumeID, METH_VARARGS,
   "GetForegroundVolumeID(self) -> str\nC++: const char *GetForegroundVolumeID()\n\nthe ID of a MRMLVolumeNode\n"},
  {"SetForegroundVolumeID", PyvtkMRMLSliceCompositeNode_SetForegroundVolumeID, METH_VARARGS,
   "SetForegroundVolumeID(self, id:str) -> None\nC++: void SetForegroundVolumeID(const char *id)\n\n"},
  {"SetReferenceForegroundVolumeID", PyvtkMRMLSliceCompositeNode_SetReferenceForegroundVolumeID, METH_VARARGS,
   "SetReferenceForegroundVolumeID(self, id:str) -> None\nC++: void SetReferenceForegroundVolumeID(const char *id)\n\n"},
  {"GetLabelVolumeID", PyvtkMRMLSliceCompositeNode_GetLabelVolumeID, METH_VARARGS,
   "GetLabelVolumeID(self) -> str\nC++: const char *GetLabelVolumeID()\n\nthe ID of a MRMLVolumeNode\n"},
  {"SetLabelVolumeID", PyvtkMRMLSliceCompositeNode_SetLabelVolumeID, METH_VARARGS,
   "SetLabelVolumeID(self, id:str) -> None\nC++: void SetLabelVolumeID(const char *id)\n\n"},
  {"SetReferenceLabelVolumeID", PyvtkMRMLSliceCompositeNode_SetReferenceLabelVolumeID, METH_VARARGS,
   "SetReferenceLabelVolumeID(self, id:str) -> None\nC++: void SetReferenceLabelVolumeID(const char *id)\n\n"},
  {"GetCompositing", PyvtkMRMLSliceCompositeNode_GetCompositing, METH_VARARGS,
   "GetCompositing(self) -> int\nC++: virtual int GetCompositing()\n\nCompositing mode for foreground and background can be alpha\nblending, reverse alpha blending, addition, or subtraction\n"},
  {"SetCompositing", PyvtkMRMLSliceCompositeNode_SetCompositing, METH_VARARGS,
   "SetCompositing(self, _arg:int) -> None\nC++: virtual void SetCompositing(int _arg)\n\n"},
  {"GetForegroundOpacity", PyvtkMRMLSliceCompositeNode_GetForegroundOpacity, METH_VARARGS,
   "GetForegroundOpacity(self) -> float\nC++: virtual double GetForegroundOpacity()\n\nopacity of the Foreground for rendering over background TODO:\nmake this an arbitrary list of layers TODO: make different\ncomposite types (checkerboard, etc)\n"},
  {"SetForegroundOpacity", PyvtkMRMLSliceCompositeNode_SetForegroundOpacity, METH_VARARGS,
   "SetForegroundOpacity(self, _arg:float) -> None\nC++: virtual void SetForegroundOpacity(double _arg)\n\n"},
  {"GetLabelOpacity", PyvtkMRMLSliceCompositeNode_GetLabelOpacity, METH_VARARGS,
   "GetLabelOpacity(self) -> float\nC++: virtual double GetLabelOpacity()\n\nopacity of the Label for rendering over background TODO: make\nthis an arbitrary list of layers TODO: make different composite\ntypes (checkerboard, etc)\n"},
  {"SetLabelOpacity", PyvtkMRMLSliceCompositeNode_SetLabelOpacity, METH_VARARGS,
   "SetLabelOpacity(self, _arg:float) -> None\nC++: virtual void SetLabelOpacity(double _arg)\n\n"},
  {"GetLinkedControl", PyvtkMRMLSliceCompositeNode_GetLinkedControl, METH_VARARGS,
   "GetLinkedControl(self) -> int\nC++: virtual int GetLinkedControl()\n\ntoggle that gangs control of slice viewers\n"},
  {"SetLinkedControl", PyvtkMRMLSliceCompositeNode_SetLinkedControl, METH_VARARGS,
   "SetLinkedControl(self, _arg:int) -> None\nC++: virtual void SetLinkedControl(int _arg)\n\n"},
  {"LinkedControlOn", PyvtkMRMLSliceCompositeNode_LinkedControlOn, METH_VARARGS,
   "LinkedControlOn(self) -> None\nC++: virtual void LinkedControlOn()\n\n"},
  {"LinkedControlOff", PyvtkMRMLSliceCompositeNode_LinkedControlOff, METH_VARARGS,
   "LinkedControlOff(self) -> None\nC++: virtual void LinkedControlOff()\n\n"},
  {"GetHotLinkedControl", PyvtkMRMLSliceCompositeNode_GetHotLinkedControl, METH_VARARGS,
   "GetHotLinkedControl(self) -> int\nC++: virtual int GetHotLinkedControl()\n\ntoggle for whether linked behavior is immediate or waits until an\ninteraction is finished\n"},
  {"SetHotLinkedControl", PyvtkMRMLSliceCompositeNode_SetHotLinkedControl, METH_VARARGS,
   "SetHotLinkedControl(self, _arg:int) -> None\nC++: virtual void SetHotLinkedControl(int _arg)\n\n"},
  {"HotLinkedControlOn", PyvtkMRMLSliceCompositeNode_HotLinkedControlOn, METH_VARARGS,
   "HotLinkedControlOn(self) -> None\nC++: virtual void HotLinkedControlOn()\n\n"},
  {"HotLinkedControlOff", PyvtkMRMLSliceCompositeNode_HotLinkedControlOff, METH_VARARGS,
   "HotLinkedControlOff(self) -> None\nC++: virtual void HotLinkedControlOff()\n\n"},
  {"GetFiducialVisibility", PyvtkMRMLSliceCompositeNode_GetFiducialVisibility, METH_VARARGS,
   "GetFiducialVisibility(self) -> int\nC++: virtual int GetFiducialVisibility()\n\ntoggles fiducial visibility in the slice viewer\n"},
  {"SetFiducialVisibility", PyvtkMRMLSliceCompositeNode_SetFiducialVisibility, METH_VARARGS,
   "SetFiducialVisibility(self, _arg:int) -> None\nC++: virtual void SetFiducialVisibility(int _arg)\n\n"},
  {"GetFiducialLabelVisibility", PyvtkMRMLSliceCompositeNode_GetFiducialLabelVisibility, METH_VARARGS,
   "GetFiducialLabelVisibility(self) -> int\nC++: virtual int GetFiducialLabelVisibility()\n\n"},
  {"SetFiducialLabelVisibility", PyvtkMRMLSliceCompositeNode_SetFiducialLabelVisibility, METH_VARARGS,
   "SetFiducialLabelVisibility(self, _arg:int) -> None\nC++: virtual void SetFiducialLabelVisibility(int _arg)\n\n"},
  {"GetSliceIntersectionVisibility", PyvtkMRMLSliceCompositeNode_GetSliceIntersectionVisibility, METH_VARARGS,
   "GetSliceIntersectionVisibility(self) -> int\nC++: int GetSliceIntersectionVisibility()\n\nThis method is deprecated. Instead of this method use\nSetIntersectingSlicesVisibility() and\nGetIntersectingSlicesVisibility() of vtkMRMLSliceDisplayNode.\n"},
  {"SetSliceIntersectionVisibility", PyvtkMRMLSliceCompositeNode_SetSliceIntersectionVisibility, METH_VARARGS,
   "SetSliceIntersectionVisibility(self, visibility:int) -> None\nC++: void SetSliceIntersectionVisibility(int visibility)\n\n"},
  {"SetDoPropagateVolumeSelection", PyvtkMRMLSliceCompositeNode_SetDoPropagateVolumeSelection, METH_VARARGS,
   "SetDoPropagateVolumeSelection(self, _arg:bool) -> None\nC++: virtual void SetDoPropagateVolumeSelection(bool _arg)\n\nconfigures the behavior of PropagateVolumeSelection(): if set to\nfalse, the background/label for slice views will not be reset.\nDefault value is true\n"},
  {"GetDoPropagateVolumeSelection", PyvtkMRMLSliceCompositeNode_GetDoPropagateVolumeSelection, METH_VARARGS,
   "GetDoPropagateVolumeSelection(self) -> bool\nC++: virtual bool GetDoPropagateVolumeSelection()\n\n"},
  {"SetLayoutName", PyvtkMRMLSliceCompositeNode_SetLayoutName, METH_VARARGS,
   "SetLayoutName(self, layoutName:str) -> None\nC++: void SetLayoutName(const char *layoutName)\n\nName of the layout. Must be unique between all the slice\ncomposite nodes because it is used as a singleton tag. Must be\nthe same than the slice node. No name (i.e. \"\") by default.\nTypical names are colors: \"Red\", \"Green\", \"Yellow\"... to uniquely\ndefine the slice node\n\\sa vtkMRMLSliceNode::SetLayoutName\n"},
  {"GetLayoutName", PyvtkMRMLSliceCompositeNode_GetLayoutName, METH_VARARGS,
   "GetLayoutName(self) -> str\nC++: char *GetLayoutName()\n\n"},
  {"SetInteracting", PyvtkMRMLSliceCompositeNode_SetInteracting, METH_VARARGS,
   "SetInteracting(self, __a:int) -> None\nC++: void SetInteracting(int)\n\nGet/Set a flag indicating whether this node is actively being\nmanipulated (usually) by a user interface. This flag is used by\nlogic classes to determine whether state changes should be\npropagated to other nodes to implement linked controls. Does not\nmark the node as Modified.\n"},
  {"GetInteracting", PyvtkMRMLSliceCompositeNode_GetInteracting, METH_VARARGS,
   "GetInteracting(self) -> int\nC++: virtual int GetInteracting()\n\n"},
  {"InteractingOn", PyvtkMRMLSliceCompositeNode_InteractingOn, METH_VARARGS,
   "InteractingOn(self) -> None\nC++: virtual void InteractingOn()\n\n"},
  {"InteractingOff", PyvtkMRMLSliceCompositeNode_InteractingOff, METH_VARARGS,
   "InteractingOff(self) -> None\nC++: virtual void InteractingOff()\n\n"},
  {"SetInteractionFlags", PyvtkMRMLSliceCompositeNode_SetInteractionFlags, METH_VARARGS,
   "SetInteractionFlags(self, __a:int) -> None\nC++: void SetInteractionFlags(unsigned int)\n\nGet/Set a flag indicating what parameters are being manipulated\nwithin calls to InteractingOn() and InteractingOff(). These\nfields are used to propagate linked behaviors. This flag is a\nbitfield, with multiple parameters OR'd to compose the flag. Does\nnot mark the node as Modified.\n"},
  {"GetInteractionFlags", PyvtkMRMLSliceCompositeNode_GetInteractionFlags, METH_VARARGS,
   "GetInteractionFlags(self) -> int\nC++: virtual unsigned int GetInteractionFlags()\n\n"},
  {"SetInteractionFlagsModifier", PyvtkMRMLSliceCompositeNode_SetInteractionFlagsModifier, METH_VARARGS,
   "SetInteractionFlagsModifier(self, __a:int) -> None\nC++: void SetInteractionFlagsModifier(unsigned int)\n\nGet/Set a flag indicating how the linking behavior should be\nmodified. InteractionFlags modifier uses bits defined by\nInteractionFlagType enum that by default are all set and result\nin the default behavior. If a bit is not set, this will result in\ncomposite slice node interactions not broadcast.\n"},
  {"GetInteractionFlagsModifier", PyvtkMRMLSliceCompositeNode_GetInteractionFlagsModifier, METH_VARARGS,
   "GetInteractionFlagsModifier(self) -> int\nC++: virtual unsigned int GetInteractionFlagsModifier()\n\n"},
  {"ResetInteractionFlagsModifier", PyvtkMRMLSliceCompositeNode_ResetInteractionFlagsModifier, METH_VARARGS,
   "ResetInteractionFlagsModifier(self) -> None\nC++: void ResetInteractionFlagsModifier()\n\nSet all bits of the modifier to 1, resulting in the default\nlinking behavior (selection of foreground, background and label\nvolumes being broadcast when composite slice nodes are linked).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSliceCompositeNode_Doc =
  "vtkMRMLSliceCompositeNode - MRML node for storing a slice through RAS\nspace.\n\n"
  "Superclass: vtkMRMLNode\n\n"
  "This node stores the information about how to composite two\n"
  "vtkMRMLVolumes into a single display image.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceCompositeNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSliceCompositeNode", // tp_name
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
  PyvtkMRMLSliceCompositeNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSliceCompositeNode_StaticNew()
{
  return vtkMRMLSliceCompositeNode::New();
}

PyObject *PyvtkMRMLSliceCompositeNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSliceCompositeNode_Type, PyvtkMRMLSliceCompositeNode_Methods,
    "vtkMRMLSliceCompositeNode",
 &PyvtkMRMLSliceCompositeNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLSliceCompositeNode_InteractionFlagType_Type);
  PyVTKEnum_Add(&PyvtkMRMLSliceCompositeNode_InteractionFlagType_Type, "vtkMRMLSliceCompositeNode.InteractionFlagType");

  o = (PyObject *)&PyvtkMRMLSliceCompositeNode_InteractionFlagType_Type;
  if (PyDict_SetItemString(d, "InteractionFlagType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "Alpha", vtkMRMLSliceCompositeNode::Alpha },
        { "ReverseAlpha", vtkMRMLSliceCompositeNode::ReverseAlpha },
        { "Add", vtkMRMLSliceCompositeNode::Add },
        { "Subtract", vtkMRMLSliceCompositeNode::Subtract },
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
    typedef vtkMRMLSliceCompositeNode::InteractionFlagType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "None_", vtkMRMLSliceCompositeNode::None },
        { "ForegroundVolumeFlag", vtkMRMLSliceCompositeNode::ForegroundVolumeFlag },
        { "BackgroundVolumeFlag", vtkMRMLSliceCompositeNode::BackgroundVolumeFlag },
        { "LabelVolumeFlag", vtkMRMLSliceCompositeNode::LabelVolumeFlag },
        { "LabelOpacityFlag", vtkMRMLSliceCompositeNode::LabelOpacityFlag },
        { "ForegroundOpacityFlag", vtkMRMLSliceCompositeNode::ForegroundOpacityFlag },
      };

    o = PyvtkMRMLSliceCompositeNode_InteractionFlagType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLSliceCompositeNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSliceCompositeNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSliceCompositeNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

