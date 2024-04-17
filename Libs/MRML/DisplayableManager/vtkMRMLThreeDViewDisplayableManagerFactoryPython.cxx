// python wrapper for vtkMRMLThreeDViewDisplayableManagerFactory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLThreeDViewDisplayableManagerFactory.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLThreeDViewDisplayableManagerFactory(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLThreeDViewDisplayableManagerFactory_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLDisplayableManagerFactory_ClassNew
extern "C" { PyObject *PyvtkMRMLDisplayableManagerFactory_ClassNew(); }
#define DECLARED_PyvtkMRMLDisplayableManagerFactory_ClassNew
#endif

static PyObject *
PyvtkMRMLThreeDViewDisplayableManagerFactory_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLThreeDViewDisplayableManagerFactory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLThreeDViewDisplayableManagerFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLThreeDViewDisplayableManagerFactory *op = static_cast<vtkMRMLThreeDViewDisplayableManagerFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLThreeDViewDisplayableManagerFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLThreeDViewDisplayableManagerFactory_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLThreeDViewDisplayableManagerFactory *tempr = vtkMRMLThreeDViewDisplayableManagerFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLThreeDViewDisplayableManagerFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLThreeDViewDisplayableManagerFactory *op = static_cast<vtkMRMLThreeDViewDisplayableManagerFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLThreeDViewDisplayableManagerFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLThreeDViewDisplayableManagerFactory::NewInstance());

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
PyvtkMRMLThreeDViewDisplayableManagerFactory_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLThreeDViewDisplayableManagerFactory::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLThreeDViewDisplayableManagerFactory_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLThreeDViewDisplayableManagerFactory *op = static_cast<vtkMRMLThreeDViewDisplayableManagerFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLThreeDViewDisplayableManagerFactory::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLThreeDViewDisplayableManagerFactory_GetInstance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMRMLThreeDViewDisplayableManagerFactory *tempr = vtkMRMLThreeDViewDisplayableManagerFactory::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLThreeDViewDisplayableManagerFactory_Methods[] = {
  {"IsTypeOf", PyvtkMRMLThreeDViewDisplayableManagerFactory_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLThreeDViewDisplayableManagerFactory_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLThreeDViewDisplayableManagerFactory_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLThreeDViewDisplayableManagerFactory\nC++: static vtkMRMLThreeDViewDisplayableManagerFactory *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLThreeDViewDisplayableManagerFactory_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLThreeDViewDisplayableManagerFactory\nC++: vtkMRMLThreeDViewDisplayableManagerFactory *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLThreeDViewDisplayableManagerFactory_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLThreeDViewDisplayableManagerFactory_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInstance", PyvtkMRMLThreeDViewDisplayableManagerFactory_GetInstance, METH_VARARGS,
   "GetInstance() -> vtkMRMLThreeDViewDisplayableManagerFactory\nC++: static vtkMRMLThreeDViewDisplayableManagerFactory *GetInstance(\n    )\n\nReturn the singleton instance with no reference counting.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLThreeDViewDisplayableManagerFactory_Doc =
  "vtkMRMLThreeDViewDisplayableManagerFactory - Factory where\ndisplayable manager classes are registered.\n\n"
  "Superclass: vtkMRMLDisplayableManagerFactory\n\n"
  "A displayable manager class is responsible to represent a\n"
  "MRMLDisplayable node in a renderer.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLThreeDViewDisplayableManagerFactory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLThreeDViewDisplayableManagerFactory", // tp_name
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
  PyvtkMRMLThreeDViewDisplayableManagerFactory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLThreeDViewDisplayableManagerFactory_StaticNew()
{
  return vtkMRMLThreeDViewDisplayableManagerFactory::New();
}

PyObject *PyvtkMRMLThreeDViewDisplayableManagerFactory_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLThreeDViewDisplayableManagerFactory_Type, PyvtkMRMLThreeDViewDisplayableManagerFactory_Methods,
    "vtkMRMLThreeDViewDisplayableManagerFactory",
 &PyvtkMRMLThreeDViewDisplayableManagerFactory_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLDisplayableManagerFactory_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLThreeDViewDisplayableManagerFactory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLThreeDViewDisplayableManagerFactory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLThreeDViewDisplayableManagerFactory", o) != 0)
  {
    Py_DECREF(o);
  }

}

