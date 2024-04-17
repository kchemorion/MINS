// python wrapper for vtkEventBroker
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkEventBroker.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEventBroker(PyObject *dict); }
extern "C" { PyObject *PyvtkEventBroker_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEventBroker_EventMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkEventBroker.EventMode", // tp_name
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
PyObject *PyvtkEventBroker_EventMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkEventBroker_EventMode_Type, static_cast<int>(val));
}


static PyObject *
PyvtkEventBroker_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEventBroker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEventBroker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEventBroker *tempr = vtkEventBroker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEventBroker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEventBroker::NewInstance());

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
PyvtkEventBroker_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEventBroker::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEventBroker::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GetInstance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkEventBroker *tempr = vtkEventBroker::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_Callback(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Callback");

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
    vtkEventBroker::Callback(temp0, temp1, temp2, temp3);

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


static PyObject *
PyvtkEventBroker_AddObservation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddObservation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  vtkObject *temp2 = nullptr;
  vtkCallbackCommand *temp3 = nullptr;
  float temp4 = 0.0f;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkObject") &&
      ap.GetVTKObject(temp3, "vtkCallbackCommand") &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    vtkObservation *tempr = (ap.IsBound() ?
      op->AddObservation(temp0, temp1, temp2, temp3, temp4) :
      op->vtkEventBroker::AddObservation(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkEventBroker_AddObservation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddObservation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkObject *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkObservation *tempr = (ap.IsBound() ?
      op->AddObservation(temp0, temp1, temp2) :
      op->vtkEventBroker::AddObservation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkEventBroker_AddObservation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
    case 5:
      return PyvtkEventBroker_AddObservation_s1(self, args);
    case 3:
      return PyvtkEventBroker_AddObservation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddObservation");
  return nullptr;
}


static PyObject *
PyvtkEventBroker_RemoveObservation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObservation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkObservation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObservation"))
  {
    if (ap.IsBound())
    {
      op->RemoveObservation(temp0);
    }
    else
    {
      op->vtkEventBroker::RemoveObservation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_RemoveObservations_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObservations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveObservations(temp0);
    }
    else
    {
      op->vtkEventBroker::RemoveObservations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEventBroker_RemoveObservations_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObservations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkObject *temp0 = nullptr;
  vtkObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetVTKObject(temp1, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveObservations(temp0, temp1);
    }
    else
    {
      op->vtkEventBroker::RemoveObservations(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEventBroker_RemoveObservations_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObservations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  vtkObject *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveObservations(temp0, temp1, temp2);
    }
    else
    {
      op->vtkEventBroker::RemoveObservations(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEventBroker_RemoveObservations_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObservations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  vtkObject *temp2 = nullptr;
  vtkCallbackCommand *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkObject") &&
      ap.GetVTKObject(temp3, "vtkCallbackCommand"))
  {
    if (ap.IsBound())
    {
      op->RemoveObservations(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkEventBroker::RemoveObservations(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEventBroker_RemoveObservations(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkEventBroker_RemoveObservations_s1(self, args);
    case 2:
      return PyvtkEventBroker_RemoveObservations_s2(self, args);
    case 3:
      return PyvtkEventBroker_RemoveObservations_s3(self, args);
    case 4:
      return PyvtkEventBroker_RemoveObservations_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveObservations");
  return nullptr;
}


static PyObject *
PyvtkEventBroker_RemoveObservationsForSubjectByTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObservationsForSubjectByTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RemoveObservationsForSubjectByTag(temp0, temp1);
    }
    else
    {
      op->vtkEventBroker::RemoveObservationsForSubjectByTag(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GetObservationExist(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObservationExist");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1 = 0;
  vtkObject *temp2 = nullptr;
  vtkCallbackCommand *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 4) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkObject")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkCallbackCommand")))
  {
    bool tempr = (ap.IsBound() ?
      op->GetObservationExist(temp0, temp1, temp2, temp3) :
      op->vtkEventBroker::GetObservationExist(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GetObservationsForSubject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObservationsForSubject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetObservationsForSubject(temp0) :
      op->vtkEventBroker::GetObservationsForSubject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GetObservationsForObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObservationsForObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetObservationsForObserver(temp0) :
      op->vtkEventBroker::GetObservationsForObserver(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GetObservationsForCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObservationsForCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkCallbackCommand *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCallbackCommand"))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetObservationsForCallback(temp0) :
      op->vtkEventBroker::GetObservationsForCallback(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GetNumberOfObservations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfObservations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfObservations() :
      op->vtkEventBroker::GetNumberOfObservations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GetNthObservation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthObservation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObservation *tempr = (ap.IsBound() ?
      op->GetNthObservation(temp0) :
      op->vtkEventBroker::GetNthObservation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_ProcessEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkObservation *temp0 = nullptr;
  vtkObject *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkObservation") &&
      ap.GetVTKObject(temp1, "vtkObject") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->ProcessEvent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkEventBroker::ProcessEvent(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}


static PyObject *
PyvtkEventBroker_EventLoggingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EventLoggingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EventLoggingOn();
    }
    else
    {
      op->vtkEventBroker::EventLoggingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_EventLoggingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EventLoggingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EventLoggingOff();
    }
    else
    {
      op->vtkEventBroker::EventLoggingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_SetEventLogging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventLogging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEventLogging(temp0);
    }
    else
    {
      op->vtkEventBroker::SetEventLogging(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GetEventLogging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventLogging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEventLogging() :
      op->vtkEventBroker::GetEventLogging());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_SetEventNestingLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventNestingLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEventNestingLevel(temp0);
    }
    else
    {
      op->vtkEventBroker::SetEventNestingLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GetEventNestingLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventNestingLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEventNestingLevel() :
      op->vtkEventBroker::GetEventNestingLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_SetLogFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLogFileName(temp0);
    }
    else
    {
      op->vtkEventBroker::SetLogFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GetLogFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLogFileName() :
      op->vtkEventBroker::GetLogFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_SetTimerLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkTimerLog *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTimerLog"))
  {
    if (ap.IsBound())
    {
      op->SetTimerLog(temp0);
    }
    else
    {
      op->vtkEventBroker::SetTimerLog(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GetTimerLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTimerLog *tempr = (ap.IsBound() ?
      op->GetTimerLog() :
      op->vtkEventBroker::GetTimerLog());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_OpenLogFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenLogFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OpenLogFile();
    }
    else
    {
      op->vtkEventBroker::OpenLogFile();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_CloseLogFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseLogFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CloseLogFile();
    }
    else
    {
      op->vtkEventBroker::CloseLogFile();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_LogEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkObservation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObservation"))
  {
    if (ap.IsBound())
    {
      op->LogEvent(temp0);
    }
    else
    {
      op->vtkEventBroker::LogEvent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GenerateGraphFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGraphFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GenerateGraphFile(temp0) :
      op->vtkEventBroker::GenerateGraphFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GetEventMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEventMode() :
      op->vtkEventBroker::GetEventMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_SetEventMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEventMode(temp0);
    }
    else
    {
      op->vtkEventBroker::SetEventMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_SetEventModeToSynchronous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventModeToSynchronous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetEventModeToSynchronous();
    }
    else
    {
      op->vtkEventBroker::SetEventModeToSynchronous();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_SetEventModeToAsynchronous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventModeToAsynchronous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetEventModeToAsynchronous();
    }
    else
    {
      op->vtkEventBroker::SetEventModeToAsynchronous();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GetEventModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEventModeAsString() :
      op->vtkEventBroker::GetEventModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_QueueObservation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QueueObservation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkObservation *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObservation") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    if (ap.IsBound())
    {
      op->QueueObservation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkEventBroker::QueueObservation(temp0, temp1, temp2);
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
PyvtkEventBroker_GetNumberOfQueuedObservations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfQueuedObservations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfQueuedObservations() :
      op->vtkEventBroker::GetNumberOfQueuedObservations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GetNthQueuedObservation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthQueuedObservation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObservation *tempr = (ap.IsBound() ?
      op->GetNthQueuedObservation(temp0) :
      op->vtkEventBroker::GetNthQueuedObservation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_DequeueObservation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DequeueObservation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObservation *tempr = (ap.IsBound() ?
      op->DequeueObservation() :
      op->vtkEventBroker::DequeueObservation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_InvokeObservation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeObservation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkObservation *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObservation") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    if (ap.IsBound())
    {
      op->InvokeObservation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkEventBroker::InvokeObservation(temp0, temp1, temp2);
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
PyvtkEventBroker_ProcessEventQueue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEventQueue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessEventQueue();
    }
    else
    {
      op->vtkEventBroker::ProcessEventQueue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_CompressCallDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompressCallDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompressCallDataOn();
    }
    else
    {
      op->vtkEventBroker::CompressCallDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_CompressCallDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompressCallDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompressCallDataOff();
    }
    else
    {
      op->vtkEventBroker::CompressCallDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GetCompressCallData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressCallData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressCallData() :
      op->vtkEventBroker::GetCompressCallData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_SetCompressCallData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressCallData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompressCallData(temp0);
    }
    else
    {
      op->vtkEventBroker::SetCompressCallData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_RequestModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->RequestModified(temp0) :
      op->vtkEventBroker::RequestModified(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_SetRequestModifiedCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestModifiedCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  vtkCallbackCommand *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCallbackCommand"))
  {
    if (ap.IsBound())
    {
      op->SetRequestModifiedCallback(temp0);
    }
    else
    {
      op->vtkEventBroker::SetRequestModifiedCallback(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventBroker_GetRequestModifiedCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestModifiedCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventBroker *op = static_cast<vtkEventBroker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCallbackCommand *tempr = (ap.IsBound() ?
      op->GetRequestModifiedCallback() :
      op->vtkEventBroker::GetRequestModifiedCallback());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEventBroker_Methods[] = {
  {"IsTypeOf", PyvtkEventBroker_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEventBroker_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEventBroker_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEventBroker\nC++: static vtkEventBroker *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEventBroker_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEventBroker\nC++: vtkEventBroker *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEventBroker_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEventBroker_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInstance", PyvtkEventBroker_GetInstance, METH_VARARGS,
   "GetInstance() -> vtkEventBroker\nC++: static vtkEventBroker *GetInstance()\n\nReturn the singleton instance with no reference counting.\n"},
  {"Callback", PyvtkEventBroker_Callback, METH_VARARGS,
   "Callback(caller:vtkObject, eid:int, clientData:Pointer,\n    callData:Pointer) -> None\nC++: static void Callback(vtkObject *caller, unsigned long eid,\n    void *clientData, void *callData)\n\nthe static function used by the command callback (used by\nvtkObservation)\n- each observation has a vtkCallbackCommand method which stores\n  the pointer to the vtkObservation class as the clientData\n- the vtkObservation has a pointer to vtkEventBroker, which knows\nhow to process that event for that Observation\n"},
  {"AddObservation", PyvtkEventBroker_AddObservation, METH_VARARGS,
   "AddObservation(self, subject:vtkObject, event:int,\n    observer:vtkObject, notify:vtkCallbackCommand,\n    priority:float=0.0f) -> vtkObservation\nC++: vtkObservation *AddObservation(vtkObject *subject,\n    unsigned long event, vtkObject *observer,\n    vtkCallbackCommand *notify, float priority=0.0f)\nAddObservation(self, subject:vtkObject, event:str, script:str)\n    -> vtkObservation\nC++: vtkObservation *AddObservation(vtkObject *subject,\n    const char *event, const char *script)\n\nAdding and Removing Observation objects\n\nRequest that an observer be added to the subject (or \"observee\")\n- this is the \"Attach\" operation\n"},
  {"RemoveObservation", PyvtkEventBroker_RemoveObservation, METH_VARARGS,
   "RemoveObservation(self, observation:vtkObservation) -> None\nC++: void RemoveObservation(vtkObservation *observation)\n\nRemove observation from the broker and event queue\n"},
  {"RemoveObservations", PyvtkEventBroker_RemoveObservations, METH_VARARGS,
   "RemoveObservations(self, observer:vtkObject) -> None\nC++: void RemoveObservations(vtkObject *observer)\nRemoveObservations(self, subject:vtkObject, observer:vtkObject)\n    -> None\nC++: void RemoveObservations(vtkObject *subject,\n    vtkObject *observer)\nRemoveObservations(self, subject:vtkObject, event:int,\n    observer:vtkObject) -> None\nC++: void RemoveObservations(vtkObject *subject,\n    unsigned long event, vtkObject *observer)\nRemoveObservations(self, subject:vtkObject, event:int,\n    observer:vtkObject, notify:vtkCallbackCommand) -> None\nC++: void RemoveObservations(vtkObject *subject,\n    unsigned long event, vtkObject *observer,\n    vtkCallbackCommand *notify)\n\n"},
  {"RemoveObservationsForSubjectByTag", PyvtkEventBroker_RemoveObservationsForSubjectByTag, METH_VARARGS,
   "RemoveObservationsForSubjectByTag(self, subject:vtkObject,\n    tag:int) -> None\nC++: void RemoveObservationsForSubjectByTag(vtkObject *subject,\n    unsigned long tag)\n\n"},
  {"GetObservationExist", PyvtkEventBroker_GetObservationExist, METH_VARARGS,
   "GetObservationExist(self, subject:vtkObject, event:int=0,\n    observer:vtkObject=..., notify:vtkCallbackCommand=...) -> bool\nC++: bool GetObservationExist(vtkObject *subject,\n    unsigned long event=0, vtkObject *observer=nullptr,\n    vtkCallbackCommand *notify=nullptr)\n\nReturns true if such an observation exists (arguments are same as\nfor GetObservations)\n"},
  {"GetObservationsForSubject", PyvtkEventBroker_GetObservationsForSubject, METH_VARARGS,
   "GetObservationsForSubject(self, subject:vtkObject)\n    -> vtkCollection\nC++: vtkCollection *GetObservationsForSubject(vtkObject *subject)\n\nDescription Accessors for introspection Note: vtkCollection\nobject is allocated internally and must be freed by the caller\n"},
  {"GetObservationsForObserver", PyvtkEventBroker_GetObservationsForObserver, METH_VARARGS,
   "GetObservationsForObserver(self, observer:vtkObject)\n    -> vtkCollection\nC++: vtkCollection *GetObservationsForObserver(\n    vtkObject *observer)\n\n"},
  {"GetObservationsForCallback", PyvtkEventBroker_GetObservationsForCallback, METH_VARARGS,
   "GetObservationsForCallback(self, callback:vtkCallbackCommand)\n    -> vtkCollection\nC++: vtkCollection *GetObservationsForCallback(\n    vtkCallbackCommand *callback)\n\n"},
  {"GetNumberOfObservations", PyvtkEventBroker_GetNumberOfObservations, METH_VARARGS,
   "GetNumberOfObservations(self) -> int\nC++: int GetNumberOfObservations()\n\nAccessors for Observations\n"},
  {"GetNthObservation", PyvtkEventBroker_GetNthObservation, METH_VARARGS,
   "GetNthObservation(self, n:int) -> vtkObservation\nC++: vtkObservation *GetNthObservation(int n)\n\n"},
  {"ProcessEvent", PyvtkEventBroker_ProcessEvent, METH_VARARGS,
   "ProcessEvent(self, observation:vtkObservation, caller:vtkObject,\n    eid:int, callData:Pointer) -> None\nC++: void ProcessEvent(vtkObservation *observation,\n    vtkObject *caller, unsigned long eid, void *callData)\n\nProcess any event that comes from either subject or observer\n"},
  {"EventLoggingOn", PyvtkEventBroker_EventLoggingOn, METH_VARARGS,
   "EventLoggingOn(self) -> None\nC++: virtual void EventLoggingOn()\n\nEvent Logging\n\nTurn on event tracing (requires TraceFile)\n"},
  {"EventLoggingOff", PyvtkEventBroker_EventLoggingOff, METH_VARARGS,
   "EventLoggingOff(self) -> None\nC++: virtual void EventLoggingOff()\n\n"},
  {"SetEventLogging", PyvtkEventBroker_SetEventLogging, METH_VARARGS,
   "SetEventLogging(self, _arg:int) -> None\nC++: virtual void SetEventLogging(int _arg)\n\n"},
  {"GetEventLogging", PyvtkEventBroker_GetEventLogging, METH_VARARGS,
   "GetEventLogging(self) -> int\nC++: virtual int GetEventLogging()\n\n"},
  {"SetEventNestingLevel", PyvtkEventBroker_SetEventNestingLevel, METH_VARARGS,
   "SetEventNestingLevel(self, _arg:int) -> None\nC++: virtual void SetEventNestingLevel(int _arg)\n\nCurrent level of indent (event nesting) shows what is called by\nwhat when in synchronous mode\n"},
  {"GetEventNestingLevel", PyvtkEventBroker_GetEventNestingLevel, METH_VARARGS,
   "GetEventNestingLevel(self) -> int\nC++: virtual int GetEventNestingLevel()\n\n"},
  {"SetLogFileName", PyvtkEventBroker_SetLogFileName, METH_VARARGS,
   "SetLogFileName(self, _arg:str) -> None\nC++: virtual void SetLogFileName(const char *_arg)\n\nFile to write event logs to when EventLogging is turned on\n"},
  {"GetLogFileName", PyvtkEventBroker_GetLogFileName, METH_VARARGS,
   "GetLogFileName(self) -> str\nC++: virtual char *GetLogFileName()\n\n"},
  {"SetTimerLog", PyvtkEventBroker_SetTimerLog, METH_VARARGS,
   "SetTimerLog(self, timerLog:vtkTimerLog) -> None\nC++: virtual void SetTimerLog(vtkTimerLog *timerLog)\n\nTimer log class for calculating elapsed time for event\ninvocations\n"},
  {"GetTimerLog", PyvtkEventBroker_GetTimerLog, METH_VARARGS,
   "GetTimerLog(self) -> vtkTimerLog\nC++: virtual vtkTimerLog *GetTimerLog()\n\n"},
  {"OpenLogFile", PyvtkEventBroker_OpenLogFile, METH_VARARGS,
   "OpenLogFile(self) -> None\nC++: void OpenLogFile()\n\nOpen and close the log file\n"},
  {"CloseLogFile", PyvtkEventBroker_CloseLogFile, METH_VARARGS,
   "CloseLogFile(self) -> None\nC++: void CloseLogFile()\n\n"},
  {"LogEvent", PyvtkEventBroker_LogEvent, METH_VARARGS,
   "LogEvent(self, observation:vtkObservation) -> None\nC++: void LogEvent(vtkObservation *observation)\n\nactually write to the log file (also manages state of the LogFile\nivar based on the filename and the EventLogging variable)\n"},
  {"GenerateGraphFile", PyvtkEventBroker_GenerateGraphFile, METH_VARARGS,
   "GenerateGraphFile(self, graphFile:str) -> int\nC++: int GenerateGraphFile(const char *graphFile)\n\nGraph File\n\nWrite out the current list of observations in graphviz format\n(.dot)\n"},
  {"GetEventMode", PyvtkEventBroker_GetEventMode, METH_VARARGS,
   "GetEventMode(self) -> int\nC++: virtual int GetEventMode()\n\n"},
  {"SetEventMode", PyvtkEventBroker_SetEventMode, METH_VARARGS,
   "SetEventMode(self, eventMode:int) -> None\nC++: void SetEventMode(int eventMode)\n\n"},
  {"SetEventModeToSynchronous", PyvtkEventBroker_SetEventModeToSynchronous, METH_VARARGS,
   "SetEventModeToSynchronous(self) -> None\nC++: void SetEventModeToSynchronous()\n\n"},
  {"SetEventModeToAsynchronous", PyvtkEventBroker_SetEventModeToAsynchronous, METH_VARARGS,
   "SetEventModeToAsynchronous(self) -> None\nC++: void SetEventModeToAsynchronous()\n\n"},
  {"GetEventModeAsString", PyvtkEventBroker_GetEventModeAsString, METH_VARARGS,
   "GetEventModeAsString(self) -> str\nC++: const char *GetEventModeAsString()\n\n"},
  {"QueueObservation", PyvtkEventBroker_QueueObservation, METH_VARARGS,
   "QueueObservation(self, observation:vtkObservation, eid:int,\n    callData:Pointer) -> None\nC++: void QueueObservation(vtkObservation *observation,\n    unsigned long eid, void *callData)\n\nEvent queue processing\n\nEvent queue handling routines Note:\n- assume here that the information in a vtkObservation contains\n  enough information for the observer to handle the event (that\n  is, we don't pass the callData field of the event back) TODO:\n  if the callData is needed, we will need another class/struct to\n  go into the event queue that saves them\n"},
  {"GetNumberOfQueuedObservations", PyvtkEventBroker_GetNumberOfQueuedObservations, METH_VARARGS,
   "GetNumberOfQueuedObservations(self) -> int\nC++: int GetNumberOfQueuedObservations()\n\n"},
  {"GetNthQueuedObservation", PyvtkEventBroker_GetNthQueuedObservation, METH_VARARGS,
   "GetNthQueuedObservation(self, n:int) -> vtkObservation\nC++: vtkObservation *GetNthQueuedObservation(int n)\n\n"},
  {"DequeueObservation", PyvtkEventBroker_DequeueObservation, METH_VARARGS,
   "DequeueObservation(self) -> vtkObservation\nC++: vtkObservation *DequeueObservation()\n\n"},
  {"InvokeObservation", PyvtkEventBroker_InvokeObservation, METH_VARARGS,
   "InvokeObservation(self, observation:vtkObservation, eid:int,\n    callData:Pointer) -> None\nC++: void InvokeObservation(vtkObservation *observation,\n    unsigned long eid, void *callData)\n\n"},
  {"ProcessEventQueue", PyvtkEventBroker_ProcessEventQueue, METH_VARARGS,
   "ProcessEventQueue(self) -> None\nC++: void ProcessEventQueue()\n\n"},
  {"CompressCallDataOn", PyvtkEventBroker_CompressCallDataOn, METH_VARARGS,
   "CompressCallDataOn(self) -> None\nC++: virtual void CompressCallDataOn()\n\ntwo modes -\n- CompressCallDataOn: only keep the most recent call data.  this\n  means that if the observation is in the queue, replace the call\ndata with the current value\n- CompressCallDataOff: maintain the list of all call data values,\nbut only one unique entry for each Compression is ON by default\n"},
  {"CompressCallDataOff", PyvtkEventBroker_CompressCallDataOff, METH_VARARGS,
   "CompressCallDataOff(self) -> None\nC++: virtual void CompressCallDataOff()\n\n"},
  {"GetCompressCallData", PyvtkEventBroker_GetCompressCallData, METH_VARARGS,
   "GetCompressCallData(self) -> int\nC++: virtual int GetCompressCallData()\n\n"},
  {"SetCompressCallData", PyvtkEventBroker_SetCompressCallData, METH_VARARGS,
   "SetCompressCallData(self, _arg:int) -> None\nC++: virtual void SetCompressCallData(int _arg)\n\n"},
  {"RequestModified", PyvtkEventBroker_RequestModified, METH_VARARGS,
   "RequestModified(self, object:vtkObject) -> bool\nC++: virtual bool RequestModified(vtkObject *object)\n\nRequest invoking modified event. Modified event is called later\n(e.g., when the application becomes idle) on the main thread\n(therefore it is safe to call this method from any thread).\nReturns true if the request was successfully submitted.\n"},
  {"SetRequestModifiedCallback", PyvtkEventBroker_SetRequestModifiedCallback, METH_VARARGS,
   "SetRequestModifiedCallback(self, callback:vtkCallbackCommand)\n    -> None\nC++: virtual void SetRequestModifiedCallback(\n    vtkCallbackCommand *callback)\n\nSet callback command for RequestModified. This command must be\nimplemented so that it is safe to be called from any thread.\n"},
  {"GetRequestModifiedCallback", PyvtkEventBroker_GetRequestModifiedCallback, METH_VARARGS,
   "GetRequestModifiedCallback(self) -> vtkCallbackCommand\nC++: virtual vtkCallbackCommand *GetRequestModifiedCallback()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkEventBroker_Doc =
  "vtkEventBroker - Class that manages adding and deleting of observers\nwith events.\n\n"
  "Superclass: vtkObject\n\n"
  "This class keeps track of observers and events added to each vtk\n"
  "object. It caches tags returned by AddObserver method so that\n"
  "observers can be removed properly. See also:\n"
  "https://wiki.na-mic.org/Wiki/index.php/Slicer3:EventBroker\n"
  "https://en.wikipedia.org/wiki/Observer_pattern Other interesting\n"
  "observer implementations: http://xlobject.sourceforge\n"
  "http://sigslot.sourceforge.net/\n"
  "http://doc.trolltech.com/4.3/signalsandslots.html\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEventBroker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkEventBroker", // tp_name
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
  PyvtkEventBroker_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEventBroker_StaticNew()
{
  return vtkEventBroker::New();
}

PyObject *PyvtkEventBroker_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEventBroker_Type, PyvtkEventBroker_Methods,
    "vtkEventBroker",
 &PyvtkEventBroker_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkEventBroker_EventMode_Type);
  PyVTKEnum_Add(&PyvtkEventBroker_EventMode_Type, "vtkEventBroker.EventMode");

  o = (PyObject *)&PyvtkEventBroker_EventMode_Type;
  if (PyDict_SetItemString(d, "EventMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "Synchronous", vtkEventBroker::Synchronous },
        { "Asynchronous", vtkEventBroker::Asynchronous },
      };

    o = PyvtkEventBroker_EventMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef PyvtkEventBrokerInitialize_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkEventBrokerInitialize_vtkEventBrokerInitialize_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkEventBrokerInitialize");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkEventBrokerInitialize *op = new vtkEventBrokerInitialize();

    result = PyVTKSpecialObject_New("vtkEventBrokerInitialize", op);
  }

  return result;
}

static PyObject *
PyvtkEventBrokerInitialize_vtkEventBrokerInitialize_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkEventBrokerInitialize");

  vtkEventBrokerInitialize *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkEventBrokerInitialize"))
  {
    vtkEventBrokerInitialize *op = new vtkEventBrokerInitialize(*temp0);

    result = PyVTKSpecialObject_New("vtkEventBrokerInitialize", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkEventBrokerInitialize_vtkEventBrokerInitialize_Methods[] = {
  {"vtkEventBrokerInitialize", PyvtkEventBrokerInitialize_vtkEventBrokerInitialize_s2, METH_VARARGS,
   "@W vtkEventBrokerInitialize"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkEventBrokerInitialize_vtkEventBrokerInitialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkEventBrokerInitialize_vtkEventBrokerInitialize_s1(self, args);
    case 1:
      return PyvtkEventBrokerInitialize_vtkEventBrokerInitialize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkEventBrokerInitialize");
  return nullptr;
}


static const char *PyvtkEventBrokerInitialize_Doc =

  "vtkEventBrokerInitialize() -> vtkEventBrokerInitialize\nC++: vtkEventBrokerInitialize()\nvtkEventBrokerInitialize(__a:vtkEventBrokerInitialize)\n    -> vtkEventBrokerInitialize\nC++: vtkEventBrokerInitialize(const &vtkEventBrokerInitialize)\n""\n"
  "vtkEventBrokerInitialize - Utility class to make sure\nqSlicerModuleManager is initialized before it is used.\n\n"
;

static PyObject *
PyvtkEventBrokerInitialize_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkEventBrokerInitialize_vtkEventBrokerInitialize(nullptr, args);
}

static void PyvtkEventBrokerInitialize_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkEventBrokerInitialize *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkEventBrokerInitialize_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEventBrokerInitialize_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkEventBrokerInitialize", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkEventBrokerInitialize_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkEventBrokerInitialize_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkEventBrokerInitialize_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkEventBrokerInitialize_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkEventBrokerInitialize_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkEventBrokerInitialize(*static_cast<const vtkEventBrokerInitialize*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkEventBrokerInitialize_TypeNew
extern "C" { PyObject *PyvtkEventBrokerInitialize_TypeNew(); }
#define DECLARED_PyvtkEventBrokerInitialize_TypeNew
#endif

PyObject *PyvtkEventBrokerInitialize_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkEventBrokerInitialize_Type,
    PyvtkEventBrokerInitialize_Methods,
    PyvtkEventBrokerInitialize_vtkEventBrokerInitialize_Methods,
    &PyvtkEventBrokerInitialize_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEventBroker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEventBroker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEventBroker", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkEventBrokerInitialize_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkEventBrokerInitialize", o) != 0)
  {
    Py_DECREF(o);
  }

}

