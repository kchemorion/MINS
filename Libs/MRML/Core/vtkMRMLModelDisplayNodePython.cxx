// python wrapper for vtkMRMLModelDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLModelDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLModelDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLModelDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLDisplayNode_ClassNew
extern "C" { PyObject *PyvtkMRMLDisplayNode_ClassNew(); }
#define DECLARED_PyvtkMRMLDisplayNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLModelDisplayNode_SliceDisplayModeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLModelDisplayNode.SliceDisplayModeType", // tp_name
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
PyObject *PyvtkMRMLModelDisplayNode_SliceDisplayModeType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLModelDisplayNode_SliceDisplayModeType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLModelDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLModelDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLModelDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLModelDisplayNode *tempr = vtkMRMLModelDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLModelDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLModelDisplayNode::NewInstance());

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
PyvtkMRMLModelDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLModelDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLModelDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

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
      op->vtkMRMLModelDisplayNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLModelDisplayNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLModelDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLModelDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_SetInputMeshConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputMeshConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputMeshConnection(temp0);
    }
    else
    {
      op->vtkMRMLModelDisplayNode::SetInputMeshConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_SetInputPolyDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputPolyDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputPolyDataConnection(temp0);
    }
    else
    {
      op->vtkMRMLModelDisplayNode::SetInputPolyDataConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetInputMeshConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputMeshConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInputMeshConnection() :
      op->vtkMRMLModelDisplayNode::GetInputMeshConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetInputPolyDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputPolyDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInputPolyDataConnection() :
      op->vtkMRMLModelDisplayNode::GetInputPolyDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetInputMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointSet *tempr = (ap.IsBound() ?
      op->GetInputMesh() :
      op->vtkMRMLModelDisplayNode::GetInputMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetInputPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInputPolyData() :
      op->vtkMRMLModelDisplayNode::GetInputPolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetInputUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetInputUnstructuredGrid() :
      op->vtkMRMLModelDisplayNode::GetInputUnstructuredGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetOutputMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointSet *tempr = (ap.IsBound() ?
      op->GetOutputMesh() :
      op->vtkMRMLModelDisplayNode::GetOutputMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetOutputPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetOutputPolyData() :
      op->vtkMRMLModelDisplayNode::GetOutputPolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetOutputUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetOutputUnstructuredGrid() :
      op->vtkMRMLModelDisplayNode::GetOutputUnstructuredGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetOutputMeshConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputMeshConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetOutputMeshConnection() :
      op->vtkMRMLModelDisplayNode::GetOutputMeshConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetOutputPolyDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPolyDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetOutputPolyDataConnection() :
      op->vtkMRMLModelDisplayNode::GetOutputPolyDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_SetActiveScalarName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveScalarName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

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
      op->vtkMRMLModelDisplayNode::SetActiveScalarName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_SetActiveAttributeLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveAttributeLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

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
      op->vtkMRMLModelDisplayNode::SetActiveAttributeLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_SetThresholdEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThresholdEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThresholdEnabled(temp0);
    }
    else
    {
      op->vtkMRMLModelDisplayNode::SetThresholdEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_ThresholdEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThresholdEnabledOn();
    }
    else
    {
      op->vtkMRMLModelDisplayNode::ThresholdEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_ThresholdEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThresholdEnabledOff();
    }
    else
    {
      op->vtkMRMLModelDisplayNode::ThresholdEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetThresholdEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetThresholdEnabled() :
      op->vtkMRMLModelDisplayNode::GetThresholdEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_SetThresholdRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThresholdRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetThresholdRange(temp0, temp1);
    }
    else
    {
      op->vtkMRMLModelDisplayNode::SetThresholdRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLModelDisplayNode_SetThresholdRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThresholdRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetThresholdRange(temp0);
    }
    else
    {
      op->vtkMRMLModelDisplayNode::SetThresholdRange(temp0);
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
PyvtkMRMLModelDisplayNode_SetThresholdRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLModelDisplayNode_SetThresholdRange_s1(self, args);
    case 1:
      return PyvtkMRMLModelDisplayNode_SetThresholdRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetThresholdRange");
  return nullptr;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetThresholdRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetThresholdRange(temp0);
    }
    else
    {
      op->vtkMRMLModelDisplayNode::GetThresholdRange(temp0);
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
PyvtkMRMLModelDisplayNode_GetThresholdRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetThresholdRange() :
      op->vtkMRMLModelDisplayNode::GetThresholdRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLModelDisplayNode_GetThresholdRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLModelDisplayNode_GetThresholdRange_s1(self, args);
    case 0:
      return PyvtkMRMLModelDisplayNode_GetThresholdRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetThresholdRange");
  return nullptr;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetThresholdMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThresholdMin() :
      op->vtkMRMLModelDisplayNode::GetThresholdMin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetThresholdMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThresholdMax() :
      op->vtkMRMLModelDisplayNode::GetThresholdMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetSliceDisplayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceDisplayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceDisplayMode() :
      op->vtkMRMLModelDisplayNode::GetSliceDisplayMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_SetSliceDisplayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceDisplayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceDisplayMode(temp0);
    }
    else
    {
      op->vtkMRMLModelDisplayNode::SetSliceDisplayMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_SetSliceDisplayModeToIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceDisplayModeToIntersection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceDisplayModeToIntersection();
    }
    else
    {
      op->vtkMRMLModelDisplayNode::SetSliceDisplayModeToIntersection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_SetSliceDisplayModeToProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceDisplayModeToProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceDisplayModeToProjection();
    }
    else
    {
      op->vtkMRMLModelDisplayNode::SetSliceDisplayModeToProjection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_SetSliceDisplayModeToDistanceEncodedProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceDisplayModeToDistanceEncodedProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceDisplayModeToDistanceEncodedProjection();
    }
    else
    {
      op->vtkMRMLModelDisplayNode::SetSliceDisplayModeToDistanceEncodedProjection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetSliceDisplayModeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSliceDisplayModeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLModelDisplayNode::GetSliceDisplayModeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetSliceDisplayModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSliceDisplayModeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLModelDisplayNode::GetSliceDisplayModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_SetAndObserveDistanceEncodedProjectionColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveDistanceEncodedProjectionColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveDistanceEncodedProjectionColorNodeID(temp0);
    }
    else
    {
      op->vtkMRMLModelDisplayNode::SetAndObserveDistanceEncodedProjectionColorNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetDistanceEncodedProjectionColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceEncodedProjectionColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDistanceEncodedProjectionColorNodeID() :
      op->vtkMRMLModelDisplayNode::GetDistanceEncodedProjectionColorNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetDistanceEncodedProjectionColorNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceEncodedProjectionColorNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLColorNode *tempr = (ap.IsBound() ?
      op->GetDistanceEncodedProjectionColorNode() :
      op->vtkMRMLModelDisplayNode::GetDistanceEncodedProjectionColorNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetScalarDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetScalarDataSet() :
      op->vtkMRMLModelDisplayNode::GetScalarDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetActiveScalarArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetActiveScalarArray() :
      op->vtkMRMLModelDisplayNode::GetActiveScalarArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelDisplayNode_SetBackfaceColorHSVOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackfaceColorHSVOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

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
      op->SetBackfaceColorHSVOffset(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLModelDisplayNode::SetBackfaceColorHSVOffset(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLModelDisplayNode_SetBackfaceColorHSVOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackfaceColorHSVOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBackfaceColorHSVOffset(temp0);
    }
    else
    {
      op->vtkMRMLModelDisplayNode::SetBackfaceColorHSVOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLModelDisplayNode_SetBackfaceColorHSVOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLModelDisplayNode_SetBackfaceColorHSVOffset_s1(self, args);
    case 1:
      return PyvtkMRMLModelDisplayNode_SetBackfaceColorHSVOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackfaceColorHSVOffset");
  return nullptr;
}


static PyObject *
PyvtkMRMLModelDisplayNode_GetBackfaceColorHSVOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackfaceColorHSVOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelDisplayNode *op = static_cast<vtkMRMLModelDisplayNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackfaceColorHSVOffset() :
      op->vtkMRMLModelDisplayNode::GetBackfaceColorHSVOffset());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLModelDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLModelDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLModelDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLModelDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLModelDisplayNode\nC++: static vtkMRMLModelDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLModelDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLModelDisplayNode\nC++: vtkMRMLModelDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLModelDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLModelDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CopyContent", PyvtkMRMLModelDisplayNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLModelDisplayNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"CreateNodeInstance", PyvtkMRMLModelDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"GetNodeTagName", PyvtkMRMLModelDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"SetInputMeshConnection", PyvtkMRMLModelDisplayNode_SetInputMeshConnection, METH_VARARGS,
   "SetInputMeshConnection(self, meshConnection:vtkAlgorithmOutput)\n    -> None\nC++: virtual void SetInputMeshConnection(\n    vtkAlgorithmOutput *meshConnection)\n\nSet and observe mesh for this model. It should be the output mesh\nconnection of the model node.\n\\sa GetInputMeshConnection(), GetInputMesh()\n"},
  {"SetInputPolyDataConnection", PyvtkMRMLModelDisplayNode_SetInputPolyDataConnection, METH_VARARGS,
   "SetInputPolyDataConnection(self,\n    polyDataConnection:vtkAlgorithmOutput) -> None\nC++: virtual void SetInputPolyDataConnection(\n    vtkAlgorithmOutput *polyDataConnection)\n\n"},
  {"GetInputMeshConnection", PyvtkMRMLModelDisplayNode_GetInputMeshConnection, METH_VARARGS,
   "GetInputMeshConnection(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInputMeshConnection()\n\nGet the input mesh connection. It should be the output mesh\nconnection of the model node\n\\sa SetInputMeshConnection(), GetInputMesh()\n"},
  {"GetInputPolyDataConnection", PyvtkMRMLModelDisplayNode_GetInputPolyDataConnection, METH_VARARGS,
   "GetInputPolyDataConnection(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInputPolyDataConnection()\n\n"},
  {"GetInputMesh", PyvtkMRMLModelDisplayNode_GetInputMesh, METH_VARARGS,
   "GetInputMesh(self) -> vtkPointSet\nC++: virtual vtkPointSet *GetInputMesh()\n\nReturn the mesh that was set by SetInputMeshConnection()\n\\sa SetInputMeshConnection(), GetInputMeshConnection()\n"},
  {"GetInputPolyData", PyvtkMRMLModelDisplayNode_GetInputPolyData, METH_VARARGS,
   "GetInputPolyData(self) -> vtkPolyData\nC++: virtual vtkPolyData *GetInputPolyData()\n\n"},
  {"GetInputUnstructuredGrid", PyvtkMRMLModelDisplayNode_GetInputUnstructuredGrid, METH_VARARGS,
   "GetInputUnstructuredGrid(self) -> vtkUnstructuredGrid\nC++: virtual vtkUnstructuredGrid *GetInputUnstructuredGrid()\n\n"},
  {"GetOutputMesh", PyvtkMRMLModelDisplayNode_GetOutputMesh, METH_VARARGS,
   "GetOutputMesh(self) -> vtkPointSet\nC++: virtual vtkPointSet *GetOutputMesh()\n\nReturn the mesh that is processed by the display node. This is\nthe mesh that needs to be connected with the mappers. Return 0 if\nthere is no input mesh but it is required. GetOutputMesh() should\nbe reimplemented only if the model display node doesn't take a\nmesh as input but produce an output mesh. In all other cases,\nGetOutputMeshConnection() should be reimplemented.\n\\sa GetOutputMeshConnection()\n"},
  {"GetOutputPolyData", PyvtkMRMLModelDisplayNode_GetOutputPolyData, METH_VARARGS,
   "GetOutputPolyData(self) -> vtkPolyData\nC++: virtual vtkPolyData *GetOutputPolyData()\n\n"},
  {"GetOutputUnstructuredGrid", PyvtkMRMLModelDisplayNode_GetOutputUnstructuredGrid, METH_VARARGS,
   "GetOutputUnstructuredGrid(self) -> vtkUnstructuredGrid\nC++: virtual vtkUnstructuredGrid *GetOutputUnstructuredGrid()\n\n"},
  {"GetOutputMeshConnection", PyvtkMRMLModelDisplayNode_GetOutputMeshConnection, METH_VARARGS,
   "GetOutputMeshConnection(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetOutputMeshConnection()\n\nReturn the mesh that is processed by the display node. This is\nthe mesh that needs to be connected with the mappers.\n\\sa GetOutputMesh()\n"},
  {"GetOutputPolyDataConnection", PyvtkMRMLModelDisplayNode_GetOutputPolyDataConnection, METH_VARARGS,
   "GetOutputPolyDataConnection(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetOutputPolyDataConnection()\n\n"},
  {"SetActiveScalarName", PyvtkMRMLModelDisplayNode_SetActiveScalarName, METH_VARARGS,
   "SetActiveScalarName(self, scalarName:str) -> None\nC++: void SetActiveScalarName(const char *scalarName) override;\n\nReimplemented to update pipeline with new value Note: If model is\ngenerated by a filter pipeline then any modification in the\npipeline resets the output mesh and then recomputes the mesh.\nDuring reset the scalars in the mesh are removed, therefore if a\nGUI or other component observes the mesh, then it will detect\nthat the scalar is deleted and so it may deactivate the selected\nscalar.\n\\sa SetActiveAttributeLocation()\n"},
  {"SetActiveAttributeLocation", PyvtkMRMLModelDisplayNode_SetActiveAttributeLocation, METH_VARARGS,
   "SetActiveAttributeLocation(self, location:int) -> None\nC++: void SetActiveAttributeLocation(int location) override;\n\nReimplemented to update pipeline with new value\n\\sa SetActiveScalarName()\n"},
  {"SetThresholdEnabled", PyvtkMRMLModelDisplayNode_SetThresholdEnabled, METH_VARARGS,
   "SetThresholdEnabled(self, enabled:bool) -> None\nC++: void SetThresholdEnabled(bool enabled)\n\nSet whether to threshold the model display node.\n\\sa ThresholdEnabled, GetThresholdEnabled()\n"},
  {"ThresholdEnabledOn", PyvtkMRMLModelDisplayNode_ThresholdEnabledOn, METH_VARARGS,
   "ThresholdEnabledOn(self) -> None\nC++: virtual void ThresholdEnabledOn()\n\n"},
  {"ThresholdEnabledOff", PyvtkMRMLModelDisplayNode_ThresholdEnabledOff, METH_VARARGS,
   "ThresholdEnabledOff(self) -> None\nC++: virtual void ThresholdEnabledOff()\n\n"},
  {"GetThresholdEnabled", PyvtkMRMLModelDisplayNode_GetThresholdEnabled, METH_VARARGS,
   "GetThresholdEnabled(self) -> bool\nC++: virtual bool GetThresholdEnabled()\n\nGet whether to threshold the model display node.\n\\sa ThresholdEnabled, SetThresholdEnabled(),\n    ThresholdEnabledOn(),\nThresholdEnabledOff()\n"},
  {"SetThresholdRange", PyvtkMRMLModelDisplayNode_SetThresholdRange, METH_VARARGS,
   "SetThresholdRange(self, min:float, max:float) -> None\nC++: void SetThresholdRange(double min, double max)\nSetThresholdRange(self, range:[float, float]) -> None\nC++: void SetThresholdRange(double range[2])\n\nSet the threshold range of the model display node.\n\\sa GetThresholdMin(), GetThresholdMax()\n"},
  {"GetThresholdRange", PyvtkMRMLModelDisplayNode_GetThresholdRange, METH_VARARGS,
   "GetThresholdRange(self, range:[float, float]) -> None\nC++: void GetThresholdRange(double range[2])\nGetThresholdRange(self) -> (float, float)\nC++: double *GetThresholdRange()\n\nGet the threshold range of the model display node.\n\\sa SetThresholdRange()\n"},
  {"GetThresholdMin", PyvtkMRMLModelDisplayNode_GetThresholdMin, METH_VARARGS,
   "GetThresholdMin(self) -> float\nC++: double GetThresholdMin()\n\n"},
  {"GetThresholdMax", PyvtkMRMLModelDisplayNode_GetThresholdMax, METH_VARARGS,
   "GetThresholdMax(self) -> float\nC++: double GetThresholdMax()\n\n"},
  {"GetSliceDisplayMode", PyvtkMRMLModelDisplayNode_GetSliceDisplayMode, METH_VARARGS,
   "GetSliceDisplayMode(self) -> int\nC++: virtual int GetSliceDisplayMode()\n\nSpecifies how to represent the 3D model in a 2D slice. By default\nintersection is showed.\n\\sa SetAndObserveDistanceEncodedProjectionColorNodeID\n"},
  {"SetSliceDisplayMode", PyvtkMRMLModelDisplayNode_SetSliceDisplayMode, METH_VARARGS,
   "SetSliceDisplayMode(self, _arg:int) -> None\nC++: virtual void SetSliceDisplayMode(int _arg)\n\n"},
  {"SetSliceDisplayModeToIntersection", PyvtkMRMLModelDisplayNode_SetSliceDisplayModeToIntersection, METH_VARARGS,
   "SetSliceDisplayModeToIntersection(self) -> None\nC++: void SetSliceDisplayModeToIntersection()\n\n"},
  {"SetSliceDisplayModeToProjection", PyvtkMRMLModelDisplayNode_SetSliceDisplayModeToProjection, METH_VARARGS,
   "SetSliceDisplayModeToProjection(self) -> None\nC++: void SetSliceDisplayModeToProjection()\n\n"},
  {"SetSliceDisplayModeToDistanceEncodedProjection", PyvtkMRMLModelDisplayNode_SetSliceDisplayModeToDistanceEncodedProjection, METH_VARARGS,
   "SetSliceDisplayModeToDistanceEncodedProjection(self) -> None\nC++: void SetSliceDisplayModeToDistanceEncodedProjection()\n\n"},
  {"GetSliceDisplayModeAsString", PyvtkMRMLModelDisplayNode_GetSliceDisplayModeAsString, METH_VARARGS,
   "GetSliceDisplayModeAsString(id:int) -> str\nC++: static const char *GetSliceDisplayModeAsString(int id)\n\nConvert between slice display mode ID and name\n"},
  {"GetSliceDisplayModeFromString", PyvtkMRMLModelDisplayNode_GetSliceDisplayModeFromString, METH_VARARGS,
   "GetSliceDisplayModeFromString(name:str) -> int\nC++: static int GetSliceDisplayModeFromString(const char *name)\n\n"},
  {"SetAndObserveDistanceEncodedProjectionColorNodeID", PyvtkMRMLModelDisplayNode_SetAndObserveDistanceEncodedProjectionColorNodeID, METH_VARARGS,
   "SetAndObserveDistanceEncodedProjectionColorNodeID(self,\n    colorNodeID:str) -> None\nC++: virtual void SetAndObserveDistanceEncodedProjectionColorNodeID(\n    const char *colorNodeID)\n\nSet and observe color node for distance encoded slice projection.\nModel that is projected to the slice will be colored based on the\nprojected point distance from the slice.\n\\sa GetDistanceEncodedProjectionColorNodeID(),\n    GetDistanceEncodedProjectionColorNode()\n"},
  {"GetDistanceEncodedProjectionColorNodeID", PyvtkMRMLModelDisplayNode_GetDistanceEncodedProjectionColorNodeID, METH_VARARGS,
   "GetDistanceEncodedProjectionColorNodeID(self) -> str\nC++: virtual const char *GetDistanceEncodedProjectionColorNodeID()\n\nGet color node for distance encoded slice projection.\n\\sa SetDistanceEncodedProjectionColorNodeID(),\n    SetDistanceEncodedProjectionColorNode()\n"},
  {"GetDistanceEncodedProjectionColorNode", PyvtkMRMLModelDisplayNode_GetDistanceEncodedProjectionColorNode, METH_VARARGS,
   "GetDistanceEncodedProjectionColorNode(self) -> vtkMRMLColorNode\nC++: virtual vtkMRMLColorNode *GetDistanceEncodedProjectionColorNode(\n    )\n\n"},
  {"GetScalarDataSet", PyvtkMRMLModelDisplayNode_GetScalarDataSet, METH_VARARGS,
   "GetScalarDataSet(self) -> vtkDataSet\nC++: virtual vtkDataSet *GetScalarDataSet() override;\n\nGet data set containing the scalar arrays for this node type. For\nmodels it is the input mesh\n"},
  {"GetActiveScalarArray", PyvtkMRMLModelDisplayNode_GetActiveScalarArray, METH_VARARGS,
   "GetActiveScalarArray(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetActiveScalarArray() override;\n\nReturn the current active scalar array (based on active scalar\nname and location)\n"},
  {"SetBackfaceColorHSVOffset", PyvtkMRMLModelDisplayNode_SetBackfaceColorHSVOffset, METH_VARARGS,
   "SetBackfaceColorHSVOffset(self, _arg1:float, _arg2:float,\n    _arg3:float) -> None\nC++: virtual void SetBackfaceColorHSVOffset(double _arg1,\n    double _arg2, double _arg3)\nSetBackfaceColorHSVOffset(self, _arg:(float, float, float))\n    -> None\nC++: virtual void SetBackfaceColorHSVOffset(const double _arg[3])\n\nSet color of backface surface as HSV (hue, saturation,\nbrightness) offset compared to node color. Values are in [-1, 1]\nrange, 0 value means same as node color.\n"},
  {"GetBackfaceColorHSVOffset", PyvtkMRMLModelDisplayNode_GetBackfaceColorHSVOffset, METH_VARARGS,
   "GetBackfaceColorHSVOffset(self) -> (float, float, float)\nC++: virtual double *GetBackfaceColorHSVOffset()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLModelDisplayNode_Doc =
  "vtkMRMLModelDisplayNode - MRML node to represent a display property\nof 3D surface model.\n\n"
  "Superclass: vtkMRMLDisplayNode\n\n"
  "vtkMRMLModelDisplayNode nodes stores display property of a 3D surface\n"
  "model including reference to ColorNode, texture, opacity, etc.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLModelDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLModelDisplayNode", // tp_name
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
  PyvtkMRMLModelDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLModelDisplayNode_StaticNew()
{
  return vtkMRMLModelDisplayNode::New();
}

PyObject *PyvtkMRMLModelDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLModelDisplayNode_Type, PyvtkMRMLModelDisplayNode_Methods,
    "vtkMRMLModelDisplayNode",
 &PyvtkMRMLModelDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLDisplayNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLModelDisplayNode_SliceDisplayModeType_Type);
  PyVTKEnum_Add(&PyvtkMRMLModelDisplayNode_SliceDisplayModeType_Type, "vtkMRMLModelDisplayNode.SliceDisplayModeType");

  o = (PyObject *)&PyvtkMRMLModelDisplayNode_SliceDisplayModeType_Type;
  if (PyDict_SetItemString(d, "SliceDisplayModeType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkMRMLModelDisplayNode::SliceDisplayModeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "SliceDisplayIntersection", vtkMRMLModelDisplayNode::SliceDisplayIntersection },
        { "SliceDisplayProjection", vtkMRMLModelDisplayNode::SliceDisplayProjection },
        { "SliceDisplayDistanceEncodedProjection", vtkMRMLModelDisplayNode::SliceDisplayDistanceEncodedProjection },
        { "SliceDisplayMode_Last", vtkMRMLModelDisplayNode::SliceDisplayMode_Last },
      };

    o = PyvtkMRMLModelDisplayNode_SliceDisplayModeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLModelDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLModelDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLModelDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

