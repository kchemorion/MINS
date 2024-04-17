// python wrapper for vtkMRMLDisplayableManagerFactory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLDisplayableManagerFactory.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLDisplayableManagerFactory(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLDisplayableManagerFactory_ClassNew(); }


static PyObject *
PyvtkMRMLDisplayableManagerFactory_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLDisplayableManagerFactory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerFactory *op = static_cast<vtkMRMLDisplayableManagerFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLDisplayableManagerFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerFactory_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLDisplayableManagerFactory *tempr = vtkMRMLDisplayableManagerFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerFactory *op = static_cast<vtkMRMLDisplayableManagerFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDisplayableManagerFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLDisplayableManagerFactory::NewInstance());

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
PyvtkMRMLDisplayableManagerFactory_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLDisplayableManagerFactory::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerFactory_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerFactory *op = static_cast<vtkMRMLDisplayableManagerFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLDisplayableManagerFactory::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerFactory_IsDisplayableManagerRegistered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDisplayableManagerRegistered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerFactory *op = static_cast<vtkMRMLDisplayableManagerFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDisplayableManagerRegistered(temp0) :
      op->vtkMRMLDisplayableManagerFactory::IsDisplayableManagerRegistered(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerFactory_RegisterDisplayableManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterDisplayableManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerFactory *op = static_cast<vtkMRMLDisplayableManagerFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterDisplayableManager(temp0) :
      op->vtkMRMLDisplayableManagerFactory::RegisterDisplayableManager(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerFactory_UnRegisterDisplayableManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterDisplayableManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerFactory *op = static_cast<vtkMRMLDisplayableManagerFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterDisplayableManager(temp0) :
      op->vtkMRMLDisplayableManagerFactory::UnRegisterDisplayableManager(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerFactory_GetRegisteredDisplayableManagerCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegisteredDisplayableManagerCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerFactory *op = static_cast<vtkMRMLDisplayableManagerFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRegisteredDisplayableManagerCount() :
      op->vtkMRMLDisplayableManagerFactory::GetRegisteredDisplayableManagerCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerFactory_GetRegisteredDisplayableManagerName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegisteredDisplayableManagerName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerFactory *op = static_cast<vtkMRMLDisplayableManagerFactory *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetRegisteredDisplayableManagerName(temp0) :
      op->vtkMRMLDisplayableManagerFactory::GetRegisteredDisplayableManagerName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerFactory_InstantiateDisplayableManagers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InstantiateDisplayableManagers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerFactory *op = static_cast<vtkMRMLDisplayableManagerFactory *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    vtkMRMLDisplayableManagerGroup *tempr = (ap.IsBound() ?
      op->InstantiateDisplayableManagers(temp0) :
      op->vtkMRMLDisplayableManagerFactory::InstantiateDisplayableManagers(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerFactory_SetMRMLApplicationLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMRMLApplicationLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerFactory *op = static_cast<vtkMRMLDisplayableManagerFactory *>(vp);

  vtkMRMLApplicationLogic *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLApplicationLogic"))
  {
    if (ap.IsBound())
    {
      op->SetMRMLApplicationLogic(temp0);
    }
    else
    {
      op->vtkMRMLDisplayableManagerFactory::SetMRMLApplicationLogic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerFactory_GetMRMLApplicationLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMRMLApplicationLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerFactory *op = static_cast<vtkMRMLDisplayableManagerFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLApplicationLogic *tempr = (ap.IsBound() ?
      op->GetMRMLApplicationLogic() :
      op->vtkMRMLDisplayableManagerFactory::GetMRMLApplicationLogic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLDisplayableManagerFactory_Methods[] = {
  {"IsTypeOf", PyvtkMRMLDisplayableManagerFactory_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLDisplayableManagerFactory_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLDisplayableManagerFactory_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLDisplayableManagerFactory\nC++: static vtkMRMLDisplayableManagerFactory *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLDisplayableManagerFactory_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLDisplayableManagerFactory\nC++: vtkMRMLDisplayableManagerFactory *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLDisplayableManagerFactory_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLDisplayableManagerFactory_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsDisplayableManagerRegistered", PyvtkMRMLDisplayableManagerFactory_IsDisplayableManagerRegistered, METH_VARARGS,
   "IsDisplayableManagerRegistered(self, vtkClassName:str) -> bool\nC++: bool IsDisplayableManagerRegistered(const char *vtkClassName)\n\nReturn True if Displayable Manager identified by vtkClassName is\nalready registered.\n"},
  {"RegisterDisplayableManager", PyvtkMRMLDisplayableManagerFactory_RegisterDisplayableManager, METH_VARARGS,
   "RegisterDisplayableManager(self, vtkClassOrScriptName:str) -> bool\nC++: bool RegisterDisplayableManager(\n    const char *vtkClassOrScriptName)\n\nRegister Displayable Manager identified by vtkClassOrScriptName\nReturns True if displayable manager was successfully\nregisteredvtkClassOrScriptName should be either: a VTK class\nregistered using the CMake macro VTK_MAKE_INSTANTIATOR3 a python\nscript having the extension .py Internally for each registered\npython script, a scripted displayable manager will be\ninstantiated.\n"},
  {"UnRegisterDisplayableManager", PyvtkMRMLDisplayableManagerFactory_UnRegisterDisplayableManager, METH_VARARGS,
   "UnRegisterDisplayableManager(self, vtkClassOrScriptName:str)\n    -> bool\nC++: bool UnRegisterDisplayableManager(\n    const char *vtkClassOrScriptName)\n\nUnRegister Displayable Manager identified by\nvtkClassOrScriptName. Returns True if displayable manager was\nsuccessfully unregisteredvtkClassOrScriptName should be either a\nVTK class registered using the CMake macro VTK_MAKE_INSTANTIATOR3\nor a python script name.\n"},
  {"GetRegisteredDisplayableManagerCount", PyvtkMRMLDisplayableManagerFactory_GetRegisteredDisplayableManagerCount, METH_VARARGS,
   "GetRegisteredDisplayableManagerCount(self) -> int\nC++: int GetRegisteredDisplayableManagerCount()\n\nReturn number of registered displayable managers\n"},
  {"GetRegisteredDisplayableManagerName", PyvtkMRMLDisplayableManagerFactory_GetRegisteredDisplayableManagerName, METH_VARARGS,
   "GetRegisteredDisplayableManagerName(self, n:int) -> str\nC++: std::string GetRegisteredDisplayableManagerName(int n)\n\nReturn name of the nth registered displayable manager\n"},
  {"InstantiateDisplayableManagers", PyvtkMRMLDisplayableManagerFactory_InstantiateDisplayableManagers, METH_VARARGS,
   "InstantiateDisplayableManagers(self, newRenderer:vtkRenderer)\n    -> vtkMRMLDisplayableManagerGroup\nC++: vtkMRMLDisplayableManagerGroup *InstantiateDisplayableManagers(\n    vtkRenderer *newRenderer)\n\nInstantiate registered DisplayableManagers It returns a\nvtkMRMLDisplayableManagerGroup representing a list of\nDisplayableManager Internally, the factory keep track of all the\nGroup and will invoke the ModifiedEvent of each group.\n"},
  {"SetMRMLApplicationLogic", PyvtkMRMLDisplayableManagerFactory_SetMRMLApplicationLogic, METH_VARARGS,
   "SetMRMLApplicationLogic(self,\n    applicationLogic:vtkMRMLApplicationLogic) -> None\nC++: void SetMRMLApplicationLogic(\n    vtkMRMLApplicationLogic *applicationLogic)\n\nSet the application logic. It will be passed to displayable\nmanagers and groups to be created.\n"},
  {"GetMRMLApplicationLogic", PyvtkMRMLDisplayableManagerFactory_GetMRMLApplicationLogic, METH_VARARGS,
   "GetMRMLApplicationLogic(self) -> vtkMRMLApplicationLogic\nC++: vtkMRMLApplicationLogic *GetMRMLApplicationLogic()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLDisplayableManagerFactory_Doc =
  "vtkMRMLDisplayableManagerFactory - Factory where displayable manager\nclasses are registered.\n\n"
  "Superclass: vtkObject\n\n"
  "A displayable manager class is responsible to represent a\n"
  "MRMLDisplayable node in a renderer.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLDisplayableManagerFactory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLDisplayableManagerFactory", // tp_name
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
  PyvtkMRMLDisplayableManagerFactory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLDisplayableManagerFactory_StaticNew()
{
  return vtkMRMLDisplayableManagerFactory::New();
}

PyObject *PyvtkMRMLDisplayableManagerFactory_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLDisplayableManagerFactory_Type, PyvtkMRMLDisplayableManagerFactory_Methods,
    "vtkMRMLDisplayableManagerFactory",
 &PyvtkMRMLDisplayableManagerFactory_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "DisplayableManagerFactoryRegisteredEvent", vtkMRMLDisplayableManagerFactory::DisplayableManagerFactoryRegisteredEvent },
        { "DisplayableManagerFactoryUnRegisteredEvent", vtkMRMLDisplayableManagerFactory::DisplayableManagerFactoryUnRegisteredEvent },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLDisplayableManagerFactory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLDisplayableManagerFactory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLDisplayableManagerFactory", o) != 0)
  {
    Py_DECREF(o);
  }

}

