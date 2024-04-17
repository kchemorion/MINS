// python wrapper for vtkOrientedImageDataResample
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOrientedImageDataResample.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOrientedImageDataResample(PyObject *dict); }
extern "C" { PyObject *PyvtkOrientedImageDataResample_ClassNew(); }


static PyObject *
PyvtkOrientedImageDataResample_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOrientedImageDataResample::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageDataResample *op = static_cast<vtkOrientedImageDataResample *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrientedImageDataResample::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOrientedImageDataResample *tempr = vtkOrientedImageDataResample::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageDataResample *op = static_cast<vtkOrientedImageDataResample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOrientedImageDataResample *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrientedImageDataResample::NewInstance());

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
PyvtkOrientedImageDataResample_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOrientedImageDataResample::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageDataResample *op = static_cast<vtkOrientedImageDataResample *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOrientedImageDataResample::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_ResampleOrientedImageToReferenceGeometry(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ResampleOrientedImageToReferenceGeometry");

  vtkOrientedImageData *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  vtkOrientedImageData *temp2 = nullptr;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp2, "vtkOrientedImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = vtkOrientedImageDataResample::ResampleOrientedImageToReferenceGeometry(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_ResampleOrientedImageToReferenceOrientedImage(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ResampleOrientedImageToReferenceOrientedImage");

  vtkOrientedImageData *temp0 = nullptr;
  vtkOrientedImageData *temp1 = nullptr;
  vtkOrientedImageData *temp2 = nullptr;
  bool temp3 = false;
  bool temp4 = false;
  vtkAbstractTransform *temp5 = nullptr;
  double temp6 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 7) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp2, "vtkOrientedImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp5, "vtkAbstractTransform")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    bool tempr = vtkOrientedImageDataResample::ResampleOrientedImageToReferenceOrientedImage(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_TransformOrientedImage(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TransformOrientedImage");

  vtkOrientedImageData *temp0 = nullptr;
  vtkAbstractTransform *temp1 = nullptr;
  bool temp2 = false;
  bool temp3 = false;
  bool temp4 = false;
  size_t size5 = 0;
  double store5[2*4];
  double *temp5 = nullptr;
  double *save5 = nullptr;
  if (ap.GetArgSize(5) > 0)
  {
    size5 = 4;
    temp5 = store5;
    save5 = store5 + 4;
  }
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 6) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkAbstractTransform") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp5, size5)))
  {
    vtkPythonArgs::Save(temp5, save5, size5);

    vtkOrientedImageDataResample::TransformOrientedImage(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_MergeImage(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MergeImage");

  vtkOrientedImageData *temp0 = nullptr;
  vtkOrientedImageData *temp1 = nullptr;
  vtkOrientedImageData *temp2 = nullptr;
  int temp3;
  size_t size4 = 0;
  int store4[6];
  int *temp4 = nullptr;
  if (ap.GetArgSize(4) > 0)
  {
    size4 = 6;
    temp4 = store4;
  }
  double temp5 = 0;
  double temp6 = 1;
  size_t size7 = ap.GetArgSize(7);
  vtkPythonArgs::Array<bool> store7(2*size7);
  bool *temp7 = store7.Data();
  bool *save7 = (size7 == 0 ? nullptr : temp7 + size7);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4, 8) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp2, "vtkOrientedImageData") &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp7, size7)))
  {
    vtkPythonArgs::Save(temp7, save7, size7);

    bool tempr = vtkOrientedImageDataResample::MergeImage(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (vtkPythonArgs::HasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(7, temp7, size7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_ModifyImage(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ModifyImage");

  vtkOrientedImageData *temp0 = nullptr;
  vtkOrientedImageData *temp1 = nullptr;
  int temp2;
  size_t size3 = 0;
  int store3[6];
  int *temp3 = nullptr;
  if (ap.GetArgSize(3) > 0)
  {
    size3 = 6;
    temp3 = store3;
  }
  double temp4 = 0;
  double temp5 = 1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 6) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData") &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    bool tempr = vtkOrientedImageDataResample::ModifyImage(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_CopyImage(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CopyImage");

  vtkOrientedImageData *temp0 = nullptr;
  vtkOrientedImageData *temp1 = nullptr;
  size_t size2 = 0;
  int store2[6];
  int *temp2 = nullptr;
  if (ap.GetArgSize(2) > 0)
  {
    size2 = 6;
    temp2 = store2;
  }
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData") &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)))
  {
    bool tempr = vtkOrientedImageDataResample::CopyImage(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_FillImage(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FillImage");

  vtkImageData *temp0 = nullptr;
  double temp1;
  size_t size2 = 0;
  int store2[6];
  int *temp2 = nullptr;
  if (ap.GetArgSize(2) > 0)
  {
    size2 = 6;
    temp2 = store2;
  }
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)))
  {
    vtkOrientedImageDataResample::FillImage(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_CalculateEffectiveExtent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CalculateEffectiveExtent");

  vtkOrientedImageData *temp0 = nullptr;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  double temp2 = 0.0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = vtkOrientedImageDataResample::CalculateEffectiveExtent(temp0, temp1, temp2);

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


static PyObject *
PyvtkOrientedImageDataResample_DoGeometriesMatch(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DoGeometriesMatch");

  vtkOrientedImageData *temp0 = nullptr;
  vtkOrientedImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData"))
  {
    bool tempr = vtkOrientedImageDataResample::DoGeometriesMatch(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_DoExtentsMatch(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DoExtentsMatch");

  vtkOrientedImageData *temp0 = nullptr;
  vtkOrientedImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData"))
  {
    bool tempr = vtkOrientedImageDataResample::DoExtentsMatch(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_DoGeometriesMatchIgnoreOrigin(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DoGeometriesMatchIgnoreOrigin");

  vtkOrientedImageData *temp0 = nullptr;
  vtkOrientedImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData"))
  {
    bool tempr = vtkOrientedImageDataResample::DoGeometriesMatchIgnoreOrigin(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_TransformExtent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TransformExtent");

  const size_t size0 = 6;
  int temp0[6];
  vtkAbstractTransform *temp1 = nullptr;
  const size_t size2 = 6;
  int temp2[6];
  int save2[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkAbstractTransform") &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkOrientedImageDataResample::TransformExtent(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_TransformBounds(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TransformBounds");

  const size_t size0 = 6;
  double temp0[6];
  vtkAbstractTransform *temp1 = nullptr;
  const size_t size2 = 6;
  double temp2[6];
  double save2[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkAbstractTransform") &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkOrientedImageDataResample::TransformBounds(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_TransformOrientedImageDataBounds(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TransformOrientedImageDataBounds");

  vtkOrientedImageData *temp0 = nullptr;
  vtkAbstractTransform *temp1 = nullptr;
  const size_t size2 = 6;
  double temp2[6];
  double save2[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkAbstractTransform") &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkOrientedImageDataResample::TransformOrientedImageDataBounds(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_IsEqual(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsEqual");

  vtkMatrix4x4 *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    bool tempr = vtkOrientedImageDataResample::IsEqual(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_AreEqualWithTolerance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AreEqualWithTolerance");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkOrientedImageDataResample::AreEqualWithTolerance(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_GetTransformBetweenOrientedImages(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTransformBetweenOrientedImages");

  vtkOrientedImageData *temp0 = nullptr;
  vtkOrientedImageData *temp1 = nullptr;
  vtkTransform *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp2, "vtkTransform"))
  {
    bool tempr = vtkOrientedImageDataResample::GetTransformBetweenOrientedImages(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_PadImageToContainImage_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PadImageToContainImage");

  vtkOrientedImageData *temp0 = nullptr;
  vtkOrientedImageData *temp1 = nullptr;
  vtkOrientedImageData *temp2 = nullptr;
  const size_t size3 = 6;
  int temp3[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp2, "vtkOrientedImageData") &&
      ap.GetArray(temp3, size3))
  {
    bool tempr = vtkOrientedImageDataResample::PadImageToContainImage(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOrientedImageDataResample_PadImageToContainImage_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PadImageToContainImage");

  vtkOrientedImageData *temp0 = nullptr;
  vtkOrientedImageData *temp1 = nullptr;
  vtkOrientedImageData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp2, "vtkOrientedImageData"))
  {
    bool tempr = vtkOrientedImageDataResample::PadImageToContainImage(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOrientedImageDataResample_PadImageToContainImage(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkOrientedImageDataResample_PadImageToContainImage_s1(self, args);
    case 3:
      return PyvtkOrientedImageDataResample_PadImageToContainImage_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PadImageToContainImage");
  return nullptr;
}


static PyObject *
PyvtkOrientedImageDataResample_IsTransformLinear(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTransformLinear");

  vtkAbstractTransform *temp0 = nullptr;
  vtkTransform *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform") &&
      ap.GetVTKObject(temp1, "vtkTransform"))
  {
    bool tempr = vtkOrientedImageDataResample::IsTransformLinear(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_DoesTransformMatrixContainShear(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DoesTransformMatrixContainShear");

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    bool tempr = vtkOrientedImageDataResample::DoesTransformMatrixContainShear(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_ApplyImageMask(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ApplyImageMask");

  vtkOrientedImageData *temp0 = nullptr;
  vtkOrientedImageData *temp1 = nullptr;
  double temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData") &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = vtkOrientedImageDataResample::ApplyImageMask(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_GetLabelValuesInMask(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLabelValuesInMask");

  std::vector<int> temp0(ap.GetArgSize(0));
  vtkOrientedImageData *temp1 = nullptr;
  vtkOrientedImageData *temp2 = nullptr;
  size_t size3 = 0;
  int store3[6];
  int *temp3 = nullptr;
  if (ap.GetArgSize(3) > 0)
  {
    size3 = 6;
    temp3 = store3;
  }
  int temp4 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 5) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp2, "vtkOrientedImageData") &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    vtkOrientedImageDataResample::GetLabelValuesInMask(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp0.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp0.data(), temp0.size()));
      ap.SetContents(0, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageDataResample_IsLabelInMask(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsLabelInMask");

  vtkOrientedImageData *temp0 = nullptr;
  vtkOrientedImageData *temp1 = nullptr;
  size_t size2 = 0;
  int store2[2*6];
  int *temp2 = nullptr;
  int *save2 = nullptr;
  if (ap.GetArgSize(2) > 0)
  {
    size2 = 6;
    temp2 = store2;
    save2 = store2 + 6;
  }
  int temp3 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 4) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData") &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    bool tempr = vtkOrientedImageDataResample::IsLabelInMask(temp0, temp1, temp2, temp3);

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


static PyObject *
PyvtkOrientedImageDataResample_CastImageForValue(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CastImageForValue");

  vtkOrientedImageData *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetValue(temp1))
  {
    vtkOrientedImageDataResample::CastImageForValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOrientedImageDataResample_Methods[] = {
  {"IsTypeOf", PyvtkOrientedImageDataResample_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOrientedImageDataResample_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOrientedImageDataResample_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOrientedImageDataResample\nC++: static vtkOrientedImageDataResample *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOrientedImageDataResample_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOrientedImageDataResample\nC++: vtkOrientedImageDataResample *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOrientedImageDataResample_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOrientedImageDataResample_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ResampleOrientedImageToReferenceGeometry", PyvtkOrientedImageDataResample_ResampleOrientedImageToReferenceGeometry, METH_VARARGS,
   "ResampleOrientedImageToReferenceGeometry(\n    inputImage:vtkOrientedImageData,\n    referenceGeometryMatrix:vtkMatrix4x4,\n    outputImage:vtkOrientedImageData,\n    linearInterpolation:bool=False) -> bool\nC++: static bool ResampleOrientedImageToReferenceGeometry(\n    vtkOrientedImageData *inputImage,\n    vtkMatrix4x4 *referenceGeometryMatrix,\n    vtkOrientedImageData *outputImage,\n    bool linearInterpolation=false)\n\nResample an oriented image data to match the geometry of a\nreference geometry matrix. Origin and dimensions are determined\nfrom the contents of the input image.\n\\param inputImage Oriented image to resample\n\\param referenceGeometryMatrix Matrix containing the desired\n    geometry\n\\param outputImage Output image\n\\param linearInterpolation True if linear interpolation is\n    requested (fractional labelmap), or false for nearest\n    neighbor (binary labelmap). Default is false.\n\\return Success flag\n"},
  {"ResampleOrientedImageToReferenceOrientedImage", PyvtkOrientedImageDataResample_ResampleOrientedImageToReferenceOrientedImage, METH_VARARGS,
   "ResampleOrientedImageToReferenceOrientedImage(\n    inputImage:vtkOrientedImageData,\n    referenceImage:vtkOrientedImageData,\n    outputImage:vtkOrientedImageData,\n    linearInterpolation:bool=False, padImage:bool=False,\n    inputImageTransform:vtkAbstractTransform=...,\n    backgroundValue:float=0) -> bool\nC++: static bool ResampleOrientedImageToReferenceOrientedImage(\n    vtkOrientedImageData *inputImage,\n    vtkOrientedImageData *referenceImage,\n    vtkOrientedImageData *outputImage,\n    bool linearInterpolation=false, bool padImage=false,\n    vtkAbstractTransform *inputImageTransform=nullptr,\n    double backgroundValue=0)\n\nResample an oriented image data to match the geometry of a\nreference oriented image data\n\\param inputImage Oriented image to resample\n\\param referenceImage Oriented image containing the desired\n    geometry\n\\param outputImage Output image\n\\param linearInterpolation True if linear interpolation is\n    requested (fractional labelmap), or false for nearest\n    neighbor (binary labelmap). Default is false.\n\\param padImage If enabled then it is made sure that the input\n    image's extent fits into the resampled reference image, so if\npart of the extent is transformed\n         to be outside the reference extent, then it is padded.\nDisabled by default.\n\\param inputImageTransform If specified then inputImage will be\n    transformed with inputImageTransform before resampled into\n    referenceImage.\n\\return Success flag\n"},
  {"TransformOrientedImage", PyvtkOrientedImageDataResample_TransformOrientedImage, METH_VARARGS,
   "TransformOrientedImage(image:vtkOrientedImageData,\n    transform:vtkAbstractTransform, geometryOnly:bool=False,\n    alwaysResample:bool=False, linearInterpolation:bool=False,\n    backgroundColor:[float, float, float, float]=...) -> None\nC++: static void TransformOrientedImage(\n    vtkOrientedImageData *image, vtkAbstractTransform *transform,\n    bool geometryOnly=false, bool alwaysResample=false,\n    bool linearInterpolation=false,\n    double backgroundColor[4]=nullptr)\n\nTransform an oriented image data using a transform that can be\nlinear or non-linear. Linear: simply multiply the geometry matrix\nwith the applied matrix, extent stays the same Non-linear:\ncalculate new extents and change only the extents when applying\ndeformable transform\n\\param image Oriented image to transform\n\\param transform Input transform\n\\param geometryOnly Only the geometry of the image is changed\n    according to the transform if this flag is turned on.\n         This flag only has an effect if the transform is\nnon-linear, in which case only the extent is changed. Off by\ndefault\n\\param alwaysResample If on, then image data will be resampled\n    even if the applied transform is linear\n"},
  {"MergeImage", PyvtkOrientedImageDataResample_MergeImage, METH_VARARGS,
   "MergeImage(inputImage:vtkOrientedImageData,\n    imageToAppend:vtkOrientedImageData,\n    outputImage:vtkOrientedImageData, operation:int, extent:(int,\n    int, int, int, int, int)=..., maskThreshold:float=0,\n    fillValue:float=1, outputModified:[bool, ...]=...) -> bool\nC++: static bool MergeImage(vtkOrientedImageData *inputImage,\n    vtkOrientedImageData *imageToAppend,\n    vtkOrientedImageData *outputImage, int operation,\n    const int extent[6]=nullptr, double maskThreshold=0,\n    double fillValue=1, bool *outputModified=nullptr)\n\nCombines the inputImage and imageToAppend into a new image by\nmax/min operation. The extent will be the union of the two\nimages. Extent can be specified to restrict imageToAppend's\nextent to a smaller region. inputImage and imageToAppend must\nhave the same geometry, but they may have different extents.\n"},
  {"ModifyImage", PyvtkOrientedImageDataResample_ModifyImage, METH_VARARGS,
   "ModifyImage(inputImage:vtkOrientedImageData,\n    modifierImage:vtkOrientedImageData, operation:int, extent:(\n    int, int, int, int, int, int)=..., maskThreshold:float=0,\n    fillValue:float=1) -> bool\nC++: static bool ModifyImage(vtkOrientedImageData *inputImage,\n    vtkOrientedImageData *modifierImage, int operation,\n    const int extent[6]=nullptr, double maskThreshold=0,\n    double fillValue=1)\n\nModifies inputImage in-place by combining with modifierImage\nusing max/min operation. The extent will remain unchanged. Extent\ncan be specified to restrict modifierImage's extent to a smaller\nregion. inputImage and modifierImage must have the same geometry\n(origin, spacing, directions) and scalar type, but they may have\ndifferent extents.\n"},
  {"CopyImage", PyvtkOrientedImageDataResample_CopyImage, METH_VARARGS,
   "CopyImage(imageToCopy:vtkOrientedImageData,\n    outputImage:vtkOrientedImageData, extent:(int, int, int, int,\n    int, int)=...) -> bool\nC++: static bool CopyImage(vtkOrientedImageData *imageToCopy,\n    vtkOrientedImageData *outputImage,\n    const int extent[6]=nullptr)\n\nCopy image with clipping to the specified extent\n"},
  {"FillImage", PyvtkOrientedImageDataResample_FillImage, METH_VARARGS,
   "FillImage(image:vtkImageData, fillValue:float, extent:(int, int,\n    int, int, int, int)=...) -> None\nC++: static void FillImage(vtkImageData *image, double fillValue,\n    const int extent[6]=nullptr)\n\nFills an image with the specified value\n\\param extent The whole extent is filled if extent is not\n    specified\n"},
  {"CalculateEffectiveExtent", PyvtkOrientedImageDataResample_CalculateEffectiveExtent, METH_VARARGS,
   "CalculateEffectiveExtent(image:vtkOrientedImageData,\n    effectiveExtent:[int, int, int, int, int, int],\n    threshold:float=0.0) -> bool\nC++: static bool CalculateEffectiveExtent(\n    vtkOrientedImageData *image, int effectiveExtent[6],\n    double threshold=0.0)\n\nCalculate effective extent of an image: the IJK extent where\nnon-zero voxels are located\n"},
  {"DoGeometriesMatch", PyvtkOrientedImageDataResample_DoGeometriesMatch, METH_VARARGS,
   "DoGeometriesMatch(image1:vtkOrientedImageData,\n    image2:vtkOrientedImageData) -> bool\nC++: static bool DoGeometriesMatch(vtkOrientedImageData *image1,\n    vtkOrientedImageData *image2)\n\nDetermine if geometries of two oriented image data objects match.\nOrigin, spacing and direction are considered, extent is not.\n"},
  {"DoExtentsMatch", PyvtkOrientedImageDataResample_DoExtentsMatch, METH_VARARGS,
   "DoExtentsMatch(image1:vtkOrientedImageData,\n    image2:vtkOrientedImageData) -> bool\nC++: static bool DoExtentsMatch(vtkOrientedImageData *image1,\n    vtkOrientedImageData *image2)\n\nDetermine if extents of two oriented image data objects match.\n"},
  {"DoGeometriesMatchIgnoreOrigin", PyvtkOrientedImageDataResample_DoGeometriesMatchIgnoreOrigin, METH_VARARGS,
   "DoGeometriesMatchIgnoreOrigin(image1:vtkOrientedImageData,\n    image2:vtkOrientedImageData) -> bool\nC++: static bool DoGeometriesMatchIgnoreOrigin(\n    vtkOrientedImageData *image1, vtkOrientedImageData *image2)\n\nDetermine if geometries of two oriented image data objects match.\nOnly considers spacing and orientation, origin and extent may be\ndifferent!\n"},
  {"TransformExtent", PyvtkOrientedImageDataResample_TransformExtent, METH_VARARGS,
   "TransformExtent(inputExtent:(int, int, int, int, int, int),\n    inputToOutputTransform:vtkAbstractTransform,\n    outputExtent:[int, int, int, int, int, int]) -> None\nC++: static void TransformExtent(const int inputExtent[6],\n    vtkAbstractTransform *inputToOutputTransform,\n    int outputExtent[6])\n\nTransform input extent to determine output extent of an image.\nUse all bounding box corners, may miss part of the extent in case\nof non-linear transforms are used.\n"},
  {"TransformBounds", PyvtkOrientedImageDataResample_TransformBounds, METH_VARARGS,
   "TransformBounds(inputBounds:(float, float, float, float, float,\n    float), inputToOutputTransform:vtkAbstractTransform,\n    outputBounds:[float, float, float, float, float, float])\n    -> None\nC++: static void TransformBounds(const double inputBounds[6],\n    vtkAbstractTransform *inputToOutputTransform,\n    double outputBounds[6])\n\nTransform input bounds to determine output bounds. Use all\nbounding box corners, may miss part of the extent in case of\nnon-linear transforms are used.\n"},
  {"TransformOrientedImageDataBounds", PyvtkOrientedImageDataResample_TransformOrientedImageDataBounds, METH_VARARGS,
   "TransformOrientedImageDataBounds(image:vtkOrientedImageData,\n    transform:vtkAbstractTransform, transformedBounds:[float,\n    float, float, float, float, float]) -> None\nC++: static void TransformOrientedImageDataBounds(\n    vtkOrientedImageData *image, vtkAbstractTransform *transform,\n    double transformedBounds[6])\n\nTransform bounds of oriented image data using a linear or\nnon-linear transform\n"},
  {"IsEqual", PyvtkOrientedImageDataResample_IsEqual, METH_VARARGS,
   "IsEqual(lhs:vtkMatrix4x4, rhs:vtkMatrix4x4) -> bool\nC++: static bool IsEqual(vtkMatrix4x4 *lhs, vtkMatrix4x4 *rhs)\n\nCompare the values (with tolerance) between two 4x4 matrices\n\\param lhs Left-hand side matrix to compare\n\\param rhs Right-hand side matrix to compare\n"},
  {"AreEqualWithTolerance", PyvtkOrientedImageDataResample_AreEqualWithTolerance, METH_VARARGS,
   "AreEqualWithTolerance(a:float, b:float) -> bool\nC++: static bool AreEqualWithTolerance(double a, double b)\n\nCompare two floating point numbers within tolerance\n"},
  {"GetTransformBetweenOrientedImages", PyvtkOrientedImageDataResample_GetTransformBetweenOrientedImages, METH_VARARGS,
   "GetTransformBetweenOrientedImages(image1:vtkOrientedImageData,\n    image2:vtkOrientedImageData,\n    image1ToImage2Transform:vtkTransform) -> bool\nC++: static bool GetTransformBetweenOrientedImages(\n    vtkOrientedImageData *image1, vtkOrientedImageData *image2,\n    vtkTransform *image1ToImage2Transform)\n\nCalculate transform between two oriented image data\n"},
  {"PadImageToContainImage", PyvtkOrientedImageDataResample_PadImageToContainImage, METH_VARARGS,
   "PadImageToContainImage(inputImage:vtkOrientedImageData,\n    containedImage:vtkOrientedImageData,\n    outputImage:vtkOrientedImageData, extent:(int, int, int, int,\n    int, int)) -> bool\nC++: static bool PadImageToContainImage(\n    vtkOrientedImageData *inputImage,\n    vtkOrientedImageData *containedImage,\n    vtkOrientedImageData *outputImage, const int extent[6])\nPadImageToContainImage(inputImage:vtkOrientedImageData,\n    containedImage:vtkOrientedImageData,\n    outputImage:vtkOrientedImageData) -> bool\nC++: static bool PadImageToContainImage(\n    vtkOrientedImageData *inputImage,\n    vtkOrientedImageData *containedImage,\n    vtkOrientedImageData *outputImage)\n\nPad an image to entirely contain another image using custom\nextent to contain\n"},
  {"IsTransformLinear", PyvtkOrientedImageDataResample_IsTransformLinear, METH_VARARGS,
   "IsTransformLinear(transform:vtkAbstractTransform,\n    linearTransform:vtkTransform) -> bool\nC++: static bool IsTransformLinear(\n    vtkAbstractTransform *transform,\n    vtkTransform *linearTransform)\n\nDetermine if a transform is linear and return it if it is. A\nsimple downcast is not enough, as the transform may be a general\ntransform, which can be linear if the concatenation it contains\nconsist of all linear transforms.\n\\param transform Input transform to assess\n\\param linearTransform Output transform in case transform is\n    linear\n\\return True if input is linear, false otherwise.\n"},
  {"DoesTransformMatrixContainShear", PyvtkOrientedImageDataResample_DoesTransformMatrixContainShear, METH_VARARGS,
   "DoesTransformMatrixContainShear(matrix:vtkMatrix4x4) -> bool\nC++: static bool DoesTransformMatrixContainShear(\n    vtkMatrix4x4 *matrix)\n\nDetermine if a transform matrix contains shear\n"},
  {"ApplyImageMask", PyvtkOrientedImageDataResample_ApplyImageMask, METH_VARARGS,
   "ApplyImageMask(input:vtkOrientedImageData,\n    mask:vtkOrientedImageData, fillValue:float,\n    notMask:bool=False) -> bool\nC++: static bool ApplyImageMask(vtkOrientedImageData *input,\n    vtkOrientedImageData *mask, double fillValue,\n    bool notMask=false)\n\nApply mask image on an input image\n\\param input Input image to apply the mask on\n\\param mask Mask to apply\n\\param notMask If on, the mask is passed through a boolean not\n    before it is used to mask the image.\n  The effect is to pass the input pixels where the mask is zero,\nand replace the pixels where the\n  mask is non zero\n"},
  {"GetLabelValuesInMask", PyvtkOrientedImageDataResample_GetLabelValuesInMask, METH_VARARGS,
   "GetLabelValuesInMask(labelValues:[int, ...],\n    binaryLabelmap:vtkOrientedImageData,\n    mask:vtkOrientedImageData, extent:(int, int, int, int, int,\n    int)=..., maskThreshold:int=0) -> None\nC++: static void GetLabelValuesInMask(\n    std::vector<int> &labelValues,\n    vtkOrientedImageData *binaryLabelmap,\n    vtkOrientedImageData *mask, const int extent[6]=nullptr,\n    int maskThreshold=0)\n\nGet the values contained in the labelmap under the mask\n\\param binaryLabelmap Input image to get values from\n\\param mask Mask image to get values under\n\\param extent Can be set to restrict the examined extent to a\n    smaller region.\n If nullptr, the extent will be the overlapping extent between\nthe label and mask.\n\\param labelValues The values found in the binary labelmap\n    underneath the mask\n\\param maskThreshold Threshold value for the mask. Values above\n    this threshold are considered to be under the mask\n"},
  {"IsLabelInMask", PyvtkOrientedImageDataResample_IsLabelInMask, METH_VARARGS,
   "IsLabelInMask(binaryLabelmap:vtkOrientedImageData,\n    mask:vtkOrientedImageData, extent:[int, int, int, int, int,\n    int]=..., maskThreshold:int=0) -> bool\nC++: static bool IsLabelInMask(\n    vtkOrientedImageData *binaryLabelmap,\n    vtkOrientedImageData *mask, int extent[6]=nullptr,\n    int maskThreshold=0)\n\nDetermine if there is a non-zero value in the labelmap under the\nmask\n\\param binaryLabelmap Input image to get values from\n\\param mask Mask image to get values under\n\\param extent Can be set to restrict the examined extent to a\n    smaller region.\n If nullptr, the extent will be the overlapping extent between\nthe label and mask.\n\\param maskThreshold Threshold value for the mask. Values above\n    this threshold are considered to be under the mask\n"},
  {"CastImageForValue", PyvtkOrientedImageDataResample_CastImageForValue, METH_VARARGS,
   "CastImageForValue(image:vtkOrientedImageData, value:float) -> None\nC++: static void CastImageForValue(vtkOrientedImageData *image,\n    double value)\n\nCast the data type of the image to be able to contain the\nspecified value\n\\param image Image to convert\n\\param value Value that should be representable by the image data\ntype\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOrientedImageDataResample_Doc =
  "vtkOrientedImageDataResample - Utility functions for resampling\noriented image data\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOrientedImageDataResample_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkOrientedImageDataResample", // tp_name
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
  PyvtkOrientedImageDataResample_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOrientedImageDataResample_StaticNew()
{
  return vtkOrientedImageDataResample::New();
}

PyObject *PyvtkOrientedImageDataResample_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOrientedImageDataResample_Type, PyvtkOrientedImageDataResample_Methods,
    "vtkOrientedImageDataResample",
 &PyvtkOrientedImageDataResample_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "OPERATION_MINIMUM", vtkOrientedImageDataResample::OPERATION_MINIMUM },
        { "OPERATION_MAXIMUM", vtkOrientedImageDataResample::OPERATION_MAXIMUM },
        { "OPERATION_MASKING", vtkOrientedImageDataResample::OPERATION_MASKING },
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

void PyVTKAddFile_vtkOrientedImageDataResample(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOrientedImageDataResample_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOrientedImageDataResample", o) != 0)
  {
    Py_DECREF(o);
  }

}

