// python wrapper for vtkMRMLDiffusionTensorVolumeDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLDiffusionTensorVolumeDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLDiffusionTensorVolumeDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLDiffusionTensorVolumeDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLGlyphableVolumeDisplayNode_ClassNew
extern "C" { PyObject *PyvtkMRMLGlyphableVolumeDisplayNode_ClassNew(); }
#define DECLARED_PyvtkMRMLGlyphableVolumeDisplayNode_ClassNew
#endif

static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLDiffusionTensorVolumeDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLDiffusionTensorVolumeDisplayNode *tempr = vtkMRMLDiffusionTensorVolumeDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDiffusionTensorVolumeDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::NewInstance());

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
PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLDiffusionTensorVolumeDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_UpdateReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateReferences();
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::UpdateReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->UpdateScene(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_UpdateReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateReferenceID(temp0, temp1);
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::UpdateReferenceID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    if (ap.IsBound())
    {
      op->ProcessMRMLEvents(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::ProcessMRMLEvents(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetScalarInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarInvariant() :
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::GetScalarInvariant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_SetScalarInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarInvariant(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::SetScalarInvariant(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_SetScalarInvariantToTrace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarInvariantToTrace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarInvariantToTrace();
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::SetScalarInvariantToTrace();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_SetScalarInvariantToRelativeAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarInvariantToRelativeAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarInvariantToRelativeAnisotropy();
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::SetScalarInvariantToRelativeAnisotropy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_SetScalarInvariantToFractionalAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarInvariantToFractionalAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarInvariantToFractionalAnisotropy();
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::SetScalarInvariantToFractionalAnisotropy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_SetScalarInvariantToLinearMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarInvariantToLinearMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarInvariantToLinearMeasure();
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::SetScalarInvariantToLinearMeasure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_SetScalarInvariantToPlanarMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarInvariantToPlanarMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarInvariantToPlanarMeasure();
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::SetScalarInvariantToPlanarMeasure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_SetScalarInvariantToSphericalMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarInvariantToSphericalMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarInvariantToSphericalMeasure();
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::SetScalarInvariantToSphericalMeasure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetScalarInvariantAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarInvariantAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarInvariantAsString() :
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::GetScalarInvariantAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetInputImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInputImageDataConnection() :
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::GetInputImageDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetBackgroundImageStencilDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundImageStencilDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetBackgroundImageStencilDataConnection() :
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::GetBackgroundImageStencilDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_UpdateImageDataPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateImageDataPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateImageDataPipeline();
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::UpdateImageDataPipeline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_SetTensorRotationMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorRotationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

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
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::SetTensorRotationMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetDTIMathematics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDTIMathematics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDiffusionTensorMathematics *tempr = (ap.IsBound() ?
      op->GetDTIMathematics() :
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::GetDTIMathematics());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetDTIMathematicsAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDTIMathematicsAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDiffusionTensorMathematics *tempr = (ap.IsBound() ?
      op->GetDTIMathematicsAlpha() :
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::GetDTIMathematicsAlpha());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetShiftScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShiftScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageShiftScale *tempr = (ap.IsBound() ?
      op->GetShiftScale() :
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::GetShiftScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_AddSliceGlyphDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSliceGlyphDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode"))
  {
    if (ap.IsBound())
    {
      op->AddSliceGlyphDisplayNodes(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::AddSliceGlyphDisplayNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetDisplayScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeDisplayNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDisplayScalarRange(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeDisplayNode::GetDisplayScalarRange(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetNumberOfScalarInvariants(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfScalarInvariants");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMRMLDiffusionTensorVolumeDisplayNode::GetNumberOfScalarInvariants();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetNthScalarInvariant(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNthScalarInvariant");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLDiffusionTensorVolumeDisplayNode::GetNthScalarInvariant(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLDiffusionTensorVolumeDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLDiffusionTensorVolumeDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLDiffusionTensorVolumeDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLDiffusionTensorVolumeDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLDiffusionTensorVolumeDisplayNode\nC++: static vtkMRMLDiffusionTensorVolumeDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLDiffusionTensorVolumeDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLDiffusionTensorVolumeDisplayNode\nC++: vtkMRMLDiffusionTensorVolumeDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLDiffusionTensorVolumeDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"Copy", PyvtkMRMLDiffusionTensorVolumeDisplayNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"UpdateReferences", PyvtkMRMLDiffusionTensorVolumeDisplayNode_UpdateReferences, METH_VARARGS,
   "UpdateReferences(self) -> None\nC++: void UpdateReferences() override;\n\nUpdates this node if it depends on other nodes when the node is\ndeleted in the scene\n"},
  {"UpdateScene", PyvtkMRMLDiffusionTensorVolumeDisplayNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data\n"},
  {"UpdateReferenceID", PyvtkMRMLDiffusionTensorVolumeDisplayNode_UpdateReferenceID, METH_VARARGS,
   "UpdateReferenceID(self, oldID:str, newID:str) -> None\nC++: void UpdateReferenceID(const char *oldID, const char *newID)\n    override;\n\nUpdate the stored reference to another node in the scene\n"},
  {"ProcessMRMLEvents", PyvtkMRMLDiffusionTensorVolumeDisplayNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"GetScalarInvariant", PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetScalarInvariant, METH_VARARGS,
   "GetScalarInvariant(self) -> int\nC++: virtual int GetScalarInvariant()\n\nDisplay Information MRML nodes that are observed\n\nGet type of scalar invariant (tensor-derived scalar, invariant to\ntensor rotation) selected for display.\n"},
  {"SetScalarInvariant", PyvtkMRMLDiffusionTensorVolumeDisplayNode_SetScalarInvariant, METH_VARARGS,
   "SetScalarInvariant(self, _arg:int) -> None\nC++: virtual void SetScalarInvariant(int _arg)\n\nGet type of scalar invariant (tensor-derived scalar, invariant to\ntensor rotation) selected for display.\n"},
  {"SetScalarInvariantToTrace", PyvtkMRMLDiffusionTensorVolumeDisplayNode_SetScalarInvariantToTrace, METH_VARARGS,
   "SetScalarInvariantToTrace(self) -> None\nC++: void SetScalarInvariantToTrace()\n\nSet scalar invariant to trace (sum of eigenvalues).\n"},
  {"SetScalarInvariantToRelativeAnisotropy", PyvtkMRMLDiffusionTensorVolumeDisplayNode_SetScalarInvariantToRelativeAnisotropy, METH_VARARGS,
   "SetScalarInvariantToRelativeAnisotropy(self) -> None\nC++: void SetScalarInvariantToRelativeAnisotropy()\n\nSet scalar invariant to relative anisotropy\n"},
  {"SetScalarInvariantToFractionalAnisotropy", PyvtkMRMLDiffusionTensorVolumeDisplayNode_SetScalarInvariantToFractionalAnisotropy, METH_VARARGS,
   "SetScalarInvariantToFractionalAnisotropy(self) -> None\nC++: void SetScalarInvariantToFractionalAnisotropy()\n\nSet scalar invariant to FA (normalized variance of eigenvalues)\n"},
  {"SetScalarInvariantToLinearMeasure", PyvtkMRMLDiffusionTensorVolumeDisplayNode_SetScalarInvariantToLinearMeasure, METH_VARARGS,
   "SetScalarInvariantToLinearMeasure(self) -> None\nC++: void SetScalarInvariantToLinearMeasure()\n\nSet scalar invariant to C_L (Westin's linear measure)\n"},
  {"SetScalarInvariantToPlanarMeasure", PyvtkMRMLDiffusionTensorVolumeDisplayNode_SetScalarInvariantToPlanarMeasure, METH_VARARGS,
   "SetScalarInvariantToPlanarMeasure(self) -> None\nC++: void SetScalarInvariantToPlanarMeasure()\n\nSet scalar invariant to C_P (Westin's planar measure)\n"},
  {"SetScalarInvariantToSphericalMeasure", PyvtkMRMLDiffusionTensorVolumeDisplayNode_SetScalarInvariantToSphericalMeasure, METH_VARARGS,
   "SetScalarInvariantToSphericalMeasure(self) -> None\nC++: void SetScalarInvariantToSphericalMeasure()\n\nSet scalar invariant to C_S (Westin's spherical measure)\n"},
  {"GetScalarInvariantAsString", PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetScalarInvariantAsString, METH_VARARGS,
   "GetScalarInvariantAsString(self) -> str\nC++: virtual const char *GetScalarInvariantAsString()\n\nReturn a text string describing the ScalarInvariant variable\n"},
  {"GetInputImageDataConnection", PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetInputImageDataConnection, METH_VARARGS,
   "GetInputImageDataConnection(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetInputImageDataConnection() override;\n\nGet the input of the pipeline\n"},
  {"GetBackgroundImageStencilDataConnection", PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetBackgroundImageStencilDataConnection, METH_VARARGS,
   "GetBackgroundImageStencilDataConnection(self)\n    -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetBackgroundImageStencilDataConnection()\n     override;\n\nGet background mask stencil Reimplemented to return 0 when the\nbackground mask is not used.\n"},
  {"UpdateImageDataPipeline", PyvtkMRMLDiffusionTensorVolumeDisplayNode_UpdateImageDataPipeline, METH_VARARGS,
   "UpdateImageDataPipeline(self) -> None\nC++: void UpdateImageDataPipeline() override;\n\nUpdate the pipeline based on this node attributes\n"},
  {"SetTensorRotationMatrix", PyvtkMRMLDiffusionTensorVolumeDisplayNode_SetTensorRotationMatrix, METH_VARARGS,
   "SetTensorRotationMatrix(self, __a:vtkMatrix4x4) -> None\nC++: void SetTensorRotationMatrix(vtkMatrix4x4 *)\n\nSet the measurement frame for the tensors so that any\nrotation-dependent calculations, such as ColorByOrientation can\ntake it into account when rendering.\n"},
  {"GetDTIMathematics", PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetDTIMathematics, METH_VARARGS,
   "GetDTIMathematics(self) -> vtkDiffusionTensorMathematics\nC++: virtual vtkDiffusionTensorMathematics *GetDTIMathematics()\n\n"},
  {"GetDTIMathematicsAlpha", PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetDTIMathematicsAlpha, METH_VARARGS,
   "GetDTIMathematicsAlpha(self) -> vtkDiffusionTensorMathematics\nC++: virtual vtkDiffusionTensorMathematics *GetDTIMathematicsAlpha(\n    )\n\n"},
  {"GetShiftScale", PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetShiftScale, METH_VARARGS,
   "GetShiftScale(self) -> vtkImageShiftScale\nC++: virtual vtkImageShiftScale *GetShiftScale()\n\n"},
  {"AddSliceGlyphDisplayNodes", PyvtkMRMLDiffusionTensorVolumeDisplayNode_AddSliceGlyphDisplayNodes, METH_VARARGS,
   "AddSliceGlyphDisplayNodes(self, node:vtkMRMLVolumeNode) -> None\nC++: void AddSliceGlyphDisplayNodes(vtkMRMLVolumeNode *node)\n    override;\n\nadd slice glyph display nodes if not already present and return\nit\n"},
  {"GetDisplayScalarRange", PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetDisplayScalarRange, METH_VARARGS,
   "GetDisplayScalarRange(self, range:[float, float]) -> None\nC++: void GetDisplayScalarRange(double range[2]) override;\n\nDefines the expected range of the output data for given imageData\nafter having been mapped through the current display options\n"},
  {"GetNumberOfScalarInvariants", PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetNumberOfScalarInvariants, METH_VARARGS,
   "GetNumberOfScalarInvariants() -> int\nC++: static int GetNumberOfScalarInvariants()\n\n"},
  {"GetNthScalarInvariant", PyvtkMRMLDiffusionTensorVolumeDisplayNode_GetNthScalarInvariant, METH_VARARGS,
   "GetNthScalarInvariant(i:int) -> int\nC++: static int GetNthScalarInvariant(int i)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLDiffusionTensorVolumeDisplayNode_Doc =
  "vtkMRMLDiffusionTensorVolumeDisplayNode - MRML node for representing\na volume (image stack).\n\n"
  "Superclass: vtkMRMLGlyphableVolumeDisplayNode\n\n"
  "Volume nodes describe data sets that can be thought of as stacks of\n"
  "2D images that form a 3D volume.  Volume nodes describe where the\n"
  "images are stored on disk, how to render the data (window and level),\n"
  "and how to read the files.  This information is extracted from the\n"
  "image headers (if they exist) at the time the MRML file is generated.\n"
  "Consequently, MRML files isolate MRML browsers from understanding how\n"
  "to read the myriad of file formats for medical data.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLDiffusionTensorVolumeDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLDiffusionTensorVolumeDisplayNode", // tp_name
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
  PyvtkMRMLDiffusionTensorVolumeDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLDiffusionTensorVolumeDisplayNode_StaticNew()
{
  return vtkMRMLDiffusionTensorVolumeDisplayNode::New();
}

PyObject *PyvtkMRMLDiffusionTensorVolumeDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLDiffusionTensorVolumeDisplayNode_Type, PyvtkMRMLDiffusionTensorVolumeDisplayNode_Methods,
    "vtkMRMLDiffusionTensorVolumeDisplayNode",
 &PyvtkMRMLDiffusionTensorVolumeDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLGlyphableVolumeDisplayNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLDiffusionTensorVolumeDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLDiffusionTensorVolumeDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLDiffusionTensorVolumeDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

