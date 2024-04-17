// python wrapper for vtkSlicerDICOMExportable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerDICOMExportable.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerDICOMExportable(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerDICOMExportable_ClassNew(); }


static PyObject *
PyvtkSlicerDICOMExportable_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerDICOMExportable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMExportable *op = static_cast<vtkSlicerDICOMExportable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerDICOMExportable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerDICOMExportable *tempr = vtkSlicerDICOMExportable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMExportable *op = static_cast<vtkSlicerDICOMExportable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerDICOMExportable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerDICOMExportable::NewInstance());

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
PyvtkSlicerDICOMExportable_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerDICOMExportable::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMExportable *op = static_cast<vtkSlicerDICOMExportable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerDICOMExportable::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMExportable *op = static_cast<vtkSlicerDICOMExportable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkSlicerDICOMExportable::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMExportable *op = static_cast<vtkSlicerDICOMExportable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetName(temp0);
    }
    else
    {
      op->vtkSlicerDICOMExportable::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_GetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMExportable *op = static_cast<vtkSlicerDICOMExportable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTooltip() :
      op->vtkSlicerDICOMExportable::GetTooltip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_SetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMExportable *op = static_cast<vtkSlicerDICOMExportable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTooltip(temp0);
    }
    else
    {
      op->vtkSlicerDICOMExportable::SetTooltip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_GetSubjectHierarchyItemID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubjectHierarchyItemID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMExportable *op = static_cast<vtkSlicerDICOMExportable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetSubjectHierarchyItemID() :
      op->vtkSlicerDICOMExportable::GetSubjectHierarchyItemID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_SetSubjectHierarchyItemID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubjectHierarchyItemID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMExportable *op = static_cast<vtkSlicerDICOMExportable *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubjectHierarchyItemID(temp0);
    }
    else
    {
      op->vtkSlicerDICOMExportable::SetSubjectHierarchyItemID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_GetPluginClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMExportable *op = static_cast<vtkSlicerDICOMExportable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPluginClass() :
      op->vtkSlicerDICOMExportable::GetPluginClass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_SetPluginClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPluginClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMExportable *op = static_cast<vtkSlicerDICOMExportable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPluginClass(temp0);
    }
    else
    {
      op->vtkSlicerDICOMExportable::SetPluginClass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_GetDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMExportable *op = static_cast<vtkSlicerDICOMExportable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDirectory() :
      op->vtkSlicerDICOMExportable::GetDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_SetDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMExportable *op = static_cast<vtkSlicerDICOMExportable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirectory(temp0);
    }
    else
    {
      op->vtkSlicerDICOMExportable::SetDirectory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_GetConfidence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConfidence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMExportable *op = static_cast<vtkSlicerDICOMExportable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConfidence() :
      op->vtkSlicerDICOMExportable::GetConfidence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_SetConfidence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConfidence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMExportable *op = static_cast<vtkSlicerDICOMExportable *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConfidence(temp0);
    }
    else
    {
      op->vtkSlicerDICOMExportable::SetConfidence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_GetTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMExportable *op = static_cast<vtkSlicerDICOMExportable *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTag(temp0) :
      op->vtkSlicerDICOMExportable::GetTag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDICOMExportable_SetTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDICOMExportable *op = static_cast<vtkSlicerDICOMExportable *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTag(temp0, temp1);
    }
    else
    {
      op->vtkSlicerDICOMExportable::SetTag(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerDICOMExportable_Methods[] = {
  {"IsTypeOf", PyvtkSlicerDICOMExportable_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerDICOMExportable_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerDICOMExportable_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerDICOMExportable\nC++: static vtkSlicerDICOMExportable *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerDICOMExportable_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerDICOMExportable\nC++: vtkSlicerDICOMExportable *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerDICOMExportable_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerDICOMExportable_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetName", PyvtkSlicerDICOMExportable_GetName, METH_VARARGS,
   "GetName(self) -> str\nC++: virtual char *GetName()\n\n"},
  {"SetName", PyvtkSlicerDICOMExportable_SetName, METH_VARARGS,
   "SetName(self, _arg:str) -> None\nC++: virtual void SetName(const char *_arg)\n\n"},
  {"GetTooltip", PyvtkSlicerDICOMExportable_GetTooltip, METH_VARARGS,
   "GetTooltip(self) -> str\nC++: virtual char *GetTooltip()\n\n"},
  {"SetTooltip", PyvtkSlicerDICOMExportable_SetTooltip, METH_VARARGS,
   "SetTooltip(self, _arg:str) -> None\nC++: virtual void SetTooltip(const char *_arg)\n\n"},
  {"GetSubjectHierarchyItemID", PyvtkSlicerDICOMExportable_GetSubjectHierarchyItemID, METH_VARARGS,
   "GetSubjectHierarchyItemID(self) -> int\nC++: virtual vtkIdType GetSubjectHierarchyItemID()\n\n"},
  {"SetSubjectHierarchyItemID", PyvtkSlicerDICOMExportable_SetSubjectHierarchyItemID, METH_VARARGS,
   "SetSubjectHierarchyItemID(self, _arg:int) -> None\nC++: virtual void SetSubjectHierarchyItemID(vtkIdType _arg)\n\n"},
  {"GetPluginClass", PyvtkSlicerDICOMExportable_GetPluginClass, METH_VARARGS,
   "GetPluginClass(self) -> str\nC++: virtual char *GetPluginClass()\n\n"},
  {"SetPluginClass", PyvtkSlicerDICOMExportable_SetPluginClass, METH_VARARGS,
   "SetPluginClass(self, _arg:str) -> None\nC++: virtual void SetPluginClass(const char *_arg)\n\n"},
  {"GetDirectory", PyvtkSlicerDICOMExportable_GetDirectory, METH_VARARGS,
   "GetDirectory(self) -> str\nC++: virtual char *GetDirectory()\n\n"},
  {"SetDirectory", PyvtkSlicerDICOMExportable_SetDirectory, METH_VARARGS,
   "SetDirectory(self, _arg:str) -> None\nC++: virtual void SetDirectory(const char *_arg)\n\n"},
  {"GetConfidence", PyvtkSlicerDICOMExportable_GetConfidence, METH_VARARGS,
   "GetConfidence(self) -> float\nC++: virtual double GetConfidence()\n\n"},
  {"SetConfidence", PyvtkSlicerDICOMExportable_SetConfidence, METH_VARARGS,
   "SetConfidence(self, _arg:float) -> None\nC++: virtual void SetConfidence(double _arg)\n\n"},
  {"GetTag", PyvtkSlicerDICOMExportable_GetTag, METH_VARARGS,
   "GetTag(self, tagName:str) -> str\nC++: const char *GetTag(std::string tagName)\n\n"},
  {"SetTag", PyvtkSlicerDICOMExportable_SetTag, METH_VARARGS,
   "SetTag(self, tagName:str, tagValue:str) -> None\nC++: void SetTag(std::string tagName, std::string tagValue)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerDICOMExportable_Doc =
  "vtkSlicerDICOMExportable - VTK implementation of \\sa\nqSlicerDICOMExportable\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerDICOMExportable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerDICOMLibModuleLogicPython.vtkSlicerDICOMExportable", // tp_name
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
  PyvtkSlicerDICOMExportable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerDICOMExportable_StaticNew()
{
  return vtkSlicerDICOMExportable::New();
}

PyObject *PyvtkSlicerDICOMExportable_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerDICOMExportable_Type, PyvtkSlicerDICOMExportable_Methods,
    "vtkSlicerDICOMExportable",
 &PyvtkSlicerDICOMExportable_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerDICOMExportable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerDICOMExportable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerDICOMExportable", o) != 0)
  {
    Py_DECREF(o);
  }

}

