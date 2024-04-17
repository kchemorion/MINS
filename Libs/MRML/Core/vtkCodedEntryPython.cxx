// python wrapper for vtkCodedEntry
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCodedEntry.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCodedEntry(PyObject *dict); }
extern "C" { PyObject *PyvtkCodedEntry_ClassNew(); }


static PyObject *
PyvtkCodedEntry_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCodedEntry::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCodedEntry_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCodedEntry *op = static_cast<vtkCodedEntry *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCodedEntry::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCodedEntry_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCodedEntry *tempr = vtkCodedEntry::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCodedEntry_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCodedEntry *op = static_cast<vtkCodedEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCodedEntry *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCodedEntry::NewInstance());

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
PyvtkCodedEntry_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCodedEntry::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCodedEntry_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCodedEntry *op = static_cast<vtkCodedEntry *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCodedEntry::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCodedEntry_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCodedEntry *op = static_cast<vtkCodedEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkCodedEntry::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCodedEntry_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCodedEntry *op = static_cast<vtkCodedEntry *>(vp);

  vtkCodedEntry *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCodedEntry"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkCodedEntry::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCodedEntry_GetCodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCodedEntry *op = static_cast<vtkCodedEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCodeValue() :
      op->vtkCodedEntry::GetCodeValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCodedEntry_SetCodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCodedEntry *op = static_cast<vtkCodedEntry *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCodeValue(temp0);
    }
    else
    {
      op->vtkCodedEntry::SetCodeValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCodedEntry_GetCodingSchemeDesignator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCodingSchemeDesignator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCodedEntry *op = static_cast<vtkCodedEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCodingSchemeDesignator() :
      op->vtkCodedEntry::GetCodingSchemeDesignator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCodedEntry_SetCodingSchemeDesignator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCodingSchemeDesignator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCodedEntry *op = static_cast<vtkCodedEntry *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCodingSchemeDesignator(temp0);
    }
    else
    {
      op->vtkCodedEntry::SetCodingSchemeDesignator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCodedEntry_GetCodeMeaning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCodeMeaning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCodedEntry *op = static_cast<vtkCodedEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCodeMeaning() :
      op->vtkCodedEntry::GetCodeMeaning());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCodedEntry_SetCodeMeaning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCodeMeaning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCodedEntry *op = static_cast<vtkCodedEntry *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCodeMeaning(temp0);
    }
    else
    {
      op->vtkCodedEntry::SetCodeMeaning(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCodedEntry_SetValueSchemeMeaning_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueSchemeMeaning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCodedEntry *op = static_cast<vtkCodedEntry *>(vp);

  std::string temp0;
  std::string temp1;
  std::string temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetValueSchemeMeaning(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCodedEntry::SetValueSchemeMeaning(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCodedEntry_SetValueSchemeMeaning_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueSchemeMeaning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCodedEntry *op = static_cast<vtkCodedEntry *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    bool tempr = (ap.IsBound() ?
      op->SetValueSchemeMeaning(temp0) :
      op->vtkCodedEntry::SetValueSchemeMeaning(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCodedEntry_SetValueSchemeMeaning(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCodedEntry_SetValueSchemeMeaning_s1(self, args);
    case 1:
      return PyvtkCodedEntry_SetValueSchemeMeaning_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValueSchemeMeaning");
  return nullptr;
}


static PyObject *
PyvtkCodedEntry_GetValueSchemeMeaning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueSchemeMeaning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCodedEntry *op = static_cast<vtkCodedEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetValueSchemeMeaning() :
      op->vtkCodedEntry::GetValueSchemeMeaning());

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkCodedEntry_GetAsPrintableString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsPrintableString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCodedEntry *op = static_cast<vtkCodedEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetAsPrintableString() :
      op->vtkCodedEntry::GetAsPrintableString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCodedEntry_GetAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCodedEntry *op = static_cast<vtkCodedEntry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetAsString() :
      op->vtkCodedEntry::GetAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCodedEntry_SetFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCodedEntry *op = static_cast<vtkCodedEntry *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetFromString(temp0) :
      op->vtkCodedEntry::SetFromString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCodedEntry_Methods[] = {
  {"IsTypeOf", PyvtkCodedEntry_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCodedEntry_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCodedEntry_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCodedEntry\nC++: static vtkCodedEntry *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCodedEntry_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCodedEntry\nC++: vtkCodedEntry *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCodedEntry_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCodedEntry_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkCodedEntry_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: virtual void Initialize()\n\nReset state of object\n"},
  {"Copy", PyvtkCodedEntry_Copy, METH_VARARGS,
   "Copy(self, aEntry:vtkCodedEntry) -> None\nC++: virtual void Copy(vtkCodedEntry *aEntry)\n\nCopy one type into another\n"},
  {"GetCodeValue", PyvtkCodedEntry_GetCodeValue, METH_VARARGS,
   "GetCodeValue(self) -> str\nC++: virtual char *GetCodeValue()\n\nCode Value (DICOM tag (0008,0100)) is an identifier that is\nunambiguous within the Coding Scheme denoted by Coding Scheme\nDesignator and Coding Scheme Version.\n"},
  {"SetCodeValue", PyvtkCodedEntry_SetCodeValue, METH_VARARGS,
   "SetCodeValue(self, _arg:str) -> None\nC++: virtual void SetCodeValue(const char *_arg)\n\n"},
  {"GetCodingSchemeDesignator", PyvtkCodedEntry_GetCodingSchemeDesignator, METH_VARARGS,
   "GetCodingSchemeDesignator(self) -> str\nC++: virtual char *GetCodingSchemeDesignator()\n\nCoding Scheme Designator identifies the coding scheme in which\nthe code for a term is defined. Standard coding scheme\ndesignators used in DICOM information interchange are listed in\nPS3.16. Other coding scheme designators, for both private and\npublic coding schemes, may be used, in accordance with PS3.16.\n"},
  {"SetCodingSchemeDesignator", PyvtkCodedEntry_SetCodingSchemeDesignator, METH_VARARGS,
   "SetCodingSchemeDesignator(self, _arg:str) -> None\nC++: virtual void SetCodingSchemeDesignator(const char *_arg)\n\n"},
  {"GetCodeMeaning", PyvtkCodedEntry_GetCodeMeaning, METH_VARARGS,
   "GetCodeMeaning(self) -> str\nC++: virtual char *GetCodeMeaning()\n\nCode Meaning is text that has meaning to a human and conveys the\nmeaning of the term defined by the combination of Code Value and\nCoding Scheme Designator. Though such a meaning can be \"looked\nup\" in the dictionary for the coding scheme, it is encoded for\nthe convenience of applications that do not have access to such a\ndictionary.\n"},
  {"SetCodeMeaning", PyvtkCodedEntry_SetCodeMeaning, METH_VARARGS,
   "SetCodeMeaning(self, _arg:str) -> None\nC++: virtual void SetCodeMeaning(const char *_arg)\n\n"},
  {"SetValueSchemeMeaning", PyvtkCodedEntry_SetValueSchemeMeaning, METH_VARARGS,
   "SetValueSchemeMeaning(self, value:str, scheme:str, meaning:str)\n    -> None\nC++: virtual void SetValueSchemeMeaning(const std::string &value,\n    const std::string &scheme, const std::string &meaning)\nSetValueSchemeMeaning(self, valueSchemeMeaning:(str, ...)) -> bool\nC++: virtual bool SetValueSchemeMeaning(\n    const std::vector<std::string> &valueSchemeMeaning)\n\nConvenience function for setting code value, coding scheme, and\ncode meaning with a single method call\n"},
  {"GetValueSchemeMeaning", PyvtkCodedEntry_GetValueSchemeMeaning, METH_VARARGS,
   "GetValueSchemeMeaning(self) -> (str, ...)\nC++: virtual std::vector<std::string> GetValueSchemeMeaning()\n\nConvenience function for getting code value, coding scheme, and\ncode meaning as a string vector\n"},
  {"GetAsPrintableString", PyvtkCodedEntry_GetAsPrintableString, METH_VARARGS,
   "GetAsPrintableString(self) -> str\nC++: std::string GetAsPrintableString()\n\nGet content of the object as a single human-readable string.\nExample: ([hnsf'U], UCUM, \"Hounsfield unit\")\n"},
  {"GetAsString", PyvtkCodedEntry_GetAsString, METH_VARARGS,
   "GetAsString(self) -> str\nC++: std::string GetAsString()\n\nGet content of the object as a single machine-readable string.\nExample:\nCodeValue:[hnsf'U]|CodingSchemeDesignator:UCUM|CodeMeaning:Hounsfi\neld unit\n"},
  {"SetFromString", PyvtkCodedEntry_SetFromString, METH_VARARGS,
   "SetFromString(self, content:str) -> bool\nC++: bool SetFromString(const std::string &content)\n\nSet content of the object from a single machine-readable string.\nExample input:\nCodeValue:[hnsf'U]|CodingSchemeDesignator:UCUM|CodeMeaning:Hounsfi\neld unit\n\\return true on success\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCodedEntry_Doc =
  "vtkCodedEntry - Simple class for storing standard coded entries\n(coding scheme, value, meaning triplets)\n\n"
  "Superclass: vtkObject\n\n"
  "vtkCodedEntry is a lightweight class that stores standard coded\n"
  "entries consisting of CodingSchemeDesignator + CodeValue +\n"
  "CodeMeaning triplets. This is a commonly used concept in DICOM, see\n"
  "chapter 3: Encoding of Coded Entry Data\n"
  "(https://dicom.nema.org/medical/dicom/current/output/chtml/part03/sect\n"
  "_8.3.html).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCodedEntry_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkCodedEntry", // tp_name
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
  PyvtkCodedEntry_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCodedEntry_StaticNew()
{
  return vtkCodedEntry::New();
}

PyObject *PyvtkCodedEntry_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCodedEntry_Type, PyvtkCodedEntry_Methods,
    "vtkCodedEntry",
 &PyvtkCodedEntry_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCodedEntry(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCodedEntry_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCodedEntry", o) != 0)
  {
    Py_DECREF(o);
  }

}

