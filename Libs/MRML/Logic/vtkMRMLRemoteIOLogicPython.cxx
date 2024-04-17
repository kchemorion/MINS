// python wrapper for vtkMRMLRemoteIOLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLRemoteIOLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLRemoteIOLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLRemoteIOLogic_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractLogic_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractLogic_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractLogic_ClassNew
#endif

static PyObject *
PyvtkMRMLRemoteIOLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLRemoteIOLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRemoteIOLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRemoteIOLogic *op = static_cast<vtkMRMLRemoteIOLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLRemoteIOLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRemoteIOLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLRemoteIOLogic *tempr = vtkMRMLRemoteIOLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRemoteIOLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRemoteIOLogic *op = static_cast<vtkMRMLRemoteIOLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLRemoteIOLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLRemoteIOLogic::NewInstance());

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
PyvtkMRMLRemoteIOLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLRemoteIOLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRemoteIOLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRemoteIOLogic *op = static_cast<vtkMRMLRemoteIOLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLRemoteIOLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRemoteIOLogic_AddDataIOToScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataIOToScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRemoteIOLogic *op = static_cast<vtkMRMLRemoteIOLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddDataIOToScene();
    }
    else
    {
      op->vtkMRMLRemoteIOLogic::AddDataIOToScene();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRemoteIOLogic_RemoveDataIOFromScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataIOFromScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRemoteIOLogic *op = static_cast<vtkMRMLRemoteIOLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveDataIOFromScene();
    }
    else
    {
      op->vtkMRMLRemoteIOLogic::RemoveDataIOFromScene();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRemoteIOLogic_GetCacheManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRemoteIOLogic *op = static_cast<vtkMRMLRemoteIOLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCacheManager *tempr = (ap.IsBound() ?
      op->GetCacheManager() :
      op->vtkMRMLRemoteIOLogic::GetCacheManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRemoteIOLogic_SetCacheManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRemoteIOLogic *op = static_cast<vtkMRMLRemoteIOLogic *>(vp);

  vtkCacheManager *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCacheManager"))
  {
    if (ap.IsBound())
    {
      op->SetCacheManager(temp0);
    }
    else
    {
      op->vtkMRMLRemoteIOLogic::SetCacheManager(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRemoteIOLogic_GetDataIOManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataIOManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRemoteIOLogic *op = static_cast<vtkMRMLRemoteIOLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataIOManager *tempr = (ap.IsBound() ?
      op->GetDataIOManager() :
      op->vtkMRMLRemoteIOLogic::GetDataIOManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRemoteIOLogic_SetDataIOManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataIOManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRemoteIOLogic *op = static_cast<vtkMRMLRemoteIOLogic *>(vp);

  vtkDataIOManager *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataIOManager"))
  {
    if (ap.IsBound())
    {
      op->SetDataIOManager(temp0);
    }
    else
    {
      op->vtkMRMLRemoteIOLogic::SetDataIOManager(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRemoteIOLogic_SetCaCertificatesPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaCertificatesPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRemoteIOLogic *op = static_cast<vtkMRMLRemoteIOLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCaCertificatesPath(temp0);
    }
    else
    {
      op->vtkMRMLRemoteIOLogic::SetCaCertificatesPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRemoteIOLogic_GetCaCertificatesPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaCertificatesPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRemoteIOLogic *op = static_cast<vtkMRMLRemoteIOLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCaCertificatesPath() :
      op->vtkMRMLRemoteIOLogic::GetCaCertificatesPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLRemoteIOLogic_Methods[] = {
  {"IsTypeOf", PyvtkMRMLRemoteIOLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLRemoteIOLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLRemoteIOLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLRemoteIOLogic\nC++: static vtkMRMLRemoteIOLogic *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLRemoteIOLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLRemoteIOLogic\nC++: vtkMRMLRemoteIOLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLRemoteIOLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLRemoteIOLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddDataIOToScene", PyvtkMRMLRemoteIOLogic_AddDataIOToScene, METH_VARARGS,
   "AddDataIOToScene(self) -> None\nC++: void AddDataIOToScene()\n\n"},
  {"RemoveDataIOFromScene", PyvtkMRMLRemoteIOLogic_RemoveDataIOFromScene, METH_VARARGS,
   "RemoveDataIOFromScene(self) -> None\nC++: void RemoveDataIOFromScene()\n\n"},
  {"GetCacheManager", PyvtkMRMLRemoteIOLogic_GetCacheManager, METH_VARARGS,
   "GetCacheManager(self) -> vtkCacheManager\nC++: virtual vtkCacheManager *GetCacheManager()\n\nAccessors for the components of the remote IO infrastructure Note\nthat the internal instances are created in the constructor and\nused when calling AddDataIOToScene and RemoveDataIOFromScene The\nGet methods can be used elsewhere, but the set methods should\nonly be used for debugging\n"},
  {"SetCacheManager", PyvtkMRMLRemoteIOLogic_SetCacheManager, METH_VARARGS,
   "SetCacheManager(self, __a:vtkCacheManager) -> None\nC++: virtual void SetCacheManager(vtkCacheManager *)\n\n"},
  {"GetDataIOManager", PyvtkMRMLRemoteIOLogic_GetDataIOManager, METH_VARARGS,
   "GetDataIOManager(self) -> vtkDataIOManager\nC++: virtual vtkDataIOManager *GetDataIOManager()\n\n"},
  {"SetDataIOManager", PyvtkMRMLRemoteIOLogic_SetDataIOManager, METH_VARARGS,
   "SetDataIOManager(self, __a:vtkDataIOManager) -> None\nC++: virtual void SetDataIOManager(vtkDataIOManager *)\n\n"},
  {"SetCaCertificatesPath", PyvtkMRMLRemoteIOLogic_SetCaCertificatesPath, METH_VARARGS,
   "SetCaCertificatesPath(self, _arg:str) -> None\nC++: virtual void SetCaCertificatesPath(const char *_arg)\n\nCA Certificates path for https protocol.\n"},
  {"GetCaCertificatesPath", PyvtkMRMLRemoteIOLogic_GetCaCertificatesPath, METH_VARARGS,
   "GetCaCertificatesPath(self) -> str\nC++: virtual char *GetCaCertificatesPath()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLRemoteIOLogic_Doc =
  "vtkMRMLRemoteIOLogic - no description provided.\n\n"
  "Superclass: vtkMRMLAbstractLogic\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLRemoteIOLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLLogicPython.vtkMRMLRemoteIOLogic", // tp_name
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
  PyvtkMRMLRemoteIOLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLRemoteIOLogic_StaticNew()
{
  return vtkMRMLRemoteIOLogic::New();
}

PyObject *PyvtkMRMLRemoteIOLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLRemoteIOLogic_Type, PyvtkMRMLRemoteIOLogic_Methods,
    "vtkMRMLRemoteIOLogic",
 &PyvtkMRMLRemoteIOLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractLogic_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLRemoteIOLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLRemoteIOLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLRemoteIOLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

