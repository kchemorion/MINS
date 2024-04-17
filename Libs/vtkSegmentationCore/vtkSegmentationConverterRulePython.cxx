// python wrapper for vtkSegmentationConverterRule
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSegmentationConverterRule.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSegmentationConverterRule(PyObject *dict); }
extern "C" { PyObject *PyvtkSegmentationConverterRule_ClassNew(); }


static PyObject *
PyvtkSegmentationConverterRule_GetConversionInfiniteCost(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetConversionInfiniteCost");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    unsigned int tempr = vtkSegmentationConverterRule::GetConversionInfiniteCost();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSegmentationConverterRule::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSegmentationConverterRule::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSegmentationConverterRule *tempr = vtkSegmentationConverterRule::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegmentationConverterRule *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSegmentationConverterRule::NewInstance());

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
PyvtkSegmentationConverterRule_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSegmentationConverterRule::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSegmentationConverterRule::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_CreateRuleInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateRuleInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkSegmentationConverterRule *tempr = op->CreateRuleInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_Clone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegmentationConverterRule *tempr = (ap.IsBound() ?
      op->Clone() :
      op->vtkSegmentationConverterRule::Clone());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_ConstructRepresentationObjectByRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstructRepresentationObjectByRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = op->ConstructRepresentationObjectByRepresentation(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_ConstructRepresentationObjectByClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstructRepresentationObjectByClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = op->ConstructRepresentationObjectByClass(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_PreConvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreConvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  vtkSegmentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentation"))
  {
    bool tempr = (ap.IsBound() ?
      op->PreConvert(temp0) :
      op->vtkSegmentationConverterRule::PreConvert(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_Convert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Convert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  vtkSegment *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegment"))
  {
    bool tempr = op->Convert(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_PostConvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostConvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  vtkSegmentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentation"))
  {
    bool tempr = (ap.IsBound() ?
      op->PostConvert(temp0) :
      op->vtkSegmentationConverterRule::PostConvert(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_GetConversionCost(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConversionCost");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  vtkDataObject *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkDataObject")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkDataObject")))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetConversionCost(temp0, temp1) :
      op->vtkSegmentationConverterRule::GetConversionCost(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_GetSourceRepresentationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceRepresentationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetSourceRepresentationName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_GetTargetRepresentationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetRepresentationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetTargetRepresentationName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_GetRuleConversionParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRuleConversionParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  vtkSegmentationConversionParameters *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentationConversionParameters") &&
      ap.CheckPrecond((temp0 != nullptr),
                      "conversionParameters != nullptr"))
  {
    if (ap.IsBound())
    {
      op->GetRuleConversionParameters(temp0);
    }
    else
    {
      op->vtkSegmentationConverterRule::GetRuleConversionParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_SetConversionParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConversionParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  std::string temp0;
  std::string temp1;
  std::string temp2 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetConversionParameter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSegmentationConverterRule::SetConversionParameter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_GetConversionParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConversionParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetConversionParameter(temp0) :
      op->vtkSegmentationConverterRule::GetConversionParameter(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_GetConversionParameterDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConversionParameterDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetConversionParameterDescription(temp0) :
      op->vtkSegmentationConverterRule::GetConversionParameterDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverterRule_HasConversionParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasConversionParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverterRule *op = static_cast<vtkSegmentationConverterRule *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasConversionParameter(temp0) :
      op->vtkSegmentationConverterRule::HasConversionParameter(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSegmentationConverterRule_Methods[] = {
  {"GetConversionInfiniteCost", PyvtkSegmentationConverterRule_GetConversionInfiniteCost, METH_VARARGS,
   "GetConversionInfiniteCost() -> int\nC++: static unsigned int GetConversionInfiniteCost()\n\nConstant to use for converter rules with \"infinite\" computational\ncost (i.e. disabled) It's about UINT_MAX / 400 (allows us to have\na few hundred disabled rules)\n"},
  {"IsTypeOf", PyvtkSegmentationConverterRule_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSegmentationConverterRule_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSegmentationConverterRule_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSegmentationConverterRule\nC++: static vtkSegmentationConverterRule *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSegmentationConverterRule_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSegmentationConverterRule\nC++: vtkSegmentationConverterRule *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSegmentationConverterRule_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSegmentationConverterRule_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateRuleInstance", PyvtkSegmentationConverterRule_CreateRuleInstance, METH_VARARGS,
   "CreateRuleInstance(self) -> vtkSegmentationConverterRule\nC++: virtual vtkSegmentationConverterRule *CreateRuleInstance()\n\nCreate instance of the default node. Similar to New but virtual\nmethod. Subclasses should implement this method by\n"},
  {"Clone", PyvtkSegmentationConverterRule_Clone, METH_VARARGS,
   "Clone(self) -> vtkSegmentationConverterRule\nC++: virtual vtkSegmentationConverterRule *Clone()\n\nCreate a new instance of this rule and copy its contents\n"},
  {"ConstructRepresentationObjectByRepresentation", PyvtkSegmentationConverterRule_ConstructRepresentationObjectByRepresentation, METH_VARARGS,
   "ConstructRepresentationObjectByRepresentation(self,\n    representationName:str) -> vtkDataObject\nC++: virtual vtkDataObject *ConstructRepresentationObjectByRepresentation(\n    std::string representationName)\n\nConstructs representation object from representation name for the\nsupported representation classes (typically source and target\nrepresentation VTK classes, subclasses of vtkDataObject) Note:\nNeed to take ownership of the created object! For example using\nvtkSmartPointer::Take\n"},
  {"ConstructRepresentationObjectByClass", PyvtkSegmentationConverterRule_ConstructRepresentationObjectByClass, METH_VARARGS,
   "ConstructRepresentationObjectByClass(self, className:str)\n    -> vtkDataObject\nC++: virtual vtkDataObject *ConstructRepresentationObjectByClass(\n    std::string className)\n\nConstructs representation object from class name for the\nsupported representation classes (typically source and target\nrepresentation VTK classes, subclasses of vtkDataObject) Note:\nNeed to take ownership of the created object! For example using\nvtkSmartPointer::Take\n"},
  {"PreConvert", PyvtkSegmentationConverterRule_PreConvert, METH_VARARGS,
   "PreConvert(self, segmentation:vtkSegmentation) -> bool\nC++: virtual bool PreConvert(vtkSegmentation *segmentation)\n\nPerform pre-conversion steps across the specified segments in the\nsegmentation This step should be unnecessary if only converting a\nsingle segment\n"},
  {"Convert", PyvtkSegmentationConverterRule_Convert, METH_VARARGS,
   "Convert(self, segment:vtkSegment) -> bool\nC++: virtual bool Convert(vtkSegment *segment)\n\nUpdate the target representation based on the source\nrepresentation Initializes the target representation and calls\nConvertInternal\n\\sa ConvertInternal\n"},
  {"PostConvert", PyvtkSegmentationConverterRule_PostConvert, METH_VARARGS,
   "PostConvert(self, segmentation:vtkSegmentation) -> bool\nC++: virtual bool PostConvert(vtkSegmentation *segmentation)\n\nPerform post-conversion steps across the specified segments in\nthe segmentation This step should be unnecessary if only\nconverting a single segment\n"},
  {"GetConversionCost", PyvtkSegmentationConverterRule_GetConversionCost, METH_VARARGS,
   "GetConversionCost(self, sourceRepresentation:vtkDataObject=...,\n    targetRepresentation:vtkDataObject=...) -> int\nC++: virtual unsigned int GetConversionCost(\n    vtkDataObject *sourceRepresentation=nullptr,\n    vtkDataObject *targetRepresentation=nullptr)\n\nGet the cost of the conversion.\n\\return Expected duration of the conversion in milliseconds. If\n    the arguments are omitted, then a rough average can be\n  given just to indicate the relative computational cost of the\nalgorithm. If the objects are given, then a more educated\n  guess can be made based on the object properties (dimensions,\nnumber of points, etc).\n"},
  {"GetName", PyvtkSegmentationConverterRule_GetName, METH_VARARGS,
   "GetName(self) -> str\nC++: virtual const char *GetName()\n\nHuman-readable name of the converter rule\n"},
  {"GetSourceRepresentationName", PyvtkSegmentationConverterRule_GetSourceRepresentationName, METH_VARARGS,
   "GetSourceRepresentationName(self) -> str\nC++: virtual const char *GetSourceRepresentationName()\n\nHuman-readable name of the source representation\n"},
  {"GetTargetRepresentationName", PyvtkSegmentationConverterRule_GetTargetRepresentationName, METH_VARARGS,
   "GetTargetRepresentationName(self) -> str\nC++: virtual const char *GetTargetRepresentationName()\n\nHuman-readable name of the target representation\n"},
  {"GetRuleConversionParameters", PyvtkSegmentationConverterRule_GetRuleConversionParameters, METH_VARARGS,
   "GetRuleConversionParameters(self,\n    conversionParameters:vtkSegmentationConversionParameters)\n    -> None\nC++: virtual void GetRuleConversionParameters(\n    vtkSegmentationConversionParameters *conversionParameters)\n\nGet rule conversion parameters for aggregated path parameters.\nExisting values in the provided conversionParameters object\noverwritten, missing name and values are added.\n"},
  {"SetConversionParameter", PyvtkSegmentationConverterRule_SetConversionParameter, METH_VARARGS,
   "SetConversionParameter(self, name:str, value:str,\n    description:str=...) -> None\nC++: virtual void SetConversionParameter(const std::string &name,\n    const std::string &value, const std::string &description=\"\")\n\nSet a conversion parameter\n"},
  {"GetConversionParameter", PyvtkSegmentationConverterRule_GetConversionParameter, METH_VARARGS,
   "GetConversionParameter(self, name:str) -> str\nC++: virtual std::string GetConversionParameter(\n    const std::string &name)\n\nGet a conversion parameter value\n"},
  {"GetConversionParameterDescription", PyvtkSegmentationConverterRule_GetConversionParameterDescription, METH_VARARGS,
   "GetConversionParameterDescription(self, name:str) -> str\nC++: virtual std::string GetConversionParameterDescription(\n    const std::string &name)\n\nGet a conversion parameter description\n"},
  {"HasConversionParameter", PyvtkSegmentationConverterRule_HasConversionParameter, METH_VARARGS,
   "HasConversionParameter(self, name:str) -> bool\nC++: bool HasConversionParameter(const std::string &name)\n\nDetermine if the rule has a parameter with a certain name\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSegmentationConverterRule_Doc =
  "vtkSegmentationConverterRule - Abstract converter rule class.\n\n"
  "Superclass: vtkObject\n\n"
  "Subclasses perform conversions between specific\n"
  "  representation types. They define source and target type and\n"
  "provide ways to create those\n"
  "  types of objects.\n\n"
  "Each conversion rule defines its required/possible conversion\n"
  "parameters, and sets possible default values whenever applicable.\n"
  "Required parameters have empty defaults. When the user changes the\n"
  "parameter value, then the default is being overwritten to contain the\n"
  "custom value, but for new segmentations, it is initially the default.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSegmentationConverterRule_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkSegmentationConverterRule", // tp_name
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
  PyvtkSegmentationConverterRule_Doc, // tp_doc
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

PyObject *PyvtkSegmentationConverterRule_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSegmentationConverterRule_Type, PyvtkSegmentationConverterRule_Methods,
    "vtkSegmentationConverterRule",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSegmentationConverterRule(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSegmentationConverterRule_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSegmentationConverterRule", o) != 0)
  {
    Py_DECREF(o);
  }

}

