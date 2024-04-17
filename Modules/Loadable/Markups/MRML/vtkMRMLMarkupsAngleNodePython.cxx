// python wrapper for vtkMRMLMarkupsAngleNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLMarkupsAngleNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLMarkupsAngleNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLMarkupsAngleNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLMarkupsNode_ClassNew
extern "C" { PyObject *PyvtkMRMLMarkupsNode_ClassNew(); }
#define DECLARED_PyvtkMRMLMarkupsNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsAngleNode_AngleMeasurementModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsAngleNode.AngleMeasurementModes", // tp_name
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
PyObject *PyvtkMRMLMarkupsAngleNode_AngleMeasurementModes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLMarkupsAngleNode_AngleMeasurementModes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsAngleNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMarkupsAngleNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMarkupsAngleNode *tempr = vtkMRMLMarkupsAngleNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsAngleNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMarkupsAngleNode::NewInstance());

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
PyvtkMRMLMarkupsAngleNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMarkupsAngleNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMarkupsAngleNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_GetIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIcon() :
      op->vtkMRMLMarkupsAngleNode::GetIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_GetAddIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAddIcon() :
      op->vtkMRMLMarkupsAngleNode::GetAddIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_GetPlaceAddIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceAddIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPlaceAddIcon() :
      op->vtkMRMLMarkupsAngleNode::GetPlaceAddIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLMarkupsAngleNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLMarkupsAngleNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_GetMarkupType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetMarkupType() :
      op->vtkMRMLMarkupsAngleNode::GetMarkupType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_GetTypeDisplayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeDisplayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTypeDisplayName() :
      op->vtkMRMLMarkupsAngleNode::GetTypeDisplayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_GetDefaultNodeNamePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNodeNamePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultNodeNamePrefix() :
      op->vtkMRMLMarkupsAngleNode::GetDefaultNodeNamePrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

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
      op->vtkMRMLMarkupsAngleNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLMarkupsAngleNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_GetAngleMeasurementMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMeasurementMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAngleMeasurementMode() :
      op->vtkMRMLMarkupsAngleNode::GetAngleMeasurementMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_SetAngleMeasurementMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngleMeasurementMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngleMeasurementMode(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsAngleNode::SetAngleMeasurementMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_GetAngleMeasurementModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMeasurementModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAngleMeasurementModeAsString(temp0) :
      op->vtkMRMLMarkupsAngleNode::GetAngleMeasurementModeAsString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_GetAngleMeasurementModeFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMeasurementModeFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAngleMeasurementModeFromString(temp0) :
      op->vtkMRMLMarkupsAngleNode::GetAngleMeasurementModeFromString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_SetAngleMeasurementModeToMinimal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngleMeasurementModeToMinimal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAngleMeasurementModeToMinimal();
    }
    else
    {
      op->vtkMRMLMarkupsAngleNode::SetAngleMeasurementModeToMinimal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_SetAngleMeasurementModeToOrientedSigned(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngleMeasurementModeToOrientedSigned");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAngleMeasurementModeToOrientedSigned();
    }
    else
    {
      op->vtkMRMLMarkupsAngleNode::SetAngleMeasurementModeToOrientedSigned();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_SetAngleMeasurementModeToOrientedPositive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngleMeasurementModeToOrientedPositive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAngleMeasurementModeToOrientedPositive();
    }
    else
    {
      op->vtkMRMLMarkupsAngleNode::SetAngleMeasurementModeToOrientedPositive();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_GetOrientationRotationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationRotationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrientationRotationAxis() :
      op->vtkMRMLMarkupsAngleNode::GetOrientationRotationAxis());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_SetOrientationRotationAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationRotationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

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
      op->SetOrientationRotationAxis(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsAngleNode::SetOrientationRotationAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsAngleNode_SetOrientationRotationAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationRotationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

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
      op->SetOrientationRotationAxis(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsAngleNode::SetOrientationRotationAxis(temp0);
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
PyvtkMRMLMarkupsAngleNode_SetOrientationRotationAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLMarkupsAngleNode_SetOrientationRotationAxis_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsAngleNode_SetOrientationRotationAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrientationRotationAxis");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsAngleNode_GetAngleDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleDegrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsAngleNode *op = static_cast<vtkMRMLMarkupsAngleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleDegrees() :
      op->vtkMRMLMarkupsAngleNode::GetAngleDegrees());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsAngleNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMarkupsAngleNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMarkupsAngleNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMarkupsAngleNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLMarkupsAngleNode\nC++: static vtkMRMLMarkupsAngleNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMarkupsAngleNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMarkupsAngleNode\nC++: vtkMRMLMarkupsAngleNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMarkupsAngleNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMarkupsAngleNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetIcon", PyvtkMRMLMarkupsAngleNode_GetIcon, METH_VARARGS,
   "GetIcon(self) -> str\nC++: const char *GetIcon() override;\n\n"},
  {"GetAddIcon", PyvtkMRMLMarkupsAngleNode_GetAddIcon, METH_VARARGS,
   "GetAddIcon(self) -> str\nC++: const char *GetAddIcon() override;\n\n"},
  {"GetPlaceAddIcon", PyvtkMRMLMarkupsAngleNode_GetPlaceAddIcon, METH_VARARGS,
   "GetPlaceAddIcon(self) -> str\nC++: const char *GetPlaceAddIcon() override;\n\n"},
  {"CreateNodeInstance", PyvtkMRMLMarkupsAngleNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"GetNodeTagName", PyvtkMRMLMarkupsAngleNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetMarkupType", PyvtkMRMLMarkupsAngleNode_GetMarkupType, METH_VARARGS,
   "GetMarkupType(self) -> str\nC++: const char *GetMarkupType() override;\n\nGet markup type internal name\n"},
  {"GetTypeDisplayName", PyvtkMRMLMarkupsAngleNode_GetTypeDisplayName, METH_VARARGS,
   "GetTypeDisplayName(self) -> str\nC++: const char *GetTypeDisplayName() override;\n\nGet node type display name (like \"Closed Curve\", \"Markup\", etc).\n\note Subclasses should override this method to provide a more\nappropriate and translatable name.\n"},
  {"GetDefaultNodeNamePrefix", PyvtkMRMLMarkupsAngleNode_GetDefaultNodeNamePrefix, METH_VARARGS,
   "GetDefaultNodeNamePrefix(self) -> str\nC++: const char *GetDefaultNodeNamePrefix() override;\n\nGet markup short name\n"},
  {"CopyContent", PyvtkMRMLMarkupsAngleNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLMarkupsAngleNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetAngleMeasurementMode", PyvtkMRMLMarkupsAngleNode_GetAngleMeasurementMode, METH_VARARGS,
   "GetAngleMeasurementMode(self) -> int\nC++: virtual int GetAngleMeasurementMode()\n\nGet angle calculation mode, determining what angle to calculate\nfrom the given points.\n\\return \\sa AngleMeasurementMode (Minimal, OrientedSigned,\n    OrientedPositive)\n"},
  {"SetAngleMeasurementMode", PyvtkMRMLMarkupsAngleNode_SetAngleMeasurementMode, METH_VARARGS,
   "SetAngleMeasurementMode(self, type:int) -> None\nC++: void SetAngleMeasurementMode(int type)\n\nSet angle calculation mode, determining what angle to calculate\nfrom the given points.\n\\param type \\sa AngleMeasurementMode (Minimal, OrientedSigned,\n    OrientedPositive)\n"},
  {"GetAngleMeasurementModeAsString", PyvtkMRMLMarkupsAngleNode_GetAngleMeasurementModeAsString, METH_VARARGS,
   "GetAngleMeasurementModeAsString(self, id:int) -> str\nC++: const char *GetAngleMeasurementModeAsString(int id)\n\nGet angle calculation mode as string from ID\n\\sa AngleMeasurementMode, \\sa GetAngleMeasurementMode, \\sa\n    GetAngleMeasurementModeFromString\n\\param id Identifier of the angle mode\n\\return \"Minimal\", \"OrientedSigned\", or \"OrientedPositive\"\n"},
  {"GetAngleMeasurementModeFromString", PyvtkMRMLMarkupsAngleNode_GetAngleMeasurementModeFromString, METH_VARARGS,
   "GetAngleMeasurementModeFromString(self, name:str) -> int\nC++: int GetAngleMeasurementModeFromString(const char *name)\n\nGet angle calculation mode ID from string\n\\sa AngleMeasurementMode, \\sa GetAngleMeasurementMode, \\sa\n    GetAngleMeasurementModeAsString\n\\param name \"Minimal\", \"OrientedSigned\", or \"OrientedPositive\"\n\\return Identifier of the angle mode\n"},
  {"SetAngleMeasurementModeToMinimal", PyvtkMRMLMarkupsAngleNode_SetAngleMeasurementModeToMinimal, METH_VARARGS,
   "SetAngleMeasurementModeToMinimal(self) -> None\nC++: void SetAngleMeasurementModeToMinimal()\n\nSet angle mode to Minimal. Calculate minimal angle, between\n[0..180)\n\\sa AngleMeasurementMode, \\sa SetAngleMeasurementMode\n"},
  {"SetAngleMeasurementModeToOrientedSigned", PyvtkMRMLMarkupsAngleNode_SetAngleMeasurementModeToOrientedSigned, METH_VARARGS,
   "SetAngleMeasurementModeToOrientedSigned(self) -> None\nC++: void SetAngleMeasurementModeToOrientedSigned()\n\nSet angle mode to OrientedSigned. Calculate oriented angle\n[-180..180), using OrientationRotationAxis in right-hand rule\n\\sa AngleMeasurementMode, \\sa OrientationRotationAxis, \\sa\n    SetAngleMeasurementMode\n"},
  {"SetAngleMeasurementModeToOrientedPositive", PyvtkMRMLMarkupsAngleNode_SetAngleMeasurementModeToOrientedPositive, METH_VARARGS,
   "SetAngleMeasurementModeToOrientedPositive(self) -> None\nC++: void SetAngleMeasurementModeToOrientedPositive()\n\nSet angle mode to OrientedPositive. Calculate oriented angle\n[0..360), using OrientationRotationAxis in right-hand rule\n\\sa AngleMeasurementMode, \\sa OrientationRotationAxis, \\sa\n    SetAngleMeasurementMode\n"},
  {"GetOrientationRotationAxis", PyvtkMRMLMarkupsAngleNode_GetOrientationRotationAxis, METH_VARARGS,
   "GetOrientationRotationAxis(self) -> (float, float, float)\nC++: virtual double *GetOrientationRotationAxis()\n\nGet rotation axis for calculating right-hand rule angles.\n\\sa OrientationRotationAxis, \\sa SetOrientationRotationAxis\n"},
  {"SetOrientationRotationAxis", PyvtkMRMLMarkupsAngleNode_SetOrientationRotationAxis, METH_VARARGS,
   "SetOrientationRotationAxis(self, r:float, a:float, s:float)\n    -> None\nC++: virtual void SetOrientationRotationAxis(double r, double a,\n    double s)\nSetOrientationRotationAxis(self, ras:[float, float, float])\n    -> None\nC++: virtual void SetOrientationRotationAxis(double ras[3])\n\nSet rotation axis for calculating right-hand rule angles.\n\\sa OrientationRotationAxis, \\sa GetOrientationRotationAxis\n"},
  {"GetAngleDegrees", PyvtkMRMLMarkupsAngleNode_GetAngleDegrees, METH_VARARGS,
   "GetAngleDegrees(self) -> float\nC++: double GetAngleDegrees()\n\nGet current measured angle\n\\return Angle in degrees, respecting \\sa AngleMeasurementMode\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMarkupsAngleNode_Doc =
  "vtkMRMLMarkupsAngleNode - MRML node to represent an angle markup\n\n"
  "Superclass: vtkMRMLMarkupsNode\n\n"
  "Angle Markups nodes contain three control points. Visualization\n"
  "parameters are set in the vtkMRMLMarkupsDisplayNode class.\n\n"
  "Markups is intended to be used for manual marking/editing of point\n"
  "positions.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsAngleNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsAngleNode", // tp_name
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
  PyvtkMRMLMarkupsAngleNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLMarkupsAngleNode_StaticNew()
{
  return vtkMRMLMarkupsAngleNode::New();
}

PyObject *PyvtkMRMLMarkupsAngleNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMarkupsAngleNode_Type, PyvtkMRMLMarkupsAngleNode_Methods,
    "vtkMRMLMarkupsAngleNode",
 &PyvtkMRMLMarkupsAngleNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLMarkupsNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLMarkupsAngleNode_AngleMeasurementModes_Type);
  PyVTKEnum_Add(&PyvtkMRMLMarkupsAngleNode_AngleMeasurementModes_Type, "vtkMRMLMarkupsAngleNode.AngleMeasurementModes");

  o = (PyObject *)&PyvtkMRMLMarkupsAngleNode_AngleMeasurementModes_Type;
  if (PyDict_SetItemString(d, "AngleMeasurementModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkMRMLMarkupsAngleNode::AngleMeasurementModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "Minimal", vtkMRMLMarkupsAngleNode::Minimal },
        { "OrientedSigned", vtkMRMLMarkupsAngleNode::OrientedSigned },
        { "OrientedPositive", vtkMRMLMarkupsAngleNode::OrientedPositive },
        { "AngleMeasurementMode_Last", vtkMRMLMarkupsAngleNode::AngleMeasurementMode_Last },
      };

    o = PyvtkMRMLMarkupsAngleNode_AngleMeasurementModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLMarkupsAngleNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLMarkupsAngleNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMarkupsAngleNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

