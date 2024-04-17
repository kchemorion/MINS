// python wrapper for vtkMRMLSequenceBrowserNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSequenceBrowserNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSequenceBrowserNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSequenceBrowserNode_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSequenceBrowserNode_RecordingSamplingModeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerSequencesModuleMRMLPython.vtkMRMLSequenceBrowserNode.RecordingSamplingModeType", // tp_name
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
PyObject *PyvtkMRMLSequenceBrowserNode_RecordingSamplingModeType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLSequenceBrowserNode_RecordingSamplingModeType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSequenceBrowserNode_MissingItemModeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerSequencesModuleMRMLPython.vtkMRMLSequenceBrowserNode.MissingItemModeType", // tp_name
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
PyObject *PyvtkMRMLSequenceBrowserNode_MissingItemModeType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLSequenceBrowserNode_MissingItemModeType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSequenceBrowserNode_IndexDisplayModeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerSequencesModuleMRMLPython.vtkMRMLSequenceBrowserNode.IndexDisplayModeType", // tp_name
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
PyObject *PyvtkMRMLSequenceBrowserNode_IndexDisplayModeType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLSequenceBrowserNode_IndexDisplayModeType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSequenceBrowserNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSequenceBrowserNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSequenceBrowserNode *tempr = vtkMRMLSequenceBrowserNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSequenceBrowserNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSequenceBrowserNode::NewInstance());

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
PyvtkMRMLSequenceBrowserNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSequenceBrowserNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSequenceBrowserNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLSequenceBrowserNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

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
      op->vtkMRMLSequenceBrowserNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLSequenceBrowserNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetAndObserveMasterSequenceNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveMasterSequenceNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->SetAndObserveMasterSequenceNodeID(temp0) :
      op->vtkMRMLSequenceBrowserNode::SetAndObserveMasterSequenceNodeID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetMasterSequenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasterSequenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSequenceNode *tempr = (ap.IsBound() ?
      op->GetMasterSequenceNode() :
      op->vtkMRMLSequenceBrowserNode::GetMasterSequenceNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_AddSynchronizedSequenceNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSynchronizedSequenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->AddSynchronizedSequenceNode(temp0) :
      op->vtkMRMLSequenceBrowserNode::AddSynchronizedSequenceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSequenceBrowserNode_AddSynchronizedSequenceNode_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSynchronizedSequenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkMRMLSequenceNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceNode"))
  {
    std::string tempr = (ap.IsBound() ?
      op->AddSynchronizedSequenceNode(temp0) :
      op->vtkMRMLSequenceBrowserNode::AddSynchronizedSequenceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSequenceBrowserNode_AddSynchronizedSequenceNode_Methods[] = {
  {"AddSynchronizedSequenceNode", PyvtkMRMLSequenceBrowserNode_AddSynchronizedSequenceNode_s1, METH_VARARGS,
   "@z"},
  {"AddSynchronizedSequenceNode", PyvtkMRMLSequenceBrowserNode_AddSynchronizedSequenceNode_s2, METH_VARARGS,
   "@V *vtkMRMLSequenceNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLSequenceBrowserNode_AddSynchronizedSequenceNode(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLSequenceBrowserNode_AddSynchronizedSequenceNode_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddSynchronizedSequenceNode");
  return nullptr;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_AddSynchronizedSequenceNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSynchronizedSequenceNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->AddSynchronizedSequenceNodeID(temp0) :
      op->vtkMRMLSequenceBrowserNode::AddSynchronizedSequenceNodeID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_RemoveSynchronizedSequenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveSynchronizedSequenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveSynchronizedSequenceNode(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::RemoveSynchronizedSequenceNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_RemoveAllSequenceNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSequenceNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllSequenceNodes();
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::RemoveAllSequenceNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetSynchronizedSequenceNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSynchronizedSequenceNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkCollection *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkCollection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->GetSynchronizedSequenceNodes(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::GetSynchronizedSequenceNodes(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetNumberOfSynchronizedSequenceNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSynchronizedSequenceNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSynchronizedSequenceNodes(temp0) :
      op->vtkMRMLSequenceBrowserNode::GetNumberOfSynchronizedSequenceNodes(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_IsSynchronizedSequenceNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSynchronizedSequenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSynchronizedSequenceNode(temp0, temp1) :
      op->vtkMRMLSequenceBrowserNode::IsSynchronizedSequenceNode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSequenceBrowserNode_IsSynchronizedSequenceNode_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSynchronizedSequenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkMRMLSequenceNode *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSynchronizedSequenceNode(temp0, temp1) :
      op->vtkMRMLSequenceBrowserNode::IsSynchronizedSequenceNode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSequenceBrowserNode_IsSynchronizedSequenceNode_Methods[] = {
  {"IsSynchronizedSequenceNode", PyvtkMRMLSequenceBrowserNode_IsSynchronizedSequenceNode_s1, METH_VARARGS,
   "@z|q"},
  {"IsSynchronizedSequenceNode", PyvtkMRMLSequenceBrowserNode_IsSynchronizedSequenceNode_s2, METH_VARARGS,
   "@V|q *vtkMRMLSequenceNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLSequenceBrowserNode_IsSynchronizedSequenceNode(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLSequenceBrowserNode_IsSynchronizedSequenceNode_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsSynchronizedSequenceNode");
  return nullptr;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_IsSynchronizedSequenceNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSynchronizedSequenceNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSynchronizedSequenceNodeID(temp0, temp1) :
      op->vtkMRMLSequenceBrowserNode::IsSynchronizedSequenceNodeID(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetPlaybackActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaybackActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPlaybackActive() :
      op->vtkMRMLSequenceBrowserNode::GetPlaybackActive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetPlaybackActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaybackActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlaybackActive(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetPlaybackActive(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_PlaybackActiveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaybackActiveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaybackActiveOn();
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::PlaybackActiveOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_PlaybackActiveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaybackActiveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaybackActiveOff();
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::PlaybackActiveOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetPlaybackRateFps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaybackRateFps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPlaybackRateFps() :
      op->vtkMRMLSequenceBrowserNode::GetPlaybackRateFps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetPlaybackRateFps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaybackRateFps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlaybackRateFps(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetPlaybackRateFps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetPlaybackItemSkippingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaybackItemSkippingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPlaybackItemSkippingEnabled() :
      op->vtkMRMLSequenceBrowserNode::GetPlaybackItemSkippingEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetPlaybackItemSkippingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaybackItemSkippingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlaybackItemSkippingEnabled(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetPlaybackItemSkippingEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_PlaybackItemSkippingEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaybackItemSkippingEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaybackItemSkippingEnabledOn();
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::PlaybackItemSkippingEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_PlaybackItemSkippingEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaybackItemSkippingEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaybackItemSkippingEnabledOff();
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::PlaybackItemSkippingEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetPlaybackLooped(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaybackLooped");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPlaybackLooped() :
      op->vtkMRMLSequenceBrowserNode::GetPlaybackLooped());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetPlaybackLooped(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaybackLooped");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlaybackLooped(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetPlaybackLooped(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_PlaybackLoopedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaybackLoopedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaybackLoopedOn();
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::PlaybackLoopedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_PlaybackLoopedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaybackLoopedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaybackLoopedOff();
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::PlaybackLoopedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetSelectedItemNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedItemNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedItemNumber() :
      op->vtkMRMLSequenceBrowserNode::GetSelectedItemNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetSelectedItemNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedItemNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedItemNumber(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetSelectedItemNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetSelectedItemByIndexValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedItemByIndexValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  std::string temp0;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->SetSelectedItemByIndexValue(temp0, temp1) :
      op->vtkMRMLSequenceBrowserNode::SetSelectedItemByIndexValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetRecordingActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecordingActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRecordingActive() :
      op->vtkMRMLSequenceBrowserNode::GetRecordingActive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetRecordingActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRecordingActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRecordingActive(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetRecordingActive(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_RecordingActiveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecordingActiveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecordingActiveOn();
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::RecordingActiveOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_RecordingActiveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecordingActiveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecordingActiveOff();
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::RecordingActiveOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetRecordMasterOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecordMasterOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRecordMasterOnly() :
      op->vtkMRMLSequenceBrowserNode::GetRecordMasterOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetRecordMasterOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRecordMasterOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRecordMasterOnly(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetRecordMasterOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_RecordMasterOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecordMasterOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecordMasterOnlyOn();
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::RecordMasterOnlyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_RecordMasterOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecordMasterOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecordMasterOnlyOff();
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::RecordMasterOnlyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetRecordingSamplingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRecordingSamplingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRecordingSamplingMode(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetRecordingSamplingMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetRecordingSamplingModeFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRecordingSamplingModeFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRecordingSamplingModeFromString(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetRecordingSamplingModeFromString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetRecordingSamplingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecordingSamplingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRecordingSamplingMode() :
      op->vtkMRMLSequenceBrowserNode::GetRecordingSamplingMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetRecordingSamplingModeAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecordingSamplingModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetRecordingSamplingModeAsString() :
      op->vtkMRMLSequenceBrowserNode::GetRecordingSamplingModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSequenceBrowserNode_GetRecordingSamplingModeAsString_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRecordingSamplingModeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkMRMLSequenceBrowserNode::GetRecordingSamplingModeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSequenceBrowserNode_GetRecordingSamplingModeAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLSequenceBrowserNode_GetRecordingSamplingModeAsString_s1(self, args);
    case 1:
      return PyvtkMRMLSequenceBrowserNode_GetRecordingSamplingModeAsString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRecordingSamplingModeAsString");
  return nullptr;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetRecordingSamplingModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRecordingSamplingModeFromString");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSequenceBrowserNode::GetRecordingSamplingModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetMissingItemModeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMissingItemModeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkMRMLSequenceBrowserNode::GetMissingItemModeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetMissingItemModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMissingItemModeFromString");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    typedef vtkMRMLSequenceBrowserNode::MissingItemModeType tempr_type;
  tempr_type tempr = vtkMRMLSequenceBrowserNode::GetMissingItemModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkMRMLSequenceBrowserNode_MissingItemModeType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetIndexDisplayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexDisplayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIndexDisplayMode(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetIndexDisplayMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetIndexDisplayModeFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexDisplayModeFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIndexDisplayModeFromString(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetIndexDisplayModeFromString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetIndexDisplayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexDisplayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndexDisplayMode() :
      op->vtkMRMLSequenceBrowserNode::GetIndexDisplayMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetIndexDisplayModeAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexDisplayModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetIndexDisplayModeAsString() :
      op->vtkMRMLSequenceBrowserNode::GetIndexDisplayModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSequenceBrowserNode_GetIndexDisplayModeAsString_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetIndexDisplayModeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkMRMLSequenceBrowserNode::GetIndexDisplayModeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSequenceBrowserNode_GetIndexDisplayModeAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLSequenceBrowserNode_GetIndexDisplayModeAsString_s1(self, args);
    case 1:
      return PyvtkMRMLSequenceBrowserNode_GetIndexDisplayModeAsString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetIndexDisplayModeAsString");
  return nullptr;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetIndexDisplayFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexDisplayFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIndexDisplayFormat(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetIndexDisplayFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetIndexDisplayFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexDisplayFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetIndexDisplayFormat() :
      op->vtkMRMLSequenceBrowserNode::GetIndexDisplayFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetIndexDisplayModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetIndexDisplayModeFromString");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSequenceBrowserNode::GetIndexDisplayModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SelectNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  int temp0 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->SelectNextItem(temp0) :
      op->vtkMRMLSequenceBrowserNode::SelectNextItem(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SelectFirstItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectFirstItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->SelectFirstItem() :
      op->vtkMRMLSequenceBrowserNode::SelectFirstItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SelectLastItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectLastItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->SelectLastItem() :
      op->vtkMRMLSequenceBrowserNode::SelectLastItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetNumberOfItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfItems() :
      op->vtkMRMLSequenceBrowserNode::GetNumberOfItems());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_AddProxyNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProxyNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  vtkMRMLSequenceNode *temp1 = nullptr;
  bool temp2 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLSequenceNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->AddProxyNode(temp0, temp1, temp2) :
      op->vtkMRMLSequenceBrowserNode::AddProxyNode(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetProxyNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkMRMLSequenceNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceNode"))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetProxyNode(temp0) :
      op->vtkMRMLSequenceBrowserNode::GetProxyNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetVirtualOutputDataNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVirtualOutputDataNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkMRMLSequenceNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceNode"))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetVirtualOutputDataNode(temp0) :
      op->vtkMRMLSequenceBrowserNode::GetVirtualOutputDataNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetOverwriteTargetNodeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOverwriteTargetNodeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOverwriteTargetNodeName(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetOverwriteTargetNodeName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetDeepCopyVirtualNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeepCopyVirtualNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeepCopyVirtualNodes(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetDeepCopyVirtualNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetSequenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSequenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    vtkMRMLSequenceNode *tempr = (ap.IsBound() ?
      op->GetSequenceNode(temp0) :
      op->vtkMRMLSequenceBrowserNode::GetSequenceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetAllProxyNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllProxyNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->GetAllProxyNodes(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::GetAllProxyNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetAllVirtualOutputDataNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllVirtualOutputDataNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->GetAllVirtualOutputDataNodes(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::GetAllVirtualOutputDataNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_IsProxyNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsProxyNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsProxyNode(temp0) :
      op->vtkMRMLSequenceBrowserNode::IsProxyNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_IsProxyNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsProxyNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsProxyNodeID(temp0) :
      op->vtkMRMLSequenceBrowserNode::IsProxyNodeID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_RemoveProxyNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveProxyNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveProxyNode(temp0);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::RemoveProxyNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_RemoveAllProxyNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllProxyNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllProxyNodes();
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::RemoveAllProxyNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_IsAnySequenceNodeRecording(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAnySequenceNodeRecording");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAnySequenceNodeRecording() :
      op->vtkMRMLSequenceBrowserNode::IsAnySequenceNodeRecording());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetPlayback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlayback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkMRMLSequenceNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPlayback(temp0) :
      op->vtkMRMLSequenceBrowserNode::GetPlayback(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetPlayback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlayback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkMRMLSequenceNode *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceNode") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPlayback(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetPlayback(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetRecording(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecording");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkMRMLSequenceNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRecording(temp0) :
      op->vtkMRMLSequenceBrowserNode::GetRecording(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetRecording(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRecording");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkMRMLSequenceNode *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceNode") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRecording(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetRecording(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetSaveChanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveChanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkMRMLSequenceNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSaveChanges(temp0) :
      op->vtkMRMLSequenceBrowserNode::GetSaveChanges(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetSaveChanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveChanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkMRMLSequenceNode *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceNode") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSaveChanges(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetSaveChanges(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetOverwriteProxyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverwriteProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkMRMLSequenceNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOverwriteProxyName(temp0) :
      op->vtkMRMLSequenceBrowserNode::GetOverwriteProxyName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetOverwriteProxyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOverwriteProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkMRMLSequenceNode *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceNode") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOverwriteProxyName(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetOverwriteProxyName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetMissingItemMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMissingItemMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkMRMLSequenceNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceNode"))
  {
    typedef vtkMRMLSequenceBrowserNode::MissingItemModeType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetMissingItemMode(temp0) :
      op->vtkMRMLSequenceBrowserNode::GetMissingItemMode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = PyvtkMRMLSequenceBrowserNode_MissingItemModeType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_SetMissingItemMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMissingItemMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  vtkMRMLSequenceNode *temp0 = nullptr;
  typedef vtkMRMLSequenceBrowserNode::MissingItemModeType temp1_type;
  temp1_type temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceNode") &&
      ap.GetEnumValue(temp1, "vtkMRMLSequenceBrowserNode.MissingItemModeType"))
  {
    if (ap.IsBound())
    {
      op->SetMissingItemMode(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SetMissingItemMode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

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
      op->vtkMRMLSequenceBrowserNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLSequenceBrowserNode_SaveProxyNodesState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveProxyNodesState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveProxyNodesState();
    }
    else
    {
      op->vtkMRMLSequenceBrowserNode::SaveProxyNodesState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_GetFormattedIndexValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFormattedIndexValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceBrowserNode *op = static_cast<vtkMRMLSequenceBrowserNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFormattedIndexValue(temp0) :
      op->vtkMRMLSequenceBrowserNode::GetFormattedIndexValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceBrowserNode_ValidateFormatString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ValidateFormatString");

  std::string temp0;
  std::string temp1;
  std::string temp2;
  std::string temp3;
  std::string temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    bool tempr = vtkMRMLSequenceBrowserNode::ValidateFormatString(temp0, temp1, temp2, temp3, temp4);

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
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSequenceBrowserNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSequenceBrowserNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSequenceBrowserNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSequenceBrowserNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLSequenceBrowserNode\nC++: static vtkMRMLSequenceBrowserNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSequenceBrowserNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSequenceBrowserNode\nC++: vtkMRMLSequenceBrowserNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSequenceBrowserNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSequenceBrowserNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLSequenceBrowserNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of a GAD node.\n"},
  {"Copy", PyvtkMRMLSequenceBrowserNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLSequenceBrowserNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet unique node XML tag name (like Volume, Model)\n"},
  {"SetAndObserveMasterSequenceNodeID", PyvtkMRMLSequenceBrowserNode_SetAndObserveMasterSequenceNodeID, METH_VARARGS,
   "SetAndObserveMasterSequenceNodeID(self, sequenceNodeID:str) -> str\nC++: std::string SetAndObserveMasterSequenceNodeID(\n    const char *sequenceNodeID)\n\nSet the sequence data node. Returns the new proxy node postfix.\n"},
  {"GetMasterSequenceNode", PyvtkMRMLSequenceBrowserNode_GetMasterSequenceNode, METH_VARARGS,
   "GetMasterSequenceNode(self) -> vtkMRMLSequenceNode\nC++: vtkMRMLSequenceNode *GetMasterSequenceNode()\n\nGet the sequence data node\n"},
  {"AddSynchronizedSequenceNode", PyvtkMRMLSequenceBrowserNode_AddSynchronizedSequenceNode, METH_VARARGS,
   "AddSynchronizedSequenceNode(self, synchronizedSequenceNodeId:str)\n    -> str\nC++: std::string AddSynchronizedSequenceNode(\n    const char *synchronizedSequenceNodeId)\nAddSynchronizedSequenceNode(self,\n    synchronizedSequenceNode:vtkMRMLSequenceNode) -> str\nC++: std::string AddSynchronizedSequenceNode(\n    vtkMRMLSequenceNode *synchronizedSequenceNode)\n\nDeprecated. Use AddSynchronizedSequenceNodeID instead.\n"},
  {"AddSynchronizedSequenceNodeID", PyvtkMRMLSequenceBrowserNode_AddSynchronizedSequenceNodeID, METH_VARARGS,
   "AddSynchronizedSequenceNodeID(self,\n    synchronizedSequenceNodeId:str) -> str\nC++: std::string AddSynchronizedSequenceNodeID(\n    const char *synchronizedSequenceNodeId)\n\nAdds a node for synchronized browsing. Returns the new proxy node\npostfix.\n"},
  {"RemoveSynchronizedSequenceNode", PyvtkMRMLSequenceBrowserNode_RemoveSynchronizedSequenceNode, METH_VARARGS,
   "RemoveSynchronizedSequenceNode(self, nodeId:str) -> None\nC++: void RemoveSynchronizedSequenceNode(const char *nodeId)\n\nRemoves a node from synchronized browsing\n"},
  {"RemoveAllSequenceNodes", PyvtkMRMLSequenceBrowserNode_RemoveAllSequenceNodes, METH_VARARGS,
   "RemoveAllSequenceNodes(self) -> None\nC++: void RemoveAllSequenceNodes()\n\nRemove all sequence nodes (including the master sequence node)\n"},
  {"GetSynchronizedSequenceNodes", PyvtkMRMLSequenceBrowserNode_GetSynchronizedSequenceNodes, METH_VARARGS,
   "GetSynchronizedSequenceNodes(self,\n    synchronizedDataNodes:vtkCollection,\n    includeMasterNode:bool=False) -> None\nC++: void GetSynchronizedSequenceNodes(\n    vtkCollection *synchronizedDataNodes,\n    bool includeMasterNode=false)\n\nReturns all synchronized sequence nodes (does not include the\nmaster sequence node)\n"},
  {"GetNumberOfSynchronizedSequenceNodes", PyvtkMRMLSequenceBrowserNode_GetNumberOfSynchronizedSequenceNodes, METH_VARARGS,
   "GetNumberOfSynchronizedSequenceNodes(self,\n    includeMasterNode:bool=False) -> int\nC++: int GetNumberOfSynchronizedSequenceNodes(\n    bool includeMasterNode=false)\n\nReturns number of synchronized sequence nodes\n"},
  {"IsSynchronizedSequenceNode", PyvtkMRMLSequenceBrowserNode_IsSynchronizedSequenceNode, METH_VARARGS,
   "IsSynchronizedSequenceNode(self, sequenceNodeId:str,\n    includeMasterNode:bool=False) -> bool\nC++: bool IsSynchronizedSequenceNode(const char *sequenceNodeId,\n    bool includeMasterNode=false)\nIsSynchronizedSequenceNode(self, sequenceNode:vtkMRMLSequenceNode,\n     includeMasterNode:bool=False) -> bool\nC++: bool IsSynchronizedSequenceNode(\n    vtkMRMLSequenceNode *sequenceNode,\n    bool includeMasterNode=false)\n\nDeprecated. Use IsSynchronizedSequenceNodeID instead.\n"},
  {"IsSynchronizedSequenceNodeID", PyvtkMRMLSequenceBrowserNode_IsSynchronizedSequenceNodeID, METH_VARARGS,
   "IsSynchronizedSequenceNodeID(self, sequenceNodeId:str,\n    includeMasterNode:bool=False) -> bool\nC++: bool IsSynchronizedSequenceNodeID(const char *sequenceNodeId,\n     bool includeMasterNode=false)\n\nReturns true if the node is selected for synchronized browsing\n"},
  {"GetPlaybackActive", PyvtkMRMLSequenceBrowserNode_GetPlaybackActive, METH_VARARGS,
   "GetPlaybackActive(self) -> bool\nC++: virtual bool GetPlaybackActive()\n\nGet/Set automatic playback (automatic continuous changing of\nselected sequence nodes)\n"},
  {"SetPlaybackActive", PyvtkMRMLSequenceBrowserNode_SetPlaybackActive, METH_VARARGS,
   "SetPlaybackActive(self, _arg:bool) -> None\nC++: virtual void SetPlaybackActive(bool _arg)\n\nGet/Set automatic playback (automatic continuous changing of\nselected sequence nodes)\n"},
  {"PlaybackActiveOn", PyvtkMRMLSequenceBrowserNode_PlaybackActiveOn, METH_VARARGS,
   "PlaybackActiveOn(self) -> None\nC++: virtual void PlaybackActiveOn()\n\nGet/Set automatic playback (automatic continuous changing of\nselected sequence nodes)\n"},
  {"PlaybackActiveOff", PyvtkMRMLSequenceBrowserNode_PlaybackActiveOff, METH_VARARGS,
   "PlaybackActiveOff(self) -> None\nC++: virtual void PlaybackActiveOff()\n\nGet/Set automatic playback (automatic continuous changing of\nselected sequence nodes)\n"},
  {"GetPlaybackRateFps", PyvtkMRMLSequenceBrowserNode_GetPlaybackRateFps, METH_VARARGS,
   "GetPlaybackRateFps(self) -> float\nC++: virtual double GetPlaybackRateFps()\n\nGet/Set playback rate in fps (frames per second)\n"},
  {"SetPlaybackRateFps", PyvtkMRMLSequenceBrowserNode_SetPlaybackRateFps, METH_VARARGS,
   "SetPlaybackRateFps(self, _arg:float) -> None\nC++: virtual void SetPlaybackRateFps(double _arg)\n\nGet/Set playback rate in fps (frames per second)\n"},
  {"GetPlaybackItemSkippingEnabled", PyvtkMRMLSequenceBrowserNode_GetPlaybackItemSkippingEnabled, METH_VARARGS,
   "GetPlaybackItemSkippingEnabled(self) -> bool\nC++: virtual bool GetPlaybackItemSkippingEnabled()\n\nSkipping items if necessary to reach requested playback rate.\nEnabled by default.\n"},
  {"SetPlaybackItemSkippingEnabled", PyvtkMRMLSequenceBrowserNode_SetPlaybackItemSkippingEnabled, METH_VARARGS,
   "SetPlaybackItemSkippingEnabled(self, _arg:bool) -> None\nC++: virtual void SetPlaybackItemSkippingEnabled(bool _arg)\n\nSkipping items if necessary to reach requested playback rate.\nEnabled by default.\n"},
  {"PlaybackItemSkippingEnabledOn", PyvtkMRMLSequenceBrowserNode_PlaybackItemSkippingEnabledOn, METH_VARARGS,
   "PlaybackItemSkippingEnabledOn(self) -> None\nC++: virtual void PlaybackItemSkippingEnabledOn()\n\nSkipping items if necessary to reach requested playback rate.\nEnabled by default.\n"},
  {"PlaybackItemSkippingEnabledOff", PyvtkMRMLSequenceBrowserNode_PlaybackItemSkippingEnabledOff, METH_VARARGS,
   "PlaybackItemSkippingEnabledOff(self) -> None\nC++: virtual void PlaybackItemSkippingEnabledOff()\n\nSkipping items if necessary to reach requested playback rate.\nEnabled by default.\n"},
  {"GetPlaybackLooped", PyvtkMRMLSequenceBrowserNode_GetPlaybackLooped, METH_VARARGS,
   "GetPlaybackLooped(self) -> bool\nC++: virtual bool GetPlaybackLooped()\n\nGet/Set playback looping (restart from the first sequence node\nwhen reached the last one)\n"},
  {"SetPlaybackLooped", PyvtkMRMLSequenceBrowserNode_SetPlaybackLooped, METH_VARARGS,
   "SetPlaybackLooped(self, _arg:bool) -> None\nC++: virtual void SetPlaybackLooped(bool _arg)\n\nGet/Set playback looping (restart from the first sequence node\nwhen reached the last one)\n"},
  {"PlaybackLoopedOn", PyvtkMRMLSequenceBrowserNode_PlaybackLoopedOn, METH_VARARGS,
   "PlaybackLoopedOn(self) -> None\nC++: virtual void PlaybackLoopedOn()\n\nGet/Set playback looping (restart from the first sequence node\nwhen reached the last one)\n"},
  {"PlaybackLoopedOff", PyvtkMRMLSequenceBrowserNode_PlaybackLoopedOff, METH_VARARGS,
   "PlaybackLoopedOff(self) -> None\nC++: virtual void PlaybackLoopedOff()\n\nGet/Set playback looping (restart from the first sequence node\nwhen reached the last one)\n"},
  {"GetSelectedItemNumber", PyvtkMRMLSequenceBrowserNode_GetSelectedItemNumber, METH_VARARGS,
   "GetSelectedItemNumber(self) -> int\nC++: virtual int GetSelectedItemNumber()\n\nGet/Set selected bundle index\n"},
  {"SetSelectedItemNumber", PyvtkMRMLSequenceBrowserNode_SetSelectedItemNumber, METH_VARARGS,
   "SetSelectedItemNumber(self, _arg:int) -> None\nC++: virtual void SetSelectedItemNumber(int _arg)\n\nGet/Set selected bundle index\n"},
  {"SetSelectedItemByIndexValue", PyvtkMRMLSequenceBrowserNode_SetSelectedItemByIndexValue, METH_VARARGS,
   "SetSelectedItemByIndexValue(self, indexValue:str,\n    exactMatchRequired:bool=True) -> bool\nC++: bool SetSelectedItemByIndexValue(\n    const std::string &indexValue, bool exactMatchRequired=true)\n\nSet selected item by index value. If exact match is not required\nand index is numeric then the best matching data node is\nreturned. Returns true if the index value is found.\n\\sa GetItemNumberFromIndexValue\n"},
  {"GetRecordingActive", PyvtkMRMLSequenceBrowserNode_GetRecordingActive, METH_VARARGS,
   "GetRecordingActive(self) -> bool\nC++: virtual bool GetRecordingActive()\n\nGet/set recording of proxy nodes\n"},
  {"SetRecordingActive", PyvtkMRMLSequenceBrowserNode_SetRecordingActive, METH_VARARGS,
   "SetRecordingActive(self, recording:bool) -> None\nC++: void SetRecordingActive(bool recording)\n\nGet/set recording of proxy nodes\n"},
  {"RecordingActiveOn", PyvtkMRMLSequenceBrowserNode_RecordingActiveOn, METH_VARARGS,
   "RecordingActiveOn(self) -> None\nC++: virtual void RecordingActiveOn()\n\nGet/set recording of proxy nodes\n"},
  {"RecordingActiveOff", PyvtkMRMLSequenceBrowserNode_RecordingActiveOff, METH_VARARGS,
   "RecordingActiveOff(self) -> None\nC++: virtual void RecordingActiveOff()\n\nGet/set recording of proxy nodes\n"},
  {"GetRecordMasterOnly", PyvtkMRMLSequenceBrowserNode_GetRecordMasterOnly, METH_VARARGS,
   "GetRecordMasterOnly(self) -> bool\nC++: virtual bool GetRecordMasterOnly()\n\nGet/set whether to only record when the master node is modified\n(or emits an observed event)\n"},
  {"SetRecordMasterOnly", PyvtkMRMLSequenceBrowserNode_SetRecordMasterOnly, METH_VARARGS,
   "SetRecordMasterOnly(self, _arg:bool) -> None\nC++: virtual void SetRecordMasterOnly(bool _arg)\n\nGet/set whether to only record when the master node is modified\n(or emits an observed event)\n"},
  {"RecordMasterOnlyOn", PyvtkMRMLSequenceBrowserNode_RecordMasterOnlyOn, METH_VARARGS,
   "RecordMasterOnlyOn(self) -> None\nC++: virtual void RecordMasterOnlyOn()\n\nGet/set whether to only record when the master node is modified\n(or emits an observed event)\n"},
  {"RecordMasterOnlyOff", PyvtkMRMLSequenceBrowserNode_RecordMasterOnlyOff, METH_VARARGS,
   "RecordMasterOnlyOff(self) -> None\nC++: virtual void RecordMasterOnlyOff()\n\nGet/set whether to only record when the master node is modified\n(or emits an observed event)\n"},
  {"SetRecordingSamplingMode", PyvtkMRMLSequenceBrowserNode_SetRecordingSamplingMode, METH_VARARGS,
   "SetRecordingSamplingMode(self, _arg:int) -> None\nC++: virtual void SetRecordingSamplingMode(int _arg)\n\nGet/set the recording sampling mode\n"},
  {"SetRecordingSamplingModeFromString", PyvtkMRMLSequenceBrowserNode_SetRecordingSamplingModeFromString, METH_VARARGS,
   "SetRecordingSamplingModeFromString(self,\n    recordingSamplingModeString:str) -> None\nC++: void SetRecordingSamplingModeFromString(\n    const char *recordingSamplingModeString)\n\nGet/set the recording sampling mode\n"},
  {"GetRecordingSamplingMode", PyvtkMRMLSequenceBrowserNode_GetRecordingSamplingMode, METH_VARARGS,
   "GetRecordingSamplingMode(self) -> int\nC++: virtual int GetRecordingSamplingMode()\n\nGet/set the recording sampling mode\n"},
  {"GetRecordingSamplingModeAsString", PyvtkMRMLSequenceBrowserNode_GetRecordingSamplingModeAsString, METH_VARARGS,
   "GetRecordingSamplingModeAsString(self) -> str\nC++: virtual std::string GetRecordingSamplingModeAsString()\nGetRecordingSamplingModeAsString(recordingSamplingMode:int) -> str\nC++: static std::string GetRecordingSamplingModeAsString(\n    int recordingSamplingMode)\n\nGet/set the recording sampling mode\n"},
  {"GetRecordingSamplingModeFromString", PyvtkMRMLSequenceBrowserNode_GetRecordingSamplingModeFromString, METH_VARARGS,
   "GetRecordingSamplingModeFromString(\n    recordingSamplingModeString:str) -> int\nC++: static int GetRecordingSamplingModeFromString(\n    const std::string &recordingSamplingModeString)\n\nHelper functions for converting between string and code\nrepresentation of recording sampling modes\n"},
  {"GetMissingItemModeAsString", PyvtkMRMLSequenceBrowserNode_GetMissingItemModeAsString, METH_VARARGS,
   "GetMissingItemModeAsString(missingItemMode:int) -> str\nC++: static std::string GetMissingItemModeAsString(\n    int missingItemMode)\n\nHelper functions for converting between string and code\nrepresentation of recording sampling modes\n"},
  {"GetMissingItemModeFromString", PyvtkMRMLSequenceBrowserNode_GetMissingItemModeFromString, METH_VARARGS,
   "GetMissingItemModeFromString(missingItemModeString:str)\n    -> MissingItemModeType\nC++: static MissingItemModeType GetMissingItemModeFromString(\n    const std::string &missingItemModeString)\n\nHelper functions for converting between string and code\nrepresentation of recording sampling modes\n"},
  {"SetIndexDisplayMode", PyvtkMRMLSequenceBrowserNode_SetIndexDisplayMode, METH_VARARGS,
   "SetIndexDisplayMode(self, _arg:int) -> None\nC++: virtual void SetIndexDisplayMode(int _arg)\n\nGet/set index display mode\n"},
  {"SetIndexDisplayModeFromString", PyvtkMRMLSequenceBrowserNode_SetIndexDisplayModeFromString, METH_VARARGS,
   "SetIndexDisplayModeFromString(self, indexDisplayModeString:str)\n    -> None\nC++: void SetIndexDisplayModeFromString(\n    const char *indexDisplayModeString)\n\nGet/set index display mode\n"},
  {"GetIndexDisplayMode", PyvtkMRMLSequenceBrowserNode_GetIndexDisplayMode, METH_VARARGS,
   "GetIndexDisplayMode(self) -> int\nC++: virtual int GetIndexDisplayMode()\n\nGet/set index display mode\n"},
  {"GetIndexDisplayModeAsString", PyvtkMRMLSequenceBrowserNode_GetIndexDisplayModeAsString, METH_VARARGS,
   "GetIndexDisplayModeAsString(self) -> str\nC++: virtual std::string GetIndexDisplayModeAsString()\nGetIndexDisplayModeAsString(indexDisplayMode:int) -> str\nC++: static std::string GetIndexDisplayModeAsString(\n    int indexDisplayMode)\n\nGet/set index display mode\n"},
  {"SetIndexDisplayFormat", PyvtkMRMLSequenceBrowserNode_SetIndexDisplayFormat, METH_VARARGS,
   "SetIndexDisplayFormat(self, displayFormat:str) -> None\nC++: void SetIndexDisplayFormat(std::string displayFormat)\n\nGet/set format of index value display (used if index type is\nnumeric)\n"},
  {"GetIndexDisplayFormat", PyvtkMRMLSequenceBrowserNode_GetIndexDisplayFormat, METH_VARARGS,
   "GetIndexDisplayFormat(self) -> str\nC++: virtual std::string GetIndexDisplayFormat()\n\nGet/set format of index value display (used if index type is\nnumeric)\n"},
  {"GetIndexDisplayModeFromString", PyvtkMRMLSequenceBrowserNode_GetIndexDisplayModeFromString, METH_VARARGS,
   "GetIndexDisplayModeFromString(indexDisplayModeString:str) -> int\nC++: static int GetIndexDisplayModeFromString(\n    const std::string &indexDisplayModeString)\n\nHelper functions for converting between string and code\nrepresentation of index display modes\n"},
  {"SelectNextItem", PyvtkMRMLSequenceBrowserNode_SelectNextItem, METH_VARARGS,
   "SelectNextItem(self, selectionIncrement:int=1) -> int\nC++: int SelectNextItem(int selectionIncrement=1)\n\nSelects a sequence item for display, returns current selected\nitem number.\n"},
  {"SelectFirstItem", PyvtkMRMLSequenceBrowserNode_SelectFirstItem, METH_VARARGS,
   "SelectFirstItem(self) -> int\nC++: int SelectFirstItem()\n\nSelects a sequence item for display, returns current selected\nitem number.\n"},
  {"SelectLastItem", PyvtkMRMLSequenceBrowserNode_SelectLastItem, METH_VARARGS,
   "SelectLastItem(self) -> int\nC++: int SelectLastItem()\n\nSelects a sequence item for display, returns current selected\nitem number.\n"},
  {"GetNumberOfItems", PyvtkMRMLSequenceBrowserNode_GetNumberOfItems, METH_VARARGS,
   "GetNumberOfItems(self) -> int\nC++: int GetNumberOfItems()\n\nReturns number of items in the sequence (number of data nodes in\nmaster sequence node)\n"},
  {"AddProxyNode", PyvtkMRMLSequenceBrowserNode_AddProxyNode, METH_VARARGS,
   "AddProxyNode(self, sourceProxyNode:vtkMRMLNode,\n    sequenceNode:vtkMRMLSequenceNode, copy:bool=True)\n    -> vtkMRMLNode\nC++: vtkMRMLNode *AddProxyNode(vtkMRMLNode *sourceProxyNode,\n    vtkMRMLSequenceNode *sequenceNode, bool copy=true)\n\nAdds proxy nodes from another scene (typically from the main\nscene). The data node is optionally copied.\n"},
  {"GetProxyNode", PyvtkMRMLSequenceBrowserNode_GetProxyNode, METH_VARARGS,
   "GetProxyNode(self, sequenceNode:vtkMRMLSequenceNode)\n    -> vtkMRMLNode\nC++: vtkMRMLNode *GetProxyNode(vtkMRMLSequenceNode *sequenceNode)\n\nGet proxy corresponding to a sequence node.\n"},
  {"GetVirtualOutputDataNode", PyvtkMRMLSequenceBrowserNode_GetVirtualOutputDataNode, METH_VARARGS,
   "GetVirtualOutputDataNode(self, sequenceNode:vtkMRMLSequenceNode)\n    -> vtkMRMLNode\nC++: vtkMRMLNode *GetVirtualOutputDataNode(\n    vtkMRMLSequenceNode *sequenceNode)\n\nDeprecated method!\n"},
  {"SetOverwriteTargetNodeName", PyvtkMRMLSequenceBrowserNode_SetOverwriteTargetNodeName, METH_VARARGS,
   "SetOverwriteTargetNodeName(self, overwrite:bool) -> None\nC++: void SetOverwriteTargetNodeName(bool overwrite)\n\nDeprecated method!\n"},
  {"SetDeepCopyVirtualNodes", PyvtkMRMLSequenceBrowserNode_SetDeepCopyVirtualNodes, METH_VARARGS,
   "SetDeepCopyVirtualNodes(self, deepcopy:bool) -> None\nC++: void SetDeepCopyVirtualNodes(bool deepcopy)\n\nDeprecated method!\n"},
  {"GetSequenceNode", PyvtkMRMLSequenceBrowserNode_GetSequenceNode, METH_VARARGS,
   "GetSequenceNode(self, proxyNode:vtkMRMLNode)\n    -> vtkMRMLSequenceNode\nC++: vtkMRMLSequenceNode *GetSequenceNode(vtkMRMLNode *proxyNode)\n\nGet sequence node corresponding to a proxy node.\n"},
  {"GetAllProxyNodes", PyvtkMRMLSequenceBrowserNode_GetAllProxyNodes, METH_VARARGS,
   "GetAllProxyNodes(self, nodes:vtkCollection) -> None\nC++: void GetAllProxyNodes(vtkCollection *nodes)\n\n"},
  {"GetAllVirtualOutputDataNodes", PyvtkMRMLSequenceBrowserNode_GetAllVirtualOutputDataNodes, METH_VARARGS,
   "GetAllVirtualOutputDataNodes(self, nodes:vtkCollection) -> None\nC++: void GetAllVirtualOutputDataNodes(vtkCollection *nodes)\n\nDeprecated method!\n"},
  {"IsProxyNode", PyvtkMRMLSequenceBrowserNode_IsProxyNode, METH_VARARGS,
   "IsProxyNode(self, nodeId:str) -> bool\nC++: bool IsProxyNode(const char *nodeId)\n\nDeprecated. Use IsProxyNodeID instead.\n"},
  {"IsProxyNodeID", PyvtkMRMLSequenceBrowserNode_IsProxyNodeID, METH_VARARGS,
   "IsProxyNodeID(self, nodeId:str) -> bool\nC++: bool IsProxyNodeID(const char *nodeId)\n\nReturns true if the nodeId belongs to a proxy node managed by\nthis browser node.\n"},
  {"RemoveProxyNode", PyvtkMRMLSequenceBrowserNode_RemoveProxyNode, METH_VARARGS,
   "RemoveProxyNode(self, postfix:str) -> None\nC++: void RemoveProxyNode(const std::string &postfix)\n\n"},
  {"RemoveAllProxyNodes", PyvtkMRMLSequenceBrowserNode_RemoveAllProxyNodes, METH_VARARGS,
   "RemoveAllProxyNodes(self) -> None\nC++: void RemoveAllProxyNodes()\n\n"},
  {"IsAnySequenceNodeRecording", PyvtkMRMLSequenceBrowserNode_IsAnySequenceNodeRecording, METH_VARARGS,
   "IsAnySequenceNodeRecording(self) -> bool\nC++: bool IsAnySequenceNodeRecording()\n\nReturns true if any of the sequence node is allowed to record\n"},
  {"GetPlayback", PyvtkMRMLSequenceBrowserNode_GetPlayback, METH_VARARGS,
   "GetPlayback(self, sequenceNode:vtkMRMLSequenceNode) -> bool\nC++: bool GetPlayback(vtkMRMLSequenceNode *sequenceNode)\n\nUpdate the proxy node with the content of the sequence.\n"},
  {"SetPlayback", PyvtkMRMLSequenceBrowserNode_SetPlayback, METH_VARARGS,
   "SetPlayback(self, sequenceNode:vtkMRMLSequenceNode, playback:bool)\n     -> None\nC++: void SetPlayback(vtkMRMLSequenceNode *sequenceNode,\n    bool playback)\n\nUpdate the proxy node with the content of the sequence.\n"},
  {"GetRecording", PyvtkMRMLSequenceBrowserNode_GetRecording, METH_VARARGS,
   "GetRecording(self, sequenceNode:vtkMRMLSequenceNode) -> bool\nC++: bool GetRecording(vtkMRMLSequenceNode *sequenceNode)\n\nAdd new items to the sequence when sequence recording is\nactivated.\n"},
  {"SetRecording", PyvtkMRMLSequenceBrowserNode_SetRecording, METH_VARARGS,
   "SetRecording(self, sequenceNode:vtkMRMLSequenceNode,\n    recording:bool) -> None\nC++: void SetRecording(vtkMRMLSequenceNode *sequenceNode,\n    bool recording)\n\nAdd new items to the sequence when sequence recording is\nactivated.\n"},
  {"GetSaveChanges", PyvtkMRMLSequenceBrowserNode_GetSaveChanges, METH_VARARGS,
   "GetSaveChanges(self, sequenceNode:vtkMRMLSequenceNode) -> bool\nC++: bool GetSaveChanges(vtkMRMLSequenceNode *sequenceNode)\n\nEnable saving of current proxy node state into the sequence. If\nsaving is enabled then data is copied from the sequence to into\nthe proxy node using shallow-copy, which is faster than deep-copy\n(that is used when save changes disabled). However, if save\nchanges enabled, proxy node changes are stored in the sequence,\ntherefore users may accidentally change sequence node content by\nmodifying proxy nodes.\n"},
  {"SetSaveChanges", PyvtkMRMLSequenceBrowserNode_SetSaveChanges, METH_VARARGS,
   "SetSaveChanges(self, sequenceNode:vtkMRMLSequenceNode, save:bool)\n    -> None\nC++: void SetSaveChanges(vtkMRMLSequenceNode *sequenceNode,\n    bool save)\n\nEnable saving of current proxy node state into the sequence. If\nsaving is enabled then data is copied from the sequence to into\nthe proxy node using shallow-copy, which is faster than deep-copy\n(that is used when save changes disabled). However, if save\nchanges enabled, proxy node changes are stored in the sequence,\ntherefore users may accidentally change sequence node content by\nmodifying proxy nodes.\n"},
  {"GetOverwriteProxyName", PyvtkMRMLSequenceBrowserNode_GetOverwriteProxyName, METH_VARARGS,
   "GetOverwriteProxyName(self, sequenceNode:vtkMRMLSequenceNode)\n    -> bool\nC++: bool GetOverwriteProxyName(vtkMRMLSequenceNode *sequenceNode)\n\nOverwrite proxy node name with name automatically generated from\nsequence base name and current item index.\n"},
  {"SetOverwriteProxyName", PyvtkMRMLSequenceBrowserNode_SetOverwriteProxyName, METH_VARARGS,
   "SetOverwriteProxyName(self, sequenceNode:vtkMRMLSequenceNode,\n    overwrite:bool) -> None\nC++: void SetOverwriteProxyName(vtkMRMLSequenceNode *sequenceNode,\n     bool overwrite)\n\nOverwrite proxy node name with name automatically generated from\nsequence base name and current item index.\n"},
  {"GetMissingItemMode", PyvtkMRMLSequenceBrowserNode_GetMissingItemMode, METH_VARARGS,
   "GetMissingItemMode(self, sequenceNode:vtkMRMLSequenceNode)\n    -> MissingItemModeType\nC++: MissingItemModeType GetMissingItemMode(\n    vtkMRMLSequenceNode *sequenceNode)\n\nSpecify what happens when during sequence browsing if a sequence\ndoes not contain an item for the current index.\n\\sa MissingItemMode\n"},
  {"SetMissingItemMode", PyvtkMRMLSequenceBrowserNode_SetMissingItemMode, METH_VARARGS,
   "SetMissingItemMode(self, sequenceNode:vtkMRMLSequenceNode,\n    missingItemMode:MissingItemModeType) -> None\nC++: void SetMissingItemMode(vtkMRMLSequenceNode *sequenceNode,\n    MissingItemModeType missingItemMode)\n\nSpecify what happens when during sequence browsing if a sequence\ndoes not contain an item for the current index.\n\\sa MissingItemMode\n"},
  {"ProcessMRMLEvents", PyvtkMRMLSequenceBrowserNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nProcess MRML node events for recording of the proxy nodes\n"},
  {"SaveProxyNodesState", PyvtkMRMLSequenceBrowserNode_SaveProxyNodesState, METH_VARARGS,
   "SaveProxyNodesState(self) -> None\nC++: virtual void SaveProxyNodesState()\n\nSave state of all proxy nodes that recording is enabled for\n"},
  {"GetFormattedIndexValue", PyvtkMRMLSequenceBrowserNode_GetFormattedIndexValue, METH_VARARGS,
   "GetFormattedIndexValue(self, index:int) -> str\nC++: std::string GetFormattedIndexValue(int index)\n\nReturns the formatted index value, formatted using the sprintf\nstring provided by IndexDisplayFormat\n\\sa SetIndexDisplayFormat() GetIndexDisplayFormat()\n"},
  {"ValidateFormatString", PyvtkMRMLSequenceBrowserNode_ValidateFormatString, METH_VARARGS,
   "ValidateFormatString(validatedFormat:str, prefix:str, suffix:str,\n    requestedFormat:str, typeString:str) -> bool\nC++: static bool ValidateFormatString(\n    std::string &validatedFormat, std::string &prefix,\n    std::string &suffix, const std::string &requestedFormat,\n    const std::string &typeString)\n\nParses the requestedFormat string to find a validated format for\nthe types contained in typeString. validatedFormat is set to the\nfirst matching sprintf for the input types prefix and suffix are\nset to the non-matching components of requestedFormat\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSequenceBrowserNode_Doc =
  "vtkMRMLSequenceBrowserNode - no description provided.\n\n"
  "Superclass: vtkMRMLNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSequenceBrowserNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerSequencesModuleMRMLPython.vtkMRMLSequenceBrowserNode", // tp_name
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
  PyvtkMRMLSequenceBrowserNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSequenceBrowserNode_StaticNew()
{
  return vtkMRMLSequenceBrowserNode::New();
}

PyObject *PyvtkMRMLSequenceBrowserNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSequenceBrowserNode_Type, PyvtkMRMLSequenceBrowserNode_Methods,
    "vtkMRMLSequenceBrowserNode",
 &PyvtkMRMLSequenceBrowserNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLNode");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLSequenceBrowserNode_RecordingSamplingModeType_Type);
  PyVTKEnum_Add(&PyvtkMRMLSequenceBrowserNode_RecordingSamplingModeType_Type, "vtkMRMLSequenceBrowserNode.RecordingSamplingModeType");

  o = (PyObject *)&PyvtkMRMLSequenceBrowserNode_RecordingSamplingModeType_Type;
  if (PyDict_SetItemString(d, "RecordingSamplingModeType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLSequenceBrowserNode_MissingItemModeType_Type);
  PyVTKEnum_Add(&PyvtkMRMLSequenceBrowserNode_MissingItemModeType_Type, "vtkMRMLSequenceBrowserNode.MissingItemModeType");

  o = (PyObject *)&PyvtkMRMLSequenceBrowserNode_MissingItemModeType_Type;
  if (PyDict_SetItemString(d, "MissingItemModeType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLSequenceBrowserNode_IndexDisplayModeType_Type);
  PyVTKEnum_Add(&PyvtkMRMLSequenceBrowserNode_IndexDisplayModeType_Type, "vtkMRMLSequenceBrowserNode.IndexDisplayModeType");

  o = (PyObject *)&PyvtkMRMLSequenceBrowserNode_IndexDisplayModeType_Type;
  if (PyDict_SetItemString(d, "IndexDisplayModeType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "ProxyNodeModifiedEvent", vtkMRMLSequenceBrowserNode::ProxyNodeModifiedEvent },
        { "IndexDisplayFormatModifiedEvent", vtkMRMLSequenceBrowserNode::IndexDisplayFormatModifiedEvent },
        { "SequenceNodeModifiedEvent", vtkMRMLSequenceBrowserNode::SequenceNodeModifiedEvent },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMRMLSequenceBrowserNode::RecordingSamplingModeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "SamplingAll", vtkMRMLSequenceBrowserNode::SamplingAll },
        { "SamplingLimitedToPlaybackFrameRate", vtkMRMLSequenceBrowserNode::SamplingLimitedToPlaybackFrameRate },
        { "NumberOfRecordingSamplingModes", vtkMRMLSequenceBrowserNode::NumberOfRecordingSamplingModes },
      };

    o = PyvtkMRMLSequenceBrowserNode_RecordingSamplingModeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkMRMLSequenceBrowserNode::MissingItemModeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "MissingItemInvalid", vtkMRMLSequenceBrowserNode::MissingItemInvalid },
        { "MissingItemCreateFromPrevious", vtkMRMLSequenceBrowserNode::MissingItemCreateFromPrevious },
        { "MissingItemCreateFromDefault", vtkMRMLSequenceBrowserNode::MissingItemCreateFromDefault },
        { "MissingItemSetToDefault", vtkMRMLSequenceBrowserNode::MissingItemSetToDefault },
        { "NumberOfMissingItemModes", vtkMRMLSequenceBrowserNode::NumberOfMissingItemModes },
      };

    o = PyvtkMRMLSequenceBrowserNode_MissingItemModeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMRMLSequenceBrowserNode::IndexDisplayModeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "IndexDisplayAsIndex", vtkMRMLSequenceBrowserNode::IndexDisplayAsIndex },
        { "IndexDisplayAsIndexValue", vtkMRMLSequenceBrowserNode::IndexDisplayAsIndexValue },
        { "NumberOfIndexDisplayModes", vtkMRMLSequenceBrowserNode::NumberOfIndexDisplayModes },
      };

    o = PyvtkMRMLSequenceBrowserNode_IndexDisplayModeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLSequenceBrowserNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSequenceBrowserNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSequenceBrowserNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

