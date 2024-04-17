// python wrapper for vtkMRMLI18N
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLI18N.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLI18N(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLI18N_ClassNew(); }


static PyObject *
PyvtkMRMLI18N_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLI18N::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLI18N_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLI18N *op = static_cast<vtkMRMLI18N *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLI18N::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLI18N_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLI18N *tempr = vtkMRMLI18N::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLI18N_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLI18N *op = static_cast<vtkMRMLI18N *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLI18N *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLI18N::NewInstance());

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
PyvtkMRMLI18N_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLI18N::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLI18N_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLI18N *op = static_cast<vtkMRMLI18N *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLI18N::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLI18N_GetInstance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMRMLI18N *tempr = vtkMRMLI18N::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLI18N_Translate(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Translate");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  int temp3 = -1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    std::string tempr = vtkMRMLI18N::Translate(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLI18N_SetTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLI18N *op = static_cast<vtkMRMLI18N *>(vp);

  vtkMRMLTranslator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLTranslator"))
  {
    if (ap.IsBound())
    {
      op->SetTranslator(temp0);
    }
    else
    {
      op->vtkMRMLI18N::SetTranslator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLI18N_GetTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLI18N *op = static_cast<vtkMRMLI18N *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLTranslator *tempr = (ap.IsBound() ?
      op->GetTranslator() :
      op->vtkMRMLI18N::GetTranslator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLI18N_Methods[] = {
  {"IsTypeOf", PyvtkMRMLI18N_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLI18N_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLI18N_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLI18N\nC++: static vtkMRMLI18N *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLI18N_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLI18N\nC++: vtkMRMLI18N *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLI18N_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLI18N_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInstance", PyvtkMRMLI18N_GetInstance, METH_VARARGS,
   "GetInstance() -> vtkMRMLI18N\nC++: static vtkMRMLI18N *GetInstance()\n\nReturn the singleton instance with no reference counting.\n"},
  {"Translate", PyvtkMRMLI18N_Translate, METH_VARARGS,
   "Translate(context:str, sourceText:str, disambiguation:str=...,\n    n:int=-1) -> str\nC++: static std::string Translate(const char *context,\n    const char *sourceText, const char *disambiguation=nullptr,\n    int n=-1)\n\nTranslate message with the current translator\n"},
  {"SetTranslator", PyvtkMRMLI18N_SetTranslator, METH_VARARGS,
   "SetTranslator(self, translator:vtkMRMLTranslator) -> None\nC++: void SetTranslator(vtkMRMLTranslator *translator)\n\nSet translator object. This class takes ownership of the\ntranslator and it releases it when the process quits.\n"},
  {"GetTranslator", PyvtkMRMLI18N_GetTranslator, METH_VARARGS,
   "GetTranslator(self) -> vtkMRMLTranslator\nC++: virtual vtkMRMLTranslator *GetTranslator()\n\nGet translator object that can translate text that is displayed\nto the user to the currently chosen language.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLI18N_Doc =
  "vtkMRMLI18N - Class that provide internationalization (i18n)\nfeatures, such as language translation or region-specific units and\ndate formatting.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLI18N_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLI18N", // tp_name
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
  PyvtkMRMLI18N_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLI18N_StaticNew()
{
  return vtkMRMLI18N::New();
}

PyObject *PyvtkMRMLI18N_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLI18N_Type, PyvtkMRMLI18N_Methods,
    "vtkMRMLI18N",
 &PyvtkMRMLI18N_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef PyvtkMRMLI18NInitialize_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkMRMLI18NInitialize_vtkMRMLI18NInitialize_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMRMLI18NInitialize");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMRMLI18NInitialize *op = new vtkMRMLI18NInitialize();

    result = PyVTKSpecialObject_New("vtkMRMLI18NInitialize", op);
  }

  return result;
}

static PyObject *
PyvtkMRMLI18NInitialize_vtkMRMLI18NInitialize_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMRMLI18NInitialize");

  vtkMRMLI18NInitialize *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMRMLI18NInitialize"))
  {
    vtkMRMLI18NInitialize *op = new vtkMRMLI18NInitialize(*temp0);

    result = PyVTKSpecialObject_New("vtkMRMLI18NInitialize", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMRMLI18NInitialize_vtkMRMLI18NInitialize_Methods[] = {
  {"vtkMRMLI18NInitialize", PyvtkMRMLI18NInitialize_vtkMRMLI18NInitialize_s2, METH_VARARGS,
   "@W vtkMRMLI18NInitialize"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLI18NInitialize_vtkMRMLI18NInitialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLI18NInitialize_vtkMRMLI18NInitialize_s1(self, args);
    case 1:
      return PyvtkMRMLI18NInitialize_vtkMRMLI18NInitialize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkMRMLI18NInitialize");
  return nullptr;
}


static const char *PyvtkMRMLI18NInitialize_Doc =

  "vtkMRMLI18NInitialize() -> vtkMRMLI18NInitialize\nC++: vtkMRMLI18NInitialize()\nvtkMRMLI18NInitialize(__a:vtkMRMLI18NInitialize)\n    -> vtkMRMLI18NInitialize\nC++: vtkMRMLI18NInitialize(const &vtkMRMLI18NInitialize)\n""\n"
  "vtkMRMLI18NInitialize - Utility class to make sure\nqSlicerModuleManager is initialized before it is used.\n\n"
;

static PyObject *
PyvtkMRMLI18NInitialize_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkMRMLI18NInitialize_vtkMRMLI18NInitialize(nullptr, args);
}

static void PyvtkMRMLI18NInitialize_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkMRMLI18NInitialize *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkMRMLI18NInitialize_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLI18NInitialize_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLI18NInitialize", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkMRMLI18NInitialize_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkMRMLI18NInitialize_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkMRMLI18NInitialize_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkMRMLI18NInitialize_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkMRMLI18NInitialize_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkMRMLI18NInitialize(*static_cast<const vtkMRMLI18NInitialize*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkMRMLI18NInitialize_TypeNew
extern "C" { PyObject *PyvtkMRMLI18NInitialize_TypeNew(); }
#define DECLARED_PyvtkMRMLI18NInitialize_TypeNew
#endif

PyObject *PyvtkMRMLI18NInitialize_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkMRMLI18NInitialize_Type,
    PyvtkMRMLI18NInitialize_Methods,
    PyvtkMRMLI18NInitialize_vtkMRMLI18NInitialize_Methods,
    &PyvtkMRMLI18NInitialize_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLI18N(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLI18N_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLI18N", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkMRMLI18NInitialize_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLI18NInitialize", o) != 0)
  {
    Py_DECREF(o);
  }

}

