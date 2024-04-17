// python wrapper for vtkErrorSink
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkErrorSink.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkErrorSink(PyObject *dict); }
extern "C" { PyObject *PyvtkErrorSink_ClassNew(); }


static PyObject *
PyvtkErrorSink_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkErrorSink::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkErrorSink_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkErrorSink *op = static_cast<vtkErrorSink *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkErrorSink::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkErrorSink_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkErrorSink *tempr = vtkErrorSink::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkErrorSink_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkErrorSink *op = static_cast<vtkErrorSink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkErrorSink *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkErrorSink::NewInstance());

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
PyvtkErrorSink_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkErrorSink::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkErrorSink_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkErrorSink *op = static_cast<vtkErrorSink *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkErrorSink::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkErrorSink_SetObservedObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObservedObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkErrorSink *op = static_cast<vtkErrorSink *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->SetObservedObject(temp0);
    }
    else
    {
      op->vtkErrorSink::SetObservedObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkErrorSink_HasErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkErrorSink *op = static_cast<vtkErrorSink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasErrors() :
      op->vtkErrorSink::HasErrors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkErrorSink_HasWarnings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasWarnings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkErrorSink *op = static_cast<vtkErrorSink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasWarnings() :
      op->vtkErrorSink::HasWarnings());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkErrorSink_GetNumberOfMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkErrorSink *op = static_cast<vtkErrorSink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMessages() :
      op->vtkErrorSink::GetNumberOfMessages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkErrorSink_DisplayMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkErrorSink *op = static_cast<vtkErrorSink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisplayMessages();
    }
    else
    {
      op->vtkErrorSink::DisplayMessages();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkErrorSink_Methods[] = {
  {"IsTypeOf", PyvtkErrorSink_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkErrorSink_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkErrorSink_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkErrorSink\nC++: static vtkErrorSink *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkErrorSink_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkErrorSink\nC++: vtkErrorSink *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkErrorSink_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkErrorSink_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetObservedObject", PyvtkErrorSink_SetObservedObject, METH_VARARGS,
   "SetObservedObject(self, observedObject:vtkObject) -> None\nC++: virtual void SetObservedObject(vtkObject *observedObject)\n\nObserve error and warnings reported by observedObject.\n"},
  {"HasErrors", PyvtkErrorSink_HasErrors, METH_VARARGS,
   "HasErrors(self) -> bool\nC++: virtual bool HasErrors()\n\nReturn true if the observed object reported errors.\n"},
  {"HasWarnings", PyvtkErrorSink_HasWarnings, METH_VARARGS,
   "HasWarnings(self) -> bool\nC++: virtual bool HasWarnings()\n\nReturn true if the observed object reported errors.\n"},
  {"GetNumberOfMessages", PyvtkErrorSink_GetNumberOfMessages, METH_VARARGS,
   "GetNumberOfMessages(self) -> int\nC++: virtual int GetNumberOfMessages()\n\nReturn number of reported error or warning messages.\n"},
  {"DisplayMessages", PyvtkErrorSink_DisplayMessages, METH_VARARGS,
   "DisplayMessages(self) -> None\nC++: void DisplayMessages()\n\nDisplay errors using vtkOutputWindowDisplayErrorText\n\\sa vtkOutputWindowDisplayErrorText\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkErrorSink_Doc =
  "vtkErrorSink - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkErrorSink_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkAddonPython.vtkErrorSink", // tp_name
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
  PyvtkErrorSink_Doc, // tp_doc
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

static vtkObjectBase *PyvtkErrorSink_StaticNew()
{
  return vtkErrorSink::New();
}

PyObject *PyvtkErrorSink_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkErrorSink_Type, PyvtkErrorSink_Methods,
    "vtkErrorSink",
 &PyvtkErrorSink_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkErrorSink(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkErrorSink_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkErrorSink", o) != 0)
  {
    Py_DECREF(o);
  }

}

