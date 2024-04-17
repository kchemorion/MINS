// python wrapper for vtkClosedSurfaceToBinaryLabelmapConversionRule
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkClosedSurfaceToBinaryLabelmapConversionRule.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkClosedSurfaceToBinaryLabelmapConversionRule(PyObject *dict); }
extern "C" { PyObject *PyvtkClosedSurfaceToBinaryLabelmapConversionRule_ClassNew(); }

#ifndef DECLARED_PyvtkSegmentationConverterRule_ClassNew
extern "C" { PyObject *PyvtkSegmentationConverterRule_ClassNew(); }
#define DECLARED_PyvtkSegmentationConverterRule_ClassNew
#endif

static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetOversamplingFactorParameterName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetOversamplingFactorParameterName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkClosedSurfaceToBinaryLabelmapConversionRule::GetOversamplingFactorParameterName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetCropToReferenceImageGeometryParameterName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCropToReferenceImageGeometryParameterName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkClosedSurfaceToBinaryLabelmapConversionRule::GetCropToReferenceImageGeometryParameterName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetCollapseLabelmapsParameterName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCollapseLabelmapsParameterName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkClosedSurfaceToBinaryLabelmapConversionRule::GetCollapseLabelmapsParameterName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkClosedSurfaceToBinaryLabelmapConversionRule::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfaceToBinaryLabelmapConversionRule *op = static_cast<vtkClosedSurfaceToBinaryLabelmapConversionRule *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClosedSurfaceToBinaryLabelmapConversionRule::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkClosedSurfaceToBinaryLabelmapConversionRule *tempr = vtkClosedSurfaceToBinaryLabelmapConversionRule::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfaceToBinaryLabelmapConversionRule *op = static_cast<vtkClosedSurfaceToBinaryLabelmapConversionRule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClosedSurfaceToBinaryLabelmapConversionRule *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClosedSurfaceToBinaryLabelmapConversionRule::NewInstance());

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
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkClosedSurfaceToBinaryLabelmapConversionRule::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfaceToBinaryLabelmapConversionRule *op = static_cast<vtkClosedSurfaceToBinaryLabelmapConversionRule *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkClosedSurfaceToBinaryLabelmapConversionRule::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_CreateRuleInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateRuleInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfaceToBinaryLabelmapConversionRule *op = static_cast<vtkClosedSurfaceToBinaryLabelmapConversionRule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegmentationConverterRule *tempr = (ap.IsBound() ?
      op->CreateRuleInstance() :
      op->vtkClosedSurfaceToBinaryLabelmapConversionRule::CreateRuleInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_ConstructRepresentationObjectByRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstructRepresentationObjectByRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfaceToBinaryLabelmapConversionRule *op = static_cast<vtkClosedSurfaceToBinaryLabelmapConversionRule *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->ConstructRepresentationObjectByRepresentation(temp0) :
      op->vtkClosedSurfaceToBinaryLabelmapConversionRule::ConstructRepresentationObjectByRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_ConstructRepresentationObjectByClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstructRepresentationObjectByClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfaceToBinaryLabelmapConversionRule *op = static_cast<vtkClosedSurfaceToBinaryLabelmapConversionRule *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->ConstructRepresentationObjectByClass(temp0) :
      op->vtkClosedSurfaceToBinaryLabelmapConversionRule::ConstructRepresentationObjectByClass(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_Convert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Convert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfaceToBinaryLabelmapConversionRule *op = static_cast<vtkClosedSurfaceToBinaryLabelmapConversionRule *>(vp);

  vtkSegment *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegment"))
  {
    bool tempr = (ap.IsBound() ?
      op->Convert(temp0) :
      op->vtkClosedSurfaceToBinaryLabelmapConversionRule::Convert(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_PostConvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostConvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfaceToBinaryLabelmapConversionRule *op = static_cast<vtkClosedSurfaceToBinaryLabelmapConversionRule *>(vp);

  vtkSegmentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentation"))
  {
    bool tempr = (ap.IsBound() ?
      op->PostConvert(temp0) :
      op->vtkClosedSurfaceToBinaryLabelmapConversionRule::PostConvert(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetConversionCost(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConversionCost");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfaceToBinaryLabelmapConversionRule *op = static_cast<vtkClosedSurfaceToBinaryLabelmapConversionRule *>(vp);

  vtkDataObject *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkDataObject")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkDataObject")))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetConversionCost(temp0, temp1) :
      op->vtkClosedSurfaceToBinaryLabelmapConversionRule::GetConversionCost(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfaceToBinaryLabelmapConversionRule *op = static_cast<vtkClosedSurfaceToBinaryLabelmapConversionRule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkClosedSurfaceToBinaryLabelmapConversionRule::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetSourceRepresentationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceRepresentationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfaceToBinaryLabelmapConversionRule *op = static_cast<vtkClosedSurfaceToBinaryLabelmapConversionRule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSourceRepresentationName() :
      op->vtkClosedSurfaceToBinaryLabelmapConversionRule::GetSourceRepresentationName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetTargetRepresentationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetRepresentationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfaceToBinaryLabelmapConversionRule *op = static_cast<vtkClosedSurfaceToBinaryLabelmapConversionRule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTargetRepresentationName() :
      op->vtkClosedSurfaceToBinaryLabelmapConversionRule::GetTargetRepresentationName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfaceToBinaryLabelmapConversionRule_SetUseOutputImageDataGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOutputImageDataGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfaceToBinaryLabelmapConversionRule *op = static_cast<vtkClosedSurfaceToBinaryLabelmapConversionRule *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOutputImageDataGeometry(temp0);
    }
    else
    {
      op->vtkClosedSurfaceToBinaryLabelmapConversionRule::SetUseOutputImageDataGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkClosedSurfaceToBinaryLabelmapConversionRule_Methods[] = {
  {"GetOversamplingFactorParameterName", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetOversamplingFactorParameterName, METH_VARARGS,
   "GetOversamplingFactorParameterName() -> str\nC++: static const std::string GetOversamplingFactorParameterName()\n\nConversion parameter: oversampling factor Determines the\noversampling of the reference image geometry. If it's a number,\nthen all segments are oversampled with the same value (value of 1\nmeans no oversampling). If it has the value \"A\", then automatic\noversampling is calculated.\n"},
  {"GetCropToReferenceImageGeometryParameterName", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetCropToReferenceImageGeometryParameterName, METH_VARARGS,
   "GetCropToReferenceImageGeometryParameterName() -> str\nC++: static const std::string GetCropToReferenceImageGeometryParameterName(\n    )\n\n"},
  {"GetCollapseLabelmapsParameterName", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetCollapseLabelmapsParameterName, METH_VARARGS,
   "GetCollapseLabelmapsParameterName() -> str\nC++: static const std::string GetCollapseLabelmapsParameterName()\n\nDetermines if the output binary labelmaps should be reduced to as\nfew shared labelmaps as possible after conversion. A value of 1\nmeans that the labelmaps will be collapsed, while a value of 0\nmeans that they will not be collapsed.\n"},
  {"IsTypeOf", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkClosedSurfaceToBinaryLabelmapConversionRule\nC++: static vtkClosedSurfaceToBinaryLabelmapConversionRule *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_NewInstance, METH_VARARGS,
   "NewInstance(self)\n    -> vtkClosedSurfaceToBinaryLabelmapConversionRule\nC++: vtkClosedSurfaceToBinaryLabelmapConversionRule *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateRuleInstance", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_CreateRuleInstance, METH_VARARGS,
   "CreateRuleInstance(self) -> vtkSegmentationConverterRule\nC++: vtkSegmentationConverterRule *CreateRuleInstance() override;\n\nCreate instance of the default node. Similar to New but virtual\nmethod. Subclasses should implement this method by\n"},
  {"ConstructRepresentationObjectByRepresentation", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_ConstructRepresentationObjectByRepresentation, METH_VARARGS,
   "ConstructRepresentationObjectByRepresentation(self,\n    representationName:str) -> vtkDataObject\nC++: vtkDataObject *ConstructRepresentationObjectByRepresentation(\n    std::string representationName) override;\n\nConstructs representation object from representation name for the\nsupported representation classes (typically source and target\nrepresentation VTK classes, subclasses of vtkDataObject) Note:\nNeed to take ownership of the created object! For example using\nvtkSmartPointer::Take\n"},
  {"ConstructRepresentationObjectByClass", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_ConstructRepresentationObjectByClass, METH_VARARGS,
   "ConstructRepresentationObjectByClass(self, className:str)\n    -> vtkDataObject\nC++: vtkDataObject *ConstructRepresentationObjectByClass(\n    std::string className) override;\n\nConstructs representation object from class name for the\nsupported representation classes (typically source and target\nrepresentation VTK classes, subclasses of vtkDataObject) Note:\nNeed to take ownership of the created object! For example using\nvtkSmartPointer::Take\n"},
  {"Convert", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_Convert, METH_VARARGS,
   "Convert(self, segment:vtkSegment) -> bool\nC++: bool Convert(vtkSegment *segment) override;\n\nUpdate the target representation based on the source\nrepresentation\n"},
  {"PostConvert", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_PostConvert, METH_VARARGS,
   "PostConvert(self, segmentation:vtkSegmentation) -> bool\nC++: bool PostConvert(vtkSegmentation *segmentation) override;\n\nPerform postprocessing steps on the output Collapses the segments\nto as few labelmaps as is possible\n"},
  {"GetConversionCost", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetConversionCost, METH_VARARGS,
   "GetConversionCost(self, sourceRepresentation:vtkDataObject=...,\n    targetRepresentation:vtkDataObject=...) -> int\nC++: unsigned int GetConversionCost(\n    vtkDataObject *sourceRepresentation=nullptr,\n    vtkDataObject *targetRepresentation=nullptr) override;\n\nGet the cost of the conversion.\n"},
  {"GetName", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetName, METH_VARARGS,
   "GetName(self) -> str\nC++: const char *GetName() override;\n\nHuman-readable name of the converter rule\n"},
  {"GetSourceRepresentationName", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetSourceRepresentationName, METH_VARARGS,
   "GetSourceRepresentationName(self) -> str\nC++: const char *GetSourceRepresentationName() override;\n\nHuman-readable name of the source representation\n"},
  {"GetTargetRepresentationName", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_GetTargetRepresentationName, METH_VARARGS,
   "GetTargetRepresentationName(self) -> str\nC++: const char *GetTargetRepresentationName() override;\n\nHuman-readable name of the target representation\n"},
  {"SetUseOutputImageDataGeometry", PyvtkClosedSurfaceToBinaryLabelmapConversionRule_SetUseOutputImageDataGeometry, METH_VARARGS,
   "SetUseOutputImageDataGeometry(self, _arg:bool) -> None\nC++: virtual void SetUseOutputImageDataGeometry(bool _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkClosedSurfaceToBinaryLabelmapConversionRule_Doc =
  "vtkClosedSurfaceToBinaryLabelmapConversionRule - Convert closed\nsurface representation (vtkPolyData type) to binary\n  labelmap representation (vtkOrientedImageData type).\n\n"
  "Superclass: vtkSegmentationConverterRule\n\n"
  "The conversion algorithm\n"
  "  is based on image stencil.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkClosedSurfaceToBinaryLabelmapConversionRule_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkClosedSurfaceToBinaryLabelmapConversionRule", // tp_name
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
  PyvtkClosedSurfaceToBinaryLabelmapConversionRule_Doc, // tp_doc
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

static vtkObjectBase *PyvtkClosedSurfaceToBinaryLabelmapConversionRule_StaticNew()
{
  return vtkClosedSurfaceToBinaryLabelmapConversionRule::New();
}

PyObject *PyvtkClosedSurfaceToBinaryLabelmapConversionRule_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkClosedSurfaceToBinaryLabelmapConversionRule_Type, PyvtkClosedSurfaceToBinaryLabelmapConversionRule_Methods,
    "vtkClosedSurfaceToBinaryLabelmapConversionRule",
 &PyvtkClosedSurfaceToBinaryLabelmapConversionRule_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkSegmentationConverterRule_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkClosedSurfaceToBinaryLabelmapConversionRule(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkClosedSurfaceToBinaryLabelmapConversionRule_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkClosedSurfaceToBinaryLabelmapConversionRule", o) != 0)
  {
    Py_DECREF(o);
  }

}

