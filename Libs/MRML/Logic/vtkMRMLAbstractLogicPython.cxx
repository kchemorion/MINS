// python wrapper for vtkMRMLAbstractLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLAbstractLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLAbstractLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLAbstractLogic_ClassNew(); }


static PyObject *
PyvtkMRMLAbstractLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAbstractLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractLogic *op = static_cast<vtkMRMLAbstractLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLAbstractLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLAbstractLogic *tempr = vtkMRMLAbstractLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractLogic *op = static_cast<vtkMRMLAbstractLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAbstractLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLAbstractLogic::NewInstance());

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
PyvtkMRMLAbstractLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLAbstractLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractLogic *op = static_cast<vtkMRMLAbstractLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLAbstractLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractLogic_GetMRMLApplicationLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMRMLApplicationLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractLogic *op = static_cast<vtkMRMLAbstractLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLApplicationLogic *tempr = (ap.IsBound() ?
      op->GetMRMLApplicationLogic() :
      op->vtkMRMLAbstractLogic::GetMRMLApplicationLogic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractLogic_SetMRMLApplicationLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMRMLApplicationLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractLogic *op = static_cast<vtkMRMLAbstractLogic *>(vp);

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
      op->vtkMRMLAbstractLogic::SetMRMLApplicationLogic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractLogic_GetMRMLScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMRMLScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractLogic *op = static_cast<vtkMRMLAbstractLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLScene *tempr = (ap.IsBound() ?
      op->GetMRMLScene() :
      op->vtkMRMLAbstractLogic::GetMRMLScene());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractLogic_SetMRMLScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMRMLScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractLogic *op = static_cast<vtkMRMLAbstractLogic *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->SetMRMLScene(temp0);
    }
    else
    {
      op->vtkMRMLAbstractLogic::SetMRMLScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractLogic_SetAndObserveMRMLScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveMRMLScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractLogic *op = static_cast<vtkMRMLAbstractLogic *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveMRMLScene(temp0);
    }
    else
    {
      op->vtkMRMLAbstractLogic::SetAndObserveMRMLScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractLogic_SetAndObserveMRMLSceneEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveMRMLSceneEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractLogic *op = static_cast<vtkMRMLAbstractLogic *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  vtkIntArray *temp1 = nullptr;
  vtkFloatArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetVTKObject(temp1, "vtkIntArray") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkFloatArray")))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveMRMLSceneEvents(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLAbstractLogic::SetAndObserveMRMLSceneEvents(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLAbstractLogic_Methods[] = {
  {"IsTypeOf", PyvtkMRMLAbstractLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLAbstractLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLAbstractLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLAbstractLogic\nC++: static vtkMRMLAbstractLogic *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLAbstractLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLAbstractLogic\nC++: vtkMRMLAbstractLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLAbstractLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLAbstractLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMRMLApplicationLogic", PyvtkMRMLAbstractLogic_GetMRMLApplicationLogic, METH_VARARGS,
   "GetMRMLApplicationLogic(self) -> vtkMRMLApplicationLogic\nC++: virtual vtkMRMLApplicationLogic *GetMRMLApplicationLogic()\n\nGet access to overall application state\n"},
  {"SetMRMLApplicationLogic", PyvtkMRMLAbstractLogic_SetMRMLApplicationLogic, METH_VARARGS,
   "SetMRMLApplicationLogic(self, logic:vtkMRMLApplicationLogic)\n    -> None\nC++: virtual void SetMRMLApplicationLogic(\n    vtkMRMLApplicationLogic *logic)\n\n"},
  {"GetMRMLScene", PyvtkMRMLAbstractLogic_GetMRMLScene, METH_VARARGS,
   "GetMRMLScene(self) -> vtkMRMLScene\nC++: vtkMRMLScene *GetMRMLScene()\n\nReturn a reference to the current MRML scene\n"},
  {"SetMRMLScene", PyvtkMRMLAbstractLogic_SetMRMLScene, METH_VARARGS,
   "SetMRMLScene(self, newScene:vtkMRMLScene) -> None\nC++: void SetMRMLScene(vtkMRMLScene *newScene)\n\nSet and observe the MRMLScene\n"},
  {"SetAndObserveMRMLScene", PyvtkMRMLAbstractLogic_SetAndObserveMRMLScene, METH_VARARGS,
   "SetAndObserveMRMLScene(self, newScene:vtkMRMLScene) -> None\nC++: void SetAndObserveMRMLScene(vtkMRMLScene *newScene)\n\n@cond\\deprecated Still here for EMSegment Set and observe MRML\nScene. In order to provide a single method to set the scene,\nconsider overloading SetMRMLSceneInternal().\n\note After each module are ported to Qt, these methods will be\nremoved.\n Use SetMRMLScene() instead.\n\\sa SetMRMLSceneInternal()\n\\sa SetAndObserveMRMLSceneInternal()\n    SetAndObserveMRMLSceneEventsInternal()\n"},
  {"SetAndObserveMRMLSceneEvents", PyvtkMRMLAbstractLogic_SetAndObserveMRMLSceneEvents, METH_VARARGS,
   "SetAndObserveMRMLSceneEvents(self, newScene:vtkMRMLScene,\n    events:vtkIntArray, priorities:vtkFloatArray=...) -> None\nC++: void SetAndObserveMRMLSceneEvents(vtkMRMLScene *newScene,\n    vtkIntArray *events, vtkFloatArray *priorities=nullptr)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLAbstractLogic_Doc =
  "vtkMRMLAbstractLogic - Superclass for MRML logic classes.\n\n"
  "Superclass: vtkObject\n\n"
  "Superclass for all MRML logic classes. When a scene is set,\n"
  "SetMRMLScene(vtkMRMLScene*),\n"
  "- UnobserveMRMLScene() is called if a scene was previously set,\n"
  "- SetMRMLSceneInternal() is called to observe the scene events (e.g.\n"
  "  StartImportEvent, EndBatchProcessEvent...)\n"
  "- ObserveMRMLScene() is called to initialize the scene from the logic\n"
  "- UpdateMRMLScene() is called to initialize the logic from the scene\n"
  "  Later, when events are fired by the scene, corresponding methods\n"
  "  (e.g. OnMRMLSceneNodeAdded, OnMRMLEndBatchProcess...) are called in\n"
  "the logic if the events have been previously observed in\n"
  "  SetMRMLSceneInternal()\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAbstractLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLLogicPython.vtkMRMLAbstractLogic", // tp_name
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
  PyvtkMRMLAbstractLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLAbstractLogic_StaticNew()
{
  return vtkMRMLAbstractLogic::New();
}

PyObject *PyvtkMRMLAbstractLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLAbstractLogic_Type, PyvtkMRMLAbstractLogic_Methods,
    "vtkMRMLAbstractLogic",
 &PyvtkMRMLAbstractLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLAbstractLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLAbstractLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLAbstractLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

