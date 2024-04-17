// python wrapper for vtkSegmentationConverter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSegmentationConverter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSegmentationConverter(PyObject *dict); }
extern "C" { PyObject *PyvtkSegmentationConverter_ClassNew(); }


static PyObject *
PyvtkSegmentationConverter_GetSegmentationBinaryLabelmapRepresentationName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSegmentationBinaryLabelmapRepresentationName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkSegmentationConverter::GetSegmentationBinaryLabelmapRepresentationName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetSegmentationFractionalLabelmapRepresentationName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSegmentationFractionalLabelmapRepresentationName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkSegmentationConverter::GetSegmentationFractionalLabelmapRepresentationName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetSegmentationPlanarContourRepresentationName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSegmentationPlanarContourRepresentationName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkSegmentationConverter::GetSegmentationPlanarContourRepresentationName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetSegmentationClosedSurfaceRepresentationName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSegmentationClosedSurfaceRepresentationName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkSegmentationConverter::GetSegmentationClosedSurfaceRepresentationName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetBinaryLabelmapRepresentationName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBinaryLabelmapRepresentationName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkSegmentationConverter::GetBinaryLabelmapRepresentationName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetFractionalLabelmapRepresentationName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFractionalLabelmapRepresentationName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkSegmentationConverter::GetFractionalLabelmapRepresentationName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetPlanarContourRepresentationName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPlanarContourRepresentationName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkSegmentationConverter::GetPlanarContourRepresentationName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetClosedSurfaceRepresentationName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetClosedSurfaceRepresentationName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkSegmentationConverter::GetClosedSurfaceRepresentationName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetReferenceImageGeometryParameterName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetReferenceImageGeometryParameterName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkSegmentationConverter::GetReferenceImageGeometryParameterName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetScalarRangeFieldName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetScalarRangeFieldName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkSegmentationConverter::GetScalarRangeFieldName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetThresholdValueFieldName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetThresholdValueFieldName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkSegmentationConverter::GetThresholdValueFieldName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetInterpolationTypeFieldName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInterpolationTypeFieldName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkSegmentationConverter::GetInterpolationTypeFieldName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSegmentationConverter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverter *op = static_cast<vtkSegmentationConverter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSegmentationConverter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSegmentationConverter *tempr = vtkSegmentationConverter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverter *op = static_cast<vtkSegmentationConverter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegmentationConverter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSegmentationConverter::NewInstance());

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
PyvtkSegmentationConverter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSegmentationConverter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverter *op = static_cast<vtkSegmentationConverter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSegmentationConverter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverter *op = static_cast<vtkSegmentationConverter *>(vp);

  vtkSegmentationConverter *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentationConverter"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkSegmentationConverter::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetPossibleConversions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPossibleConversions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverter *op = static_cast<vtkSegmentationConverter *>(vp);

  std::string temp0;
  std::string temp1;
  vtkSegmentationConversionPaths *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSegmentationConversionPaths"))
  {
    if (ap.IsBound())
    {
      op->GetPossibleConversions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSegmentationConverter::GetPossibleConversions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetConversionParametersForPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConversionParametersForPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverter *op = static_cast<vtkSegmentationConverter *>(vp);

  vtkSegmentationConversionParameters *temp0 = nullptr;
  vtkSegmentationConversionPath *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSegmentationConversionParameters") &&
      ap.GetVTKObject(temp1, "vtkSegmentationConversionPath"))
  {
    if (ap.IsBound())
    {
      op->GetConversionParametersForPath(temp0, temp1);
    }
    else
    {
      op->vtkSegmentationConverter::GetConversionParametersForPath(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetAllConversionParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllConversionParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverter *op = static_cast<vtkSegmentationConverter *>(vp);

  vtkSegmentationConversionParameters *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentationConversionParameters"))
  {
    if (ap.IsBound())
    {
      op->GetAllConversionParameters(temp0);
    }
    else
    {
      op->vtkSegmentationConverter::GetAllConversionParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_SetConversionParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConversionParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverter *op = static_cast<vtkSegmentationConverter *>(vp);

  vtkSegmentationConversionParameters *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentationConversionParameters"))
  {
    if (ap.IsBound())
    {
      op->SetConversionParameters(temp0);
    }
    else
    {
      op->vtkSegmentationConverter::SetConversionParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_SetConversionParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConversionParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverter *op = static_cast<vtkSegmentationConverter *>(vp);

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
      op->vtkSegmentationConverter::SetConversionParameter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetConversionParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConversionParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverter *op = static_cast<vtkSegmentationConverter *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetConversionParameter(temp0) :
      op->vtkSegmentationConverter::GetConversionParameter(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetConversionParameterDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConversionParameterDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverter *op = static_cast<vtkSegmentationConverter *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetConversionParameterDescription(temp0) :
      op->vtkSegmentationConverter::GetConversionParameterDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_SerializeAllConversionParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SerializeAllConversionParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverter *op = static_cast<vtkSegmentationConverter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->SerializeAllConversionParameters() :
      op->vtkSegmentationConverter::SerializeAllConversionParameters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_DeserializeConversionParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeserializeConversionParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverter *op = static_cast<vtkSegmentationConverter *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeserializeConversionParameters(temp0);
    }
    else
    {
      op->vtkSegmentationConverter::DeserializeConversionParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_ApplyTransformOnReferenceImageGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransformOnReferenceImageGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationConverter *op = static_cast<vtkSegmentationConverter *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->ApplyTransformOnReferenceImageGeometry(temp0);
    }
    else
    {
      op->vtkSegmentationConverter::ApplyTransformOnReferenceImageGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_GetCheapestPath(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCheapestPath");

  vtkSegmentationConversionPaths *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentationConversionPaths"))
  {
    vtkSegmentationConversionPath *tempr = vtkSegmentationConverter::GetCheapestPath(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationConverter_SerializeImageGeometry_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SerializeImageGeometry");

  vtkOrientedImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData"))
  {
    std::string tempr = vtkSegmentationConverter::SerializeImageGeometry(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSegmentationConverter_SerializeImageGeometry_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SerializeImageGeometry");

  vtkMatrix4x4 *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkImageData"))
  {
    std::string tempr = vtkSegmentationConverter::SerializeImageGeometry(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSegmentationConverter_SerializeImageGeometry_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SerializeImageGeometry");

  vtkMatrix4x4 *temp0 = nullptr;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    std::string tempr = vtkSegmentationConverter::SerializeImageGeometry(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSegmentationConverter_SerializeImageGeometry_Methods[] = {
  {"SerializeImageGeometry", PyvtkSegmentationConverter_SerializeImageGeometry_s2, METH_VARARGS | METH_STATIC,
   "VV *vtkMatrix4x4 *vtkImageData"},
  {"SerializeImageGeometry", PyvtkSegmentationConverter_SerializeImageGeometry_s3, METH_VARARGS | METH_STATIC,
   "VP *vtkMatrix4x4 *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSegmentationConverter_SerializeImageGeometry(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSegmentationConverter_SerializeImageGeometry_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSegmentationConverter_SerializeImageGeometry_s1(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SerializeImageGeometry");
  return nullptr;
}


static PyObject *
PyvtkSegmentationConverter_DeserializeImageGeometry_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DeserializeImageGeometry");

  std::string temp0;
  vtkOrientedImageData *temp1 = nullptr;
  bool temp2 = true;
  int temp3 = VTK_VOID;
  int temp4 = -1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    bool tempr = vtkSegmentationConverter::DeserializeImageGeometry(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSegmentationConverter_DeserializeImageGeometry_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DeserializeImageGeometry");

  std::string temp0;
  vtkMatrix4x4 *temp1 = nullptr;
  const size_t size2 = 6;
  int temp2[6];
  int save2[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4") &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    bool tempr = vtkSegmentationConverter::DeserializeImageGeometry(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSegmentationConverter_DeserializeImageGeometry_Methods[] = {
  {"DeserializeImageGeometry", PyvtkSegmentationConverter_DeserializeImageGeometry_s1, METH_VARARGS | METH_STATIC,
   "sV|qii *vtkOrientedImageData"},
  {"DeserializeImageGeometry", PyvtkSegmentationConverter_DeserializeImageGeometry_s2, METH_VARARGS | METH_STATIC,
   "sVP *vtkMatrix4x4 *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSegmentationConverter_DeserializeImageGeometry(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSegmentationConverter_DeserializeImageGeometry_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
    case 4:
    case 5:
      return PyvtkSegmentationConverter_DeserializeImageGeometry_s1(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DeserializeImageGeometry");
  return nullptr;
}

static PyMethodDef PyvtkSegmentationConverter_Methods[] = {
  {"GetSegmentationBinaryLabelmapRepresentationName", PyvtkSegmentationConverter_GetSegmentationBinaryLabelmapRepresentationName, METH_VARARGS,
   "GetSegmentationBinaryLabelmapRepresentationName() -> str\nC++: static const char *GetSegmentationBinaryLabelmapRepresentationName(\n    )\n\nDefault representation types In binary and fractional labelmaps\nvalues <=0 are considered background voxels (outside), values>0\nare foreground (inside).\n"},
  {"GetSegmentationFractionalLabelmapRepresentationName", PyvtkSegmentationConverter_GetSegmentationFractionalLabelmapRepresentationName, METH_VARARGS,
   "GetSegmentationFractionalLabelmapRepresentationName() -> str\nC++: static const char *GetSegmentationFractionalLabelmapRepresentationName(\n    )\n\n"},
  {"GetSegmentationPlanarContourRepresentationName", PyvtkSegmentationConverter_GetSegmentationPlanarContourRepresentationName, METH_VARARGS,
   "GetSegmentationPlanarContourRepresentationName() -> str\nC++: static const char *GetSegmentationPlanarContourRepresentationName(\n    )\n\n"},
  {"GetSegmentationClosedSurfaceRepresentationName", PyvtkSegmentationConverter_GetSegmentationClosedSurfaceRepresentationName, METH_VARARGS,
   "GetSegmentationClosedSurfaceRepresentationName() -> str\nC++: static const char *GetSegmentationClosedSurfaceRepresentationName(\n    )\n\n"},
  {"GetBinaryLabelmapRepresentationName", PyvtkSegmentationConverter_GetBinaryLabelmapRepresentationName, METH_VARARGS,
   "GetBinaryLabelmapRepresentationName() -> str\nC++: static const char *GetBinaryLabelmapRepresentationName()\n\n"},
  {"GetFractionalLabelmapRepresentationName", PyvtkSegmentationConverter_GetFractionalLabelmapRepresentationName, METH_VARARGS,
   "GetFractionalLabelmapRepresentationName() -> str\nC++: static const char *GetFractionalLabelmapRepresentationName()\n\n"},
  {"GetPlanarContourRepresentationName", PyvtkSegmentationConverter_GetPlanarContourRepresentationName, METH_VARARGS,
   "GetPlanarContourRepresentationName() -> str\nC++: static const char *GetPlanarContourRepresentationName()\n\n"},
  {"GetClosedSurfaceRepresentationName", PyvtkSegmentationConverter_GetClosedSurfaceRepresentationName, METH_VARARGS,
   "GetClosedSurfaceRepresentationName() -> str\nC++: static const char *GetClosedSurfaceRepresentationName()\n\n"},
  {"GetReferenceImageGeometryParameterName", PyvtkSegmentationConverter_GetReferenceImageGeometryParameterName, METH_VARARGS,
   "GetReferenceImageGeometryParameterName() -> str\nC++: static const std::string GetReferenceImageGeometryParameterName(\n    )\n\nReference image geometry conversion parameter Contains serialized\nmatrix and extent\n"},
  {"GetScalarRangeFieldName", PyvtkSegmentationConverter_GetScalarRangeFieldName, METH_VARARGS,
   "GetScalarRangeFieldName() -> str\nC++: static const char *GetScalarRangeFieldName()\n\nField names for 2D display parameters\n"},
  {"GetThresholdValueFieldName", PyvtkSegmentationConverter_GetThresholdValueFieldName, METH_VARARGS,
   "GetThresholdValueFieldName() -> str\nC++: static const char *GetThresholdValueFieldName()\n\n"},
  {"GetInterpolationTypeFieldName", PyvtkSegmentationConverter_GetInterpolationTypeFieldName, METH_VARARGS,
   "GetInterpolationTypeFieldName() -> str\nC++: static const char *GetInterpolationTypeFieldName()\n\n"},
  {"IsTypeOf", PyvtkSegmentationConverter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSegmentationConverter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSegmentationConverter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSegmentationConverter\nC++: static vtkSegmentationConverter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSegmentationConverter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSegmentationConverter\nC++: vtkSegmentationConverter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSegmentationConverter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSegmentationConverter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"DeepCopy", PyvtkSegmentationConverter_DeepCopy, METH_VARARGS,
   "DeepCopy(self, aConverter:vtkSegmentationConverter) -> None\nC++: virtual void DeepCopy(vtkSegmentationConverter *aConverter)\n\nDeep copy one converter into another\n"},
  {"GetPossibleConversions", PyvtkSegmentationConverter_GetPossibleConversions, METH_VARARGS,
   "GetPossibleConversions(self, sourceRepresentationName:str,\n    targetRepresentationName:str,\n    paths:vtkSegmentationConversionPaths) -> None\nC++: void GetPossibleConversions(\n    const std::string &sourceRepresentationName,\n    const std::string &targetRepresentationName,\n    vtkSegmentationConversionPaths *paths)\n\nGet all possible conversions between two representations\n"},
  {"GetConversionParametersForPath", PyvtkSegmentationConverter_GetConversionParametersForPath, METH_VARARGS,
   "GetConversionParametersForPath(self,\n    conversionParameters:vtkSegmentationConversionParameters,\n    path:vtkSegmentationConversionPath) -> None\nC++: void GetConversionParametersForPath(\n    vtkSegmentationConversionParameters *conversionParameters,\n    vtkSegmentationConversionPath *path)\n\nGet all conversion parameters used by the selected conversion\npath\n"},
  {"GetAllConversionParameters", PyvtkSegmentationConverter_GetAllConversionParameters, METH_VARARGS,
   "GetAllConversionParameters(self,\n    conversionParameters:vtkSegmentationConversionParameters)\n    -> None\nC++: void GetAllConversionParameters(\n    vtkSegmentationConversionParameters *conversionParameters)\n\nGet all conversion parameters in this converter. Aggregates all\nparameters from all rules\n"},
  {"SetConversionParameters", PyvtkSegmentationConverter_SetConversionParameters, METH_VARARGS,
   "SetConversionParameters(self,\n    parameters:vtkSegmentationConversionParameters) -> None\nC++: void SetConversionParameters(\n    vtkSegmentationConversionParameters *parameters)\n\nSet a list of conversion parameters to all rules (cannot change\nthe description, only the value)\n"},
  {"SetConversionParameter", PyvtkSegmentationConverter_SetConversionParameter, METH_VARARGS,
   "SetConversionParameter(self, name:str, value:str,\n    description:str=...) -> None\nC++: void SetConversionParameter(const std::string &name,\n    const std::string &value, const std::string &description=\"\")\n\nSet a conversion parameter to all rules having this parameter\n"},
  {"GetConversionParameter", PyvtkSegmentationConverter_GetConversionParameter, METH_VARARGS,
   "GetConversionParameter(self, name:str) -> str\nC++: std::string GetConversionParameter(const std::string &name)\n\nGet a conversion parameter value from first rule containing this\nparameter Note: all parameters with the same name should contain\nthe same value\n"},
  {"GetConversionParameterDescription", PyvtkSegmentationConverter_GetConversionParameterDescription, METH_VARARGS,
   "GetConversionParameterDescription(self, description:str) -> str\nC++: std::string GetConversionParameterDescription(\n    const std::string &description)\n\nGet a conversion parameter description from first rule containing\nthis parameter Note: all parameters with the same name should\ncontain the same value\n"},
  {"SerializeAllConversionParameters", PyvtkSegmentationConverter_SerializeAllConversionParameters, METH_VARARGS,
   "SerializeAllConversionParameters(self) -> str\nC++: std::string SerializeAllConversionParameters()\n\nSerialize all conversion parameters. The resulting string can be\nparsed in a segmentation converter object using /sa\nDeserializeConversionParameters\n"},
  {"DeserializeConversionParameters", PyvtkSegmentationConverter_DeserializeConversionParameters, METH_VARARGS,
   "DeserializeConversionParameters(self,\n    conversionParametersString:str) -> None\nC++: void DeserializeConversionParameters(\n    std::string conversionParametersString)\n\nParse conversion parameters in string and set it to the converter\nSuch a string can be constructed in a segmentation converter\nobject using /sa SerializeAllConversionParameters\n"},
  {"ApplyTransformOnReferenceImageGeometry", PyvtkSegmentationConverter_ApplyTransformOnReferenceImageGeometry, METH_VARARGS,
   "ApplyTransformOnReferenceImageGeometry(self,\n    transform:vtkAbstractTransform) -> None\nC++: void ApplyTransformOnReferenceImageGeometry(\n    vtkAbstractTransform *transform)\n\nApply a transform on the reference image geometry Linear: simply\nmultiply the geometry matrix with the applied matrix, extent\nstays the same Non-linear: calculate new extents and change only\nthe extents\n"},
  {"GetCheapestPath", PyvtkSegmentationConverter_GetCheapestPath, METH_VARARGS,
   "GetCheapestPath(paths:vtkSegmentationConversionPaths)\n    -> vtkSegmentationConversionPath\nC++: static vtkSegmentationConversionPath *GetCheapestPath(\n    vtkSegmentationConversionPaths *paths)\n\nReturn cheapest path from a list of paths with costs\n"},
  {"SerializeImageGeometry", PyvtkSegmentationConverter_SerializeImageGeometry, METH_VARARGS,
   "SerializeImageGeometry(orientedImageData:vtkOrientedImageData)\n    -> str\nC++: static std::string SerializeImageGeometry(\n    vtkOrientedImageData *orientedImageData)\nSerializeImageGeometry(geometryMatrix:vtkMatrix4x4,\n    imageData:vtkImageData) -> str\nC++: static std::string SerializeImageGeometry(\n    vtkMatrix4x4 *geometryMatrix, vtkImageData *imageData)\nSerializeImageGeometry(geometryMatrix:vtkMatrix4x4, extent:[int,\n    int, int, int, int, int]) -> str\nC++: static std::string SerializeImageGeometry(\n    vtkMatrix4x4 *geometryMatrix, int extent[6])\n\nUtility function for serializing geometry of oriented image data\n"},
  {"DeserializeImageGeometry", PyvtkSegmentationConverter_DeserializeImageGeometry, METH_VARARGS,
   "DeserializeImageGeometry(geometryString:str,\n    orientedImageData:vtkOrientedImageData,\n    allocateScalars:bool=True, scalarType:int=...,\n    numberOfScalarsComponents:int=-1) -> bool\nC++: static bool DeserializeImageGeometry(\n    std::string geometryString,\n    vtkOrientedImageData *orientedImageData,\n    bool allocateScalars=true, int scalarType=VTK_VOID,\n    int numberOfScalarsComponents=-1)\nDeserializeImageGeometry(geometryString:str,\n    geometryMatrix:vtkMatrix4x4, extent:[int, int, int, int, int,\n    int]) -> bool\nC++: static bool DeserializeImageGeometry(\n    std::string geometryString, vtkMatrix4x4 *geometryMatrix,\n    int extent[6])\n\nUtility function for de-serializing reference image geometry into\na dummy oriented image data\n\\param geometryString String containing the serialized image\n    geometry\n\\param orientedImageData Dummy oriented image data containing the\nde-serialized geometry information\n\\param allocateScalars Reallocate scalar array to match the new\n    geometry. Can be set to false if image buffer is not used\n    (e.g., an image is only created to parse image geometry)\n\\param scalarType If specified then scalar type will be set to\n    the requested value, otherwise current value will be kept.\n\\param numberOfScalarsComponents If specified then the number of\n    scalar components will be set to the requested value,\n    otherwise current value will be kept.\n\\return Success flag\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSegmentationConverter_Doc =
  "vtkSegmentationConverter - Class that can convert between different\nrepresentations of a segment.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSegmentationConverter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkSegmentationConverter", // tp_name
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
  PyvtkSegmentationConverter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSegmentationConverter_StaticNew()
{
  return vtkSegmentationConverter::New();
}

PyObject *PyvtkSegmentationConverter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSegmentationConverter_Type, PyvtkSegmentationConverter_Methods,
    "vtkSegmentationConverter",
 &PyvtkSegmentationConverter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSegmentationConverter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSegmentationConverter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSegmentationConverter", o) != 0)
  {
    Py_DECREF(o);
  }

}

