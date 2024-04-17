// python wrapper for vtkMRMLCameraDisplayableManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLCameraDisplayableManager.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLCameraDisplayableManager(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLCameraDisplayableManager_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractThreeDViewDisplayableManager_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractThreeDViewDisplayableManager_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractThreeDViewDisplayableManager_ClassNew
#endif

static PyObject *
PyvtkMRMLCameraDisplayableManager_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLCameraDisplayableManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraDisplayableManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraDisplayableManager *op = static_cast<vtkMRMLCameraDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLCameraDisplayableManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraDisplayableManager_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLCameraDisplayableManager *tempr = vtkMRMLCameraDisplayableManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraDisplayableManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraDisplayableManager *op = static_cast<vtkMRMLCameraDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLCameraDisplayableManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLCameraDisplayableManager::NewInstance());

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
PyvtkMRMLCameraDisplayableManager_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLCameraDisplayableManager::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraDisplayableManager_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraDisplayableManager *op = static_cast<vtkMRMLCameraDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLCameraDisplayableManager::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraDisplayableManager_RemoveMRMLObservers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveMRMLObservers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraDisplayableManager *op = static_cast<vtkMRMLCameraDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveMRMLObservers();
    }
    else
    {
      op->vtkMRMLCameraDisplayableManager::RemoveMRMLObservers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraDisplayableManager_UpdateCameraNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCameraNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraDisplayableManager *op = static_cast<vtkMRMLCameraDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateCameraNode();
    }
    else
    {
      op->vtkMRMLCameraDisplayableManager::UpdateCameraNode();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraDisplayableManager_GetCameraNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCameraNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraDisplayableManager *op = static_cast<vtkMRMLCameraDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLCameraNode *tempr = (ap.IsBound() ?
      op->GetCameraNode() :
      op->vtkMRMLCameraDisplayableManager::GetCameraNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraDisplayableManager_CanProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraDisplayableManager *op = static_cast<vtkMRMLCameraDisplayableManager *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->CanProcessInteractionEvent(temp0, temp1) :
      op->vtkMRMLCameraDisplayableManager::CanProcessInteractionEvent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraDisplayableManager_ProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraDisplayableManager *op = static_cast<vtkMRMLCameraDisplayableManager *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessInteractionEvent(temp0) :
      op->vtkMRMLCameraDisplayableManager::ProcessInteractionEvent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLCameraDisplayableManager_GetCameraWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCameraWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLCameraDisplayableManager *op = static_cast<vtkMRMLCameraDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLCameraWidget *tempr = (ap.IsBound() ?
      op->GetCameraWidget() :
      op->vtkMRMLCameraDisplayableManager::GetCameraWidget());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLCameraDisplayableManager_Methods[] = {
  {"IsTypeOf", PyvtkMRMLCameraDisplayableManager_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLCameraDisplayableManager_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLCameraDisplayableManager_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLCameraDisplayableManager\nC++: static vtkMRMLCameraDisplayableManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLCameraDisplayableManager_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLCameraDisplayableManager\nC++: vtkMRMLCameraDisplayableManager *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLCameraDisplayableManager_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLCameraDisplayableManager_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RemoveMRMLObservers", PyvtkMRMLCameraDisplayableManager_RemoveMRMLObservers, METH_VARARGS,
   "RemoveMRMLObservers(self) -> None\nC++: void RemoveMRMLObservers() override;\n\nRemove MRML observers\n"},
  {"UpdateCameraNode", PyvtkMRMLCameraDisplayableManager_UpdateCameraNode, METH_VARARGS,
   "UpdateCameraNode(self) -> None\nC++: void UpdateCameraNode()\n\n"},
  {"GetCameraNode", PyvtkMRMLCameraDisplayableManager_GetCameraNode, METH_VARARGS,
   "GetCameraNode(self) -> vtkMRMLCameraNode\nC++: vtkMRMLCameraNode *GetCameraNode()\n\n"},
  {"CanProcessInteractionEvent", PyvtkMRMLCameraDisplayableManager_CanProcessInteractionEvent, METH_VARARGS,
   "CanProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData, closestDistance2:float)\n     -> bool\nC++: bool CanProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData,\n    double &closestDistance2) override;\n\nReturn true if the displayable manager can process the event.\nDistance2 is the squared distance in display coordinates from the\nclosest interaction position. The displayable manager with the\nclosest distance will get the chance to process the interaction\nevent.\n"},
  {"ProcessInteractionEvent", PyvtkMRMLCameraDisplayableManager_ProcessInteractionEvent, METH_VARARGS,
   "ProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData) -> bool\nC++: bool ProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData) override;\n\nProcess an interaction event. Returns true if the event should be\naborted (not processed any further by other event observers).\n"},
  {"GetCameraWidget", PyvtkMRMLCameraDisplayableManager_GetCameraWidget, METH_VARARGS,
   "GetCameraWidget(self) -> vtkMRMLCameraWidget\nC++: vtkMRMLCameraWidget *GetCameraWidget()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLCameraDisplayableManager_Doc =
  "vtkMRMLCameraDisplayableManager - no description provided.\n\n"
  "Superclass: vtkMRMLAbstractThreeDViewDisplayableManager\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLCameraDisplayableManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLCameraDisplayableManager", // tp_name
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
  PyvtkMRMLCameraDisplayableManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLCameraDisplayableManager_StaticNew()
{
  return vtkMRMLCameraDisplayableManager::New();
}

PyObject *PyvtkMRMLCameraDisplayableManager_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLCameraDisplayableManager_Type, PyvtkMRMLCameraDisplayableManager_Methods,
    "vtkMRMLCameraDisplayableManager",
 &PyvtkMRMLCameraDisplayableManager_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractThreeDViewDisplayableManager_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  o = PyLong_FromLong(vtkMRMLCameraDisplayableManager::ActiveCameraChangedEvent);
  if (o)
  {
    PyDict_SetItemString(d, "ActiveCameraChangedEvent", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLCameraDisplayableManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLCameraDisplayableManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLCameraDisplayableManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

