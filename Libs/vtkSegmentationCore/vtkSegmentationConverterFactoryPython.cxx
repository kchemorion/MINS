// python wrapper for vtkSegmentationConverterFactory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSegmentationConverterFactory.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSegmentationConverterFactory(PyObject *dict); }
extern "C" { PyObject *PyvtkSegmentationConverterFactory_ClassNew(); }


static PyObject *
PyvtkSegmentationConverterFactory_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSegmentationConverterFactory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterFactory *op = static_cast<vtkSegmentationConverterFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSegmentationConverterFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterFactory_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSegmentationConverterFactory *tempr = vtkSegmentationConverterFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterFactory *op = static_cast<vtkSegmentationConverterFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegmentationConverterFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSegmentationConverterFactory::NewInstance());

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
PyvtkSegmentationConverterFactory_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSegmentationConverterFactory::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterFactory_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterFactory *op = static_cast<vtkSegmentationConverterFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSegmentationConverterFactory::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterFactory_CopyConverterRules(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyConverterRules");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterFactory *op = static_cast<vtkSegmentationConverterFactory *>(vp);

  std::vector<vtkSmartPointer<vtkSegmentationConverterRule>> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size(), "vtkSegmentationConverterRule"))
  {
    if (ap.IsBound())
    {
      op->CopyConverterRules(temp0);
    }
    else
    {
      op->vtkSegmentationConverterFactory::CopyConverterRules(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp0.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp0.data(), temp0.size()));
      ap.SetContents(0, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterFactory_RegisterConverterRule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterConverterRule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterFactory *op = static_cast<vtkSegmentationConverterFactory *>(vp);

  vtkSegmentationConverterRule *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentationConverterRule"))
  {
    if (ap.IsBound())
    {
      op->RegisterConverterRule(temp0);
    }
    else
    {
      op->vtkSegmentationConverterFactory::RegisterConverterRule(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterFactory_UnregisterConverterRule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnregisterConverterRule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterFactory *op = static_cast<vtkSegmentationConverterFactory *>(vp);

  vtkSegmentationConverterRule *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentationConverterRule"))
  {
    if (ap.IsBound())
    {
      op->UnregisterConverterRule(temp0);
    }
    else
    {
      op->vtkSegmentationConverterFactory::UnregisterConverterRule(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterFactory_GetConverterRules(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConverterRules");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterFactory *op = static_cast<vtkSegmentationConverterFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::vector<vtkSmartPointer<vtkSegmentationConverterRule>> *tempr = (ap.IsBound() ?
      &op->GetConverterRules() :
      &op->vtkSegmentationConverterFactory::GetConverterRules());

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterFactory_DisableConverterRule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableConverterRule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterFactory *op = static_cast<vtkSegmentationConverterFactory *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->DisableConverterRule(temp0, temp1) :
      op->vtkSegmentationConverterFactory::DisableConverterRule(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterFactory_DisableRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterFactory *op = static_cast<vtkSegmentationConverterFactory *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisableRepresentation(temp0);
    }
    else
    {
      op->vtkSegmentationConverterFactory::DisableRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterFactory_ConstructRepresentationObjectByClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstructRepresentationObjectByClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterFactory *op = static_cast<vtkSegmentationConverterFactory *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->ConstructRepresentationObjectByClass(temp0) :
      op->vtkSegmentationConverterFactory::ConstructRepresentationObjectByClass(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterFactory_ConstructRepresentationObjectByRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstructRepresentationObjectByRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterFactory *op = static_cast<vtkSegmentationConverterFactory *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->ConstructRepresentationObjectByRepresentation(temp0) :
      op->vtkSegmentationConverterFactory::ConstructRepresentationObjectByRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterFactory_GetInstance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSegmentationConverterFactory *tempr = vtkSegmentationConverterFactory::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSegmentationConverterFactory_Methods[] = {
  {"IsTypeOf", PyvtkSegmentationConverterFactory_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSegmentationConverterFactory_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSegmentationConverterFactory_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSegmentationConverterFactory\nC++: static vtkSegmentationConverterFactory *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSegmentationConverterFactory_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSegmentationConverterFactory\nC++: vtkSegmentationConverterFactory *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSegmentationConverterFactory_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSegmentationConverterFactory_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CopyConverterRules", PyvtkSegmentationConverterFactory_CopyConverterRules, METH_VARARGS,
   "CopyConverterRules(self, rules:[vtkSegmentationConverterRule,\n    ...]) -> None\nC++: void CopyConverterRules(RuleListType &rules)\n\nCreate a copy of all registered converter rules. The rule\nargument is overwritten (any previous content is cleared) with\nrules copied from the list of all registered rules.\n"},
  {"RegisterConverterRule", PyvtkSegmentationConverterFactory_RegisterConverterRule, METH_VARARGS,
   "RegisterConverterRule(self, rule:vtkSegmentationConverterRule)\n    -> None\nC++: void RegisterConverterRule(\n    vtkSegmentationConverterRule *rule)\n\nAdd a converter rule. The factory (and all converter classes it\ncreates) will keep a reference to this rule object, and it will\nnot be deleted until all these referring classes are deleted.\n"},
  {"UnregisterConverterRule", PyvtkSegmentationConverterFactory_UnregisterConverterRule, METH_VARARGS,
   "UnregisterConverterRule(self, rule:vtkSegmentationConverterRule)\n    -> None\nC++: void UnregisterConverterRule(\n    vtkSegmentationConverterRule *rule)\n\nRemove a converter rule from the factory. This does not affect\nconverters that have already been created.\n"},
  {"GetConverterRules", PyvtkSegmentationConverterFactory_GetConverterRules, METH_VARARGS,
   "GetConverterRules(self) -> (vtkSegmentationConverterRule, ...)\nC++: const RuleListType &GetConverterRules()\n\nGet all registered converter rules\n"},
  {"DisableConverterRule", PyvtkSegmentationConverterFactory_DisableConverterRule, METH_VARARGS,
   "DisableConverterRule(self, sourceRepresentationName:str,\n    targetRepresentationName:str) -> bool\nC++: bool DisableConverterRule(\n    std::string sourceRepresentationName,\n    std::string targetRepresentationName)\n\nDisable a converter rule, preventing it from being used. Achieved\nby unregistering the rule that can create the representation.\n\\return Success flag indicating whether a rule with the specified\nrepresentations was found and disabled\n"},
  {"DisableRepresentation", PyvtkSegmentationConverterFactory_DisableRepresentation, METH_VARARGS,
   "DisableRepresentation(self, representationName:str) -> None\nC++: void DisableRepresentation(std::string representationName)\n\nDisable a representation, preventing it from being created.\nAchieved by unregistering the rules that can create the\nrepresentation.\n"},
  {"ConstructRepresentationObjectByClass", PyvtkSegmentationConverterFactory_ConstructRepresentationObjectByClass, METH_VARARGS,
   "ConstructRepresentationObjectByClass(self, className:str)\n    -> vtkDataObject\nC++: vtkDataObject *ConstructRepresentationObjectByClass(\n    std::string className)\n\nConstructs representation object from class name using the\nConstructRepresentationObject methods in the registered\nconversion rules that must be able to instantiate the\nrepresentation classes they support.\n"},
  {"ConstructRepresentationObjectByRepresentation", PyvtkSegmentationConverterFactory_ConstructRepresentationObjectByRepresentation, METH_VARARGS,
   "ConstructRepresentationObjectByRepresentation(self,\n    representationName:str) -> vtkDataObject\nC++: vtkDataObject *ConstructRepresentationObjectByRepresentation(\n    std::string representationName)\n\nConstructs representation object from representation name using\nthe ConstructRepresentationObject methods in the registered\nconversion rules that must be able to instantiate the\nrepresentation classes they support.\n"},
  {"GetInstance", PyvtkSegmentationConverterFactory_GetInstance, METH_VARARGS,
   "GetInstance() -> vtkSegmentationConverterFactory\nC++: static vtkSegmentationConverterFactory *GetInstance()\n\nReturn the singleton instance with no reference counting.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSegmentationConverterFactory_Doc =
  "vtkSegmentationConverterFactory - Class that can create\nvtkSegmentationConverter instances.\n\n"
  "Superclass: vtkObject\n\n"
  "This singleton class is a repository of all segmentation converter\n"
  "rules. Singleton pattern adopted from vtkEventBroker class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSegmentationConverterFactory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkSegmentationConverterFactory", // tp_name
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
  PyvtkSegmentationConverterFactory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSegmentationConverterFactory_StaticNew()
{
  return vtkSegmentationConverterFactory::New();
}

PyObject *PyvtkSegmentationConverterFactory_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSegmentationConverterFactory_Type, PyvtkSegmentationConverterFactory_Methods,
    "vtkSegmentationConverterFactory",
 &PyvtkSegmentationConverterFactory_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef PyvtkSegmentationConverterFactoryInitialize_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkSegmentationConverterFactoryInitialize_vtkSegmentationConverterFactoryInitialize_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSegmentationConverterFactoryInitialize");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSegmentationConverterFactoryInitialize *op = new vtkSegmentationConverterFactoryInitialize();

    result = PyVTKSpecialObject_New("vtkSegmentationConverterFactoryInitialize", op);
  }

  return result;
}

static PyObject *
PyvtkSegmentationConverterFactoryInitialize_vtkSegmentationConverterFactoryInitialize_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSegmentationConverterFactoryInitialize");

  vtkSegmentationConverterFactoryInitialize *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkSegmentationConverterFactoryInitialize"))
  {
    vtkSegmentationConverterFactoryInitialize *op = new vtkSegmentationConverterFactoryInitialize(*temp0);

    result = PyVTKSpecialObject_New("vtkSegmentationConverterFactoryInitialize", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSegmentationConverterFactoryInitialize_vtkSegmentationConverterFactoryInitialize_Methods[] = {
  {"vtkSegmentationConverterFactoryInitialize", PyvtkSegmentationConverterFactoryInitialize_vtkSegmentationConverterFactoryInitialize_s2, METH_VARARGS,
   "@W vtkSegmentationConverterFactoryInitialize"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSegmentationConverterFactoryInitialize_vtkSegmentationConverterFactoryInitialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSegmentationConverterFactoryInitialize_vtkSegmentationConverterFactoryInitialize_s1(self, args);
    case 1:
      return PyvtkSegmentationConverterFactoryInitialize_vtkSegmentationConverterFactoryInitialize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkSegmentationConverterFactoryInitialize");
  return nullptr;
}


static const char *PyvtkSegmentationConverterFactoryInitialize_Doc =

  "vtkSegmentationConverterFactoryInitialize()\n    -> vtkSegmentationConverterFactoryInitialize\nC++: vtkSegmentationConverterFactoryInitialize()\nvtkSegmentationConverterFactoryInitialize(\n    __a:vtkSegmentationConverterFactoryInitialize)\n    -> vtkSegmentationConverterFactoryInitialize\nC++: vtkSegmentationConverterFactoryInitialize(\n    const &vtkSegmentationConverterFactoryInitialize)\n""\n"
  "vtkSegmentationConverterFactoryInitialize - Utility class to make\nsure qSlicerModuleManager is initialized before it is used.\n\n"
;

static PyObject *
PyvtkSegmentationConverterFactoryInitialize_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkSegmentationConverterFactoryInitialize_vtkSegmentationConverterFactoryInitialize(nullptr, args);
}

static void PyvtkSegmentationConverterFactoryInitialize_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkSegmentationConverterFactoryInitialize *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkSegmentationConverterFactoryInitialize_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSegmentationConverterFactoryInitialize_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkSegmentationConverterFactoryInitialize", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkSegmentationConverterFactoryInitialize_Delete, // tp_dealloc
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
  PyvtkSegmentationConverterFactoryInitialize_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkSegmentationConverterFactoryInitialize_Doc, // tp_doc
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
  PyvtkSegmentationConverterFactoryInitialize_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkSegmentationConverterFactoryInitialize_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkSegmentationConverterFactoryInitialize(*static_cast<const vtkSegmentationConverterFactoryInitialize*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkSegmentationConverterFactoryInitialize_TypeNew
extern "C" { PyObject *PyvtkSegmentationConverterFactoryInitialize_TypeNew(); }
#define DECLARED_PyvtkSegmentationConverterFactoryInitialize_TypeNew
#endif

PyObject *PyvtkSegmentationConverterFactoryInitialize_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkSegmentationConverterFactoryInitialize_Type,
    PyvtkSegmentationConverterFactoryInitialize_Methods,
    PyvtkSegmentationConverterFactoryInitialize_vtkSegmentationConverterFactoryInitialize_Methods,
    &PyvtkSegmentationConverterFactoryInitialize_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSegmentationConverterFactory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSegmentationConverterFactory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSegmentationConverterFactory", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSegmentationConverterFactoryInitialize_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkSegmentationConverterFactoryInitialize", o) != 0)
  {
    Py_DECREF(o);
  }

}

