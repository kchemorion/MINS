// python wrapper for vtkMRMLMessageCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLMessageCollection.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLMessageCollection(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLMessageCollection_ClassNew(); }


static PyObject *
PyvtkMRMLMessageCollection_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMessageCollection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMessageCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMessageCollection *op = static_cast<vtkMRMLMessageCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMessageCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMessageCollection_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMessageCollection *tempr = vtkMRMLMessageCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMessageCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMessageCollection *op = static_cast<vtkMRMLMessageCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMessageCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMessageCollection::NewInstance());

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
PyvtkMRMLMessageCollection_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMessageCollection::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMessageCollection_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMessageCollection *op = static_cast<vtkMRMLMessageCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMessageCollection::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMessageCollection_GetNumberOfMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMessageCollection *op = static_cast<vtkMRMLMessageCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMessages() :
      op->vtkMRMLMessageCollection::GetNumberOfMessages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMessageCollection_GetNumberOfMessagesOfType_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMessagesOfType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMessageCollection *op = static_cast<vtkMRMLMessageCollection *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMessagesOfType(temp0) :
      op->vtkMRMLMessageCollection::GetNumberOfMessagesOfType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMessageCollection_GetNumberOfMessagesOfType_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMessagesOfType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMessageCollection *op = static_cast<vtkMRMLMessageCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMessagesOfType(temp0) :
      op->vtkMRMLMessageCollection::GetNumberOfMessagesOfType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMessageCollection_GetNumberOfMessagesOfType_Methods[] = {
  {"GetNumberOfMessagesOfType", PyvtkMRMLMessageCollection_GetNumberOfMessagesOfType_s1, METH_VARARGS,
   "@L"},
  {"GetNumberOfMessagesOfType", PyvtkMRMLMessageCollection_GetNumberOfMessagesOfType_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLMessageCollection_GetNumberOfMessagesOfType(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLMessageCollection_GetNumberOfMessagesOfType_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfMessagesOfType");
  return nullptr;
}


static PyObject *
PyvtkMRMLMessageCollection_GetNthMessageType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthMessageType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMessageCollection *op = static_cast<vtkMRMLMessageCollection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetNthMessageType(temp0) :
      op->vtkMRMLMessageCollection::GetNthMessageType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMessageCollection_GetNthMessageText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthMessageText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMessageCollection *op = static_cast<vtkMRMLMessageCollection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNthMessageText(temp0) :
      op->vtkMRMLMessageCollection::GetNthMessageText(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMessageCollection_AddMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMessageCollection *op = static_cast<vtkMRMLMessageCollection *>(vp);

  unsigned long temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddMessage(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMessageCollection::AddMessage(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMessageCollection_AddSeparator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeparator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMessageCollection *op = static_cast<vtkMRMLMessageCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddSeparator();
    }
    else
    {
      op->vtkMRMLMessageCollection::AddSeparator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMessageCollection_AddMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMessageCollection *op = static_cast<vtkMRMLMessageCollection *>(vp);

  vtkMRMLMessageCollection *temp0 = nullptr;
  std::string temp1 = std::string();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLMessageCollection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->AddMessages(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMessageCollection::AddMessages(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMessageCollection_ClearMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMessageCollection *op = static_cast<vtkMRMLMessageCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearMessages();
    }
    else
    {
      op->vtkMRMLMessageCollection::ClearMessages();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMessageCollection_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMessageCollection *op = static_cast<vtkMRMLMessageCollection *>(vp);

  vtkMRMLMessageCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMessageCollection"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkMRMLMessageCollection::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMessageCollection_GetAllMessagesAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllMessagesAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMessageCollection *op = static_cast<vtkMRMLMessageCollection *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<bool> store0(2*size0);
  bool *temp0 = store0.Data();
  bool *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<bool> store1(2*size1);
  bool *temp1 = store1.Data();
  bool *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetArray(temp0, size0)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp1, size1)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    std::string tempr = (ap.IsBound() ?
      op->GetAllMessagesAsString(temp0, temp1) :
      op->vtkMRMLMessageCollection::GetAllMessagesAsString(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMessageCollection_SetObservedObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObservedObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMessageCollection *op = static_cast<vtkMRMLMessageCollection *>(vp);

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
      op->vtkMRMLMessageCollection::SetObservedObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMessageCollection_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMessageCollection_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMessageCollection_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMessageCollection_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLMessageCollection\nC++: static vtkMRMLMessageCollection *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMessageCollection_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMessageCollection\nC++: vtkMRMLMessageCollection *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMessageCollection_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMessageCollection_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfMessages", PyvtkMRMLMessageCollection_GetNumberOfMessages, METH_VARARGS,
   "GetNumberOfMessages(self) -> int\nC++: virtual int GetNumberOfMessages()\n\nReturn the total number of reported messages.\n"},
  {"GetNumberOfMessagesOfType", PyvtkMRMLMessageCollection_GetNumberOfMessagesOfType, METH_VARARGS,
   "GetNumberOfMessagesOfType(self, messageType:int) -> int\nC++: virtual int GetNumberOfMessagesOfType(\n    unsigned long messageType)\nGetNumberOfMessagesOfType(self, eventName:str) -> int\nC++: virtual int GetNumberOfMessagesOfType(const char *eventName)\n\nReturn the number of reported messages of the specified event\ntype.\n"},
  {"GetNthMessageType", PyvtkMRMLMessageCollection_GetNthMessageType, METH_VARARGS,
   "GetNthMessageType(self, index:int) -> int\nC++: virtual unsigned long GetNthMessageType(int index)\n\nGet text of a message from the message vector.\n"},
  {"GetNthMessageText", PyvtkMRMLMessageCollection_GetNthMessageText, METH_VARARGS,
   "GetNthMessageText(self, index:int) -> str\nC++: virtual std::string GetNthMessageText(int index)\n\nGet event type of a message from the message vector.\n"},
  {"AddMessage", PyvtkMRMLMessageCollection_AddMessage, METH_VARARGS,
   "AddMessage(self, messageType:int, messageText:str) -> None\nC++: virtual void AddMessage(unsigned long messageType,\n    const std::string &messageText)\n\nAppend a message to the message vector To mark a message as error\nor warning, set messageType to vtkCommand::ErrorEvent or\nvtkCommand::WarningEvent.\n"},
  {"AddSeparator", PyvtkMRMLMessageCollection_AddSeparator, METH_VARARGS,
   "AddSeparator(self) -> None\nC++: virtual void AddSeparator()\n\nAdd a separator, for example to create message groups.\n(internally vtkCommand::PropertyModifiedEvent is used as\nmessageType)\n"},
  {"AddMessages", PyvtkMRMLMessageCollection_AddMessages, METH_VARARGS,
   "AddMessages(self, source:vtkMRMLMessageCollection, prefix:str=...)\n     -> None\nC++: virtual void AddMessages(vtkMRMLMessageCollection *source,\n    const std::string &prefix=std::string())\n\nCopy all messages from another collection. If prefix is specified\nthen that string is prepended to each copied message.\n"},
  {"ClearMessages", PyvtkMRMLMessageCollection_ClearMessages, METH_VARARGS,
   "ClearMessages(self) -> None\nC++: virtual void ClearMessages()\n\nClear the message vector.\n"},
  {"DeepCopy", PyvtkMRMLMessageCollection_DeepCopy, METH_VARARGS,
   "DeepCopy(self, source:vtkMRMLMessageCollection) -> None\nC++: virtual void DeepCopy(vtkMRMLMessageCollection *source)\n\nCopy all messages from another collection.\n"},
  {"GetAllMessagesAsString", PyvtkMRMLMessageCollection_GetAllMessagesAsString, METH_VARARGS,
   "GetAllMessagesAsString(self, errorFound:[bool, ...]=...,\n    warningFound:[bool, ...]=...) -> str\nC++: virtual std::string GetAllMessagesAsString(\n    bool *errorFound=nullptr, bool *warningFound=nullptr)\n\nReturn all messages in a single formatted string. If optional\nerrorFound or warningFound pointers are set then the caller get\ninformation about presence of warnings or errors in the message\nlist.\n"},
  {"SetObservedObject", PyvtkMRMLMessageCollection_SetObservedObject, METH_VARARGS,
   "SetObservedObject(self, observedObject:vtkObject) -> None\nC++: virtual void SetObservedObject(vtkObject *observedObject)\n\nObserve error and warnings reported by observedObject. For\nexample, this can be used to capture errors from VTK classes and\ndisplay them to the user.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMessageCollection_Doc =
  "vtkMRMLMessageCollection - A class for recording warnings and errors\nassociated with this vtkMRMLStorableNode.\n\n"
  "Superclass: vtkObject\n\n"
  "A substantially similar vtkMessageCollection is planned for vtkAddon.\n"
  " When that is released, this will be replaced by that.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMessageCollection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLMessageCollection", // tp_name
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
  PyvtkMRMLMessageCollection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLMessageCollection_StaticNew()
{
  return vtkMRMLMessageCollection::New();
}

PyObject *PyvtkMRMLMessageCollection_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMessageCollection_Type, PyvtkMRMLMessageCollection_Methods,
    "vtkMRMLMessageCollection",
 &PyvtkMRMLMessageCollection_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLMessageCollection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLMessageCollection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMessageCollection", o) != 0)
  {
    Py_DECREF(o);
  }

}

