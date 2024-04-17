// python wrapper for vtkMRMLNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLNode_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLNode_ContentModifiedObserveType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLNode.ContentModifiedObserveType", // tp_name
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
PyObject *PyvtkMRMLNode_ContentModifiedObserveType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLNode_ContentModifiedObserveType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLNode *tempr = vtkMRMLNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLNode::NewInstance());

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
PyvtkMRMLNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = op->CreateNodeInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_UpdateReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateReferences();
    }
    else
    {
      op->vtkMRMLNode::UpdateReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_ProcessChildNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessChildNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->ProcessChildNode(temp0);
    }
    else
    {
      op->vtkMRMLNode::ProcessChildNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

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
      op->vtkMRMLNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_OnNodeAddedToScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnNodeAddedToScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnNodeAddedToScene();
    }
    else
    {
      op->vtkMRMLNode::OnNodeAddedToScene();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

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
      op->vtkMRMLNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

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
      op->vtkMRMLNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_CopyReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->CopyReferences(temp0);
    }
    else
    {
      op->vtkMRMLNode::CopyReferences(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_CopyWithScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyWithScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->CopyWithScene(temp0);
    }
    else
    {
      op->vtkMRMLNode::CopyWithScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

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
      op->vtkMRMLNode::Reset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_StartModify(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartModify");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->StartModify() :
      op->vtkMRMLNode::StartModify());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_EndModify(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndModify");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->EndModify(temp0) :
      op->vtkMRMLNode::EndModify(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetNodeTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetTypeDisplayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeDisplayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTypeDisplayName() :
      op->vtkMRMLNode::GetTypeDisplayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAttribute(temp0, temp1);
    }
    else
    {
      op->vtkMRMLNode::SetAttribute(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_RemoveAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAttribute(temp0);
    }
    else
    {
      op->vtkMRMLNode::RemoveAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttribute(temp0) :
      op->vtkMRMLNode::GetAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetAttributeNames_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetAttributeNames() :
      op->vtkMRMLNode::GetAttributeNames());

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
PyvtkMRMLNode_GetAttributeNames_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->GetAttributeNames(temp0);
    }
    else
    {
      op->vtkMRMLNode::GetAttributeNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLNode_GetAttributeNames(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLNode_GetAttributeNames_s1(self, args);
    case 1:
      return PyvtkMRMLNode_GetAttributeNames_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAttributeNames");
  return nullptr;
}


static PyObject *
PyvtkMRMLNode_GetHideFromEditors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHideFromEditors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHideFromEditors() :
      op->vtkMRMLNode::GetHideFromEditors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetHideFromEditors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHideFromEditors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHideFromEditors(temp0);
    }
    else
    {
      op->vtkMRMLNode::SetHideFromEditors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_HideFromEditorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideFromEditorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideFromEditorsOn();
    }
    else
    {
      op->vtkMRMLNode::HideFromEditorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_HideFromEditorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideFromEditorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideFromEditorsOff();
    }
    else
    {
      op->vtkMRMLNode::HideFromEditorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetSelectable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectable() :
      op->vtkMRMLNode::GetSelectable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetSelectable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectable(temp0);
    }
    else
    {
      op->vtkMRMLNode::SetSelectable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SelectableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectableOn();
    }
    else
    {
      op->vtkMRMLNode::SelectableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SelectableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectableOff();
    }
    else
    {
      op->vtkMRMLNode::SelectableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetUndoEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUndoEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUndoEnabled() :
      op->vtkMRMLNode::GetUndoEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetUndoEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUndoEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUndoEnabled(temp0);
    }
    else
    {
      op->vtkMRMLNode::SetUndoEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_UndoEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UndoEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UndoEnabledOn();
    }
    else
    {
      op->vtkMRMLNode::UndoEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_UndoEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UndoEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UndoEnabledOff();
    }
    else
    {
      op->vtkMRMLNode::UndoEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

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
      op->vtkMRMLNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLNode_GetInMRMLCallbackFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInMRMLCallbackFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInMRMLCallbackFlag() :
      op->vtkMRMLNode::GetInMRMLCallbackFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetInMRMLCallbackFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInMRMLCallbackFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInMRMLCallbackFlag(temp0);
    }
    else
    {
      op->vtkMRMLNode::SetInMRMLCallbackFlag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDescription(temp0);
    }
    else
    {
      op->vtkMRMLNode::SetDescription(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDescription() :
      op->vtkMRMLNode::GetDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetName(temp0);
    }
    else
    {
      op->vtkMRMLNode::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkMRMLNode::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetID() :
      op->vtkMRMLNode::GetID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetSingletonTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingletonTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSingletonTag(temp0);
    }
    else
    {
      op->vtkMRMLNode::SetSingletonTag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetSingletonTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingletonTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSingletonTag() :
      op->vtkMRMLNode::GetSingletonTag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetSingletonOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingletonOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSingletonOn();
    }
    else
    {
      op->vtkMRMLNode::SetSingletonOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetSingletonOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingletonOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSingletonOff();
    }
    else
    {
      op->vtkMRMLNode::SetSingletonOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_IsSingleton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSingleton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSingleton() :
      op->vtkMRMLNode::IsSingleton());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetSaveWithScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveWithScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSaveWithScene() :
      op->vtkMRMLNode::GetSaveWithScene());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetSaveWithScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveWithScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSaveWithScene(temp0);
    }
    else
    {
      op->vtkMRMLNode::SetSaveWithScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SaveWithSceneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveWithSceneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveWithSceneOn();
    }
    else
    {
      op->vtkMRMLNode::SaveWithSceneOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SaveWithSceneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveWithSceneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveWithSceneOff();
    }
    else
    {
      op->vtkMRMLNode::SaveWithSceneOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetAddToScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddToScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAddToScene() :
      op->vtkMRMLNode::GetAddToScene());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetAddToScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddToScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddToScene(temp0);
    }
    else
    {
      op->vtkMRMLNode::SetAddToScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_AddToSceneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToSceneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddToSceneOn();
    }
    else
    {
      op->vtkMRMLNode::AddToSceneOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_AddToSceneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToSceneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddToSceneOff();
    }
    else
    {
      op->vtkMRMLNode::AddToSceneOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetAddToSceneNoModify(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddToSceneNoModify");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddToSceneNoModify(temp0);
    }
    else
    {
      op->vtkMRMLNode::SetAddToSceneNoModify(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetDisableModifiedEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableModifiedEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisableModifiedEvent() :
      op->vtkMRMLNode::GetDisableModifiedEvent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetDisableModifiedEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisableModifiedEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisableModifiedEvent(temp0);
    }
    else
    {
      op->vtkMRMLNode::SetDisableModifiedEvent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_DisableModifiedEventOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableModifiedEventOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableModifiedEventOn();
    }
    else
    {
      op->vtkMRMLNode::DisableModifiedEventOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_DisableModifiedEventOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableModifiedEventOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableModifiedEventOff();
    }
    else
    {
      op->vtkMRMLNode::DisableModifiedEventOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetModifiedEventPending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModifiedEventPending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModifiedEventPending() :
      op->vtkMRMLNode::GetModifiedEventPending());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetCustomModifiedEventPending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomModifiedEventPending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCustomModifiedEventPending(temp0) :
      op->vtkMRMLNode::GetCustomModifiedEventPending(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkMRMLNode::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_InvokePendingModifiedEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokePendingModifiedEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->InvokePendingModifiedEvent() :
      op->vtkMRMLNode::InvokePendingModifiedEvent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_InvokeCustomModifiedEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeCustomModifiedEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  int temp0;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetBuffer(temp1, &pbuf1)))
  {
    if (ap.IsBound())
    {
      op->InvokeCustomModifiedEvent(temp0, temp1);
    }
    else
    {
      op->vtkMRMLNode::InvokeCustomModifiedEvent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}


static PyObject *
PyvtkMRMLNode_GetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLScene *tempr = (ap.IsBound() ?
      op->GetScene() :
      op->vtkMRMLNode::GetScene());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->SetScene(temp0);
    }
    else
    {
      op->vtkMRMLNode::SetScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetSceneReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSceneReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSceneReferences();
    }
    else
    {
      op->vtkMRMLNode::SetSceneReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_UpdateReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

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
      op->vtkMRMLNode::UpdateReferenceID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetContentModifiedEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContentModifiedEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetContentModifiedEvents() :
      op->vtkMRMLNode::GetContentModifiedEvents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_URLEncodeString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "URLEncodeString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->URLEncodeString(temp0) :
      op->vtkMRMLNode::URLEncodeString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_URLDecodeString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "URLDecodeString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->URLDecodeString(temp0) :
      op->vtkMRMLNode::URLDecodeString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_XMLAttributeEncodeString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XMLAttributeEncodeString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->XMLAttributeEncodeString(temp0) :
      op->vtkMRMLNode::XMLAttributeEncodeString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_XMLAttributeDecodeString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XMLAttributeDecodeString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->XMLAttributeDecodeString(temp0) :
      op->vtkMRMLNode::XMLAttributeDecodeString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelected() :
      op->vtkMRMLNode::GetSelected());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelected(temp0);
    }
    else
    {
      op->vtkMRMLNode::SetSelected(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SelectedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectedOn();
    }
    else
    {
      op->vtkMRMLNode::SelectedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SelectedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectedOff();
    }
    else
    {
      op->vtkMRMLNode::SelectedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_AddNodeReferenceRole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeReferenceRole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkIntArray *temp2 = nullptr;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 4) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkIntArray")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->AddNodeReferenceRole(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLNode::AddNodeReferenceRole(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetNodeReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->SetNodeReferenceID(temp0, temp1) :
      op->vtkMRMLNode::SetNodeReferenceID(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_AddNodeReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->AddNodeReferenceID(temp0, temp1) :
      op->vtkMRMLNode::AddNodeReferenceID(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetNthNodeReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthNodeReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->SetNthNodeReferenceID(temp0, temp1, temp2) :
      op->vtkMRMLNode::SetNthNodeReferenceID(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetAndObserveNodeReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveNodeReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkIntArray *temp2 = nullptr;
  typedef vtkMRMLNode::ContentModifiedObserveType temp3_type;
  temp3_type temp3 = vtkMRMLNode::ContentModifiedObserveUndefined;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkIntArray")) &&
      (ap.NoArgsLeft() || ap.GetEnumValue(temp3, "vtkMRMLNode.ContentModifiedObserveType")))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->SetAndObserveNodeReferenceID(temp0, temp1, temp2, temp3) :
      op->vtkMRMLNode::SetAndObserveNodeReferenceID(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_AddAndObserveNodeReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAndObserveNodeReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkIntArray *temp2 = nullptr;
  typedef vtkMRMLNode::ContentModifiedObserveType temp3_type;
  temp3_type temp3 = vtkMRMLNode::ContentModifiedObserveUndefined;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkIntArray")) &&
      (ap.NoArgsLeft() || ap.GetEnumValue(temp3, "vtkMRMLNode.ContentModifiedObserveType")))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->AddAndObserveNodeReferenceID(temp0, temp1, temp2, temp3) :
      op->vtkMRMLNode::AddAndObserveNodeReferenceID(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_SetAndObserveNthNodeReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveNthNodeReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  const char *temp2 = nullptr;
  vtkIntArray *temp3 = nullptr;
  typedef vtkMRMLNode::ContentModifiedObserveType temp4_type;
  temp4_type temp4 = vtkMRMLNode::ContentModifiedObserveUndefined;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkIntArray")) &&
      (ap.NoArgsLeft() || ap.GetEnumValue(temp4, "vtkMRMLNode.ContentModifiedObserveType")))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->SetAndObserveNthNodeReferenceID(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMRMLNode::SetAndObserveNthNodeReferenceID(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_RemoveNthNodeReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNthNodeReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RemoveNthNodeReferenceID(temp0, temp1);
    }
    else
    {
      op->vtkMRMLNode::RemoveNthNodeReferenceID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_RemoveNodeReferenceIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNodeReferenceIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveNodeReferenceIDs(temp0);
    }
    else
    {
      op->vtkMRMLNode::RemoveNodeReferenceIDs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_HasNodeReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasNodeReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->HasNodeReferenceID(temp0, temp1) :
      op->vtkMRMLNode::HasNodeReferenceID(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetNumberOfNodeReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeReferences(temp0) :
      op->vtkMRMLNode::GetNumberOfNodeReferences(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetNthNodeReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthNodeReferenceID(temp0, temp1) :
      op->vtkMRMLNode::GetNthNodeReferenceID(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetNodeReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeReferenceID(temp0) :
      op->vtkMRMLNode::GetNodeReferenceID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetNthNodeReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetNthNodeReference(temp0, temp1) :
      op->vtkMRMLNode::GetNthNodeReference(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetNodeReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetNodeReference(temp0) :
      op->vtkMRMLNode::GetNodeReference(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetNodeReferenceRoles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeReferenceRoles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->GetNodeReferenceRoles(temp0);
    }
    else
    {
      op->vtkMRMLNode::GetNodeReferenceRoles(temp0);
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
PyvtkMRMLNode_GetNumberOfNodeReferenceRoles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeReferenceRoles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeReferenceRoles() :
      op->vtkMRMLNode::GetNumberOfNodeReferenceRoles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNode_GetNthNodeReferenceRole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeReferenceRole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNode *op = static_cast<vtkMRMLNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthNodeReferenceRole(temp0) :
      op->vtkMRMLNode::GetNthNodeReferenceRole(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLNode\nC++: static vtkMRMLNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: virtual vtkMRMLNode *CreateNodeInstance()\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"HasCopyContent", PyvtkMRMLNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: virtual bool HasCopyContent()\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"UpdateReferences", PyvtkMRMLNode_UpdateReferences, METH_VARARGS,
   "UpdateReferences(self) -> None\nC++: virtual void UpdateReferences()\n\nThe method should remove all pointers and observations to all\n    nodes\nthat are not in the scene anymore.\n\nThis method is called when one or more referenced nodes are\ndeleted from the scene.\n"},
  {"ProcessChildNode", PyvtkMRMLNode_ProcessChildNode, METH_VARARGS,
   "ProcessChildNode(self, __a:vtkMRMLNode) -> None\nC++: virtual void ProcessChildNode(vtkMRMLNode *)\n\nSet dependencies between this node and a child node\nwhen parsing XML file.\n"},
  {"UpdateScene", PyvtkMRMLNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, __a:vtkMRMLScene) -> None\nC++: virtual void UpdateScene(vtkMRMLScene *)\n\nUpdates other nodes in the scene depending on this node or\nupdates this node if it depends on other nodes when the scene is\nread in This method is called automatically by XML parser after\nall nodes are created\n"},
  {"OnNodeAddedToScene", PyvtkMRMLNode_OnNodeAddedToScene, METH_VARARGS,
   "OnNodeAddedToScene(self) -> None\nC++: virtual void OnNodeAddedToScene()\n\nUpdates this node if it depends on other nodes when the scene is\nread in This method is called by scene when a node added to a\nscene.\n"},
  {"Copy", PyvtkMRMLNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: virtual void Copy(vtkMRMLNode *node)\n\nCopy node contents from another node of the same type.\nDoes not copy node ID and Scene. Performs deep copy - an\nindependent copy is created from all data, including bulk data.\n\note Subclasses should implement this method. Call this method in\nthe subclass implementation.\n"},
  {"CopyContent", PyvtkMRMLNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: virtual void CopyContent(vtkMRMLNode *node,\n    bool deepCopy=true)\n\nCopy node contents from another node of the same type.\nDoes not copy node ID, Scene, Name, SingletonTag,\nHideFromEditors, AddToScene, UndoEnabled, and node references. If\ndeepCopy is set to false then a shallow copy of bulk data (such\nas image or mesh data) could be made; copying may be faster but\nthe node may share some data with the source node instead of\ncreating an independent copy.\n\note If a class implements this then make sure CopyContent and\nHasCopyContent methods are implemented in all parent classes by\nadding vtkMRMLCopyContentMacro(ClassName) to the class headers.\n"},
  {"CopyReferences", PyvtkMRMLNode_CopyReferences, METH_VARARGS,
   "CopyReferences(self, node:vtkMRMLNode) -> None\nC++: virtual void CopyReferences(vtkMRMLNode *node)\n\nCopy the references of the node into this.\n\nExisting references will be replaced if found in node, or removed\nif not in node.\n"},
  {"CopyWithScene", PyvtkMRMLNode_CopyWithScene, METH_VARARGS,
   "CopyWithScene(self, node:vtkMRMLNode) -> None\nC++: void CopyWithScene(vtkMRMLNode *node)\n\nCopy everything (including Scene and ID) from another node of\nthe same type.\n\note The node is **not** added into the scene of node. You must do\nit manually **after** calling CopyWithScene(vtkMRMLNode*) using\nvtkMRMLScene::AddNode(vtkMRMLNode*). Only one\nvtkCommand::ModifiedEvent is invoked, after the copy is fully\ncompleted.\n\n\\bug Calling vtkMRMLScene::AddNode(vtkMRMLNode*) **before**\nCopyWithScene(vtkMRMLNode*) is **NOT** supported, it will\nunsynchronize the node internal caches. See\n[#4078](https://github.com/Slicer/Slicer/issues/4078)\n\n\\sa vtkMRMLScene::AddNode(vtkMRMLNode*)\n"},
  {"Reset", PyvtkMRMLNode_Reset, METH_VARARGS,
   "Reset(self, defaultNode:vtkMRMLNode) -> None\nC++: virtual void Reset(vtkMRMLNode *defaultNode)\n\nReset node attributes to the initial state as defined in the\nconstructor or the passed default node.\n\nIt preserves values of the following dynamic attributes that may\nbe set by an application:\n* SaveWithScene\n* HideFromEditors\n* Selectable\n* SingletonTag.\n\nIf a defaultNode pointer is passed then the values stored in that\nnode will be used to set the node contents. If defaultNode is\nnullptr then the values set in the constructor of the class will\nbe used to set the node contents.\n\note Other attributes that needs to be preserved should be handled\nin the subclass.\n\n\\sa SetSaveWithScene()\n\\sa SetHideFromEditors()\n\\sa SetSelectable()\n\\sa SetSingletonTag()\n"},
  {"StartModify", PyvtkMRMLNode_StartModify, METH_VARARGS,
   "StartModify(self) -> int\nC++: virtual int StartModify()\n\nStart modifying the node. Disable Modify events.\n\nReturns the previous state of DisableModifiedEvent flag that\nshould be passed to EndModify() method.\n\n\\sa EndModify()\n"},
  {"EndModify", PyvtkMRMLNode_EndModify, METH_VARARGS,
   "EndModify(self, previousDisableModifiedEventState:int) -> int\nC++: virtual int EndModify(int previousDisableModifiedEventState)\n\nEnd modifying the node.\n\nEnable Modify events if the previous state ofDisableModifiedEvent\nflag is 0.\n\nReturn the number of pending events (even if\nInvokePendingModifiedEvent() is not called).\n"},
  {"GetNodeTagName", PyvtkMRMLNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: virtual const char *GetNodeTagName()\n\nGet node XML tag name (like Volume, Model).\n\note Subclasses should implement this method.\n"},
  {"GetTypeDisplayName", PyvtkMRMLNode_GetTypeDisplayName, METH_VARARGS,
   "GetTypeDisplayName(self) -> str\nC++: virtual const char *GetTypeDisplayName()\n\nGet node type display name (like \"Closed Curve\", \"Markup\", etc).\n\note Subclasses should override this method to provide a more\nappropriate and translatable name.\n"},
  {"SetAttribute", PyvtkMRMLNode_SetAttribute, METH_VARARGS,
   "SetAttribute(self, name:str, value:str) -> None\nC++: void SetAttribute(const char *name, const char *value)\n\nSet a name value pair attribute.\n\nFires a vtkCommand::ModifiedEvent.\n\nAttributes are written in the XML. If value is 0, the attribute\nname is removed from the pair list.\n\nThis function is a no-op if name is null or empty.\n\n\\sa WriteXML()\n"},
  {"RemoveAttribute", PyvtkMRMLNode_RemoveAttribute, METH_VARARGS,
   "RemoveAttribute(self, name:str) -> None\nC++: void RemoveAttribute(const char *name)\n\nRemove attribute with the specified name.\n"},
  {"GetAttribute", PyvtkMRMLNode_GetAttribute, METH_VARARGS,
   "GetAttribute(self, name:str) -> str\nC++: const char *GetAttribute(const char *name)\n\nGet value of a name value pair attribute.\n\nReturn nullptr if the name does not exist.\n"},
  {"GetAttributeNames", PyvtkMRMLNode_GetAttributeNames, METH_VARARGS,
   "GetAttributeNames(self) -> (str, ...)\nC++: std::vector<std::string> GetAttributeNames()\nGetAttributeNames(self, attributeNames:vtkStringArray) -> None\nC++: void GetAttributeNames(vtkStringArray *attributeNames)\n\nGet all attribute names.\n"},
  {"GetHideFromEditors", PyvtkMRMLNode_GetHideFromEditors, METH_VARARGS,
   "GetHideFromEditors(self) -> int\nC++: virtual int GetHideFromEditors()\n\nDescribes if the node is hidden.\n"},
  {"SetHideFromEditors", PyvtkMRMLNode_SetHideFromEditors, METH_VARARGS,
   "SetHideFromEditors(self, _arg:int) -> None\nC++: virtual void SetHideFromEditors(int _arg)\n\n"},
  {"HideFromEditorsOn", PyvtkMRMLNode_HideFromEditorsOn, METH_VARARGS,
   "HideFromEditorsOn(self) -> None\nC++: virtual void HideFromEditorsOn()\n\n"},
  {"HideFromEditorsOff", PyvtkMRMLNode_HideFromEditorsOff, METH_VARARGS,
   "HideFromEditorsOff(self) -> None\nC++: virtual void HideFromEditorsOff()\n\n"},
  {"GetSelectable", PyvtkMRMLNode_GetSelectable, METH_VARARGS,
   "GetSelectable(self) -> int\nC++: virtual int GetSelectable()\n\nDescribes if the node is selectable.\n"},
  {"SetSelectable", PyvtkMRMLNode_SetSelectable, METH_VARARGS,
   "SetSelectable(self, _arg:int) -> None\nC++: virtual void SetSelectable(int _arg)\n\n"},
  {"SelectableOn", PyvtkMRMLNode_SelectableOn, METH_VARARGS,
   "SelectableOn(self) -> None\nC++: virtual void SelectableOn()\n\n"},
  {"SelectableOff", PyvtkMRMLNode_SelectableOff, METH_VARARGS,
   "SelectableOff(self) -> None\nC++: virtual void SelectableOff()\n\n"},
  {"GetUndoEnabled", PyvtkMRMLNode_GetUndoEnabled, METH_VARARGS,
   "GetUndoEnabled(self) -> bool\nC++: virtual bool GetUndoEnabled()\n\nSpecifies if the state of this node is stored in the scene's undo\nbuffer. False by default to make sure that undo can be enabled\nselectively, only for nodes that are prepared to work correctly\nwhen saved/restored. Nodes with different UndoEnabled value must\nnot reference to each other, because restoring states could lead\nto unresolved node references. Therefore, when undo is enabled\nfor a certain node, it must be enabled for nodes that it\nreferences (for example, if undo is enabled for vtkMRMLModelNode\nthen it must be enabled for vtkMRMLModelDisplayNode and\nvtkMRMLModelStorageNode as well).\n"},
  {"SetUndoEnabled", PyvtkMRMLNode_SetUndoEnabled, METH_VARARGS,
   "SetUndoEnabled(self, _arg:bool) -> None\nC++: virtual void SetUndoEnabled(bool _arg)\n\n"},
  {"UndoEnabledOn", PyvtkMRMLNode_UndoEnabledOn, METH_VARARGS,
   "UndoEnabledOn(self) -> None\nC++: virtual void UndoEnabledOn()\n\n"},
  {"UndoEnabledOff", PyvtkMRMLNode_UndoEnabledOff, METH_VARARGS,
   "UndoEnabledOff(self) -> None\nC++: virtual void UndoEnabledOff()\n\n"},
  {"ProcessMRMLEvents", PyvtkMRMLNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: virtual void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData)\n\nPropagate events generated in mrml.\n"},
  {"GetInMRMLCallbackFlag", PyvtkMRMLNode_GetInMRMLCallbackFlag, METH_VARARGS,
   "GetInMRMLCallbackFlag(self) -> int\nC++: virtual int GetInMRMLCallbackFlag()\n\nFlags to avoid event loops.\n\n\\warning Do NOT use the SetMacro or it call modified on itself\n    and\ngenerate even more events!\n"},
  {"SetInMRMLCallbackFlag", PyvtkMRMLNode_SetInMRMLCallbackFlag, METH_VARARGS,
   "SetInMRMLCallbackFlag(self, flag:int) -> None\nC++: void SetInMRMLCallbackFlag(int flag)\n\n"},
  {"SetDescription", PyvtkMRMLNode_SetDescription, METH_VARARGS,
   "SetDescription(self, _arg:str) -> None\nC++: virtual void SetDescription(const char *_arg)\n\nText description of this node, to be set by the user.\n"},
  {"GetDescription", PyvtkMRMLNode_GetDescription, METH_VARARGS,
   "GetDescription(self) -> str\nC++: virtual char *GetDescription()\n\n"},
  {"SetName", PyvtkMRMLNode_SetName, METH_VARARGS,
   "SetName(self, _arg:str) -> None\nC++: virtual void SetName(const char *_arg)\n\nName of this node, to be set by the user\n"},
  {"GetName", PyvtkMRMLNode_GetName, METH_VARARGS,
   "GetName(self) -> str\nC++: virtual char *GetName()\n\n"},
  {"GetID", PyvtkMRMLNode_GetID, METH_VARARGS,
   "GetID(self) -> str\nC++: virtual char *GetID()\n\nID use by other nodes to reference this node in XML.\n"},
  {"SetSingletonTag", PyvtkMRMLNode_SetSingletonTag, METH_VARARGS,
   "SetSingletonTag(self, _arg:str) -> None\nC++: virtual void SetSingletonTag(const char *_arg)\n\nTag that make this node a singleton in the scene.\n\nIf set to nullptr, multiple instances of this node class are\nallowed.\n\nIf set to a non-nullptr string, the node will be a singleton and\nthe scene will replace this node instead of adding new instances.\n\nThe SingletonTag is used by the scene to build a unique ID.\n\nIf the there can only be one instance of a given node class in\nthe scene, then the singleton tag should be Singleton. For\nexample, the interaction and selection nodes are named Selection\nand Interaction, with Singleton tags set to Singleton, and with\nIDs set to vtkMRMLSelectionNodeSingleton and\nvtkMRMLInteractionNodeSingleton. If the singleton node is\nassociated with a specific module it should use the module name,\nwhich already needs to be unique, as the tag. The Editor module\nuses this naming convention, with a parameter node that has a\nsingleton tag of Editor and a node ID of\nvtkMRMLScriptedModuleNodeEditor. If the there is more than one\ninstance of the node class then the singleton tag should be\nSingleton post-pended with a unique identifier for that specific\nnode (e.g. the name). Any new color nodes should use this\nconvention, with a name of NewName, a Singleton tag of\nSingletonNewName, leading to an ID of\nvtkMRMLColorTableNodeSingletonNewName. The existing MRML nodes\ndon't always use these conventions but are kept unchanged for\nbackward compatibility.\n\\sa vtkMRMLScene::BuildID\n"},
  {"GetSingletonTag", PyvtkMRMLNode_GetSingletonTag, METH_VARARGS,
   "GetSingletonTag(self) -> str\nC++: virtual char *GetSingletonTag()\n\n"},
  {"SetSingletonOn", PyvtkMRMLNode_SetSingletonOn, METH_VARARGS,
   "SetSingletonOn(self) -> None\nC++: void SetSingletonOn()\n\n"},
  {"SetSingletonOff", PyvtkMRMLNode_SetSingletonOff, METH_VARARGS,
   "SetSingletonOff(self) -> None\nC++: void SetSingletonOff()\n\n"},
  {"IsSingleton", PyvtkMRMLNode_IsSingleton, METH_VARARGS,
   "IsSingleton(self) -> bool\nC++: bool IsSingleton()\n\n"},
  {"GetSaveWithScene", PyvtkMRMLNode_GetSaveWithScene, METH_VARARGS,
   "GetSaveWithScene(self) -> int\nC++: virtual int GetSaveWithScene()\n\nSave node with MRML scene.\n"},
  {"SetSaveWithScene", PyvtkMRMLNode_SetSaveWithScene, METH_VARARGS,
   "SetSaveWithScene(self, _arg:int) -> None\nC++: virtual void SetSaveWithScene(int _arg)\n\n"},
  {"SaveWithSceneOn", PyvtkMRMLNode_SaveWithSceneOn, METH_VARARGS,
   "SaveWithSceneOn(self) -> None\nC++: virtual void SaveWithSceneOn()\n\n"},
  {"SaveWithSceneOff", PyvtkMRMLNode_SaveWithSceneOff, METH_VARARGS,
   "SaveWithSceneOff(self) -> None\nC++: virtual void SaveWithSceneOff()\n\n"},
  {"GetAddToScene", PyvtkMRMLNode_GetAddToScene, METH_VARARGS,
   "GetAddToScene(self) -> int\nC++: virtual int GetAddToScene()\n\nnode added to MRML scene.\n"},
  {"SetAddToScene", PyvtkMRMLNode_SetAddToScene, METH_VARARGS,
   "SetAddToScene(self, _arg:int) -> None\nC++: virtual void SetAddToScene(int _arg)\n\n"},
  {"AddToSceneOn", PyvtkMRMLNode_AddToSceneOn, METH_VARARGS,
   "AddToSceneOn(self) -> None\nC++: virtual void AddToSceneOn()\n\n"},
  {"AddToSceneOff", PyvtkMRMLNode_AddToSceneOff, METH_VARARGS,
   "AddToSceneOff(self) -> None\nC++: virtual void AddToSceneOff()\n\n"},
  {"SetAddToSceneNoModify", PyvtkMRMLNode_SetAddToSceneNoModify, METH_VARARGS,
   "SetAddToSceneNoModify(self, value:int) -> None\nC++: void SetAddToSceneNoModify(int value)\n\n"},
  {"GetDisableModifiedEvent", PyvtkMRMLNode_GetDisableModifiedEvent, METH_VARARGS,
   "GetDisableModifiedEvent(self) -> int\nC++: virtual int GetDisableModifiedEvent()\n\nTurn on/off generating InvokeEvent for set macros\n"},
  {"SetDisableModifiedEvent", PyvtkMRMLNode_SetDisableModifiedEvent, METH_VARARGS,
   "SetDisableModifiedEvent(self, onOff:int) -> None\nC++: void SetDisableModifiedEvent(int onOff)\n\n"},
  {"DisableModifiedEventOn", PyvtkMRMLNode_DisableModifiedEventOn, METH_VARARGS,
   "DisableModifiedEventOn(self) -> None\nC++: void DisableModifiedEventOn()\n\n"},
  {"DisableModifiedEventOff", PyvtkMRMLNode_DisableModifiedEventOff, METH_VARARGS,
   "DisableModifiedEventOff(self) -> None\nC++: void DisableModifiedEventOff()\n\n"},
  {"GetModifiedEventPending", PyvtkMRMLNode_GetModifiedEventPending, METH_VARARGS,
   "GetModifiedEventPending(self) -> int\nC++: virtual int GetModifiedEventPending()\n\nNumber of pending modified events.\n\n\\sa InvokePendingModifiedEvent()\n\\sa Modified()\n\\sa GetDisableModifiedEvent()\n"},
  {"GetCustomModifiedEventPending", PyvtkMRMLNode_GetCustomModifiedEventPending, METH_VARARGS,
   "GetCustomModifiedEventPending(self, eventId:int) -> int\nC++: int GetCustomModifiedEventPending(int eventId)\n\nReturns the number of times a custom modified event is requested\nbut not yet invoked on the node. A modified even is pending (not\nyet invoked) if it was requested after a StartModify() call and\nEndModify() is not called yet.\n\\sa GetModifiedEventPending()\n"},
  {"Modified", PyvtkMRMLNode_Modified, METH_VARARGS,
   "Modified(self) -> None\nC++: void Modified() override;\n\nCustomized version of Modified() allowing to compress\nvtkCommand::ModifiedEvent.\n\nIt overrides the vtkObject method so that all changes to the node\nwhich would normally generate a vtkCommand::ModifiedEvent can be\ngrouped into an `atomic` operation.\n\nTypical usage would be to disable modified events, call a series\nof `Set*` operations, and then re-enable modified events and call\nInvokePendingModifiedEvent() to invoke the event (if any of the\n`Set*` calls actually changed the values of the instance\nvariables).\n\n\\sa GetDisableModifiedEvent()\n"},
  {"InvokePendingModifiedEvent", PyvtkMRMLNode_InvokePendingModifiedEvent, METH_VARARGS,
   "InvokePendingModifiedEvent(self) -> int\nC++: virtual int InvokePendingModifiedEvent()\n\nInvokes any modified events that are `pending`.\n\nPending modified events were generated while the\nDisableModifiedEvent flag was nonzero.\n\nReturns the total number of pending modified events that have\nbeen replaced by the just invoked modified event(s).\n"},
  {"InvokeCustomModifiedEvent", PyvtkMRMLNode_InvokeCustomModifiedEvent, METH_VARARGS,
   "InvokeCustomModifiedEvent(self, eventId:int, callData:Pointer=...)\n     -> None\nC++: virtual void InvokeCustomModifiedEvent(int eventId,\n    void *callData=nullptr)\n\nThis method allows the node to compress events.\n\nInstead of invoking a certain event several times, the event is\ncalled only once, for all the invocations that are made between\nStartModify() and EndModify().\n\nTypical usage is to group several `...Added`, `...Removed`,\n`...Modified` events into one, to improve performance.\n\ncallData is passed to InvokeEvent() if the event is invoked\nimmediately.\n\nIf the event is not invoked immediately then it will be sent with\n`callData=nullptr`.\n"},
  {"GetScene", PyvtkMRMLNode_GetScene, METH_VARARGS,
   "GetScene(self) -> vtkMRMLScene\nC++: virtual vtkMRMLScene *GetScene()\n\nGet the scene this node has been added to.\n"},
  {"SetScene", PyvtkMRMLNode_SetScene, METH_VARARGS,
   "SetScene(self, scene:vtkMRMLScene) -> None\nC++: virtual void SetScene(vtkMRMLScene *scene)\n\nThis method is for internal use only.\nUse AddNode method of vtkMRMLScene to add a node to the scene.\n\nInternally calls SetSceneReferences()\n\\sa SetSceneReferences()\n"},
  {"SetSceneReferences", PyvtkMRMLNode_SetSceneReferences, METH_VARARGS,
   "SetSceneReferences(self) -> None\nC++: virtual void SetSceneReferences()\n\nUpdate the references of the node to the scene.\n\note You must unsure that a valid scene is set before calling\nSetSceneReferences().\n"},
  {"UpdateReferenceID", PyvtkMRMLNode_UpdateReferenceID, METH_VARARGS,
   "UpdateReferenceID(self, oldID:str, newID:str) -> None\nC++: virtual void UpdateReferenceID(const char *oldID,\n    const char *newID)\n\nUpdate the stored reference to another node in the scene.\n"},
  {"GetContentModifiedEvents", PyvtkMRMLNode_GetContentModifiedEvents, METH_VARARGS,
   "GetContentModifiedEvents(self) -> vtkIntArray\nC++: virtual vtkIntArray *GetContentModifiedEvents()\n\nReturn list of events that indicate that content of the node is\nmodified. For example, it is not enough to observe\nvtkCommand::ModifiedEvent to get notified when a transform stored\nin a transform node is modified, but\nvtkMRMLTransformableNode::TransformModifiedEvent must be observed\nas well.\n"},
  {"URLEncodeString", PyvtkMRMLNode_URLEncodeString, METH_VARARGS,
   "URLEncodeString(self, inString:str) -> str\nC++: const char *URLEncodeString(const char *inString)\n\nEncode a URL string.\n\nReturns the string (null) if the input is null.\n\note Currently only works on %, space, ', \", <, >\n\\sa URLDecodeString()\n"},
  {"URLDecodeString", PyvtkMRMLNode_URLDecodeString, METH_VARARGS,
   "URLDecodeString(self, inString:str) -> str\nC++: const char *URLDecodeString(const char *inString)\n\nDecode a URL string.\n\nReturns the string (null) if the input is null.\n\note Currently only works on %, space, ', \", <, >\n\\sa URLEncodeString()\n"},
  {"XMLAttributeEncodeString", PyvtkMRMLNode_XMLAttributeEncodeString, METH_VARARGS,
   "XMLAttributeEncodeString(self, inString:str) -> str\nC++: std::string XMLAttributeEncodeString(\n    const std::string &inString)\n\nEncode an XML attribute string (replaces special characters by\n    code sequences)\n\n\\sa XMLAttributeDecodeString()\n"},
  {"XMLAttributeDecodeString", PyvtkMRMLNode_XMLAttributeDecodeString, METH_VARARGS,
   "XMLAttributeDecodeString(self, inString:str) -> str\nC++: std::string XMLAttributeDecodeString(\n    const std::string &inString)\n\nDecode an XML attribute string.\n\nImportant: attributes that vtkMRMLNode::ReadXMLAttributes method\nreceives are already decoded, therefore no XML attribute decoding\nmust not be applied to those strings.\n\n\\sa XMLAttributeEncodeString()\n"},
  {"GetSelected", PyvtkMRMLNode_GetSelected, METH_VARARGS,
   "GetSelected(self) -> int\nC++: virtual int GetSelected()\n\nGet/Set for Selected\n"},
  {"SetSelected", PyvtkMRMLNode_SetSelected, METH_VARARGS,
   "SetSelected(self, _arg:int) -> None\nC++: virtual void SetSelected(int _arg)\n\n"},
  {"SelectedOn", PyvtkMRMLNode_SelectedOn, METH_VARARGS,
   "SelectedOn(self) -> None\nC++: virtual void SelectedOn()\n\n"},
  {"SelectedOff", PyvtkMRMLNode_SelectedOff, METH_VARARGS,
   "SelectedOff(self) -> None\nC++: virtual void SelectedOff()\n\n"},
  {"AddNodeReferenceRole", PyvtkMRMLNode_AddNodeReferenceRole, METH_VARARGS,
   "AddNodeReferenceRole(self, referenceRole:str,\n    mrmlAttributeName:str=..., events:vtkIntArray=...,\n    observeContentModifiedEvents:bool=False) -> None\nC++: void AddNodeReferenceRole(const char *referenceRole,\n    const char *mrmlAttributeName=nullptr,\n    vtkIntArray *events=nullptr,\n    bool observeContentModifiedEvents=false)\n\nAdd a referenceRole.\n\nThe referenceRole can be any unique string, for example\n\"display\", \"transform\" etc. Optionally a MRML attribute name for\nstoring the reference in the mrml scene file can be specified.\nFor example \"displayNodeRef\". If omitted the MRML attribute name\nwill be the same as the role. If referenceRole ends with '/', it\nis considered as a \"template\" reference role that can be used to\ngenerate attribute names dynamically by concatenation: If\nreferenceRole is \"unit/\" and mrmlAttributeName is \"UnitRef\", then\nthe generated MRML attribute names for a node reference role of\n\"unit/length\" will be \"lengthUnitRef\". Use this method to add new\nreference types to a node. This method is typically called in the\nconstructors of each subclass.\n\nThe optional events argument specifies what events should be\nobserved by default (e.g., when loading the scene from file). If\nreferenceRole ends with '/' character then events are used for\nall roles names begins with this role name (for example, events\nspecified for referenceRole='unit/' will be used for\nreferenceRole='unit/length', referenceRole='unit/area', etc).\n\nIf observeContentModifiedEvents is enabled then this node will\nget notifications when any of the event in the\nContentModifiedEvents list of the observed node is invoked.\n\n\\sa GetReferenceNodeFromMRMLAttributeName()\n"},
  {"SetNodeReferenceID", PyvtkMRMLNode_SetNodeReferenceID, METH_VARARGS,
   "SetNodeReferenceID(self, referenceRole:str, referencedNodeID:str)\n    -> vtkMRMLNode\nC++: vtkMRMLNode *SetNodeReferenceID(const char *referenceRole,\n    const char *referencedNodeID)\n\nSet a reference to a node with specified nodeID from this node\n    for a specific referenceRole.\n"},
  {"AddNodeReferenceID", PyvtkMRMLNode_AddNodeReferenceID, METH_VARARGS,
   "AddNodeReferenceID(self, referenceRole:str, referencedNodeID:str)\n    -> vtkMRMLNode\nC++: vtkMRMLNode *AddNodeReferenceID(const char *referenceRole,\n    const char *referencedNodeID)\n\nConvenience method that adds a referencedNodeID at the end of the\nlist.\n"},
  {"SetNthNodeReferenceID", PyvtkMRMLNode_SetNthNodeReferenceID, METH_VARARGS,
   "SetNthNodeReferenceID(self, referenceRole:str, n:int,\n    referencedNodeID:str) -> vtkMRMLNode\nC++: vtkMRMLNode *SetNthNodeReferenceID(const char *referenceRole,\n     int n, const char *referencedNodeID)\n\nSet a N-th reference from this node with\n    specifiedreferencedNodeID for a specific referenceRole.\n"},
  {"SetAndObserveNodeReferenceID", PyvtkMRMLNode_SetAndObserveNodeReferenceID, METH_VARARGS,
   "SetAndObserveNodeReferenceID(self, referenceRole:str,\n    referencedNodeID:str, events:vtkIntArray=...,\n    observeContentModifiedEvents:ContentModifiedObserveType=...)\n    -> vtkMRMLNode\nC++: vtkMRMLNode *SetAndObserveNodeReferenceID(\n    const char *referenceRole, const char *referencedNodeID,\n    vtkIntArray *events=nullptr,\n    ContentModifiedObserveType observeContentModifiedEvents=ContentModifiedObserveUndefined)\n\nSet and observe a reference node from this node for a\n    specificreferenceRole.\n\nObserve Modified event by default, optionally takes array of\nevents\n\nIf observeContentModifiedEvents is set to\nContentModifiedObserveEnabled then this node will get\nnotifications when any of the event in the ContentModifiedEvents\nlist of the observed node is invoked. If\nobserveContentModifiedEvents is set to\nContentModifiedObserveUndefined then the behavior defined in the\nnode reference role will be used.\n"},
  {"AddAndObserveNodeReferenceID", PyvtkMRMLNode_AddAndObserveNodeReferenceID, METH_VARARGS,
   "AddAndObserveNodeReferenceID(self, referenceRole:str,\n    referencedNodeID:str, events:vtkIntArray=...,\n    observeContentModifiedEvents:ContentModifiedObserveType=...)\n    -> vtkMRMLNode\nC++: vtkMRMLNode *AddAndObserveNodeReferenceID(\n    const char *referenceRole, const char *referencedNodeID,\n    vtkIntArray *events=nullptr,\n    ContentModifiedObserveType observeContentModifiedEvents=ContentModifiedObserveUndefined)\n\nAdd and observe a reference node from this node for a\n    specificreferenceRole.\n\nObserve Modified event by default, optionally takes array of\nevents.\n\nIf observeContentModifiedEvents is set to\nContentModifiedObserveEnabled then this node will get\nnotifications when any of the event in the ContentModifiedEvents\nlist of the observed node is invoked. If\nobserveContentModifiedEvents is set to\nContentModifiedObserveUndefined then the behavior defined in the\nnode reference role will be used.\n"},
  {"SetAndObserveNthNodeReferenceID", PyvtkMRMLNode_SetAndObserveNthNodeReferenceID, METH_VARARGS,
   "SetAndObserveNthNodeReferenceID(self, referenceRole:str, n:int,\n    referencedNodeID:str, events:vtkIntArray=...,\n    observeContentModifiedEvents:ContentModifiedObserveType=...)\n    -> vtkMRMLNode\nC++: vtkMRMLNode *SetAndObserveNthNodeReferenceID(\n    const char *referenceRole, int n,\n    const char *referencedNodeID, vtkIntArray *events=nullptr,\n    ContentModifiedObserveType observeContentModifiedEvents=ContentModifiedObserveUndefined)\n\nSet and observe the Nth node ID for a specific reference role.\n\nIf n is larger than the number of reference nodes, the node ID is\nadded at the end of the list. If nodeReferenceID is 0, the node\nID is removed from the list. When a node ID is set (added or\nchanged), its corresponding node is searched (slow) into the\nscene and cached for fast future access. It is possible however\nthat the node is not yet into the scene (due to some temporary\nstate (at loading time for example). UpdateScene() can later be\ncalled to retrieve the nodes from the scene (automatically done\nwhen loading a scene). Get(Nth)NodeReference() also scan the\nscene if the node was not yet cached.\n\nIf observeContentModifiedEvents is set to\nContentModifiedObserveEnabled then this node will get\nnotifications when any of the event in the ContentModifiedEvents\nlist of the observed node is invoked. If\nobserveContentModifiedEvents is set to\nContentModifiedObserveUndefined then the behavior defined in the\nnode reference role will be used.\n\n\\sa SetAndObserveNodeReferenceID(const char*)\n\\sa AddAndObserveNodeReferenceID(const char*)\n\\sa RemoveNthNodeReferenceID(int)\n"},
  {"RemoveNthNodeReferenceID", PyvtkMRMLNode_RemoveNthNodeReferenceID, METH_VARARGS,
   "RemoveNthNodeReferenceID(self, referenceRole:str, n:int) -> None\nC++: void RemoveNthNodeReferenceID(const char *referenceRole,\n    int n)\n\nConvenience method that removes the Nth node ID from the list.\n"},
  {"RemoveNodeReferenceIDs", PyvtkMRMLNode_RemoveNodeReferenceIDs, METH_VARARGS,
   "RemoveNodeReferenceIDs(self, referenceRole:str) -> None\nC++: void RemoveNodeReferenceIDs(const char *referenceRole)\n\nRemove all node IDs and associated nodes for a specific\n    referenceRole.\n\nIf referenceRole is 0 remove references for all roles\n"},
  {"HasNodeReferenceID", PyvtkMRMLNode_HasNodeReferenceID, METH_VARARGS,
   "HasNodeReferenceID(self, referenceRole:str, referencedNodeID:str)\n    -> bool\nC++: bool HasNodeReferenceID(const char *referenceRole,\n    const char *referencedNodeID)\n\nReturn true if referencedNodeID is in the node ID list for a\nspecific referenceRole.\n\nIf nullptr is specified as role then all roles are checked.\n"},
  {"GetNumberOfNodeReferences", PyvtkMRMLNode_GetNumberOfNodeReferences, METH_VARARGS,
   "GetNumberOfNodeReferences(self, referenceRole:str) -> int\nC++: int GetNumberOfNodeReferences(const char *referenceRole)\n\nReturn the number of node IDs for a specific reference role (and\n    nodes as they always\nhave the same size).\n"},
  {"GetNthNodeReferenceID", PyvtkMRMLNode_GetNthNodeReferenceID, METH_VARARGS,
   "GetNthNodeReferenceID(self, referenceRole:str, n:int) -> str\nC++: const char *GetNthNodeReferenceID(const char *referenceRole,\n    int n)\n\nReturn the string of the Nth node ID for a specific reference\n    role.\n\nReturn 0 if no such node exist.\n\n\\warning A temporary char generated from a std::string::c_str()\nis returned.\n"},
  {"GetNodeReferenceID", PyvtkMRMLNode_GetNodeReferenceID, METH_VARARGS,
   "GetNodeReferenceID(self, referenceRole:str) -> str\nC++: const char *GetNodeReferenceID(const char *referenceRole)\n\nUtility function that returns the first node id for a\n    specificreferenceRole.\n\n\\sa GetNthNodeReferenceID(int), GetNodeReference()\n"},
  {"GetNthNodeReference", PyvtkMRMLNode_GetNthNodeReference, METH_VARARGS,
   "GetNthNodeReference(self, referenceRole:str, n:int) -> vtkMRMLNode\nC++: vtkMRMLNode *GetNthNodeReference(const char *referenceRole,\n    int n)\n\nGet referenced MRML node for a specific referenceRole.\n\nCan be 0 in temporary states; e.g. if the referenced node has no\nscene, or if the referenced is not yet into the scene. If not\ncached, it internally scans (slow) the scene to search for the\nassociated referenced node ID. If the referencing node is no\nlonger in the scene (GetScene() == 0), it happens after the node\nis removed from the scene (scene->RemoveNode(dn), the returned\nreferenced node is 0.\n"},
  {"GetNodeReference", PyvtkMRMLNode_GetNodeReference, METH_VARARGS,
   "GetNodeReference(self, referenceRole:str) -> vtkMRMLNode\nC++: vtkMRMLNode *GetNodeReference(const char *referenceRole)\n\nUtility function that returns the first referenced node.\n\\sa GetNthNodeReference(int), GetNodeReferenceID()\n"},
  {"GetNodeReferenceRoles", PyvtkMRMLNode_GetNodeReferenceRoles, METH_VARARGS,
   "GetNodeReferenceRoles(self, roles:[str, ...]) -> None\nC++: void GetNodeReferenceRoles(std::vector<std::string> &roles)\n\nGet reference roles of the present node references.\n\\sa GetNodeReferenceRoles(), GetNodeReferenceRoles(),\n    GetNthNodeReferenceRole()\n"},
  {"GetNumberOfNodeReferenceRoles", PyvtkMRMLNode_GetNumberOfNodeReferenceRoles, METH_VARARGS,
   "GetNumberOfNodeReferenceRoles(self) -> int\nC++: int GetNumberOfNodeReferenceRoles()\n\nGet number of node reference role names.\n\\sa GetNodeReferenceRoles(), GetNodeReferenceRoles(),\n    GetNthNodeReferenceRole()\n"},
  {"GetNthNodeReferenceRole", PyvtkMRMLNode_GetNthNodeReferenceRole, METH_VARARGS,
   "GetNthNodeReferenceRole(self, n:int) -> str\nC++: const char *GetNthNodeReferenceRole(int n)\n\nGet a specific node reference role name.\n\\sa GetNodeReferenceRoles(), GetNodeReferenceRoles(),\n    GetNthNodeReferenceRole()\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLNode_Doc =
  "vtkMRMLNode - Abstract Superclass for all specific types of MRML\nnodes.\n\n"
  "Superclass: vtkObject\n\n"
  "This node encapsulates the functionality common to all types of MRML\n"
  "nodes. This includes member variables for ID, Description, and\n"
  "Options, as well as member functions to Copy() and Write().\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLNode", // tp_name
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
  PyvtkMRMLNode_Doc, // tp_doc
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

PyObject *PyvtkMRMLNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLNode_Type, PyvtkMRMLNode_Methods,
    "vtkMRMLNode",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLNode_ContentModifiedObserveType_Type);
  PyVTKEnum_Add(&PyvtkMRMLNode_ContentModifiedObserveType_Type, "vtkMRMLNode.ContentModifiedObserveType");

  o = (PyObject *)&PyvtkMRMLNode_ContentModifiedObserveType_Type;
  if (PyDict_SetItemString(d, "ContentModifiedObserveType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMRMLNode::ContentModifiedObserveType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "ContentModifiedObserveUndefined", vtkMRMLNode::ContentModifiedObserveUndefined },
        { "ContentModifiedObserveDisabled", vtkMRMLNode::ContentModifiedObserveDisabled },
        { "ContentModifiedObserveEnabled", vtkMRMLNode::ContentModifiedObserveEnabled },
      };

    o = PyvtkMRMLNode_ContentModifiedObserveType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "HierarchyModifiedEvent", vtkMRMLNode::HierarchyModifiedEvent },
        { "IDChangedEvent", vtkMRMLNode::IDChangedEvent },
        { "ReferenceAddedEvent", vtkMRMLNode::ReferenceAddedEvent },
        { "ReferenceModifiedEvent", vtkMRMLNode::ReferenceModifiedEvent },
        { "ReferenceRemovedEvent", vtkMRMLNode::ReferenceRemovedEvent },
        { "ReferencedNodeModifiedEvent", vtkMRMLNode::ReferencedNodeModifiedEvent },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

