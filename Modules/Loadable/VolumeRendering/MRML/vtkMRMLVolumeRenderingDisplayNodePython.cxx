// python wrapper for vtkMRMLVolumeRenderingDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLVolumeRenderingDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLVolumeRenderingDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLVolumeRenderingDisplayNode_ClassNew(); }


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLVolumeRenderingDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLVolumeRenderingDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLVolumeRenderingDisplayNode *tempr = vtkMRMLVolumeRenderingDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumeRenderingDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLVolumeRenderingDisplayNode::NewInstance());

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
PyvtkMRMLVolumeRenderingDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLVolumeRenderingDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLVolumeRenderingDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

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
      op->vtkMRMLVolumeRenderingDisplayNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetVolumeNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVolumeNodeID() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetVolumeNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetVolumeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumeNode *tempr = (ap.IsBound() ?
      op->GetVolumeNode() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetVolumeNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetVolumePropertyNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumePropertyNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVolumePropertyNodeID() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetVolumePropertyNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_SetAndObserveVolumePropertyNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveVolumePropertyNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveVolumePropertyNodeID(temp0);
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayNode::SetAndObserveVolumePropertyNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetVolumePropertyNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumePropertyNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumePropertyNode *tempr = (ap.IsBound() ?
      op->GetVolumePropertyNode() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetVolumePropertyNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetShaderPropertyNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderPropertyNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetShaderPropertyNodeID() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetShaderPropertyNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_SetAndObserveShaderPropertyNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveShaderPropertyNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveShaderPropertyNodeID(temp0);
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayNode::SetAndObserveShaderPropertyNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetShaderPropertyNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderPropertyNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLShaderPropertyNode *tempr = (ap.IsBound() ?
      op->GetShaderPropertyNode() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetShaderPropertyNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetOrCreateShaderPropertyNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrCreateShaderPropertyNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    vtkMRMLShaderPropertyNode *tempr = (ap.IsBound() ?
      op->GetOrCreateShaderPropertyNode(temp0) :
      op->vtkMRMLVolumeRenderingDisplayNode::GetOrCreateShaderPropertyNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetROINodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetROINodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetROINodeID() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetROINodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_SetAndObserveROINodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveROINodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveROINodeID(temp0);
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayNode::SetAndObserveROINodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetROINode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetROINode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDisplayableNode *tempr = (ap.IsBound() ?
      op->GetROINode() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetROINode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetAnnotationROINode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationROINode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAnnotationROINode *tempr = (ap.IsBound() ?
      op->GetAnnotationROINode() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetAnnotationROINode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetMarkupsROINode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupsROINode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsROINode *tempr = (ap.IsBound() ?
      op->GetMarkupsROINode() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetMarkupsROINode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetFirstViewNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstViewNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLViewNode *tempr = (ap.IsBound() ?
      op->GetFirstViewNode() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetFirstViewNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSampleDistance() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_SetCroppingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCroppingEnabled(temp0);
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayNode::SetCroppingEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetCroppingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCroppingEnabled() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetCroppingEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_CroppingEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CroppingEnabledOn();
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayNode::CroppingEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_CroppingEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CroppingEnabledOff();
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayNode::CroppingEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_SetThreshold_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetThreshold(temp0, temp1);
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayNode::SetThreshold(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_SetThreshold_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetThreshold(temp0);
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayNode::SetThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_SetThreshold(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLVolumeRenderingDisplayNode_SetThreshold_s1(self, args);
    case 1:
      return PyvtkMRMLVolumeRenderingDisplayNode_SetThreshold_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetThreshold");
  return nullptr;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetThreshold() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetThreshold());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetFollowVolumeDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFollowVolumeDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFollowVolumeDisplayNode() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetFollowVolumeDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_SetFollowVolumeDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFollowVolumeDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFollowVolumeDisplayNode(temp0);
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayNode::SetFollowVolumeDisplayNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetIgnoreVolumeDisplayNodeThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreVolumeDisplayNodeThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIgnoreVolumeDisplayNodeThreshold() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetIgnoreVolumeDisplayNodeThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_SetIgnoreVolumeDisplayNodeThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreVolumeDisplayNodeThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnoreVolumeDisplayNodeThreshold(temp0);
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayNode::SetIgnoreVolumeDisplayNodeThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetUseSingleVolumeProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSingleVolumeProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseSingleVolumeProperty() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetUseSingleVolumeProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_SetUseSingleVolumeProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseSingleVolumeProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseSingleVolumeProperty(temp0);
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayNode::SetUseSingleVolumeProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_SetWindowLevel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetWindowLevel(temp0, temp1);
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayNode::SetWindowLevel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_SetWindowLevel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWindowLevel(temp0);
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayNode::SetWindowLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_SetWindowLevel(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLVolumeRenderingDisplayNode_SetWindowLevel_s1(self, args);
    case 1:
      return PyvtkMRMLVolumeRenderingDisplayNode_SetWindowLevel_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWindowLevel");
  return nullptr;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayNode_GetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayNode *op = static_cast<vtkMRMLVolumeRenderingDisplayNode *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetWindowLevel() :
      op->vtkMRMLVolumeRenderingDisplayNode::GetWindowLevel());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLVolumeRenderingDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLVolumeRenderingDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLVolumeRenderingDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLVolumeRenderingDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLVolumeRenderingDisplayNode\nC++: static vtkMRMLVolumeRenderingDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLVolumeRenderingDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLVolumeRenderingDisplayNode\nC++: vtkMRMLVolumeRenderingDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLVolumeRenderingDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLVolumeRenderingDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Copy", PyvtkMRMLVolumeRenderingDisplayNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetVolumeNodeID", PyvtkMRMLVolumeRenderingDisplayNode_GetVolumeNodeID, METH_VARARGS,
   "GetVolumeNodeID(self) -> str\nC++: const char *GetVolumeNodeID()\n\n"},
  {"GetVolumeNode", PyvtkMRMLVolumeRenderingDisplayNode_GetVolumeNode, METH_VARARGS,
   "GetVolumeNode(self) -> vtkMRMLVolumeNode\nC++: vtkMRMLVolumeNode *GetVolumeNode()\n\n"},
  {"GetVolumePropertyNodeID", PyvtkMRMLVolumeRenderingDisplayNode_GetVolumePropertyNodeID, METH_VARARGS,
   "GetVolumePropertyNodeID(self) -> str\nC++: const char *GetVolumePropertyNodeID()\n\n"},
  {"SetAndObserveVolumePropertyNodeID", PyvtkMRMLVolumeRenderingDisplayNode_SetAndObserveVolumePropertyNodeID, METH_VARARGS,
   "SetAndObserveVolumePropertyNodeID(self, volumePropertyNodeID:str)\n    -> None\nC++: void SetAndObserveVolumePropertyNodeID(\n    const char *volumePropertyNodeID)\n\n"},
  {"GetVolumePropertyNode", PyvtkMRMLVolumeRenderingDisplayNode_GetVolumePropertyNode, METH_VARARGS,
   "GetVolumePropertyNode(self) -> vtkMRMLVolumePropertyNode\nC++: vtkMRMLVolumePropertyNode *GetVolumePropertyNode()\n\n"},
  {"GetShaderPropertyNodeID", PyvtkMRMLVolumeRenderingDisplayNode_GetShaderPropertyNodeID, METH_VARARGS,
   "GetShaderPropertyNodeID(self) -> str\nC++: const char *GetShaderPropertyNodeID()\n\n"},
  {"SetAndObserveShaderPropertyNodeID", PyvtkMRMLVolumeRenderingDisplayNode_SetAndObserveShaderPropertyNodeID, METH_VARARGS,
   "SetAndObserveShaderPropertyNodeID(self, shaderPropertyNodeID:str)\n    -> None\nC++: void SetAndObserveShaderPropertyNodeID(\n    const char *shaderPropertyNodeID)\n\n"},
  {"GetShaderPropertyNode", PyvtkMRMLVolumeRenderingDisplayNode_GetShaderPropertyNode, METH_VARARGS,
   "GetShaderPropertyNode(self) -> vtkMRMLShaderPropertyNode\nC++: vtkMRMLShaderPropertyNode *GetShaderPropertyNode()\n\n"},
  {"GetOrCreateShaderPropertyNode", PyvtkMRMLVolumeRenderingDisplayNode_GetOrCreateShaderPropertyNode, METH_VARARGS,
   "GetOrCreateShaderPropertyNode(self, mrmlScene:vtkMRMLScene)\n    -> vtkMRMLShaderPropertyNode\nC++: vtkMRMLShaderPropertyNode *GetOrCreateShaderPropertyNode(\n    vtkMRMLScene *mrmlScene)\n\n"},
  {"GetROINodeID", PyvtkMRMLVolumeRenderingDisplayNode_GetROINodeID, METH_VARARGS,
   "GetROINodeID(self) -> str\nC++: const char *GetROINodeID()\n\n"},
  {"SetAndObserveROINodeID", PyvtkMRMLVolumeRenderingDisplayNode_SetAndObserveROINodeID, METH_VARARGS,
   "SetAndObserveROINodeID(self, roiNodeID:str) -> None\nC++: void SetAndObserveROINodeID(const char *roiNodeID)\n\n"},
  {"GetROINode", PyvtkMRMLVolumeRenderingDisplayNode_GetROINode, METH_VARARGS,
   "GetROINode(self) -> vtkMRMLDisplayableNode\nC++: vtkMRMLDisplayableNode *GetROINode()\n\n"},
  {"GetAnnotationROINode", PyvtkMRMLVolumeRenderingDisplayNode_GetAnnotationROINode, METH_VARARGS,
   "GetAnnotationROINode(self) -> vtkMRMLAnnotationROINode\nC++: vtkMRMLAnnotationROINode *GetAnnotationROINode()\n\nDeprecated. Use GetROINode() instead for retrieving the markups\nROI node.\n"},
  {"GetMarkupsROINode", PyvtkMRMLVolumeRenderingDisplayNode_GetMarkupsROINode, METH_VARARGS,
   "GetMarkupsROINode(self) -> vtkMRMLMarkupsROINode\nC++: vtkMRMLMarkupsROINode *GetMarkupsROINode()\n\n"},
  {"GetFirstViewNode", PyvtkMRMLVolumeRenderingDisplayNode_GetFirstViewNode, METH_VARARGS,
   "GetFirstViewNode(self) -> vtkMRMLViewNode\nC++: vtkMRMLViewNode *GetFirstViewNode()\n\n"},
  {"GetSampleDistance", PyvtkMRMLVolumeRenderingDisplayNode_GetSampleDistance, METH_VARARGS,
   "GetSampleDistance(self) -> float\nC++: double GetSampleDistance()\n\n"},
  {"SetCroppingEnabled", PyvtkMRMLVolumeRenderingDisplayNode_SetCroppingEnabled, METH_VARARGS,
   "SetCroppingEnabled(self, _arg:int) -> None\nC++: virtual void SetCroppingEnabled(int _arg)\n\n"},
  {"GetCroppingEnabled", PyvtkMRMLVolumeRenderingDisplayNode_GetCroppingEnabled, METH_VARARGS,
   "GetCroppingEnabled(self) -> int\nC++: virtual int GetCroppingEnabled()\n\n"},
  {"CroppingEnabledOn", PyvtkMRMLVolumeRenderingDisplayNode_CroppingEnabledOn, METH_VARARGS,
   "CroppingEnabledOn(self) -> None\nC++: virtual void CroppingEnabledOn()\n\n"},
  {"CroppingEnabledOff", PyvtkMRMLVolumeRenderingDisplayNode_CroppingEnabledOff, METH_VARARGS,
   "CroppingEnabledOff(self) -> None\nC++: virtual void CroppingEnabledOff()\n\n"},
  {"SetThreshold", PyvtkMRMLVolumeRenderingDisplayNode_SetThreshold, METH_VARARGS,
   "SetThreshold(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetThreshold(double _arg1, double _arg2)\nSetThreshold(self, _arg:(float, float)) -> None\nC++: void SetThreshold(const double _arg[2])\n\n"},
  {"GetThreshold", PyvtkMRMLVolumeRenderingDisplayNode_GetThreshold, METH_VARARGS,
   "GetThreshold(self) -> (float, float)\nC++: virtual double *GetThreshold()\n\n"},
  {"GetFollowVolumeDisplayNode", PyvtkMRMLVolumeRenderingDisplayNode_GetFollowVolumeDisplayNode, METH_VARARGS,
   "GetFollowVolumeDisplayNode(self) -> int\nC++: virtual int GetFollowVolumeDisplayNode()\n\n"},
  {"SetFollowVolumeDisplayNode", PyvtkMRMLVolumeRenderingDisplayNode_SetFollowVolumeDisplayNode, METH_VARARGS,
   "SetFollowVolumeDisplayNode(self, _arg:int) -> None\nC++: virtual void SetFollowVolumeDisplayNode(int _arg)\n\n"},
  {"GetIgnoreVolumeDisplayNodeThreshold", PyvtkMRMLVolumeRenderingDisplayNode_GetIgnoreVolumeDisplayNodeThreshold, METH_VARARGS,
   "GetIgnoreVolumeDisplayNodeThreshold(self) -> int\nC++: virtual int GetIgnoreVolumeDisplayNodeThreshold()\n\n"},
  {"SetIgnoreVolumeDisplayNodeThreshold", PyvtkMRMLVolumeRenderingDisplayNode_SetIgnoreVolumeDisplayNodeThreshold, METH_VARARGS,
   "SetIgnoreVolumeDisplayNodeThreshold(self, _arg:int) -> None\nC++: virtual void SetIgnoreVolumeDisplayNodeThreshold(int _arg)\n\n"},
  {"GetUseSingleVolumeProperty", PyvtkMRMLVolumeRenderingDisplayNode_GetUseSingleVolumeProperty, METH_VARARGS,
   "GetUseSingleVolumeProperty(self) -> int\nC++: virtual int GetUseSingleVolumeProperty()\n\n"},
  {"SetUseSingleVolumeProperty", PyvtkMRMLVolumeRenderingDisplayNode_SetUseSingleVolumeProperty, METH_VARARGS,
   "SetUseSingleVolumeProperty(self, _arg:int) -> None\nC++: virtual void SetUseSingleVolumeProperty(int _arg)\n\n"},
  {"SetWindowLevel", PyvtkMRMLVolumeRenderingDisplayNode_SetWindowLevel, METH_VARARGS,
   "SetWindowLevel(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetWindowLevel(double _arg1, double _arg2)\nSetWindowLevel(self, _arg:(float, float)) -> None\nC++: void SetWindowLevel(const double _arg[2])\n\n"},
  {"GetWindowLevel", PyvtkMRMLVolumeRenderingDisplayNode_GetWindowLevel, METH_VARARGS,
   "GetWindowLevel(self) -> (float, float)\nC++: virtual double *GetWindowLevel()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLVolumeRenderingDisplayNode_Doc =
  "vtkMRMLVolumeRenderingDisplayNode - no description provided.\n\n"
  "Superclass: vtkMRMLDisplayNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLVolumeRenderingDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerVolumeRenderingModuleMRMLPython.vtkMRMLVolumeRenderingDisplayNode", // tp_name
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
  PyvtkMRMLVolumeRenderingDisplayNode_Doc, // tp_doc
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

PyObject *PyvtkMRMLVolumeRenderingDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLVolumeRenderingDisplayNode_Type, PyvtkMRMLVolumeRenderingDisplayNode_Methods,
    "vtkMRMLVolumeRenderingDisplayNode",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLDisplayNode");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLVolumeRenderingDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLVolumeRenderingDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLVolumeRenderingDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

