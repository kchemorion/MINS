// python wrapper for vtkMRMLAnnotationControlPointsNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLAnnotationControlPointsNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLAnnotationControlPointsNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLAnnotationControlPointsNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAnnotationNode_ClassNew
extern "C" { PyObject *PyvtkMRMLAnnotationNode_ClassNew(); }
#define DECLARED_PyvtkMRMLAnnotationNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAnnotationControlPointsNode_NumberingSchemes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerAnnotationsModuleMRMLPython.vtkMRMLAnnotationControlPointsNode.NumberingSchemes", // tp_name
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
PyObject *PyvtkMRMLAnnotationControlPointsNode_NumberingSchemes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLAnnotationControlPointsNode_NumberingSchemes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAnnotationControlPointsNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLAnnotationControlPointsNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLAnnotationControlPointsNode *tempr = vtkMRMLAnnotationControlPointsNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAnnotationControlPointsNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLAnnotationControlPointsNode::NewInstance());

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
PyvtkMRMLAnnotationControlPointsNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLAnnotationControlPointsNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLAnnotationControlPointsNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLAnnotationControlPointsNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLAnnotationControlPointsNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_WriteCLI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteCLI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  std::string temp1;
  int temp2 = 0;
  int temp3 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->WriteCLI(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLAnnotationControlPointsNode::WriteCLI(temp0, temp1, temp2, temp3);
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
PyvtkMRMLAnnotationControlPointsNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLAnnotationControlPointsNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

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
      op->vtkMRMLAnnotationControlPointsNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

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
      op->vtkMRMLAnnotationControlPointsNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLAnnotationControlPointsNode_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkMRMLAnnotationControlPointsNode::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_InvokePendingModifiedEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokePendingModifiedEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->InvokePendingModifiedEvent() :
      op->vtkMRMLAnnotationControlPointsNode::InvokePendingModifiedEvent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_GetAnnotationPointDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationPointDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAnnotationPointDisplayNode *tempr = (ap.IsBound() ?
      op->GetAnnotationPointDisplayNode() :
      op->vtkMRMLAnnotationControlPointsNode::GetAnnotationPointDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLAnnotationControlPointsNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_AddControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AddControlPoint(temp0, temp1, temp2) :
      op->vtkMRMLAnnotationControlPointsNode::AddControlPoint(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_SetControlPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetControlPoint(temp0, temp1, temp2, temp3) :
      op->vtkMRMLAnnotationControlPointsNode::SetControlPoint(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationControlPointsNode_SetControlPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetControlPoint(temp0, temp1) :
      op->vtkMRMLAnnotationControlPointsNode::SetControlPoint(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationControlPointsNode_SetControlPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkMRMLAnnotationControlPointsNode_SetControlPoint_s1(self, args);
    case 2:
      return PyvtkMRMLAnnotationControlPointsNode_SetControlPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetControlPoint");
  return nullptr;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_SetControlPointWorldCoordinates_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlPointWorldCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetControlPointWorldCoordinates(temp0, temp1, temp2, temp3) :
      op->vtkMRMLAnnotationControlPointsNode::SetControlPointWorldCoordinates(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationControlPointsNode_SetControlPointWorldCoordinates_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlPointWorldCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetControlPointWorldCoordinates(temp0, temp1) :
      op->vtkMRMLAnnotationControlPointsNode::SetControlPointWorldCoordinates(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationControlPointsNode_SetControlPointWorldCoordinates(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkMRMLAnnotationControlPointsNode_SetControlPointWorldCoordinates_s1(self, args);
    case 2:
      return PyvtkMRMLAnnotationControlPointsNode_SetControlPointWorldCoordinates_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetControlPointWorldCoordinates");
  return nullptr;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_DeleteControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteControlPoint(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationControlPointsNode::DeleteControlPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_GetControlPointCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetControlPointCoordinates(temp0) :
      op->vtkMRMLAnnotationControlPointsNode::GetControlPointCoordinates(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_GetControlPointWorldCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointWorldCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetControlPointWorldCoordinates(temp0, temp1);
    }
    else
    {
      op->vtkMRMLAnnotationControlPointsNode::GetControlPointWorldCoordinates(temp0, temp1);
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
PyvtkMRMLAnnotationControlPointsNode_GetNumberOfControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfControlPoints() :
      op->vtkMRMLAnnotationControlPointsNode::GetNumberOfControlPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_GetAttributeTypesEnumAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeTypesEnumAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeTypesEnumAsString(temp0) :
      op->vtkMRMLAnnotationControlPointsNode::GetAttributeTypesEnumAsString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_ResetAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetAnnotations();
    }
    else
    {
      op->vtkMRMLAnnotationControlPointsNode::ResetAnnotations();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_CreateAnnotationPointDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateAnnotationPointDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateAnnotationPointDisplayNode();
    }
    else
    {
      op->vtkMRMLAnnotationControlPointsNode::CreateAnnotationPointDisplayNode();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_SetNumberingScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberingScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberingScheme(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationControlPointsNode::SetNumberingScheme(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_GetNumberingScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberingScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberingScheme() :
      op->vtkMRMLAnnotationControlPointsNode::GetNumberingScheme());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_GetNumberingSchemeAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberingSchemeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNumberingSchemeAsString() :
      op->vtkMRMLAnnotationControlPointsNode::GetNumberingSchemeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationControlPointsNode_GetNumberingSchemeAsString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberingSchemeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNumberingSchemeAsString(temp0) :
      op->vtkMRMLAnnotationControlPointsNode::GetNumberingSchemeAsString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationControlPointsNode_GetNumberingSchemeAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLAnnotationControlPointsNode_GetNumberingSchemeAsString_s1(self, args);
    case 1:
      return PyvtkMRMLAnnotationControlPointsNode_GetNumberingSchemeAsString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberingSchemeAsString");
  return nullptr;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_SetNumberingSchemeFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberingSchemeFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberingSchemeFromString(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationControlPointsNode::SetNumberingSchemeFromString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationControlPointsNode_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationControlPointsNode *op = static_cast<vtkMRMLAnnotationControlPointsNode *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationControlPointsNode::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLAnnotationControlPointsNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLAnnotationControlPointsNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLAnnotationControlPointsNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLAnnotationControlPointsNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLAnnotationControlPointsNode\nC++: static vtkMRMLAnnotationControlPointsNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLAnnotationControlPointsNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLAnnotationControlPointsNode\nC++: vtkMRMLAnnotationControlPointsNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLAnnotationControlPointsNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLAnnotationControlPointsNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLAnnotationControlPointsNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"GetNodeTagName", PyvtkMRMLAnnotationControlPointsNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"WriteCLI", PyvtkMRMLAnnotationControlPointsNode_WriteCLI, METH_VARARGS,
   "WriteCLI(self, commandLine:[str, ...], prefix:str,\n    coordinateSystem:int=0, multipleFlag:int=1) -> None\nC++: void WriteCLI(std::vector<std::string> &commandLine,\n    std::string prefix, int coordinateSystem=0,\n    int multipleFlag=1) override;\n\nWrite this node's information to a vector of strings for passing\nto a CLI, precede each datum with the prefix if not an empty\nstring coordinateSystemFlag = 0 for RAS, 1 for LPS multipleFlag =\n1 for the whole list, 1 for the first point\n"},
  {"HasCopyContent", PyvtkMRMLAnnotationControlPointsNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"UpdateScene", PyvtkMRMLAnnotationControlPointsNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data\n"},
  {"ProcessMRMLEvents", PyvtkMRMLAnnotationControlPointsNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"Modified", PyvtkMRMLAnnotationControlPointsNode_Modified, METH_VARARGS,
   "Modified(self) -> None\nC++: void Modified() override;\n\nCustomized version of Modified() allowing to compress\nvtkCommand::ModifiedEvent.\n\nIt overrides the vtkObject method so that all changes to the node\nwhich would normally generate a vtkCommand::ModifiedEvent can be\ngrouped into an `atomic` operation.\n\nTypical usage would be to disable modified events, call a series\nof `Set*` operations, and then re-enable modified events and call\nInvokePendingModifiedEvent() to invoke the event (if any of the\n`Set*` calls actually changed the values of the instance\nvariables).\n\n\\sa GetDisableModifiedEvent()\n"},
  {"InvokePendingModifiedEvent", PyvtkMRMLAnnotationControlPointsNode_InvokePendingModifiedEvent, METH_VARARGS,
   "InvokePendingModifiedEvent(self) -> int\nC++: int InvokePendingModifiedEvent() override;\n\nInvokes any modified events that are 'pending', meaning they were\ngenerated while the DisableModifiedEvent flag was nonzero.\nReturns the old flag state.\n"},
  {"GetAnnotationPointDisplayNode", PyvtkMRMLAnnotationControlPointsNode_GetAnnotationPointDisplayNode, METH_VARARGS,
   "GetAnnotationPointDisplayNode(self)\n    -> vtkMRMLAnnotationPointDisplayNode\nC++: vtkMRMLAnnotationPointDisplayNode *GetAnnotationPointDisplayNode(\n    )\n\nget associated display node or nullptr if not set\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLAnnotationControlPointsNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {"AddControlPoint", PyvtkMRMLAnnotationControlPointsNode_AddControlPoint, METH_VARARGS,
   "AddControlPoint(self, newControl:[float, float, float],\n    selectedFlag:int, visibleFlag:int) -> int\nC++: int AddControlPoint(double newControl[3], int selectedFlag,\n    int visibleFlag)\n\n"},
  {"SetControlPoint", PyvtkMRMLAnnotationControlPointsNode_SetControlPoint, METH_VARARGS,
   "SetControlPoint(self, id:int, newControl:[float, float, float],\n    selectedFlag:int, visibleFlag:int) -> int\nC++: int SetControlPoint(int id, double newControl[3],\n    int selectedFlag, int visibleFlag)\nSetControlPoint(self, id:int, newControl:[float, float, float])\n    -> int\nC++: int SetControlPoint(int id, double newControl[3])\n\n"},
  {"SetControlPointWorldCoordinates", PyvtkMRMLAnnotationControlPointsNode_SetControlPointWorldCoordinates, METH_VARARGS,
   "SetControlPointWorldCoordinates(self, id:int, newControl:[float,\n    float, float], selectedFlag:int, visibleFlag:int) -> int\nC++: int SetControlPointWorldCoordinates(int id,\n    double newControl[3], int selectedFlag, int visibleFlag)\nSetControlPointWorldCoordinates(self, id:int, newControl:[float,\n    float, float]) -> int\nC++: int SetControlPointWorldCoordinates(int id,\n    double newControl[3])\n\n"},
  {"DeleteControlPoint", PyvtkMRMLAnnotationControlPointsNode_DeleteControlPoint, METH_VARARGS,
   "DeleteControlPoint(self, id:int) -> None\nC++: void DeleteControlPoint(int id)\n\n"},
  {"GetControlPointCoordinates", PyvtkMRMLAnnotationControlPointsNode_GetControlPointCoordinates, METH_VARARGS,
   "GetControlPointCoordinates(self, id:int) -> Pointer\nC++: double *GetControlPointCoordinates(vtkIdType id)\n\nReturn the RAS coordinates of point ID. Try to limit calling this\nfunction because it is performance critical. Also, when queried\nagain it resets all former pointers. Copying is therefore\nnecessary.\n"},
  {"GetControlPointWorldCoordinates", PyvtkMRMLAnnotationControlPointsNode_GetControlPointWorldCoordinates, METH_VARARGS,
   "GetControlPointWorldCoordinates(self, id:int, point:[float, ...])\n    -> None\nC++: void GetControlPointWorldCoordinates(vtkIdType id,\n    double *point)\n\n"},
  {"GetNumberOfControlPoints", PyvtkMRMLAnnotationControlPointsNode_GetNumberOfControlPoints, METH_VARARGS,
   "GetNumberOfControlPoints(self) -> int\nC++: int GetNumberOfControlPoints()\n\n"},
  {"GetAttributeTypesEnumAsString", PyvtkMRMLAnnotationControlPointsNode_GetAttributeTypesEnumAsString, METH_VARARGS,
   "GetAttributeTypesEnumAsString(self, val:int) -> str\nC++: const char *GetAttributeTypesEnumAsString(int val) override;\n\n"},
  {"ResetAnnotations", PyvtkMRMLAnnotationControlPointsNode_ResetAnnotations, METH_VARARGS,
   "ResetAnnotations(self) -> None\nC++: void ResetAnnotations() override;\n\nInitializes all variables associated with annotations\n"},
  {"CreateAnnotationPointDisplayNode", PyvtkMRMLAnnotationControlPointsNode_CreateAnnotationPointDisplayNode, METH_VARARGS,
   "CreateAnnotationPointDisplayNode(self) -> None\nC++: void CreateAnnotationPointDisplayNode()\n\nadd display node if not already present\n"},
  {"SetNumberingScheme", PyvtkMRMLAnnotationControlPointsNode_SetNumberingScheme, METH_VARARGS,
   "SetNumberingScheme(self, numberingScheme:int) -> None\nC++: virtual void SetNumberingScheme(int numberingScheme)\n\nFlag determining how to number the next added fiducial\n"},
  {"GetNumberingScheme", PyvtkMRMLAnnotationControlPointsNode_GetNumberingScheme, METH_VARARGS,
   "GetNumberingScheme(self) -> int\nC++: virtual int GetNumberingScheme()\n\n"},
  {"GetNumberingSchemeAsString", PyvtkMRMLAnnotationControlPointsNode_GetNumberingSchemeAsString, METH_VARARGS,
   "GetNumberingSchemeAsString(self) -> str\nC++: const char *GetNumberingSchemeAsString()\nGetNumberingSchemeAsString(self, g:int) -> str\nC++: const char *GetNumberingSchemeAsString(int g)\n\nReturn a string representing the numbering scheme, set it from a\nstring\n"},
  {"SetNumberingSchemeFromString", PyvtkMRMLAnnotationControlPointsNode_SetNumberingSchemeFromString, METH_VARARGS,
   "SetNumberingSchemeFromString(self, schemeString:str) -> None\nC++: void SetNumberingSchemeFromString(const char *schemeString)\n\n"},
  {"Initialize", PyvtkMRMLAnnotationControlPointsNode_Initialize, METH_VARARGS,
   "Initialize(self, mrmlScene:vtkMRMLScene) -> None\nC++: void Initialize(vtkMRMLScene *mrmlScene) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLAnnotationControlPointsNode_Doc =
  "vtkMRMLAnnotationControlPointsNode - MRML node to represent a fiber\nbundle from tractography in DTI data.\n\n"
  "Superclass: vtkMRMLAnnotationNode\n\n"
  "Annotation nodes contains control points, internally represented as\n"
  "vtkPolyData. An Annotation node contains many control points  and\n"
  "forms the smallest logical unit of tractography that MRML will\n"
  "manage/read/write. Each control point has accompanying data.\n"
  "Visualization parameters for these nodes are controlled by the\n"
  "vtkMRMLAnnotationPointDisplayNode class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAnnotationControlPointsNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerAnnotationsModuleMRMLPython.vtkMRMLAnnotationControlPointsNode", // tp_name
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
  PyvtkMRMLAnnotationControlPointsNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLAnnotationControlPointsNode_StaticNew()
{
  return vtkMRMLAnnotationControlPointsNode::New();
}

PyObject *PyvtkMRMLAnnotationControlPointsNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLAnnotationControlPointsNode_Type, PyvtkMRMLAnnotationControlPointsNode_Methods,
    "vtkMRMLAnnotationControlPointsNode",
 &PyvtkMRMLAnnotationControlPointsNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAnnotationNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLAnnotationControlPointsNode_NumberingSchemes_Type);
  PyVTKEnum_Add(&PyvtkMRMLAnnotationControlPointsNode_NumberingSchemes_Type, "vtkMRMLAnnotationControlPointsNode.NumberingSchemes");

  o = (PyObject *)&PyvtkMRMLAnnotationControlPointsNode_NumberingSchemes_Type;
  if (PyDict_SetItemString(d, "NumberingSchemes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "ControlPointModifiedEvent", vtkMRMLAnnotationControlPointsNode::ControlPointModifiedEvent },
        { "CP_SELECTED", vtkMRMLAnnotationControlPointsNode::CP_SELECTED },
        { "CP_VISIBLE", vtkMRMLAnnotationControlPointsNode::CP_VISIBLE },
        { "NUM_CP_ATTRIBUTE_TYPES", vtkMRMLAnnotationControlPointsNode::NUM_CP_ATTRIBUTE_TYPES },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkMRMLAnnotationControlPointsNode::NumberingSchemes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "SchemeMin", vtkMRMLAnnotationControlPointsNode::SchemeMin },
        { "UseID", vtkMRMLAnnotationControlPointsNode::UseID },
        { "UseIndex", vtkMRMLAnnotationControlPointsNode::UseIndex },
        { "UsePrevious", vtkMRMLAnnotationControlPointsNode::UsePrevious },
        { "SchemeMax", vtkMRMLAnnotationControlPointsNode::SchemeMax },
      };

    o = PyvtkMRMLAnnotationControlPointsNode_NumberingSchemes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLAnnotationControlPointsNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLAnnotationControlPointsNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLAnnotationControlPointsNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

