// python wrapper for vtkBinaryLabelmapToClosedSurfaceConversionRule
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkBinaryLabelmapToClosedSurfaceConversionRule.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBinaryLabelmapToClosedSurfaceConversionRule(PyObject *dict); }
extern "C" { PyObject *PyvtkBinaryLabelmapToClosedSurfaceConversionRule_ClassNew(); }

#ifndef DECLARED_PyvtkSegmentationConverterRule_ClassNew
extern "C" { PyObject *PyvtkSegmentationConverterRule_ClassNew(); }
#define DECLARED_PyvtkSegmentationConverterRule_ClassNew
#endif

static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetDecimationFactorParameterName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDecimationFactorParameterName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkBinaryLabelmapToClosedSurfaceConversionRule::GetDecimationFactorParameterName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetSmoothingFactorParameterName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSmoothingFactorParameterName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkBinaryLabelmapToClosedSurfaceConversionRule::GetSmoothingFactorParameterName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetConversionMethodParameterName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetConversionMethodParameterName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkBinaryLabelmapToClosedSurfaceConversionRule::GetConversionMethodParameterName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetSurfaceNetInternalSmoothingParameterName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSurfaceNetInternalSmoothingParameterName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkBinaryLabelmapToClosedSurfaceConversionRule::GetSurfaceNetInternalSmoothingParameterName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetComputeSurfaceNormalsParameterName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetComputeSurfaceNormalsParameterName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkBinaryLabelmapToClosedSurfaceConversionRule::GetComputeSurfaceNormalsParameterName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetJointSmoothingParameterName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetJointSmoothingParameterName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkBinaryLabelmapToClosedSurfaceConversionRule::GetJointSmoothingParameterName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBinaryLabelmapToClosedSurfaceConversionRule::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinaryLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkBinaryLabelmapToClosedSurfaceConversionRule *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBinaryLabelmapToClosedSurfaceConversionRule::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBinaryLabelmapToClosedSurfaceConversionRule *tempr = vtkBinaryLabelmapToClosedSurfaceConversionRule::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinaryLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkBinaryLabelmapToClosedSurfaceConversionRule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBinaryLabelmapToClosedSurfaceConversionRule *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBinaryLabelmapToClosedSurfaceConversionRule::NewInstance());

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
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBinaryLabelmapToClosedSurfaceConversionRule::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinaryLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkBinaryLabelmapToClosedSurfaceConversionRule *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBinaryLabelmapToClosedSurfaceConversionRule::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_CreateRuleInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateRuleInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinaryLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkBinaryLabelmapToClosedSurfaceConversionRule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegmentationConverterRule *tempr = (ap.IsBound() ?
      op->CreateRuleInstance() :
      op->vtkBinaryLabelmapToClosedSurfaceConversionRule::CreateRuleInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_ConstructRepresentationObjectByRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstructRepresentationObjectByRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinaryLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkBinaryLabelmapToClosedSurfaceConversionRule *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->ConstructRepresentationObjectByRepresentation(temp0) :
      op->vtkBinaryLabelmapToClosedSurfaceConversionRule::ConstructRepresentationObjectByRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_ConstructRepresentationObjectByClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstructRepresentationObjectByClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinaryLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkBinaryLabelmapToClosedSurfaceConversionRule *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->ConstructRepresentationObjectByClass(temp0) :
      op->vtkBinaryLabelmapToClosedSurfaceConversionRule::ConstructRepresentationObjectByClass(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_CreateClosedSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateClosedSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinaryLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkBinaryLabelmapToClosedSurfaceConversionRule *>(vp);

  vtkOrientedImageData *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  std::vector<int> temp2(ap.GetArgSize(2));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetArray(temp2.data(), temp2.size()))
  {
    bool tempr = (ap.IsBound() ?
      op->CreateClosedSurface(temp0, temp1, temp2) :
      op->vtkBinaryLabelmapToClosedSurfaceConversionRule::CreateClosedSurface(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_Convert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Convert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinaryLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkBinaryLabelmapToClosedSurfaceConversionRule *>(vp);

  vtkSegment *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegment"))
  {
    bool tempr = (ap.IsBound() ?
      op->Convert(temp0) :
      op->vtkBinaryLabelmapToClosedSurfaceConversionRule::Convert(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_PostConvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostConvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinaryLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkBinaryLabelmapToClosedSurfaceConversionRule *>(vp);

  vtkSegmentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentation"))
  {
    bool tempr = (ap.IsBound() ?
      op->PostConvert(temp0) :
      op->vtkBinaryLabelmapToClosedSurfaceConversionRule::PostConvert(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetConversionCost(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConversionCost");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinaryLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkBinaryLabelmapToClosedSurfaceConversionRule *>(vp);

  vtkDataObject *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkDataObject")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkDataObject")))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetConversionCost(temp0, temp1) :
      op->vtkBinaryLabelmapToClosedSurfaceConversionRule::GetConversionCost(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinaryLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkBinaryLabelmapToClosedSurfaceConversionRule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkBinaryLabelmapToClosedSurfaceConversionRule::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetSourceRepresentationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceRepresentationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinaryLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkBinaryLabelmapToClosedSurfaceConversionRule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSourceRepresentationName() :
      op->vtkBinaryLabelmapToClosedSurfaceConversionRule::GetSourceRepresentationName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetTargetRepresentationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetRepresentationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinaryLabelmapToClosedSurfaceConversionRule *op = static_cast<vtkBinaryLabelmapToClosedSurfaceConversionRule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTargetRepresentationName() :
      op->vtkBinaryLabelmapToClosedSurfaceConversionRule::GetTargetRepresentationName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBinaryLabelmapToClosedSurfaceConversionRule_Methods[] = {
  {"GetDecimationFactorParameterName", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetDecimationFactorParameterName, METH_VARARGS,
   "GetDecimationFactorParameterName() -> str\nC++: static const std::string GetDecimationFactorParameterName()\n\nConversion parameter: decimation factor\n"},
  {"GetSmoothingFactorParameterName", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetSmoothingFactorParameterName, METH_VARARGS,
   "GetSmoothingFactorParameterName() -> str\nC++: static const std::string GetSmoothingFactorParameterName()\n\nConversion parameter: smoothing factor\n"},
  {"GetConversionMethodParameterName", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetConversionMethodParameterName, METH_VARARGS,
   "GetConversionMethodParameterName() -> str\nC++: static const std::string GetConversionMethodParameterName()\n\nConversion parameter: Conversion method (flying edges or surface\nnets)\n"},
  {"GetSurfaceNetInternalSmoothingParameterName", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetSurfaceNetInternalSmoothingParameterName, METH_VARARGS,
   "GetSurfaceNetInternalSmoothingParameterName() -> str\nC++: static const std::string GetSurfaceNetInternalSmoothingParameterName(\n    )\n\nConversion parameter: SurfaceNets smoothing If SurfaceNets\nsmoothing is enabled, the smoothing available within the\nSurfaceNets filter and based of vtkConstrainedSmoothingFilter is\nused.\n"},
  {"GetComputeSurfaceNormalsParameterName", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetComputeSurfaceNormalsParameterName, METH_VARARGS,
   "GetComputeSurfaceNormalsParameterName() -> str\nC++: static const std::string GetComputeSurfaceNormalsParameterName(\n    )\n\nConversion parameter: compute surface normals\n"},
  {"GetJointSmoothingParameterName", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetJointSmoothingParameterName, METH_VARARGS,
   "GetJointSmoothingParameterName() -> str\nC++: static const std::string GetJointSmoothingParameterName()\n\nConversion parameter: joint smoothing If joint smoothing is\nenabled, surfaces will be created and smoothed as one\nvtkPolyData. Joint smoothing converts all segments in shared\nlabelmap together, reducing smoothing artifacts.\n"},
  {"IsTypeOf", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkBinaryLabelmapToClosedSurfaceConversionRule\nC++: static vtkBinaryLabelmapToClosedSurfaceConversionRule *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_NewInstance, METH_VARARGS,
   "NewInstance(self)\n    -> vtkBinaryLabelmapToClosedSurfaceConversionRule\nC++: vtkBinaryLabelmapToClosedSurfaceConversionRule *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateRuleInstance", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_CreateRuleInstance, METH_VARARGS,
   "CreateRuleInstance(self) -> vtkSegmentationConverterRule\nC++: vtkSegmentationConverterRule *CreateRuleInstance() override;\n\nCreate instance of the default node. Similar to New but virtual\nmethod. Subclasses should implement this method by\n"},
  {"ConstructRepresentationObjectByRepresentation", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_ConstructRepresentationObjectByRepresentation, METH_VARARGS,
   "ConstructRepresentationObjectByRepresentation(self,\n    representationName:str) -> vtkDataObject\nC++: vtkDataObject *ConstructRepresentationObjectByRepresentation(\n    std::string representationName) override;\n\nConstructs representation object from representation name for the\nsupported representation classes (typically source and target\nrepresentation VTK classes, subclasses of vtkDataObject) Note:\nNeed to take ownership of the created object! For example using\nvtkSmartPointer::Take\n"},
  {"ConstructRepresentationObjectByClass", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_ConstructRepresentationObjectByClass, METH_VARARGS,
   "ConstructRepresentationObjectByClass(self, className:str)\n    -> vtkDataObject\nC++: vtkDataObject *ConstructRepresentationObjectByClass(\n    std::string className) override;\n\nConstructs representation object from class name for the\nsupported representation classes (typically source and target\nrepresentation VTK classes, subclasses of vtkDataObject) Note:\nNeed to take ownership of the created object! For example using\nvtkSmartPointer::Take\n"},
  {"CreateClosedSurface", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_CreateClosedSurface, METH_VARARGS,
   "CreateClosedSurface(self, inputImage:vtkOrientedImageData,\n    outputPolydata:vtkPolyData, values:[int, ...]) -> bool\nC++: bool CreateClosedSurface(vtkOrientedImageData *inputImage,\n    vtkPolyData *outputPolydata, std::vector<int> values)\n\nPerform the actual binary labelmap to closed surface conversion\n"},
  {"Convert", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_Convert, METH_VARARGS,
   "Convert(self, segment:vtkSegment) -> bool\nC++: bool Convert(vtkSegment *segment) override;\n\nUpdate the target representation based on the source\nrepresentation\n"},
  {"PostConvert", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_PostConvert, METH_VARARGS,
   "PostConvert(self, segmentation:vtkSegmentation) -> bool\nC++: bool PostConvert(vtkSegmentation *segmentation) override;\n\nPerform postprocessing steps on the output Clears the joint\nsmoothing cache\n"},
  {"GetConversionCost", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetConversionCost, METH_VARARGS,
   "GetConversionCost(self, sourceRepresentation:vtkDataObject=...,\n    targetRepresentation:vtkDataObject=...) -> int\nC++: unsigned int GetConversionCost(\n    vtkDataObject *sourceRepresentation=nullptr,\n    vtkDataObject *targetRepresentation=nullptr) override;\n\nGet the cost of the conversion.\n"},
  {"GetName", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetName, METH_VARARGS,
   "GetName(self) -> str\nC++: const char *GetName() override;\n\nHuman-readable name of the converter rule\n"},
  {"GetSourceRepresentationName", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetSourceRepresentationName, METH_VARARGS,
   "GetSourceRepresentationName(self) -> str\nC++: const char *GetSourceRepresentationName() override;\n\nHuman-readable name of the source representation\n"},
  {"GetTargetRepresentationName", PyvtkBinaryLabelmapToClosedSurfaceConversionRule_GetTargetRepresentationName, METH_VARARGS,
   "GetTargetRepresentationName(self) -> str\nC++: const char *GetTargetRepresentationName() override;\n\nHuman-readable name of the target representation\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBinaryLabelmapToClosedSurfaceConversionRule_Doc =
  "vtkBinaryLabelmapToClosedSurfaceConversionRule - Convert binary\nlabelmap representation (vtkOrientedImageData type) to\n  closed surface representation (vtkPolyData type).\n\n"
  "Superclass: vtkSegmentationConverterRule\n\n"
  "The conversion algorithm\n"
  "  performs a marching cubes operation on the image data followed by\n"
  "an optional\n"
  "  decimation step.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBinaryLabelmapToClosedSurfaceConversionRule_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkBinaryLabelmapToClosedSurfaceConversionRule", // tp_name
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
  PyvtkBinaryLabelmapToClosedSurfaceConversionRule_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBinaryLabelmapToClosedSurfaceConversionRule_StaticNew()
{
  return vtkBinaryLabelmapToClosedSurfaceConversionRule::New();
}

PyObject *PyvtkBinaryLabelmapToClosedSurfaceConversionRule_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBinaryLabelmapToClosedSurfaceConversionRule_Type, PyvtkBinaryLabelmapToClosedSurfaceConversionRule_Methods,
    "vtkBinaryLabelmapToClosedSurfaceConversionRule",
 &PyvtkBinaryLabelmapToClosedSurfaceConversionRule_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkSegmentationConverterRule_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBinaryLabelmapToClosedSurfaceConversionRule(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBinaryLabelmapToClosedSurfaceConversionRule_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBinaryLabelmapToClosedSurfaceConversionRule", o) != 0)
  {
    Py_DECREF(o);
  }

}

