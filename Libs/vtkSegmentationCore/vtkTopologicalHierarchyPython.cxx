// python wrapper for vtkTopologicalHierarchy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTopologicalHierarchy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTopologicalHierarchy(PyObject *dict); }
extern "C" { PyObject *PyvtkTopologicalHierarchy_ClassNew(); }


static PyObject *
PyvtkTopologicalHierarchy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTopologicalHierarchy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTopologicalHierarchy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTopologicalHierarchy *op = static_cast<vtkTopologicalHierarchy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTopologicalHierarchy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTopologicalHierarchy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTopologicalHierarchy *tempr = vtkTopologicalHierarchy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTopologicalHierarchy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTopologicalHierarchy *op = static_cast<vtkTopologicalHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTopologicalHierarchy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTopologicalHierarchy::NewInstance());

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
PyvtkTopologicalHierarchy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTopologicalHierarchy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTopologicalHierarchy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTopologicalHierarchy *op = static_cast<vtkTopologicalHierarchy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTopologicalHierarchy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTopologicalHierarchy_GetOutputLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTopologicalHierarchy *op = static_cast<vtkTopologicalHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetOutputLevels() :
      op->vtkTopologicalHierarchy::GetOutputLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTopologicalHierarchy_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTopologicalHierarchy *op = static_cast<vtkTopologicalHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkTopologicalHierarchy::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTopologicalHierarchy_SetInputPolyDataCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputPolyDataCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTopologicalHierarchy *op = static_cast<vtkTopologicalHierarchy *>(vp);

  vtkPolyDataCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyDataCollection"))
  {
    if (ap.IsBound())
    {
      op->SetInputPolyDataCollection(temp0);
    }
    else
    {
      op->vtkTopologicalHierarchy::SetInputPolyDataCollection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTopologicalHierarchy_SetContainConstraintFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContainConstraintFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTopologicalHierarchy *op = static_cast<vtkTopologicalHierarchy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContainConstraintFactor(temp0);
    }
    else
    {
      op->vtkTopologicalHierarchy::SetContainConstraintFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTopologicalHierarchy_GetContainConstraintFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainConstraintFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTopologicalHierarchy *op = static_cast<vtkTopologicalHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetContainConstraintFactor() :
      op->vtkTopologicalHierarchy::GetContainConstraintFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTopologicalHierarchy_Methods[] = {
  {"IsTypeOf", PyvtkTopologicalHierarchy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTopologicalHierarchy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTopologicalHierarchy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTopologicalHierarchy\nC++: static vtkTopologicalHierarchy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTopologicalHierarchy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTopologicalHierarchy\nC++: vtkTopologicalHierarchy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTopologicalHierarchy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTopologicalHierarchy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetOutputLevels", PyvtkTopologicalHierarchy_GetOutputLevels, METH_VARARGS,
   "GetOutputLevels(self) -> vtkIntArray\nC++: virtual vtkIntArray *GetOutputLevels()\n\nGet output topological hierarchy levels\n"},
  {"Update", PyvtkTopologicalHierarchy_Update, METH_VARARGS,
   "Update(self) -> None\nC++: virtual void Update()\n\nCompute topological hierarchy levels for input poly data models\nusing their bounding boxes. This function has to be explicitly\ncalled! Output can be get using GetOutputLevels()\n"},
  {"SetInputPolyDataCollection", PyvtkTopologicalHierarchy_SetInputPolyDataCollection, METH_VARARGS,
   "SetInputPolyDataCollection(self, _arg:vtkPolyDataCollection)\n    -> None\nC++: virtual void SetInputPolyDataCollection(\n    vtkPolyDataCollection *_arg)\n\nSet input poly data collection\n"},
  {"SetContainConstraintFactor", PyvtkTopologicalHierarchy_SetContainConstraintFactor, METH_VARARGS,
   "SetContainConstraintFactor(self, _arg:float) -> None\nC++: virtual void SetContainConstraintFactor(double _arg)\n\nSet constraint factor (used when determining if a poly data\ncontains another)\n"},
  {"GetContainConstraintFactor", PyvtkTopologicalHierarchy_GetContainConstraintFactor, METH_VARARGS,
   "GetContainConstraintFactor(self) -> float\nC++: virtual double GetContainConstraintFactor()\n\nGet constraint factor (used when determining if a poly data\ncontains another)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTopologicalHierarchy_Doc =
  "vtkTopologicalHierarchy - Assigns hierarchy level values to the\nelements of a poly data collection\n\n"
  "Superclass: vtkObject\n\n"
  "\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTopologicalHierarchy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkTopologicalHierarchy", // tp_name
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
  PyvtkTopologicalHierarchy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTopologicalHierarchy_StaticNew()
{
  return vtkTopologicalHierarchy::New();
}

PyObject *PyvtkTopologicalHierarchy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTopologicalHierarchy_Type, PyvtkTopologicalHierarchy_Methods,
    "vtkTopologicalHierarchy",
 &PyvtkTopologicalHierarchy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTopologicalHierarchy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTopologicalHierarchy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTopologicalHierarchy", o) != 0)
  {
    Py_DECREF(o);
  }

}

