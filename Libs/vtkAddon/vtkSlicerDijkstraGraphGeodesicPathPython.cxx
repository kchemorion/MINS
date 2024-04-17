// python wrapper for vtkSlicerDijkstraGraphGeodesicPath
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerDijkstraGraphGeodesicPath.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerDijkstraGraphGeodesicPath(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerDijkstraGraphGeodesicPath_ClassNew(); }


static PyObject *
PyvtkSlicerDijkstraGraphGeodesicPath_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerDijkstraGraphGeodesicPath::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDijkstraGraphGeodesicPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDijkstraGraphGeodesicPath *op = static_cast<vtkSlicerDijkstraGraphGeodesicPath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerDijkstraGraphGeodesicPath::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDijkstraGraphGeodesicPath_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerDijkstraGraphGeodesicPath *tempr = vtkSlicerDijkstraGraphGeodesicPath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDijkstraGraphGeodesicPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDijkstraGraphGeodesicPath *op = static_cast<vtkSlicerDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerDijkstraGraphGeodesicPath *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerDijkstraGraphGeodesicPath::NewInstance());

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
PyvtkSlicerDijkstraGraphGeodesicPath_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerDijkstraGraphGeodesicPath::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDijkstraGraphGeodesicPath_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDijkstraGraphGeodesicPath *op = static_cast<vtkSlicerDijkstraGraphGeodesicPath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerDijkstraGraphGeodesicPath::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDijkstraGraphGeodesicPath_GetCostFunctionTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCostFunctionTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkSlicerDijkstraGraphGeodesicPath::GetCostFunctionTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDijkstraGraphGeodesicPath_GetCostFunctionTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCostFunctionTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerDijkstraGraphGeodesicPath::GetCostFunctionTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDijkstraGraphGeodesicPath_SetCostFunctionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCostFunctionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDijkstraGraphGeodesicPath *op = static_cast<vtkSlicerDijkstraGraphGeodesicPath *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCostFunctionType(temp0);
    }
    else
    {
      op->vtkSlicerDijkstraGraphGeodesicPath::SetCostFunctionType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerDijkstraGraphGeodesicPath_GetCostFunctionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCostFunctionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerDijkstraGraphGeodesicPath *op = static_cast<vtkSlicerDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCostFunctionType() :
      op->vtkSlicerDijkstraGraphGeodesicPath::GetCostFunctionType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerDijkstraGraphGeodesicPath_Methods[] = {
  {"IsTypeOf", PyvtkSlicerDijkstraGraphGeodesicPath_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerDijkstraGraphGeodesicPath_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerDijkstraGraphGeodesicPath_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkSlicerDijkstraGraphGeodesicPath\nC++: static vtkSlicerDijkstraGraphGeodesicPath *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerDijkstraGraphGeodesicPath_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerDijkstraGraphGeodesicPath\nC++: vtkSlicerDijkstraGraphGeodesicPath *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerDijkstraGraphGeodesicPath_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerDijkstraGraphGeodesicPath_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetCostFunctionTypeAsString", PyvtkSlicerDijkstraGraphGeodesicPath_GetCostFunctionTypeAsString, METH_VARARGS,
   "GetCostFunctionTypeAsString(costFunctionType:int) -> str\nC++: static const char *GetCostFunctionTypeAsString(\n    int costFunctionType)\n\n"},
  {"GetCostFunctionTypeFromString", PyvtkSlicerDijkstraGraphGeodesicPath_GetCostFunctionTypeFromString, METH_VARARGS,
   "GetCostFunctionTypeFromString(costFunctionType:str) -> int\nC++: static int GetCostFunctionTypeFromString(\n    const char *costFunctionType)\n\n"},
  {"SetCostFunctionType", PyvtkSlicerDijkstraGraphGeodesicPath_SetCostFunctionType, METH_VARARGS,
   "SetCostFunctionType(self, _arg:int) -> None\nC++: virtual void SetCostFunctionType(int _arg)\n\n"},
  {"GetCostFunctionType", PyvtkSlicerDijkstraGraphGeodesicPath_GetCostFunctionType, METH_VARARGS,
   "GetCostFunctionType(self) -> int\nC++: virtual int GetCostFunctionType()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerDijkstraGraphGeodesicPath_Doc =
  "vtkSlicerDijkstraGraphGeodesicPath - Filter that generates curves\nbetween points of an input polydata\n\n"
  "Superclass: vtkDijkstraGraphGeodesicPath\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerDijkstraGraphGeodesicPath_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkAddonPython.vtkSlicerDijkstraGraphGeodesicPath", // tp_name
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
  PyvtkSlicerDijkstraGraphGeodesicPath_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerDijkstraGraphGeodesicPath_StaticNew()
{
  return vtkSlicerDijkstraGraphGeodesicPath::New();
}

PyObject *PyvtkSlicerDijkstraGraphGeodesicPath_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerDijkstraGraphGeodesicPath_Type, PyvtkSlicerDijkstraGraphGeodesicPath_Methods,
    "vtkSlicerDijkstraGraphGeodesicPath",
 &PyvtkSlicerDijkstraGraphGeodesicPath_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDijkstraGraphGeodesicPath");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "COST_FUNCTION_TYPE_DISTANCE", vtkSlicerDijkstraGraphGeodesicPath::COST_FUNCTION_TYPE_DISTANCE },
        { "COST_FUNCTION_TYPE_ADDITIVE", vtkSlicerDijkstraGraphGeodesicPath::COST_FUNCTION_TYPE_ADDITIVE },
        { "COST_FUNCTION_TYPE_MULTIPLICATIVE", vtkSlicerDijkstraGraphGeodesicPath::COST_FUNCTION_TYPE_MULTIPLICATIVE },
        { "COST_FUNCTION_TYPE_INVERSE_SQUARED", vtkSlicerDijkstraGraphGeodesicPath::COST_FUNCTION_TYPE_INVERSE_SQUARED },
        { "COST_FUNCTION_TYPE_LAST", vtkSlicerDijkstraGraphGeodesicPath::COST_FUNCTION_TYPE_LAST },
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

void PyVTKAddFile_vtkSlicerDijkstraGraphGeodesicPath(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerDijkstraGraphGeodesicPath_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerDijkstraGraphGeodesicPath", o) != 0)
  {
    Py_DECREF(o);
  }

}

