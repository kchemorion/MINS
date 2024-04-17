// python wrapper for vtkPermissionPrompter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPermissionPrompter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPermissionPrompter(PyObject *dict); }
extern "C" { PyObject *PyvtkPermissionPrompter_ClassNew(); }


static PyObject *
PyvtkPermissionPrompter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPermissionPrompter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPermissionPrompter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPermissionPrompter *op = static_cast<vtkPermissionPrompter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPermissionPrompter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPermissionPrompter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPermissionPrompter *tempr = vtkPermissionPrompter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPermissionPrompter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPermissionPrompter *op = static_cast<vtkPermissionPrompter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPermissionPrompter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPermissionPrompter::NewInstance());

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
PyvtkPermissionPrompter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPermissionPrompter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPermissionPrompter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPermissionPrompter *op = static_cast<vtkPermissionPrompter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPermissionPrompter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPermissionPrompter_GetUsername(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsername");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPermissionPrompter *op = static_cast<vtkPermissionPrompter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetUsername() :
      op->vtkPermissionPrompter::GetUsername());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPermissionPrompter_SetUsername(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUsername");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPermissionPrompter *op = static_cast<vtkPermissionPrompter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUsername(temp0);
    }
    else
    {
      op->vtkPermissionPrompter::SetUsername(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPermissionPrompter_GetPassword(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassword");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPermissionPrompter *op = static_cast<vtkPermissionPrompter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPassword() :
      op->vtkPermissionPrompter::GetPassword());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPermissionPrompter_SetPassword(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassword");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPermissionPrompter *op = static_cast<vtkPermissionPrompter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassword(temp0);
    }
    else
    {
      op->vtkPermissionPrompter::SetPassword(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPermissionPrompter_GetHostName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHostName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPermissionPrompter *op = static_cast<vtkPermissionPrompter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetHostName() :
      op->vtkPermissionPrompter::GetHostName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPermissionPrompter_SetHostName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHostName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPermissionPrompter *op = static_cast<vtkPermissionPrompter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHostName(temp0);
    }
    else
    {
      op->vtkPermissionPrompter::SetHostName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPermissionPrompter_GetRemember(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemember");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPermissionPrompter *op = static_cast<vtkPermissionPrompter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRemember() :
      op->vtkPermissionPrompter::GetRemember());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPermissionPrompter_SetRemember(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemember");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPermissionPrompter *op = static_cast<vtkPermissionPrompter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemember(temp0);
    }
    else
    {
      op->vtkPermissionPrompter::SetRemember(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPermissionPrompter_GetPromptMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPromptMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPermissionPrompter *op = static_cast<vtkPermissionPrompter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPromptMessage() :
      op->vtkPermissionPrompter::GetPromptMessage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPermissionPrompter_SetPromptMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPromptMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPermissionPrompter *op = static_cast<vtkPermissionPrompter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPromptMessage(temp0);
    }
    else
    {
      op->vtkPermissionPrompter::SetPromptMessage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPermissionPrompter_GetPromptTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPromptTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPermissionPrompter *op = static_cast<vtkPermissionPrompter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPromptTitle() :
      op->vtkPermissionPrompter::GetPromptTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPermissionPrompter_SetPromptTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPromptTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPermissionPrompter *op = static_cast<vtkPermissionPrompter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPromptTitle(temp0);
    }
    else
    {
      op->vtkPermissionPrompter::SetPromptTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPermissionPrompter_Prompt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Prompt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPermissionPrompter *op = static_cast<vtkPermissionPrompter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Prompt(temp0) :
      op->vtkPermissionPrompter::Prompt(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPermissionPrompter_Methods[] = {
  {"IsTypeOf", PyvtkPermissionPrompter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPermissionPrompter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPermissionPrompter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPermissionPrompter\nC++: static vtkPermissionPrompter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPermissionPrompter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPermissionPrompter\nC++: vtkPermissionPrompter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPermissionPrompter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPermissionPrompter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetUsername", PyvtkPermissionPrompter_GetUsername, METH_VARARGS,
   "GetUsername(self) -> str\nC++: virtual char *GetUsername()\n\nMember for storing a user name, if required\n"},
  {"SetUsername", PyvtkPermissionPrompter_SetUsername, METH_VARARGS,
   "SetUsername(self, _arg:str) -> None\nC++: virtual void SetUsername(const char *_arg)\n\n"},
  {"GetPassword", PyvtkPermissionPrompter_GetPassword, METH_VARARGS,
   "GetPassword(self) -> str\nC++: virtual char *GetPassword()\n\nMember for storing a password, if required\n"},
  {"SetPassword", PyvtkPermissionPrompter_SetPassword, METH_VARARGS,
   "SetPassword(self, _arg:str) -> None\nC++: virtual void SetPassword(const char *_arg)\n\n"},
  {"GetHostName", PyvtkPermissionPrompter_GetHostName, METH_VARARGS,
   "GetHostName(self) -> str\nC++: virtual char *GetHostName()\n\n"},
  {"SetHostName", PyvtkPermissionPrompter_SetHostName, METH_VARARGS,
   "SetHostName(self, _arg:str) -> None\nC++: virtual void SetHostName(const char *_arg)\n\n"},
  {"GetRemember", PyvtkPermissionPrompter_GetRemember, METH_VARARGS,
   "GetRemember(self) -> int\nC++: virtual int GetRemember()\n\nWhen set, a user won't be prompted again during a given session.\nIf not set (default) a user will be prompted for each\ntransaction.\n"},
  {"SetRemember", PyvtkPermissionPrompter_SetRemember, METH_VARARGS,
   "SetRemember(self, _arg:int) -> None\nC++: virtual void SetRemember(int _arg)\n\n"},
  {"GetPromptMessage", PyvtkPermissionPrompter_GetPromptMessage, METH_VARARGS,
   "GetPromptMessage(self) -> str\nC++: virtual char *GetPromptMessage()\n\n"},
  {"SetPromptMessage", PyvtkPermissionPrompter_SetPromptMessage, METH_VARARGS,
   "SetPromptMessage(self, _arg:str) -> None\nC++: virtual void SetPromptMessage(const char *_arg)\n\n"},
  {"GetPromptTitle", PyvtkPermissionPrompter_GetPromptTitle, METH_VARARGS,
   "GetPromptTitle(self) -> str\nC++: virtual char *GetPromptTitle()\n\n"},
  {"SetPromptTitle", PyvtkPermissionPrompter_SetPromptTitle, METH_VARARGS,
   "SetPromptTitle(self, _arg:str) -> None\nC++: virtual void SetPromptTitle(const char *_arg)\n\n"},
  {"Prompt", PyvtkPermissionPrompter_Prompt, METH_VARARGS,
   "Prompt(self, message:str) -> int\nC++: virtual int Prompt(const char *message)\n\nSets null values for UserName and Password.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPermissionPrompter_Doc =
  "vtkPermissionPrompter - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPermissionPrompter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkPermissionPrompter", // tp_name
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
  PyvtkPermissionPrompter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPermissionPrompter_StaticNew()
{
  return vtkPermissionPrompter::New();
}

PyObject *PyvtkPermissionPrompter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPermissionPrompter_Type, PyvtkPermissionPrompter_Methods,
    "vtkPermissionPrompter",
 &PyvtkPermissionPrompter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPermissionPrompter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPermissionPrompter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPermissionPrompter", o) != 0)
  {
    Py_DECREF(o);
  }

}

