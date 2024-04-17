// python wrapper for vtkMRMLMeasurement
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLMeasurement.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLMeasurement(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLMeasurement_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMeasurement_ComputationResult_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLMeasurement.ComputationResult", // tp_name
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
PyObject *PyvtkMRMLMeasurement_ComputationResult_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLMeasurement_ComputationResult_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMeasurement_Events_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLMeasurement.Events", // tp_name
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
PyObject *PyvtkMRMLMeasurement_Events_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLMeasurement_Events_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLMeasurement_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMeasurement::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMeasurement::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMeasurement *tempr = vtkMRMLMeasurement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMeasurement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMeasurement::NewInstance());

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
PyvtkMRMLMeasurement_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMeasurement::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMeasurement::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_CreateInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkMRMLMeasurement *tempr = op->CreateInstance();

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
PyvtkMRMLMeasurement_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkMRMLMeasurement::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_ClearValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  typedef vtkMRMLMeasurement::ComputationResult temp0_type;
  temp0_type temp0 = vtkMRMLMeasurement::NoChange;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetEnumValue(temp0, "vtkMRMLMeasurement.ComputationResult")))
  {
    if (ap.IsBound())
    {
      op->ClearValue(temp0);
    }
    else
    {
      op->vtkMRMLMeasurement::ClearValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  vtkMRMLMeasurement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMeasurement"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkMRMLMeasurement::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_Compute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Compute();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkMRMLMeasurement::GetEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkMRMLMeasurement::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOn();
    }
    else
    {
      op->vtkMRMLMeasurement::EnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOff();
    }
    else
    {
      op->vtkMRMLMeasurement::EnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkMRMLMeasurement::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  std::string temp0;
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
      op->vtkMRMLMeasurement::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  double temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMeasurement::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkMRMLMeasurement::GetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_SetDisplayValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  double temp0;
  const char *temp1 = nullptr;
  double temp2 = 0.0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetDisplayValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMeasurement::SetDisplayValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetDisplayValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDisplayValue() :
      op->vtkMRMLMeasurement::GetDisplayValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetValueDefined(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueDefined");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetValueDefined() :
      op->vtkMRMLMeasurement::GetValueDefined());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetUnits() :
      op->vtkMRMLMeasurement::GetUnits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_SetUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnits(temp0);
    }
    else
    {
      op->vtkMRMLMeasurement::SetUnits(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetDisplayCoefficient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayCoefficient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDisplayCoefficient() :
      op->vtkMRMLMeasurement::GetDisplayCoefficient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_SetDisplayCoefficient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayCoefficient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayCoefficient(temp0);
    }
    else
    {
      op->vtkMRMLMeasurement::SetDisplayCoefficient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDescription() :
      op->vtkMRMLMeasurement::GetDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_SetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  std::string temp0;
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
      op->vtkMRMLMeasurement::SetDescription(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetPrintFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrintFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetPrintFormat() :
      op->vtkMRMLMeasurement::GetPrintFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_SetPrintFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrintFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrintFormat(temp0);
    }
    else
    {
      op->vtkMRMLMeasurement::SetPrintFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_SetQuantityCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuantityCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  vtkCodedEntry *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCodedEntry"))
  {
    if (ap.IsBound())
    {
      op->SetQuantityCode(temp0);
    }
    else
    {
      op->vtkMRMLMeasurement::SetQuantityCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetQuantityCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuantityCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCodedEntry *tempr = (ap.IsBound() ?
      op->GetQuantityCode() :
      op->vtkMRMLMeasurement::GetQuantityCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_SetDerivationCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDerivationCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  vtkCodedEntry *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCodedEntry"))
  {
    if (ap.IsBound())
    {
      op->SetDerivationCode(temp0);
    }
    else
    {
      op->vtkMRMLMeasurement::SetDerivationCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetDerivationCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDerivationCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCodedEntry *tempr = (ap.IsBound() ?
      op->GetDerivationCode() :
      op->vtkMRMLMeasurement::GetDerivationCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_SetUnitsCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnitsCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  vtkCodedEntry *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCodedEntry"))
  {
    if (ap.IsBound())
    {
      op->SetUnitsCode(temp0);
    }
    else
    {
      op->vtkMRMLMeasurement::SetUnitsCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetUnitsCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnitsCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCodedEntry *tempr = (ap.IsBound() ?
      op->GetUnitsCode() :
      op->vtkMRMLMeasurement::GetUnitsCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_SetMethodCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMethodCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  vtkCodedEntry *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCodedEntry"))
  {
    if (ap.IsBound())
    {
      op->SetMethodCode(temp0);
    }
    else
    {
      op->vtkMRMLMeasurement::SetMethodCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetMethodCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMethodCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCodedEntry *tempr = (ap.IsBound() ?
      op->GetMethodCode() :
      op->vtkMRMLMeasurement::GetMethodCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetLastComputationResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastComputationResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastComputationResult() :
      op->vtkMRMLMeasurement::GetLastComputationResult());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetLastComputationResultAsPrintableString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastComputationResultAsPrintableString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLastComputationResultAsPrintableString() :
      op->vtkMRMLMeasurement::GetLastComputationResultAsPrintableString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetValueWithUnitsAsPrintableString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueWithUnitsAsPrintableString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetValueWithUnitsAsPrintableString() :
      op->vtkMRMLMeasurement::GetValueWithUnitsAsPrintableString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_SetControlPointValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlPointValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->SetControlPointValues(temp0);
    }
    else
    {
      op->vtkMRMLMeasurement::SetControlPointValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetControlPointValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetControlPointValues() :
      op->vtkMRMLMeasurement::GetControlPointValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_SetMeshValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetMeshValue(temp0);
    }
    else
    {
      op->vtkMRMLMeasurement::SetMeshValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetMeshValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetMeshValue() :
      op->vtkMRMLMeasurement::GetMeshValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_SetInputMRMLNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputMRMLNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->SetInputMRMLNode(temp0);
    }
    else
    {
      op->vtkMRMLMeasurement::SetInputMRMLNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMeasurement_GetInputMRMLNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputMRMLNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMeasurement *op = static_cast<vtkMRMLMeasurement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetInputMRMLNode() :
      op->vtkMRMLMeasurement::GetInputMRMLNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMeasurement_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMeasurement_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMeasurement_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMeasurement_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLMeasurement\nC++: static vtkMRMLMeasurement *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMeasurement_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMeasurement\nC++: vtkMRMLMeasurement *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMeasurement_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMeasurement_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateInstance", PyvtkMRMLMeasurement_CreateInstance, METH_VARARGS,
   "CreateInstance(self) -> vtkMRMLMeasurement\nC++: virtual vtkMRMLMeasurement *CreateInstance()\n\nCreate a new instance of this measurement type. Only in C++: The\ncaller must take ownership of the returned object.\n"},
  {"Clear", PyvtkMRMLMeasurement_Clear, METH_VARARGS,
   "Clear(self) -> None\nC++: virtual void Clear()\n\nReset state of object. Removes all content.\n"},
  {"ClearValue", PyvtkMRMLMeasurement_ClearValue, METH_VARARGS,
   "ClearValue(self, computationResult:ComputationResult=...) -> None\nC++: virtual void ClearValue(\n    ComputationResult computationResult=NoChange)\n\nClear measured value Note: per-control-point values are not\ncleared\n"},
  {"Copy", PyvtkMRMLMeasurement_Copy, METH_VARARGS,
   "Copy(self, source:vtkMRMLMeasurement) -> None\nC++: virtual void Copy(vtkMRMLMeasurement *source)\n\nCopy one type into another (deep copy)\n"},
  {"Compute", PyvtkMRMLMeasurement_Compute, METH_VARARGS,
   "Compute(self) -> None\nC++: virtual void Compute()\n\nPerform calculation on InputMRMLNode and store the result\ninternally. The subclasses need to implement this function\n"},
  {"GetEnabled", PyvtkMRMLMeasurement_GetEnabled, METH_VARARGS,
   "GetEnabled(self) -> bool\nC++: virtual bool GetEnabled()\n\nEnabled\n"},
  {"SetEnabled", PyvtkMRMLMeasurement_SetEnabled, METH_VARARGS,
   "SetEnabled(self, enabled:bool) -> None\nC++: virtual void SetEnabled(bool enabled)\n\n"},
  {"EnabledOn", PyvtkMRMLMeasurement_EnabledOn, METH_VARARGS,
   "EnabledOn(self) -> None\nC++: virtual void EnabledOn()\n\n"},
  {"EnabledOff", PyvtkMRMLMeasurement_EnabledOff, METH_VARARGS,
   "EnabledOff(self) -> None\nC++: virtual void EnabledOff()\n\n"},
  {"GetName", PyvtkMRMLMeasurement_GetName, METH_VARARGS,
   "GetName(self) -> str\nC++: virtual std::string GetName()\n\nMeasurement name\n"},
  {"SetName", PyvtkMRMLMeasurement_SetName, METH_VARARGS,
   "SetName(self, _arg:str) -> None\nC++: virtual void SetName(std::string _arg)\n\n"},
  {"SetValue", PyvtkMRMLMeasurement_SetValue, METH_VARARGS,
   "SetValue(self, value:float, quantityName:str=...) -> None\nC++: void SetValue(double value, const char *quantityName=nullptr)\n\nSet value and units with a single modified event. If a value is\nset for a quantity that has a corresponding unit node in the\nscene then the value must be consistent with that definition. If\nquantityName is specified then Units, DisplayCoefficient,\nPrintFormat properties is updated from the corresponding unit\nnode's Suffix, DisplayCoefficient, and DisplayStringFormat If\nQuantityName is specified then a valid InputMRMLNode must be set,\ntoo, because the scene is accessed via the InputMRMLNode.\n"},
  {"GetValue", PyvtkMRMLMeasurement_GetValue, METH_VARARGS,
   "GetValue(self) -> float\nC++: virtual double GetValue()\n\nGet quantity value.\n"},
  {"SetDisplayValue", PyvtkMRMLMeasurement_SetDisplayValue, METH_VARARGS,
   "SetDisplayValue(self, value:float, units:str=...,\n    displayCoefficient:float=0.0) -> None\nC++: void SetDisplayValue(double value, const char *units=nullptr,\n     double displayCoefficient=0.0)\n\nSet display value and units with a single modified event. This\nmethod is useful if there is no unit node corresponding to this\nquantity in the scene. If a unit node is available for the\nmeasurement's quantity then it is important to set the correct\ndisplayCoefficient value for the chosen units. If units and/or\ndisplayCoefficient is not specified then the current Units and/or\nDisplayCoefficient values are used. The stored value is computed\nas displayValue / DisplayCoefficient.\n"},
  {"GetDisplayValue", PyvtkMRMLMeasurement_GetDisplayValue, METH_VARARGS,
   "GetDisplayValue(self) -> float\nC++: double GetDisplayValue()\n\nGet display value. It is computed using this formula:\nDisplayValue = Value * DisplayCoefficient.\n"},
  {"GetValueDefined", PyvtkMRMLMeasurement_GetValueDefined, METH_VARARGS,
   "GetValueDefined(self) -> bool\nC++: virtual bool GetValueDefined()\n\nValue defined flag (whether a computed value has been set or not)\n"},
  {"GetUnits", PyvtkMRMLMeasurement_GetUnits, METH_VARARGS,
   "GetUnits(self) -> str\nC++: virtual std::string GetUnits()\n\nMeasurement unit\n"},
  {"SetUnits", PyvtkMRMLMeasurement_SetUnits, METH_VARARGS,
   "SetUnits(self, units:str) -> None\nC++: virtual void SetUnits(std::string units)\n\n"},
  {"GetDisplayCoefficient", PyvtkMRMLMeasurement_GetDisplayCoefficient, METH_VARARGS,
   "GetDisplayCoefficient(self) -> float\nC++: virtual double GetDisplayCoefficient()\n\nThis multiplier will be applied to the value to compute display\nvalue: It is useful when the unit in the measurement differs from\nthe base unit (e.g., application's length unit is mm but volume\nis displayed as cm3 instead of mm3).\n"},
  {"SetDisplayCoefficient", PyvtkMRMLMeasurement_SetDisplayCoefficient, METH_VARARGS,
   "SetDisplayCoefficient(self, _arg:float) -> None\nC++: virtual void SetDisplayCoefficient(double _arg)\n\n"},
  {"GetDescription", PyvtkMRMLMeasurement_GetDescription, METH_VARARGS,
   "GetDescription(self) -> str\nC++: virtual std::string GetDescription()\n\nInformal description of the measurement\n"},
  {"SetDescription", PyvtkMRMLMeasurement_SetDescription, METH_VARARGS,
   "SetDescription(self, _arg:str) -> None\nC++: virtual void SetDescription(std::string _arg)\n\n"},
  {"GetPrintFormat", PyvtkMRMLMeasurement_GetPrintFormat, METH_VARARGS,
   "GetPrintFormat(self) -> str\nC++: virtual std::string GetPrintFormat()\n\nFormatting string for displaying measurement value and units\n"},
  {"SetPrintFormat", PyvtkMRMLMeasurement_SetPrintFormat, METH_VARARGS,
   "SetPrintFormat(self, format:str) -> None\nC++: virtual void SetPrintFormat(std::string format)\n\n"},
  {"SetQuantityCode", PyvtkMRMLMeasurement_SetQuantityCode, METH_VARARGS,
   "SetQuantityCode(self, entry:vtkCodedEntry) -> None\nC++: void SetQuantityCode(vtkCodedEntry *entry)\n\nCopy content of coded entry\n"},
  {"GetQuantityCode", PyvtkMRMLMeasurement_GetQuantityCode, METH_VARARGS,
   "GetQuantityCode(self) -> vtkCodedEntry\nC++: virtual vtkCodedEntry *GetQuantityCode()\n\n"},
  {"SetDerivationCode", PyvtkMRMLMeasurement_SetDerivationCode, METH_VARARGS,
   "SetDerivationCode(self, entry:vtkCodedEntry) -> None\nC++: void SetDerivationCode(vtkCodedEntry *entry)\n\nCopy content of coded entry\n"},
  {"GetDerivationCode", PyvtkMRMLMeasurement_GetDerivationCode, METH_VARARGS,
   "GetDerivationCode(self) -> vtkCodedEntry\nC++: virtual vtkCodedEntry *GetDerivationCode()\n\n"},
  {"SetUnitsCode", PyvtkMRMLMeasurement_SetUnitsCode, METH_VARARGS,
   "SetUnitsCode(self, entry:vtkCodedEntry) -> None\nC++: void SetUnitsCode(vtkCodedEntry *entry)\n\nCopy content of coded entry\n"},
  {"GetUnitsCode", PyvtkMRMLMeasurement_GetUnitsCode, METH_VARARGS,
   "GetUnitsCode(self) -> vtkCodedEntry\nC++: virtual vtkCodedEntry *GetUnitsCode()\n\n"},
  {"SetMethodCode", PyvtkMRMLMeasurement_SetMethodCode, METH_VARARGS,
   "SetMethodCode(self, entry:vtkCodedEntry) -> None\nC++: void SetMethodCode(vtkCodedEntry *entry)\n\nCopy content of coded entry\n"},
  {"GetMethodCode", PyvtkMRMLMeasurement_GetMethodCode, METH_VARARGS,
   "GetMethodCode(self) -> vtkCodedEntry\nC++: virtual vtkCodedEntry *GetMethodCode()\n\n"},
  {"GetLastComputationResult", PyvtkMRMLMeasurement_GetLastComputationResult, METH_VARARGS,
   "GetLastComputationResult(self) -> int\nC++: virtual int GetLastComputationResult()\n\nGet last computation result\n"},
  {"GetLastComputationResultAsPrintableString", PyvtkMRMLMeasurement_GetLastComputationResultAsPrintableString, METH_VARARGS,
   "GetLastComputationResultAsPrintableString(self) -> str\nC++: const char *GetLastComputationResultAsPrintableString()\n\nGet last computation result as human-readable string\n"},
  {"GetValueWithUnitsAsPrintableString", PyvtkMRMLMeasurement_GetValueWithUnitsAsPrintableString, METH_VARARGS,
   "GetValueWithUnitsAsPrintableString(self) -> str\nC++: std::string GetValueWithUnitsAsPrintableString()\n\nGet measurement value and units as a single human-readable\nstring.\n"},
  {"SetControlPointValues", PyvtkMRMLMeasurement_SetControlPointValues, METH_VARARGS,
   "SetControlPointValues(self, inputValues:vtkDoubleArray) -> None\nC++: void SetControlPointValues(vtkDoubleArray *inputValues)\n\nSet the per-control point measurement values\n"},
  {"GetControlPointValues", PyvtkMRMLMeasurement_GetControlPointValues, METH_VARARGS,
   "GetControlPointValues(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetControlPointValues()\n\n"},
  {"SetMeshValue", PyvtkMRMLMeasurement_SetMeshValue, METH_VARARGS,
   "SetMeshValue(self, meshValue:vtkPolyData) -> None\nC++: void SetMeshValue(vtkPolyData *meshValue)\n\nSet mesh that can be used to visualize to computed value. For\nexample, mesh for a calculated area value is the mesh that was\ngenerated to compute the surface area.\n"},
  {"GetMeshValue", PyvtkMRMLMeasurement_GetMeshValue, METH_VARARGS,
   "GetMeshValue(self) -> vtkPolyData\nC++: virtual vtkPolyData *GetMeshValue()\n\n"},
  {"SetInputMRMLNode", PyvtkMRMLMeasurement_SetInputMRMLNode, METH_VARARGS,
   "SetInputMRMLNode(self, node:vtkMRMLNode) -> None\nC++: void SetInputMRMLNode(vtkMRMLNode *node)\n\nSet input MRML node used for calculating the measurement \\sa\nExecute\n"},
  {"GetInputMRMLNode", PyvtkMRMLMeasurement_GetInputMRMLNode, METH_VARARGS,
   "GetInputMRMLNode(self) -> vtkMRMLNode\nC++: vtkMRMLNode *GetInputMRMLNode()\n\nGet input MRML node used for calculating the measurement \\sa\nExecute\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMeasurement_Doc =
  "vtkMRMLMeasurement - Class for storing well-defined measurement\nresults, using coded entries.\n\n"
  "Superclass: vtkObject\n\n"
  "This stores all important information about a measurement using\n"
  "standard coded entries. Measurement method, derivation, quantity\n"
  "value, units, etc, can be specified. This is a commonly used concept\n"
  "in DICOM structured reports.\n\n"
  "The measurement stores value, displayed value, and unit consistently\n"
  "with unit nodes.\n\n"
  "DisplayValue is defined in the unit specified in Unit property of the\n"
  "measurement. Value is defined in the base unit specified in the unit\n"
  "node in the scene. DisplayCoefficient specifies scaling between Value\n"
  "and DisplayValue:\n\n"
  "DisplayValue = Value * DisplayCoefficient.\n\n"
  "Example:\n\n"
  "In medical image computing, mm is commonly used as a length unit, but\n"
  "volume is most often specified in cc (cm3). To allow performing all\n"
  "computations without unit conversions (e.g., compute volume = width *\n"
  "height * depth) it is useful to specify volume unit as cm3 with\n"
  "volume display coefficient of 0.001:\n"
  "- Quantity=length, Unit=mm, DisplayCoefficient=1.0\n"
  "- Quantity=volume, Unit=cm3, DisplayCoefficient=0.001\n\n"
  "Measurements can then computed and stored like this:\n\n"
  "// box size in mm: width * height * depth\n"
  "diameterMeasurement->SetValue(sqrt(width*width+height*height+depth*dep\n"
  "th), \"length\"); volumeMeasurement->SetValue(width*height*depth,\n"
  "\"volume\"); \n\n"
  "\\sa vtkCodedEntry\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMeasurement_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLMeasurement", // tp_name
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
  PyvtkMRMLMeasurement_Doc, // tp_doc
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

PyObject *PyvtkMRMLMeasurement_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMeasurement_Type, PyvtkMRMLMeasurement_Methods,
    "vtkMRMLMeasurement",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLMeasurement_ComputationResult_Type);
  PyVTKEnum_Add(&PyvtkMRMLMeasurement_ComputationResult_Type, "vtkMRMLMeasurement.ComputationResult");

  o = (PyObject *)&PyvtkMRMLMeasurement_ComputationResult_Type;
  if (PyDict_SetItemString(d, "ComputationResult", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLMeasurement_Events_Type);
  PyVTKEnum_Add(&PyvtkMRMLMeasurement_Events_Type, "vtkMRMLMeasurement.Events");

  o = (PyObject *)&PyvtkMRMLMeasurement_Events_Type;
  if (PyDict_SetItemString(d, "Events", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkMRMLMeasurement::ComputationResult cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "NoChange", vtkMRMLMeasurement::NoChange },
        { "OK", vtkMRMLMeasurement::OK },
        { "InsufficientInput", vtkMRMLMeasurement::InsufficientInput },
        { "InternalError", vtkMRMLMeasurement::InternalError },
      };

    o = PyvtkMRMLMeasurement_ComputationResult_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyvtkMRMLMeasurement_Events_FromEnum(vtkMRMLMeasurement::InputDataModifiedEvent);
  if (o)
  {
    PyDict_SetItemString(d, "InputDataModifiedEvent", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLMeasurement(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLMeasurement_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMeasurement", o) != 0)
  {
    Py_DECREF(o);
  }

}

