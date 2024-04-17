// python wrapper for vtkMRMLViewNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLViewNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLViewNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLViewNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractViewNode_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractViewNode_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractViewNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLViewNode_InteractionFlagType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLViewNode.InteractionFlagType", // tp_name
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
PyObject *PyvtkMRMLViewNode_InteractionFlagType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLViewNode_InteractionFlagType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLViewNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLViewNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLViewNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLViewNode *tempr = vtkMRMLViewNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLViewNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLViewNode::NewInstance());

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
PyvtkMRMLViewNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLViewNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLViewNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLViewNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

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
      op->vtkMRMLViewNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLViewNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLViewNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_defaultBackgroundColor(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "defaultBackgroundColor");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double *tempr = vtkMRMLViewNode::defaultBackgroundColor();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_defaultBackgroundColor2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "defaultBackgroundColor2");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double *tempr = vtkMRMLViewNode::defaultBackgroundColor2();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetDefaultBoxColor(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDefaultBoxColor");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkMRMLViewNode::GetDefaultBoxColor(temp0);

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
PyvtkMRMLViewNode_GetBoxVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoxVisible() :
      op->vtkMRMLViewNode::GetBoxVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetBoxVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoxVisible(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetBoxVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetBoxColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

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
      op->SetBoxColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLViewNode::SetBoxColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLViewNode_SetBoxColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBoxColor(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetBoxColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLViewNode_SetBoxColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLViewNode_SetBoxColor_s1(self, args);
    case 1:
      return PyvtkMRMLViewNode_SetBoxColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBoxColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLViewNode_GetBoxColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBoxColor() :
      op->vtkMRMLViewNode::GetBoxColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetAxisLabelsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelsVisible() :
      op->vtkMRMLViewNode::GetAxisLabelsVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetAxisLabelsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelsVisible(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetAxisLabelsVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetAxisLabelsCameraDependent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelsCameraDependent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelsCameraDependent() :
      op->vtkMRMLViewNode::GetAxisLabelsCameraDependent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetAxisLabelsCameraDependent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelsCameraDependent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelsCameraDependent(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetAxisLabelsCameraDependent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetFiducialsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiducialsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFiducialsVisible() :
      op->vtkMRMLViewNode::GetFiducialsVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetFiducialsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFiducialsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFiducialsVisible(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetFiducialsVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetFiducialLabelsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiducialLabelsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFiducialLabelsVisible() :
      op->vtkMRMLViewNode::GetFiducialLabelsVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetFiducialLabelsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFiducialLabelsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFiducialLabelsVisible(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetFiducialLabelsVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetFieldOfView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldOfView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFieldOfView() :
      op->vtkMRMLViewNode::GetFieldOfView());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetFieldOfView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldOfView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldOfView(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetFieldOfView(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetLetterSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLetterSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLetterSize() :
      op->vtkMRMLViewNode::GetLetterSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetLetterSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLetterSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLetterSize(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetLetterSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetAnimationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnimationMode() :
      op->vtkMRMLViewNode::GetAnimationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetAnimationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimationMode(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetAnimationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetAnimationModeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAnimationModeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLViewNode::GetAnimationModeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetAnimationModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAnimationModeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLViewNode::GetAnimationModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetViewAxisMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAxisMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetViewAxisMode() :
      op->vtkMRMLViewNode::GetViewAxisMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetViewAxisMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAxisMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetViewAxisMode(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetViewAxisMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetViewAxisModeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetViewAxisModeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLViewNode::GetViewAxisModeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetViewAxisModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetViewAxisModeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLViewNode::GetViewAxisModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetSpinDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpinDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSpinDirection() :
      op->vtkMRMLViewNode::GetSpinDirection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetSpinDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpinDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpinDirection(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetSpinDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetSpinDirectionAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSpinDirectionAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLViewNode::GetSpinDirectionAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetSpinDirectionFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSpinDirectionFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLViewNode::GetSpinDirectionFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetSpinDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpinDegrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpinDegrees() :
      op->vtkMRMLViewNode::GetSpinDegrees());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetSpinDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpinDegrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpinDegrees(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetSpinDegrees(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetRotateDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotateDegrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotateDegrees() :
      op->vtkMRMLViewNode::GetRotateDegrees());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetRotateDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotateDegrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotateDegrees(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetRotateDegrees(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetAnimationMs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationMs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnimationMs() :
      op->vtkMRMLViewNode::GetAnimationMs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetAnimationMs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationMs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimationMs(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetAnimationMs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetRockLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRockLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRockLength() :
      op->vtkMRMLViewNode::GetRockLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetRockLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRockLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRockLength(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetRockLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetRockCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRockCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRockCount() :
      op->vtkMRMLViewNode::GetRockCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetRockCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRockCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRockCount(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetRockCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetStereoType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStereoType() :
      op->vtkMRMLViewNode::GetStereoType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetStereoType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStereoType(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetStereoType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetStereoTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStereoTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLViewNode::GetStereoTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetStereoTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStereoTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLViewNode::GetStereoTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRenderMode() :
      op->vtkMRMLViewNode::GetRenderMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderMode(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetRenderMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetRenderModeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRenderModeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLViewNode::GetRenderModeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetRenderModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRenderModeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLViewNode::GetRenderModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetUseDepthPeeling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDepthPeeling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseDepthPeeling() :
      op->vtkMRMLViewNode::GetUseDepthPeeling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetUseDepthPeeling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthPeeling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDepthPeeling(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetUseDepthPeeling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetFPSVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFPSVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFPSVisible() :
      op->vtkMRMLViewNode::GetFPSVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetFPSVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFPSVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFPSVisible(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetFPSVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetGPUMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGPUMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGPUMemorySize() :
      op->vtkMRMLViewNode::GetGPUMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetGPUMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGPUMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGPUMemorySize(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetGPUMemorySize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetAutoReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetAutoReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetAutoReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutoReleaseGraphicsResources() :
      op->vtkMRMLViewNode::GetAutoReleaseGraphicsResources());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_AutoReleaseGraphicsResourcesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoReleaseGraphicsResourcesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoReleaseGraphicsResourcesOn();
    }
    else
    {
      op->vtkMRMLViewNode::AutoReleaseGraphicsResourcesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_AutoReleaseGraphicsResourcesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoReleaseGraphicsResourcesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoReleaseGraphicsResourcesOff();
    }
    else
    {
      op->vtkMRMLViewNode::AutoReleaseGraphicsResourcesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetExpectedFPS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExpectedFPS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExpectedFPS(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetExpectedFPS(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetExpectedFPS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExpectedFPS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetExpectedFPS() :
      op->vtkMRMLViewNode::GetExpectedFPS());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetVolumeRenderingQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeRenderingQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolumeRenderingQuality(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetVolumeRenderingQuality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetVolumeRenderingQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeRenderingQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVolumeRenderingQuality() :
      op->vtkMRMLViewNode::GetVolumeRenderingQuality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetVolumeRenderingQualityAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVolumeRenderingQualityAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLViewNode::GetVolumeRenderingQualityAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetVolumeRenderingQualityFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVolumeRenderingQualityFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLViewNode::GetVolumeRenderingQualityFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetRaycastTechnique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRaycastTechnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRaycastTechnique() :
      op->vtkMRMLViewNode::GetRaycastTechnique());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetRaycastTechnique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRaycastTechnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRaycastTechnique(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetRaycastTechnique(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetRaycastTechniqueAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRaycastTechniqueAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLViewNode::GetRaycastTechniqueAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetRaycastTechniqueFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRaycastTechniqueFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLViewNode::GetRaycastTechniqueFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetVolumeRenderingSurfaceSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeRenderingSurfaceSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVolumeRenderingSurfaceSmoothing() :
      op->vtkMRMLViewNode::GetVolumeRenderingSurfaceSmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetVolumeRenderingSurfaceSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeRenderingSurfaceSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolumeRenderingSurfaceSmoothing(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetVolumeRenderingSurfaceSmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetVolumeRenderingOversamplingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeRenderingOversamplingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolumeRenderingOversamplingFactor(temp0);
    }
    else
    {
      op->vtkMRMLViewNode::SetVolumeRenderingOversamplingFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetVolumeRenderingOversamplingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeRenderingOversamplingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeRenderingOversamplingFactor() :
      op->vtkMRMLViewNode::GetVolumeRenderingOversamplingFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetInteracting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteracting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

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
      op->vtkMRMLViewNode::SetInteracting(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetInteracting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteracting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteracting() :
      op->vtkMRMLViewNode::GetInteracting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_InteractingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractingOn();
    }
    else
    {
      op->vtkMRMLViewNode::InteractingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_InteractingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractingOff();
    }
    else
    {
      op->vtkMRMLViewNode::InteractingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetLinkedControl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedControl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLinkedControl() :
      op->vtkMRMLViewNode::GetLinkedControl());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetLinkedControl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinkedControl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

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
      op->vtkMRMLViewNode::SetLinkedControl(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_LinkedControlOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LinkedControlOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LinkedControlOn();
    }
    else
    {
      op->vtkMRMLViewNode::LinkedControlOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_LinkedControlOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LinkedControlOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LinkedControlOff();
    }
    else
    {
      op->vtkMRMLViewNode::LinkedControlOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_SetInteractionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

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
      op->vtkMRMLViewNode::SetInteractionFlags(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewNode_GetInteractionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewNode *op = static_cast<vtkMRMLViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetInteractionFlags() :
      op->vtkMRMLViewNode::GetInteractionFlags());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLViewNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLViewNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLViewNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLViewNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLViewNode\nC++: static vtkMRMLViewNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLViewNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLViewNode\nC++: vtkMRMLViewNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLViewNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLViewNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLViewNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"CopyContent", PyvtkMRMLViewNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLViewNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLViewNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"defaultBackgroundColor", PyvtkMRMLViewNode_defaultBackgroundColor, METH_VARARGS,
   "defaultBackgroundColor() -> Pointer\nC++: static double *defaultBackgroundColor()\n\nReturn the color the view nodes have for the background by\ndefault.\n"},
  {"defaultBackgroundColor2", PyvtkMRMLViewNode_defaultBackgroundColor2, METH_VARARGS,
   "defaultBackgroundColor2() -> Pointer\nC++: static double *defaultBackgroundColor2()\n\n"},
  {"GetDefaultBoxColor", PyvtkMRMLViewNode_GetDefaultBoxColor, METH_VARARGS,
   "GetDefaultBoxColor(color:[float, float, float]) -> None\nC++: static void GetDefaultBoxColor(double color[3])\n\nReturn default box color\n"},
  {"GetBoxVisible", PyvtkMRMLViewNode_GetBoxVisible, METH_VARARGS,
   "GetBoxVisible(self) -> int\nC++: virtual int GetBoxVisible()\n\nIndicates if the box is visible\n"},
  {"SetBoxVisible", PyvtkMRMLViewNode_SetBoxVisible, METH_VARARGS,
   "SetBoxVisible(self, _arg:int) -> None\nC++: virtual void SetBoxVisible(int _arg)\n\n"},
  {"SetBoxColor", PyvtkMRMLViewNode_SetBoxColor, METH_VARARGS,
   "SetBoxColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetBoxColor(double _arg1, double _arg2,\n    double _arg3)\nSetBoxColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetBoxColor(const double _arg[3])\n\nBox color as RGB\n"},
  {"GetBoxColor", PyvtkMRMLViewNode_GetBoxColor, METH_VARARGS,
   "GetBoxColor(self) -> (float, float, float)\nC++: virtual double *GetBoxColor()\n\n"},
  {"GetAxisLabelsVisible", PyvtkMRMLViewNode_GetAxisLabelsVisible, METH_VARARGS,
   "GetAxisLabelsVisible(self) -> int\nC++: virtual int GetAxisLabelsVisible()\n\nIndicates if the axis labels are visible\n"},
  {"SetAxisLabelsVisible", PyvtkMRMLViewNode_SetAxisLabelsVisible, METH_VARARGS,
   "SetAxisLabelsVisible(self, _arg:int) -> None\nC++: virtual void SetAxisLabelsVisible(int _arg)\n\n"},
  {"GetAxisLabelsCameraDependent", PyvtkMRMLViewNode_GetAxisLabelsCameraDependent, METH_VARARGS,
   "GetAxisLabelsCameraDependent(self) -> int\nC++: virtual int GetAxisLabelsCameraDependent()\n\nIndicates if the axis labels visibility controlled by camera\norientation\n"},
  {"SetAxisLabelsCameraDependent", PyvtkMRMLViewNode_SetAxisLabelsCameraDependent, METH_VARARGS,
   "SetAxisLabelsCameraDependent(self, _arg:int) -> None\nC++: virtual void SetAxisLabelsCameraDependent(int _arg)\n\n"},
  {"GetFiducialsVisible", PyvtkMRMLViewNode_GetFiducialsVisible, METH_VARARGS,
   "GetFiducialsVisible(self) -> int\nC++: virtual int GetFiducialsVisible()\n\nToggles visibility of fiducial points in 3D viewer\n"},
  {"SetFiducialsVisible", PyvtkMRMLViewNode_SetFiducialsVisible, METH_VARARGS,
   "SetFiducialsVisible(self, _arg:int) -> None\nC++: virtual void SetFiducialsVisible(int _arg)\n\n"},
  {"GetFiducialLabelsVisible", PyvtkMRMLViewNode_GetFiducialLabelsVisible, METH_VARARGS,
   "GetFiducialLabelsVisible(self) -> int\nC++: virtual int GetFiducialLabelsVisible()\n\n"},
  {"SetFiducialLabelsVisible", PyvtkMRMLViewNode_SetFiducialLabelsVisible, METH_VARARGS,
   "SetFiducialLabelsVisible(self, _arg:int) -> None\nC++: virtual void SetFiducialLabelsVisible(int _arg)\n\n"},
  {"GetFieldOfView", PyvtkMRMLViewNode_GetFieldOfView, METH_VARARGS,
   "GetFieldOfView(self) -> float\nC++: virtual double GetFieldOfView()\n\nField of view size\n"},
  {"SetFieldOfView", PyvtkMRMLViewNode_SetFieldOfView, METH_VARARGS,
   "SetFieldOfView(self, _arg:float) -> None\nC++: virtual void SetFieldOfView(double _arg)\n\n"},
  {"GetLetterSize", PyvtkMRMLViewNode_GetLetterSize, METH_VARARGS,
   "GetLetterSize(self) -> float\nC++: virtual double GetLetterSize()\n\nAxis label size\n"},
  {"SetLetterSize", PyvtkMRMLViewNode_SetLetterSize, METH_VARARGS,
   "SetLetterSize(self, _arg:float) -> None\nC++: virtual void SetLetterSize(double _arg)\n\n"},
  {"GetAnimationMode", PyvtkMRMLViewNode_GetAnimationMode, METH_VARARGS,
   "GetAnimationMode(self) -> int\nC++: virtual int GetAnimationMode()\n\nTurn on and off animated spinning or rocking.\n"},
  {"SetAnimationMode", PyvtkMRMLViewNode_SetAnimationMode, METH_VARARGS,
   "SetAnimationMode(self, _arg:int) -> None\nC++: virtual void SetAnimationMode(int _arg)\n\n"},
  {"GetAnimationModeAsString", PyvtkMRMLViewNode_GetAnimationModeAsString, METH_VARARGS,
   "GetAnimationModeAsString(id:int) -> str\nC++: static const char *GetAnimationModeAsString(int id)\n\n"},
  {"GetAnimationModeFromString", PyvtkMRMLViewNode_GetAnimationModeFromString, METH_VARARGS,
   "GetAnimationModeFromString(name:str) -> int\nC++: static int GetAnimationModeFromString(const char *name)\n\n"},
  {"GetViewAxisMode", PyvtkMRMLViewNode_GetViewAxisMode, METH_VARARGS,
   "GetViewAxisMode(self) -> int\nC++: virtual int GetViewAxisMode()\n\n"},
  {"SetViewAxisMode", PyvtkMRMLViewNode_SetViewAxisMode, METH_VARARGS,
   "SetViewAxisMode(self, _arg:int) -> None\nC++: virtual void SetViewAxisMode(int _arg)\n\n"},
  {"GetViewAxisModeAsString", PyvtkMRMLViewNode_GetViewAxisModeAsString, METH_VARARGS,
   "GetViewAxisModeAsString(id:int) -> str\nC++: static const char *GetViewAxisModeAsString(int id)\n\n"},
  {"GetViewAxisModeFromString", PyvtkMRMLViewNode_GetViewAxisModeFromString, METH_VARARGS,
   "GetViewAxisModeFromString(name:str) -> int\nC++: static int GetViewAxisModeFromString(const char *name)\n\n"},
  {"GetSpinDirection", PyvtkMRMLViewNode_GetSpinDirection, METH_VARARGS,
   "GetSpinDirection(self) -> int\nC++: virtual int GetSpinDirection()\n\nDirection of animated spinning\n"},
  {"SetSpinDirection", PyvtkMRMLViewNode_SetSpinDirection, METH_VARARGS,
   "SetSpinDirection(self, _arg:int) -> None\nC++: virtual void SetSpinDirection(int _arg)\n\n"},
  {"GetSpinDirectionAsString", PyvtkMRMLViewNode_GetSpinDirectionAsString, METH_VARARGS,
   "GetSpinDirectionAsString(id:int) -> str\nC++: static const char *GetSpinDirectionAsString(int id)\n\n"},
  {"GetSpinDirectionFromString", PyvtkMRMLViewNode_GetSpinDirectionFromString, METH_VARARGS,
   "GetSpinDirectionFromString(name:str) -> int\nC++: static int GetSpinDirectionFromString(const char *name)\n\n"},
  {"GetSpinDegrees", PyvtkMRMLViewNode_GetSpinDegrees, METH_VARARGS,
   "GetSpinDegrees(self) -> float\nC++: virtual double GetSpinDegrees()\n\nNumber of degrees in spin increment.\n"},
  {"SetSpinDegrees", PyvtkMRMLViewNode_SetSpinDegrees, METH_VARARGS,
   "SetSpinDegrees(self, _arg:float) -> None\nC++: virtual void SetSpinDegrees(double _arg)\n\n"},
  {"GetRotateDegrees", PyvtkMRMLViewNode_GetRotateDegrees, METH_VARARGS,
   "GetRotateDegrees(self) -> float\nC++: virtual double GetRotateDegrees()\n\n"},
  {"SetRotateDegrees", PyvtkMRMLViewNode_SetRotateDegrees, METH_VARARGS,
   "SetRotateDegrees(self, _arg:float) -> None\nC++: virtual void SetRotateDegrees(double _arg)\n\n"},
  {"GetAnimationMs", PyvtkMRMLViewNode_GetAnimationMs, METH_VARARGS,
   "GetAnimationMs(self) -> int\nC++: virtual int GetAnimationMs()\n\nAmount of wait time between spin increments\n"},
  {"SetAnimationMs", PyvtkMRMLViewNode_SetAnimationMs, METH_VARARGS,
   "SetAnimationMs(self, _arg:int) -> None\nC++: virtual void SetAnimationMs(int _arg)\n\n"},
  {"GetRockLength", PyvtkMRMLViewNode_GetRockLength, METH_VARARGS,
   "GetRockLength(self) -> int\nC++: virtual int GetRockLength()\n\nLength of animated rocking\n"},
  {"SetRockLength", PyvtkMRMLViewNode_SetRockLength, METH_VARARGS,
   "SetRockLength(self, _arg:int) -> None\nC++: virtual void SetRockLength(int _arg)\n\n"},
  {"GetRockCount", PyvtkMRMLViewNode_GetRockCount, METH_VARARGS,
   "GetRockCount(self) -> int\nC++: virtual int GetRockCount()\n\nIncrement of animated rock\n"},
  {"SetRockCount", PyvtkMRMLViewNode_SetRockCount, METH_VARARGS,
   "SetRockCount(self, _arg:int) -> None\nC++: virtual void SetRockCount(int _arg)\n\n"},
  {"GetStereoType", PyvtkMRMLViewNode_GetStereoType, METH_VARARGS,
   "GetStereoType(self) -> int\nC++: virtual int GetStereoType()\n\nStereo mode (including NoStereo)\n"},
  {"SetStereoType", PyvtkMRMLViewNode_SetStereoType, METH_VARARGS,
   "SetStereoType(self, _arg:int) -> None\nC++: virtual void SetStereoType(int _arg)\n\n"},
  {"GetStereoTypeAsString", PyvtkMRMLViewNode_GetStereoTypeAsString, METH_VARARGS,
   "GetStereoTypeAsString(id:int) -> str\nC++: static const char *GetStereoTypeAsString(int id)\n\n"},
  {"GetStereoTypeFromString", PyvtkMRMLViewNode_GetStereoTypeFromString, METH_VARARGS,
   "GetStereoTypeFromString(name:str) -> int\nC++: static int GetStereoTypeFromString(const char *name)\n\n"},
  {"GetRenderMode", PyvtkMRMLViewNode_GetRenderMode, METH_VARARGS,
   "GetRenderMode(self) -> int\nC++: virtual int GetRenderMode()\n\nSpecifies orthographic or perspective rendering\n"},
  {"SetRenderMode", PyvtkMRMLViewNode_SetRenderMode, METH_VARARGS,
   "SetRenderMode(self, _arg:int) -> None\nC++: virtual void SetRenderMode(int _arg)\n\n"},
  {"GetRenderModeAsString", PyvtkMRMLViewNode_GetRenderModeAsString, METH_VARARGS,
   "GetRenderModeAsString(id:int) -> str\nC++: static const char *GetRenderModeAsString(int id)\n\n"},
  {"GetRenderModeFromString", PyvtkMRMLViewNode_GetRenderModeFromString, METH_VARARGS,
   "GetRenderModeFromString(name:str) -> int\nC++: static int GetRenderModeFromString(const char *name)\n\n"},
  {"GetUseDepthPeeling", PyvtkMRMLViewNode_GetUseDepthPeeling, METH_VARARGS,
   "GetUseDepthPeeling(self) -> int\nC++: virtual int GetUseDepthPeeling()\n\nUse depth peeling or not. 0 by default.\n"},
  {"SetUseDepthPeeling", PyvtkMRMLViewNode_SetUseDepthPeeling, METH_VARARGS,
   "SetUseDepthPeeling(self, _arg:int) -> None\nC++: virtual void SetUseDepthPeeling(int _arg)\n\n"},
  {"GetFPSVisible", PyvtkMRMLViewNode_GetFPSVisible, METH_VARARGS,
   "GetFPSVisible(self) -> int\nC++: virtual int GetFPSVisible()\n\nShow FPS in the lower right side of the screen. 0 by default.\n"},
  {"SetFPSVisible", PyvtkMRMLViewNode_SetFPSVisible, METH_VARARGS,
   "SetFPSVisible(self, _arg:int) -> None\nC++: virtual void SetFPSVisible(int _arg)\n\n"},
  {"GetGPUMemorySize", PyvtkMRMLViewNode_GetGPUMemorySize, METH_VARARGS,
   "GetGPUMemorySize(self) -> int\nC++: virtual int GetGPUMemorySize()\n\nGPU memory size in MB 0 by default (application default)\n"},
  {"SetGPUMemorySize", PyvtkMRMLViewNode_SetGPUMemorySize, METH_VARARGS,
   "SetGPUMemorySize(self, _arg:int) -> None\nC++: virtual void SetGPUMemorySize(int _arg)\n\n"},
  {"SetAutoReleaseGraphicsResources", PyvtkMRMLViewNode_SetAutoReleaseGraphicsResources, METH_VARARGS,
   "SetAutoReleaseGraphicsResources(self, _arg:bool) -> None\nC++: virtual void SetAutoReleaseGraphicsResources(bool _arg)\n\nEnable/Disable automatic immediate release of graphics resources\nwhen not in use. If GPU volume rendering is used, enabling this\noption makes the volume immediately unloaded from GPU memory when\nvisibility is turned off. Disabled by default to allow faster\ntoggling of visibility.\n"},
  {"GetAutoReleaseGraphicsResources", PyvtkMRMLViewNode_GetAutoReleaseGraphicsResources, METH_VARARGS,
   "GetAutoReleaseGraphicsResources(self) -> bool\nC++: virtual bool GetAutoReleaseGraphicsResources()\n\n"},
  {"AutoReleaseGraphicsResourcesOn", PyvtkMRMLViewNode_AutoReleaseGraphicsResourcesOn, METH_VARARGS,
   "AutoReleaseGraphicsResourcesOn(self) -> None\nC++: virtual void AutoReleaseGraphicsResourcesOn()\n\n"},
  {"AutoReleaseGraphicsResourcesOff", PyvtkMRMLViewNode_AutoReleaseGraphicsResourcesOff, METH_VARARGS,
   "AutoReleaseGraphicsResourcesOff(self) -> None\nC++: virtual void AutoReleaseGraphicsResourcesOff()\n\n"},
  {"SetExpectedFPS", PyvtkMRMLViewNode_SetExpectedFPS, METH_VARARGS,
   "SetExpectedFPS(self, _arg:float) -> None\nC++: virtual void SetExpectedFPS(double _arg)\n\nExpected FPS\n"},
  {"GetExpectedFPS", PyvtkMRMLViewNode_GetExpectedFPS, METH_VARARGS,
   "GetExpectedFPS(self) -> float\nC++: virtual double GetExpectedFPS()\n\n"},
  {"SetVolumeRenderingQuality", PyvtkMRMLViewNode_SetVolumeRenderingQuality, METH_VARARGS,
   "SetVolumeRenderingQuality(self, _arg:int) -> None\nC++: virtual void SetVolumeRenderingQuality(int _arg)\n\n"},
  {"GetVolumeRenderingQuality", PyvtkMRMLViewNode_GetVolumeRenderingQuality, METH_VARARGS,
   "GetVolumeRenderingQuality(self) -> int\nC++: virtual int GetVolumeRenderingQuality()\n\n"},
  {"GetVolumeRenderingQualityAsString", PyvtkMRMLViewNode_GetVolumeRenderingQualityAsString, METH_VARARGS,
   "GetVolumeRenderingQualityAsString(id:int) -> str\nC++: static const char *GetVolumeRenderingQualityAsString(int id)\n\n"},
  {"GetVolumeRenderingQualityFromString", PyvtkMRMLViewNode_GetVolumeRenderingQualityFromString, METH_VARARGS,
   "GetVolumeRenderingQualityFromString(name:str) -> int\nC++: static int GetVolumeRenderingQualityFromString(\n    const char *name)\n\n"},
  {"GetRaycastTechnique", PyvtkMRMLViewNode_GetRaycastTechnique, METH_VARARGS,
   "GetRaycastTechnique(self) -> int\nC++: virtual int GetRaycastTechnique()\n\nRaycasting technique for volume rendering\n"},
  {"SetRaycastTechnique", PyvtkMRMLViewNode_SetRaycastTechnique, METH_VARARGS,
   "SetRaycastTechnique(self, _arg:int) -> None\nC++: virtual void SetRaycastTechnique(int _arg)\n\n"},
  {"GetRaycastTechniqueAsString", PyvtkMRMLViewNode_GetRaycastTechniqueAsString, METH_VARARGS,
   "GetRaycastTechniqueAsString(id:int) -> str\nC++: static const char *GetRaycastTechniqueAsString(int id)\n\n"},
  {"GetRaycastTechniqueFromString", PyvtkMRMLViewNode_GetRaycastTechniqueFromString, METH_VARARGS,
   "GetRaycastTechniqueFromString(name:str) -> int\nC++: static int GetRaycastTechniqueFromString(const char *name)\n\n"},
  {"GetVolumeRenderingSurfaceSmoothing", PyvtkMRMLViewNode_GetVolumeRenderingSurfaceSmoothing, METH_VARARGS,
   "GetVolumeRenderingSurfaceSmoothing(self) -> bool\nC++: virtual bool GetVolumeRenderingSurfaceSmoothing()\n\nReduce wood grain artifact to make surfaces appear smoother. For\nexample, by applying jittering on casted rays. Note: Only applies\nto GPU-based techniques\n"},
  {"SetVolumeRenderingSurfaceSmoothing", PyvtkMRMLViewNode_SetVolumeRenderingSurfaceSmoothing, METH_VARARGS,
   "SetVolumeRenderingSurfaceSmoothing(self, _arg:bool) -> None\nC++: virtual void SetVolumeRenderingSurfaceSmoothing(bool _arg)\n\n"},
  {"SetVolumeRenderingOversamplingFactor", PyvtkMRMLViewNode_SetVolumeRenderingOversamplingFactor, METH_VARARGS,
   "SetVolumeRenderingOversamplingFactor(self, _arg:float) -> None\nC++: virtual void SetVolumeRenderingOversamplingFactor(\n    double _arg)\n\nOversampling factor for sample distance. The sample distance is\ncalculated by \\sa GetSampleDistance to be the volume's minimum\nspacing divided by the oversampling factor. If \\sa\nVolumeRenderingQuality is set to maximum quality, then a fix\noversampling factor of 10 is used.\n"},
  {"GetVolumeRenderingOversamplingFactor", PyvtkMRMLViewNode_GetVolumeRenderingOversamplingFactor, METH_VARARGS,
   "GetVolumeRenderingOversamplingFactor(self) -> float\nC++: virtual double GetVolumeRenderingOversamplingFactor()\n\n"},
  {"SetInteracting", PyvtkMRMLViewNode_SetInteracting, METH_VARARGS,
   "SetInteracting(self, __a:int) -> None\nC++: void SetInteracting(int)\n\nGet/Set a flag indicating whether this node is actively being\nmanipulated (usually) by a user interface. This flag is used by\nlogic classes to determine whether state changes should be\npropagated to other nodes to implement linked controls. Does not\ncause a Modified().\n"},
  {"GetInteracting", PyvtkMRMLViewNode_GetInteracting, METH_VARARGS,
   "GetInteracting(self) -> int\nC++: virtual int GetInteracting()\n\n"},
  {"InteractingOn", PyvtkMRMLViewNode_InteractingOn, METH_VARARGS,
   "InteractingOn(self) -> None\nC++: virtual void InteractingOn()\n\n"},
  {"InteractingOff", PyvtkMRMLViewNode_InteractingOff, METH_VARARGS,
   "InteractingOff(self) -> None\nC++: virtual void InteractingOff()\n\n"},
  {"GetLinkedControl", PyvtkMRMLViewNode_GetLinkedControl, METH_VARARGS,
   "GetLinkedControl(self) -> int\nC++: virtual int GetLinkedControl()\n\ntoggle the view linking\n"},
  {"SetLinkedControl", PyvtkMRMLViewNode_SetLinkedControl, METH_VARARGS,
   "SetLinkedControl(self, _arg:int) -> None\nC++: virtual void SetLinkedControl(int _arg)\n\n"},
  {"LinkedControlOn", PyvtkMRMLViewNode_LinkedControlOn, METH_VARARGS,
   "LinkedControlOn(self) -> None\nC++: virtual void LinkedControlOn()\n\n"},
  {"LinkedControlOff", PyvtkMRMLViewNode_LinkedControlOff, METH_VARARGS,
   "LinkedControlOff(self) -> None\nC++: virtual void LinkedControlOff()\n\n"},
  {"SetInteractionFlags", PyvtkMRMLViewNode_SetInteractionFlags, METH_VARARGS,
   "SetInteractionFlags(self, __a:int) -> None\nC++: void SetInteractionFlags(unsigned int)\n\nGet/Set a flag indicating what parameters are being manipulated\nwithin calls to InteractingOn() and InteractingOff(). These\nfields are used to propagate linked behaviors. This flag is a\nbitfield, with multiple parameters OR'd to compose the flag. Does\nnot cause a Modified().\n"},
  {"GetInteractionFlags", PyvtkMRMLViewNode_GetInteractionFlags, METH_VARARGS,
   "GetInteractionFlags(self) -> int\nC++: virtual unsigned int GetInteractionFlags()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLViewNode_Doc =
  "vtkMRMLViewNode - MRML node to represent a 3D view.\n\n"
  "Superclass: vtkMRMLAbstractViewNode\n\n"
  "View node contains view parameters.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLViewNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLViewNode", // tp_name
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
  PyvtkMRMLViewNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLViewNode_StaticNew()
{
  return vtkMRMLViewNode::New();
}

PyObject *PyvtkMRMLViewNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLViewNode_Type, PyvtkMRMLViewNode_Methods,
    "vtkMRMLViewNode",
 &PyvtkMRMLViewNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractViewNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLViewNode_InteractionFlagType_Type);
  PyVTKEnum_Add(&PyvtkMRMLViewNode_InteractionFlagType_Type, "vtkMRMLViewNode.InteractionFlagType");

  o = (PyObject *)&PyvtkMRMLViewNode_InteractionFlagType_Type;
  if (PyDict_SetItemString(d, "InteractionFlagType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 39; c++)
  {
    static const struct { const char *name; int value; }
      constants[39] = {
        { "RotateAround", vtkMRMLViewNode::RotateAround },
        { "LookFrom", vtkMRMLViewNode::LookFrom },
        { "ViewAxisMode_Last", vtkMRMLViewNode::ViewAxisMode_Last },
        { "PitchUp", vtkMRMLViewNode::PitchUp },
        { "PitchDown", vtkMRMLViewNode::PitchDown },
        { "RollLeft", vtkMRMLViewNode::RollLeft },
        { "RollRight", vtkMRMLViewNode::RollRight },
        { "YawLeft", vtkMRMLViewNode::YawLeft },
        { "YawRight", vtkMRMLViewNode::YawRight },
        { "SpinDirection_Last", vtkMRMLViewNode::SpinDirection_Last },
        { "NoStereo", vtkMRMLViewNode::NoStereo },
        { "RedBlue", vtkMRMLViewNode::RedBlue },
        { "Anaglyph", vtkMRMLViewNode::Anaglyph },
        { "QuadBuffer", vtkMRMLViewNode::QuadBuffer },
        { "Interlaced", vtkMRMLViewNode::Interlaced },
        { "UserDefined_1", vtkMRMLViewNode::UserDefined_1 },
        { "UserDefined_2", vtkMRMLViewNode::UserDefined_2 },
        { "UserDefined_3", vtkMRMLViewNode::UserDefined_3 },
        { "StereoType_Last", vtkMRMLViewNode::StereoType_Last },
        { "Perspective", vtkMRMLViewNode::Perspective },
        { "Orthographic", vtkMRMLViewNode::Orthographic },
        { "RenderMode_Last", vtkMRMLViewNode::RenderMode_Last },
        { "Off", vtkMRMLViewNode::Off },
        { "Spin", vtkMRMLViewNode::Spin },
        { "Rock", vtkMRMLViewNode::Rock },
        { "AnimationMode_Last", vtkMRMLViewNode::AnimationMode_Last },
        { "Adaptive", vtkMRMLViewNode::Adaptive },
        { "Normal", vtkMRMLViewNode::Normal },
        { "Maximum", vtkMRMLViewNode::Maximum },
        { "VolumeRenderingQuality_Last", vtkMRMLViewNode::VolumeRenderingQuality_Last },
        { "Composite", vtkMRMLViewNode::Composite },
        { "CompositeEdgeColoring", vtkMRMLViewNode::CompositeEdgeColoring },
        { "MaximumIntensityProjection", vtkMRMLViewNode::MaximumIntensityProjection },
        { "MinimumIntensityProjection", vtkMRMLViewNode::MinimumIntensityProjection },
        { "GradiantMagnitudeOpacityModulation", vtkMRMLViewNode::GradiantMagnitudeOpacityModulation },
        { "IllustrativeContextPreservingExploration", vtkMRMLViewNode::IllustrativeContextPreservingExploration },
        { "RaycastTechnique_Last", vtkMRMLViewNode::RaycastTechnique_Last },
        { "GraphicalResourcesCreatedEvent", vtkMRMLViewNode::GraphicalResourcesCreatedEvent },
        { "ResetFocalPointRequestedEvent", vtkMRMLViewNode::ResetFocalPointRequestedEvent },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 14; c++)
  {
    typedef vtkMRMLViewNode::InteractionFlagType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[14] = {
        { "None_", vtkMRMLViewNode::None },
        { "AnimationModeFlag", vtkMRMLViewNode::AnimationModeFlag },
        { "RenderModeFlag", vtkMRMLViewNode::RenderModeFlag },
        { "BoxVisibleFlag", vtkMRMLViewNode::BoxVisibleFlag },
        { "BoxColorFlag", vtkMRMLViewNode::BoxColorFlag },
        { "BoxLabelVisibileFlag", vtkMRMLViewNode::BoxLabelVisibileFlag },
        { "BackgroundColorFlag", vtkMRMLViewNode::BackgroundColorFlag },
        { "StereoTypeFlag", vtkMRMLViewNode::StereoTypeFlag },
        { "OrientationMarkerTypeFlag", vtkMRMLViewNode::OrientationMarkerTypeFlag },
        { "OrientationMarkerSizeFlag", vtkMRMLViewNode::OrientationMarkerSizeFlag },
        { "RulerTypeFlag", vtkMRMLViewNode::RulerTypeFlag },
        { "RulerColorFlag", vtkMRMLViewNode::RulerColorFlag },
        { "UseDepthPeelingFlag", vtkMRMLViewNode::UseDepthPeelingFlag },
        { "FPSVisibleFlag", vtkMRMLViewNode::FPSVisibleFlag },
      };

    o = PyvtkMRMLViewNode_InteractionFlagType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLViewNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLViewNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLViewNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

