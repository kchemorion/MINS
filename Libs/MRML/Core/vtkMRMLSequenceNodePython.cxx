// python wrapper for vtkMRMLSequenceNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSequenceNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSequenceNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSequenceNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLStorableNode_ClassNew
extern "C" { PyObject *PyvtkMRMLStorableNode_ClassNew(); }
#define DECLARED_PyvtkMRMLStorableNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSequenceNode_IndexTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSequenceNode.IndexTypes", // tp_name
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
PyObject *PyvtkMRMLSequenceNode_IndexTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLSequenceNode_IndexTypes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLSequenceNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSequenceNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSequenceNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSequenceNode *tempr = vtkMRMLSequenceNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSequenceNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSequenceNode::NewInstance());

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
PyvtkMRMLSequenceNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSequenceNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSequenceNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLSequenceNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

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
      op->vtkMRMLSequenceNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_CopySequenceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopySequenceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->CopySequenceIndex(temp0);
    }
    else
    {
      op->vtkMRMLSequenceNode::CopySequenceIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_UpdateSequenceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSequenceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateSequenceIndex();
    }
    else
    {
      op->vtkMRMLSequenceNode::UpdateSequenceIndex();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLSequenceNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_SetIndexName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIndexName(temp0);
    }
    else
    {
      op->vtkMRMLSequenceNode::SetIndexName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_GetIndexName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetIndexName() :
      op->vtkMRMLSequenceNode::GetIndexName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_SetIndexUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIndexUnit(temp0);
    }
    else
    {
      op->vtkMRMLSequenceNode::SetIndexUnit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_GetIndexUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetIndexUnit() :
      op->vtkMRMLSequenceNode::GetIndexUnit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_SetIndexType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIndexType(temp0);
    }
    else
    {
      op->vtkMRMLSequenceNode::SetIndexType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_SetIndexTypeFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexTypeFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIndexTypeFromString(temp0);
    }
    else
    {
      op->vtkMRMLSequenceNode::SetIndexTypeFromString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_GetIndexType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndexType() :
      op->vtkMRMLSequenceNode::GetIndexType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_GetIndexTypeAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetIndexTypeAsString() :
      op->vtkMRMLSequenceNode::GetIndexTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSequenceNode_GetIndexTypeAsString_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetIndexTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkMRMLSequenceNode::GetIndexTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSequenceNode_GetIndexTypeAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLSequenceNode_GetIndexTypeAsString_s1(self, args);
    case 1:
      return PyvtkMRMLSequenceNode_GetIndexTypeAsString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetIndexTypeAsString");
  return nullptr;
}


