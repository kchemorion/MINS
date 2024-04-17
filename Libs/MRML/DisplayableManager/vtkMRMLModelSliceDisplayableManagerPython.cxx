// python wrapper for vtkMRMLModelSliceDisplayableManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLModelSliceDisplayableManager.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLModelSliceDisplayableManager(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLModelSliceDisplayableManager_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractSliceViewDisplayableManager_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractSliceViewDisplayableManager_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractSliceViewDisplayableManager_ClassNew
#endif

static PyObject *
PyvtkMRMLModelSliceDisplayableManager_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLModelSliceDisplayableManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelSliceDisplayableManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelSliceDisplayableManager *op = static_cast<vtkMRMLModelSliceDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLModelSliceDisplayableManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelSliceDisplayableManager_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLModelSliceDisplayableManager *tempr = vtkMRMLModelSliceDisplayableManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelSliceDisplayableManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelSliceDisplayableManager *op = static_cast<vtkMRMLModelSliceDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLModelSliceDisplayableManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLModelSliceDisplayableManager::NewInstance());

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
PyvtkMRMLModelSliceDisplayableManager_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLModelSliceDisplayableManager::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelSliceDisplayableManager_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelSliceDisplayableManager *op = static_cast<vtkMRMLModelSliceDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLModelSliceDisplayableManager::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelSliceDisplayableManager_AddDisplayableNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDisplayableNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelSliceDisplayableManager *op = static_cast<vtkMRMLModelSliceDisplayableManager *>(vp);

  vtkMRMLDisplayableNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableNode"))
  {
    if (ap.IsBound())
    {
      op->AddDisplayableNode(temp0);
    }
    else
    {
      op->vtkMRMLModelSliceDisplayableManager::AddDisplayableNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelSliceDisplayableManager_RemoveDisplayableNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDisplayableNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelSliceDisplayableManager *op = static_cast<vtkMRMLModelSliceDisplayableManager *>(vp);

  vtkMRMLDisplayableNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableNode"))
  {
    if (ap.IsBound())
    {
      op->RemoveDisplayableNode(temp0);
    }
    else
    {
      op->vtkMRMLModelSliceDisplayableManager::RemoveDisplayableNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLModelSliceDisplayableManager_Methods[] = {
  {"IsTypeOf", PyvtkMRMLModelSliceDisplayableManager_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLModelSliceDisplayableManager_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLModelSliceDisplayableManager_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLModelSliceDisplayableManager\nC++: static vtkMRMLModelSliceDisplayableManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLModelSliceDisplayableManager_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLModelSliceDisplayableManager\nC++: vtkMRMLModelSliceDisplayableManager *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLModelSliceDisplayableManager_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLModelSliceDisplayableManager_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddDisplayableNode", PyvtkMRMLModelSliceDisplayableManager_AddDisplayableNode, METH_VARARGS,
   "AddDisplayableNode(self, displayableNode:vtkMRMLDisplayableNode)\n    -> None\nC++: void AddDisplayableNode(\n    vtkMRMLDisplayableNode *displayableNode)\n\n"},
  {"RemoveDisplayableNode", PyvtkMRMLModelSliceDisplayableManager_RemoveDisplayableNode, METH_VARARGS,
   "RemoveDisplayableNode(self,\n    displayableNode:vtkMRMLDisplayableNode) -> None\nC++: void RemoveDisplayableNode(\n    vtkMRMLDisplayableNode *displayableNode)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLModelSliceDisplayableManager_Doc =
  "vtkMRMLModelSliceDisplayableManager - Displayable manager for slice\n(2D) views.\n\n"
  "Superclass: vtkMRMLAbstractSliceViewDisplayableManager\n\n"
  "Responsible for any display on Slice views that is not the slice\n"
  "themselves nor the annotations. Currently support only glyph display\n"
  "for Diffusion Tensor volumes.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLModelSliceDisplayableManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLModelSliceDisplayableManager", // tp_name
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
  PyvtkMRMLModelSliceDisplayableManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLModelSliceDisplayableManager_StaticNew()
{
  return vtkMRMLModelSliceDisplayableManager::New();
}

PyObject *PyvtkMRMLModelSliceDisplayableManager_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLModelSliceDisplayableManager_Type, PyvtkMRMLModelSliceDisplayableManager_Methods,
    "vtkMRMLModelSliceDisplayableManager",
 &PyvtkMRMLModelSliceDisplayableManager_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractSliceViewDisplayableManager_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLModelSliceDisplayableManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLModelSliceDisplayableManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLModelSliceDisplayableManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

