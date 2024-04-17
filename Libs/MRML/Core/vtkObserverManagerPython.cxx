// python wrapper for vtkObserverManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObserverManager.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkObserverManager(PyObject *dict); }
extern "C" { PyObject *PyvtkObserverManager_ClassNew(); }


static PyObject *
PyvtkObserverManager_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkObserverManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObserverManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverManager *op = static_cast<vtkObserverManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkObserverManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObserverManager_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkObserverManager *tempr = vtkObserverManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObserverManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverManager *op = static_cast<vtkObserverManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObserverManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkObserverManager::NewInstance());

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
PyvtkObserverManager_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkObserverManager::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObserverManager_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverManager *op = static_cast<vtkObserverManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkObserverManager::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObserverManager_RemoveObjectEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObjectEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverManager *op = static_cast<vtkObserverManager *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveObjectEvents(temp0);
    }
    else
    {
      op->vtkObserverManager::RemoveObjectEvents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObserverManager_GetObjectEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverManager *op = static_cast<vtkObserverManager *>(vp);

  vtkObject *temp0 = nullptr;
  vtkIntArray *temp1 = nullptr;
  vtkFloatArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetVTKObject(temp1, "vtkIntArray") &&
      ap.GetVTKObject(temp2, "vtkFloatArray"))
  {
    if (ap.IsBound())
    {
      op->GetObjectEvents(temp0, temp1, temp2);
    }
    else
    {
      op->vtkObserverManager::GetObjectEvents(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObserverManager_ObserveObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ObserveObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverManager *op = static_cast<vtkObserverManager *>(vp);

  vtkObject *temp0 = nullptr;
  float temp1 = 0.0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->ObserveObject(temp0, temp1);
    }
    else
    {
      op->vtkObserverManager::ObserveObject(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObserverManager_AddObjectEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddObjectEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverManager *op = static_cast<vtkObserverManager *>(vp);

  vtkObject *temp0 = nullptr;
  vtkIntArray *temp1 = nullptr;
  vtkFloatArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetVTKObject(temp1, "vtkIntArray") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkFloatArray")))
  {
    if (ap.IsBound())
    {
      op->AddObjectEvents(temp0, temp1, temp2);
    }
    else
    {
      op->vtkObserverManager::AddObjectEvents(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObserverManager_GetOwner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOwner");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverManager *op = static_cast<vtkObserverManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetOwner() :
      op->vtkObserverManager::GetOwner());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObserverManager_AssignOwner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignOwner");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverManager *op = static_cast<vtkObserverManager *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->AssignOwner(temp0);
    }
    else
    {
      op->vtkObserverManager::AssignOwner(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObserverManager_GetObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverManager *op = static_cast<vtkObserverManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetObserver() :
      op->vtkObserverManager::GetObserver());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObserverManager_GetCallbackCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCallbackCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverManager *op = static_cast<vtkObserverManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCallbackCommand *tempr = (ap.IsBound() ?
      op->GetCallbackCommand() :
      op->vtkObserverManager::GetCallbackCommand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObserverManager_GetObservationsCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObservationsCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObserverManager *op = static_cast<vtkObserverManager *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->GetObservationsCount(temp0, temp1) :
      op->vtkObserverManager::GetObservationsCount(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkObserverManager_Methods[] = {
  {"IsTypeOf", PyvtkObserverManager_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkObserverManager_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkObserverManager_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkObserverManager\nC++: static vtkObserverManager *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkObserverManager_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkObserverManager\nC++: vtkObserverManager *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkObserverManager_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkObserverManager_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RemoveObjectEvents", PyvtkObserverManager_RemoveObjectEvents, METH_VARARGS,
   "RemoveObjectEvents(self, nodePtr:vtkObject) -> None\nC++: void RemoveObjectEvents(vtkObject *nodePtr)\n\nremove all observers for all events\n"},
  {"GetObjectEvents", PyvtkObserverManager_GetObjectEvents, METH_VARARGS,
   "GetObjectEvents(self, nodePtr:vtkObject, events:vtkIntArray,\n    priorities:vtkFloatArray) -> None\nC++: void GetObjectEvents(vtkObject *nodePtr, vtkIntArray *events,\n     vtkFloatArray *priorities)\n\nget a list of all observed events and priorities for the selected\nnode\n"},
  {"ObserveObject", PyvtkObserverManager_ObserveObject, METH_VARARGS,
   "ObserveObject(self, node:vtkObject, priority:float=0.0) -> None\nC++: void ObserveObject(vtkObject *node, float priority=0.0)\n\nObserve ModifiedEvent on the object\n"},
  {"AddObjectEvents", PyvtkObserverManager_AddObjectEvents, METH_VARARGS,
   "AddObjectEvents(self, nodePtr:vtkObject, events:vtkIntArray,\n    priorities:vtkFloatArray=...) -> None\nC++: void AddObjectEvents(vtkObject *nodePtr, vtkIntArray *events,\n     vtkFloatArray *priorities=nullptr)\n\nadd observers for specified events\n"},
  {"GetOwner", PyvtkObserverManager_GetOwner, METH_VARARGS,
   "GetOwner(self) -> vtkObject\nC++: virtual vtkObject *GetOwner()\n\naccessors for the owner class\n- note we do not hold a registered pointer to the owner to avoid\n  reference loops\n- the owner must be careful to always clean up the\n  ObserverManager in the destructor (this is the standard use\n  case)\n"},
  {"AssignOwner", PyvtkObserverManager_AssignOwner, METH_VARARGS,
   "AssignOwner(self, owner:vtkObject) -> None\nC++: void AssignOwner(vtkObject *owner)\n\n"},
  {"GetObserver", PyvtkObserverManager_GetObserver, METH_VARARGS,
   "GetObserver(self) -> vtkObject\nC++: vtkObject *GetObserver()\n\nReturns the owner if any, otherwise returns the manager itself\n"},
  {"GetCallbackCommand", PyvtkObserverManager_GetCallbackCommand, METH_VARARGS,
   "GetCallbackCommand(self) -> vtkCallbackCommand\nC++: virtual vtkCallbackCommand *GetCallbackCommand()\n\n"},
  {"GetObservationsCount", PyvtkObserverManager_GetObservationsCount, METH_VARARGS,
   "GetObservationsCount(self, nodePtr:vtkObject, event:int=0) -> int\nC++: int GetObservationsCount(vtkObject *nodePtr,\n    unsigned long event=0)\n\nReturn the number of observations by the manager on the node. If\nevent is != 0 , only observations matching the events are counted\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkObserverManager_Doc =
  "vtkObserverManager - Manages adding and deleting of observers with\nevents.\n\n"
  "Superclass: vtkObject\n\n"
  "Class that manages adding and deleting of observers with events This\n"
  "class keeps track of observers and events added to each vtk object it\n"
  "caches tags returned by AddObserver method so that observers can be\n"
  "removed properly.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkObserverManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkObserverManager", // tp_name
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
  PyvtkObserverManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkObserverManager_StaticNew()
{
  return vtkObserverManager::New();
}

PyObject *PyvtkObserverManager_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkObserverManager_Type, PyvtkObserverManager_Methods,
    "vtkObserverManager",
 &PyvtkObserverManager_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkObserverManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkObserverManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkObserverManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

