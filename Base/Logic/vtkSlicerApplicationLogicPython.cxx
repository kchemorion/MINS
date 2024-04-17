// python wrapper for vtkSlicerApplicationLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerApplicationLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerApplicationLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerApplicationLogic_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerApplicationLogic_RequestEvents_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "SlicerBaseLogicPython.vtkSlicerApplicationLogic.RequestEvents", // tp_name
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
PyObject *PyvtkSlicerApplicationLogic_RequestEvents_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSlicerApplicationLogic_RequestEvents_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSlicerApplicationLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerApplicationLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerApplicationLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerApplicationLogic *tempr = vtkSlicerApplicationLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerApplicationLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerApplicationLogic::NewInstance());

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
PyvtkSlicerApplicationLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerApplicationLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerApplicationLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_SetMRMLSceneDataIO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMRMLSceneDataIO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  vtkMRMLRemoteIOLogic *temp1 = nullptr;
  vtkDataIOManagerLogic *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetVTKObject(temp1, "vtkMRMLRemoteIOLogic") &&
      ap.GetVTKObject(temp2, "vtkDataIOManagerLogic"))
  {
    if (ap.IsBound())
    {
      op->SetMRMLSceneDataIO(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSlicerApplicationLogic::SetMRMLSceneDataIO(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_CreateProcessingThread(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateProcessingThread");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateProcessingThread();
    }
    else
    {
      op->vtkSlicerApplicationLogic::CreateProcessingThread();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_TerminateProcessingThread(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TerminateProcessingThread");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TerminateProcessingThread();
    }
    else
    {
      op->vtkSlicerApplicationLogic::TerminateProcessingThread();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_ScheduleTask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScheduleTask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  vtkSlicerTask *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSlicerTask"))
  {
    int tempr = (ap.IsBound() ?
      op->ScheduleTask(temp0) :
      op->vtkSlicerApplicationLogic::ScheduleTask(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_RequestModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->RequestModified(temp0) :
      op->vtkSlicerApplicationLogic::RequestModified(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_RequestReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2 = false;
  int temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->RequestReadFile(temp0, temp1, temp2, temp3) :
      op->vtkSlicerApplicationLogic::RequestReadFile(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_RequestUpdateParentTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestUpdateParentTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->RequestUpdateParentTransform(temp0, temp1) :
      op->vtkSlicerApplicationLogic::RequestUpdateParentTransform(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_RequestUpdateSubjectHierarchyLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestUpdateSubjectHierarchyLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->RequestUpdateSubjectHierarchyLocation(temp0, temp1) :
      op->vtkSlicerApplicationLogic::RequestUpdateSubjectHierarchyLocation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_RequestAddNodeReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestAddNodeReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  std::string temp0;
  std::string temp1;
  std::string temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->RequestAddNodeReference(temp0, temp1, temp2) :
      op->vtkSlicerApplicationLogic::RequestAddNodeReference(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_GetReadDataQueueSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadDataQueueSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetReadDataQueueSize() :
      op->vtkSlicerApplicationLogic::GetReadDataQueueSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_RequestWriteData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestWriteData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->RequestWriteData(temp0, temp1) :
      op->vtkSlicerApplicationLogic::RequestWriteData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_RequestReadScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestReadScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  std::string temp0;
  std::vector<std::string> temp1(ap.GetArgSize(1));
  std::vector<std::string> temp2(ap.GetArgSize(2));
  int temp3 = false;
  int temp4 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()) &&
      ap.GetArray(temp2.data(), temp2.size()) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->RequestReadScene(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSlicerApplicationLogic::RequestReadScene(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp2.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp2.data(), temp2.size()));
      ap.SetContents(2, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_ProcessModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessModified();
    }
    else
    {
      op->vtkSlicerApplicationLogic::ProcessModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_ProcessReadData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessReadData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessReadData();
    }
    else
    {
      op->vtkSlicerApplicationLogic::ProcessReadData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_ProcessWriteData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessWriteData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessWriteData();
    }
    else
    {
      op->vtkSlicerApplicationLogic::ProcessWriteData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_SetTracingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTracingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTracingOn();
    }
    else
    {
      op->vtkSlicerApplicationLogic::SetTracingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_SetTracingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTracingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTracingOff();
    }
    else
    {
      op->vtkSlicerApplicationLogic::SetTracingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_IsEmbeddedModule(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsEmbeddedModule");

  std::string temp0;
  std::string temp1;
  std::string temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = vtkSlicerApplicationLogic::IsEmbeddedModule(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_IsPluginInstalled(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsPluginInstalled");

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkSlicerApplicationLogic::IsPluginInstalled(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_IsPluginBuiltIn(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsPluginBuiltIn");

  std::string temp0;
  std::string temp1;
  std::string temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = vtkSlicerApplicationLogic::IsPluginBuiltIn(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_GetModuleShareDirectory(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetModuleShareDirectory");

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = vtkSlicerApplicationLogic::GetModuleShareDirectory(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_GetModuleSlicerXYShareDirectory(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetModuleSlicerXYShareDirectory");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkSlicerApplicationLogic::GetModuleSlicerXYShareDirectory(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_GetModuleSlicerXYLibDirectory(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetModuleSlicerXYLibDirectory");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkSlicerApplicationLogic::GetModuleSlicerXYLibDirectory(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_GetUserInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerApplicationLogic *op = static_cast<vtkSlicerApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPersonInformation *tempr = (ap.IsBound() ?
      op->GetUserInformation() :
      op->vtkSlicerApplicationLogic::GetUserInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerApplicationLogic_RequestModifiedCallback(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RequestModifiedCallback");

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    vtkSlicerApplicationLogic::RequestModifiedCallback(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}

static PyMethodDef PyvtkSlicerApplicationLogic_Methods[] = {
  {"IsTypeOf", PyvtkSlicerApplicationLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerApplicationLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerApplicationLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerApplicationLogic\nC++: static vtkSlicerApplicationLogic *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerApplicationLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerApplicationLogic\nC++: vtkSlicerApplicationLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerApplicationLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerApplicationLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMRMLSceneDataIO", PyvtkSlicerApplicationLogic_SetMRMLSceneDataIO, METH_VARARGS,
   "SetMRMLSceneDataIO(self, scene:vtkMRMLScene,\n    remoteIOLogic:vtkMRMLRemoteIOLogic,\n    dataIOManagerLogic:vtkDataIOManagerLogic) -> None\nC++: void SetMRMLSceneDataIO(vtkMRMLScene *scene,\n    vtkMRMLRemoteIOLogic *remoteIOLogic,\n    vtkDataIOManagerLogic *dataIOManagerLogic)\n\nUpdate the data IO, local and remote, with the new scene For\nstand alone applications, follow the set up steps in\nqSlicerCoreApplicationPrivate::initDataIO() to set up the remote\nIO logic and data manager logic and then call this method to hook\nthem into the scene.\n\\sa qSlicerCoreApplicationPrivate::initDataIO()\n\\sa vtkMRMLRemoteIOLogic::AddDataIOToScene()\n"},
  {"CreateProcessingThread", PyvtkSlicerApplicationLogic_CreateProcessingThread, METH_VARARGS,
   "CreateProcessingThread(self) -> None\nC++: void CreateProcessingThread()\n\nCreate a thread for processing\n"},
  {"TerminateProcessingThread", PyvtkSlicerApplicationLogic_TerminateProcessingThread, METH_VARARGS,
   "TerminateProcessingThread(self) -> None\nC++: void TerminateProcessingThread()\n\nShutdown the processing thread\n"},
  {"ScheduleTask", PyvtkSlicerApplicationLogic_ScheduleTask, METH_VARARGS,
   "ScheduleTask(self, __a:vtkSlicerTask) -> int\nC++: int ScheduleTask(vtkSlicerTask *)\n\nSchedule a task to run in the processing thread. Returns true if\ntask was successfully scheduled. ScheduleTask() is called from\nthe main thread to run something in the processing thread.\n"},
  {"RequestModified", PyvtkSlicerApplicationLogic_RequestModified, METH_VARARGS,
   "RequestModified(self, __a:vtkObject) -> int\nC++: vtkMTimeType RequestModified(vtkObject *)\n\nRequest a Modified call on an object.  This method allows a\nprocessing thread to request a Modified call on an object to be\nperformed in the main thread.  This allows the call to Modified\nto trigger GUI changes. RequestModified() is called from the\nprocessing thread to modify an object in the main thread. Return\nthe request UID (monotonically increasing) of the request or 0 if\nthe request failed to be registered.\\todo Fire\nRequestProcessedEvent when processing Modified requests.\n\\sa RequestReadData(), RequestWriteData()\n"},
  {"RequestReadFile", PyvtkSlicerApplicationLogic_RequestReadFile, METH_VARARGS,
   "RequestReadFile(self, refNode:str, filename:str,\n    displayData:int=False, deleteFile:int=False) -> int\nC++: vtkMTimeType RequestReadFile(const char *refNode,\n    const char *filename, int displayData=false,\n    int deleteFile=false)\n\nRequest that data be read from a file and set it on the\nreferenced node.  The request will be sent to the main thread\nwhich will be responsible for reading the data, setting it on the\nreferenced node, and updating the display. Return the request UID\n(monotonically increasing) of the request or 0 if the request\nfailed to be registered. When the request is processed,\nRequestProcessedEvent is invoked with the request UID as\ncalldata.\n\\sa RequestReadScene(), RequestWriteData(), RequestModified()\n"},
  {"RequestUpdateParentTransform", PyvtkSlicerApplicationLogic_RequestUpdateParentTransform, METH_VARARGS,
   "RequestUpdateParentTransform(self, updatedNode:str,\n    parentTransformNode:str) -> int\nC++: vtkMTimeType RequestUpdateParentTransform(\n    const std::string &updatedNode,\n    const std::string &parentTransformNode)\n\nRequest setting of parent transform. The request will executed on\nthe main thread. Return the request UID (monotonically\nincreasing) of the request or 0 if the request failed to be\nregistered. When the request is processed, RequestProcessedEvent\nis invoked with the request UID as calldata.\n\\sa RequestReadScene(), RequestWriteData(), RequestModified()\n"},
  {"RequestUpdateSubjectHierarchyLocation", PyvtkSlicerApplicationLogic_RequestUpdateSubjectHierarchyLocation, METH_VARARGS,
   "RequestUpdateSubjectHierarchyLocation(self, updatedNode:str,\n    siblingNode:str) -> int\nC++: vtkMTimeType RequestUpdateSubjectHierarchyLocation(\n    const std::string &updatedNode,\n    const std::string &siblingNode)\n\nRequest setting of subject hierarchy location (will have the same\nparent and same level as sibling node). The request will executed\non the main thread. Return the request UID (monotonically\nincreasing) of the request or 0 if the request failed to be\nregistered. When the request is processed, RequestProcessedEvent\nis invoked with the request UID as calldata.\n\\sa RequestReadScene(), RequestWriteData(), RequestModified()\n"},
  {"RequestAddNodeReference", PyvtkSlicerApplicationLogic_RequestAddNodeReference, METH_VARARGS,
   "RequestAddNodeReference(self, referencingNode:str,\n    referencedNode:str, role:str) -> int\nC++: vtkMTimeType RequestAddNodeReference(\n    const std::string &referencingNode,\n    const std::string &referencedNode, const std::string &role)\n\nRequest adding a node reference The request will executed on the\nmain thread. Return the request UID (monotonically increasing) of\nthe request or 0 if the request failed to be registered. When the\nrequest is processed, RequestProcessedEvent is invoked with the\nrequest UID as calldata.\n\\sa RequestReadScene(), RequestWriteData(), RequestModified()\n"},
  {"GetReadDataQueueSize", PyvtkSlicerApplicationLogic_GetReadDataQueueSize, METH_VARARGS,
   "GetReadDataQueueSize(self) -> int\nC++: unsigned int GetReadDataQueueSize()\n\nReturn the number of items that need to be read from the queue\n(this allows code that invokes command line modules to know when\nmultiple items are being returned and have all been returned).\n"},
  {"RequestWriteData", PyvtkSlicerApplicationLogic_RequestWriteData, METH_VARARGS,
   "RequestWriteData(self, refNode:str, filename:str) -> int\nC++: vtkMTimeType RequestWriteData(const char *refNode,\n    const char *filename)\n\nRequest that data be written from a file to a remote destination.\nReturn the request UID (monotonically increasing) of the request\nor 0 if the request failed to be registered.  When the request is\nprocessed, RequestProcessedEvent is invoked with the request UID\nas calldata.\n\\sa RequestReadData(), RequestReadScene()\n"},
  {"RequestReadScene", PyvtkSlicerApplicationLogic_RequestReadScene, METH_VARARGS,
   "RequestReadScene(self, filename:str, targetIDs:[str, ...],\n    sourceIDs:[str, ...], displayData:int=False,\n    deleteFile:int=False) -> int\nC++: vtkMTimeType RequestReadScene(const std::string &filename,\n    std::vector<std::string> &targetIDs,\n    std::vector<std::string> &sourceIDs, int displayData=false,\n    int deleteFile=false)\n\nRequest that a scene be read from a file. Mappings of node IDs in\nthe file (sourceIDs) to node IDs in the main scene (targetIDs)\ncan be specified. Only nodes listed in sourceIDs are loaded back\ninto the main scene.  Hierarchical nodes will be handled\nspecially, in that only the top node needs to be listed in the\nsourceIds. Return the request UID (monotonically increasing) of\nthe request or 0 if the request failed to be registered. When the\nrequest is processed, RequestProcessedEvent is invoked with the\nrequest UID as calldata.\n\\sa RequestReadData(), RequestWriteData()\n"},
  {"ProcessModified", PyvtkSlicerApplicationLogic_ProcessModified, METH_VARARGS,
   "ProcessModified(self) -> None\nC++: void ProcessModified()\n\nProcess a request on the Modified queue.  This method is called\nin the main thread of the application because calls to Modified()\ncan cause an update to the GUI. (Method needs to be public to fit\nin the event callback chain.)\n"},
  {"ProcessReadData", PyvtkSlicerApplicationLogic_ProcessReadData, METH_VARARGS,
   "ProcessReadData(self) -> None\nC++: void ProcessReadData()\n\nProcess a request to read data and set it on a referenced node.\nThis method is called in the main thread of the application\nbecause calls to load data will cause a Modified() on a node\nwhich can force a render.\n"},
  {"ProcessWriteData", PyvtkSlicerApplicationLogic_ProcessWriteData, METH_VARARGS,
   "ProcessWriteData(self) -> None\nC++: void ProcessWriteData()\n\nProcess a request to write data from a referenced node.\n"},
  {"SetTracingOn", PyvtkSlicerApplicationLogic_SetTracingOn, METH_VARARGS,
   "SetTracingOn(self) -> None\nC++: void SetTracingOn()\n\nThese routings act as place holders so that test scripts can turn\non and off tracing.  These are just hooks for use with external\ntracing tool (such as AQTime)\n"},
  {"SetTracingOff", PyvtkSlicerApplicationLogic_SetTracingOff, METH_VARARGS,
   "SetTracingOff(self) -> None\nC++: void SetTracingOff()\n\n"},
  {"IsEmbeddedModule", PyvtkSlicerApplicationLogic_IsEmbeddedModule, METH_VARARGS,
   "IsEmbeddedModule(filePath:str, applicationHomeDir:str,\n    slicerRevision:str) -> bool\nC++: static bool IsEmbeddedModule(const std::string &filePath,\n    const std::string &applicationHomeDir,\n    const std::string &slicerRevision)\n\nReturn True if filePath is a descendant of applicationHomeDir.\n\note On macOS extensions are installed in the\n\"<Slicer_EXTENSIONS_DIRBASENAME>-<slicerRevision>\" folder being a\nsub directory of the application dir, an extra test is performed\nto make sure the tested filePath doesn't belong to that\n\"<Slicer_EXTENSIONS_DIRBASENAME>-<slicerRevision>\" folder. If\nthis is the case, False will be returned.\n"},
  {"IsPluginInstalled", PyvtkSlicerApplicationLogic_IsPluginInstalled, METH_VARARGS,
   "IsPluginInstalled(filePath:str, applicationHomeDir:str) -> bool\nC++: static bool IsPluginInstalled(const std::string &filePath,\n    const std::string &applicationHomeDir)\n\nReturn true if the plugin identified with its filePath is loaded\nfrom an install tree.\n\\warning Since internally the function looks for the existence of\nCMakeCache.txt, it will\nreturn an incorrect result if the plugin is installed in the\nbuild tree of an other project.\n"},
  {"IsPluginBuiltIn", PyvtkSlicerApplicationLogic_IsPluginBuiltIn, METH_VARARGS,
   "IsPluginBuiltIn(filePath:str, applicationHomeDir:str,\n    slicerRevision:str) -> bool\nC++: static bool IsPluginBuiltIn(const std::string &filePath,\n    const std::string &applicationHomeDir,\n    const std::string &slicerRevision)\n\nReturn true if the plugin identified with its filePath is a\nbuilt-in Slicer module.\n"},
  {"GetModuleShareDirectory", PyvtkSlicerApplicationLogic_GetModuleShareDirectory, METH_VARARGS,
   "GetModuleShareDirectory(moduleName:str, filePath:str) -> str\nC++: static std::string GetModuleShareDirectory(\n    const std::string &moduleName, const std::string &filePath)\n\nGet share directory associated with moduleName located in\nfilePath\n"},
  {"GetModuleSlicerXYShareDirectory", PyvtkSlicerApplicationLogic_GetModuleSlicerXYShareDirectory, METH_VARARGS,
   "GetModuleSlicerXYShareDirectory(filePath:str) -> str\nC++: static std::string GetModuleSlicerXYShareDirectory(\n    const std::string &filePath)\n\nGet Slicer-X.Y share directory associated with module located in\nfilePath\n"},
  {"GetModuleSlicerXYLibDirectory", PyvtkSlicerApplicationLogic_GetModuleSlicerXYLibDirectory, METH_VARARGS,
   "GetModuleSlicerXYLibDirectory(filePath:str) -> str\nC++: static std::string GetModuleSlicerXYLibDirectory(\n    const std::string &filePath)\n\nGet Slicer-X.Y lib directory associated with module located in\nfilePath\n"},
  {"GetUserInformation", PyvtkSlicerApplicationLogic_GetUserInformation, METH_VARARGS,
   "GetUserInformation(self) -> vtkPersonInformation\nC++: vtkPersonInformation *GetUserInformation()\n\nGet information about the current user (name, login, email,\norganization, etc.) Values are allowed to be modified.\n"},
  {"RequestModifiedCallback", PyvtkSlicerApplicationLogic_RequestModifiedCallback, METH_VARARGS,
   "RequestModifiedCallback(caller:vtkObject, eid:int,\n    clientData:Pointer, callData:Pointer) -> None\nC++: static void RequestModifiedCallback(vtkObject *caller,\n    unsigned long eid, void *clientData, void *callData)\n\nCallback function to request invoking a modified event on the\nmain thread. This function may be called from any thread.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerApplicationLogic_Doc =
  "vtkSlicerApplicationLogic - no description provided.\n\n"
  "Superclass: vtkMRMLApplicationLogic\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerApplicationLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "SlicerBaseLogicPython.vtkSlicerApplicationLogic", // tp_name
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
  PyvtkSlicerApplicationLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerApplicationLogic_StaticNew()
{
  return vtkSlicerApplicationLogic::New();
}

PyObject *PyvtkSlicerApplicationLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerApplicationLogic_Type, PyvtkSlicerApplicationLogic_Methods,
    "vtkSlicerApplicationLogic",
 &PyvtkSlicerApplicationLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLApplicationLogic");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSlicerApplicationLogic_RequestEvents_Type);
  PyVTKEnum_Add(&PyvtkSlicerApplicationLogic_RequestEvents_Type, "vtkSlicerApplicationLogic.RequestEvents");

  o = (PyObject *)&PyvtkSlicerApplicationLogic_RequestEvents_Type;
  if (PyDict_SetItemString(d, "RequestEvents", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkSlicerApplicationLogic::RequestEvents cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "RequestModifiedEvent", vtkSlicerApplicationLogic::RequestModifiedEvent },
        { "RequestReadDataEvent", vtkSlicerApplicationLogic::RequestReadDataEvent },
        { "RequestWriteDataEvent", vtkSlicerApplicationLogic::RequestWriteDataEvent },
        { "RequestProcessedEvent", vtkSlicerApplicationLogic::RequestProcessedEvent },
      };

    o = PyvtkSlicerApplicationLogic_RequestEvents_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerApplicationLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerApplicationLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerApplicationLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

