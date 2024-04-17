// python wrapper for vtkDiffusionTensorGlyph
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDiffusionTensorGlyph.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDiffusionTensorGlyph(PyObject *dict); }
extern "C" { PyObject *PyvtkDiffusionTensorGlyph_ClassNew(); }


static PyObject *
PyvtkDiffusionTensorGlyph_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDiffusionTensorGlyph::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDiffusionTensorGlyph::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDiffusionTensorGlyph *tempr = vtkDiffusionTensorGlyph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDiffusionTensorGlyph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDiffusionTensorGlyph::NewInstance());

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
PyvtkDiffusionTensorGlyph_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDiffusionTensorGlyph::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDiffusionTensorGlyph::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_MaskGlyphsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskGlyphsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaskGlyphsOn();
    }
    else
    {
      op->vtkDiffusionTensorGlyph::MaskGlyphsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_MaskGlyphsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskGlyphsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaskGlyphsOff();
    }
    else
    {
      op->vtkDiffusionTensorGlyph::MaskGlyphsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_SetMaskGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskGlyphs(temp0);
    }
    else
    {
      op->vtkDiffusionTensorGlyph::SetMaskGlyphs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_GetMaskGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaskGlyphs() :
      op->vtkDiffusionTensorGlyph::GetMaskGlyphs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_SetMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetMask(temp0);
    }
    else
    {
      op->vtkDiffusionTensorGlyph::SetMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_ColorGlyphsByLinearMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphsByLinearMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGlyphsByLinearMeasure();
    }
    else
    {
      op->vtkDiffusionTensorGlyph::ColorGlyphsByLinearMeasure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_ColorGlyphsBySphericalMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphsBySphericalMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGlyphsBySphericalMeasure();
    }
    else
    {
      op->vtkDiffusionTensorGlyph::ColorGlyphsBySphericalMeasure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_ColorGlyphsByPlanarMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphsByPlanarMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGlyphsByPlanarMeasure();
    }
    else
    {
      op->vtkDiffusionTensorGlyph::ColorGlyphsByPlanarMeasure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_ColorGlyphsByParallelDiffusivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphsByParallelDiffusivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGlyphsByParallelDiffusivity();
    }
    else
    {
      op->vtkDiffusionTensorGlyph::ColorGlyphsByParallelDiffusivity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_ColorGlyphsByPerpendicularDiffusivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphsByPerpendicularDiffusivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGlyphsByPerpendicularDiffusivity();
    }
    else
    {
      op->vtkDiffusionTensorGlyph::ColorGlyphsByPerpendicularDiffusivity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_ColorGlyphsByMaxEigenvalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphsByMaxEigenvalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGlyphsByMaxEigenvalue();
    }
    else
    {
      op->vtkDiffusionTensorGlyph::ColorGlyphsByMaxEigenvalue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_ColorGlyphsByMidEigenvalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphsByMidEigenvalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGlyphsByMidEigenvalue();
    }
    else
    {
      op->vtkDiffusionTensorGlyph::ColorGlyphsByMidEigenvalue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_ColorGlyphsByMinEigenvalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphsByMinEigenvalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGlyphsByMinEigenvalue();
    }
    else
    {
      op->vtkDiffusionTensorGlyph::ColorGlyphsByMinEigenvalue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_ColorGlyphsByRelativeAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphsByRelativeAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGlyphsByRelativeAnisotropy();
    }
    else
    {
      op->vtkDiffusionTensorGlyph::ColorGlyphsByRelativeAnisotropy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_ColorGlyphsByFractionalAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphsByFractionalAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGlyphsByFractionalAnisotropy();
    }
    else
    {
      op->vtkDiffusionTensorGlyph::ColorGlyphsByFractionalAnisotropy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_ColorGlyphsByTrace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphsByTrace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGlyphsByTrace();
    }
    else
    {
      op->vtkDiffusionTensorGlyph::ColorGlyphsByTrace();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_ColorGlyphsByOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphsByOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGlyphsByOrientation();
    }
    else
    {
      op->vtkDiffusionTensorGlyph::ColorGlyphsByOrientation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_SetVolumePositionMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumePositionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetVolumePositionMatrix(temp0);
    }
    else
    {
      op->vtkDiffusionTensorGlyph::SetVolumePositionMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_GetVolumePositionMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumePositionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetVolumePositionMatrix() :
      op->vtkDiffusionTensorGlyph::GetVolumePositionMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_SetTensorRotationMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorRotationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetTensorRotationMatrix(temp0);
    }
    else
    {
      op->vtkDiffusionTensorGlyph::SetTensorRotationMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_GetTensorRotationMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorRotationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetTensorRotationMatrix() :
      op->vtkDiffusionTensorGlyph::GetTensorRotationMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkDiffusionTensorGlyph::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkDiffusionTensorGlyph::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkDiffusionTensorGlyph::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkDiffusionTensorGlyph::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_GetDimensionResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDimensionResolution() :
      op->vtkDiffusionTensorGlyph::GetDimensionResolution());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDiffusionTensorGlyph_SetDimensionResolution_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDimensionResolution(temp0, temp1);
    }
    else
    {
      op->vtkDiffusionTensorGlyph::SetDimensionResolution(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDiffusionTensorGlyph_SetDimensionResolution_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDimensionResolution(temp0);
    }
    else
    {
      op->vtkDiffusionTensorGlyph::SetDimensionResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDiffusionTensorGlyph_SetDimensionResolution(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDiffusionTensorGlyph_SetDimensionResolution_s1(self, args);
    case 1:
      return PyvtkDiffusionTensorGlyph_SetDimensionResolution_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensionResolution");
  return nullptr;
}


static PyObject *
PyvtkDiffusionTensorGlyph_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiffusionTensorGlyph *op = static_cast<vtkDiffusionTensorGlyph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDiffusionTensorGlyph::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDiffusionTensorGlyph_Methods[] = {
  {"IsTypeOf", PyvtkDiffusionTensorGlyph_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDiffusionTensorGlyph_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDiffusionTensorGlyph_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDiffusionTensorGlyph\nC++: static vtkDiffusionTensorGlyph *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDiffusionTensorGlyph_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDiffusionTensorGlyph\nC++: vtkDiffusionTensorGlyph *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDiffusionTensorGlyph_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDiffusionTensorGlyph_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"MaskGlyphsOn", PyvtkDiffusionTensorGlyph_MaskGlyphsOn, METH_VARARGS,
   "MaskGlyphsOn(self) -> None\nC++: virtual void MaskGlyphsOn()\n\nIf MaskGlyphs is 1 (On), Mask is used to mask tensors.\n"},
  {"MaskGlyphsOff", PyvtkDiffusionTensorGlyph_MaskGlyphsOff, METH_VARARGS,
   "MaskGlyphsOff(self) -> None\nC++: virtual void MaskGlyphsOff()\n\n"},
  {"SetMaskGlyphs", PyvtkDiffusionTensorGlyph_SetMaskGlyphs, METH_VARARGS,
   "SetMaskGlyphs(self, _arg:int) -> None\nC++: virtual void SetMaskGlyphs(int _arg)\n\n"},
  {"GetMaskGlyphs", PyvtkDiffusionTensorGlyph_GetMaskGlyphs, METH_VARARGS,
   "GetMaskGlyphs(self) -> int\nC++: virtual int GetMaskGlyphs()\n\n"},
  {"SetMask", PyvtkDiffusionTensorGlyph_SetMask, METH_VARARGS,
   "SetMask(self, __a:vtkImageData) -> None\nC++: virtual void SetMask(vtkImageData *)\n\nInput scalars are a binary mask: 0 prevents display of polydata\nat that point\n"},
  {"ColorGlyphsByLinearMeasure", PyvtkDiffusionTensorGlyph_ColorGlyphsByLinearMeasure, METH_VARARGS,
   "ColorGlyphsByLinearMeasure(self) -> None\nC++: void ColorGlyphsByLinearMeasure()\n\nTO DO: make more of these\n\nOutput one component scalars according to scalar invariants\n"},
  {"ColorGlyphsBySphericalMeasure", PyvtkDiffusionTensorGlyph_ColorGlyphsBySphericalMeasure, METH_VARARGS,
   "ColorGlyphsBySphericalMeasure(self) -> None\nC++: void ColorGlyphsBySphericalMeasure()\n\n"},
  {"ColorGlyphsByPlanarMeasure", PyvtkDiffusionTensorGlyph_ColorGlyphsByPlanarMeasure, METH_VARARGS,
   "ColorGlyphsByPlanarMeasure(self) -> None\nC++: void ColorGlyphsByPlanarMeasure()\n\n"},
  {"ColorGlyphsByParallelDiffusivity", PyvtkDiffusionTensorGlyph_ColorGlyphsByParallelDiffusivity, METH_VARARGS,
   "ColorGlyphsByParallelDiffusivity(self) -> None\nC++: void ColorGlyphsByParallelDiffusivity()\n\n"},
  {"ColorGlyphsByPerpendicularDiffusivity", PyvtkDiffusionTensorGlyph_ColorGlyphsByPerpendicularDiffusivity, METH_VARARGS,
   "ColorGlyphsByPerpendicularDiffusivity(self) -> None\nC++: void ColorGlyphsByPerpendicularDiffusivity()\n\n"},
  {"ColorGlyphsByMaxEigenvalue", PyvtkDiffusionTensorGlyph_ColorGlyphsByMaxEigenvalue, METH_VARARGS,
   "ColorGlyphsByMaxEigenvalue(self) -> None\nC++: void ColorGlyphsByMaxEigenvalue()\n\n"},
  {"ColorGlyphsByMidEigenvalue", PyvtkDiffusionTensorGlyph_ColorGlyphsByMidEigenvalue, METH_VARARGS,
   "ColorGlyphsByMidEigenvalue(self) -> None\nC++: void ColorGlyphsByMidEigenvalue()\n\n"},
  {"ColorGlyphsByMinEigenvalue", PyvtkDiffusionTensorGlyph_ColorGlyphsByMinEigenvalue, METH_VARARGS,
   "ColorGlyphsByMinEigenvalue(self) -> None\nC++: void ColorGlyphsByMinEigenvalue()\n\n"},
  {"ColorGlyphsByRelativeAnisotropy", PyvtkDiffusionTensorGlyph_ColorGlyphsByRelativeAnisotropy, METH_VARARGS,
   "ColorGlyphsByRelativeAnisotropy(self) -> None\nC++: void ColorGlyphsByRelativeAnisotropy()\n\n"},
  {"ColorGlyphsByFractionalAnisotropy", PyvtkDiffusionTensorGlyph_ColorGlyphsByFractionalAnisotropy, METH_VARARGS,
   "ColorGlyphsByFractionalAnisotropy(self) -> None\nC++: void ColorGlyphsByFractionalAnisotropy()\n\n"},
  {"ColorGlyphsByTrace", PyvtkDiffusionTensorGlyph_ColorGlyphsByTrace, METH_VARARGS,
   "ColorGlyphsByTrace(self) -> None\nC++: void ColorGlyphsByTrace()\n\n"},
  {"ColorGlyphsByOrientation", PyvtkDiffusionTensorGlyph_ColorGlyphsByOrientation, METH_VARARGS,
   "ColorGlyphsByOrientation(self) -> None\nC++: void ColorGlyphsByOrientation()\n\nOutput R,G,B scalars according to orientation of max eigenvalue\n"},
  {"SetVolumePositionMatrix", PyvtkDiffusionTensorGlyph_SetVolumePositionMatrix, METH_VARARGS,
   "SetVolumePositionMatrix(self, __a:vtkMatrix4x4) -> None\nC++: virtual void SetVolumePositionMatrix(vtkMatrix4x4 *)\n\nDescription Transform output glyph locations (not orientations!)\nby this matrix. Example usage is as follows:\n1) Reformat a slice through a tensor volume.\n2) Set VolumePositionMatrix to the reformat matrix. This is\n   analogous to setting the actor's UserMatrix to this matrix,\n   which only works for scalar data.\n3) The output glyphs are positioned correctly without incorrectly\nrotating the tensors, as would be the case if positioning the\n   scene's actor with this matrix.\n"},
  {"GetVolumePositionMatrix", PyvtkDiffusionTensorGlyph_GetVolumePositionMatrix, METH_VARARGS,
   "GetVolumePositionMatrix(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetVolumePositionMatrix()\n\n"},
  {"SetTensorRotationMatrix", PyvtkDiffusionTensorGlyph_SetTensorRotationMatrix, METH_VARARGS,
   "SetTensorRotationMatrix(self, __a:vtkMatrix4x4) -> None\nC++: virtual void SetTensorRotationMatrix(vtkMatrix4x4 *)\n\nDescription Transform output glyph orientations by this matrix.\nExample usage is as follows:\n1) If tensors are to be displayed in a coordinate system that is\n   not IJK (array-based), and the whole volume is being rotated,\n   each tensor needs also to be rotated. First find the matrix\n   that positions your volume. This is how the entire volume is\n   positioned, not the matrix that positions an arbitrary\n   reformatted slice.\n2) Remove scaling and translation from this matrix; we just need\n   to rotate each tensor.\n3) Set TensorRotationMatrix to this rotation matrix.\n"},
  {"GetTensorRotationMatrix", PyvtkDiffusionTensorGlyph_GetTensorRotationMatrix, METH_VARARGS,
   "GetTensorRotationMatrix(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetTensorRotationMatrix()\n\n"},
  {"SetResolution", PyvtkDiffusionTensorGlyph_SetResolution, METH_VARARGS,
   "SetResolution(self, _arg:int) -> None\nC++: virtual void SetResolution(int _arg)\n\nResolution of the output glyphs. This parameter is a integer\nvalue that sets the number of tensors (points) that are skipped\nbefore a glyph is rendered. 1 is the finest level meaning that\nevery input point a glyph is rendered.\n"},
  {"GetResolutionMinValue", PyvtkDiffusionTensorGlyph_GetResolutionMinValue, METH_VARARGS,
   "GetResolutionMinValue(self) -> int\nC++: virtual int GetResolutionMinValue()\n\n"},
  {"GetResolutionMaxValue", PyvtkDiffusionTensorGlyph_GetResolutionMaxValue, METH_VARARGS,
   "GetResolutionMaxValue(self) -> int\nC++: virtual int GetResolutionMaxValue()\n\n"},
  {"GetResolution", PyvtkDiffusionTensorGlyph_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: virtual int GetResolution()\n\n"},
  {"GetDimensionResolution", PyvtkDiffusionTensorGlyph_GetDimensionResolution, METH_VARARGS,
   "GetDimensionResolution(self) -> (int, int)\nC++: virtual int *GetDimensionResolution()\n\nResolution of the output glyphs in each dimension. It is used\nonly if Dimensions is set > 1 . This parameter is a integer value\nthat sets the number of tensors (points) that are skipped before\na glyph is rendered. 1 is the finest level meaning that every\ninput point a glyph is rendered.\n"},
  {"SetDimensionResolution", PyvtkDiffusionTensorGlyph_SetDimensionResolution, METH_VARARGS,
   "SetDimensionResolution(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetDimensionResolution(int _arg1, int _arg2)\nSetDimensionResolution(self, _arg:(int, int)) -> None\nC++: void SetDimensionResolution(const int _arg[2])\n\n"},
  {"GetMTime", PyvtkDiffusionTensorGlyph_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nWhen determining the modified time of the filter, this checks the\nmodified time of the mask input, if it exists.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDiffusionTensorGlyph_Doc =
  "vtkDiffusionTensorGlyph - scale and orient glyph(s) according to\ntensor eigenvalues and eigenvectors.\n\n"
  "Superclass: vtkTensorGlyph\n\n"
  "vtkDiffusionTensorGlyph is a filter that copies a geometric\n"
  "representation (specified as polygonal data) to every input point.\n"
  "The geometric representation, or glyph, can be scaled and/or rotated\n"
  "according to the tensor at the input point. Scaling and rotation is\n"
  "controlled by the eigenvalues/eigenvectors of the tensor as follows.\n"
  "For each tensor, the eigenvalues (and associated eigenvectors) are\n"
  "sorted to determine the major, medium, and minor\n"
  "eigenvalues/eigenvectors. The major eigenvalue scales the glyph in\n"
  "the x-direction, the medium in the y-direction, and the minor in the\n"
  "z-direction. Then, the glyph is rotated so that the glyph's local\n"
  "x-axis lies along the major eigenvector, y-axis along the medium\n"
  "eigenvector, and z-axis along the minor.\n\n"
  "A scale factor is provided to control the amount of scaling. Also,\n"
  "you can turn off scaling completely if desired. The boolean variable\n"
  "ClampScaling controls the maximum scaling (in conjunction with\n"
  "MaxScaleFactor.) This is useful in certain applications where\n"
  "singularities or large order of magnitude differences exist in the\n"
  "eigenvalues.\n\n"
  "Another instance variable, ExtractEigenvalues, has been provided to\n"
  "control extraction of eigenvalues/eigenvectors. If this boolean is\n"
  "false, then eigenvalues/eigenvectors are not extracted, and the\n"
  "columns of the tensor are taken as the eigenvectors (norm of column\n"
  "is eigenvalue). This allows additional capability over the vtkGlyph3D\n"
  "object. That is, the glyph can be oriented in three directions\n"
  "instead of one.\n\n"
  "To accommodate display in another coordinate system besides the ijk\n"
  "coordinate system of the volume array, two matrices are provided. The\n"
  "VolumePosition matrix positions each tensor in the correct location\n"
  "to account for voxel translation and rotation of the volume. (Scaling\n"
  "is already handled well in vtk ImageData.) The TensorRotationMatrix\n"
  "rotates each tensor into the new coordinate system.\n\n"
  "Types of scalars that may be generated from tensors for coloring are\n"
  "defined in vtkDiffusionTensorMathematics.h.  If the ColorMode is set\n"
  "to Eigenvalues, then glyphs are colored according to a function of\n"
  "the eigenvalues.  These functions are scalar invariants of the\n"
  "diffusion tensor.  They are selected by calling\n"
  "ColorGlyphsByFractionalAnisotropy, etc.\n\n"
  "\\sa vtkTensorGlyph\n"
  "\\sa vtkDiffusionTensorMathematics\n"
  "\\sa vtkSuperquadricTensorGlyph\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDiffusionTensorGlyph_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkTeemPython.vtkDiffusionTensorGlyph", // tp_name
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
  PyvtkDiffusionTensorGlyph_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDiffusionTensorGlyph_StaticNew()
{
  return vtkDiffusionTensorGlyph::New();
}

PyObject *PyvtkDiffusionTensorGlyph_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDiffusionTensorGlyph_Type, PyvtkDiffusionTensorGlyph_Methods,
    "vtkDiffusionTensorGlyph",
 &PyvtkDiffusionTensorGlyph_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTensorGlyph");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDiffusionTensorGlyph(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDiffusionTensorGlyph_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDiffusionTensorGlyph", o) != 0)
  {
    Py_DECREF(o);
  }

}

