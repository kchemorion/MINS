// python wrapper for vtkFractionalLabelmapToClosedSurfaceConversionRule
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkFractionalLabelmapToClosedSurfaceConversionRule.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFractionalLabelmapToClosedSurfaceConversionRule(PyObject *dict); }
extern "C" { PyObject *PyvtkFractionalLabelmapToClosedSurfaceConversionRule_ClassNew(); }

#ifndef DECLARED_PyvtkBinaryLabelmapToClosedSurfaceConversionRule_ClassNew
extern "C" { PyObject *PyvtkBinaryLabelmapToClosedSurfaceConversionRule_ClassNew(); }
#define DECLARED_PyvtkBinaryLabelmapToClosedSurfaceConversionRule_ClassNew
#endif

static PyObject *
PyvtkFractionalLabelmapToClosedSurfaceConversionRule_GetFractionalLabelMapOversamplingFactorParameterName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFractionalLabelMapOversamplingFactorParameterName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkFractionalLabelmapToClosedSurfaceConversionRule::GetFractionalLabelMapOversamplingFactorParameterName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFractionalLabelmapToClosedSurfaceConversionRule_GetThresholdFractionParameterName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetThresholdFractionParameterName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkFractionalLabelmapToClosedSurfaceConversionRule::GetThresholdFractionParameterName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFractionalLabelmapToClosedSurfaceConversionRule_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFractionalLabelmapToClosedSurfaceConversionRule::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFractionalLabelmapToClosedSurfaceConversionRule_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFractionalLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkFractionalLabelmapToClosedSurfaceConversionRule *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFractionalLabelmapToClosedSurfaceConversionRule::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFractionalLabelmapToClosedSurfaceConversionRule_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFractionalLabelmapToClosedSurfaceConversionRule *tempr = vtkFractionalLabelmapToClosedSurfaceConversionRule::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFractionalLabelmapToClosedSurfaceConversionRule_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFractionalLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkFractionalLabelmapToClosedSurfaceConversionRule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFractionalLabelmapToClosedSurfaceConversionRule *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFractionalLabelmapToClosedSurfaceConversionRule::NewInstance());

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
PyvtkFractionalLabelmapToClosedSurfaceConversionRule_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFractionalLabelmapToClosedSurfaceConversionRule::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFractionalLabelmapToClosedSurfaceConversionRule_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFractionalLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkFractionalLabelmapToClosedSurfaceConversionRule *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFractionalLabelmapToClosedSurfaceConversionRule::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFractionalLabelmapToClosedSurfaceConversionRule_CreateRuleInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateRuleInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFractionalLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkFractionalLabelmapToClosedSurfaceConversionRule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegmentationConverterRule *tempr = (ap.IsBound() ?
      op->CreateRuleInstance() :
      op->vtkFractionalLabelmapToClosedSurfaceConversionRule::CreateRuleInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFractionalLabelmapToClosedSurfaceConversionRule_ConstructRepresentationObjectByRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstructRepresentationObjectByRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFractionalLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkFractionalLabelmapToClosedSurfaceConversionRule *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->ConstructRepresentationObjectByRepresentation(temp0) :
      op->vtkFractionalLabelmapToClosedSurfaceConversionRule::ConstructRepresentationObjectByRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFractionalLabelmapToClosedSurfaceConversionRule_ConstructRepresentationObjectByClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstructRepresentationObjectByClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFractionalLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkFractionalLabelmapToClosedSurfaceConversionRule *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->ConstructRepresentationObjectByClass(temp0) :
      op->vtkFractionalLabelmapToClosedSurfaceConversionRule::ConstructRepresentationObjectByClass(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFractionalLabelmapToClosedSurfaceConversionRule_Convert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Convert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFractionalLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkFractionalLabelmapToClosedSurfaceConversionRule *>(vp);

  vtkSegment *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegment"))
  {
    bool tempr = (ap.IsBound() ?
      op->Convert(temp0) :
      op->vtkFractionalLabelmapToClosedSurfaceConversionRule::Convert(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFractionalLabelmapToClosedSurfaceConversionRule_GetConversionCost(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConversionCost");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFractionalLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkFractionalLabelmapToClosedSurfaceConversionRule *>(vp);

  vtkDataObject *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkDataObject")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkDataObject")))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetConversionCost(temp0, temp1) :
      op->vtkFractionalLabelmapToClosedSurfaceConversionRule::GetConversionCost(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFractionalLabelmapToClosedSurfaceConversionRule_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFractionalLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkFractionalLabelmapToClosedSurfaceConversionRule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkFractionalLabelmapToClosedSurfaceConversionRule::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFractionalLabelmapToClosedSurfaceConversionRule_GetSourceRepresentationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceRepresentationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFractionalLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkFractionalLabelmapToClosedSurfaceConversionRule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSourceRepresentationName() :
      op->vtkFractionalLabelmapToClosedSurfaceConversionRule::GetSourceRepresentationName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFractionalLabelmapToClosedSurfaceConversionRule_GetTargetRepresentationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetRepresentationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFractionalLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkFractionalLabelmapToClosedSurfaceConversionRule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTargetRepresentationName() :
      op->vtkFractionalLabelmapToClosedSurfaceConversionRule::GetTargetRepresentationName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFractionalLabelmapToClosedSurfaceConversionRule_Methods[] = {
  {"GetFractionalLabelMapOversamplingFactorParameterName", PyvtkFractionalLabelmapToClosedSurfaceConversionRule_GetFractionalLabelMapOversamplingFactorParameterName, METH_VARARGS,
   "GetFractionalLabelMapOversamplingFactorParameterName() -> str\nC++: static const std::string GetFractionalLabelMapOversamplingFactorParameterName(\n    )\n\nConversion parameter: magnification factor\n"},
  {"GetThresholdFractionParameterName", PyvtkFractionalLabelmapToClosedSurfaceConversionRule_GetThresholdFractionParameterName, METH_VARARGS,
   "GetThresholdFractionParameterName() -> str\nC++: static const std::string GetThresholdFractionParameterName()\n\n"},
  {"IsTypeOf", PyvtkFractionalLabelmapToClosedSurfaceConversionRule_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFractionalLabelmapToClosedSurfaceConversionRule_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFractionalLabelmapToClosedSurfaceConversionRule_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkFractionalLabelmapToClosedSurfaceConversionRule\nC++: static vtkFractionalLabelmapToClosedSurfaceConversionRule *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFractionalLabelmapToClosedSurfaceConversionRule_NewInstance, METH_VARARGS,
   "NewInstance(self)\n    -> vtkFractionalLabelmapToClosedSurfaceConversionRule\nC++: vtkFractionalLabelmapToClosedSurfaceConversionRule *NewInstance(\n    )\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFractionalLabelmapToClosedSurfaceConversionRule_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFractionalLabelmapToClosedSurfaceConversionRule_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateRuleInstance", PyvtkFractionalLabelmapToClosedSurfaceConversionRule_CreateRuleInstance, METH_VARARGS,
   "CreateRuleInstance(self) -> vtkSegmentationConverterRule\nC++: vtkSegmentationConverterRule *CreateRuleInstance() override;\n\nCreate instance of the default node. Similar to New but virtual\nmethod. Subclasses should implement this method by\n"},
  {"ConstructRepresentationObjectByRepresentation", PyvtkFractionalLabelmapToClosedSurfaceConversionRule_ConstructRepresentationObjectByRepresentation, METH_VARARGS,
   "ConstructRepresentationObjectByRepresentation(self,\n    representationName:str) -> vtkDataObject\nC++: vtkDataObject *ConstructRepresentationObjectByRepresentation(\n    std::string representationName) override;\n\nConstructs representation object from representation name for the\nsupported representation classes (typically source and target\nrepresentation VTK classes, subclasses of vtkDataObject) Note:\nNeed to take ownership of the created object! For example using\nvtkSmartPointer::Take\n"},
  {"ConstructRepresentationObjectByClass", PyvtkFractionalLabelmapToClosedSurfaceConversionRule_ConstructRepresentationObjectByClass, METH_VARARGS,
   "ConstructRepresentationObjectByClass(self, className:str)\n    -> vtkDataObject\nC++: vtkDataObject *ConstructRepresentationObjectByClass(\n    std::string className) override;\n\nConstructs representation object from class name for the\nsupported representation classes (typically source and target\nrepresentation VTK classes, subclasses of vtkDataObject) Note:\nNeed to take ownership of the created object! For example using\nvtkSmartPointer::Take\n"},
  {"Convert", PyvtkFractionalLabelmapToClosedSurfaceConversionRule_Convert, METH_VARARGS,
   "Convert(self, segment:vtkSegment) -> bool\nC++: bool Convert(vtkSegment *segment) override;\n\nUpdate the target representation based on the source\nrepresentation\n"},
  {"GetConversionCost", PyvtkFractionalLabelmapToClosedSurfaceConversionRule_GetConversionCost, METH_VARARGS,
   "GetConversionCost(self, sourceRepresentation:vtkDataObject=...,\n    targetRepresentation:vtkDataObject=...) -> int\nC++: unsigned int GetConversionCost(\n    vtkDataObject *sourceRepresentation=nullptr,\n    vtkDataObject *targetRepresentation=nullptr) override;\n\nGet the cost of the conversion.\n"},
  {"GetName", PyvtkFractionalLabelmapToClosedSurfaceConversionRule_GetName, METH_VARARGS,
   "GetName(self) -> str\nC++: const char *GetName() override;\n\nHuman-readable name of the converter rule\n"},
  {"GetSourceRepresentationName", PyvtkFractionalLabelmapToClosedSurfaceConversionRule_GetSourceRepresentationName, METH_VARARGS,
   "GetSourceRepresentationName(self) -> str\nC++: const char *GetSourceRepresentationName() override;\n\nHuman-readable name of the source representation\n"},
  {"GetTargetRepresentationName", PyvtkFractionalLabelmapToClosedSurfaceConversionRule_GetTargetRepresentationName, METH_VARARGS,
   "GetTargetRepresentationName(self) -> str\nC++: const char *GetTargetRepresentationName() override;\n\nHuman-readable name of the target representation\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFractionalLabelmapToClosedSurfaceConversionRule_Doc =
  "vtkFractionalLabelmapToClosedSurfaceConversionRule - Convert\nFractional labelmap representation (vtkOrientedImageData type) to\n  closed surface representation (vtkPolyData type).\n\n"
  "Superclass: vtkBinaryLabelmapToClosedSurfaceConversionRule\n\n"
  "The conversion algorithm\n"
  "  performs a marching cubes operation on the image data followed by\n"
  "an optional\n"
  "  decimation step.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFractionalLabelmapToClosedSurfaceConversionRule_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkFractionalLabelmapToClosedSurfaceConversionRule", // tp_name
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
  PyvtkFractionalLabelmapToClosedSurfaceConversionRule_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFractionalLabelmapToClosedSurfaceConversionRule_StaticNew()
{
  return vtkFractionalLabelmapToClosedSurfaceConversionRule::New();
}

PyObject *PyvtkFractionalLabelmapToClosedSurfaceConversionRule_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFractionalLabelmapToClosedSurfaceConversionRule_Type, PyvtkFractionalLabelmapToClosedSurfaceConversionRule_Methods,
    "vtkFractionalLabelmapToClosedSurfaceConversionRule",
 &PyvtkFractionalLabelmapToClosedSurfaceConversionRule_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkBinaryLabelmapToClosedSurfaceConversionRule_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFractionalLabelmapToClosedSurfaceConversionRule(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFractionalLabelmapToClosedSurfaceConversionRule_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFractionalLabelmapToClosedSurfaceConversionRule", o) != 0)
  {
    Py_DECREF(o);
  }

}

