// python wrapper for vtkMRMLAbstractThreeDViewDisplayableManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLAbstractThreeDViewDisplayableManager.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLAbstractThreeDViewDisplayableManager(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLAbstractThreeDViewDisplayableManager_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractDisplayableManager_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractDisplayableManager_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractDisplayableManager_ClassNew
#endif

static PyObject *
PyvtkMRMLAbstractThreeDViewDisplayableManager_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAbstractThreeDViewDisplayableManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractThreeDViewDisplayableManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractThreeDViewDisplayableManager *op = static_cast<vtkMRMLAbstractThreeDViewDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLAbstractThreeDViewDisplayableManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractThreeDViewDisplayableManager_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLAbstractThreeDViewDisplayableManager *tempr = vtkMRMLAbstractThreeDViewDisplayableManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractThreeDViewDisplayableManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractThreeDViewDisplayableManager *op = static_cast<vtkMRMLAbstractThreeDViewDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAbstractThreeDViewDisplayableManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLAbstractThreeDViewDisplayableManager::NewInstance());

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
PyvtkMRMLAbstractThreeDViewDisplayableManager_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLAbstractThreeDViewDisplayableManager::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractThreeDViewDisplayableManager_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractThreeDViewDisplayableManager *op = static_cast<vtkMRMLAbstractThreeDViewDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLAbstractThreeDViewDisplayableManager::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractThreeDViewDisplayableManager_GetMRMLViewNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMRMLViewNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractThreeDViewDisplayableManager *op = static_cast<vtkMRMLAbstractThreeDViewDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLViewNode *tempr = (ap.IsBound() ?
      op->GetMRMLViewNode() :
      op->vtkMRMLAbstractThreeDViewDisplayableManager::GetMRMLViewNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractThreeDViewDisplayableManager_Pick3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractThreeDViewDisplayableManager *op = static_cast<vtkMRMLAbstractThreeDViewDisplayableManager *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Pick3D(temp0) :
      op->vtkMRMLAbstractThreeDViewDisplayableManager::Pick3D(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractThreeDViewDisplayableManager_GetPickedNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractThreeDViewDisplayableManager *op = static_cast<vtkMRMLAbstractThreeDViewDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPickedNodeID() :
      op->vtkMRMLAbstractThreeDViewDisplayableManager::GetPickedNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLAbstractThreeDViewDisplayableManager_Methods[] = {
  {"IsTypeOf", PyvtkMRMLAbstractThreeDViewDisplayableManager_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLAbstractThreeDViewDisplayableManager_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLAbstractThreeDViewDisplayableManager_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLAbstractThreeDViewDisplayableManager\nC++: static vtkMRMLAbstractThreeDViewDisplayableManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLAbstractThreeDViewDisplayableManager_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLAbstractThreeDViewDisplayableManager\nC++: vtkMRMLAbstractThreeDViewDisplayableManager *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLAbstractThreeDViewDisplayableManager_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLAbstractThreeDViewDisplayableManager_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMRMLViewNode", PyvtkMRMLAbstractThreeDViewDisplayableManager_GetMRMLViewNode, METH_VARARGS,
   "GetMRMLViewNode(self) -> vtkMRMLViewNode\nC++: vtkMRMLViewNode *GetMRMLViewNode()\n\nGet MRML ViewNode\n"},
  {"Pick3D", PyvtkMRMLAbstractThreeDViewDisplayableManager_Pick3D, METH_VARARGS,
   "Pick3D(self, ras:[float, float, float]) -> int\nC++: virtual int Pick3D(double ras[3])\n\nFind display node managed by the displayable manager at a\nspecified world RAS position.\n\\return Non-zero in case a node is found at the position, 0\n    otherwise\n"},
  {"GetPickedNodeID", PyvtkMRMLAbstractThreeDViewDisplayableManager_GetPickedNodeID, METH_VARARGS,
   "GetPickedNodeID(self) -> str\nC++: virtual const char *GetPickedNodeID()\n\nGet the MRML ID of the picked node, returns empty string if no\npick\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLAbstractThreeDViewDisplayableManager_Doc =
  "vtkMRMLAbstractThreeDViewDisplayableManager - Superclass for\ndisplayable manager classes.\n\n"
  "Superclass: vtkMRMLAbstractDisplayableManager\n\n"
  "A displayable manager class is responsible to represent a\n"
  "MRMLDisplayable node in a renderer.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAbstractThreeDViewDisplayableManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLAbstractThreeDViewDisplayableManager", // tp_name
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
  PyvtkMRMLAbstractThreeDViewDisplayableManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLAbstractThreeDViewDisplayableManager_StaticNew()
{
  return vtkMRMLAbstractThreeDViewDisplayableManager::New();
}

PyObject *PyvtkMRMLAbstractThreeDViewDisplayableManager_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLAbstractThreeDViewDisplayableManager_Type, PyvtkMRMLAbstractThreeDViewDisplayableManager_Methods,
    "vtkMRMLAbstractThreeDViewDisplayableManager",
 &PyvtkMRMLAbstractThreeDViewDisplayableManager_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractDisplayableManager_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLAbstractThreeDViewDisplayableManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLAbstractThreeDViewDisplayableManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLAbstractThreeDViewDisplayableManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

