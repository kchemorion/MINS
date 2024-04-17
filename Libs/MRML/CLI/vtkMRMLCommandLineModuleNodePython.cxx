// python wrapper for vtkMRMLCommandLineModuleNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLCommandLineModuleNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLCommandLineModuleNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLCommandLineModuleNode_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLCommandLineModuleNode_CLINodeEvent_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCLIPython.vtkMRMLCommandLineModuleNode.CLINodeEvent", // tp_name
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
PyObject *PyvtkMRMLCommandLineModuleNode_CLINodeEvent_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLCommandLineModuleNode_CLINodeEvent_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLCommandLineModuleNode_StatusType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCLIPython.vtkMRMLCommandLineModuleNode.StatusType", // tp_name
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
PyObject *PyvtkMRMLCommandLineModuleNode_StatusType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLCommandLineModuleNode_StatusType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLCommandLineModuleNode_AutoRunMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCLIPython.vtkMRMLCommandLineModuleNode.AutoRunMode", // tp_name
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
PyObject *PyvtkMRMLCommandLineModuleNode_AutoRunMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLCommandLineModuleNode_AutoRunMode_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLCommandLineModuleNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLCommandLineModuleNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLCommandLineModuleNode *tempr = vtkMRMLCommandLineModuleNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLCommandLineModuleNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLCommandLineModuleNode::NewInstance());

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
PyvtkMRMLCommandLineModuleNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLCommandLineModuleNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLCommandLineModuleNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLCommandLineModuleNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

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
      op->vtkMRMLCommandLineModuleNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLCommandLineModuleNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLCommandLineModuleNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetModuleDescriptionAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModuleDescriptionAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetModuleDescriptionAsString() :
      op->vtkMRMLCommandLineModuleNode::GetModuleDescriptionAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_SetStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  int temp0;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetStatus(temp0, temp1);
    }
    else
    {
      op->vtkMRMLCommandLineModuleNode::SetStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStatus() :
      op->vtkMRMLCommandLineModuleNode::GetStatus());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetStatusString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStatusString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetStatusString() :
      op->vtkMRMLCommandLineModuleNode::GetStatusString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetDisplayableStatusString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayableStatusString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDisplayableStatusString() :
      op->vtkMRMLCommandLineModuleNode::GetDisplayableStatusString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_StartContinuousOutputUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartContinuousOutputUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartContinuousOutputUpdate();
    }
    else
    {
      op->vtkMRMLCommandLineModuleNode::StartContinuousOutputUpdate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_EndContinuousOutputUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndContinuousOutputUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndContinuousOutputUpdate();
    }
    else
    {
      op->vtkMRMLCommandLineModuleNode::EndContinuousOutputUpdate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_IsContinuousOutputUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsContinuousOutputUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsContinuousOutputUpdate() :
      op->vtkMRMLCommandLineModuleNode::IsContinuousOutputUpdate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_SetOutputText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  std::string temp0;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetOutputText(temp0, temp1);
    }
    else
    {
      op->vtkMRMLCommandLineModuleNode::SetOutputText(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetOutputText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetOutputText() :
      op->vtkMRMLCommandLineModuleNode::GetOutputText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_SetErrorText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErrorText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  std::string temp0;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetErrorText(temp0, temp1);
    }
    else
    {
      op->vtkMRMLCommandLineModuleNode::SetErrorText(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetErrorText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetErrorText() :
      op->vtkMRMLCommandLineModuleNode::GetErrorText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_IsBusy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsBusy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsBusy() :
      op->vtkMRMLCommandLineModuleNode::IsBusy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProgress() :
      op->vtkMRMLCommandLineModuleNode::GetProgress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_Cancel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Cancel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Cancel();
    }
    else
    {
      op->vtkMRMLCommandLineModuleNode::Cancel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_SetAutoRun(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoRun");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoRun(temp0);
    }
    else
    {
      op->vtkMRMLCommandLineModuleNode::SetAutoRun(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetAutoRun(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoRun");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutoRun() :
      op->vtkMRMLCommandLineModuleNode::GetAutoRun());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_SetAutoRunMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoRunMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoRunMode(temp0);
    }
    else
    {
      op->vtkMRMLCommandLineModuleNode::SetAutoRunMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetAutoRunMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoRunMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoRunMode() :
      op->vtkMRMLCommandLineModuleNode::GetAutoRunMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_SetAutoRunDelay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoRunDelay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoRunDelay(temp0);
    }
    else
    {
      op->vtkMRMLCommandLineModuleNode::SetAutoRunDelay(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetAutoRunDelay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoRunDelay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetAutoRunDelay() :
      op->vtkMRMLCommandLineModuleNode::GetAutoRunDelay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetLastRunTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRunTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetLastRunTime() :
      op->vtkMRMLCommandLineModuleNode::GetLastRunTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetParameterMTime() :
      op->vtkMRMLCommandLineModuleNode::GetParameterMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetInputMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetInputMTime() :
      op->vtkMRMLCommandLineModuleNode::GetInputMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_ReadParameterFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadParameterFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->ReadParameterFile(temp0) :
      op->vtkMRMLCommandLineModuleNode::ReadParameterFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_WriteParameterFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteParameterFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  std::string temp0;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->WriteParameterFile(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::WriteParameterFile(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_SetParameterAsNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterAsNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  const char *temp0 = nullptr;
  vtkMRMLNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetParameterAsNode(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::SetParameterAsNode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_SetParameterAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  const char *temp0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetParameterAsString(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::SetParameterAsString(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_SetParameterAsInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterAsInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetParameterAsInt(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::SetParameterAsInt(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_SetParameterAsBool(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterAsBool");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetParameterAsBool(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::SetParameterAsBool(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_SetParameterAsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetParameterAsDouble(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::SetParameterAsDouble(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_SetParameterAsFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterAsFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  const char *temp0 = nullptr;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetParameterAsFloat(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::SetParameterAsFloat(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterAsString(temp0) :
      op->vtkMRMLCommandLineModuleNode::GetParameterAsString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_SetModuleDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModuleDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModuleDescription(temp0);
    }
    else
    {
      op->vtkMRMLCommandLineModuleNode::SetModuleDescription(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetModuleVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModuleVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetModuleVersion() :
      op->vtkMRMLCommandLineModuleNode::GetModuleVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetModuleTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModuleTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetModuleTitle() :
      op->vtkMRMLCommandLineModuleNode::GetModuleTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetModuleTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModuleTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetModuleTarget() :
      op->vtkMRMLCommandLineModuleNode::GetModuleTarget());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetModuleType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModuleType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetModuleType() :
      op->vtkMRMLCommandLineModuleNode::GetModuleType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_IsValidGroupId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValidGroupId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsValidGroupId(temp0) :
      op->vtkMRMLCommandLineModuleNode::IsValidGroupId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_IsValidParamId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValidParamId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->IsValidParamId(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::IsValidParamId(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetNumberOfParameterGroups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParameterGroups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfParameterGroups() :
      op->vtkMRMLCommandLineModuleNode::GetNumberOfParameterGroups());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetNumberOfParametersInGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParametersInGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfParametersInGroup(temp0) :
      op->vtkMRMLCommandLineModuleNode::GetNumberOfParametersInGroup(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterGroupLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterGroupLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterGroupLabel(temp0) :
      op->vtkMRMLCommandLineModuleNode::GetParameterGroupLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterGroupDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterGroupDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterGroupDescription(temp0) :
      op->vtkMRMLCommandLineModuleNode::GetParameterGroupDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterGroupAdvanced(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterGroupAdvanced");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterGroupAdvanced(temp0) :
      op->vtkMRMLCommandLineModuleNode::GetParameterGroupAdvanced(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterTag(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterTag(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterType(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterType(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterArgType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterArgType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterArgType(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterArgType(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterName(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterLongFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterLongFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterLongFlag(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterLongFlag(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterLabel(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterLabel(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterConstraints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterConstraints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterConstraints(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterConstraints(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterMaximum(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterMaximum(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterMinimum(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterMinimum(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterDescription(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterDescription(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterChannel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterChannel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterChannel(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterChannel(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterIndex(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterDefault(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterDefault(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterValue(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterFlag(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterFlag(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterMultiple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterMultiple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterMultiple(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterMultiple(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterFileExtensions(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterFileExtensions(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetParameterCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterCoordinateSystem(temp0, temp1) :
      op->vtkMRMLCommandLineModuleNode::GetParameterCoordinateSystem(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_IsInputDefaultValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInputDefaultValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsInputDefaultValue(temp0) :
      op->vtkMRMLCommandLineModuleNode::IsInputDefaultValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetNumberOfRegisteredModules(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfRegisteredModules");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMRMLCommandLineModuleNode::GetNumberOfRegisteredModules();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_GetRegisteredModuleNameByIndex(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRegisteredModuleNameByIndex");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLCommandLineModuleNode::GetRegisteredModuleNameByIndex(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_HasRegisteredModule(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HasRegisteredModule");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkMRMLCommandLineModuleNode::HasRegisteredModule(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCommandLineModuleNode_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCommandLineModuleNode *op = static_cast<vtkMRMLCommandLineModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkMRMLCommandLineModuleNode::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLCommandLineModuleNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLCommandLineModuleNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLCommandLineModuleNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLCommandLineModuleNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLCommandLineModuleNode\nC++: static vtkMRMLCommandLineModuleNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLCommandLineModuleNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLCommandLineModuleNode\nC++: vtkMRMLCommandLineModuleNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLCommandLineModuleNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLCommandLineModuleNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLCommandLineModuleNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"CopyContent", PyvtkMRMLCommandLineModuleNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLCommandLineModuleNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLCommandLineModuleNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetModuleDescriptionAsString", PyvtkMRMLCommandLineModuleNode_GetModuleDescriptionAsString, METH_VARARGS,
   "GetModuleDescriptionAsString(self) -> str\nC++: std::string GetModuleDescriptionAsString()\n\n"},
  {"SetStatus", PyvtkMRMLCommandLineModuleNode_SetStatus, METH_VARARGS,
   "SetStatus(self, status:int, modify:bool=True) -> None\nC++: void SetStatus(int status, bool modify=true)\n\nSet the status of the node (Idle, Scheduled, Running, Completed).\n The \"modify\" parameter indicates whether the object can be\nmodified by the call. Having modify = false is used when a\nseparate thread updates the node status but does not want to\ninvoke modified events because it would refresh the GUI from the\nthread. Do not call manually, only the logic should change the\nstatus of the node.\n\\sa GetStatus(), GetStatusString(), IsBusy(), Cancel()\n"},
  {"GetStatus", PyvtkMRMLCommandLineModuleNode_GetStatus, METH_VARARGS,
   "GetStatus(self) -> int\nC++: int GetStatus()\n\n\\sa SetStatus(), GetStatusString(), IsBusy()\n"},
  {"GetStatusString", PyvtkMRMLCommandLineModuleNode_GetStatusString, METH_VARARGS,
   "GetStatusString(self) -> str\nC++: const char *GetStatusString()\n\nReturn current status as a string. Not translated.\n\\sa GetStatus(), IsBusy(), GetDisplayableStatusString()\n"},
  {"GetDisplayableStatusString", PyvtkMRMLCommandLineModuleNode_GetDisplayableStatusString, METH_VARARGS,
   "GetDisplayableStatusString(self) -> str\nC++: std::string GetDisplayableStatusString()\n\nReturn current status as a string for display (translated to\ncurrent language).\n\\sa GetStatusString()\n"},
  {"StartContinuousOutputUpdate", PyvtkMRMLCommandLineModuleNode_StartContinuousOutputUpdate, METH_VARARGS,
   "StartContinuousOutputUpdate(self) -> None\nC++: void StartContinuousOutputUpdate()\n\nStart/stop continuous updating of output and error texts during\nexecution.\n\nIf ContinuousOutputUpdate is not active then output and error\ntexts are only updated when execution is completed. If continuous\nupdate is active, then output and error texts are updated\ncontinuously, which may be useful for close monitoring of the\nexecution, but may impact the performance if the process output\nis very long.\n\nModified event is not invoked when the value is changed and the\nvalue is not stored persistently in the scene file.\n"},
  {"EndContinuousOutputUpdate", PyvtkMRMLCommandLineModuleNode_EndContinuousOutputUpdate, METH_VARARGS,
   "EndContinuousOutputUpdate(self) -> None\nC++: void EndContinuousOutputUpdate()\n\nStart/stop continuous updating of output and error texts during\nexecution.\n\nIf ContinuousOutputUpdate is not active then output and error\ntexts are only updated when execution is completed. If continuous\nupdate is active, then output and error texts are updated\ncontinuously, which may be useful for close monitoring of the\nexecution, but may impact the performance if the process output\nis very long.\n\nModified event is not invoked when the value is changed and the\nvalue is not stored persistently in the scene file.\n"},
  {"IsContinuousOutputUpdate", PyvtkMRMLCommandLineModuleNode_IsContinuousOutputUpdate, METH_VARARGS,
   "IsContinuousOutputUpdate(self) -> bool\nC++: bool IsContinuousOutputUpdate()\n\nStart/stop continuous updating of output and error texts during\nexecution.\n\nIf ContinuousOutputUpdate is not active then output and error\ntexts are only updated when execution is completed. If continuous\nupdate is active, then output and error texts are updated\ncontinuously, which may be useful for close monitoring of the\nexecution, but may impact the performance if the process output\nis very long.\n\nModified event is not invoked when the value is changed and the\nvalue is not stored persistently in the scene file.\n"},
  {"SetOutputText", PyvtkMRMLCommandLineModuleNode_SetOutputText, METH_VARARGS,
   "SetOutputText(self, text:str, modify:bool=True) -> None\nC++: void SetOutputText(const std::string &text, bool modify=true)\n\nGet/set output text generated during latest execution. This value\nis not stored persistently in the scene file. It is safe to call\nthis method from a non-main thread (with modify=false).\n"},
  {"GetOutputText", PyvtkMRMLCommandLineModuleNode_GetOutputText, METH_VARARGS,
   "GetOutputText(self) -> str\nC++: std::string GetOutputText()\n\nGet/set output text generated during latest execution. This value\nis not stored persistently in the scene file. It is safe to call\nthis method from a non-main thread (with modify=false).\n"},
  {"SetErrorText", PyvtkMRMLCommandLineModuleNode_SetErrorText, METH_VARARGS,
   "SetErrorText(self, text:str, modify:bool=True) -> None\nC++: void SetErrorText(const std::string &text, bool modify=true)\n\nGet/set error text generated during latest execution. This value\nis not stored persistently in the scene file. It is safe to call\nthis method from a non-main thread (with modify=false).\n"},
  {"GetErrorText", PyvtkMRMLCommandLineModuleNode_GetErrorText, METH_VARARGS,
   "GetErrorText(self) -> str\nC++: std::string GetErrorText()\n\nGet/set error text generated during latest execution. This value\nis not stored persistently in the scene file. It is safe to call\nthis method from a non-main thread (with modify=false).\n"},
  {"IsBusy", PyvtkMRMLCommandLineModuleNode_IsBusy, METH_VARARGS,
   "IsBusy(self) -> bool\nC++: bool IsBusy()\n\nReturn true if the module is in a busy state: Scheduled, Running,\nCancelling, Completing.\n\\sa SetStatus(), GetStatus(), BusyMask, Cancel()\n"},
  {"GetProgress", PyvtkMRMLCommandLineModuleNode_GetProgress, METH_VARARGS,
   "GetProgress(self) -> int\nC++: int GetProgress()\n\n"},
  {"Cancel", PyvtkMRMLCommandLineModuleNode_Cancel, METH_VARARGS,
   "Cancel(self) -> None\nC++: void Cancel()\n\nSet a request to stop the processing of the CLI. Do nothing if\nthe module is not \"busy\".\n\\sa IsBusy(), Cancelling, Cancelled\n"},
  {"SetAutoRun", PyvtkMRMLCommandLineModuleNode_SetAutoRun, METH_VARARGS,
   "SetAutoRun(self, enable:bool) -> None\nC++: void SetAutoRun(bool enable)\n\nEnable/Disable the AutoRun for the CLI node. The behavior is\nensured by the CLI logic. AutoRun is disabled (false) by default.\n\\sa GetAutoRun(), AutoRunMode, SetAutoRunDelay()\n"},
  {"GetAutoRun", PyvtkMRMLCommandLineModuleNode_GetAutoRun, METH_VARARGS,
   "GetAutoRun(self) -> bool\nC++: bool GetAutoRun()\n\nReturn true if the AutoRun is enabled, false otherwise.\n\\sa SetAutoRun(), AutoRunMode, GetAutoRunDelay()\n"},
  {"SetAutoRunMode", PyvtkMRMLCommandLineModuleNode_SetAutoRunMode, METH_VARARGS,
   "SetAutoRunMode(self, autoRunMode:int) -> None\nC++: void SetAutoRunMode(int autoRunMode)\n\nSet the auto running flags for the node. The behavior is ensured\nby the CLI logic. AutoRun is not enabled untilSetAutoRun(true) is\ncalled.AutoRunWhenParameterChanged | AutoRunCancelsRunningProcess\nby default.\n\\sa AutoRunMode, GetAutoRunMode(), SetAutoRun(),\n    SetAutoRunDelay()\n"},
  {"GetAutoRunMode", PyvtkMRMLCommandLineModuleNode_GetAutoRunMode, METH_VARARGS,
   "GetAutoRunMode(self) -> int\nC++: int GetAutoRunMode()\n\nReturn the AutoRun mode flags.\n\\sa AutoRunMode, SetAutoRunMode(), GetAutoRun(),\n    GetAutoRunDelay()\n"},
  {"SetAutoRunDelay", PyvtkMRMLCommandLineModuleNode_SetAutoRunDelay, METH_VARARGS,
   "SetAutoRunDelay(self, delayInMs:int) -> None\nC++: void SetAutoRunDelay(unsigned int delayInMs)\n\nSet the delay (in milliseconds) to wait before automatically\nrunning the module. 1000 ms by default.\n\\sa GetAutoRunDelay(), SetAutoRun(), SetAutoRunMode()\n"},
  {"GetAutoRunDelay", PyvtkMRMLCommandLineModuleNode_GetAutoRunDelay, METH_VARARGS,
   "GetAutoRunDelay(self) -> int\nC++: unsigned int GetAutoRunDelay()\n\nReturn the number of msecs to wait before automatically running\nthe module.\n\\sa SetAutoRunDelay(), GetAutoRun(), GetAutoRunMode()\n"},
  {"GetLastRunTime", PyvtkMRMLCommandLineModuleNode_GetLastRunTime, METH_VARARGS,
   "GetLastRunTime(self) -> int\nC++: vtkMTimeType GetLastRunTime()\n\nReturn the last time the module was ran.\n\\sa GetParameterMTime(), GetInputMTime(), GetMTime()\n"},
  {"GetParameterMTime", PyvtkMRMLCommandLineModuleNode_GetParameterMTime, METH_VARARGS,
   "GetParameterMTime(self) -> int\nC++: vtkMTimeType GetParameterMTime()\n\nReturn the last time a parameter was modified\n\\sa GetInputMTime(), GetMTime()\n"},
  {"GetInputMTime", PyvtkMRMLCommandLineModuleNode_GetInputMTime, METH_VARARGS,
   "GetInputMTime(self) -> int\nC++: vtkMTimeType GetInputMTime()\n\nReturn the last time an input parameter was modified.\n\\sa GetParameterMTime(), GetMTime()\n"},
  {"ReadParameterFile", PyvtkMRMLCommandLineModuleNode_ReadParameterFile, METH_VARARGS,
   "ReadParameterFile(self, filename:str) -> bool\nC++: bool ReadParameterFile(const std::string &filename)\n\nRead a parameter file. This will set any parameters that\nparameters in this ModuleDescription.\n"},
  {"WriteParameterFile", PyvtkMRMLCommandLineModuleNode_WriteParameterFile, METH_VARARGS,
   "WriteParameterFile(self, filename:str,\n    withHandlesToBulkParameters:bool=True) -> bool\nC++: bool WriteParameterFile(const std::string &filename,\n    bool withHandlesToBulkParameters=true)\n\nWrite a parameter file. This will output any parameters that\nparameters in this ModuleDescription.\n\"withHandlesToBulkParameters\" allows to control whether all\nparameters are written or just the parameters with simple IO\nmechanisms.\n"},
  {"SetParameterAsNode", PyvtkMRMLCommandLineModuleNode_SetParameterAsNode, METH_VARARGS,
   "SetParameterAsNode(self, name:str, value:vtkMRMLNode) -> bool\nC++: bool SetParameterAsNode(const char *name, vtkMRMLNode *value)\n\nSet the parameter name to the node value. If the parameter is not\nin the output channel, InputParameterModifiedEvent is invoked\nanytime the node is modified (ModifiedEvent is invoked).\n\\sa SetParameterAsString(), SetParameterAsBool(),\n    SetParameterAsDouble(),\nSetParameterAsFloat(), SetParameterAsInt()\n"},
  {"SetParameterAsString", PyvtkMRMLCommandLineModuleNode_SetParameterAsString, METH_VARARGS,
   "SetParameterAsString(self, name:str, value:str) -> bool\nC++: bool SetParameterAsString(const char *name,\n    const std::string &value)\n\nSet the parameter name to the string value.\n\\sa SetParameterAsInt(), SetParameterAsBool(),\n    SetParameterAsDouble(),\nSetParameterAsFloat(), SetParameterAsNode()\n"},
  {"SetParameterAsInt", PyvtkMRMLCommandLineModuleNode_SetParameterAsInt, METH_VARARGS,
   "SetParameterAsInt(self, name:str, value:int) -> bool\nC++: bool SetParameterAsInt(const char *name, int value)\n\nSet the parameter name to the int value.\n\\sa SetParameterAsString(), SetParameterAsBool(),\n    SetParameterAsDouble(),\nSetParameterAsFloat(), SetParameterAsNode()\n"},
  {"SetParameterAsBool", PyvtkMRMLCommandLineModuleNode_SetParameterAsBool, METH_VARARGS,
   "SetParameterAsBool(self, name:str, value:bool) -> bool\nC++: bool SetParameterAsBool(const char *name, bool value)\n\nSet the parameter name to the bool value.\n\\sa SetParameterAsString(), SetParameterAsInt(),\n    SetParameterAsDouble(),\nSetParameterAsFloat(), SetParameterAsNode()\n"},
  {"SetParameterAsDouble", PyvtkMRMLCommandLineModuleNode_SetParameterAsDouble, METH_VARARGS,
   "SetParameterAsDouble(self, name:str, value:float) -> bool\nC++: bool SetParameterAsDouble(const char *name, double value)\n\nSet the parameter name to the double value.\n\\sa SetParameterAsString(), SetParameterAsInt(),\n    SetParameterAsBool(),\nSetParameterAsFloat(), SetParameterAsNode()\n"},
  {"SetParameterAsFloat", PyvtkMRMLCommandLineModuleNode_SetParameterAsFloat, METH_VARARGS,
   "SetParameterAsFloat(self, name:str, value:float) -> bool\nC++: bool SetParameterAsFloat(const char *name, float value)\n\nSet the parameter name to the float value.\n\\sa SetParameterAsString(), SetParameterAsInt(),\n    SetParameterAsDouble(),\nSetParameterAsBool(), SetParameterAsNode()\n"},
  {"GetParameterAsString", PyvtkMRMLCommandLineModuleNode_GetParameterAsString, METH_VARARGS,
   "GetParameterAsString(self, name:str) -> str\nC++: std::string GetParameterAsString(const char *name)\n\n"},
  {"SetModuleDescription", PyvtkMRMLCommandLineModuleNode_SetModuleDescription, METH_VARARGS,
   "SetModuleDescription(self, name:str) -> None\nC++: void SetModuleDescription(const char *name)\n\n"},
  {"GetModuleVersion", PyvtkMRMLCommandLineModuleNode_GetModuleVersion, METH_VARARGS,
   "GetModuleVersion(self) -> str\nC++: std::string GetModuleVersion()\n\n"},
  {"GetModuleTitle", PyvtkMRMLCommandLineModuleNode_GetModuleTitle, METH_VARARGS,
   "GetModuleTitle(self) -> str\nC++: std::string GetModuleTitle()\n\n"},
  {"GetModuleTarget", PyvtkMRMLCommandLineModuleNode_GetModuleTarget, METH_VARARGS,
   "GetModuleTarget(self) -> str\nC++: std::string GetModuleTarget()\n\n"},
  {"GetModuleType", PyvtkMRMLCommandLineModuleNode_GetModuleType, METH_VARARGS,
   "GetModuleType(self) -> str\nC++: std::string GetModuleType()\n\n"},
  {"IsValidGroupId", PyvtkMRMLCommandLineModuleNode_IsValidGroupId, METH_VARARGS,
   "IsValidGroupId(self, group:int) -> bool\nC++: bool IsValidGroupId(unsigned int group)\n\n"},
  {"IsValidParamId", PyvtkMRMLCommandLineModuleNode_IsValidParamId, METH_VARARGS,
   "IsValidParamId(self, group:int, param:int) -> bool\nC++: bool IsValidParamId(unsigned int group, unsigned int param)\n\n"},
  {"GetNumberOfParameterGroups", PyvtkMRMLCommandLineModuleNode_GetNumberOfParameterGroups, METH_VARARGS,
   "GetNumberOfParameterGroups(self) -> int\nC++: unsigned int GetNumberOfParameterGroups()\n\n"},
  {"GetNumberOfParametersInGroup", PyvtkMRMLCommandLineModuleNode_GetNumberOfParametersInGroup, METH_VARARGS,
   "GetNumberOfParametersInGroup(self, group:int) -> int\nC++: unsigned int GetNumberOfParametersInGroup(unsigned int group)\n\n"},
  {"GetParameterGroupLabel", PyvtkMRMLCommandLineModuleNode_GetParameterGroupLabel, METH_VARARGS,
   "GetParameterGroupLabel(self, group:int) -> str\nC++: std::string GetParameterGroupLabel(unsigned int group)\n\n"},
  {"GetParameterGroupDescription", PyvtkMRMLCommandLineModuleNode_GetParameterGroupDescription, METH_VARARGS,
   "GetParameterGroupDescription(self, group:int) -> str\nC++: std::string GetParameterGroupDescription(unsigned int group)\n\n"},
  {"GetParameterGroupAdvanced", PyvtkMRMLCommandLineModuleNode_GetParameterGroupAdvanced, METH_VARARGS,
   "GetParameterGroupAdvanced(self, group:int) -> str\nC++: std::string GetParameterGroupAdvanced(unsigned int group)\n\n"},
  {"GetParameterTag", PyvtkMRMLCommandLineModuleNode_GetParameterTag, METH_VARARGS,
   "GetParameterTag(self, group:int, param:int) -> str\nC++: std::string GetParameterTag(unsigned int group,\n    unsigned int param)\n\n"},
  {"GetParameterType", PyvtkMRMLCommandLineModuleNode_GetParameterType, METH_VARARGS,
   "GetParameterType(self, group:int, param:int) -> str\nC++: std::string GetParameterType(unsigned int group,\n    unsigned int param)\n\n"},
  {"GetParameterArgType", PyvtkMRMLCommandLineModuleNode_GetParameterArgType, METH_VARARGS,
   "GetParameterArgType(self, group:int, param:int) -> str\nC++: std::string GetParameterArgType(unsigned int group,\n    unsigned int param)\n\n"},
  {"GetParameterName", PyvtkMRMLCommandLineModuleNode_GetParameterName, METH_VARARGS,
   "GetParameterName(self, group:int, param:int) -> str\nC++: std::string GetParameterName(unsigned int group,\n    unsigned int param)\n\n"},
  {"GetParameterLongFlag", PyvtkMRMLCommandLineModuleNode_GetParameterLongFlag, METH_VARARGS,
   "GetParameterLongFlag(self, group:int, param:int) -> str\nC++: std::string GetParameterLongFlag(unsigned int group,\n    unsigned int param)\n\n"},
  {"GetParameterLabel", PyvtkMRMLCommandLineModuleNode_GetParameterLabel, METH_VARARGS,
   "GetParameterLabel(self, group:int, param:int) -> str\nC++: std::string GetParameterLabel(unsigned int group,\n    unsigned int param)\n\n"},
  {"GetParameterConstraints", PyvtkMRMLCommandLineModuleNode_GetParameterConstraints, METH_VARARGS,
   "GetParameterConstraints(self, group:int, param:int) -> str\nC++: std::string GetParameterConstraints(unsigned int group,\n    unsigned int param)\n\n"},
  {"GetParameterMaximum", PyvtkMRMLCommandLineModuleNode_GetParameterMaximum, METH_VARARGS,
   "GetParameterMaximum(self, group:int, param:int) -> str\nC++: std::string GetParameterMaximum(unsigned int group,\n    unsigned int param)\n\n"},
  {"GetParameterMinimum", PyvtkMRMLCommandLineModuleNode_GetParameterMinimum, METH_VARARGS,
   "GetParameterMinimum(self, group:int, param:int) -> str\nC++: std::string GetParameterMinimum(unsigned int group,\n    unsigned int param)\n\n"},
  {"GetParameterDescription", PyvtkMRMLCommandLineModuleNode_GetParameterDescription, METH_VARARGS,
   "GetParameterDescription(self, group:int, param:int) -> str\nC++: std::string GetParameterDescription(unsigned int group,\n    unsigned int param)\n\n"},
  {"GetParameterChannel", PyvtkMRMLCommandLineModuleNode_GetParameterChannel, METH_VARARGS,
   "GetParameterChannel(self, group:int, param:int) -> str\nC++: std::string GetParameterChannel(unsigned int group,\n    unsigned int param)\n\n"},
  {"GetParameterIndex", PyvtkMRMLCommandLineModuleNode_GetParameterIndex, METH_VARARGS,
   "GetParameterIndex(self, group:int, param:int) -> str\nC++: std::string GetParameterIndex(unsigned int group,\n    unsigned int param)\n\n"},
  {"GetParameterDefault", PyvtkMRMLCommandLineModuleNode_GetParameterDefault, METH_VARARGS,
   "GetParameterDefault(self, group:int, param:int) -> str\nC++: std::string GetParameterDefault(unsigned int group,\n    unsigned int param)\n\n\\deprecated Consider using GetParameterValue()\n"},
  {"GetParameterValue", PyvtkMRMLCommandLineModuleNode_GetParameterValue, METH_VARARGS,
   "GetParameterValue(self, group:int, param:int) -> str\nC++: std::string GetParameterValue(unsigned int group,\n    unsigned int param)\n\n"},
  {"GetParameterFlag", PyvtkMRMLCommandLineModuleNode_GetParameterFlag, METH_VARARGS,
   "GetParameterFlag(self, group:int, param:int) -> str\nC++: std::string GetParameterFlag(unsigned int group,\n    unsigned int param)\n\n"},
  {"GetParameterMultiple", PyvtkMRMLCommandLineModuleNode_GetParameterMultiple, METH_VARARGS,
   "GetParameterMultiple(self, group:int, param:int) -> str\nC++: std::string GetParameterMultiple(unsigned int group,\n    unsigned int param)\n\n"},
  {"GetParameterFileExtensions", PyvtkMRMLCommandLineModuleNode_GetParameterFileExtensions, METH_VARARGS,
   "GetParameterFileExtensions(self, group:int, param:int) -> str\nC++: std::string GetParameterFileExtensions(unsigned int group,\n    unsigned int param)\n\n"},
  {"GetParameterCoordinateSystem", PyvtkMRMLCommandLineModuleNode_GetParameterCoordinateSystem, METH_VARARGS,
   "GetParameterCoordinateSystem(self, group:int, param:int) -> str\nC++: std::string GetParameterCoordinateSystem(unsigned int group,\n    unsigned int param)\n\n"},
  {"IsInputDefaultValue", PyvtkMRMLCommandLineModuleNode_IsInputDefaultValue, METH_VARARGS,
   "IsInputDefaultValue(self, value:str) -> bool\nC++: bool IsInputDefaultValue(const std::string &value)\n\nReturns true if the value is a default value for a parameter that\nis not an output parameter.\n\\sa SetAutoRun\n"},
  {"GetNumberOfRegisteredModules", PyvtkMRMLCommandLineModuleNode_GetNumberOfRegisteredModules, METH_VARARGS,
   "GetNumberOfRegisteredModules() -> int\nC++: static int GetNumberOfRegisteredModules()\n\nMethods to manage the master list of module description\nprototypes\n"},
  {"GetRegisteredModuleNameByIndex", PyvtkMRMLCommandLineModuleNode_GetRegisteredModuleNameByIndex, METH_VARARGS,
   "GetRegisteredModuleNameByIndex(idx:int) -> str\nC++: static const char *GetRegisteredModuleNameByIndex(int idx)\n\n"},
  {"HasRegisteredModule", PyvtkMRMLCommandLineModuleNode_HasRegisteredModule, METH_VARARGS,
   "HasRegisteredModule(name:str) -> bool\nC++: static bool HasRegisteredModule(const std::string &name)\n\n"},
  {"Modified", PyvtkMRMLCommandLineModuleNode_Modified, METH_VARARGS,
   "Modified(self) -> None\nC++: void Modified() override;\n\nReimplemented for internal reasons.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLCommandLineModuleNode_Doc =
  "vtkMRMLCommandLineModuleNode - MRML node for representing the\nparameters allowing to run a command line interface module (CLI).\n\n"
  "Superclass: vtkMRMLNode\n\n"
  "The CLI parameters are defined with SetModuleDescription(). The\n"
  "parameters can be changed with SetParameterAsXXX(). It is possible to\n"
  "automatically run the CLI each time the parameters are changed, see\n"
  "SetAutoRun().\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLCommandLineModuleNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCLIPython.vtkMRMLCommandLineModuleNode", // tp_name
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
  PyvtkMRMLCommandLineModuleNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLCommandLineModuleNode_StaticNew()
{
  return vtkMRMLCommandLineModuleNode::New();
}

PyObject *PyvtkMRMLCommandLineModuleNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLCommandLineModuleNode_Type, PyvtkMRMLCommandLineModuleNode_Methods,
    "vtkMRMLCommandLineModuleNode",
 &PyvtkMRMLCommandLineModuleNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLNode");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLCommandLineModuleNode_CLINodeEvent_Type);
  PyVTKEnum_Add(&PyvtkMRMLCommandLineModuleNode_CLINodeEvent_Type, "vtkMRMLCommandLineModuleNode.CLINodeEvent");

  o = (PyObject *)&PyvtkMRMLCommandLineModuleNode_CLINodeEvent_Type;
  if (PyDict_SetItemString(d, "CLINodeEvent", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLCommandLineModuleNode_StatusType_Type);
  PyVTKEnum_Add(&PyvtkMRMLCommandLineModuleNode_StatusType_Type, "vtkMRMLCommandLineModuleNode.StatusType");

  o = (PyObject *)&PyvtkMRMLCommandLineModuleNode_StatusType_Type;
  if (PyDict_SetItemString(d, "StatusType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLCommandLineModuleNode_AutoRunMode_Type);
  PyVTKEnum_Add(&PyvtkMRMLCommandLineModuleNode_AutoRunMode_Type, "vtkMRMLCommandLineModuleNode.AutoRunMode");

  o = (PyObject *)&PyvtkMRMLCommandLineModuleNode_AutoRunMode_Type;
  if (PyDict_SetItemString(d, "AutoRunMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkMRMLCommandLineModuleNode::CLINodeEvent cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "ParameterChangedEvent", vtkMRMLCommandLineModuleNode::ParameterChangedEvent },
        { "InputParameterEvent", vtkMRMLCommandLineModuleNode::InputParameterEvent },
        { "AutoRunEvent", vtkMRMLCommandLineModuleNode::AutoRunEvent },
        { "StatusModifiedEvent", vtkMRMLCommandLineModuleNode::StatusModifiedEvent },
      };

    o = PyvtkMRMLCommandLineModuleNode_CLINodeEvent_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 10; c++)
  {
    typedef vtkMRMLCommandLineModuleNode::StatusType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[10] = {
        { "Idle", vtkMRMLCommandLineModuleNode::Idle },
        { "Scheduled", vtkMRMLCommandLineModuleNode::Scheduled },
        { "Running", vtkMRMLCommandLineModuleNode::Running },
        { "Cancelling", vtkMRMLCommandLineModuleNode::Cancelling },
        { "Cancelled", vtkMRMLCommandLineModuleNode::Cancelled },
        { "Completing", vtkMRMLCommandLineModuleNode::Completing },
        { "Completed", vtkMRMLCommandLineModuleNode::Completed },
        { "ErrorsMask", vtkMRMLCommandLineModuleNode::ErrorsMask },
        { "CompletedWithErrors", vtkMRMLCommandLineModuleNode::CompletedWithErrors },
        { "BusyMask", vtkMRMLCommandLineModuleNode::BusyMask },
      };

    o = PyvtkMRMLCommandLineModuleNode_StatusType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkMRMLCommandLineModuleNode::AutoRunMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "AutoRunCancelsRunningProcess", vtkMRMLCommandLineModuleNode::AutoRunCancelsRunningProcess },
        { "AutoRunOnChangedParameter", vtkMRMLCommandLineModuleNode::AutoRunOnChangedParameter },
        { "AutoRunOnModifiedInputEvent", vtkMRMLCommandLineModuleNode::AutoRunOnModifiedInputEvent },
        { "AutoRunOnOtherInputEvents", vtkMRMLCommandLineModuleNode::AutoRunOnOtherInputEvents },
        { "AutoRunOnAnyInputEvent", vtkMRMLCommandLineModuleNode::AutoRunOnAnyInputEvent },
        { "AutoRunEnabledMask", vtkMRMLCommandLineModuleNode::AutoRunEnabledMask },
      };

    o = PyvtkMRMLCommandLineModuleNode_AutoRunMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLCommandLineModuleNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLCommandLineModuleNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLCommandLineModuleNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

