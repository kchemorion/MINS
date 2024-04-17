// python wrapper for vtkDataIOManagerLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataIOManagerLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataIOManagerLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkDataIOManagerLogic_ClassNew(); }

#ifndef DECLARED_PyvtkSlicerModuleLogic_ClassNew
extern "C" { PyObject *PyvtkSlicerModuleLogic_ClassNew(); }
#define DECLARED_PyvtkSlicerModuleLogic_ClassNew
#endif

static PyObject *
PyvtkDataIOManagerLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataIOManagerLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManagerLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManagerLogic *op = static_cast<vtkDataIOManagerLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataIOManagerLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManagerLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataIOManagerLogic *tempr = vtkDataIOManagerLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManagerLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManagerLogic *op = static_cast<vtkDataIOManagerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataIOManagerLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataIOManagerLogic::NewInstance());

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
PyvtkDataIOManagerLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataIOManagerLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManagerLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManagerLogic *op = static_cast<vtkDataIOManagerLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataIOManagerLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManagerLogic_GetDataIOManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataIOManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManagerLogic *op = static_cast<vtkDataIOManagerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataIOManager *tempr = (ap.IsBound() ?
      op->GetDataIOManager() :
      op->vtkDataIOManagerLogic::GetDataIOManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManagerLogic_SetAndObserveDataIOManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveDataIOManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManagerLogic *op = static_cast<vtkDataIOManagerLogic *>(vp);

  vtkDataIOManager *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataIOManager"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveDataIOManager(temp0);
    }
    else
    {
      op->vtkDataIOManagerLogic::SetAndObserveDataIOManager(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManagerLogic_QueueRead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QueueRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManagerLogic *op = static_cast<vtkDataIOManagerLogic *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    int tempr = (ap.IsBound() ?
      op->QueueRead(temp0) :
      op->vtkDataIOManagerLogic::QueueRead(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManagerLogic_QueueWrite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QueueWrite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManagerLogic *op = static_cast<vtkDataIOManagerLogic *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    int tempr = (ap.IsBound() ?
      op->QueueWrite(temp0) :
      op->vtkDataIOManagerLogic::QueueWrite(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManagerLogic_ApplyTransfer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransfer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManagerLogic *op = static_cast<vtkDataIOManagerLogic *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->ApplyTransfer(temp0);
    }
    else
    {
      op->vtkDataIOManagerLogic::ApplyTransfer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkDataIOManagerLogic_ProgressCallback(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ProgressCallback");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    vtkDataIOManagerLogic::ProgressCallback(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkDataIOManagerLogic_AddNewDataTransfer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNewDataTransfer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManagerLogic *op = static_cast<vtkDataIOManagerLogic *>(vp);

  vtkDataTransfer *temp0 = nullptr;
  vtkMRMLNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataTransfer") &&
      ap.GetVTKObject(temp1, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->AddNewDataTransfer(temp0, temp1);
    }
    else
    {
      op->vtkDataIOManagerLogic::AddNewDataTransfer(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManagerLogic_CancelDataTransfer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CancelDataTransfer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManagerLogic *op = static_cast<vtkDataIOManagerLogic *>(vp);

  vtkDataTransfer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataTransfer"))
  {
    if (ap.IsBound())
    {
      op->CancelDataTransfer(temp0);
    }
    else
    {
      op->vtkDataIOManagerLogic::CancelDataTransfer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManagerLogic_ClearCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManagerLogic *op = static_cast<vtkDataIOManagerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearCache();
    }
    else
    {
      op->vtkDataIOManagerLogic::ClearCache();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManagerLogic_DeleteDataTransferFromCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteDataTransferFromCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManagerLogic *op = static_cast<vtkDataIOManagerLogic *>(vp);

  vtkDataTransfer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataTransfer"))
  {
    if (ap.IsBound())
    {
      op->DeleteDataTransferFromCache(temp0);
    }
    else
    {
      op->vtkDataIOManagerLogic::DeleteDataTransferFromCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataIOManagerLogic_Methods[] = {
  {"IsTypeOf", PyvtkDataIOManagerLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataIOManagerLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataIOManagerLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataIOManagerLogic\nC++: static vtkDataIOManagerLogic *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataIOManagerLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataIOManagerLogic\nC++: vtkDataIOManagerLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataIOManagerLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataIOManagerLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataIOManager", PyvtkDataIOManagerLogic_GetDataIOManager, METH_VARARGS,
   "GetDataIOManager(self) -> vtkDataIOManager\nC++: virtual vtkDataIOManager *GetDataIOManager()\n\n"},
  {"SetAndObserveDataIOManager", PyvtkDataIOManagerLogic_SetAndObserveDataIOManager, METH_VARARGS,
   "SetAndObserveDataIOManager(self, __a:vtkDataIOManager) -> None\nC++: virtual void SetAndObserveDataIOManager(vtkDataIOManager *)\n\n"},
  {"QueueRead", PyvtkDataIOManagerLogic_QueueRead, METH_VARARGS,
   "QueueRead(self, node:vtkMRMLNode) -> int\nC++: virtual int QueueRead(vtkMRMLNode *node)\n\nMethods that Queues the read\n"},
  {"QueueWrite", PyvtkDataIOManagerLogic_QueueWrite, METH_VARARGS,
   "QueueWrite(self, node:vtkMRMLNode) -> int\nC++: virtual int QueueWrite(vtkMRMLNode *node)\n\nMethod that queues the write\n"},
  {"ApplyTransfer", PyvtkDataIOManagerLogic_ApplyTransfer, METH_VARARGS,
   "ApplyTransfer(self, clientdata:Pointer) -> None\nC++: virtual void ApplyTransfer(void *clientdata)\n\nThe method that executes the data transfer in another thread\n"},
  {"ProgressCallback", PyvtkDataIOManagerLogic_ProgressCallback, METH_VARARGS,
   "ProgressCallback(__a:Pointer) -> None\nC++: static void ProgressCallback(void *)\n\nDescription Communicates progress back to the DataIOManager\n"},
  {"AddNewDataTransfer", PyvtkDataIOManagerLogic_AddNewDataTransfer, METH_VARARGS,
   "AddNewDataTransfer(self, transfer:vtkDataTransfer,\n    node:vtkMRMLNode) -> None\nC++: virtual void AddNewDataTransfer(vtkDataTransfer *transfer,\n    vtkMRMLNode *node)\n\nConvenience method that goes through vtkDataIOManager to create a\nnew DataTransfer object.\n"},
  {"CancelDataTransfer", PyvtkDataIOManagerLogic_CancelDataTransfer, METH_VARARGS,
   "CancelDataTransfer(self, transfer:vtkDataTransfer) -> None\nC++: virtual void CancelDataTransfer(vtkDataTransfer *transfer)\n\n"},
  {"ClearCache", PyvtkDataIOManagerLogic_ClearCache, METH_VARARGS,
   "ClearCache(self) -> None\nC++: virtual void ClearCache()\n\n"},
  {"DeleteDataTransferFromCache", PyvtkDataIOManagerLogic_DeleteDataTransferFromCache, METH_VARARGS,
   "DeleteDataTransferFromCache(self, transfer:vtkDataTransfer)\n    -> None\nC++: virtual void DeleteDataTransferFromCache(\n    vtkDataTransfer *transfer)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataIOManagerLogic_Doc =
  "vtkDataIOManagerLogic - no description provided.\n\n"
  "Superclass: vtkSlicerModuleLogic\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataIOManagerLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "SlicerBaseLogicPython.vtkDataIOManagerLogic", // tp_name
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
  PyvtkDataIOManagerLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataIOManagerLogic_StaticNew()
{
  return vtkDataIOManagerLogic::New();
}

PyObject *PyvtkDataIOManagerLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataIOManagerLogic_Type, PyvtkDataIOManagerLogic_Methods,
    "vtkDataIOManagerLogic",
 &PyvtkDataIOManagerLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkSlicerModuleLogic_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataIOManagerLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataIOManagerLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataIOManagerLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

