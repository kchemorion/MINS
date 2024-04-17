// python wrapper for vtkSlicerUnitsLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerUnitsLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerUnitsLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerUnitsLogic_ClassNew(); }


static PyObject *
PyvtkSlicerUnitsLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerUnitsLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerUnitsLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerUnitsLogic *op = static_cast<vtkSlicerUnitsLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerUnitsLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerUnitsLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerUnitsLogic *tempr = vtkSlicerUnitsLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerUnitsLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerUnitsLogic *op = static_cast<vtkSlicerUnitsLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerUnitsLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerUnitsLogic::NewInstance());

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
PyvtkSlicerUnitsLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerUnitsLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerUnitsLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerUnitsLogic *op = static_cast<vtkSlicerUnitsLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerUnitsLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerUnitsLogic_AddUnitNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUnitNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerUnitsLogic *op = static_cast<vtkSlicerUnitsLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = "length";
  const char *temp2 = "";
  const char *temp3 = "";
  int temp4 = 3;
  double temp5 = -10000.;
  double temp6 = 10000.;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 7) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    vtkMRMLUnitNode *tempr = (ap.IsBound() ?
      op->AddUnitNode(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkSlicerUnitsLogic::AddUnitNode(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerUnitsLogic_SetDefaultUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerUnitsLogic *op = static_cast<vtkSlicerUnitsLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDefaultUnit(temp0, temp1);
    }
    else
    {
      op->vtkSlicerUnitsLogic::SetDefaultUnit(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerUnitsLogic_GetUnitsScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnitsScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerUnitsLogic *op = static_cast<vtkSlicerUnitsLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLScene *tempr = (ap.IsBound() ?
      op->GetUnitsScene() :
      op->vtkSlicerUnitsLogic::GetUnitsScene());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerUnitsLogic_GetSIPrefixCoefficient(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSIPrefixCoefficient");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = vtkSlicerUnitsLogic::GetSIPrefixCoefficient(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerUnitsLogic_GetDisplayCoefficient(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDisplayCoefficient");

  const char *temp0 = nullptr;
  const char *temp1 = "";
  double temp2 = 1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    double tempr = vtkSlicerUnitsLogic::GetDisplayCoefficient(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerUnitsLogic_Methods[] = {
  {"IsTypeOf", PyvtkSlicerUnitsLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerUnitsLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerUnitsLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerUnitsLogic\nC++: static vtkSlicerUnitsLogic *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerUnitsLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerUnitsLogic\nC++: vtkSlicerUnitsLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerUnitsLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerUnitsLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddUnitNode", PyvtkSlicerUnitsLogic_AddUnitNode, METH_VARARGS,
   "AddUnitNode(self, name:str, quantity:str=\"length\",\n    prefix:str=\"\", suffix:str=\"\", precision:int=3,\n    min:float=-10000., max:float=10000.) -> vtkMRMLUnitNode\nC++: vtkMRMLUnitNode *AddUnitNode(const char *name,\n    const char *quantity=\"length\", const char *prefix=\"\",\n    const char *suffix=\"\", int precision=3, double min=-10000.,\n    double max=10000.)\n\nAdd unit node to the scene. Returns nullptr if the logic has no\nscene.\n"},
  {"SetDefaultUnit", PyvtkSlicerUnitsLogic_SetDefaultUnit, METH_VARARGS,
   "SetDefaultUnit(self, quantity:str, id:str) -> None\nC++: void SetDefaultUnit(const char *quantity, const char *id)\n\nChange the default unit for the corresponding quantity\n"},
  {"GetUnitsScene", PyvtkSlicerUnitsLogic_GetUnitsScene, METH_VARARGS,
   "GetUnitsScene(self) -> vtkMRMLScene\nC++: vtkMRMLScene *GetUnitsScene()\n\nGet the scene with preset unit nodes in it.\n"},
  {"GetSIPrefixCoefficient", PyvtkSlicerUnitsLogic_GetSIPrefixCoefficient, METH_VARARGS,
   "GetSIPrefixCoefficient(prefix:str) -> float\nC++: static double GetSIPrefixCoefficient(const char *prefix)\n\nGet the coefficient associated with the given SI prefix name.\n\nReturns the coefficient for all prefix names defined in the\n[International System of Units\n(SI)](https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefi\nxes) reported in the table below.\n\nOtherwise, returns 1 if an empty name or an unknown prefix name\nis given.\n\n| Prefix | Coefficient                         |\n|--------|-------------------------------------| | yotta  | 10^24\n (1000000000000000000000000)  | | zetta  | 10^21 \n(1000000000000000000000)     | | exa    | 10^18 \n(1000000000000000000)        | | peta   | 10^15 \n(1000000000000000)           | | tera   | 10^12  (1000000000000) \n            | | giga   | 10^9   (1000000000)                 | |\nmega   | 10^6   (1000000)                    | | kilo   | 10^3  \n(1000)                       | | hecto  | 10^2   (100)           \n            | | deca   | 10^1   (10)                         | | \n      | 10^0   (1)                          | | deci   | 10^-1 \n(0.1)                        | | centi  | 10^-2  (0.01)          \n            | | milli  | 10^-3  (0.001)                      | |\nmicro  | 10^-6  (0.000001)                   | | nano   | 10^-9 \n(0.000000001)                | | pico   | 10^-12 (0.000000000001)\n            | | femto  | 10^-15 (0.000000000000001)          | |\natto   | 10^-18 (0.000000000000000001)       | | zepto  | 10^-21\n(0.000000000000000000001)    | | yocto  | 10^-24\n(0.000000000000000000000001) |\n\nSource\nhttps://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes\n\n\\sa AddUnitNodeToScene()\n"},
  {"GetDisplayCoefficient", PyvtkSlicerUnitsLogic_GetDisplayCoefficient, METH_VARARGS,
   "GetDisplayCoefficient(displayPrefix:str, valuePrefix:str=\"\",\n    power:float=1) -> float\nC++: static double GetDisplayCoefficient(\n    const char *displayPrefix, const char *valuePrefix=\"\",\n    double power=1)\n\nGet the coefficient to transform a value and display it.\n\nThis function is used to conveniently compute the display\ncoefficient expected by AddUnitNodeToScene().\n\nThe display coefficient is used to transform quantity values to a\ngiven unit.\n\nBy default, value for a given quantity are assumed to have no\nprefix. For example, this means that `length` values are in\n`meter`, `time` values are in `second`. In that case, the\ncoefficient to transform quantity values to a given unit can be\ncomputed using GetDisplayCoefficient() specifying only the\ndisplayPrefix parameter.\n\nIf the quantity values are associated with a specific unit, the\nvaluePrefix parameter should be provided. For example, in Slicer,\nsince `length` values are assumed to be in millimeter the display\ncoefficient should be computed specifying `milli` as valuePrefix.\n\ndisplayPrefix and valuePrefix can be any value documented in\nGetSIPrefixCoefficient().power return value raised to this power,\nwhich is useful for compute display coefficient for derived\n unit, for example getting display prefix for cm2.\n\n\\sa GetSIPrefixCoefficient()\n\\sa AddUnitNodeToScene()\n\\sa AddDefaultsUnits(), AddBuiltInUnits()\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerUnitsLogic_Doc =
  "vtkSlicerUnitsLogic - Slicer logic for unit manipulation.\n\n"
  "Superclass: vtkMRMLAbstractLogic\n\n"
  "This class manages the logic associated with the units. It allows to\n"
  "create a new unit easily. The logic is in charge of calling a modify\n"
  "on the the selection node every time a current unit is modified so\n"
  "the listeners can update themselves.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerUnitsLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerUnitsModuleLogicPython.vtkSlicerUnitsLogic", // tp_name
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
  PyvtkSlicerUnitsLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerUnitsLogic_StaticNew()
{
  return vtkSlicerUnitsLogic::New();
}

PyObject *PyvtkSlicerUnitsLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerUnitsLogic_Type, PyvtkSlicerUnitsLogic_Methods,
    "vtkSlicerUnitsLogic",
 &PyvtkSlicerUnitsLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLAbstractLogic");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerUnitsLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerUnitsLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerUnitsLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

