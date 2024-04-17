// python wrapper for vtkITKLabelShapeStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkITKLabelShapeStatistics.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkITKLabelShapeStatistics(PyObject *dict); }
extern "C" { PyObject *PyvtkITKLabelShapeStatistics_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkITKLabelShapeStatistics_ShapeStatistic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkITKPython.vtkITKLabelShapeStatistics.ShapeStatistic", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkITKLabelShapeStatistics_ShapeStatistic_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkITKLabelShapeStatistics_ShapeStatistic_Type, static_cast<int>(val));
}


static PyObject *
PyvtkITKLabelShapeStatistics_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkITKLabelShapeStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKLabelShapeStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLabelShapeStatistics *op = static_cast<vtkITKLabelShapeStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkITKLabelShapeStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKLabelShapeStatistics_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkITKLabelShapeStatistics *tempr = vtkITKLabelShapeStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKLabelShapeStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLabelShapeStatistics *op = static_cast<vtkITKLabelShapeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkITKLabelShapeStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkITKLabelShapeStatistics::NewInstance());

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
PyvtkITKLabelShapeStatistics_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkITKLabelShapeStatistics::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKLabelShapeStatistics_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLabelShapeStatistics *op = static_cast<vtkITKLabelShapeStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkITKLabelShapeStatistics::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKLabelShapeStatistics_GetShapeStatisticAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetShapeStatisticAsString");

  typedef vtkITKLabelShapeStatistics::ShapeStatistic temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkITKLabelShapeStatistics.ShapeStatistic"))
  {
    std::string tempr = vtkITKLabelShapeStatistics::GetShapeStatisticAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKLabelShapeStatistics_GetShapeStatisticFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetShapeStatisticFromString");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    typedef vtkITKLabelShapeStatistics::ShapeStatistic tempr_type;
  tempr_type tempr = vtkITKLabelShapeStatistics::GetShapeStatisticFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkITKLabelShapeStatistics_ShapeStatistic_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKLabelShapeStatistics_SetDirections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLabelShapeStatistics *op = static_cast<vtkITKLabelShapeStatistics *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetDirections(temp0);
    }
    else
    {
      op->vtkITKLabelShapeStatistics::SetDirections(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKLabelShapeStatistics_SetComputedStatistics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputedStatistics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLabelShapeStatistics *op = static_cast<vtkITKLabelShapeStatistics *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->SetComputedStatistics(temp0);
    }
    else
    {
      op->vtkITKLabelShapeStatistics::SetComputedStatistics(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKLabelShapeStatistics_GetComputedStatistics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedStatistics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLabelShapeStatistics *op = static_cast<vtkITKLabelShapeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetComputedStatistics() :
      op->vtkITKLabelShapeStatistics::GetComputedStatistics());

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
PyvtkITKLabelShapeStatistics_SetComputeShapeStatistic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeShapeStatistic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLabelShapeStatistics *op = static_cast<vtkITKLabelShapeStatistics *>(vp);

  std::string temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetComputeShapeStatistic(temp0, temp1);
    }
    else
    {
      op->vtkITKLabelShapeStatistics::SetComputeShapeStatistic(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKLabelShapeStatistics_GetComputeShapeStatistic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeShapeStatistic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLabelShapeStatistics *op = static_cast<vtkITKLabelShapeStatistics *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeShapeStatistic(temp0) :
      op->vtkITKLabelShapeStatistics::GetComputeShapeStatistic(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKLabelShapeStatistics_ComputeShapeStatisticOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeShapeStatisticOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLabelShapeStatistics *op = static_cast<vtkITKLabelShapeStatistics *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ComputeShapeStatisticOn(temp0);
    }
    else
    {
      op->vtkITKLabelShapeStatistics::ComputeShapeStatisticOn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKLabelShapeStatistics_ComputeShapeStatisticOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeShapeStatisticOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLabelShapeStatistics *op = static_cast<vtkITKLabelShapeStatistics *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ComputeShapeStatisticOff(temp0);
    }
    else
    {
      op->vtkITKLabelShapeStatistics::ComputeShapeStatisticOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkITKLabelShapeStatistics_Methods[] = {
  {"IsTypeOf", PyvtkITKLabelShapeStatistics_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkITKLabelShapeStatistics_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkITKLabelShapeStatistics_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkITKLabelShapeStatistics\nC++: static vtkITKLabelShapeStatistics *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkITKLabelShapeStatistics_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkITKLabelShapeStatistics\nC++: vtkITKLabelShapeStatistics *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkITKLabelShapeStatistics_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkITKLabelShapeStatistics_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetShapeStatisticAsString", PyvtkITKLabelShapeStatistics_GetShapeStatisticAsString, METH_VARARGS,
   "GetShapeStatisticAsString(statistic:ShapeStatistic) -> str\nC++: static std::string GetShapeStatisticAsString(\n    ShapeStatistic statistic)\n\n"},
  {"GetShapeStatisticFromString", PyvtkITKLabelShapeStatistics_GetShapeStatisticFromString, METH_VARARGS,
   "GetShapeStatisticFromString(statisticName:str) -> ShapeStatistic\nC++: static ShapeStatistic GetShapeStatisticFromString(\n    std::string statisticName)\n\n"},
  {"SetDirections", PyvtkITKLabelShapeStatistics_SetDirections, METH_VARARGS,
   "SetDirections(self, _arg:vtkMatrix4x4) -> None\nC++: virtual void SetDirections(vtkMatrix4x4 *_arg)\n\n"},
  {"SetComputedStatistics", PyvtkITKLabelShapeStatistics_SetComputedStatistics, METH_VARARGS,
   "SetComputedStatistics(self, _arg:[str, ...]) -> None\nC++: virtual void SetComputedStatistics(\n    std::vector<std::string> _arg)\n\n"},
  {"GetComputedStatistics", PyvtkITKLabelShapeStatistics_GetComputedStatistics, METH_VARARGS,
   "GetComputedStatistics(self) -> (str, ...)\nC++: virtual std::vector<std::string> GetComputedStatistics()\n\n"},
  {"SetComputeShapeStatistic", PyvtkITKLabelShapeStatistics_SetComputeShapeStatistic, METH_VARARGS,
   "SetComputeShapeStatistic(self, statisticName:str, state:bool)\n    -> None\nC++: void SetComputeShapeStatistic(std::string statisticName,\n    bool state)\n\nSet/Get if the the specified statistic should be computed. Label\ncentroid and flatness are computed by default. Other statistics\nare listed in the ShapeStatistic enum.\n"},
  {"GetComputeShapeStatistic", PyvtkITKLabelShapeStatistics_GetComputeShapeStatistic, METH_VARARGS,
   "GetComputeShapeStatistic(self, statisticName:str) -> bool\nC++: bool GetComputeShapeStatistic(std::string statisticName)\n\n"},
  {"ComputeShapeStatisticOn", PyvtkITKLabelShapeStatistics_ComputeShapeStatisticOn, METH_VARARGS,
   "ComputeShapeStatisticOn(self, statisticName:str) -> None\nC++: void ComputeShapeStatisticOn(std::string statisticName)\n\n"},
  {"ComputeShapeStatisticOff", PyvtkITKLabelShapeStatistics_ComputeShapeStatisticOff, METH_VARARGS,
   "ComputeShapeStatisticOff(self, statisticName:str) -> None\nC++: void ComputeShapeStatisticOff(std::string statisticName)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkITKLabelShapeStatistics_Doc =
  "vtkITKLabelShapeStatistics - ITK-based utilities for calculating\nlabel statistics.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "Utilizes itk::LabelImageToShapeLabelMapFilter to calculate label\n"
  "shape statistics\n"
  "(https://itk.org/Doxygen/html/classitk_1_1LabelImageToShapeLabelMapFil\n"
  "ter.html) Label centroid and flatness are the only statistics\n"
  "calculated by default. For a list of available parameters, see:\n"
  "vtkITKLabelShapeStatistics::ShapeStatistic Calculated statistics can\n"
  "be changed using the\n"
  "SetComputeShapeStatistic/ComputeShapeStatisticOn/ComputeShapeStatistic\n"
  "Off methods. Output statistics are represented in a vtkTable where\n"
  "each column represents a statistic and each row is a different label\n"
  "value.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkITKLabelShapeStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkITKPython.vtkITKLabelShapeStatistics", // tp_name
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
  PyvtkITKLabelShapeStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkITKLabelShapeStatistics_StaticNew()
{
  return vtkITKLabelShapeStatistics::New();
}

PyObject *PyvtkITKLabelShapeStatistics_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkITKLabelShapeStatistics_Type, PyvtkITKLabelShapeStatistics_Methods,
    "vtkITKLabelShapeStatistics",
 &PyvtkITKLabelShapeStatistics_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTableAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkITKLabelShapeStatistics_ShapeStatistic_Type);
  PyVTKEnum_Add(&PyvtkITKLabelShapeStatistics_ShapeStatistic_Type, "vtkITKLabelShapeStatistics.ShapeStatistic");

  o = (PyObject *)&PyvtkITKLabelShapeStatistics_ShapeStatistic_Type;
  if (PyDict_SetItemString(d, "ShapeStatistic", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 10; c++)
  {
    typedef vtkITKLabelShapeStatistics::ShapeStatistic cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[10] = {
        { "Centroid", vtkITKLabelShapeStatistics::Centroid },
        { "OrientedBoundingBox", vtkITKLabelShapeStatistics::OrientedBoundingBox },
        { "FeretDiameter", vtkITKLabelShapeStatistics::FeretDiameter },
        { "Perimeter", vtkITKLabelShapeStatistics::Perimeter },
        { "Roundness", vtkITKLabelShapeStatistics::Roundness },
        { "Flatness", vtkITKLabelShapeStatistics::Flatness },
        { "Elongation", vtkITKLabelShapeStatistics::Elongation },
        { "PrincipalMoments", vtkITKLabelShapeStatistics::PrincipalMoments },
        { "PrincipalAxes", vtkITKLabelShapeStatistics::PrincipalAxes },
        { "ShapeStatistic_Last", vtkITKLabelShapeStatistics::ShapeStatistic_Last },
      };

    o = PyvtkITKLabelShapeStatistics_ShapeStatistic_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkITKLabelShapeStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkITKLabelShapeStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkITKLabelShapeStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

