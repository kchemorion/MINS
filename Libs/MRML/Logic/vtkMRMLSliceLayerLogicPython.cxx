// python wrapper for vtkMRMLSliceLayerLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSliceLayerLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSliceLayerLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSliceLayerLogic_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractLogic_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractLogic_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractLogic_ClassNew
#endif

static PyObject *
PyvtkMRMLSliceLayerLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSliceLayerLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSliceLayerLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSliceLayerLogic *tempr = vtkMRMLSliceLayerLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceLayerLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSliceLayerLogic::NewInstance());

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
PyvtkMRMLSliceLayerLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSliceLayerLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSliceLayerLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_GetVolumeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumeNode *tempr = (ap.IsBound() ?
      op->GetVolumeNode() :
      op->vtkMRMLSliceLayerLogic::GetVolumeNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_SetVolumeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode"))
  {
    if (ap.IsBound())
    {
      op->SetVolumeNode(temp0);
    }
    else
    {
      op->vtkMRMLSliceLayerLogic::SetVolumeNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_GetVolumeDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumeDisplayNode *tempr = (ap.IsBound() ?
      op->GetVolumeDisplayNode() :
      op->vtkMRMLSliceLayerLogic::GetVolumeDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_GetVolumeDisplayNodeUVW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeDisplayNodeUVW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumeDisplayNode *tempr = (ap.IsBound() ?
      op->GetVolumeDisplayNodeUVW() :
      op->vtkMRMLSliceLayerLogic::GetVolumeDisplayNodeUVW());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_GetSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceNode *tempr = (ap.IsBound() ?
      op->GetSliceNode() :
      op->vtkMRMLSliceLayerLogic::GetSliceNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_SetSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  vtkMRMLSliceNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode"))
  {
    if (ap.IsBound())
    {
      op->SetSliceNode(temp0);
    }
    else
    {
      op->vtkMRMLSliceLayerLogic::SetSliceNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_GetReslice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReslice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageReslice *tempr = (ap.IsBound() ?
      op->GetReslice() :
      op->vtkMRMLSliceLayerLogic::GetReslice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_GetResliceUVW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceUVW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageReslice *tempr = (ap.IsBound() ?
      op->GetResliceUVW() :
      op->vtkMRMLSliceLayerLogic::GetResliceUVW());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_GetIsLabelLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsLabelLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIsLabelLayer() :
      op->vtkMRMLSliceLayerLogic::GetIsLabelLayer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_SetIsLabelLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsLabelLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsLabelLayer(temp0);
    }
    else
    {
      op->vtkMRMLSliceLayerLogic::SetIsLabelLayer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_IsLabelLayerOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLabelLayerOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IsLabelLayerOn();
    }
    else
    {
      op->vtkMRMLSliceLayerLogic::IsLabelLayerOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_IsLabelLayerOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLabelLayerOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IsLabelLayerOff();
    }
    else
    {
      op->vtkMRMLSliceLayerLogic::IsLabelLayerOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_GetLabelOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageLabelOutline *tempr = (ap.IsBound() ?
      op->GetLabelOutline() :
      op->vtkMRMLSliceLayerLogic::GetLabelOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_GetImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImageData() :
      op->vtkMRMLSliceLayerLogic::GetImageData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_GetImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetImageDataConnection() :
      op->vtkMRMLSliceLayerLogic::GetImageDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_GetImageDataUVW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDataUVW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImageDataUVW() :
      op->vtkMRMLSliceLayerLogic::GetImageDataUVW());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_GetImageDataConnectionUVW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDataConnectionUVW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetImageDataConnectionUVW() :
      op->vtkMRMLSliceLayerLogic::GetImageDataConnectionUVW());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_UpdateImageDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateImageDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateImageDisplay();
    }
    else
    {
      op->vtkMRMLSliceLayerLogic::UpdateImageDisplay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_UpdateTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateTransforms();
    }
    else
    {
      op->vtkMRMLSliceLayerLogic::UpdateTransforms();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_UpdateGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateGlyphs();
    }
    else
    {
      op->vtkMRMLSliceLayerLogic::UpdateGlyphs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_UpdateNodeReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateNodeReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateNodeReferences();
    }
    else
    {
      op->vtkMRMLSliceLayerLogic::UpdateNodeReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_GetXYToIJKTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYToIJKTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGeneralTransform *tempr = (ap.IsBound() ?
      op->GetXYToIJKTransform() :
      op->vtkMRMLSliceLayerLogic::GetXYToIJKTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_GetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationMode() :
      op->vtkMRMLSliceLayerLogic::GetInterpolationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLayerLogic_SetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLayerLogic *op = static_cast<vtkMRMLSliceLayerLogic *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationMode(temp0);
    }
    else
    {
      op->vtkMRMLSliceLayerLogic::SetInterpolationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSliceLayerLogic_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSliceLayerLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSliceLayerLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSliceLayerLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLSliceLayerLogic\nC++: static vtkMRMLSliceLayerLogic *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSliceLayerLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSliceLayerLogic\nC++: vtkMRMLSliceLayerLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSliceLayerLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSliceLayerLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetVolumeNode", PyvtkMRMLSliceLayerLogic_GetVolumeNode, METH_VARARGS,
   "GetVolumeNode(self) -> vtkMRMLVolumeNode\nC++: virtual vtkMRMLVolumeNode *GetVolumeNode()\n\nThe volume node to operate on\n"},
  {"SetVolumeNode", PyvtkMRMLSliceLayerLogic_SetVolumeNode, METH_VARARGS,
   "SetVolumeNode(self, VolumeNode:vtkMRMLVolumeNode) -> None\nC++: void SetVolumeNode(vtkMRMLVolumeNode *VolumeNode)\n\n"},
  {"GetVolumeDisplayNode", PyvtkMRMLSliceLayerLogic_GetVolumeDisplayNode, METH_VARARGS,
   "GetVolumeDisplayNode(self) -> vtkMRMLVolumeDisplayNode\nC++: virtual vtkMRMLVolumeDisplayNode *GetVolumeDisplayNode()\n\nThe volume display node has the render properties of the volume\n- this node is set implicitly when the volume is set and it is\n  observed by this logic\n"},
  {"GetVolumeDisplayNodeUVW", PyvtkMRMLSliceLayerLogic_GetVolumeDisplayNodeUVW, METH_VARARGS,
   "GetVolumeDisplayNodeUVW(self) -> vtkMRMLVolumeDisplayNode\nC++: virtual vtkMRMLVolumeDisplayNode *GetVolumeDisplayNodeUVW()\n\n"},
  {"GetSliceNode", PyvtkMRMLSliceLayerLogic_GetSliceNode, METH_VARARGS,
   "GetSliceNode(self) -> vtkMRMLSliceNode\nC++: virtual vtkMRMLSliceNode *GetSliceNode()\n\nThe slice node that defines the view\n"},
  {"SetSliceNode", PyvtkMRMLSliceLayerLogic_SetSliceNode, METH_VARARGS,
   "SetSliceNode(self, SliceNode:vtkMRMLSliceNode) -> None\nC++: void SetSliceNode(vtkMRMLSliceNode *SliceNode)\n\n"},
  {"GetReslice", PyvtkMRMLSliceLayerLogic_GetReslice, METH_VARARGS,
   "GetReslice(self) -> vtkImageReslice\nC++: virtual vtkImageReslice *GetReslice()\n\nThe image reslice or slice being used\n"},
  {"GetResliceUVW", PyvtkMRMLSliceLayerLogic_GetResliceUVW, METH_VARARGS,
   "GetResliceUVW(self) -> vtkImageReslice\nC++: virtual vtkImageReslice *GetResliceUVW()\n\n"},
  {"GetIsLabelLayer", PyvtkMRMLSliceLayerLogic_GetIsLabelLayer, METH_VARARGS,
   "GetIsLabelLayer(self) -> int\nC++: virtual int GetIsLabelLayer()\n\nSelect if this is a label layer or not (it currently determines\nif we use the label outline filter)\n"},
  {"SetIsLabelLayer", PyvtkMRMLSliceLayerLogic_SetIsLabelLayer, METH_VARARGS,
   "SetIsLabelLayer(self, _arg:int) -> None\nC++: virtual void SetIsLabelLayer(int _arg)\n\n"},
  {"IsLabelLayerOn", PyvtkMRMLSliceLayerLogic_IsLabelLayerOn, METH_VARARGS,
   "IsLabelLayerOn(self) -> None\nC++: virtual void IsLabelLayerOn()\n\n"},
  {"IsLabelLayerOff", PyvtkMRMLSliceLayerLogic_IsLabelLayerOff, METH_VARARGS,
   "IsLabelLayerOff(self) -> None\nC++: virtual void IsLabelLayerOff()\n\n"},
  {"GetLabelOutline", PyvtkMRMLSliceLayerLogic_GetLabelOutline, METH_VARARGS,
   "GetLabelOutline(self) -> vtkImageLabelOutline\nC++: virtual vtkImageLabelOutline *GetLabelOutline()\n\nThe filter that turns the label map into an outline\n"},
  {"GetImageData", PyvtkMRMLSliceLayerLogic_GetImageData, METH_VARARGS,
   "GetImageData(self) -> vtkImageData\nC++: vtkImageData *GetImageData()\n\nGet the output of the pipeline for this layer\n"},
  {"GetImageDataConnection", PyvtkMRMLSliceLayerLogic_GetImageDataConnection, METH_VARARGS,
   "GetImageDataConnection(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetImageDataConnection()\n\n"},
  {"GetImageDataUVW", PyvtkMRMLSliceLayerLogic_GetImageDataUVW, METH_VARARGS,
   "GetImageDataUVW(self) -> vtkImageData\nC++: vtkImageData *GetImageDataUVW()\n\nGet the output of the texture UVW pipeline for this layer\n"},
  {"GetImageDataConnectionUVW", PyvtkMRMLSliceLayerLogic_GetImageDataConnectionUVW, METH_VARARGS,
   "GetImageDataConnectionUVW(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetImageDataConnectionUVW()\n\n"},
  {"UpdateImageDisplay", PyvtkMRMLSliceLayerLogic_UpdateImageDisplay, METH_VARARGS,
   "UpdateImageDisplay(self) -> None\nC++: void UpdateImageDisplay()\n\n"},
  {"UpdateTransforms", PyvtkMRMLSliceLayerLogic_UpdateTransforms, METH_VARARGS,
   "UpdateTransforms(self) -> None\nC++: void UpdateTransforms()\n\nset the Reslice transforms to reflect the current state of the\nVolumeNode and the SliceNode\n"},
  {"UpdateGlyphs", PyvtkMRMLSliceLayerLogic_UpdateGlyphs, METH_VARARGS,
   "UpdateGlyphs(self) -> None\nC++: void UpdateGlyphs()\n\n"},
  {"UpdateNodeReferences", PyvtkMRMLSliceLayerLogic_UpdateNodeReferences, METH_VARARGS,
   "UpdateNodeReferences(self) -> None\nC++: void UpdateNodeReferences()\n\nCheck that we are observing the correct display node (correct\nmeans the same one that the volume node is referencing)\n"},
  {"GetXYToIJKTransform", PyvtkMRMLSliceLayerLogic_GetXYToIJKTransform, METH_VARARGS,
   "GetXYToIJKTransform(self) -> vtkGeneralTransform\nC++: virtual vtkGeneralTransform *GetXYToIJKTransform()\n\nThe current reslice transform XYToIJK\n"},
  {"GetInterpolationMode", PyvtkMRMLSliceLayerLogic_GetInterpolationMode, METH_VARARGS,
   "GetInterpolationMode(self) -> int\nC++: virtual int GetInterpolationMode()\n\nGet/set interpolation mode used in image reslice (when\ninterpolation is enabled). By default it uses VTK_RESLICE_LINEAR\nand can be set to VTK_RESLICE_CUBIC for higher quality\ninterpolation.\n"},
  {"SetInterpolationMode", PyvtkMRMLSliceLayerLogic_SetInterpolationMode, METH_VARARGS,
   "SetInterpolationMode(self, _arg:int) -> None\nC++: virtual void SetInterpolationMode(int _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSliceLayerLogic_Doc =
  "vtkMRMLSliceLayerLogic - no description provided.\n\n"
  "Superclass: vtkMRMLAbstractLogic\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceLayerLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLLogicPython.vtkMRMLSliceLayerLogic", // tp_name
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
  PyvtkMRMLSliceLayerLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSliceLayerLogic_StaticNew()
{
  return vtkMRMLSliceLayerLogic::New();
}

PyObject *PyvtkMRMLSliceLayerLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSliceLayerLogic_Type, PyvtkMRMLSliceLayerLogic_Methods,
    "vtkMRMLSliceLayerLogic",
 &PyvtkMRMLSliceLayerLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractLogic_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLSliceLayerLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSliceLayerLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSliceLayerLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

