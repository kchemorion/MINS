// python wrapper for vtkMRMLModelNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLModelNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLModelNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLModelNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLDisplayableNode_ClassNew
extern "C" { PyObject *PyvtkMRMLDisplayableNode_ClassNew(); }
#define DECLARED_PyvtkMRMLDisplayableNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLModelNode_MeshTypeHint_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLModelNode.MeshTypeHint", // tp_name
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
PyObject *PyvtkMRMLModelNode_MeshTypeHint_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLModelNode_MeshTypeHint_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLModelNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLModelNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLModelNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLModelNode *tempr = vtkMRMLModelNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLModelNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLModelNode::NewInstance());

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
PyvtkMRMLModelNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLModelNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLModelNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLModelNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLModelNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

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
      op->vtkMRMLModelNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLModelNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

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
      op->vtkMRMLModelNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLModelNode_GetModelDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLModelDisplayNode *tempr = (ap.IsBound() ?
      op->GetModelDisplayNode() :
      op->vtkMRMLModelNode::GetModelDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_SetAndObserveMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  vtkPointSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointSet"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveMesh(temp0);
    }
    else
    {
      op->vtkMRMLModelNode::SetAndObserveMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_SetAndObservePolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObservePolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetAndObservePolyData(temp0);
    }
    else
    {
      op->vtkMRMLModelNode::SetAndObservePolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_GetMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointSet *tempr = (ap.IsBound() ?
      op->GetMesh() :
      op->vtkMRMLModelNode::GetMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPolyData() :
      op->vtkMRMLModelNode::GetPolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_GetUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetUnstructuredGrid() :
      op->vtkMRMLModelNode::GetUnstructuredGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_SetPolyDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolyDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetPolyDataConnection(temp0);
    }
    else
    {
      op->vtkMRMLModelNode::SetPolyDataConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_SetUnstructuredGridConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnstructuredGridConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetUnstructuredGridConnection(temp0);
    }
    else
    {
      op->vtkMRMLModelNode::SetUnstructuredGridConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_GetMeshConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetMeshConnection() :
      op->vtkMRMLModelNode::GetMeshConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_GetPolyDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetPolyDataConnection() :
      op->vtkMRMLModelNode::GetPolyDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_GetUnstructuredGridConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetUnstructuredGridConnection() :
      op->vtkMRMLModelNode::GetUnstructuredGridConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_GetMeshType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkMRMLModelNode::MeshTypeHint tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetMeshType() :
      op->vtkMRMLModelNode::GetMeshType());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkMRMLModelNode_MeshTypeHint_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_AddPointScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPointScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->AddPointScalars(temp0);
    }
    else
    {
      op->vtkMRMLModelNode::AddPointScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_AddCellScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->AddCellScalars(temp0);
    }
    else
    {
      op->vtkMRMLModelNode::AddCellScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_AddScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  vtkDataArray *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddScalars(temp0, temp1);
    }
    else
    {
      op->vtkMRMLModelNode::AddScalars(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_RemoveScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveScalars(temp0);
    }
    else
    {
      op->vtkMRMLModelNode::RemoveScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_HasPointScalarName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasPointScalarName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasPointScalarName(temp0) :
      op->vtkMRMLModelNode::HasPointScalarName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_HasCellScalarName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCellScalarName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCellScalarName(temp0) :
      op->vtkMRMLModelNode::HasCellScalarName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_SetActivePointScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePointScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetActivePointScalars(temp0, temp1) :
      op->vtkMRMLModelNode::SetActivePointScalars(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_GetActivePointScalarName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePointScalarName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetActivePointScalarName(temp0) :
      op->vtkMRMLModelNode::GetActivePointScalarName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_SetActiveCellScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveCellScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveCellScalars(temp0, temp1) :
      op->vtkMRMLModelNode::SetActiveCellScalars(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_GetActiveCellScalarName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveCellScalarName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetActiveCellScalarName(temp0) :
      op->vtkMRMLModelNode::GetActiveCellScalarName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_GetAttributeTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAttributeTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLModelNode::GetAttributeTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_CompositeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompositeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  float temp2;
  float temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    int tempr = (ap.IsBound() ?
      op->CompositeScalars(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkMRMLModelNode::CompositeScalars(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_GetRASBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRASBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetRASBounds(temp0);
    }
    else
    {
      op->vtkMRMLModelNode::GetRASBounds(temp0);
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
PyvtkMRMLModelNode_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkMRMLModelNode::GetBounds(temp0);
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
PyvtkMRMLModelNode_TransformBoundsToRAS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformBoundsToRAS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TransformBoundsToRAS(temp0, temp1);
    }
    else
    {
      op->vtkMRMLModelNode::TransformBoundsToRAS(temp0, temp1);
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
PyvtkMRMLModelNode_CanApplyNonLinearTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanApplyNonLinearTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanApplyNonLinearTransforms() :
      op->vtkMRMLModelNode::CanApplyNonLinearTransforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_ApplyTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->ApplyTransform(temp0);
    }
    else
    {
      op->vtkMRMLModelNode::ApplyTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLModelNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_GetDefaultStorageNodeClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultStorageNodeClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDefaultStorageNodeClassName(temp0) :
      op->vtkMRMLModelNode::GetDefaultStorageNodeClassName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_CreateDefaultDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultDisplayNodes();
    }
    else
    {
      op->vtkMRMLModelNode::CreateDefaultDisplayNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_GetModifiedSinceRead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModifiedSinceRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetModifiedSinceRead() :
      op->vtkMRMLModelNode::GetModifiedSinceRead());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelNode_ShowDefaultScalarData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowDefaultScalarData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelNode *op = static_cast<vtkMRMLModelNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->ShowDefaultScalarData() :
      op->vtkMRMLModelNode::ShowDefaultScalarData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLModelNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLModelNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLModelNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLModelNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLModelNode\nC++: static vtkMRMLModelNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLModelNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLModelNode\nC++: vtkMRMLModelNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLModelNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLModelNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLModelNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"GetNodeTagName", PyvtkMRMLModelNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"CopyContent", PyvtkMRMLModelNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLModelNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"ProcessMRMLEvents", PyvtkMRMLModelNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"GetModelDisplayNode", PyvtkMRMLModelNode_GetModelDisplayNode, METH_VARARGS,
   "GetModelDisplayNode(self) -> vtkMRMLModelDisplayNode\nC++: vtkMRMLModelDisplayNode *GetModelDisplayNode()\n\nGet associated model display MRML node\n"},
  {"SetAndObserveMesh", PyvtkMRMLModelNode_SetAndObserveMesh, METH_VARARGS,
   "SetAndObserveMesh(self, Mesh:vtkPointSet) -> None\nC++: virtual void SetAndObserveMesh(vtkPointSet *Mesh)\n\nSet and observe mesh for this model.\n\\sa GetMesh()\n"},
  {"SetAndObservePolyData", PyvtkMRMLModelNode_SetAndObservePolyData, METH_VARARGS,
   "SetAndObservePolyData(self, polyData:vtkPolyData) -> None\nC++: virtual void SetAndObservePolyData(vtkPolyData *polyData)\n\nSet and observe mesh for this model.\\deprecated Use\nSetAndObserveMesh instead.\n"},
  {"GetMesh", PyvtkMRMLModelNode_GetMesh, METH_VARARGS,
   "GetMesh(self) -> vtkPointSet\nC++: virtual vtkPointSet *GetMesh()\n\nReturn the input mesh.\n\\sa SetAndObserveMesh(), GetPolyData(), GetUnstructuredGrid(),\n    GetMeshConnection()\n"},
  {"GetPolyData", PyvtkMRMLModelNode_GetPolyData, METH_VARARGS,
   "GetPolyData(self) -> vtkPolyData\nC++: virtual vtkPolyData *GetPolyData()\n\nReturn the input mesh if it is a polydata.\n\\sa GetMesh(), SetAndObserveMesh()\n"},
  {"GetUnstructuredGrid", PyvtkMRMLModelNode_GetUnstructuredGrid, METH_VARARGS,
   "GetUnstructuredGrid(self) -> vtkUnstructuredGrid\nC++: virtual vtkUnstructuredGrid *GetUnstructuredGrid()\n\nReturn the input mesh if it is an unstructured grid.\n\\sa GetMesh(), SetAndObserveMesh()\n"},
  {"SetPolyDataConnection", PyvtkMRMLModelNode_SetPolyDataConnection, METH_VARARGS,
   "SetPolyDataConnection(self, inputPort:vtkAlgorithmOutput) -> None\nC++: virtual void SetPolyDataConnection(\n    vtkAlgorithmOutput *inputPort)\n\nSet and observe polydata pipeline. It is propagated to the\ndisplay nodes.\n\\sa GetMeshConnection(), SetUnstructuredGridConnection()\n"},
  {"SetUnstructuredGridConnection", PyvtkMRMLModelNode_SetUnstructuredGridConnection, METH_VARARGS,
   "SetUnstructuredGridConnection(self, inputPort:vtkAlgorithmOutput)\n    -> None\nC++: virtual void SetUnstructuredGridConnection(\n    vtkAlgorithmOutput *inputPort)\n\nSet and observe unstructured grid pipeline. It is propagated to\nthe display nodes.\n\\sa GetMeshConnection(), SetPolyDataConnection()\n"},
  {"GetMeshConnection", PyvtkMRMLModelNode_GetMeshConnection, METH_VARARGS,
   "GetMeshConnection(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetMeshConnection()\n\nReturn the input mesh pipeline.\n\\sa GetPolyDataConnection(), GetUnstructuredGridConnection()\n"},
  {"GetPolyDataConnection", PyvtkMRMLModelNode_GetPolyDataConnection, METH_VARARGS,
   "GetPolyDataConnection(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetPolyDataConnection()\n\nReturn the input mesh pipeline if the mesh is a polydata.\n\\sa GetMeshConnection(), SetPolyDataConnection()\n"},
  {"GetUnstructuredGridConnection", PyvtkMRMLModelNode_GetUnstructuredGridConnection, METH_VARARGS,
   "GetUnstructuredGridConnection(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetUnstructuredGridConnection()\n\nReturn the input mesh pipeline if the mesh is an unstructured\ngrid.\n\\sa GetMeshConnection(), SetUnstructuredGridConnection()\n"},
  {"GetMeshType", PyvtkMRMLModelNode_GetMeshType, METH_VARARGS,
   "GetMeshType(self) -> MeshTypeHint\nC++: virtual MeshTypeHint GetMeshType()\n\nGet the mesh type of that model. The safest way to know if the\nmesh is unstructuredGrid is to check if GetUnstructuredGrid() is\nnot nullptr, but it requires to update the pipeline.\n\\sa MeshType, GetUnstructuredGrid()\n"},
  {"AddPointScalars", PyvtkMRMLModelNode_AddPointScalars, METH_VARARGS,
   "AddPointScalars(self, array:vtkDataArray) -> None\nC++: void AddPointScalars(vtkDataArray *array)\n\nUtility function that adds an array to the mesh's point data.\n\\sa AddCellScalars, AddScalars\n"},
  {"AddCellScalars", PyvtkMRMLModelNode_AddCellScalars, METH_VARARGS,
   "AddCellScalars(self, array:vtkDataArray) -> None\nC++: void AddCellScalars(vtkDataArray *array)\n\nAdd an array to the mesh's cell data.\n\\sa AddPointScalars, AddScalars\n"},
  {"AddScalars", PyvtkMRMLModelNode_AddScalars, METH_VARARGS,
   "AddScalars(self, array:vtkDataArray, location:int) -> None\nC++: void AddScalars(vtkDataArray *array, int location)\n\nAdd an array to the mesh's point or cell data location is either\nvtkAssignAttribute::POINT_DATA or vtkAssignAttribute::CELL_DATA\n"},
  {"RemoveScalars", PyvtkMRMLModelNode_RemoveScalars, METH_VARARGS,
   "RemoveScalars(self, scalarName:str) -> None\nC++: void RemoveScalars(const char *scalarName)\n\nRemove an array from the mesh's point/cell data.\n"},
  {"HasPointScalarName", PyvtkMRMLModelNode_HasPointScalarName, METH_VARARGS,
   "HasPointScalarName(self, scalarName:str) -> bool\nC++: bool HasPointScalarName(const char *scalarName)\n\nReturn true if the mesh point data has an array with ascalarName\nname.\n\\sa HasPointScalarName\n"},
  {"HasCellScalarName", PyvtkMRMLModelNode_HasCellScalarName, METH_VARARGS,
   "HasCellScalarName(self, scalarName:str) -> bool\nC++: bool HasCellScalarName(const char *scalarName)\n\nReturn true if the mesh cell data has an array with ascalarName\nname.\n\\sa HasCellScalarName\n"},
  {"SetActivePointScalars", PyvtkMRMLModelNode_SetActivePointScalars, METH_VARARGS,
   "SetActivePointScalars(self, scalarName:str, attributeType:int)\n    -> int\nC++: int SetActivePointScalars(const char *scalarName,\n    int attributeType)\n\nSet the active poly data point scalar array, checks for the\nscalarName as being a valid point array, and then will set it to\nbe the active attribute type as designated by typeName (scalars\nif null or empty). typeName is one of the valid strings as\nreturned from vtkDataSetAttributes::GetAttributeTypeAsString,\nSetActiveScalars converts it to an integer type to pass onto the\nPoint/Cell methods Also updates the display node's active scalars\n"},
  {"GetActivePointScalarName", PyvtkMRMLModelNode_GetActivePointScalarName, METH_VARARGS,
   "GetActivePointScalarName(self, type:int) -> str\nC++: const char *GetActivePointScalarName(int type)\n\nGet the currently active point array name, type =\nvtkDataSetAttributes::AttributeTypes for an active array. Returns\nan empty string if it can't find one or if no input mesh is set.\n\\sa GetActiveCellScalarName\n"},
  {"SetActiveCellScalars", PyvtkMRMLModelNode_SetActiveCellScalars, METH_VARARGS,
   "SetActiveCellScalars(self, scalarName:str, attributeType:int)\n    -> int\nC++: int SetActiveCellScalars(const char *scalarName,\n    int attributeType)\n\nSet the active poly data point scalar array, checks for the\nscalarName as being a valid point array, and then will set it to\nbe the active attribute type as designated by typeName (scalars\nif null or empty). typeName is one of the valid strings as\nreturned from vtkDataSetAttributes::GetAttributeTypeAsString,\nSetActiveScalars converts it to an integer type to pass onto the\nPoint/Cell methods Also updates the display node's active scalars\n"},
  {"GetActiveCellScalarName", PyvtkMRMLModelNode_GetActiveCellScalarName, METH_VARARGS,
   "GetActiveCellScalarName(self, type:int) -> str\nC++: const char *GetActiveCellScalarName(int type)\n\nGet the currently active Point/Cell array name, type =\nvtkDataSetAttributes::AttributeTypes for an active array. Returns\nan empty string if it can't find one or if no input mesh is set.\n"},
  {"GetAttributeTypeFromString", PyvtkMRMLModelNode_GetAttributeTypeFromString, METH_VARARGS,
   "GetAttributeTypeFromString(typeName:str) -> int\nC++: static int GetAttributeTypeFromString(const char *typeName)\n\nUtility function that returns the attribute type from its name.\nIt is the opposite of\nvtkDataSetAttributes::GetAttributeTypeAsString(int)\n\\sa vtkDataSetAttributes::GetAttributeTypeAsString()\n"},
  {"CompositeScalars", PyvtkMRMLModelNode_CompositeScalars, METH_VARARGS,
   "CompositeScalars(self, backgroundName:str, overlayName:str,\n    overlayMin:float, overlayMax:float, showOverlayPositive:int,\n    showOverlayNegative:int, reverseOverlay:int) -> int\nC++: int CompositeScalars(const char *backgroundName,\n    const char *overlayName, float overlayMin, float overlayMax,\n    int showOverlayPositive, int showOverlayNegative,\n    int reverseOverlay)\n\nTake scalar fields and composite them into a new one. New array\nwill have values from the background array where the overlay is\n+/- if showOverlayPositive/Negative are 0. overlayMin and Max are\nused to adjust the color transfer function points, both should be\npositive, as they are mirrored around 0. -Min to Min gives the\ngap where the curvature will show through. New array name is\nbackgroundName+overlayName Returns 1 on success, 0 on failure.\nBased on code from K. Teich, MGH Warning: Not demand driven\npipeline compliant\n"},
  {"GetRASBounds", PyvtkMRMLModelNode_GetRASBounds, METH_VARARGS,
   "GetRASBounds(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void GetRASBounds(double bounds[6]) override;\n\nGet bounding box in global RAS form (xmin,xmax, ymin,ymax,\nzmin,zmax). This method returns the bounds of the object with any\ntransforms that may be applied to it.\n\\sa GetBounds()\n"},
  {"GetBounds", PyvtkMRMLModelNode_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nGet bounding box in global RAS form (xmin,xmax, ymin,ymax,\nzmin,zmax). This method always returns the bounds of the\nuntransformed object.\n\\sa GetRASBounds()\n"},
  {"TransformBoundsToRAS", PyvtkMRMLModelNode_TransformBoundsToRAS, METH_VARARGS,
   "TransformBoundsToRAS(self, inputBounds_Local:[float, float, float,\n     float, float, float], outputBounds_RAS:[float, float, float,\n    float, float, float]) -> None\nC++: virtual void TransformBoundsToRAS(\n    double inputBounds_Local[6], double outputBounds_RAS[6])\n\nTransforms bounds from the local coordinate system to the RAS\n(world) coordinate system. Only the corner points are used for\ndetermining the new bounds, therefore in case of non-linear\ntransforms the transformed bounds may not fully contain the\ntransformed model points.\n"},
  {"CanApplyNonLinearTransforms", PyvtkMRMLModelNode_CanApplyNonLinearTransforms, METH_VARARGS,
   "CanApplyNonLinearTransforms(self) -> bool\nC++: bool CanApplyNonLinearTransforms() override;\n\nReturns true if the transformable node can apply non-linear\ntransforms. A transformable node is always expected to apply\nlinear transforms.\n\\sa ApplyTransformMatrix, ApplyTransform\n"},
  {"ApplyTransform", PyvtkMRMLModelNode_ApplyTransform, METH_VARARGS,
   "ApplyTransform(self, transform:vtkAbstractTransform) -> None\nC++: void ApplyTransform(vtkAbstractTransform *transform)\n    override;\n\nTransforms the node with the provided non-linear transform.\n\\sa SetAndObserveTransformNodeID, ApplyTransformMatrix,\n    CanApplyNonLinearTransforms\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLModelNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate a storage node for this node type. If it returns nullptr\nthen it means the node can be stored in the scene (in XML),\nwithout using a storage node. Null by default. This must be\noverwritten by subclasses that use storage nodes.\n"},
  {"GetDefaultStorageNodeClassName", PyvtkMRMLModelNode_GetDefaultStorageNodeClassName, METH_VARARGS,
   "GetDefaultStorageNodeClassName(self, filename:str) -> str\nC++: std::string GetDefaultStorageNodeClassName(\n    const char *filename) override;\n\nDetermines the most appropriate storage node class for the\nprovided file name and node content. If the method is not\noverwritten by subclass then it uses CreateDefaultStorageNode to\ndetermine storage node class name.\n"},
  {"CreateDefaultDisplayNodes", PyvtkMRMLModelNode_CreateDefaultDisplayNodes, METH_VARARGS,
   "CreateDefaultDisplayNodes(self) -> None\nC++: void CreateDefaultDisplayNodes() override;\n\nCreate and observe default display node\n"},
  {"GetModifiedSinceRead", PyvtkMRMLModelNode_GetModifiedSinceRead, METH_VARARGS,
   "GetModifiedSinceRead(self) -> bool\nC++: bool GetModifiedSinceRead() override;\n\nReimplemented to take into account the modified time of the mesh.\nReturns true if the node (default behavior) or the mesh are\nmodified since read/written. Note: The MTime of the mesh is used\nto know if it has been modified. So if you invoke\nMeshModifiedEvent without calling Modified() on the mesh,\nGetModifiedSinceRead() won't return true.\n\\sa vtkMRMLStorableNode::GetModifiedSinceRead()\n"},
  {"ShowDefaultScalarData", PyvtkMRMLModelNode_ShowDefaultScalarData, METH_VARARGS,
   "ShowDefaultScalarData(self) -> bool\nC++: bool ShowDefaultScalarData()\n\nDetermine if the mesh stores scalar data data that the user may\nwant to see and if such data is found then display it. Currently,\nit displays single-component scalar array (with a colormap), and\n3 or 4 component unsigned char array as RGB or RGBA value (with\ndirect mapping). Return true if suitable scalar data was found\nand set to be displayed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLModelNode_Doc =
  "vtkMRMLModelNode - MRML node to represent a 3D surface model.\n\n"
  "Superclass: vtkMRMLDisplayableNode\n\n"
  "Model nodes describe polygonal data. When a model display node\n"
  "(vtkMRMLModelDisplayNode) is observed by the model, the output mesh\n"
  "is automatically set to the input of the model display node: You\n"
  "don't have to manually set the mesh yourself. Models are assumed to\n"
  "have been constructed with the orientation and voxel dimensions of\n"
  "the original segmented volume.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLModelNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLModelNode", // tp_name
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
  PyvtkMRMLModelNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLModelNode_StaticNew()
{
  return vtkMRMLModelNode::New();
}

PyObject *PyvtkMRMLModelNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLModelNode_Type, PyvtkMRMLModelNode_Methods,
    "vtkMRMLModelNode",
 &PyvtkMRMLModelNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLDisplayableNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLModelNode_MeshTypeHint_Type);
  PyVTKEnum_Add(&PyvtkMRMLModelNode_MeshTypeHint_Type, "vtkMRMLModelNode.MeshTypeHint");

  o = (PyObject *)&PyvtkMRMLModelNode_MeshTypeHint_Type;
  if (PyDict_SetItemString(d, "MeshTypeHint", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkMRMLModelNode::MeshTypeHint cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "PolyDataMeshType", vtkMRMLModelNode::PolyDataMeshType },
        { "UnstructuredGridMeshType", vtkMRMLModelNode::UnstructuredGridMeshType },
      };

    o = PyvtkMRMLModelNode_MeshTypeHint_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "MeshModifiedEvent", vtkMRMLModelNode::MeshModifiedEvent },
        { "PolyDataModifiedEvent", vtkMRMLModelNode::PolyDataModifiedEvent },
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

void PyVTKAddFile_vtkMRMLModelNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLModelNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLModelNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

