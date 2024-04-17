// python wrapper for vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_ClassNew(); }


static PyObject *
PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory *op = static_cast<vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory *tempr = vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory *op = static_cast<vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory::NewInstance());

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
PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory *op = static_cast<vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory *op = static_cast<vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescription() :
      op->vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory::GetDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_GetVTKSourceVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKSourceVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory *op = static_cast<vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVTKSourceVersion() :
      op->vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory::GetVTKSourceVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_Methods[] = {
  {"IsTypeOf", PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory\nC++: static vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_NewInstance, METH_VARARGS,
   "NewInstance(self)\n    -> vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory\nC++: vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory *NewInstance(\n    )\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDescription", PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_GetDescription, METH_VARARGS,
   "GetDescription(self) -> str\nC++: const char *GetDescription() override;\n\nReturn a descriptive string describing the factory.\n"},
  {"GetVTKSourceVersion", PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_GetVTKSourceVersion, METH_VARARGS,
   "GetVTKSourceVersion(self) -> str\nC++: const char *GetVTKSourceVersion() override;\n\nAll sub-classes of vtkObjectFactory should must return the\nversion of VTK they were built with.  This should be implemented\nwith the macro VTK_SOURCE_VERSION and NOT a call to\nvtkVersion::GetVTKSourceVersion. As the version needs to be\ncompiled into the file as a string constant. This is critical to\ndetermine possible incompatible dynamic factory loads.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_Doc =
  "vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory - no description provided.\n\n"
  "Superclass: vtkObjectFactory\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerSegmentationsModuleMRMLDisplayableManagerPython.vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory", // tp_name
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
  PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_StaticNew()
{
  return vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory::New();
}

PyObject *PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_Type, PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_Methods,
    "vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory",
 &PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObjectFactory");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory", o) != 0)
  {
    Py_DECREF(o);
  }

}

