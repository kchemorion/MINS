// python wrapper for vtkMRMLInteractionEventData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMRMLInteractionEventData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLInteractionEventData(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLInteractionEventData_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLInteractionEventData_MRMLInteractionEvents_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLInteractionEventData.MRMLInteractionEvents", // tp_name
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
PyObject *PyvtkMRMLInteractionEventData_MRMLInteractionEvents_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLInteractionEventData_MRMLInteractionEvents_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLInteractionEventData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLInteractionEventData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLInteractionEventData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLInteractionEventData *tempr = vtkMRMLInteractionEventData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLInteractionEventData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLInteractionEventData::NewInstance());

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
PyvtkMRMLInteractionEventData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLInteractionEventData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLInteractionEventData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetType(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetModifiers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModifiers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModifiers(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetModifiers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetModifiers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModifiers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModifiers() :
      op->vtkMRMLInteractionEventData::GetModifiers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetWorldPosition(temp0, temp1);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetWorldPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_IsWorldPositionValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsWorldPositionValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsWorldPositionValid() :
      op->vtkMRMLInteractionEventData::IsWorldPositionValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_IsWorldPositionAccurate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsWorldPositionAccurate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsWorldPositionAccurate() :
      op->vtkMRMLInteractionEventData::IsWorldPositionAccurate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetWorldPositionInvalid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPositionInvalid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWorldPositionInvalid();
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetWorldPositionInvalid();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_ComputeAccurateWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAccurateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->ComputeAccurateWorldPosition(temp0) :
      op->vtkMRMLInteractionEventData::ComputeAccurateWorldPosition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetDisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDisplayPosition(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::GetDisplayPosition(temp0);
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
PyvtkMRMLInteractionEventData_GetDisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = (ap.IsBound() ?
      op->GetDisplayPosition() :
      op->vtkMRMLInteractionEventData::GetDisplayPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLInteractionEventData_GetDisplayPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLInteractionEventData_GetDisplayPosition_s1(self, args);
    case 0:
      return PyvtkMRMLInteractionEventData_GetDisplayPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDisplayPosition");
  return nullptr;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayPosition(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetDisplayPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_IsDisplayPositionValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDisplayPositionValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDisplayPositionValid() :
      op->vtkMRMLInteractionEventData::IsDisplayPositionValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetDisplayPositionInvalid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPositionInvalid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayPositionInvalid();
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetDisplayPositionInvalid();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyCode(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetKeyCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetKeyCode() :
      op->vtkMRMLInteractionEventData::GetKeyCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetKeyRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyRepeatCount(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetKeyRepeatCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetKeyRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetKeyRepeatCount() :
      op->vtkMRMLInteractionEventData::GetKeyRepeatCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeySym(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetKeySym(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetKeySym() :
      &op->vtkMRMLInteractionEventData::GetKeySym());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetViewNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  vtkMRMLAbstractViewNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLAbstractViewNode"))
  {
    if (ap.IsBound())
    {
      op->SetViewNode(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetViewNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetViewNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAbstractViewNode *tempr = (ap.IsBound() ?
      op->GetViewNode() :
      op->vtkMRMLInteractionEventData::GetViewNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetComponentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponentType(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetComponentType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetComponentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentType() :
      op->vtkMRMLInteractionEventData::GetComponentType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetComponentIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponentIndex(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetComponentIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetComponentIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentIndex() :
      op->vtkMRMLInteractionEventData::GetComponentIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetMouseMovedSinceButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMouseMovedSinceButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMouseMovedSinceButtonDown(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetMouseMovedSinceButtonDown(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetMouseMovedSinceButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMouseMovedSinceButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMouseMovedSinceButtonDown() :
      op->vtkMRMLInteractionEventData::GetMouseMovedSinceButtonDown());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotation(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetRotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotation() :
      op->vtkMRMLInteractionEventData::GetRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetLastRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastRotation(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetLastRotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetLastRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLastRotation() :
      op->vtkMRMLInteractionEventData::GetLastRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkMRMLInteractionEventData::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetLastScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastScale(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetLastScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetLastScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLastScale() :
      op->vtkMRMLInteractionEventData::GetLastScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTranslation(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetTranslation() :
      op->vtkMRMLInteractionEventData::GetTranslation());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetLastTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLastTranslation(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetLastTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetLastTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetLastTranslation() :
      op->vtkMRMLInteractionEventData::GetLastTranslation());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetWorldToPhysicalScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldToPhysicalScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWorldToPhysicalScale(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetWorldToPhysicalScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetWorldToPhysicalScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldToPhysicalScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWorldToPhysicalScale() :
      op->vtkMRMLInteractionEventData::GetWorldToPhysicalScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetAttributesFromInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributesFromInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetAttributesFromInteractor(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetAttributesFromInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkMRMLInteractionEventData::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetAccuratePicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAccuratePicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  vtkCellPicker *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellPicker"))
  {
    if (ap.IsBound())
    {
      op->SetAccuratePicker(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetAccuratePicker(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetAccuratePicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccuratePicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellPicker *tempr = (ap.IsBound() ?
      op->GetAccuratePicker() :
      op->vtkMRMLInteractionEventData::GetAccuratePicker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_SetInteractionContextName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionContextName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionContextName(temp0);
    }
    else
    {
      op->vtkMRMLInteractionEventData::SetInteractionContextName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_GetInteractionContextName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionContextName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetInteractionContextName() :
      &op->vtkMRMLInteractionEventData::GetInteractionContextName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionEventData_WorldToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WorldToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionEventData *op = static_cast<vtkMRMLInteractionEventData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->WorldToDisplay(temp0, temp1);
    }
    else
    {
      op->vtkMRMLInteractionEventData::WorldToDisplay(temp0, temp1);
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

static PyMethodDef PyvtkMRMLInteractionEventData_Methods[] = {
  {"IsTypeOf", PyvtkMRMLInteractionEventData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLInteractionEventData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLInteractionEventData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLInteractionEventData\nC++: static vtkMRMLInteractionEventData *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLInteractionEventData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLInteractionEventData\nC++: vtkMRMLInteractionEventData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLInteractionEventData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLInteractionEventData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetType", PyvtkMRMLInteractionEventData_SetType, METH_VARARGS,
   "SetType(self, v:int) -> None\nC++: void SetType(unsigned long v)\n\n"},
  {"SetModifiers", PyvtkMRMLInteractionEventData_SetModifiers, METH_VARARGS,
   "SetModifiers(self, v:int) -> None\nC++: void SetModifiers(int v)\n\n"},
  {"GetModifiers", PyvtkMRMLInteractionEventData_GetModifiers, METH_VARARGS,
   "GetModifiers(self) -> int\nC++: int GetModifiers()\n\n"},
  {"SetWorldPosition", PyvtkMRMLInteractionEventData_SetWorldPosition, METH_VARARGS,
   "SetWorldPosition(self, p:(float, float, float),\n    accurate:bool=True) -> None\nC++: void SetWorldPosition(const double p[3], bool accurate=true)\n\nIt may be expensive to compute world position accurately (e.g.,\nin a 3D view). If accurate parameter is set to false then it\nindicates that the position may be inaccurate.\n"},
  {"IsWorldPositionValid", PyvtkMRMLInteractionEventData_IsWorldPositionValid, METH_VARARGS,
   "IsWorldPositionValid(self) -> bool\nC++: bool IsWorldPositionValid()\n\nIt may be expensive to compute world position accurately (e.g.,\nin a 3D view). If accurate parameter is set to false then it\nindicates that the position may be inaccurate.\n"},
  {"IsWorldPositionAccurate", PyvtkMRMLInteractionEventData_IsWorldPositionAccurate, METH_VARARGS,
   "IsWorldPositionAccurate(self) -> bool\nC++: bool IsWorldPositionAccurate()\n\nIt may be expensive to compute world position accurately (e.g.,\nin a 3D view). If accurate parameter is set to false then it\nindicates that the position may be inaccurate.\n"},
  {"SetWorldPositionInvalid", PyvtkMRMLInteractionEventData_SetWorldPositionInvalid, METH_VARARGS,
   "SetWorldPositionInvalid(self) -> None\nC++: void SetWorldPositionInvalid()\n\nIt may be expensive to compute world position accurately (e.g.,\nin a 3D view). If accurate parameter is set to false then it\nindicates that the position may be inaccurate.\n"},
  {"ComputeAccurateWorldPosition", PyvtkMRMLInteractionEventData_ComputeAccurateWorldPosition, METH_VARARGS,
   "ComputeAccurateWorldPosition(self, force:bool=False) -> bool\nC++: bool ComputeAccurateWorldPosition(bool force=false)\n\nIt may be expensive to compute world position accurately (e.g.,\nin a 3D view). If accurate parameter is set to false then it\nindicates that the position may be inaccurate.\n"},
  {"GetDisplayPosition", PyvtkMRMLInteractionEventData_GetDisplayPosition, METH_VARARGS,
   "GetDisplayPosition(self, v:[int, int]) -> None\nC++: void GetDisplayPosition(int v[2])\nGetDisplayPosition(self) -> (int, int)\nC++: const int *GetDisplayPosition()\n\n"},
  {"SetDisplayPosition", PyvtkMRMLInteractionEventData_SetDisplayPosition, METH_VARARGS,
   "SetDisplayPosition(self, p:(int, int)) -> None\nC++: void SetDisplayPosition(const int p[2])\n\n"},
  {"IsDisplayPositionValid", PyvtkMRMLInteractionEventData_IsDisplayPositionValid, METH_VARARGS,
   "IsDisplayPositionValid(self) -> bool\nC++: bool IsDisplayPositionValid()\n\n"},
  {"SetDisplayPositionInvalid", PyvtkMRMLInteractionEventData_SetDisplayPositionInvalid, METH_VARARGS,
   "SetDisplayPositionInvalid(self) -> None\nC++: void SetDisplayPositionInvalid()\n\n"},
  {"SetKeyCode", PyvtkMRMLInteractionEventData_SetKeyCode, METH_VARARGS,
   "SetKeyCode(self, v:str) -> None\nC++: void SetKeyCode(char v)\n\n"},
  {"GetKeyCode", PyvtkMRMLInteractionEventData_GetKeyCode, METH_VARARGS,
   "GetKeyCode(self) -> str\nC++: char GetKeyCode()\n\n"},
  {"SetKeyRepeatCount", PyvtkMRMLInteractionEventData_SetKeyRepeatCount, METH_VARARGS,
   "SetKeyRepeatCount(self, v:str) -> None\nC++: void SetKeyRepeatCount(char v)\n\n"},
  {"GetKeyRepeatCount", PyvtkMRMLInteractionEventData_GetKeyRepeatCount, METH_VARARGS,
   "GetKeyRepeatCount(self) -> int\nC++: int GetKeyRepeatCount()\n\n"},
  {"SetKeySym", PyvtkMRMLInteractionEventData_SetKeySym, METH_VARARGS,
   "SetKeySym(self, v:str) -> None\nC++: void SetKeySym(const std::string &v)\n\n"},
  {"GetKeySym", PyvtkMRMLInteractionEventData_GetKeySym, METH_VARARGS,
   "GetKeySym(self) -> str\nC++: const std::string &GetKeySym()\n\n"},
  {"SetViewNode", PyvtkMRMLInteractionEventData_SetViewNode, METH_VARARGS,
   "SetViewNode(self, viewNode:vtkMRMLAbstractViewNode) -> None\nC++: void SetViewNode(vtkMRMLAbstractViewNode *viewNode)\n\n"},
  {"GetViewNode", PyvtkMRMLInteractionEventData_GetViewNode, METH_VARARGS,
   "GetViewNode(self) -> vtkMRMLAbstractViewNode\nC++: vtkMRMLAbstractViewNode *GetViewNode()\n\n"},
  {"SetComponentType", PyvtkMRMLInteractionEventData_SetComponentType, METH_VARARGS,
   "SetComponentType(self, componentType:int) -> None\nC++: void SetComponentType(int componentType)\n\n"},
  {"GetComponentType", PyvtkMRMLInteractionEventData_GetComponentType, METH_VARARGS,
   "GetComponentType(self) -> int\nC++: int GetComponentType()\n\n"},
  {"SetComponentIndex", PyvtkMRMLInteractionEventData_SetComponentIndex, METH_VARARGS,
   "SetComponentIndex(self, componentIndex:int) -> None\nC++: void SetComponentIndex(int componentIndex)\n\n"},
  {"GetComponentIndex", PyvtkMRMLInteractionEventData_GetComponentIndex, METH_VARARGS,
   "GetComponentIndex(self) -> int\nC++: int GetComponentIndex()\n\n"},
  {"SetMouseMovedSinceButtonDown", PyvtkMRMLInteractionEventData_SetMouseMovedSinceButtonDown, METH_VARARGS,
   "SetMouseMovedSinceButtonDown(self, moved:bool) -> None\nC++: void SetMouseMovedSinceButtonDown(bool moved)\n\n"},
  {"GetMouseMovedSinceButtonDown", PyvtkMRMLInteractionEventData_GetMouseMovedSinceButtonDown, METH_VARARGS,
   "GetMouseMovedSinceButtonDown(self) -> bool\nC++: bool GetMouseMovedSinceButtonDown()\n\n"},
  {"SetRotation", PyvtkMRMLInteractionEventData_SetRotation, METH_VARARGS,
   "SetRotation(self, v:float) -> None\nC++: void SetRotation(double v)\n\n"},
  {"GetRotation", PyvtkMRMLInteractionEventData_GetRotation, METH_VARARGS,
   "GetRotation(self) -> float\nC++: double GetRotation()\n\n"},
  {"SetLastRotation", PyvtkMRMLInteractionEventData_SetLastRotation, METH_VARARGS,
   "SetLastRotation(self, v:float) -> None\nC++: void SetLastRotation(double v)\n\n"},
  {"GetLastRotation", PyvtkMRMLInteractionEventData_GetLastRotation, METH_VARARGS,
   "GetLastRotation(self) -> float\nC++: double GetLastRotation()\n\n"},
  {"SetScale", PyvtkMRMLInteractionEventData_SetScale, METH_VARARGS,
   "SetScale(self, scale:float) -> None\nC++: void SetScale(double scale)\n\n"},
  {"GetScale", PyvtkMRMLInteractionEventData_GetScale, METH_VARARGS,
   "GetScale(self) -> float\nC++: double GetScale()\n\n"},
  {"SetLastScale", PyvtkMRMLInteractionEventData_SetLastScale, METH_VARARGS,
   "SetLastScale(self, scale:float) -> None\nC++: void SetLastScale(double scale)\n\n"},
  {"GetLastScale", PyvtkMRMLInteractionEventData_GetLastScale, METH_VARARGS,
   "GetLastScale(self) -> float\nC++: double GetLastScale()\n\n"},
  {"SetTranslation", PyvtkMRMLInteractionEventData_SetTranslation, METH_VARARGS,
   "SetTranslation(self, translation:(float, float)) -> None\nC++: void SetTranslation(const double translation[2])\n\n"},
  {"GetTranslation", PyvtkMRMLInteractionEventData_GetTranslation, METH_VARARGS,
   "GetTranslation(self) -> (float, float)\nC++: const double *GetTranslation()\n\n"},
  {"SetLastTranslation", PyvtkMRMLInteractionEventData_SetLastTranslation, METH_VARARGS,
   "SetLastTranslation(self, translation:(float, float)) -> None\nC++: void SetLastTranslation(const double translation[2])\n\n"},
  {"GetLastTranslation", PyvtkMRMLInteractionEventData_GetLastTranslation, METH_VARARGS,
   "GetLastTranslation(self) -> (float, float)\nC++: const double *GetLastTranslation()\n\n"},
  {"SetWorldToPhysicalScale", PyvtkMRMLInteractionEventData_SetWorldToPhysicalScale, METH_VARARGS,
   "SetWorldToPhysicalScale(self, v:float) -> None\nC++: void SetWorldToPhysicalScale(double v)\n\n"},
  {"GetWorldToPhysicalScale", PyvtkMRMLInteractionEventData_GetWorldToPhysicalScale, METH_VARARGS,
   "GetWorldToPhysicalScale(self) -> float\nC++: double GetWorldToPhysicalScale()\n\n"},
  {"SetAttributesFromInteractor", PyvtkMRMLInteractionEventData_SetAttributesFromInteractor, METH_VARARGS,
   "SetAttributesFromInteractor(self,\n    interactor:vtkRenderWindowInteractor) -> None\nC++: void SetAttributesFromInteractor(\n    vtkRenderWindowInteractor *interactor)\n\nSet Modifiers and Key... attributes from interactor\n"},
  {"GetRenderer", PyvtkMRMLInteractionEventData_GetRenderer, METH_VARARGS,
   "GetRenderer(self) -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\n"},
  {"SetRenderer", PyvtkMRMLInteractionEventData_SetRenderer, METH_VARARGS,
   "SetRenderer(self, ren:vtkRenderer) -> None\nC++: void SetRenderer(vtkRenderer *ren)\n\n"},
  {"SetAccuratePicker", PyvtkMRMLInteractionEventData_SetAccuratePicker, METH_VARARGS,
   "SetAccuratePicker(self, picker:vtkCellPicker) -> None\nC++: void SetAccuratePicker(vtkCellPicker *picker)\n\n"},
  {"GetAccuratePicker", PyvtkMRMLInteractionEventData_GetAccuratePicker, METH_VARARGS,
   "GetAccuratePicker(self) -> vtkCellPicker\nC++: vtkCellPicker *GetAccuratePicker()\n\n"},
  {"SetInteractionContextName", PyvtkMRMLInteractionEventData_SetInteractionContextName, METH_VARARGS,
   "SetInteractionContextName(self, v:str) -> None\nC++: void SetInteractionContextName(const std::string &v)\n\n"},
  {"GetInteractionContextName", PyvtkMRMLInteractionEventData_GetInteractionContextName, METH_VARARGS,
   "GetInteractionContextName(self) -> str\nC++: const std::string &GetInteractionContextName()\n\n"},
  {"WorldToDisplay", PyvtkMRMLInteractionEventData_WorldToDisplay, METH_VARARGS,
   "WorldToDisplay(self, worldPosition:(float, float, float),\n    displayPosition:[float, float, float]) -> None\nC++: void WorldToDisplay(const double worldPosition[3],\n    double displayPosition[3])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLInteractionEventData_Doc =
  "vtkMRMLInteractionEventData - Class for storing all relevant details\nof mouse and keyboard events.\n\n"
  "Superclass: vtkEventDataDevice3D\n\n"
  "It stores additional information that is expensive to compute (such\n"
  "as 3D position) or not always easy to get (such as modifiers).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLInteractionEventData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLInteractionEventData", // tp_name
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
  PyvtkMRMLInteractionEventData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLInteractionEventData_StaticNew()
{
  return vtkMRMLInteractionEventData::New();
}

PyObject *PyvtkMRMLInteractionEventData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLInteractionEventData_Type, PyvtkMRMLInteractionEventData_Methods,
    "vtkMRMLInteractionEventData",
 &PyvtkMRMLInteractionEventData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkEventDataDevice3D");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLInteractionEventData_MRMLInteractionEvents_Type);
  PyVTKEnum_Add(&PyvtkMRMLInteractionEventData_MRMLInteractionEvents_Type, "vtkMRMLInteractionEventData.MRMLInteractionEvents");

  o = (PyObject *)&PyvtkMRMLInteractionEventData_MRMLInteractionEvents_Type;
  if (PyDict_SetItemString(d, "MRMLInteractionEvents", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMRMLInteractionEventData::MRMLInteractionEvents cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "LeftButtonClickEvent", vtkMRMLInteractionEventData::LeftButtonClickEvent },
        { "MiddleButtonClickEvent", vtkMRMLInteractionEventData::MiddleButtonClickEvent },
        { "RightButtonClickEvent", vtkMRMLInteractionEventData::RightButtonClickEvent },
      };

    o = PyvtkMRMLInteractionEventData_MRMLInteractionEvents_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLInteractionEventData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLInteractionEventData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLInteractionEventData", o) != 0)
  {
    Py_DECREF(o);
  }

}

