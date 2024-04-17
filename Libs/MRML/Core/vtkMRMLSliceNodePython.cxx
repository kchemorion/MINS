// python wrapper for vtkMRMLSliceNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSliceNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSliceNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSliceNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractViewNode_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractViewNode_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractViewNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceNode_InteractionFlagType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSliceNode.InteractionFlagType", // tp_name
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
PyObject *PyvtkMRMLSliceNode_InteractionFlagType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLSliceNode_InteractionFlagType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceNode_SliceResolutionModeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSliceNode.SliceResolutionModeType", // tp_name
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
PyObject *PyvtkMRMLSliceNode_SliceResolutionModeType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLSliceNode_SliceResolutionModeType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLSliceNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSliceNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSliceNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSliceNode *tempr = vtkMRMLSliceNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSliceNode::NewInstance());

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
PyvtkMRMLSliceNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSliceNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSliceNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLSliceNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->vtkMRMLSliceNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLSliceNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->vtkMRMLSliceNode::Reset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLSliceNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetSliceToRAS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceToRAS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetSliceToRAS() :
      op->vtkMRMLSliceNode::GetSliceToRAS());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetSliceVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceVisible() :
      op->vtkMRMLSliceNode::GetSliceVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetSliceVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceVisible(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetSliceVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetWidgetVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWidgetVisible() :
      op->vtkMRMLSliceNode::GetWidgetVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetWidgetVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWidgetVisible(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetWidgetVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetWidgetOutlineVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetOutlineVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWidgetOutlineVisible() :
      op->vtkMRMLSliceNode::GetWidgetOutlineVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetWidgetOutlineVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetOutlineVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWidgetOutlineVisible(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetWidgetOutlineVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_AddThreeDViewID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddThreeDViewID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddThreeDViewID(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::AddThreeDViewID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_RemoveThreeDViewID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveThreeDViewID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->RemoveThreeDViewID(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::RemoveThreeDViewID(temp0);
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
PyvtkMRMLSliceNode_RemoveAllThreeDViewIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllThreeDViewIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllThreeDViewIDs();
    }
    else
    {
      op->vtkMRMLSliceNode::RemoveAllThreeDViewIDs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetNumberOfThreeDViewIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreeDViewIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreeDViewIDs() :
      op->vtkMRMLSliceNode::GetNumberOfThreeDViewIDs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetNthThreeDViewID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthThreeDViewID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthThreeDViewID(temp0) :
      op->vtkMRMLSliceNode::GetNthThreeDViewID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetThreeDViewIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreeDViewIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetThreeDViewIDs() :
      op->vtkMRMLSliceNode::GetThreeDViewIDs());

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
PyvtkMRMLSliceNode_IsThreeDViewIDPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsThreeDViewIDPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsThreeDViewIDPresent(temp0) :
      op->vtkMRMLSliceNode::IsThreeDViewIDPresent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_IsDisplayableInThreeDView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDisplayableInThreeDView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDisplayableInThreeDView(temp0) :
      op->vtkMRMLSliceNode::IsDisplayableInThreeDView(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetWidgetNormalLockedToCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetNormalLockedToCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWidgetNormalLockedToCamera() :
      op->vtkMRMLSliceNode::GetWidgetNormalLockedToCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetWidgetNormalLockedToCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetNormalLockedToCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWidgetNormalLockedToCamera(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetWidgetNormalLockedToCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetUseLabelOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLabelOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseLabelOutline() :
      op->vtkMRMLSliceNode::GetUseLabelOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetUseLabelOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLabelOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseLabelOutline(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetUseLabelOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_UseLabelOutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLabelOutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLabelOutlineOn();
    }
    else
    {
      op->vtkMRMLSliceNode::UseLabelOutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_UseLabelOutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLabelOutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLabelOutlineOff();
    }
    else
    {
      op->vtkMRMLSliceNode::UseLabelOutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetOrientationToAxial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToAxial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetOrientationToAxial() :
      op->vtkMRMLSliceNode::SetOrientationToAxial());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetOrientationToSagittal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToSagittal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetOrientationToSagittal() :
      op->vtkMRMLSliceNode::SetOrientationToSagittal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetOrientationToCoronal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToCoronal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetOrientationToCoronal() :
      op->vtkMRMLSliceNode::SetOrientationToCoronal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetOrientationToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetOrientationToDefault() :
      op->vtkMRMLSliceNode::SetOrientationToDefault());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkMRMLSliceNode::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceNode_GetOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetOrientation(temp0) :
      op->vtkMRMLSliceNode::GetOrientation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceNode_GetOrientation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLSliceNode_GetOrientation_s1(self, args);
    case 1:
      return PyvtkMRMLSliceNode_GetOrientation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOrientation");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceNode_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetOrientation(temp0) :
      op->vtkMRMLSliceNode::SetOrientation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetDefaultOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultOrientation(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetDefaultOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetDefaultOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDefaultOrientation() :
      op->vtkMRMLSliceNode::GetDefaultOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetOrientationString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOrientationString() :
      op->vtkMRMLSliceNode::GetOrientationString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetSliceOrientationPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOrientationPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMatrix3x3 *tempr = (ap.IsBound() ?
      op->GetSliceOrientationPreset(temp0) :
      op->vtkMRMLSliceNode::GetSliceOrientationPreset(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetSliceOrientationPresetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOrientationPresetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetSliceOrientationPresetName(temp0) :
      op->vtkMRMLSliceNode::GetSliceOrientationPresetName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetSliceOrientationPresetNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOrientationPresetNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->GetSliceOrientationPresetNames(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::GetSliceOrientationPresetNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetNumberOfSliceOrientationPresets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSliceOrientationPresets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSliceOrientationPresets() :
      op->vtkMRMLSliceNode::GetNumberOfSliceOrientationPresets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_AddSliceOrientationPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSliceOrientationPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  std::string temp0;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    bool tempr = (ap.IsBound() ?
      op->AddSliceOrientationPreset(temp0, temp1) :
      op->vtkMRMLSliceNode::AddSliceOrientationPreset(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_RemoveSliceOrientationPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveSliceOrientationPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveSliceOrientationPreset(temp0) :
      op->vtkMRMLSliceNode::RemoveSliceOrientationPreset(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_RenameSliceOrientationPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenameSliceOrientationPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->RenameSliceOrientationPreset(temp0, temp1) :
      op->vtkMRMLSliceNode::RenameSliceOrientationPreset(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_HasSliceOrientationPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasSliceOrientationPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasSliceOrientationPreset(temp0) :
      op->vtkMRMLSliceNode::HasSliceOrientationPreset(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetReformatOrientationName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetReformatOrientationName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkMRMLSliceNode::GetReformatOrientationName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetAxialSliceToRASMatrix(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAxialSliceToRASMatrix");

  vtkMatrix3x3 *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkMRMLSliceNode::GetAxialSliceToRASMatrix(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetSagittalSliceToRASMatrix(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSagittalSliceToRASMatrix");

  vtkMatrix3x3 *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkMRMLSliceNode::GetSagittalSliceToRASMatrix(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetCoronalSliceToRASMatrix(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCoronalSliceToRASMatrix");

  vtkMatrix3x3 *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkMRMLSliceNode::GetCoronalSliceToRASMatrix(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_AddDefaultSliceOrientationPresets(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AddDefaultSliceOrientationPresets");

  vtkMRMLScene *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkMRMLSliceNode::AddDefaultSliceOrientationPresets(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetFieldOfView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldOfView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetFieldOfView() :
      op->vtkMRMLSliceNode::GetFieldOfView());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetFieldOfView_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldOfView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->SetFieldOfView(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceNode::SetFieldOfView(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceNode_SetFieldOfView_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldOfView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->SetFieldOfView(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetFieldOfView(temp0);
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
PyvtkMRMLSliceNode_SetFieldOfView(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLSliceNode_SetFieldOfView_s1(self, args);
    case 1:
      return PyvtkMRMLSliceNode_SetFieldOfView_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFieldOfView");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceNode_GetXYZOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYZOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetXYZOrigin() :
      op->vtkMRMLSliceNode::GetXYZOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetXYZOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYZOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->SetXYZOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceNode::SetXYZOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceNode_SetXYZOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYZOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->SetXYZOrigin(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetXYZOrigin(temp0);
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
PyvtkMRMLSliceNode_SetXYZOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLSliceNode_SetXYZOrigin_s1(self, args);
    case 1:
      return PyvtkMRMLSliceNode_SetXYZOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXYZOrigin");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceNode_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkMRMLSliceNode::GetDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceNode::SetDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceNode_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetDimensions(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetDimensions(temp0);
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
PyvtkMRMLSliceNode_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLSliceNode_SetDimensions_s1(self, args);
    case 1:
      return PyvtkMRMLSliceNode_SetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceNode_GetUVWDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUVWDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetUVWDimensions() :
      op->vtkMRMLSliceNode::GetUVWDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetUVWDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUVWDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetUVWDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceNode::SetUVWDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceNode_SetUVWDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUVWDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetUVWDimensions(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetUVWDimensions(temp0);
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
PyvtkMRMLSliceNode_SetUVWDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLSliceNode_SetUVWDimensions_s1(self, args);
    case 1:
      return PyvtkMRMLSliceNode_SetUVWDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUVWDimensions");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceNode_GetUVWMaximumDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUVWMaximumDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetUVWMaximumDimensions() :
      op->vtkMRMLSliceNode::GetUVWMaximumDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetUVWMaximumDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUVWMaximumDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetUVWMaximumDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceNode::SetUVWMaximumDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceNode_SetUVWMaximumDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUVWMaximumDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetUVWMaximumDimensions(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetUVWMaximumDimensions(temp0);
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
PyvtkMRMLSliceNode_SetUVWMaximumDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLSliceNode_SetUVWMaximumDimensions_s1(self, args);
    case 1:
      return PyvtkMRMLSliceNode_SetUVWMaximumDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUVWMaximumDimensions");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceNode_GetUVWExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUVWExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetUVWExtents() :
      op->vtkMRMLSliceNode::GetUVWExtents());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetUVWExtents_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUVWExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->SetUVWExtents(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceNode::SetUVWExtents(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceNode_SetUVWExtents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUVWExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->SetUVWExtents(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetUVWExtents(temp0);
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
PyvtkMRMLSliceNode_SetUVWExtents(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLSliceNode_SetUVWExtents_s1(self, args);
    case 1:
      return PyvtkMRMLSliceNode_SetUVWExtents_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUVWExtents");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceNode_GetUVWOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUVWOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetUVWOrigin() :
      op->vtkMRMLSliceNode::GetUVWOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetUVWOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUVWOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->SetUVWOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceNode::SetUVWOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceNode_SetUVWOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUVWOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->SetUVWOrigin(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetUVWOrigin(temp0);
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
PyvtkMRMLSliceNode_SetUVWOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLSliceNode_SetUVWOrigin_s1(self, args);
    case 1:
      return PyvtkMRMLSliceNode_SetUVWOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUVWOrigin");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceNode_SetSliceOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->SetSliceOrigin(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetSliceOrigin(temp0);
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
PyvtkMRMLSliceNode_SetSliceOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->SetSliceOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceNode::SetSliceOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceNode_SetSliceOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLSliceNode_SetSliceOrigin_s1(self, args);
    case 3:
      return PyvtkMRMLSliceNode_SetSliceOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceOrigin");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceNode_SetUVWExtentsAndDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUVWExtentsAndDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetUVWExtentsAndDimensions(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSliceNode::SetUVWExtentsAndDimensions(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetXYToSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYToSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetXYToSlice() :
      op->vtkMRMLSliceNode::GetXYToSlice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetXYToRAS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYToRAS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetXYToRAS() :
      op->vtkMRMLSliceNode::GetXYToRAS());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetUVWToSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUVWToSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetUVWToSlice() :
      op->vtkMRMLSliceNode::GetUVWToSlice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetUVWToRAS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUVWToRAS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetUVWToRAS() :
      op->vtkMRMLSliceNode::GetUVWToRAS());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_MatrixAreEqual_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MatrixAreEqual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    bool tempr = (ap.IsBound() ?
      op->MatrixAreEqual(temp0, temp1) :
      op->vtkMRMLSliceNode::MatrixAreEqual(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceNode_MatrixAreEqual_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MatrixAreEqual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    bool tempr = (ap.IsBound() ?
      op->MatrixAreEqual(temp0, temp1) :
      op->vtkMRMLSliceNode::MatrixAreEqual(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSliceNode_MatrixAreEqual_Methods[] = {
  {"MatrixAreEqual", PyvtkMRMLSliceNode_MatrixAreEqual_s1, METH_VARARGS,
   "@VV *vtkMatrix4x4 *vtkMatrix4x4"},
  {"MatrixAreEqual", PyvtkMRMLSliceNode_MatrixAreEqual_s2, METH_VARARGS,
   "@VV *vtkMatrix4x4 *vtkMatrix3x3"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLSliceNode_MatrixAreEqual(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLSliceNode_MatrixAreEqual_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MatrixAreEqual");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceNode_UpdateMatrices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateMatrices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateMatrices();
    }
    else
    {
      op->vtkMRMLSliceNode::UpdateMatrices();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetLayoutGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLayoutGrid(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSliceNode::SetLayoutGrid(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetLayoutGridRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutGridRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLayoutGridRows() :
      op->vtkMRMLSliceNode::GetLayoutGridRows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetLayoutGridRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutGridRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutGridRows(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetLayoutGridRows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetLayoutGridColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutGridColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLayoutGridColumns() :
      op->vtkMRMLSliceNode::GetLayoutGridColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetLayoutGridColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutGridColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutGridColumns(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetLayoutGridColumns(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetSliceToRASByNTP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceToRASByNTP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  int temp9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9))
  {
    if (ap.IsBound())
    {
      op->SetSliceToRASByNTP(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }
    else
    {
      op->vtkMRMLSliceNode::SetSliceToRASByNTP(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_JumpSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JumpSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->JumpSlice(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceNode::JumpSlice(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_JumpAllSlices_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JumpAllSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->JumpAllSlices(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceNode::JumpAllSlices(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceNode_JumpAllSlices_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "JumpAllSlices");

  vtkMRMLScene *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  int temp4 = vtkMRMLSliceNode::DefaultJumpSlice;
  int temp5 = -1;
  vtkMRMLSliceNode *temp6 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4, 7) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp6, "vtkMRMLSliceNode")))
  {
    vtkMRMLSliceNode::JumpAllSlices(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceNode_JumpAllSlices(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLSliceNode_JumpAllSlices_s1(self, args);
    case 4:
    case 5:
    case 6:
    case 7:
      return PyvtkMRMLSliceNode_JumpAllSlices_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "JumpAllSlices");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceNode_JumpSliceByOffsetting_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JumpSliceByOffsetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->JumpSliceByOffsetting(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceNode::JumpSliceByOffsetting(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceNode_JumpSliceByOffsetting_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JumpSliceByOffsetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->JumpSliceByOffsetting(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLSliceNode::JumpSliceByOffsetting(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceNode_JumpSliceByOffsetting(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLSliceNode_JumpSliceByOffsetting_s1(self, args);
    case 4:
      return PyvtkMRMLSliceNode_JumpSliceByOffsetting_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "JumpSliceByOffsetting");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceNode_JumpSliceByCentering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JumpSliceByCentering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->JumpSliceByCentering(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceNode::JumpSliceByCentering(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetJumpMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJumpMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetJumpMode(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetJumpMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetJumpMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJumpMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJumpMode() :
      op->vtkMRMLSliceNode::GetJumpMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetJumpModeToCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJumpModeToCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetJumpModeToCentered();
    }
    else
    {
      op->vtkMRMLSliceNode::SetJumpModeToCentered();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetJumpModeToOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJumpModeToOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetJumpModeToOffset();
    }
    else
    {
      op->vtkMRMLSliceNode::SetJumpModeToOffset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetSliceSpacingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceSpacingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceSpacingMode() :
      op->vtkMRMLSliceNode::GetSliceSpacingMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetSliceSpacingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceSpacingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceSpacingMode(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetSliceSpacingMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetSliceSpacingModeToAutomatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceSpacingModeToAutomatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceSpacingModeToAutomatic();
    }
    else
    {
      op->vtkMRMLSliceNode::SetSliceSpacingModeToAutomatic();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetSliceSpacingModeToPrescribed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceSpacingModeToPrescribed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceSpacingModeToPrescribed();
    }
    else
    {
      op->vtkMRMLSliceNode::SetSliceSpacingModeToPrescribed();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetPrescribedSliceSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrescribedSliceSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->SetPrescribedSliceSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceNode::SetPrescribedSliceSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceNode_SetPrescribedSliceSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrescribedSliceSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPrescribedSliceSpacing(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetPrescribedSliceSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceNode_SetPrescribedSliceSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLSliceNode_SetPrescribedSliceSpacing_s1(self, args);
    case 1:
      return PyvtkMRMLSliceNode_SetPrescribedSliceSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPrescribedSliceSpacing");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceNode_GetPrescribedSliceSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrescribedSliceSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPrescribedSliceSpacing() :
      op->vtkMRMLSliceNode::GetPrescribedSliceSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetSliceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSliceOffset() :
      op->vtkMRMLSliceNode::GetSliceOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetSliceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceOffset(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetSliceOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetActiveSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveSlice(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetActiveSlice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetActiveSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveSlice() :
      op->vtkMRMLSliceNode::GetActiveSlice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_RotateToVolumePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateToVolumePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->RotateToVolumePlane(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSliceNode::RotateToVolumePlane(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_RotateToAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateToAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  int temp1 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->RotateToAxes(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSliceNode::RotateToAxes(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetInteracting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteracting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->vtkMRMLSliceNode::SetInteracting(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetInteracting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteracting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteracting() :
      op->vtkMRMLSliceNode::GetInteracting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_InteractingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractingOn();
    }
    else
    {
      op->vtkMRMLSliceNode::InteractingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_InteractingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractingOff();
    }
    else
    {
      op->vtkMRMLSliceNode::InteractingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetInteractionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->vtkMRMLSliceNode::SetInteractionFlags(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetInteractionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetInteractionFlags() :
      op->vtkMRMLSliceNode::GetInteractionFlags());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetInteractionFlagsModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionFlagsModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

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
      op->vtkMRMLSliceNode::SetInteractionFlagsModifier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetInteractionFlagsModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionFlagsModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetInteractionFlagsModifier() :
      op->vtkMRMLSliceNode::GetInteractionFlagsModifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_ResetInteractionFlagsModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetInteractionFlagsModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetInteractionFlagsModifier();
    }
    else
    {
      op->vtkMRMLSliceNode::ResetInteractionFlagsModifier();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetSliceResolutionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceResolutionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceResolutionMode(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetSliceResolutionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetSliceResolutionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceResolutionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceResolutionMode() :
      op->vtkMRMLSliceNode::GetSliceResolutionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetSlabReconstructionEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabReconstructionEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSlabReconstructionEnabled() :
      op->vtkMRMLSliceNode::GetSlabReconstructionEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetSlabReconstructionEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabReconstructionEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlabReconstructionEnabled(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetSlabReconstructionEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SlabReconstructionEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SlabReconstructionEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SlabReconstructionEnabledOn();
    }
    else
    {
      op->vtkMRMLSliceNode::SlabReconstructionEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SlabReconstructionEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SlabReconstructionEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SlabReconstructionEnabledOff();
    }
    else
    {
      op->vtkMRMLSliceNode::SlabReconstructionEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetSlabReconstructionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabReconstructionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSlabReconstructionType() :
      op->vtkMRMLSliceNode::GetSlabReconstructionType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetSlabReconstructionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabReconstructionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlabReconstructionType(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetSlabReconstructionType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetSlabReconstructionTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSlabReconstructionTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLSliceNode::GetSlabReconstructionTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetSlabReconstructionTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSlabReconstructionTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSliceNode::GetSlabReconstructionTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetSlabReconstructionThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabReconstructionThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSlabReconstructionThickness() :
      op->vtkMRMLSliceNode::GetSlabReconstructionThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetSlabReconstructionThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabReconstructionThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlabReconstructionThickness(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetSlabReconstructionThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_GetSlabReconstructionOversamplingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabReconstructionOversamplingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSlabReconstructionOversamplingFactor() :
      op->vtkMRMLSliceNode::GetSlabReconstructionOversamplingFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceNode_SetSlabReconstructionOversamplingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabReconstructionOversamplingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceNode *op = static_cast<vtkMRMLSliceNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlabReconstructionOversamplingFactor(temp0);
    }
    else
    {
      op->vtkMRMLSliceNode::SetSlabReconstructionOversamplingFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSliceNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSliceNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSliceNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSliceNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLSliceNode\nC++: static vtkMRMLSliceNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSliceNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSliceNode\nC++: vtkMRMLSliceNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSliceNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSliceNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLSliceNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"CopyContent", PyvtkMRMLSliceNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLSliceNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"Reset", PyvtkMRMLSliceNode_Reset, METH_VARARGS,
   "Reset(self, defaultNode:vtkMRMLNode) -> None\nC++: void Reset(vtkMRMLNode *defaultNode) override;\n\nReimplemented to preserve orientation and layout color when\n    reset.\n\\sa GetOrientationString()\n\\sa GetLayoutColor()\n"},
  {"GetNodeTagName", PyvtkMRMLSliceNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetSliceToRAS", PyvtkMRMLSliceNode_GetSliceToRAS, METH_VARARGS,
   "GetSliceToRAS(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetSliceToRAS()\n\nMapping from RAS space onto the slice plane This matrix is\nallowed to be modified from outside, for example by calling\nsliceNode->GetSliceToRAS->DeepCopy(...) followed by\nsliceNode->UpdateMatrices(). TODO: maybe this should be a\nquaternion and a translate to avoid shears/scales\n"},
  {"GetSliceVisible", PyvtkMRMLSliceNode_GetSliceVisible, METH_VARARGS,
   "GetSliceVisible(self) -> int\nC++: virtual int GetSliceVisible()\n\nThe visibility of the slice in the 3DViewer.\n"},
  {"SetSliceVisible", PyvtkMRMLSliceNode_SetSliceVisible, METH_VARARGS,
   "SetSliceVisible(self, _arg:int) -> None\nC++: virtual void SetSliceVisible(int _arg)\n\n"},
  {"GetWidgetVisible", PyvtkMRMLSliceNode_GetWidgetVisible, METH_VARARGS,
   "GetWidgetVisible(self) -> int\nC++: virtual int GetWidgetVisible()\n\nThe visibility of the slice plane widget in the 3DViewer.\n"},
  {"SetWidgetVisible", PyvtkMRMLSliceNode_SetWidgetVisible, METH_VARARGS,
   "SetWidgetVisible(self, _arg:int) -> None\nC++: virtual void SetWidgetVisible(int _arg)\n\n"},
  {"GetWidgetOutlineVisible", PyvtkMRMLSliceNode_GetWidgetOutlineVisible, METH_VARARGS,
   "GetWidgetOutlineVisible(self) -> int\nC++: virtual int GetWidgetOutlineVisible()\n\nThe visibility of the slice plane widget outline in the 3DViewer.\n"},
  {"SetWidgetOutlineVisible", PyvtkMRMLSliceNode_SetWidgetOutlineVisible, METH_VARARGS,
   "SetWidgetOutlineVisible(self, _arg:int) -> None\nC++: virtual void SetWidgetOutlineVisible(int _arg)\n\n"},
  {"AddThreeDViewID", PyvtkMRMLSliceNode_AddThreeDViewID, METH_VARARGS,
   "AddThreeDViewID(self, viewNodeID:str) -> None\nC++: void AddThreeDViewID(const char *viewNodeID)\n\nAdd View Node ID for the view to display this node in.\n\\sa ViewNodeIDs, RemoveViewNodeID(), RemoveAllViewNodeIDs()\n"},
  {"RemoveThreeDViewID", PyvtkMRMLSliceNode_RemoveThreeDViewID, METH_VARARGS,
   "RemoveThreeDViewID(self, viewNodeID:str) -> None\nC++: void RemoveThreeDViewID(char *viewNodeID)\n\nRemove View Node ID for the view to display this node in.\n\\sa ViewNodeIDs, AddViewNodeID(), RemoveAllViewNodeIDs()\n"},
  {"RemoveAllThreeDViewIDs", PyvtkMRMLSliceNode_RemoveAllThreeDViewIDs, METH_VARARGS,
   "RemoveAllThreeDViewIDs(self) -> None\nC++: void RemoveAllThreeDViewIDs()\n\nRemove All View Node IDs for the views to display this node in.\n\\sa ViewNodeIDs, AddThreeDViewID(), RemoveThreeDViewID()\n"},
  {"GetNumberOfThreeDViewIDs", PyvtkMRMLSliceNode_GetNumberOfThreeDViewIDs, METH_VARARGS,
   "GetNumberOfThreeDViewIDs(self) -> int\nC++: int GetNumberOfThreeDViewIDs()\n\nGet number of View Node ID's for the view to display this node\nin. If 0, display in all views\n\\sa ThreeDViewIDs, GetThreeDViewIDs(), AddThreeDViewID()\n"},
  {"GetNthThreeDViewID", PyvtkMRMLSliceNode_GetNthThreeDViewID, METH_VARARGS,
   "GetNthThreeDViewID(self, index:int) -> str\nC++: const char *GetNthThreeDViewID(unsigned int index)\n\nGet View Node ID's for the view to display this node in. If\nnullptr, display in all views\n\\sa ThreeDViewIDs, GetThreeDViewIDs(), AddThreeDViewID()\n"},
  {"GetThreeDViewIDs", PyvtkMRMLSliceNode_GetThreeDViewIDs, METH_VARARGS,
   "GetThreeDViewIDs(self) -> (str, ...)\nC++: std::vector<std::string> GetThreeDViewIDs()\n\nGet all View Node ID's for the view to display this node in. If\nempty, display in all views\n\\sa ThreeDViewIDs, GetNthThreeDViewID(), AddThreeDViewID()\n"},
  {"IsThreeDViewIDPresent", PyvtkMRMLSliceNode_IsThreeDViewIDPresent, METH_VARARGS,
   "IsThreeDViewIDPresent(self, ThreeDViewID:str) -> bool\nC++: bool IsThreeDViewIDPresent(const char *ThreeDViewID)\n\nTrue if the view node id is present in the ThreeDViewID list\nfalse if not found\n\\sa ThreeDViewIDs, IsDisplayableInView(), AddThreeDViewID()\n"},
  {"IsDisplayableInThreeDView", PyvtkMRMLSliceNode_IsDisplayableInThreeDView, METH_VARARGS,
   "IsDisplayableInThreeDView(self, viewNodeID:str) -> bool\nC++: bool IsDisplayableInThreeDView(const char *viewNodeID)\n\nReturns true if the ThreeDViewID is present in the ThreeDViewID\nlist or there is no ThreeDViewID in the list (meaning all the\nviews display the node)\n\\sa ThreeDViewIDs, IsThreeDViewIDPresent(), AddThreeDViewID()\n"},
  {"GetWidgetNormalLockedToCamera", PyvtkMRMLSliceNode_GetWidgetNormalLockedToCamera, METH_VARARGS,
   "GetWidgetNormalLockedToCamera(self) -> int\nC++: virtual int GetWidgetNormalLockedToCamera()\n\nThe ImplicitPlane widget mode this lock the normal of the plane\nto the camera's one\n"},
  {"SetWidgetNormalLockedToCamera", PyvtkMRMLSliceNode_SetWidgetNormalLockedToCamera, METH_VARARGS,
   "SetWidgetNormalLockedToCamera(self, _arg:int) -> None\nC++: virtual void SetWidgetNormalLockedToCamera(int _arg)\n\n"},
  {"GetUseLabelOutline", PyvtkMRMLSliceNode_GetUseLabelOutline, METH_VARARGS,
   "GetUseLabelOutline(self) -> int\nC++: virtual int GetUseLabelOutline()\n\nUse the label outline filter on this slice?\n"},
  {"SetUseLabelOutline", PyvtkMRMLSliceNode_SetUseLabelOutline, METH_VARARGS,
   "SetUseLabelOutline(self, _arg:int) -> None\nC++: virtual void SetUseLabelOutline(int _arg)\n\n"},
  {"UseLabelOutlineOn", PyvtkMRMLSliceNode_UseLabelOutlineOn, METH_VARARGS,
   "UseLabelOutlineOn(self) -> None\nC++: virtual void UseLabelOutlineOn()\n\n"},
  {"UseLabelOutlineOff", PyvtkMRMLSliceNode_UseLabelOutlineOff, METH_VARARGS,
   "UseLabelOutlineOff(self) -> None\nC++: virtual void UseLabelOutlineOff()\n\n"},
  {"SetOrientationToAxial", PyvtkMRMLSliceNode_SetOrientationToAxial, METH_VARARGS,
   "SetOrientationToAxial(self) -> bool\nC++: bool SetOrientationToAxial()\n\nSet 'standard' radiological convention views of patient space.\n\nIf the associated orientation preset has been renamed or removed,\ncalling these function returns False.\n\n\\sa SetOrientation(const char*)\n"},
  {"SetOrientationToSagittal", PyvtkMRMLSliceNode_SetOrientationToSagittal, METH_VARARGS,
   "SetOrientationToSagittal(self) -> bool\nC++: bool SetOrientationToSagittal()\n\n"},
  {"SetOrientationToCoronal", PyvtkMRMLSliceNode_SetOrientationToCoronal, METH_VARARGS,
   "SetOrientationToCoronal(self) -> bool\nC++: bool SetOrientationToCoronal()\n\n"},
  {"SetOrientationToDefault", PyvtkMRMLSliceNode_SetOrientationToDefault, METH_VARARGS,
   "SetOrientationToDefault(self) -> bool\nC++: bool SetOrientationToDefault()\n\nSet slice orientation to that is defined in DefaultOrientation.\nReturns true on success.\n"},
  {"GetOrientation", PyvtkMRMLSliceNode_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> str\nC++: std::string GetOrientation()\nGetOrientation(self, sliceToRAS:vtkMatrix4x4) -> str\nC++: std::string GetOrientation(vtkMatrix4x4 *sliceToRAS)\n\nGet orientation.\n\nIt returns a string with a description of the slice orientation\n\n\\sa GetOrientation(vtkMatrix4x4* sliceToRAS)\n\\sa SetOrientation(const char* orientation)\n"},
  {"SetOrientation", PyvtkMRMLSliceNode_SetOrientation, METH_VARARGS,
   "SetOrientation(self, orientation:str) -> bool\nC++: bool SetOrientation(const char *orientation)\n\nSet orientation.\n\nIt adjusts the SliceToRAS matrix to position the slice cutting\nplane.\n\nValid orientations are known as presets and are easily added,\nremoved or renamed.\n\n\\sa AddSliceOrientationPreset(const std::string& name,\n    vtkMatrix4x4* sliceToRAS)\n\\sa UpdateMatrices()\n"},
  {"SetDefaultOrientation", PyvtkMRMLSliceNode_SetDefaultOrientation, METH_VARARGS,
   "SetDefaultOrientation(self, _arg:str) -> None\nC++: virtual void SetDefaultOrientation(const char *_arg)\n\nSet default orientation preset name.\n\nIf slice view orientation is reset is requested then orientation\nis set to this preset.\n"},
  {"GetDefaultOrientation", PyvtkMRMLSliceNode_GetDefaultOrientation, METH_VARARGS,
   "GetDefaultOrientation(self) -> str\nC++: virtual char *GetDefaultOrientation()\n\n"},
  {"GetOrientationString", PyvtkMRMLSliceNode_GetOrientationString, METH_VARARGS,
   "GetOrientationString(self) -> str\nC++: virtual const char *GetOrientationString()\n\nGet orientation.\n\n\\deprecated Prefer GetOrientation()\n"},
  {"GetSliceOrientationPreset", PyvtkMRMLSliceNode_GetSliceOrientationPreset, METH_VARARGS,
   "GetSliceOrientationPreset(self, name:str) -> vtkMatrix3x3\nC++: vtkMatrix3x3 *GetSliceOrientationPreset(\n    const std::string &name)\n\nReturn the sliceToRAS matrix associated with name.\n"},
  {"GetSliceOrientationPresetName", PyvtkMRMLSliceNode_GetSliceOrientationPresetName, METH_VARARGS,
   "GetSliceOrientationPresetName(self,\n    orientationMatrix:vtkMatrix3x3) -> str\nC++: std::string GetSliceOrientationPresetName(\n    vtkMatrix3x3 *orientationMatrix)\n\nReturn the preset name corresponding to orientationMatrix.\n\nReturns an empty string if orientationMatrix is not an existing\npreset.\n"},
  {"GetSliceOrientationPresetNames", PyvtkMRMLSliceNode_GetSliceOrientationPresetNames, METH_VARARGS,
   "GetSliceOrientationPresetNames(self,\n    presetOrientationNames:vtkStringArray) -> None\nC++: void GetSliceOrientationPresetNames(\n    vtkStringArray *presetOrientationNames)\n\nReturn all the orientation preset names.\n"},
  {"GetNumberOfSliceOrientationPresets", PyvtkMRMLSliceNode_GetNumberOfSliceOrientationPresets, METH_VARARGS,
   "GetNumberOfSliceOrientationPresets(self) -> int\nC++: int GetNumberOfSliceOrientationPresets()\n\nReturn number of orientation presets.\n\\sa AddSliceOrientationPreset(const std::string& name,\n    vtkMatrix3x3* orientationMatrix)\n"},
  {"AddSliceOrientationPreset", PyvtkMRMLSliceNode_AddSliceOrientationPreset, METH_VARARGS,
   "AddSliceOrientationPreset(self, name:str,\n    orientationMatrix:vtkMatrix3x3) -> bool\nC++: bool AddSliceOrientationPreset(const std::string &name,\n    vtkMatrix3x3 *orientationMatrix)\n\nAdd or update an orientation preset.\n\n\\sa RenameSliceOrientationPreset(const std::string& name, const\n    std::string& updatedName)\n\\sa RemoveSliceOrientationPreset(const std::string& name)\n"},
  {"RemoveSliceOrientationPreset", PyvtkMRMLSliceNode_RemoveSliceOrientationPreset, METH_VARARGS,
   "RemoveSliceOrientationPreset(self, name:str) -> bool\nC++: bool RemoveSliceOrientationPreset(const std::string &name)\n\nRemove an orientation preset.\n\n\\sa AddSliceOrientationPreset(const std::string& name,\n    vtkMatrix4x4* sliceToRAS)\n"},
  {"RenameSliceOrientationPreset", PyvtkMRMLSliceNode_RenameSliceOrientationPreset, METH_VARARGS,
   "RenameSliceOrientationPreset(self, name:str, updatedName:str)\n    -> bool\nC++: bool RenameSliceOrientationPreset(const std::string &name,\n    const std::string &updatedName)\n\nRename an orientation preset.\n\n\\sa AddSliceOrientationPreset(const std::string& name,\n    vtkMatrix4x4* sliceToRAS)\n"},
  {"HasSliceOrientationPreset", PyvtkMRMLSliceNode_HasSliceOrientationPreset, METH_VARARGS,
   "HasSliceOrientationPreset(self, name:str) -> bool\nC++: bool HasSliceOrientationPreset(const std::string &name)\n\nReturn True if an orientation preset is stored.\n\n\\sa AddSliceOrientationPreset(const std::string& name,\n    vtkMatrix4x4* sliceToRAS)\n"},
  {"GetReformatOrientationName", PyvtkMRMLSliceNode_GetReformatOrientationName, METH_VARARGS,
   "GetReformatOrientationName() -> str\nC++: static const char *GetReformatOrientationName()\n\nReturns the name of \"Reformat\" orientation, which means that it\nis none of the known orientations.\n"},
  {"GetAxialSliceToRASMatrix", PyvtkMRMLSliceNode_GetAxialSliceToRASMatrix, METH_VARARGS,
   "GetAxialSliceToRASMatrix(orientationMatrix:vtkMatrix3x3,\n    patientRightIsScreenLeft:bool=True) -> None\nC++: static void GetAxialSliceToRASMatrix(\n    vtkMatrix3x3 *orientationMatrix,\n    bool patientRightIsScreenLeft=true)\n\nInitialize orientationMatrix as an `Axial` orientation matrix.\n\\param patientRightIsScreenLeft chooses between radiology\n    (default, patient right is left side on the screen)\nand neurology (patient right is right side on the screen) view\norientation conventions.\n"},
  {"GetSagittalSliceToRASMatrix", PyvtkMRMLSliceNode_GetSagittalSliceToRASMatrix, METH_VARARGS,
   "GetSagittalSliceToRASMatrix(orientationMatrix:vtkMatrix3x3,\n    patientRightIsScreenLeft:bool=True) -> None\nC++: static void GetSagittalSliceToRASMatrix(\n    vtkMatrix3x3 *orientationMatrix,\n    bool patientRightIsScreenLeft=true)\n\nInitialize orientationMatrix as a `Sagittal` orientation matrix.\n\\param patientRightIsScreenLeft chooses between radiology\n    (default, patient right is left side on the screen)\nand neurology (patient right is right side on the screen) view\norientation conventions.\n"},
  {"GetCoronalSliceToRASMatrix", PyvtkMRMLSliceNode_GetCoronalSliceToRASMatrix, METH_VARARGS,
   "GetCoronalSliceToRASMatrix(orientationMatrix:vtkMatrix3x3,\n    patientRightIsScreenLeft:bool=True) -> None\nC++: static void GetCoronalSliceToRASMatrix(\n    vtkMatrix3x3 *orientationMatrix,\n    bool patientRightIsScreenLeft=true)\n\nInitialize orientationMatrix as a `Coronal` orientation matrix.\n\\param patientRightIsScreenLeft chooses between radiology\n    (default, patient right is left side on the screen)\nand neurology (patient right is right side on the screen) view\norientation conventions.\n"},
  {"AddDefaultSliceOrientationPresets", PyvtkMRMLSliceNode_AddDefaultSliceOrientationPresets, METH_VARARGS,
   "AddDefaultSliceOrientationPresets(scene:vtkMRMLScene,\n    patientRightIsScreenLeft:bool=True) -> None\nC++: static void AddDefaultSliceOrientationPresets(\n    vtkMRMLScene *scene, bool patientRightIsScreenLeft=true)\n\nAdd default slice orientation presets to scene.\n\\param patientRightIsScreenLeft chooses between radiology\n    (default, patient right is left side on the screen)\nand neurology (patient right is right side on the screen) view\norientation conventions.\n\\sa vtkMRMLScene::AddDefaultNode(vtkMRMLNode* node)\n\\sa GetAxialSliceToRASMatrix, GetSagittalSliceToRASMatrix,\n    GetCoronalSliceToRASMatrix\n"},
  {"GetFieldOfView", PyvtkMRMLSliceNode_GetFieldOfView, METH_VARARGS,
   "GetFieldOfView(self) -> (float, float, float)\nC++: virtual double *GetFieldOfView()\n\nSize of the slice plane in millimeters\n"},
  {"SetFieldOfView", PyvtkMRMLSliceNode_SetFieldOfView, METH_VARARGS,
   "SetFieldOfView(self, x:float, y:float, z:float) -> None\nC++: void SetFieldOfView(double x, double y, double z)\nSetFieldOfView(self, xyz:[float, float, float]) -> None\nC++: void SetFieldOfView(double xyz[3])\n\n"},
  {"GetXYZOrigin", PyvtkMRMLSliceNode_GetXYZOrigin, METH_VARARGS,
   "GetXYZOrigin(self) -> (float, float, float)\nC++: virtual double *GetXYZOrigin()\n\nOrigin of XYZ window\n"},
  {"SetXYZOrigin", PyvtkMRMLSliceNode_SetXYZOrigin, METH_VARARGS,
   "SetXYZOrigin(self, x:float, y:float, z:float) -> None\nC++: void SetXYZOrigin(double x, double y, double z)\nSetXYZOrigin(self, xyz:[float, float, float]) -> None\nC++: void SetXYZOrigin(double xyz[3])\n\n"},
  {"GetDimensions", PyvtkMRMLSliceNode_GetDimensions, METH_VARARGS,
   "GetDimensions(self) -> (int, int, int)\nC++: virtual int *GetDimensions()\n\nNumber of samples in each direction\n-- note that the spacing is implicitly FieldOfView / Dimensions\n"},
  {"SetDimensions", PyvtkMRMLSliceNode_SetDimensions, METH_VARARGS,
   "SetDimensions(self, x:int, y:int, z:int) -> None\nC++: void SetDimensions(int x, int y, int z)\nSetDimensions(self, xyz:[int, int, int]) -> None\nC++: void SetDimensions(int xyz[3])\n\n"},
  {"GetUVWDimensions", PyvtkMRMLSliceNode_GetUVWDimensions, METH_VARARGS,
   "GetUVWDimensions(self) -> (int, int, int)\nC++: virtual int *GetUVWDimensions()\n\nNumber of samples in each direction for the reslice operation\n-- this is the resolution that each slice layer is resliced into\n-- the outputs of the slice layers are then composited and\n   upsampled to the full Dimensions\n-- note that z, the number of slices, should be the same for both\n   Dimensions and UVWDimensions\n"},
  {"SetUVWDimensions", PyvtkMRMLSliceNode_SetUVWDimensions, METH_VARARGS,
   "SetUVWDimensions(self, x:int, y:int, z:int) -> None\nC++: void SetUVWDimensions(int x, int y, int z)\nSetUVWDimensions(self, xyz:[int, int, int]) -> None\nC++: void SetUVWDimensions(int xyz[3])\n\n"},
  {"GetUVWMaximumDimensions", PyvtkMRMLSliceNode_GetUVWMaximumDimensions, METH_VARARGS,
   "GetUVWMaximumDimensions(self) -> (int, int, int)\nC++: virtual int *GetUVWMaximumDimensions()\n\nmaximum limit for  UVWDimensions\n"},
  {"SetUVWMaximumDimensions", PyvtkMRMLSliceNode_SetUVWMaximumDimensions, METH_VARARGS,
   "SetUVWMaximumDimensions(self, x:int, y:int, z:int) -> None\nC++: void SetUVWMaximumDimensions(int x, int y, int z)\nSetUVWMaximumDimensions(self, xyz:[int, int, int]) -> None\nC++: void SetUVWMaximumDimensions(int xyz[3])\n\n"},
  {"GetUVWExtents", PyvtkMRMLSliceNode_GetUVWExtents, METH_VARARGS,
   "GetUVWExtents(self) -> (float, float, float)\nC++: virtual double *GetUVWExtents()\n\nGet/Set maximum extent in any direction occupied by slice\n"},
  {"SetUVWExtents", PyvtkMRMLSliceNode_SetUVWExtents, METH_VARARGS,
   "SetUVWExtents(self, x:float, y:float, z:float) -> None\nC++: void SetUVWExtents(double x, double y, double z)\nSetUVWExtents(self, xyz:[float, float, float]) -> None\nC++: void SetUVWExtents(double xyz[3])\n\n"},
  {"GetUVWOrigin", PyvtkMRMLSliceNode_GetUVWOrigin, METH_VARARGS,
   "GetUVWOrigin(self) -> (float, float, float)\nC++: virtual double *GetUVWOrigin()\n\nOrigin of UVW window\n"},
  {"SetUVWOrigin", PyvtkMRMLSliceNode_SetUVWOrigin, METH_VARARGS,
   "SetUVWOrigin(self, x:float, y:float, z:float) -> None\nC++: void SetUVWOrigin(double x, double y, double z)\nSetUVWOrigin(self, xyz:[float, float, float]) -> None\nC++: void SetUVWOrigin(double xyz[3])\n\n"},
  {"SetSliceOrigin", PyvtkMRMLSliceNode_SetSliceOrigin, METH_VARARGS,
   "SetSliceOrigin(self, xyz:[float, float, float]) -> None\nC++: void SetSliceOrigin(double xyz[3])\nSetSliceOrigin(self, x:float, y:float, z:float) -> None\nC++: void SetSliceOrigin(double x, double y, double z)\n\nOrigin of slice in XYZ or UVW space depending on\nSliceResolutionMode\n"},
  {"SetUVWExtentsAndDimensions", PyvtkMRMLSliceNode_SetUVWExtentsAndDimensions, METH_VARARGS,
   "SetUVWExtentsAndDimensions(self, extents:[float, float, float],\n    dimensions:[int, int, int]) -> None\nC++: void SetUVWExtentsAndDimensions(double extents[3],\n    int dimensions[3])\n\nSet UVW extents and dimensions, produces less updates then\ncalling both separately\n"},
  {"GetXYToSlice", PyvtkMRMLSliceNode_GetXYToSlice, METH_VARARGS,
   "GetXYToSlice(self) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetXYToSlice()\n\nMatrix mapping from XY pixel coordinates on an image window into\nslice coordinates in mm\n"},
  {"GetXYToRAS", PyvtkMRMLSliceNode_GetXYToRAS, METH_VARARGS,
   "GetXYToRAS(self) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetXYToRAS()\n\nMatrix mapping from XY pixel coordinates on an image window into\nRAS world coordinates\n"},
  {"GetUVWToSlice", PyvtkMRMLSliceNode_GetUVWToSlice, METH_VARARGS,
   "GetUVWToSlice(self) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetUVWToSlice()\n\nMatrix mapping from UVW texture coordinates into slice\ncoordinates in mm\n"},
  {"GetUVWToRAS", PyvtkMRMLSliceNode_GetUVWToRAS, METH_VARARGS,
   "GetUVWToRAS(self) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetUVWToRAS()\n\nMatrix mapping from UVW texture coordinates into RAS world\ncoordinates\n"},
  {"MatrixAreEqual", PyvtkMRMLSliceNode_MatrixAreEqual, METH_VARARGS,
   "MatrixAreEqual(self, m1:vtkMatrix4x4, m2:vtkMatrix4x4) -> bool\nC++: bool MatrixAreEqual(const vtkMatrix4x4 *m1,\n    const vtkMatrix4x4 *m2)\nMatrixAreEqual(self, matrix:vtkMatrix4x4,\n    orientationMatrix:vtkMatrix3x3) -> bool\nC++: bool MatrixAreEqual(const vtkMatrix4x4 *matrix,\n    const vtkMatrix3x3 *orientationMatrix)\n\nhelper for comparing to matrices\n"},
  {"UpdateMatrices", PyvtkMRMLSliceNode_UpdateMatrices, METH_VARARGS,
   "UpdateMatrices(self) -> None\nC++: void UpdateMatrices()\n\nRecalculate XYToSlice and XYToRAS in terms or fov, dim,\nSliceToRAS\n- called when any of the inputs change\n"},
  {"SetLayoutGrid", PyvtkMRMLSliceNode_SetLayoutGrid, METH_VARARGS,
   "SetLayoutGrid(self, rows:int, columns:int) -> None\nC++: void SetLayoutGrid(int rows, int columns)\n\nSet the number of rows and columns to use in a LightBox display\nof the node\n"},
  {"GetLayoutGridRows", PyvtkMRMLSliceNode_GetLayoutGridRows, METH_VARARGS,
   "GetLayoutGridRows(self) -> int\nC++: virtual int GetLayoutGridRows()\n\nSet/Get the number of rows to use in a LightBox display\n"},
  {"SetLayoutGridRows", PyvtkMRMLSliceNode_SetLayoutGridRows, METH_VARARGS,
   "SetLayoutGridRows(self, rows:int) -> None\nC++: virtual void SetLayoutGridRows(int rows)\n\n"},
  {"GetLayoutGridColumns", PyvtkMRMLSliceNode_GetLayoutGridColumns, METH_VARARGS,
   "GetLayoutGridColumns(self) -> int\nC++: virtual int GetLayoutGridColumns()\n\nSet/Get the number of columns to use in a LightBox display\n"},
  {"SetLayoutGridColumns", PyvtkMRMLSliceNode_SetLayoutGridColumns, METH_VARARGS,
   "SetLayoutGridColumns(self, cols:int) -> None\nC++: virtual void SetLayoutGridColumns(int cols)\n\n"},
  {"SetSliceToRASByNTP", PyvtkMRMLSliceNode_SetSliceToRASByNTP, METH_VARARGS,
   "SetSliceToRASByNTP(self, Nx:float, Ny:float, Nz:float, Tx:float,\n    Ty:float, Tz:float, Px:float, Py:float, Pz:float,\n    Orientation:int) -> None\nC++: void SetSliceToRASByNTP(double Nx, double Ny, double Nz,\n    double Tx, double Ty, double Tz, double Px, double Py,\n    double Pz, int Orientation)\n\nSet the SliceToRAS matrix according to the position and\norientation of the locator: N(x, y, z) - the direction vector of\nthe locator T(x, y, z) - the transverse direction vector of the\nlocator P(x, y, z) - the tip location of the locator All the\nabove values are in RAS space.\n"},
  {"JumpSlice", PyvtkMRMLSliceNode_JumpSlice, METH_VARARGS,
   "JumpSlice(self, r:float, a:float, s:float) -> None\nC++: void JumpSlice(double r, double a, double s)\n\nSet the RAS offset of the Slice to the passed values. JumpSlice\nand JumpAllSlices use the JumpMode to determine how to jump.\n"},
  {"JumpAllSlices", PyvtkMRMLSliceNode_JumpAllSlices, METH_VARARGS,
   "JumpAllSlices(self, r:float, a:float, s:float) -> None\nC++: void JumpAllSlices(double r, double a, double s)\nJumpAllSlices(scene:vtkMRMLScene, r:float, a:float, s:float,\n    jumpMode:int=..., viewGroup:int=-1,\n    exclude:vtkMRMLSliceNode=...) -> None\nC++: static void JumpAllSlices(vtkMRMLScene *scene, double r,\n    double a, double s,\n    int jumpMode=vtkMRMLSliceNode::DefaultJumpSlice,\n    int viewGroup=-1, vtkMRMLSliceNode *exclude=nullptr)\n\n"},
  {"JumpSliceByOffsetting", PyvtkMRMLSliceNode_JumpSliceByOffsetting, METH_VARARGS,
   "JumpSliceByOffsetting(self, r:float, a:float, s:float) -> None\nC++: void JumpSliceByOffsetting(double r, double a, double s)\nJumpSliceByOffsetting(self, k:int, r:float, a:float, s:float)\n    -> None\nC++: void JumpSliceByOffsetting(int k, double r, double a,\n    double s)\n\n"},
  {"JumpSliceByCentering", PyvtkMRMLSliceNode_JumpSliceByCentering, METH_VARARGS,
   "JumpSliceByCentering(self, r:float, a:float, s:float) -> None\nC++: void JumpSliceByCentering(double r, double a, double s)\n\n"},
  {"SetJumpMode", PyvtkMRMLSliceNode_SetJumpMode, METH_VARARGS,
   "SetJumpMode(self, _arg:int) -> None\nC++: virtual void SetJumpMode(int _arg)\n\nControl how JumpSlice operates. CenteredJumpMode puts the\nspecified RAS position in the center of the slice. OffsetJumpMode\ndoes not change the slice position, merely adjusts the slice\noffset to get the RAS position on the slice.\n"},
  {"GetJumpMode", PyvtkMRMLSliceNode_GetJumpMode, METH_VARARGS,
   "GetJumpMode(self) -> int\nC++: virtual int GetJumpMode()\n\n"},
  {"SetJumpModeToCentered", PyvtkMRMLSliceNode_SetJumpModeToCentered, METH_VARARGS,
   "SetJumpModeToCentered(self) -> None\nC++: void SetJumpModeToCentered()\n\n"},
  {"SetJumpModeToOffset", PyvtkMRMLSliceNode_SetJumpModeToOffset, METH_VARARGS,
   "SetJumpModeToOffset(self) -> None\nC++: void SetJumpModeToOffset()\n\n"},
  {"GetSliceSpacingMode", PyvtkMRMLSliceNode_GetSliceSpacingMode, METH_VARARGS,
   "GetSliceSpacingMode(self) -> int\nC++: virtual int GetSliceSpacingMode()\n\nGet/Set the slice spacing mode. Slice spacing can be\nautomatically calculated using GetLowestVolumeSliceSpacing() or\nprescribed\n"},
  {"SetSliceSpacingMode", PyvtkMRMLSliceNode_SetSliceSpacingMode, METH_VARARGS,
   "SetSliceSpacingMode(self, _arg:int) -> None\nC++: virtual void SetSliceSpacingMode(int _arg)\n\n"},
  {"SetSliceSpacingModeToAutomatic", PyvtkMRMLSliceNode_SetSliceSpacingModeToAutomatic, METH_VARARGS,
   "SetSliceSpacingModeToAutomatic(self) -> None\nC++: void SetSliceSpacingModeToAutomatic()\n\n"},
  {"SetSliceSpacingModeToPrescribed", PyvtkMRMLSliceNode_SetSliceSpacingModeToPrescribed, METH_VARARGS,
   "SetSliceSpacingModeToPrescribed(self) -> None\nC++: void SetSliceSpacingModeToPrescribed()\n\n"},
  {"SetPrescribedSliceSpacing", PyvtkMRMLSliceNode_SetPrescribedSliceSpacing, METH_VARARGS,
   "SetPrescribedSliceSpacing(self, _arg1:float, _arg2:float,\n    _arg3:float) -> None\nC++: virtual void SetPrescribedSliceSpacing(double _arg1,\n    double _arg2, double _arg3)\nSetPrescribedSliceSpacing(self, _arg:(float, float, float))\n    -> None\nC++: virtual void SetPrescribedSliceSpacing(const double _arg[3])\n\nSet/get the slice spacing to use when the SliceSpacingMode is\n\"Prescribed\"\n"},
  {"GetPrescribedSliceSpacing", PyvtkMRMLSliceNode_GetPrescribedSliceSpacing, METH_VARARGS,
   "GetPrescribedSliceSpacing(self) -> (float, float, float)\nC++: virtual double *GetPrescribedSliceSpacing()\n\n"},
  {"GetSliceOffset", PyvtkMRMLSliceNode_GetSliceOffset, METH_VARARGS,
   "GetSliceOffset(self) -> float\nC++: double GetSliceOffset()\n\nGet/Set the current distance from the origin to the slice plane\n"},
  {"SetSliceOffset", PyvtkMRMLSliceNode_SetSliceOffset, METH_VARARGS,
   "SetSliceOffset(self, offset:float) -> None\nC++: void SetSliceOffset(double offset)\n\n"},
  {"SetActiveSlice", PyvtkMRMLSliceNode_SetActiveSlice, METH_VARARGS,
   "SetActiveSlice(self, _arg:int) -> None\nC++: virtual void SetActiveSlice(int _arg)\n\nSet/get the active slice in the lightbox. The active slice is\nshown in the 3D scene\n"},
  {"GetActiveSlice", PyvtkMRMLSliceNode_GetActiveSlice, METH_VARARGS,
   "GetActiveSlice(self) -> int\nC++: virtual int GetActiveSlice()\n\n"},
  {"RotateToVolumePlane", PyvtkMRMLSliceNode_RotateToVolumePlane, METH_VARARGS,
   "RotateToVolumePlane(self, volumeNode:vtkMRMLVolumeNode,\n    forceSlicePlaneToSingleSlice:bool=True) -> None\nC++: void RotateToVolumePlane(vtkMRMLVolumeNode *volumeNode,\n    bool forceSlicePlaneToSingleSlice=true)\n\nAdjusts the slice node to align with the native space of the\nimage data so that no oblique resampling occurs when rendering\n(helps to see original acquisition data and for oblique volumes\nwith few slices).\n\\param forceSlicePlaneToSingleSlice If the volume is single-slice\nand forceSlicePlaneToSingleSlice\nis enabled then slice view will be aligned with the volume's\nslice plane. If the flag is disabled or the volume has more than\none slice then the slice view will be rotated to the closest\northogonal axis.\n"},
  {"RotateToAxes", PyvtkMRMLSliceNode_RotateToAxes, METH_VARARGS,
   "RotateToAxes(self, referenceToRAS:vtkMatrix4x4,\n    sliceNormalAxisIndex:int=-1) -> None\nC++: void RotateToAxes(vtkMatrix4x4 *referenceToRAS,\n    int sliceNormalAxisIndex=-1)\n\nAdjusts the slice node to align with the axes of the provided\nreference coordinate system so that no oblique resampling occurs\nwhen rendering (helps to see original acquisition data and for\noblique volumes with few slices). If sliceNormalAxisIndex is >=0\nthen slice plane normal will be aligned with that axis.\n"},
  {"SetInteracting", PyvtkMRMLSliceNode_SetInteracting, METH_VARARGS,
   "SetInteracting(self, __a:int) -> None\nC++: void SetInteracting(int)\n\nGet/Set a flag indicating whether this node is actively being\nmanipulated (usually) by a user interface. This flag is used by\nlogic classes to determine whether state changes should be\npropagated to other nodes to implement linked controls. Does not\ncause a Modified().\n"},
  {"GetInteracting", PyvtkMRMLSliceNode_GetInteracting, METH_VARARGS,
   "GetInteracting(self) -> int\nC++: virtual int GetInteracting()\n\n"},
  {"InteractingOn", PyvtkMRMLSliceNode_InteractingOn, METH_VARARGS,
   "InteractingOn(self) -> None\nC++: virtual void InteractingOn()\n\n"},
  {"InteractingOff", PyvtkMRMLSliceNode_InteractingOff, METH_VARARGS,
   "InteractingOff(self) -> None\nC++: virtual void InteractingOff()\n\n"},
  {"SetInteractionFlags", PyvtkMRMLSliceNode_SetInteractionFlags, METH_VARARGS,
   "SetInteractionFlags(self, __a:int) -> None\nC++: void SetInteractionFlags(unsigned int)\n\nGet/Set a flag indicating what parameters are being manipulated\nwithin calls to InteractingOn() and InteractingOff(). These\nfields are used to propagate linked behaviors. This flag is a\nbitfield, with multiple parameters OR'd to compose the flag. Does\nnot cause a Modified().\n"},
  {"GetInteractionFlags", PyvtkMRMLSliceNode_GetInteractionFlags, METH_VARARGS,
   "GetInteractionFlags(self) -> int\nC++: virtual unsigned int GetInteractionFlags()\n\n"},
  {"SetInteractionFlagsModifier", PyvtkMRMLSliceNode_SetInteractionFlagsModifier, METH_VARARGS,
   "SetInteractionFlagsModifier(self, __a:int) -> None\nC++: void SetInteractionFlagsModifier(unsigned int)\n\nGet/Set a flag indicating how the linking behavior should be\nmodified. InteractionFlags modifier uses bits defined by\nInteractionFlagType enum that by default are all set and result\nin the default behavior. If a bit is not set, this will result in\nslice node interactions not broadcast.\n"},
  {"GetInteractionFlagsModifier", PyvtkMRMLSliceNode_GetInteractionFlagsModifier, METH_VARARGS,
   "GetInteractionFlagsModifier(self) -> int\nC++: virtual unsigned int GetInteractionFlagsModifier()\n\n"},
  {"ResetInteractionFlagsModifier", PyvtkMRMLSliceNode_ResetInteractionFlagsModifier, METH_VARARGS,
   "ResetInteractionFlagsModifier(self) -> None\nC++: void ResetInteractionFlagsModifier()\n\nSet all flags of the modifier to 1, resulting in the default\nlinking behavior (broadcast of the updates to the parameters\ndefined by the InteractionFlagType enum).\n"},
  {"SetSliceResolutionMode", PyvtkMRMLSliceNode_SetSliceResolutionMode, METH_VARARGS,
   "SetSliceResolutionMode(self, mode:int) -> None\nC++: virtual void SetSliceResolutionMode(int mode)\n\nmethod for setting UVW space (extents, dimensions and spacing)\n"},
  {"GetSliceResolutionMode", PyvtkMRMLSliceNode_GetSliceResolutionMode, METH_VARARGS,
   "GetSliceResolutionMode(self) -> int\nC++: virtual int GetSliceResolutionMode()\n\n"},
  {"GetSlabReconstructionEnabled", PyvtkMRMLSliceNode_GetSlabReconstructionEnabled, METH_VARARGS,
   "GetSlabReconstructionEnabled(self) -> bool\nC++: virtual bool GetSlabReconstructionEnabled()\n\nGet/set the slab reconstruction visibility.\n"},
  {"SetSlabReconstructionEnabled", PyvtkMRMLSliceNode_SetSlabReconstructionEnabled, METH_VARARGS,
   "SetSlabReconstructionEnabled(self, _arg:bool) -> None\nC++: virtual void SetSlabReconstructionEnabled(bool _arg)\n\n"},
  {"SlabReconstructionEnabledOn", PyvtkMRMLSliceNode_SlabReconstructionEnabledOn, METH_VARARGS,
   "SlabReconstructionEnabledOn(self) -> None\nC++: virtual void SlabReconstructionEnabledOn()\n\n"},
  {"SlabReconstructionEnabledOff", PyvtkMRMLSliceNode_SlabReconstructionEnabledOff, METH_VARARGS,
   "SlabReconstructionEnabledOff(self) -> None\nC++: virtual void SlabReconstructionEnabledOff()\n\n"},
  {"GetSlabReconstructionType", PyvtkMRMLSliceNode_GetSlabReconstructionType, METH_VARARGS,
   "GetSlabReconstructionType(self) -> int\nC++: virtual int GetSlabReconstructionType()\n\nGet/set the slab reconstruction type.\n"},
  {"SetSlabReconstructionType", PyvtkMRMLSliceNode_SetSlabReconstructionType, METH_VARARGS,
   "SetSlabReconstructionType(self, _arg:int) -> None\nC++: virtual void SetSlabReconstructionType(int _arg)\n\n"},
  {"GetSlabReconstructionTypeAsString", PyvtkMRMLSliceNode_GetSlabReconstructionTypeAsString, METH_VARARGS,
   "GetSlabReconstructionTypeAsString(slabReconstructionType:int)\n    -> str\nC++: static const char *GetSlabReconstructionTypeAsString(\n    int slabReconstructionType)\n\n"},
  {"GetSlabReconstructionTypeFromString", PyvtkMRMLSliceNode_GetSlabReconstructionTypeFromString, METH_VARARGS,
   "GetSlabReconstructionTypeFromString(name:str) -> int\nC++: static int GetSlabReconstructionTypeFromString(\n    const char *name)\n\n"},
  {"GetSlabReconstructionThickness", PyvtkMRMLSliceNode_GetSlabReconstructionThickness, METH_VARARGS,
   "GetSlabReconstructionThickness(self) -> float\nC++: virtual double GetSlabReconstructionThickness()\n\nGet/set the slab reconstruction thickness in physical unit.\n"},
  {"SetSlabReconstructionThickness", PyvtkMRMLSliceNode_SetSlabReconstructionThickness, METH_VARARGS,
   "SetSlabReconstructionThickness(self, _arg:float) -> None\nC++: virtual void SetSlabReconstructionThickness(double _arg)\n\n"},
  {"GetSlabReconstructionOversamplingFactor", PyvtkMRMLSliceNode_GetSlabReconstructionOversamplingFactor, METH_VARARGS,
   "GetSlabReconstructionOversamplingFactor(self) -> float\nC++: virtual double GetSlabReconstructionOversamplingFactor()\n\nGet/set the slab reconstruction oversampling factor.\n"},
  {"SetSlabReconstructionOversamplingFactor", PyvtkMRMLSliceNode_SetSlabReconstructionOversamplingFactor, METH_VARARGS,
   "SetSlabReconstructionOversamplingFactor(self, _arg:float) -> None\nC++: virtual void SetSlabReconstructionOversamplingFactor(\n    double _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSliceNode_Doc =
  "vtkMRMLSliceNode - MRML node for storing a slice through RAS space.\n\n"
  "Superclass: vtkMRMLAbstractViewNode\n\n"
  "This node stores the information about how to map from RAS space to\n"
  "the desired slice plane.\n"
  "\\li SliceToRAS is the matrix that rotates and translates the slice\n"
  "    plane\n"
  "\\li FieldOfView tells the size of slice plane\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSliceNode", // tp_name
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
  PyvtkMRMLSliceNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSliceNode_StaticNew()
{
  return vtkMRMLSliceNode::New();
}

PyObject *PyvtkMRMLSliceNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSliceNode_Type, PyvtkMRMLSliceNode_Methods,
    "vtkMRMLSliceNode",
 &PyvtkMRMLSliceNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractViewNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLSliceNode_InteractionFlagType_Type);
  PyVTKEnum_Add(&PyvtkMRMLSliceNode_InteractionFlagType_Type, "vtkMRMLSliceNode.InteractionFlagType");

  o = (PyObject *)&PyvtkMRMLSliceNode_InteractionFlagType_Type;
  if (PyDict_SetItemString(d, "InteractionFlagType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLSliceNode_SliceResolutionModeType_Type);
  PyVTKEnum_Add(&PyvtkMRMLSliceNode_SliceResolutionModeType_Type, "vtkMRMLSliceNode.SliceResolutionModeType");

  o = (PyObject *)&PyvtkMRMLSliceNode_SliceResolutionModeType_Type;
  if (PyDict_SetItemString(d, "SliceResolutionModeType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "DefaultJumpSlice", vtkMRMLSliceNode::DefaultJumpSlice },
        { "CenteredJumpSlice", vtkMRMLSliceNode::CenteredJumpSlice },
        { "OffsetJumpSlice", vtkMRMLSliceNode::OffsetJumpSlice },
        { "AutomaticSliceSpacingMode", vtkMRMLSliceNode::AutomaticSliceSpacingMode },
        { "PrescribedSliceSpacingMode", vtkMRMLSliceNode::PrescribedSliceSpacingMode },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 13; c++)
  {
    typedef vtkMRMLSliceNode::InteractionFlagType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[13] = {
        { "None_", vtkMRMLSliceNode::None },
        { "SliceToRASFlag", vtkMRMLSliceNode::SliceToRASFlag },
        { "FieldOfViewFlag", vtkMRMLSliceNode::FieldOfViewFlag },
        { "OrientationFlag", vtkMRMLSliceNode::OrientationFlag },
        { "ResetFieldOfViewFlag", vtkMRMLSliceNode::ResetFieldOfViewFlag },
        { "MultiplanarReformatFlag", vtkMRMLSliceNode::MultiplanarReformatFlag },
        { "XYZOriginFlag", vtkMRMLSliceNode::XYZOriginFlag },
        { "LabelOutlineFlag", vtkMRMLSliceNode::LabelOutlineFlag },
        { "SliceVisibleFlag", vtkMRMLSliceNode::SliceVisibleFlag },
        { "SliceSpacingFlag", vtkMRMLSliceNode::SliceSpacingFlag },
        { "ResetOrientationFlag", vtkMRMLSliceNode::ResetOrientationFlag },
        { "RotateToBackgroundVolumePlaneFlag", vtkMRMLSliceNode::RotateToBackgroundVolumePlaneFlag },
        { "UpdateSlabReconstructionThicknessFlag", vtkMRMLSliceNode::UpdateSlabReconstructionThicknessFlag },
      };

    o = PyvtkMRMLSliceNode_InteractionFlagType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkMRMLSliceNode::SliceResolutionModeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "SliceResolutionMatchVolumes", vtkMRMLSliceNode::SliceResolutionMatchVolumes },
        { "SliceResolutionMatch2DView", vtkMRMLSliceNode::SliceResolutionMatch2DView },
        { "SliceFOVMatch2DViewSpacingMatchVolumes", vtkMRMLSliceNode::SliceFOVMatch2DViewSpacingMatchVolumes },
        { "SliceFOVMatchVolumesSpacingMatch2DView", vtkMRMLSliceNode::SliceFOVMatchVolumesSpacingMatch2DView },
        { "SliceResolutionCustom", vtkMRMLSliceNode::SliceResolutionCustom },
      };

    o = PyvtkMRMLSliceNode_SliceResolutionModeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLSliceNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSliceNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSliceNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

