// python wrapper for vtkSlicerCLIModuleLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerCLIModuleLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerCLIModuleLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerCLIModuleLogic_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerCLIModuleLogic_CommandLineModuleType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "qSlicerBaseQTCLIPython.vtkSlicerCLIModuleLogic.CommandLineModuleType", // tp_name
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
PyObject *PyvtkSlicerCLIModuleLogic_CommandLineModuleType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSlicerCLIModuleLogic_CommandLineModuleType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSlicerCLIModuleLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerCLIModuleLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerCLIModuleLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerCLIModuleLogic *tempr = vtkSlicerCLIModuleLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerCLIModuleLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerCLIModuleLogic::NewInstance());

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
PyvtkSlicerCLIModuleLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerCLIModuleLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerCLIModuleLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_SetDefaultParameterValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultParameterValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetDefaultParameterValue(temp0, temp1) :
      op->vtkSlicerCLIModuleLogic::SetDefaultParameterValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_GetDefaultParameterValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultParameterValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDefaultParameterValue(temp0) :
      op->vtkSlicerCLIModuleLogic::GetDefaultParameterValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_CreateNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLCommandLineModuleNode *tempr = (ap.IsBound() ?
      op->CreateNode() :
      op->vtkSlicerCLIModuleLogic::CreateNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_CreateNodeInScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLCommandLineModuleNode *tempr = (ap.IsBound() ?
      op->CreateNodeInScene() :
      op->vtkSlicerCLIModuleLogic::CreateNodeInScene());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_ProcessMrmlEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMrmlEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

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
      op->ProcessMrmlEvents(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSlicerCLIModuleLogic::ProcessMrmlEvents(temp0, temp1, temp2);
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
PyvtkSlicerCLIModuleLogic_DeleteTemporaryFilesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteTemporaryFilesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeleteTemporaryFilesOn();
    }
    else
    {
      op->vtkSlicerCLIModuleLogic::DeleteTemporaryFilesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_DeleteTemporaryFilesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteTemporaryFilesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeleteTemporaryFilesOff();
    }
    else
    {
      op->vtkSlicerCLIModuleLogic::DeleteTemporaryFilesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_SetDeleteTemporaryFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeleteTemporaryFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeleteTemporaryFiles(temp0);
    }
    else
    {
      op->vtkSlicerCLIModuleLogic::SetDeleteTemporaryFiles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_GetDeleteTemporaryFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeleteTemporaryFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDeleteTemporaryFiles() :
      op->vtkSlicerCLIModuleLogic::GetDeleteTemporaryFiles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_SetAllowInMemoryTransfer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowInMemoryTransfer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowInMemoryTransfer(temp0);
    }
    else
    {
      op->vtkSlicerCLIModuleLogic::SetAllowInMemoryTransfer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_GetAllowInMemoryTransfer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowInMemoryTransfer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllowInMemoryTransfer() :
      op->vtkSlicerCLIModuleLogic::GetAllowInMemoryTransfer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_RedirectModuleStreamsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RedirectModuleStreamsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RedirectModuleStreamsOn();
    }
    else
    {
      op->vtkSlicerCLIModuleLogic::RedirectModuleStreamsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_RedirectModuleStreamsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RedirectModuleStreamsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RedirectModuleStreamsOff();
    }
    else
    {
      op->vtkSlicerCLIModuleLogic::RedirectModuleStreamsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_SetRedirectModuleStreams(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRedirectModuleStreams");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRedirectModuleStreams(temp0);
    }
    else
    {
      op->vtkSlicerCLIModuleLogic::SetRedirectModuleStreams(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_GetRedirectModuleStreams(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedirectModuleStreams");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRedirectModuleStreams() :
      op->vtkSlicerCLIModuleLogic::GetRedirectModuleStreams());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_Apply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Apply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  vtkMRMLCommandLineModuleNode *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLCommandLineModuleNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->Apply(temp0, temp1);
    }
    else
    {
      op->vtkSlicerCLIModuleLogic::Apply(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_ApplyAndWait(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyAndWait");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  vtkMRMLCommandLineModuleNode *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLCommandLineModuleNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->ApplyAndWait(temp0, temp1);
    }
    else
    {
      op->vtkSlicerCLIModuleLogic::ApplyAndWait(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_KillProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KillProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->KillProcesses();
    }
    else
    {
      op->vtkSlicerCLIModuleLogic::KillProcesses();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCLIModuleLogic_SetMRMLApplicationLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMRMLApplicationLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCLIModuleLogic *op = static_cast<vtkSlicerCLIModuleLogic *>(vp);

  vtkMRMLApplicationLogic *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLApplicationLogic"))
  {
    if (ap.IsBound())
    {
      op->SetMRMLApplicationLogic(temp0);
    }
    else
    {
      op->vtkSlicerCLIModuleLogic::SetMRMLApplicationLogic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerCLIModuleLogic_Methods[] = {
  {"IsTypeOf", PyvtkSlicerCLIModuleLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerCLIModuleLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerCLIModuleLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerCLIModuleLogic\nC++: static vtkSlicerCLIModuleLogic *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerCLIModuleLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerCLIModuleLogic\nC++: vtkSlicerCLIModuleLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerCLIModuleLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerCLIModuleLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDefaultParameterValue", PyvtkSlicerCLIModuleLogic_SetDefaultParameterValue, METH_VARARGS,
   "SetDefaultParameterValue(self, name:str, value:str) -> bool\nC++: bool SetDefaultParameterValue(const std::string &name,\n    const std::string &value)\n\nSet the value of the parameter name. Return true if the parameter\nis found and different than value, false otherwise.\n\\sa GetDefaultParameterValue(),\n"},
  {"GetDefaultParameterValue", PyvtkSlicerCLIModuleLogic_GetDefaultParameterValue, METH_VARARGS,
   "GetDefaultParameterValue(self, name:str) -> str\nC++: std::string GetDefaultParameterValue(const std::string &name)\n\nReturn the default parameter value and an empty string if the\nparameter can not be found.\n\\sa SetDefaultParameterValue()\n"},
  {"CreateNode", PyvtkSlicerCLIModuleLogic_CreateNode, METH_VARARGS,
   "CreateNode(self) -> vtkMRMLCommandLineModuleNode\nC++: vtkMRMLCommandLineModuleNode *CreateNode()\n\nInstantiate a default command line module node. If a default\nmodule description has been given, the node is initialized with\nthe description. Warning: The caller is responsible for deleting\nit.\n\\sa CreateNodeInScene(), SetDefaultModuleDescription()\n"},
  {"CreateNodeInScene", PyvtkSlicerCLIModuleLogic_CreateNodeInScene, METH_VARARGS,
   "CreateNodeInScene(self) -> vtkMRMLCommandLineModuleNode\nC++: vtkMRMLCommandLineModuleNode *CreateNodeInScene()\n\nInstantiate a default command line module node and add it into\nthe scene. The caller is responsible for remove the node from the\nscene.\n\\sa CreateNode(), SetDefaultModuleDescription()\n"},
  {"ProcessMrmlEvents", PyvtkSlicerCLIModuleLogic_ProcessMrmlEvents, METH_VARARGS,
   "ProcessMrmlEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: virtual void ProcessMrmlEvents(vtkObject *caller,\n    unsigned long event, void *callData)\n\n"},
  {"DeleteTemporaryFilesOn", PyvtkSlicerCLIModuleLogic_DeleteTemporaryFilesOn, METH_VARARGS,
   "DeleteTemporaryFilesOn(self) -> None\nC++: virtual void DeleteTemporaryFilesOn()\n\nFor debugging, control deletion of temp files\n"},
  {"DeleteTemporaryFilesOff", PyvtkSlicerCLIModuleLogic_DeleteTemporaryFilesOff, METH_VARARGS,
   "DeleteTemporaryFilesOff(self) -> None\nC++: virtual void DeleteTemporaryFilesOff()\n\n"},
  {"SetDeleteTemporaryFiles", PyvtkSlicerCLIModuleLogic_SetDeleteTemporaryFiles, METH_VARARGS,
   "SetDeleteTemporaryFiles(self, value:int) -> None\nC++: void SetDeleteTemporaryFiles(int value)\n\n"},
  {"GetDeleteTemporaryFiles", PyvtkSlicerCLIModuleLogic_GetDeleteTemporaryFiles, METH_VARARGS,
   "GetDeleteTemporaryFiles(self) -> int\nC++: int GetDeleteTemporaryFiles()\n\n"},
  {"SetAllowInMemoryTransfer", PyvtkSlicerCLIModuleLogic_SetAllowInMemoryTransfer, METH_VARARGS,
   "SetAllowInMemoryTransfer(self, value:int) -> None\nC++: void SetAllowInMemoryTransfer(int value)\n\n"},
  {"GetAllowInMemoryTransfer", PyvtkSlicerCLIModuleLogic_GetAllowInMemoryTransfer, METH_VARARGS,
   "GetAllowInMemoryTransfer(self) -> int\nC++: int GetAllowInMemoryTransfer()\n\n"},
  {"RedirectModuleStreamsOn", PyvtkSlicerCLIModuleLogic_RedirectModuleStreamsOn, METH_VARARGS,
   "RedirectModuleStreamsOn(self) -> None\nC++: virtual void RedirectModuleStreamsOn()\n\nFor debugging, control redirection of cout and cerr\n"},
  {"RedirectModuleStreamsOff", PyvtkSlicerCLIModuleLogic_RedirectModuleStreamsOff, METH_VARARGS,
   "RedirectModuleStreamsOff(self) -> None\nC++: virtual void RedirectModuleStreamsOff()\n\n"},
  {"SetRedirectModuleStreams", PyvtkSlicerCLIModuleLogic_SetRedirectModuleStreams, METH_VARARGS,
   "SetRedirectModuleStreams(self, value:int) -> None\nC++: void SetRedirectModuleStreams(int value)\n\n"},
  {"GetRedirectModuleStreams", PyvtkSlicerCLIModuleLogic_GetRedirectModuleStreams, METH_VARARGS,
   "GetRedirectModuleStreams(self) -> int\nC++: int GetRedirectModuleStreams()\n\n"},
  {"Apply", PyvtkSlicerCLIModuleLogic_Apply, METH_VARARGS,
   "Apply(self, node:vtkMRMLCommandLineModuleNode,\n    updateDisplay:bool=True) -> None\nC++: void Apply(vtkMRMLCommandLineModuleNode *node,\n    bool updateDisplay=true)\n\nSchedules the command line module to run. The CLI is scheduled to\nbe run in a separate thread. This methods is non blocking and\nreturns immediately. If updateDisplay is 'true' the selection\nnode will be updated with the the created nodes, which would\nautomatically select the created nodes in the node selectors.\n"},
  {"ApplyAndWait", PyvtkSlicerCLIModuleLogic_ApplyAndWait, METH_VARARGS,
   "ApplyAndWait(self, node:vtkMRMLCommandLineModuleNode,\n    updateDisplay:bool=True) -> None\nC++: void ApplyAndWait(vtkMRMLCommandLineModuleNode *node,\n    bool updateDisplay=true)\n\nDon't start the CLI in a separate thread, but run it in the main\nthread. This methods is blocking until the CLI finishes to\nexecute, the UI being frozen until that time. If updateDisplay is\n'true' the selection node will be updated with the the created\nnodes, which would automatically select the created nodes in the\nnode selectors.\n"},
  {"KillProcesses", PyvtkSlicerCLIModuleLogic_KillProcesses, METH_VARARGS,
   "KillProcesses(self) -> None\nC++: void KillProcesses()\n\n"},
  {"SetMRMLApplicationLogic", PyvtkSlicerCLIModuleLogic_SetMRMLApplicationLogic, METH_VARARGS,
   "SetMRMLApplicationLogic(self, logic:vtkMRMLApplicationLogic)\n    -> None\nC++: void SetMRMLApplicationLogic(vtkMRMLApplicationLogic *logic)\n    override;\n\nSet the application logic\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerCLIModuleLogic_Doc =
  "vtkSlicerCLIModuleLogic - Logic for running CLI\n\n"
  "Superclass: vtkSlicerModuleLogic\n\n"
  "vtkSlicerCLIModuleLogic logic allows to run a either synchronously or\n"
  "asynchronously CLI using parameters of a\n"
  "vtkMRMLCommandLineModuleNode. While a CLI module logic can run any\n"
  "CLI node, the logic can uniquely be assigned a specific CLI by\n"
  "setting a DefaultModuleDescription.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerCLIModuleLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "qSlicerBaseQTCLIPython.vtkSlicerCLIModuleLogic", // tp_name
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
  PyvtkSlicerCLIModuleLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerCLIModuleLogic_StaticNew()
{
  return vtkSlicerCLIModuleLogic::New();
}

PyObject *PyvtkSlicerCLIModuleLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerCLIModuleLogic_Type, PyvtkSlicerCLIModuleLogic_Methods,
    "vtkSlicerCLIModuleLogic",
 &PyvtkSlicerCLIModuleLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSlicerModuleLogic");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSlicerCLIModuleLogic_CommandLineModuleType_Type);
  PyVTKEnum_Add(&PyvtkSlicerCLIModuleLogic_CommandLineModuleType_Type, "vtkSlicerCLIModuleLogic.CommandLineModuleType");

  o = (PyObject *)&PyvtkSlicerCLIModuleLogic_CommandLineModuleType_Type;
  if (PyDict_SetItemString(d, "CommandLineModuleType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSlicerCLIModuleLogic::CommandLineModuleType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "CommandLineModule", vtkSlicerCLIModuleLogic::CommandLineModule },
        { "SharedObjectModule", vtkSlicerCLIModuleLogic::SharedObjectModule },
        { "PythonModule", vtkSlicerCLIModuleLogic::PythonModule },
      };

    o = PyvtkSlicerCLIModuleLogic_CommandLineModuleType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerCLIModuleLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerCLIModuleLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerCLIModuleLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