static PyObject *
PyvtkMRMLSequenceNode_GetNumericIndexValueTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumericIndexValueTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNumericIndexValueTolerance() :
      op->vtkMRMLSequenceNode::GetNumericIndexValueTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_SetNumericIndexValueTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumericIndexValueTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumericIndexValueTolerance(temp0);
    }
    else
    {
      op->vtkMRMLSequenceNode::SetNumericIndexValueTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_GetIndexTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetIndexTypeFromString");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSequenceNode::GetIndexTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_SetDataNodeAtValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataNodeAtValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      ap.GetValue(temp1))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->SetDataNodeAtValue(temp0, temp1) :
      op->vtkMRMLSequenceNode::SetDataNodeAtValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_UpdateDataNodeAtValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateDataNodeAtValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  std::string temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateDataNodeAtValue(temp0, temp1, temp2) :
      op->vtkMRMLSequenceNode::UpdateDataNodeAtValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_RemoveDataNodeAtValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataNodeAtValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveDataNodeAtValue(temp0);
    }
    else
    {
      op->vtkMRMLSequenceNode::RemoveDataNodeAtValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_RemoveAllDataNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllDataNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllDataNodes();
    }
    else
    {
      op->vtkMRMLSequenceNode::RemoveAllDataNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_GetDataNodeAtValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataNodeAtValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  std::string temp0;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetDataNodeAtValue(temp0, temp1) :
      op->vtkMRMLSequenceNode::GetDataNodeAtValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_GetNthDataNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthDataNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetNthDataNode(temp0) :
      op->vtkMRMLSequenceNode::GetNthDataNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_GetNthIndexValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthIndexValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNthIndexValue(temp0) :
      op->vtkMRMLSequenceNode::GetNthIndexValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_GetItemNumberFromIndexValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemNumberFromIndexValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  std::string temp0;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->GetItemNumberFromIndexValue(temp0, temp1) :
      op->vtkMRMLSequenceNode::GetItemNumberFromIndexValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_UpdateIndexValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateIndexValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateIndexValue(temp0, temp1) :
      op->vtkMRMLSequenceNode::UpdateIndexValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_GetNumberOfDataNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDataNodes() :
      op->vtkMRMLSequenceNode::GetNumberOfDataNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_GetDataNodeClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataNodeClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDataNodeClassName() :
      op->vtkMRMLSequenceNode::GetDataNodeClassName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_GetDataNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDataNodeTagName() :
      op->vtkMRMLSequenceNode::GetDataNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_GetSequenceScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSequenceScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  bool temp0 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkMRMLScene *tempr = (ap.IsBound() ?
      op->GetSequenceScene(temp0) :
      op->vtkMRMLSequenceNode::GetSequenceScene(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLSequenceNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_GetDefaultStorageNodeClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultStorageNodeClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDefaultStorageNodeClassName(temp0) :
      op->vtkMRMLSequenceNode::GetDefaultStorageNodeClassName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSequenceNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSequenceNode *op = static_cast<vtkMRMLSequenceNode *>(vp);

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
      op->vtkMRMLSequenceNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSequenceNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSequenceNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSequenceNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSequenceNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLSequenceNode\nC++: static vtkMRMLSequenceNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSequenceNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSequenceNode\nC++: vtkMRMLSequenceNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSequenceNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSequenceNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLSequenceNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of a sequence node\n"},
  {"Copy", PyvtkMRMLSequenceNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"CopySequenceIndex", PyvtkMRMLSequenceNode_CopySequenceIndex, METH_VARARGS,
   "CopySequenceIndex(self, node:vtkMRMLNode) -> None\nC++: virtual void CopySequenceIndex(vtkMRMLNode *node)\n\nCopy sequence index information (index name, unit, type, values,\netc) Does not copy data nodes.\n"},
  {"UpdateSequenceIndex", PyvtkMRMLSequenceNode_UpdateSequenceIndex, METH_VARARGS,
   "UpdateSequenceIndex(self) -> None\nC++: void UpdateSequenceIndex()\n\nUpdate sequence index to point to nodes\n"},
  {"GetNodeTagName", PyvtkMRMLSequenceNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet unique node XML tag name (like Volume, Model)\n"},
  {"SetIndexName", PyvtkMRMLSequenceNode_SetIndexName, METH_VARARGS,
   "SetIndexName(self, str:str) -> None\nC++: void SetIndexName(const std::string &str)\n\nSet index name (example: time)\n"},
  {"GetIndexName", PyvtkMRMLSequenceNode_GetIndexName, METH_VARARGS,
   "GetIndexName(self) -> str\nC++: virtual std::string GetIndexName()\n\nGet index name (example: time)\n"},
  {"SetIndexUnit", PyvtkMRMLSequenceNode_SetIndexUnit, METH_VARARGS,
   "SetIndexUnit(self, str:str) -> None\nC++: void SetIndexUnit(const std::string &str)\n\nSet unit for the index (example: s)\n"},
  {"GetIndexUnit", PyvtkMRMLSequenceNode_GetIndexUnit, METH_VARARGS,
   "GetIndexUnit(self) -> str\nC++: virtual std::string GetIndexUnit()\n\nGet unit for the index (example: s)\n"},
  {"SetIndexType", PyvtkMRMLSequenceNode_SetIndexType, METH_VARARGS,
   "SetIndexType(self, indexType:int) -> None\nC++: void SetIndexType(int indexType)\n\nSet the type of the index (numeric, text, ...)\n"},
  {"SetIndexTypeFromString", PyvtkMRMLSequenceNode_SetIndexTypeFromString, METH_VARARGS,
   "SetIndexTypeFromString(self, indexTypeString:str) -> None\nC++: void SetIndexTypeFromString(const char *indexTypeString)\n\n"},
  {"GetIndexType", PyvtkMRMLSequenceNode_GetIndexType, METH_VARARGS,
   "GetIndexType(self) -> int\nC++: virtual int GetIndexType()\n\nGet the type of the index (numeric, text, ...)\n"},
  {"GetIndexTypeAsString", PyvtkMRMLSequenceNode_GetIndexTypeAsString, METH_VARARGS,
   "GetIndexTypeAsString(self) -> str\nC++: virtual std::string GetIndexTypeAsString()\nGetIndexTypeAsString(indexType:int) -> str\nC++: static std::string GetIndexTypeAsString(int indexType)\n\n"},
  {"GetNumericIndexValueTolerance", PyvtkMRMLSequenceNode_GetNumericIndexValueTolerance, METH_VARARGS,
   "GetNumericIndexValueTolerance(self) -> float\nC++: virtual double GetNumericIndexValueTolerance()\n\nGet tolerance value for comparing numeric index values. If index\nvalues differ by less than the tolerance then the index values\nconsidered to be equal.\n"},
  {"SetNumericIndexValueTolerance", PyvtkMRMLSequenceNode_SetNumericIndexValueTolerance, METH_VARARGS,
   "SetNumericIndexValueTolerance(self, tolerance:float) -> None\nC++: void SetNumericIndexValueTolerance(double tolerance)\n\nSet tolerance value for comparing numeric index values.\n"},
  {"GetIndexTypeFromString", PyvtkMRMLSequenceNode_GetIndexTypeFromString, METH_VARARGS,
   "GetIndexTypeFromString(indexTypeString:str) -> int\nC++: static int GetIndexTypeFromString(\n    const std::string &indexTypeString)\n\n"},
  {"SetDataNodeAtValue", PyvtkMRMLSequenceNode_SetDataNodeAtValue, METH_VARARGS,
   "SetDataNodeAtValue(self, node:vtkMRMLNode, indexValue:str)\n    -> vtkMRMLNode\nC++: vtkMRMLNode *SetDataNodeAtValue(vtkMRMLNode *node,\n    const std::string &indexValue)\n\nAdd a copy of the provided node to this sequence as a data node.\nIf a sequence item is not found by that index, a new item is\nadded. Always performs deep-copy. Returns the data node copy that\nhas just been created.\n"},
  {"UpdateDataNodeAtValue", PyvtkMRMLSequenceNode_UpdateDataNodeAtValue, METH_VARARGS,
   "UpdateDataNodeAtValue(self, node:vtkMRMLNode, indexValue:str,\n    shallowCopy:bool=False) -> bool\nC++: bool UpdateDataNodeAtValue(vtkMRMLNode *node,\n    const std::string &indexValue, bool shallowCopy=false)\n\nUpdate an existing data node. Return true if a data node was\nfound by that index.\n"},
  {"RemoveDataNodeAtValue", PyvtkMRMLSequenceNode_RemoveDataNodeAtValue, METH_VARARGS,
   "RemoveDataNodeAtValue(self, indexValue:str) -> None\nC++: void RemoveDataNodeAtValue(const std::string &indexValue)\n\nRemove data node corresponding to the specified index\n"},
  {"RemoveAllDataNodes", PyvtkMRMLSequenceNode_RemoveAllDataNodes, METH_VARARGS,
   "RemoveAllDataNodes(self) -> None\nC++: void RemoveAllDataNodes()\n\nRemove all data nodes from the sequence\n"},
  {"GetDataNodeAtValue", PyvtkMRMLSequenceNode_GetDataNodeAtValue, METH_VARARGS,
   "GetDataNodeAtValue(self, indexValue:str,\n    exactMatchRequired:bool=True) -> vtkMRMLNode\nC++: vtkMRMLNode *GetDataNodeAtValue(\n    const std::string &indexValue, bool exactMatchRequired=true)\n\nGet the node corresponding to the specified index value If exact\nmatch is not required and index is numeric then the best matching\ndata node is returned.\n"},
  {"GetNthDataNode", PyvtkMRMLSequenceNode_GetNthDataNode, METH_VARARGS,
   "GetNthDataNode(self, itemNumber:int) -> vtkMRMLNode\nC++: vtkMRMLNode *GetNthDataNode(int itemNumber)\n\nGet the data node corresponding to the n-th index value\n"},
  {"GetNthIndexValue", PyvtkMRMLSequenceNode_GetNthIndexValue, METH_VARARGS,
   "GetNthIndexValue(self, itemNumber:int) -> str\nC++: std::string GetNthIndexValue(int itemNumber)\n\nIndex value of n-th data node.\n"},
  {"GetItemNumberFromIndexValue", PyvtkMRMLSequenceNode_GetItemNumberFromIndexValue, METH_VARARGS,
   "GetItemNumberFromIndexValue(self, indexValue:str,\n    exactMatchRequired:bool=True) -> int\nC++: int GetItemNumberFromIndexValue(\n    const std::string &indexValue, bool exactMatchRequired=true)\n\nIf exact match is not required and index is numeric then the best\nmatching data node is returned. If the sequences has numeric\nindex, uses data node just before the index value in the case of\nnon-exact match\n"},
  {"UpdateIndexValue", PyvtkMRMLSequenceNode_UpdateIndexValue, METH_VARARGS,
   "UpdateIndexValue(self, oldIndexValue:str, newIndexValue:str)\n    -> bool\nC++: bool UpdateIndexValue(const std::string &oldIndexValue,\n    const std::string &newIndexValue)\n\nChange index value of an existing data node.\n"},
  {"GetNumberOfDataNodes", PyvtkMRMLSequenceNode_GetNumberOfDataNodes, METH_VARARGS,
   "GetNumberOfDataNodes(self) -> int\nC++: int GetNumberOfDataNodes()\n\nReturn the number of nodes stored in this sequence.\n"},
  {"GetDataNodeClassName", PyvtkMRMLSequenceNode_GetDataNodeClassName, METH_VARARGS,
   "GetDataNodeClassName(self) -> str\nC++: std::string GetDataNodeClassName()\n\nReturn the class name of the data nodes (e.g.,\nvtkMRMLTransformNode). If there are no data nodes yet then it\nreturns empty string.\n"},
  {"GetDataNodeTagName", PyvtkMRMLSequenceNode_GetDataNodeTagName, METH_VARARGS,
   "GetDataNodeTagName(self) -> str\nC++: std::string GetDataNodeTagName()\n\nReturn the human-readable type name of the data nodes (e.g.,\nTransformNode). If there are no data nodes yet then it returns\nthe string \"undefined\".\n"},
  {"GetSequenceScene", PyvtkMRMLSequenceNode_GetSequenceScene, METH_VARARGS,
   "GetSequenceScene(self, autoCreate:bool=True) -> vtkMRMLScene\nC++: vtkMRMLScene *GetSequenceScene(bool autoCreate=true)\n\nReturn the internal scene that stores all the data nodes. If\nautoCreate is enabled then the sequence scene is created (if it\nhas not been created already).\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLSequenceNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node. Uses vtkMRMLSequenceStorageNode\nunless the data node requests a more specific storage node class.\n"},
  {"GetDefaultStorageNodeClassName", PyvtkMRMLSequenceNode_GetDefaultStorageNodeClassName, METH_VARARGS,
   "GetDefaultStorageNodeClassName(self, filename:str=...) -> str\nC++: std::string GetDefaultStorageNodeClassName(\n    const char *filename=nullptr) override;\n\nReturns the most specific storage node possible (such as\nvtkMRMLVolumeSequenceStorageNode if sequence contains volumes\nwith the same type and geometry, or\nvtkMRMLLinearTransformSequenceStorageNode if sequence contains a\nlist of linear transforms) and generic vtkMRMLSequenceStorageNode\notherwise.\n"},
  {"UpdateScene", PyvtkMRMLSequenceNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nUpdate node IDs in case of node ID conflicts on scene import\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSequenceNode_Doc =
  "vtkMRMLSequenceNode - MRML node for representing a sequence of MRML\nnodes\n\n"
  "Superclass: vtkMRMLStorableNode\n\n"
  "This node contains a sequence of nodes (data nodes).\n\n"
  "The data nodes can be referred to by an index, for example:\n"
  "IndexName: time IndexUnit: s IndexNumeric: YES IndexValue: 3.4567\n\n"
  "If an index is numeric then it is sorted differently and equality\n"
  "determined using a numerical tolerance instead of exact string\n"
  "matching.\n\n"
  "Class name of data nodes stored in the sequence is set into the\n"
  "`DataNodeClassName` node attribute, which may be used for\n"
  "attribute-based filters (for example, to show only certain type of\n"
  "sequence node in a node selector).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSequenceNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSequenceNode", // tp_name
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
  PyvtkMRMLSequenceNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSequenceNode_StaticNew()
{
  return vtkMRMLSequenceNode::New();
}

PyObject *PyvtkMRMLSequenceNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSequenceNode_Type, PyvtkMRMLSequenceNode_Methods,
    "vtkMRMLSequenceNode",
 &PyvtkMRMLSequenceNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLStorableNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLSequenceNode_IndexTypes_Type);
  PyVTKEnum_Add(&PyvtkMRMLSequenceNode_IndexTypes_Type, "vtkMRMLSequenceNode.IndexTypes");

  o = (PyObject *)&PyvtkMRMLSequenceNode_IndexTypes_Type;
  if (PyDict_SetItemString(d, "IndexTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMRMLSequenceNode::IndexTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "NumericIndex", vtkMRMLSequenceNode::NumericIndex },
        { "TextIndex", vtkMRMLSequenceNode::TextIndex },
        { "NumberOfIndexTypes", vtkMRMLSequenceNode::NumberOfIndexTypes },
      };

    o = PyvtkMRMLSequenceNode_IndexTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLSequenceNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSequenceNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSequenceNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

