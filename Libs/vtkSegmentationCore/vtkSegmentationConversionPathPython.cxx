// python wrapper for vtkSegmentationConversionPath
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSegmentationConversionPath.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSegmentationConversionPath(PyObject *dict); }
extern "C" { PyObject *PyvtkSegmentationConversionPath_ClassNew(); }


static PyObject *
PyvtkSegmentationConversionPath_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSegmentationConversionPath::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPath *op = static_cast<vtkSegmentationConversionPath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSegmentationConversionPath::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPath_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSegmentationConversionPath *tempr = vtkSegmentationConversionPath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPath *op = static_cast<vtkSegmentationConversionPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegmentationConversionPath *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSegmentationConversionPath::NewInstance());

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
PyvtkSegmentationConversionPath_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSegmentationConversionPath::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPath_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPath *op = static_cast<vtkSegmentationConversionPath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSegmentationConversionPath::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPath_GetCost(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCost");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPath *op = static_cast<vtkSegmentationConversionPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCost() :
      op->vtkSegmentationConversionPath::GetCost());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPath_AddRule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPath *op = static_cast<vtkSegmentationConversionPath *>(vp);

  vtkSegmentationConverterRule *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentationConverterRule"))
  {
    int tempr = (ap.IsBound() ?
      op->AddRule(temp0) :
      op->vtkSegmentationConversionPath::AddRule(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPath_AddRules(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRules");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPath *op = static_cast<vtkSegmentationConversionPath *>(vp);

  vtkSegmentationConversionPath *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentationConversionPath"))
  {
    if (ap.IsBound())
    {
      op->AddRules(temp0);
    }
    else
    {
      op->vtkSegmentationConversionPath::AddRules(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPath_GetNumberOfRules(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRules");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPath *op = static_cast<vtkSegmentationConversionPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRules() :
      op->vtkSegmentationConversionPath::GetNumberOfRules());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPath_GetRule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPath *op = static_cast<vtkSegmentationConversionPath *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfRules()),
                      "0 <= index && index < GetNumberOfRules()"))
  {
    vtkSegmentationConverterRule *tempr = (ap.IsBound() ?
      op->GetRule(temp0) :
      op->vtkSegmentationConversionPath::GetRule(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPath_RemoveRule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPath *op = static_cast<vtkSegmentationConversionPath *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfRules()),
                      "0 <= index && index < GetNumberOfRules()"))
  {
    if (ap.IsBound())
    {
      op->RemoveRule(temp0);
    }
    else
    {
      op->vtkSegmentationConversionPath::RemoveRule(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPath_RemoveAllRules(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllRules");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPath *op = static_cast<vtkSegmentationConversionPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllRules();
    }
    else
    {
      op->vtkSegmentationConversionPath::RemoveAllRules();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPath_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPath *op = static_cast<vtkSegmentationConversionPath *>(vp);

  vtkSegmentationConversionPath *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentationConversionPath"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkSegmentationConversionPath::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSegmentationConversionPath_Methods[] = {
  {"IsTypeOf", PyvtkSegmentationConversionPath_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSegmentationConversionPath_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSegmentationConversionPath_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSegmentationConversionPath\nC++: static vtkSegmentationConversionPath *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSegmentationConversionPath_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSegmentationConversionPath\nC++: vtkSegmentationConversionPath *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSegmentationConversionPath_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSegmentationConversionPath_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetCost", PyvtkSegmentationConversionPath_GetCost, METH_VARARGS,
   "GetCost(self) -> int\nC++: unsigned int GetCost()\n\nGet conversion \"cost\". The lower the cost is the better (faster\ncomputation, higher accuracy, etc). The cost can be used to\nchoose the best conversion paths when multiple paths are\navailable.\n"},
  {"AddRule", PyvtkSegmentationConversionPath_AddRule, METH_VARARGS,
   "AddRule(self, rule:vtkSegmentationConverterRule) -> int\nC++: int AddRule(vtkSegmentationConverterRule *rule)\n\nAdd a rule to the end of the rule list. Return the index of this\nrule.\n"},
  {"AddRules", PyvtkSegmentationConversionPath_AddRules, METH_VARARGS,
   "AddRules(self, path:vtkSegmentationConversionPath) -> None\nC++: void AddRules(vtkSegmentationConversionPath *path)\n\nConcatenate all rules in \"path\" and to this conversion path.\n"},
  {"GetNumberOfRules", PyvtkSegmentationConversionPath_GetNumberOfRules, METH_VARARGS,
   "GetNumberOfRules(self) -> int\nC++: int GetNumberOfRules()\n\nReturn number of rules that make up this conversion path.\n"},
  {"GetRule", PyvtkSegmentationConversionPath_GetRule, METH_VARARGS,
   "GetRule(self, index:int) -> vtkSegmentationConverterRule\nC++: vtkSegmentationConverterRule *GetRule(int index)\n\nGet index-th rule.\n"},
  {"RemoveRule", PyvtkSegmentationConversionPath_RemoveRule, METH_VARARGS,
   "RemoveRule(self, index:int) -> None\nC++: void RemoveRule(int index)\n\nRemove index-th rule.\n"},
  {"RemoveAllRules", PyvtkSegmentationConversionPath_RemoveAllRules, METH_VARARGS,
   "RemoveAllRules(self) -> None\nC++: void RemoveAllRules()\n\nRemove all rules from this path.\n"},
  {"Copy", PyvtkSegmentationConversionPath_Copy, METH_VARARGS,
   "Copy(self, source:vtkSegmentationConversionPath) -> None\nC++: void Copy(vtkSegmentationConversionPath *source)\n\nReplace paths with content of the source path. The rules are\nshallow-copied.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSegmentationConversionPath_Doc =
  "vtkSegmentationConversionPath - Store a segmentation conversion path.\n\n"
  "Superclass: vtkObject\n\n"
  "\\details Stores conversion path as a list of conversion rules and\n"
  "their parameters.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSegmentationConversionPath_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkSegmentationConversionPath", // tp_name
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
  PyvtkSegmentationConversionPath_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSegmentationConversionPath_StaticNew()
{
  return vtkSegmentationConversionPath::New();
}

PyObject *PyvtkSegmentationConversionPath_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSegmentationConversionPath_Type, PyvtkSegmentationConversionPath_Methods,
    "vtkSegmentationConversionPath",
 &PyvtkSegmentationConversionPath_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkSegmentationConversionPaths_ClassNew(); }


static PyObject *
PyvtkSegmentationConversionPaths_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSegmentationConversionPaths::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPaths_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPaths *op = static_cast<vtkSegmentationConversionPaths *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSegmentationConversionPaths::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPaths_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSegmentationConversionPaths *tempr = vtkSegmentationConversionPaths::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPaths_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPaths *op = static_cast<vtkSegmentationConversionPaths *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegmentationConversionPaths *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSegmentationConversionPaths::NewInstance());

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
PyvtkSegmentationConversionPaths_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSegmentationConversionPaths::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPaths_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPaths *op = static_cast<vtkSegmentationConversionPaths *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSegmentationConversionPaths::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPaths_AddPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPaths *op = static_cast<vtkSegmentationConversionPaths *>(vp);

  vtkSegmentationConversionPath *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentationConversionPath"))
  {
    if (ap.IsBound())
    {
      op->AddPath(temp0);
    }
    else
    {
      op->vtkSegmentationConversionPaths::AddPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPaths_AddPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPaths *op = static_cast<vtkSegmentationConversionPaths *>(vp);

  vtkSegmentationConversionPaths *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentationConversionPaths"))
  {
    if (ap.IsBound())
    {
      op->AddPaths(temp0);
    }
    else
    {
      op->vtkSegmentationConversionPaths::AddPaths(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPaths_GetNextPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPaths *op = static_cast<vtkSegmentationConversionPaths *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegmentationConversionPath *tempr = (ap.IsBound() ?
      op->GetNextPath() :
      op->vtkSegmentationConversionPaths::GetNextPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPaths_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPaths *op = static_cast<vtkSegmentationConversionPaths *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSegmentationConversionPath *tempr = (ap.IsBound() ?
      op->GetPath(temp0) :
      op->vtkSegmentationConversionPaths::GetPath(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConversionPaths_GetNumberOfPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConversionPaths *op = static_cast<vtkSegmentationConversionPaths *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPaths() :
      op->vtkSegmentationConversionPaths::GetNumberOfPaths());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSegmentationConversionPaths_Methods[] = {
  {"IsTypeOf", PyvtkSegmentationConversionPaths_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSegmentationConversionPaths_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSegmentationConversionPaths_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSegmentationConversionPaths\nC++: static vtkSegmentationConversionPaths *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSegmentationConversionPaths_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSegmentationConversionPaths\nC++: vtkSegmentationConversionPaths *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSegmentationConversionPaths_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSegmentationConversionPaths_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddPath", PyvtkSegmentationConversionPaths_AddPath, METH_VARARGS,
   "AddPath(self, __a:vtkSegmentationConversionPath) -> None\nC++: void AddPath(vtkSegmentationConversionPath *)\n\nAdd a path to the list.\n"},
  {"AddPaths", PyvtkSegmentationConversionPaths_AddPaths, METH_VARARGS,
   "AddPaths(self, __a:vtkSegmentationConversionPaths) -> None\nC++: void AddPaths(vtkSegmentationConversionPaths *)\n\nAdd paths to the list.\n"},
  {"GetNextPath", PyvtkSegmentationConversionPaths_GetNextPath, METH_VARARGS,
   "GetNextPath(self) -> vtkSegmentationConversionPath\nC++: vtkSegmentationConversionPath *GetNextPath()\n\nGet the next path in the list.\n"},
  {"GetPath", PyvtkSegmentationConversionPaths_GetPath, METH_VARARGS,
   "GetPath(self, index:int) -> vtkSegmentationConversionPath\nC++: vtkSegmentationConversionPath *GetPath(int index)\n\nGet the index-th path the list.\n"},
  {"GetNumberOfPaths", PyvtkSegmentationConversionPaths_GetNumberOfPaths, METH_VARARGS,
   "GetNumberOfPaths(self) -> int\nC++: int GetNumberOfPaths()\n\nGet number of conversion paths stored in the collection.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSegmentationConversionPaths_Doc =
  "vtkSegmentationConversionPaths - Store multiple segmentation\nconversion paths.\n\n"
  "Superclass: vtkCollection\n\n"
  "\\details Stores multiple conversion paths, each defined by a list of\n"
  "segmentation conversion rules.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSegmentationConversionPaths_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkSegmentationConversionPaths", // tp_name
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
  PyvtkSegmentationConversionPaths_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSegmentationConversionPaths_StaticNew()
{
  return vtkSegmentationConversionPaths::New();
}

PyObject *PyvtkSegmentationConversionPaths_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSegmentationConversionPaths_Type, PyvtkSegmentationConversionPaths_Methods,
    "vtkSegmentationConversionPaths",
 &PyvtkSegmentationConversionPaths_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkCollection");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSegmentationConversionPath(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSegmentationConversionPath_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSegmentationConversionPath", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSegmentationConversionPaths_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSegmentationConversionPaths", o) != 0)
  {
    Py_DECREF(o);
  }

}

