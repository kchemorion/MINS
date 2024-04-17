// python wrapper for vtkTestingOutputWindow
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTestingOutputWindow.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTestingOutputWindow(PyObject *dict); }
extern "C" { PyObject *PyvtkTestingOutputWindow_ClassNew(); }


static PyObject *
PyvtkTestingOutputWindow_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTestingOutputWindow::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingOutputWindow *op = static_cast<vtkTestingOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTestingOutputWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTestingOutputWindow *tempr = vtkTestingOutputWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingOutputWindow *op = static_cast<vtkTestingOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTestingOutputWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTestingOutputWindow::NewInstance());

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
PyvtkTestingOutputWindow_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTestingOutputWindow::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingOutputWindow *op = static_cast<vtkTestingOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTestingOutputWindow::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_GetInstance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTestingOutputWindow *tempr = vtkTestingOutputWindow::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_DisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingOutputWindow *op = static_cast<vtkTestingOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisplayText(temp0);
    }
    else
    {
      op->vtkTestingOutputWindow::DisplayText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_DisplayErrorText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayErrorText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingOutputWindow *op = static_cast<vtkTestingOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisplayErrorText(temp0);
    }
    else
    {
      op->vtkTestingOutputWindow::DisplayErrorText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_DisplayWarningText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayWarningText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingOutputWindow *op = static_cast<vtkTestingOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisplayWarningText(temp0);
    }
    else
    {
      op->vtkTestingOutputWindow::DisplayWarningText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_DisplayGenericWarningText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayGenericWarningText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingOutputWindow *op = static_cast<vtkTestingOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisplayGenericWarningText(temp0);
    }
    else
    {
      op->vtkTestingOutputWindow::DisplayGenericWarningText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_DisplayDebugText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayDebugText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingOutputWindow *op = static_cast<vtkTestingOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisplayDebugText(temp0);
    }
    else
    {
      op->vtkTestingOutputWindow::DisplayDebugText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_ResetNumberOfLoggedMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetNumberOfLoggedMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingOutputWindow *op = static_cast<vtkTestingOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetNumberOfLoggedMessages();
    }
    else
    {
      op->vtkTestingOutputWindow::ResetNumberOfLoggedMessages();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_GetNumberOfLoggedMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLoggedMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingOutputWindow *op = static_cast<vtkTestingOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLoggedMessages() :
      op->vtkTestingOutputWindow::GetNumberOfLoggedMessages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_SetNumberOfLoggedMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLoggedMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingOutputWindow *op = static_cast<vtkTestingOutputWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLoggedMessages(temp0);
    }
    else
    {
      op->vtkTestingOutputWindow::SetNumberOfLoggedMessages(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_GetNumberOfLoggedWarningMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLoggedWarningMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingOutputWindow *op = static_cast<vtkTestingOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLoggedWarningMessages() :
      op->vtkTestingOutputWindow::GetNumberOfLoggedWarningMessages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_SetNumberOfLoggedWarningMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLoggedWarningMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingOutputWindow *op = static_cast<vtkTestingOutputWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLoggedWarningMessages(temp0);
    }
    else
    {
      op->vtkTestingOutputWindow::SetNumberOfLoggedWarningMessages(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_GetNumberOfLoggedErrorMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLoggedErrorMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingOutputWindow *op = static_cast<vtkTestingOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLoggedErrorMessages() :
      op->vtkTestingOutputWindow::GetNumberOfLoggedErrorMessages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_SetNumberOfLoggedErrorMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLoggedErrorMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingOutputWindow *op = static_cast<vtkTestingOutputWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLoggedErrorMessages(temp0);
    }
    else
    {
      op->vtkTestingOutputWindow::SetNumberOfLoggedErrorMessages(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTestingOutputWindow_GetNumberOfLoggedWarningErrorMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLoggedWarningErrorMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTestingOutputWindow *op = static_cast<vtkTestingOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLoggedWarningErrorMessages() :
      op->vtkTestingOutputWindow::GetNumberOfLoggedWarningErrorMessages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTestingOutputWindow_Methods[] = {
  {"IsTypeOf", PyvtkTestingOutputWindow_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTestingOutputWindow_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTestingOutputWindow_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTestingOutputWindow\nC++: static vtkTestingOutputWindow *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTestingOutputWindow_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTestingOutputWindow\nC++: vtkTestingOutputWindow *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTestingOutputWindow_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTestingOutputWindow_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInstance", PyvtkTestingOutputWindow_GetInstance, METH_VARARGS,
   "GetInstance() -> vtkTestingOutputWindow\nC++: static vtkTestingOutputWindow *GetInstance()\n\nReturn the singleton instance with no reference counting.\n"},
  {"DisplayText", PyvtkTestingOutputWindow_DisplayText, METH_VARARGS,
   "DisplayText(self, text:str) -> None\nC++: void DisplayText(const char *text) override;\n\nDisplay the text. Four virtual methods exist, depending on the\ntype of message to display. This allows redirection or\nreformatting of the messages. The default implementation uses\nDisplayText for all. Consequently, subclasses can simply override\nDisplayText and use `GetCurrentMessageType` to determine the type\nof message that's being reported.\n"},
  {"DisplayErrorText", PyvtkTestingOutputWindow_DisplayErrorText, METH_VARARGS,
   "DisplayErrorText(self, text:str) -> None\nC++: void DisplayErrorText(const char *text) override;\n\n"},
  {"DisplayWarningText", PyvtkTestingOutputWindow_DisplayWarningText, METH_VARARGS,
   "DisplayWarningText(self, text:str) -> None\nC++: void DisplayWarningText(const char *text) override;\n\n"},
  {"DisplayGenericWarningText", PyvtkTestingOutputWindow_DisplayGenericWarningText, METH_VARARGS,
   "DisplayGenericWarningText(self, text:str) -> None\nC++: void DisplayGenericWarningText(const char *text) override;\n\n"},
  {"DisplayDebugText", PyvtkTestingOutputWindow_DisplayDebugText, METH_VARARGS,
   "DisplayDebugText(self, text:str) -> None\nC++: void DisplayDebugText(const char *text) override;\n\n"},
  {"ResetNumberOfLoggedMessages", PyvtkTestingOutputWindow_ResetNumberOfLoggedMessages, METH_VARARGS,
   "ResetNumberOfLoggedMessages(self) -> None\nC++: virtual void ResetNumberOfLoggedMessages()\n\n"},
  {"GetNumberOfLoggedMessages", PyvtkTestingOutputWindow_GetNumberOfLoggedMessages, METH_VARARGS,
   "GetNumberOfLoggedMessages(self) -> int\nC++: virtual int GetNumberOfLoggedMessages()\n\n"},
  {"SetNumberOfLoggedMessages", PyvtkTestingOutputWindow_SetNumberOfLoggedMessages, METH_VARARGS,
   "SetNumberOfLoggedMessages(self, _arg:int) -> None\nC++: virtual void SetNumberOfLoggedMessages(int _arg)\n\n"},
  {"GetNumberOfLoggedWarningMessages", PyvtkTestingOutputWindow_GetNumberOfLoggedWarningMessages, METH_VARARGS,
   "GetNumberOfLoggedWarningMessages(self) -> int\nC++: virtual int GetNumberOfLoggedWarningMessages()\n\n"},
  {"SetNumberOfLoggedWarningMessages", PyvtkTestingOutputWindow_SetNumberOfLoggedWarningMessages, METH_VARARGS,
   "SetNumberOfLoggedWarningMessages(self, _arg:int) -> None\nC++: virtual void SetNumberOfLoggedWarningMessages(int _arg)\n\n"},
  {"GetNumberOfLoggedErrorMessages", PyvtkTestingOutputWindow_GetNumberOfLoggedErrorMessages, METH_VARARGS,
   "GetNumberOfLoggedErrorMessages(self) -> int\nC++: virtual int GetNumberOfLoggedErrorMessages()\n\n"},
  {"SetNumberOfLoggedErrorMessages", PyvtkTestingOutputWindow_SetNumberOfLoggedErrorMessages, METH_VARARGS,
   "SetNumberOfLoggedErrorMessages(self, _arg:int) -> None\nC++: virtual void SetNumberOfLoggedErrorMessages(int _arg)\n\n"},
  {"GetNumberOfLoggedWarningErrorMessages", PyvtkTestingOutputWindow_GetNumberOfLoggedWarningErrorMessages, METH_VARARGS,
   "GetNumberOfLoggedWarningErrorMessages(self) -> int\nC++: int GetNumberOfLoggedWarningErrorMessages()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTestingOutputWindow_Doc =
  "vtkTestingOutputWindow - VTK message output window class for\nautomated testing.\n\n"
  "Superclass: vtkOutputWindow\n\n"
  "This is a VTK output window class that is optimized to be used in\n"
  "automated tests:\n"
  "- counts error and warning messages between checkpoints\n"
  "- forces VTK to always log to the console (on Windows the default\n"
  "  behavior is to show messages in a popup window)\n\n"
  "A set of convenience macros are defined. Example:\n\n\n"
  "   // Initialize output window. All messages are logged to the\n"
  "console.\n"
  "   TESTING_OUTPUT_INIT();\n\n\n"
  "   ...perform operations that _must_not_ log error messages\n"
  "   TESTING_OUTPUT_ASSERT_WARNINGS_ERRORS(0);\n\n\n"
  "   TESTING_OUTPUT_ASSERT_WARNINGS_BEGIN();\n"
  "   ...perform operations that _must_ log error messages\n"
  "   TESTING_OUTPUT_ASSERT_WARNINGS_END();\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTestingOutputWindow_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkAddonPython.vtkTestingOutputWindow", // tp_name
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
  PyvtkTestingOutputWindow_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTestingOutputWindow_StaticNew()
{
  return vtkTestingOutputWindow::New();
}

PyObject *PyvtkTestingOutputWindow_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTestingOutputWindow_Type, PyvtkTestingOutputWindow_Methods,
    "vtkTestingOutputWindow",
 &PyvtkTestingOutputWindow_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkOutputWindow");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTestingOutputWindow(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTestingOutputWindow_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTestingOutputWindow", o) != 0)
  {
    Py_DECREF(o);
  }

}

