// python wrapper for vtkSystemInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSystemInformation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSystemInformation(PyObject *dict); }
extern "C" { PyObject *PyvtkSystemInformation_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSystemInformation_RenderingCapabilitiesMask_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "SlicerBaseLogicPython.vtkSystemInformation.RenderingCapabilitiesMask", // tp_name
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
PyObject *PyvtkSystemInformation_RenderingCapabilitiesMask_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSystemInformation_RenderingCapabilitiesMask_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSystemInformation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSystemInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSystemInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSystemInformation *tempr = vtkSystemInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSystemInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSystemInformation::NewInstance());

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
PyvtkSystemInformation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSystemInformation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSystemInformation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetVendorString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVendorString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVendorString() :
      op->vtkSystemInformation::GetVendorString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetVendorID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVendorID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVendorID() :
      op->vtkSystemInformation::GetVendorID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetTypeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTypeID() :
      op->vtkSystemInformation::GetTypeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetFamilyID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFamilyID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFamilyID() :
      op->vtkSystemInformation::GetFamilyID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetModelName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetModelName() :
      op->vtkSystemInformation::GetModelName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetModelID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetModelID() :
      op->vtkSystemInformation::GetModelID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetSteppingCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSteppingCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSteppingCode() :
      op->vtkSystemInformation::GetSteppingCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetExtendedProcessorName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtendedProcessorName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetExtendedProcessorName() :
      op->vtkSystemInformation::GetExtendedProcessorName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetProcessorSerialNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessorSerialNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetProcessorSerialNumber() :
      op->vtkSystemInformation::GetProcessorSerialNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetProcessorCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessorCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessorCacheSize() :
      op->vtkSystemInformation::GetProcessorCacheSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetLogicalProcessorsPerPhysical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogicalProcessorsPerPhysical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLogicalProcessorsPerPhysical() :
      op->vtkSystemInformation::GetLogicalProcessorsPerPhysical());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetProcessorClockFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessorClockFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetProcessorClockFrequency() :
      op->vtkSystemInformation::GetProcessorClockFrequency());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetProcessorAPICID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessorAPICID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessorAPICID() :
      op->vtkSystemInformation::GetProcessorAPICID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetProcessorCacheXSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessorCacheXSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessorCacheXSize(temp0) :
      op->vtkSystemInformation::GetProcessorCacheXSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_DoesCPUSupportFeature(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoesCPUSupportFeature");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->DoesCPUSupportFeature(temp0) :
      op->vtkSystemInformation::DoesCPUSupportFeature(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetOSName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOSName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOSName() :
      op->vtkSystemInformation::GetOSName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetHostname(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHostname");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetHostname() :
      op->vtkSystemInformation::GetHostname());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetOSRelease(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOSRelease");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOSRelease() :
      op->vtkSystemInformation::GetOSRelease());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetOSVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOSVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOSVersion() :
      op->vtkSystemInformation::GetOSVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetOSPlatform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOSPlatform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOSPlatform() :
      op->vtkSystemInformation::GetOSPlatform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_Is64Bits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Is64Bits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Is64Bits() :
      op->vtkSystemInformation::Is64Bits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetNumberOfLogicalCPU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLogicalCPU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfLogicalCPU() :
      op->vtkSystemInformation::GetNumberOfLogicalCPU());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetNumberOfPhysicalCPU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPhysicalCPU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfPhysicalCPU() :
      op->vtkSystemInformation::GetNumberOfPhysicalCPU());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_DoesCPUSupportCPUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoesCPUSupportCPUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->DoesCPUSupportCPUID() :
      op->vtkSystemInformation::DoesCPUSupportCPUID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetTotalVirtualMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalVirtualMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTotalVirtualMemory() :
      op->vtkSystemInformation::GetTotalVirtualMemory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetAvailableVirtualMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAvailableVirtualMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetAvailableVirtualMemory() :
      op->vtkSystemInformation::GetAvailableVirtualMemory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetTotalPhysicalMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalPhysicalMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTotalPhysicalMemory() :
      op->vtkSystemInformation::GetTotalPhysicalMemory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetAvailablePhysicalMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAvailablePhysicalMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetAvailablePhysicalMemory() :
      op->vtkSystemInformation::GetAvailablePhysicalMemory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_RunCPUCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RunCPUCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RunCPUCheck();
    }
    else
    {
      op->vtkSystemInformation::RunCPUCheck();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_RunOSCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RunOSCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RunOSCheck();
    }
    else
    {
      op->vtkSystemInformation::RunOSCheck();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_RunMemoryCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RunMemoryCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RunMemoryCheck();
    }
    else
    {
      op->vtkSystemInformation::RunMemoryCheck();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_RunRenderingCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RunRenderingCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RunRenderingCheck();
    }
    else
    {
      op->vtkSystemInformation::RunRenderingCheck();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetRenderingCapabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderingCapabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetRenderingCapabilities() :
      op->vtkSystemInformation::GetRenderingCapabilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSystemInformation_GetRenderingCapabilitiesDetails(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderingCapabilitiesDetails");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSystemInformation *op = static_cast<vtkSystemInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetRenderingCapabilitiesDetails() :
      op->vtkSystemInformation::GetRenderingCapabilitiesDetails());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSystemInformation_Methods[] = {
  {"IsTypeOf", PyvtkSystemInformation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSystemInformation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSystemInformation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSystemInformation\nC++: static vtkSystemInformation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSystemInformation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSystemInformation\nC++: vtkSystemInformation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSystemInformation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSystemInformation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetVendorString", PyvtkSystemInformation_GetVendorString, METH_VARARGS,
   "GetVendorString(self) -> str\nC++: const char *GetVendorString()\n\n"},
  {"GetVendorID", PyvtkSystemInformation_GetVendorID, METH_VARARGS,
   "GetVendorID(self) -> str\nC++: const char *GetVendorID()\n\n"},
  {"GetTypeID", PyvtkSystemInformation_GetTypeID, METH_VARARGS,
   "GetTypeID(self) -> str\nC++: const char *GetTypeID()\n\n"},
  {"GetFamilyID", PyvtkSystemInformation_GetFamilyID, METH_VARARGS,
   "GetFamilyID(self) -> str\nC++: const char *GetFamilyID()\n\n"},
  {"GetModelName", PyvtkSystemInformation_GetModelName, METH_VARARGS,
   "GetModelName(self) -> str\nC++: const char *GetModelName()\n\n"},
  {"GetModelID", PyvtkSystemInformation_GetModelID, METH_VARARGS,
   "GetModelID(self) -> str\nC++: const char *GetModelID()\n\n"},
  {"GetSteppingCode", PyvtkSystemInformation_GetSteppingCode, METH_VARARGS,
   "GetSteppingCode(self) -> str\nC++: const char *GetSteppingCode()\n\n"},
  {"GetExtendedProcessorName", PyvtkSystemInformation_GetExtendedProcessorName, METH_VARARGS,
   "GetExtendedProcessorName(self) -> str\nC++: const char *GetExtendedProcessorName()\n\n"},
  {"GetProcessorSerialNumber", PyvtkSystemInformation_GetProcessorSerialNumber, METH_VARARGS,
   "GetProcessorSerialNumber(self) -> str\nC++: const char *GetProcessorSerialNumber()\n\n"},
  {"GetProcessorCacheSize", PyvtkSystemInformation_GetProcessorCacheSize, METH_VARARGS,
   "GetProcessorCacheSize(self) -> int\nC++: int GetProcessorCacheSize()\n\n"},
  {"GetLogicalProcessorsPerPhysical", PyvtkSystemInformation_GetLogicalProcessorsPerPhysical, METH_VARARGS,
   "GetLogicalProcessorsPerPhysical(self) -> int\nC++: int GetLogicalProcessorsPerPhysical()\n\n"},
  {"GetProcessorClockFrequency", PyvtkSystemInformation_GetProcessorClockFrequency, METH_VARARGS,
   "GetProcessorClockFrequency(self) -> float\nC++: float GetProcessorClockFrequency()\n\n"},
  {"GetProcessorAPICID", PyvtkSystemInformation_GetProcessorAPICID, METH_VARARGS,
   "GetProcessorAPICID(self) -> int\nC++: int GetProcessorAPICID()\n\n"},
  {"GetProcessorCacheXSize", PyvtkSystemInformation_GetProcessorCacheXSize, METH_VARARGS,
   "GetProcessorCacheXSize(self, __a:int) -> int\nC++: int GetProcessorCacheXSize(long int)\n\n"},
  {"DoesCPUSupportFeature", PyvtkSystemInformation_DoesCPUSupportFeature, METH_VARARGS,
   "DoesCPUSupportFeature(self, __a:int) -> int\nC++: int DoesCPUSupportFeature(long int)\n\n"},
  {"GetOSName", PyvtkSystemInformation_GetOSName, METH_VARARGS,
   "GetOSName(self) -> str\nC++: const char *GetOSName()\n\n"},
  {"GetHostname", PyvtkSystemInformation_GetHostname, METH_VARARGS,
   "GetHostname(self) -> str\nC++: const char *GetHostname()\n\n"},
  {"GetOSRelease", PyvtkSystemInformation_GetOSRelease, METH_VARARGS,
   "GetOSRelease(self) -> str\nC++: const char *GetOSRelease()\n\n"},
  {"GetOSVersion", PyvtkSystemInformation_GetOSVersion, METH_VARARGS,
   "GetOSVersion(self) -> str\nC++: const char *GetOSVersion()\n\n"},
  {"GetOSPlatform", PyvtkSystemInformation_GetOSPlatform, METH_VARARGS,
   "GetOSPlatform(self) -> str\nC++: const char *GetOSPlatform()\n\n"},
  {"Is64Bits", PyvtkSystemInformation_Is64Bits, METH_VARARGS,
   "Is64Bits(self) -> int\nC++: int Is64Bits()\n\n"},
  {"GetNumberOfLogicalCPU", PyvtkSystemInformation_GetNumberOfLogicalCPU, METH_VARARGS,
   "GetNumberOfLogicalCPU(self) -> int\nC++: unsigned int GetNumberOfLogicalCPU()\n\n"},
  {"GetNumberOfPhysicalCPU", PyvtkSystemInformation_GetNumberOfPhysicalCPU, METH_VARARGS,
   "GetNumberOfPhysicalCPU(self) -> int\nC++: unsigned int GetNumberOfPhysicalCPU()\n\n"},
  {"DoesCPUSupportCPUID", PyvtkSystemInformation_DoesCPUSupportCPUID, METH_VARARGS,
   "DoesCPUSupportCPUID(self) -> int\nC++: int DoesCPUSupportCPUID()\n\n"},
  {"GetTotalVirtualMemory", PyvtkSystemInformation_GetTotalVirtualMemory, METH_VARARGS,
   "GetTotalVirtualMemory(self) -> int\nC++: unsigned long GetTotalVirtualMemory()\n\n"},
  {"GetAvailableVirtualMemory", PyvtkSystemInformation_GetAvailableVirtualMemory, METH_VARARGS,
   "GetAvailableVirtualMemory(self) -> int\nC++: unsigned long GetAvailableVirtualMemory()\n\n"},
  {"GetTotalPhysicalMemory", PyvtkSystemInformation_GetTotalPhysicalMemory, METH_VARARGS,
   "GetTotalPhysicalMemory(self) -> int\nC++: unsigned long GetTotalPhysicalMemory()\n\n"},
  {"GetAvailablePhysicalMemory", PyvtkSystemInformation_GetAvailablePhysicalMemory, METH_VARARGS,
   "GetAvailablePhysicalMemory(self) -> int\nC++: unsigned long GetAvailablePhysicalMemory()\n\n"},
  {"RunCPUCheck", PyvtkSystemInformation_RunCPUCheck, METH_VARARGS,
   "RunCPUCheck(self) -> None\nC++: void RunCPUCheck()\n\n"},
  {"RunOSCheck", PyvtkSystemInformation_RunOSCheck, METH_VARARGS,
   "RunOSCheck(self) -> None\nC++: void RunOSCheck()\n\n"},
  {"RunMemoryCheck", PyvtkSystemInformation_RunMemoryCheck, METH_VARARGS,
   "RunMemoryCheck(self) -> None\nC++: void RunMemoryCheck()\n\n"},
  {"RunRenderingCheck", PyvtkSystemInformation_RunRenderingCheck, METH_VARARGS,
   "RunRenderingCheck(self) -> None\nC++: void RunRenderingCheck()\n\n"},
  {"GetRenderingCapabilities", PyvtkSystemInformation_GetRenderingCapabilities, METH_VARARGS,
   "GetRenderingCapabilities(self) -> int\nC++: virtual vtkTypeUInt32 GetRenderingCapabilities()\n\nReturns rendering capabilities as bitfield of\nRenderingCapabilitiesMask values. Value is set by calling\nRunRenderingCheck().\n"},
  {"GetRenderingCapabilitiesDetails", PyvtkSystemInformation_GetRenderingCapabilitiesDetails, METH_VARARGS,
   "GetRenderingCapabilitiesDetails(self) -> str\nC++: virtual std::string GetRenderingCapabilitiesDetails()\n\nReturns string describing rendering capabilities. Value is set by\ncalling RunRenderingCheck().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSystemInformation_Doc =
  "vtkSystemInformation - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSystemInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "SlicerBaseLogicPython.vtkSystemInformation", // tp_name
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
  PyvtkSystemInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSystemInformation_StaticNew()
{
  return vtkSystemInformation::New();
}

PyObject *PyvtkSystemInformation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSystemInformation_Type, PyvtkSystemInformation_Methods,
    "vtkSystemInformation",
 &PyvtkSystemInformation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSystemInformation_RenderingCapabilitiesMask_Type);
  PyVTKEnum_Add(&PyvtkSystemInformation_RenderingCapabilitiesMask_Type, "vtkSystemInformation.RenderingCapabilitiesMask");

  o = (PyObject *)&PyvtkSystemInformation_RenderingCapabilitiesMask_Type;
  if (PyDict_SetItemString(d, "RenderingCapabilitiesMask", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkSystemInformation::RenderingCapabilitiesMask cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "NONE", vtkSystemInformation::NONE },
        { "ONSCREEN_RENDERING", vtkSystemInformation::ONSCREEN_RENDERING },
        { "HEADLESS_RENDERING_USES_OSMESA", vtkSystemInformation::HEADLESS_RENDERING_USES_OSMESA },
        { "HEADLESS_RENDERING_USES_EGL", vtkSystemInformation::HEADLESS_RENDERING_USES_EGL },
        { "HEADLESS_RENDERING", vtkSystemInformation::HEADLESS_RENDERING },
        { "RENDERING", vtkSystemInformation::RENDERING },
        { "OPENGL", vtkSystemInformation::OPENGL },
      };

    o = PyvtkSystemInformation_RenderingCapabilitiesMask_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSystemInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSystemInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSystemInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

