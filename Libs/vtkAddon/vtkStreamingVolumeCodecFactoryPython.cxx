// python wrapper for vtkStreamingVolumeCodecFactory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkStreamingVolumeCodecFactory.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStreamingVolumeCodecFactory(PyObject *dict); }
extern "C" { PyObject *PyvtkStreamingVolumeCodecFactory_ClassNew(); }


static PyObject *
PyvtkStreamingVolumeCodecFactory_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStreamingVolumeCodecFactory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodecFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodecFactory *op = static_cast<vtkStreamingVolumeCodecFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreamingVolumeCodecFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodecFactory_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStreamingVolumeCodecFactory *tempr = vtkStreamingVolumeCodecFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodecFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodecFactory *op = static_cast<vtkStreamingVolumeCodecFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStreamingVolumeCodecFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreamingVolumeCodecFactory::NewInstance());

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
PyvtkStreamingVolumeCodecFactory_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStreamingVolumeCodecFactory::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodecFactory_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodecFactory *op = static_cast<vtkStreamingVolumeCodecFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStreamingVolumeCodecFactory::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodecFactory_RegisterStreamingCodec(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterStreamingCodec");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodecFactory *op = static_cast<vtkStreamingVolumeCodecFactory *>(vp);

  vtkSmartPointer<vtkStreamingVolumeCodec> temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStreamingVolumeCodec"))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterStreamingCodec(temp0) :
      op->vtkStreamingVolumeCodecFactory::RegisterStreamingCodec(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodecFactory_UnRegisterStreamingCodecByClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterStreamingCodecByClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodecFactory *op = static_cast<vtkStreamingVolumeCodecFactory *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterStreamingCodecByClassName(temp0) :
      op->vtkStreamingVolumeCodecFactory::UnRegisterStreamingCodecByClassName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodecFactory_CreateCodecByClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCodecByClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodecFactory *op = static_cast<vtkStreamingVolumeCodecFactory *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStreamingVolumeCodec *tempr = (ap.IsBound() ?
      op->CreateCodecByClassName(temp0) :
      op->vtkStreamingVolumeCodecFactory::CreateCodecByClassName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodecFactory_CreateCodecByFourCC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCodecByFourCC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodecFactory *op = static_cast<vtkStreamingVolumeCodecFactory *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStreamingVolumeCodec *tempr = (ap.IsBound() ?
      op->CreateCodecByFourCC(temp0) :
      op->vtkStreamingVolumeCodecFactory::CreateCodecByFourCC(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodecFactory_GetStreamingCodecClassNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStreamingCodecClassNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodecFactory *op = static_cast<vtkStreamingVolumeCodecFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetStreamingCodecClassNames() :
      op->vtkStreamingVolumeCodecFactory::GetStreamingCodecClassNames());

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
PyvtkStreamingVolumeCodecFactory_GetStreamingCodecFourCCs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStreamingCodecFourCCs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodecFactory *op = static_cast<vtkStreamingVolumeCodecFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetStreamingCodecFourCCs() :
      op->vtkStreamingVolumeCodecFactory::GetStreamingCodecFourCCs());

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
PyvtkStreamingVolumeCodecFactory_GetInstance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkStreamingVolumeCodecFactory *tempr = vtkStreamingVolumeCodecFactory::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStreamingVolumeCodecFactory_Methods[] = {
  {"IsTypeOf", PyvtkStreamingVolumeCodecFactory_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStreamingVolumeCodecFactory_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStreamingVolumeCodecFactory_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStreamingVolumeCodecFactory\nC++: static vtkStreamingVolumeCodecFactory *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStreamingVolumeCodecFactory_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStreamingVolumeCodecFactory\nC++: vtkStreamingVolumeCodecFactory *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStreamingVolumeCodecFactory_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStreamingVolumeCodecFactory_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RegisterStreamingCodec", PyvtkStreamingVolumeCodecFactory_RegisterStreamingCodec, METH_VARARGS,
   "RegisterStreamingCodec(self, codec:vtkStreamingVolumeCodec)\n    -> bool\nC++: bool RegisterStreamingCodec(\n    vtkSmartPointer<vtkStreamingVolumeCodec> codec)\n\nRegisters a new video compression codec\n\\param newCodecPointer Function pointer to the codec type new\n    function (e.g.\n    (PointerToCodecBaseNew)&vtkStreamingVolumeCodec::New )\n"},
  {"UnRegisterStreamingCodecByClassName", PyvtkStreamingVolumeCodecFactory_UnRegisterStreamingCodecByClassName, METH_VARARGS,
   "UnRegisterStreamingCodecByClassName(self, codecClassName:str)\n    -> bool\nC++: bool UnRegisterStreamingCodecByClassName(\n    const std::string &codecClassName)\n\nRemoves a codec from the factory This does not affect codecs that\nhave already been instantiated\n\\param codecClassName full name of the codec class that is being\n    unregistered\nReturns true if the codec is successfully unregistered\n"},
  {"CreateCodecByClassName", PyvtkStreamingVolumeCodecFactory_CreateCodecByClassName, METH_VARARGS,
   "CreateCodecByClassName(self, codecClassName:str)\n    -> vtkStreamingVolumeCodec\nC++: vtkStreamingVolumeCodec *CreateCodecByClassName(\n    const std::string &codecClassName)\n\nGet pointer to codec new function, or nullptr if the codec type\nnot registered Usage: vtkSmartPointercodec =\nGetVolumeCodecNewPointerByType(\"igtlioVideoDevice\")(); Returns\nnullptr if no matching codec can be found\n"},
  {"CreateCodecByFourCC", PyvtkStreamingVolumeCodecFactory_CreateCodecByFourCC, METH_VARARGS,
   "CreateCodecByFourCC(self, codecFourCC:str)\n    -> vtkStreamingVolumeCodec\nC++: vtkStreamingVolumeCodec *CreateCodecByFourCC(\n    const std::string codecFourCC)\n\nCreates a new codec that matches the specified FourCC code\n\\param codecFourCC FourCC representing the encoding method\nSee https://www.fourcc.org/codecs.php for an incomplete list\nReturns nullptr if no matching codec can be found\n"},
  {"GetStreamingCodecClassNames", PyvtkStreamingVolumeCodecFactory_GetStreamingCodecClassNames, METH_VARARGS,
   "GetStreamingCodecClassNames(self) -> (str, ...)\nC++: const std::vector<std::string> GetStreamingCodecClassNames()\n\nReturns a list of all registered Codecs\n"},
  {"GetStreamingCodecFourCCs", PyvtkStreamingVolumeCodecFactory_GetStreamingCodecFourCCs, METH_VARARGS,
   "GetStreamingCodecFourCCs(self) -> (str, ...)\nC++: std::vector<std::string> GetStreamingCodecFourCCs()\n\nGet FourCCs for all registered Codecs\n"},
  {"GetInstance", PyvtkStreamingVolumeCodecFactory_GetInstance, METH_VARARGS,
   "GetInstance() -> vtkStreamingVolumeCodecFactory\nC++: static vtkStreamingVolumeCodecFactory *GetInstance()\n\nReturn the singleton instance with no reference counting.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStreamingVolumeCodecFactory_Doc =
  "vtkStreamingVolumeCodecFactory - \\ingroup Volumes\n\n"
  "Superclass: vtkObject\n\n"
  "Class that can create compresion device for streaming volume\n"
  "    instances.\n\n"
  "This singleton class is a repository of all compression codecs for\n"
  "compressing volume. Singleton pattern adopted from vtkEventBroker\n"
  "class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStreamingVolumeCodecFactory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkAddonPython.vtkStreamingVolumeCodecFactory", // tp_name
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
  PyvtkStreamingVolumeCodecFactory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStreamingVolumeCodecFactory_StaticNew()
{
  return vtkStreamingVolumeCodecFactory::New();
}

PyObject *PyvtkStreamingVolumeCodecFactory_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStreamingVolumeCodecFactory_Type, PyvtkStreamingVolumeCodecFactory_Methods,
    "vtkStreamingVolumeCodecFactory",
 &PyvtkStreamingVolumeCodecFactory_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef PyvtkStreamingVolumeCodecFactoryInitialize_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkStreamingVolumeCodecFactoryInitialize_vtkStreamingVolumeCodecFactoryInitialize_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStreamingVolumeCodecFactoryInitialize");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkStreamingVolumeCodecFactoryInitialize *op = new vtkStreamingVolumeCodecFactoryInitialize();

    result = PyVTKSpecialObject_New("vtkStreamingVolumeCodecFactoryInitialize", op);
  }

  return result;
}

static PyObject *
PyvtkStreamingVolumeCodecFactoryInitialize_vtkStreamingVolumeCodecFactoryInitialize_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStreamingVolumeCodecFactoryInitialize");

  vtkStreamingVolumeCodecFactoryInitialize *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStreamingVolumeCodecFactoryInitialize"))
  {
    vtkStreamingVolumeCodecFactoryInitialize *op = new vtkStreamingVolumeCodecFactoryInitialize(*temp0);

    result = PyVTKSpecialObject_New("vtkStreamingVolumeCodecFactoryInitialize", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkStreamingVolumeCodecFactoryInitialize_vtkStreamingVolumeCodecFactoryInitialize_Methods[] = {
  {"vtkStreamingVolumeCodecFactoryInitialize", PyvtkStreamingVolumeCodecFactoryInitialize_vtkStreamingVolumeCodecFactoryInitialize_s2, METH_VARARGS,
   "@W vtkStreamingVolumeCodecFactoryInitialize"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkStreamingVolumeCodecFactoryInitialize_vtkStreamingVolumeCodecFactoryInitialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkStreamingVolumeCodecFactoryInitialize_vtkStreamingVolumeCodecFactoryInitialize_s1(self, args);
    case 1:
      return PyvtkStreamingVolumeCodecFactoryInitialize_vtkStreamingVolumeCodecFactoryInitialize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkStreamingVolumeCodecFactoryInitialize");
  return nullptr;
}


static const char *PyvtkStreamingVolumeCodecFactoryInitialize_Doc =

  "vtkStreamingVolumeCodecFactoryInitialize()\n    -> vtkStreamingVolumeCodecFactoryInitialize\nC++: vtkStreamingVolumeCodecFactoryInitialize()\nvtkStreamingVolumeCodecFactoryInitialize(\n    __a:vtkStreamingVolumeCodecFactoryInitialize)\n    -> vtkStreamingVolumeCodecFactoryInitialize\nC++: vtkStreamingVolumeCodecFactoryInitialize(\n    const &vtkStreamingVolumeCodecFactoryInitialize)\n""\n"
  "vtkStreamingVolumeCodecFactoryInitialize - Utility class to make sure\nqSlicerModuleManager is initialized before it is used.\n\n"
;

static PyObject *
PyvtkStreamingVolumeCodecFactoryInitialize_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkStreamingVolumeCodecFactoryInitialize_vtkStreamingVolumeCodecFactoryInitialize(nullptr, args);
}

static void PyvtkStreamingVolumeCodecFactoryInitialize_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkStreamingVolumeCodecFactoryInitialize *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkStreamingVolumeCodecFactoryInitialize_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStreamingVolumeCodecFactoryInitialize_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkAddonPython.vtkStreamingVolumeCodecFactoryInitialize", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkStreamingVolumeCodecFactoryInitialize_Delete, // tp_dealloc
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
  PyvtkStreamingVolumeCodecFactoryInitialize_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkStreamingVolumeCodecFactoryInitialize_Doc, // tp_doc
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
  PyvtkStreamingVolumeCodecFactoryInitialize_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkStreamingVolumeCodecFactoryInitialize_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkStreamingVolumeCodecFactoryInitialize(*static_cast<const vtkStreamingVolumeCodecFactoryInitialize*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkStreamingVolumeCodecFactoryInitialize_TypeNew
extern "C" { PyObject *PyvtkStreamingVolumeCodecFactoryInitialize_TypeNew(); }
#define DECLARED_PyvtkStreamingVolumeCodecFactoryInitialize_TypeNew
#endif

PyObject *PyvtkStreamingVolumeCodecFactoryInitialize_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkStreamingVolumeCodecFactoryInitialize_Type,
    PyvtkStreamingVolumeCodecFactoryInitialize_Methods,
    PyvtkStreamingVolumeCodecFactoryInitialize_vtkStreamingVolumeCodecFactoryInitialize_Methods,
    &PyvtkStreamingVolumeCodecFactoryInitialize_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStreamingVolumeCodecFactory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStreamingVolumeCodecFactory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStreamingVolumeCodecFactory", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkStreamingVolumeCodecFactoryInitialize_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkStreamingVolumeCodecFactoryInitialize", o) != 0)
  {
    Py_DECREF(o);
  }

}

