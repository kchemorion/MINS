// python wrapper for vtkMRMLSegmentationDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkMRMLSegmentationDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSegmentationDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSegmentationDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLDisplayNode_ClassNew
extern "C" { PyObject *PyvtkMRMLDisplayNode_ClassNew(); }
#define DECLARED_PyvtkMRMLDisplayNode_ClassNew
#endif

static PyObject *
PyvtkMRMLSegmentationDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSegmentationDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSegmentationDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSegmentationDisplayNode *tempr = vtkMRMLSegmentationDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSegmentationDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSegmentationDisplayNode::NewInstance());

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
PyvtkMRMLSegmentationDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSegmentationDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSegmentationDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLSegmentationDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->CopyContent(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLSegmentationDisplayNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLSegmentationDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetPreferredDisplayRepresentationName2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreferredDisplayRepresentationName2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPreferredDisplayRepresentationName2D() :
      op->vtkMRMLSegmentationDisplayNode::GetPreferredDisplayRepresentationName2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetPreferredDisplayRepresentationName2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreferredDisplayRepresentationName2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreferredDisplayRepresentationName2D(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetPreferredDisplayRepresentationName2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetPreferredDisplayRepresentationName3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreferredDisplayRepresentationName3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPreferredDisplayRepresentationName3D() :
      op->vtkMRMLSegmentationDisplayNode::GetPreferredDisplayRepresentationName3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetPreferredDisplayRepresentationName3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreferredDisplayRepresentationName3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreferredDisplayRepresentationName3D(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetPreferredDisplayRepresentationName3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetVisibility2DFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility2DFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVisibility2DFill() :
      op->vtkMRMLSegmentationDisplayNode::GetVisibility2DFill());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetVisibility2DFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility2DFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility2DFill(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetVisibility2DFill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_Visibility2DFillOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Visibility2DFillOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Visibility2DFillOn();
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::Visibility2DFillOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_Visibility2DFillOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Visibility2DFillOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Visibility2DFillOff();
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::Visibility2DFillOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetVisibility2DOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility2DOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVisibility2DOutline() :
      op->vtkMRMLSegmentationDisplayNode::GetVisibility2DOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetVisibility2DOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility2DOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility2DOutline(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetVisibility2DOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_Visibility2DOutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Visibility2DOutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Visibility2DOutlineOn();
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::Visibility2DOutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_Visibility2DOutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Visibility2DOutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Visibility2DOutlineOff();
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::Visibility2DOutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetOpacity3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity3D() :
      op->vtkMRMLSegmentationDisplayNode::GetOpacity3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetOpacity3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity3D(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetOpacity3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetOpacity2DFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity2DFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity2DFill() :
      op->vtkMRMLSegmentationDisplayNode::GetOpacity2DFill());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetOpacity2DFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity2DFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity2DFill(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetOpacity2DFill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetOpacity2DOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity2DOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity2DOutline() :
      op->vtkMRMLSegmentationDisplayNode::GetOpacity2DOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetOpacity2DOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity2DOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity2DOutline(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetOpacity2DOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetSegmentDisplayPropertiesToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentDisplayPropertiesToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSegmentDisplayPropertiesToDefault(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetSegmentDisplayPropertiesToDefault(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_RemoveSegmentDisplayProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveSegmentDisplayProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveSegmentDisplayProperties(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::RemoveSegmentDisplayProperties(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_ClearSegmentDisplayProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSegmentDisplayProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearSegmentDisplayProperties();
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::ClearSegmentDisplayProperties();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_CalculateAutoOpacitiesForSegments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateAutoOpacitiesForSegments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CalculateAutoOpacitiesForSegments() :
      op->vtkMRMLSegmentationDisplayNode::CalculateAutoOpacitiesForSegments());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GenerateSegmentColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSegmentColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GenerateSegmentColor(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::GenerateSegmentColor(temp0, temp1);
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
PyvtkMRMLSegmentationDisplayNode_GenerateSegmentColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSegmentColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GenerateSegmentColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::GenerateSegmentColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSegmentationDisplayNode_GenerateSegmentColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return PyvtkMRMLSegmentationDisplayNode_GenerateSegmentColor_s1(self, args);
    case 3:
      return PyvtkMRMLSegmentationDisplayNode_GenerateSegmentColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateSegmentColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetSegmentColorGeneratorSourceColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentColorGeneratorSourceColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSegmentColorGeneratorSourceColorNodeID(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetSegmentColorGeneratorSourceColorNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetSegmentColorGeneratorSourceColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentColorGeneratorSourceColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSegmentColorGeneratorSourceColorNodeID() :
      op->vtkMRMLSegmentationDisplayNode::GetSegmentColorGeneratorSourceColorNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetDisplayRepresentationName3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayRepresentationName3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDisplayRepresentationName3D() :
      op->vtkMRMLSegmentationDisplayNode::GetDisplayRepresentationName3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetDisplayRepresentationName2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayRepresentationName2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDisplayRepresentationName2D() :
      op->vtkMRMLSegmentationDisplayNode::GetDisplayRepresentationName2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetSegmentColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetSegmentColor(temp0) :
      op->vtkMRMLSegmentationDisplayNode::GetSegmentColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetSegmentColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetSegmentColor(temp0, temp1) :
      op->vtkMRMLSegmentationDisplayNode::GetSegmentColor(temp0, temp1));

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
PyvtkMRMLSegmentationDisplayNode_GetSegmentColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSegmentColor(temp0, temp1, temp2, temp3) :
      op->vtkMRMLSegmentationDisplayNode::GetSegmentColor(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetSegmentColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLSegmentationDisplayNode_GetSegmentColor_s1(self, args);
    case 2:
      return PyvtkMRMLSegmentationDisplayNode_GetSegmentColor_s2(self, args);
    case 4:
      return PyvtkMRMLSegmentationDisplayNode_GetSegmentColor_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSegmentColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetSegmentOverrideColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentOverrideColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetSegmentOverrideColor(temp0) :
      op->vtkMRMLSegmentationDisplayNode::GetSegmentOverrideColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetSegmentOverrideColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentOverrideColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetSegmentOverrideColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetSegmentOverrideColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetSegmentOverrideColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentOverrideColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  vtkVector3d *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector3d"))
  {
    if (ap.IsBound())
    {
      op->SetSegmentOverrideColor(temp0, *temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetSegmentOverrideColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetSegmentOverrideColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkMRMLSegmentationDisplayNode_SetSegmentOverrideColor_s1(self, args);
    case 2:
      return PyvtkMRMLSegmentationDisplayNode_SetSegmentOverrideColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSegmentOverrideColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_UnsetSegmentOverrideColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnsetSegmentOverrideColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnsetSegmentOverrideColor(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::UnsetSegmentOverrideColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetSegmentVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSegmentVisibility(temp0) :
      op->vtkMRMLSegmentationDisplayNode::GetSegmentVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetSegmentVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSegmentVisibility(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetSegmentVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllSegmentsVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllSegmentsVisibility(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetAllSegmentsVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetSegmentVisibility3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentVisibility3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSegmentVisibility3D(temp0) :
      op->vtkMRMLSegmentationDisplayNode::GetSegmentVisibility3D(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetSegmentVisibility3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentVisibility3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSegmentVisibility3D(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetSegmentVisibility3D(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsVisibility3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllSegmentsVisibility3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  bool temp0 = false;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetAllSegmentsVisibility3D(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetAllSegmentsVisibility3D(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetSegmentVisibility2DFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentVisibility2DFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSegmentVisibility2DFill(temp0) :
      op->vtkMRMLSegmentationDisplayNode::GetSegmentVisibility2DFill(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetSegmentVisibility2DFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentVisibility2DFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSegmentVisibility2DFill(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetSegmentVisibility2DFill(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsVisibility2DFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllSegmentsVisibility2DFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  bool temp0 = false;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetAllSegmentsVisibility2DFill(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetAllSegmentsVisibility2DFill(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetSegmentVisibility2DOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentVisibility2DOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSegmentVisibility2DOutline(temp0) :
      op->vtkMRMLSegmentationDisplayNode::GetSegmentVisibility2DOutline(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetSegmentVisibility2DOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentVisibility2DOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSegmentVisibility2DOutline(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetSegmentVisibility2DOutline(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsVisibility2DOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllSegmentsVisibility2DOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  bool temp0 = false;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetAllSegmentsVisibility2DOutline(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetAllSegmentsVisibility2DOutline(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetSegmentOpacity3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentOpacity3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSegmentOpacity3D(temp0) :
      op->vtkMRMLSegmentationDisplayNode::GetSegmentOpacity3D(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetSegmentOpacity3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentOpacity3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSegmentOpacity3D(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetSegmentOpacity3D(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsOpacity3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllSegmentsOpacity3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  double temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetAllSegmentsOpacity3D(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetAllSegmentsOpacity3D(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetSegmentOpacity2DFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentOpacity2DFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSegmentOpacity2DFill(temp0) :
      op->vtkMRMLSegmentationDisplayNode::GetSegmentOpacity2DFill(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetSegmentOpacity2DFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentOpacity2DFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSegmentOpacity2DFill(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetSegmentOpacity2DFill(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsOpacity2DFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllSegmentsOpacity2DFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  double temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetAllSegmentsOpacity2DFill(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetAllSegmentsOpacity2DFill(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetSegmentOpacity2DOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentOpacity2DOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSegmentOpacity2DOutline(temp0) :
      op->vtkMRMLSegmentationDisplayNode::GetSegmentOpacity2DOutline(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetSegmentOpacity2DOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentOpacity2DOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSegmentOpacity2DOutline(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetSegmentOpacity2DOutline(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsOpacity2DOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllSegmentsOpacity2DOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  double temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetAllSegmentsOpacity2DOutline(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetAllSegmentsOpacity2DOutline(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetSegmentOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSegmentOpacity(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetSegmentOpacity(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllSegmentsOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  double temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetAllSegmentsOpacity(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetAllSegmentsOpacity(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetSegmentPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSegmentPickable(temp0) :
      op->vtkMRMLSegmentationDisplayNode::GetSegmentPickable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetSegmentPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::string temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSegmentPickable(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetSegmentPickable(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllSegmentsPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  bool temp0 = false;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetAllSegmentsPickable(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::SetAllSegmentsPickable(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetVisibleSegmentIDs_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleSegmentIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->GetVisibleSegmentIDs(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::GetVisibleSegmentIDs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetVisibleSegmentIDs_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleSegmentIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->GetVisibleSegmentIDs(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationDisplayNode::GetVisibleSegmentIDs(temp0);
    }

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
PyvtkMRMLSegmentationDisplayNode_GetVisibleSegmentIDs_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleSegmentIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationDisplayNode *op = static_cast<vtkMRMLSegmentationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetVisibleSegmentIDs() :
      op->vtkMRMLSegmentationDisplayNode::GetVisibleSegmentIDs());

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSegmentationDisplayNode_GetVisibleSegmentIDs_Methods[] = {
  {"GetVisibleSegmentIDs", PyvtkMRMLSegmentationDisplayNode_GetVisibleSegmentIDs_s1, METH_VARARGS,
   "@V *vtkStringArray"},
  {"GetVisibleSegmentIDs", PyvtkMRMLSegmentationDisplayNode_GetVisibleSegmentIDs_s2, METH_VARARGS,
   "@T s"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLSegmentationDisplayNode_GetVisibleSegmentIDs(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLSegmentationDisplayNode_GetVisibleSegmentIDs_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLSegmentationDisplayNode_GetVisibleSegmentIDs_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVisibleSegmentIDs");
  return nullptr;
}

static PyMethodDef PyvtkMRMLSegmentationDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSegmentationDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSegmentationDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSegmentationDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLSegmentationDisplayNode\nC++: static vtkMRMLSegmentationDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSegmentationDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSegmentationDisplayNode\nC++: vtkMRMLSegmentationDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSegmentationDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSegmentationDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLSegmentationDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"CopyContent", PyvtkMRMLSegmentationDisplayNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLSegmentationDisplayNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"GetNodeTagName", PyvtkMRMLSegmentationDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetPreferredDisplayRepresentationName2D", PyvtkMRMLSegmentationDisplayNode_GetPreferredDisplayRepresentationName2D, METH_VARARGS,
   "GetPreferredDisplayRepresentationName2D(self) -> str\nC++: virtual char *GetPreferredDisplayRepresentationName2D()\n\nGet name of representation that is displayed in the 2D view if\nexists To get the actually displayed 2D representation call \\sa\n"},
  {"SetPreferredDisplayRepresentationName2D", PyvtkMRMLSegmentationDisplayNode_SetPreferredDisplayRepresentationName2D, METH_VARARGS,
   "SetPreferredDisplayRepresentationName2D(self, _arg:str) -> None\nC++: virtual void SetPreferredDisplayRepresentationName2D(\n    const char *_arg)\n\nSet name of representation that is displayed in the 2D view if\nexists\n"},
  {"GetPreferredDisplayRepresentationName3D", PyvtkMRMLSegmentationDisplayNode_GetPreferredDisplayRepresentationName3D, METH_VARARGS,
   "GetPreferredDisplayRepresentationName3D(self) -> str\nC++: virtual char *GetPreferredDisplayRepresentationName3D()\n\nGet name of representation that is displayed in the 3D view if\nexists\n"},
  {"SetPreferredDisplayRepresentationName3D", PyvtkMRMLSegmentationDisplayNode_SetPreferredDisplayRepresentationName3D, METH_VARARGS,
   "SetPreferredDisplayRepresentationName3D(self, _arg:str) -> None\nC++: virtual void SetPreferredDisplayRepresentationName3D(\n    const char *_arg)\n\nSet name of representation that is displayed in the 3D view if\nexists\n"},
  {"GetVisibility2DFill", PyvtkMRMLSegmentationDisplayNode_GetVisibility2DFill, METH_VARARGS,
   "GetVisibility2DFill(self) -> bool\nC++: virtual bool GetVisibility2DFill()\n\nGet/Set 2D fill visibility\n"},
  {"SetVisibility2DFill", PyvtkMRMLSegmentationDisplayNode_SetVisibility2DFill, METH_VARARGS,
   "SetVisibility2DFill(self, _arg:bool) -> None\nC++: virtual void SetVisibility2DFill(bool _arg)\n\n"},
  {"Visibility2DFillOn", PyvtkMRMLSegmentationDisplayNode_Visibility2DFillOn, METH_VARARGS,
   "Visibility2DFillOn(self) -> None\nC++: virtual void Visibility2DFillOn()\n\n"},
  {"Visibility2DFillOff", PyvtkMRMLSegmentationDisplayNode_Visibility2DFillOff, METH_VARARGS,
   "Visibility2DFillOff(self) -> None\nC++: virtual void Visibility2DFillOff()\n\n"},
  {"GetVisibility2DOutline", PyvtkMRMLSegmentationDisplayNode_GetVisibility2DOutline, METH_VARARGS,
   "GetVisibility2DOutline(self) -> bool\nC++: virtual bool GetVisibility2DOutline()\n\nGet/Set 2D outline visibility\n"},
  {"SetVisibility2DOutline", PyvtkMRMLSegmentationDisplayNode_SetVisibility2DOutline, METH_VARARGS,
   "SetVisibility2DOutline(self, _arg:bool) -> None\nC++: virtual void SetVisibility2DOutline(bool _arg)\n\n"},
  {"Visibility2DOutlineOn", PyvtkMRMLSegmentationDisplayNode_Visibility2DOutlineOn, METH_VARARGS,
   "Visibility2DOutlineOn(self) -> None\nC++: virtual void Visibility2DOutlineOn()\n\n"},
  {"Visibility2DOutlineOff", PyvtkMRMLSegmentationDisplayNode_Visibility2DOutlineOff, METH_VARARGS,
   "Visibility2DOutlineOff(self) -> None\nC++: virtual void Visibility2DOutlineOff()\n\n"},
  {"GetOpacity3D", PyvtkMRMLSegmentationDisplayNode_GetOpacity3D, METH_VARARGS,
   "GetOpacity3D(self) -> float\nC++: virtual double GetOpacity3D()\n\nGet/Set 3D opacity\n"},
  {"SetOpacity3D", PyvtkMRMLSegmentationDisplayNode_SetOpacity3D, METH_VARARGS,
   "SetOpacity3D(self, _arg:float) -> None\nC++: virtual void SetOpacity3D(double _arg)\n\n"},
  {"GetOpacity2DFill", PyvtkMRMLSegmentationDisplayNode_GetOpacity2DFill, METH_VARARGS,
   "GetOpacity2DFill(self) -> float\nC++: virtual double GetOpacity2DFill()\n\nGet/Set 2D fill opacity\n"},
  {"SetOpacity2DFill", PyvtkMRMLSegmentationDisplayNode_SetOpacity2DFill, METH_VARARGS,
   "SetOpacity2DFill(self, _arg:float) -> None\nC++: virtual void SetOpacity2DFill(double _arg)\n\n"},
  {"GetOpacity2DOutline", PyvtkMRMLSegmentationDisplayNode_GetOpacity2DOutline, METH_VARARGS,
   "GetOpacity2DOutline(self) -> float\nC++: virtual double GetOpacity2DOutline()\n\nGet/Set 2D outline opacity\n"},
  {"SetOpacity2DOutline", PyvtkMRMLSegmentationDisplayNode_SetOpacity2DOutline, METH_VARARGS,
   "SetOpacity2DOutline(self, _arg:float) -> None\nC++: virtual void SetOpacity2DOutline(double _arg)\n\n"},
  {"SetSegmentDisplayPropertiesToDefault", PyvtkMRMLSegmentationDisplayNode_SetSegmentDisplayPropertiesToDefault, METH_VARARGS,
   "SetSegmentDisplayPropertiesToDefault(self, segmentId:str) -> None\nC++: void SetSegmentDisplayPropertiesToDefault(\n    const std::string &segmentId)\n\nSet segment display properties to default.\n"},
  {"RemoveSegmentDisplayProperties", PyvtkMRMLSegmentationDisplayNode_RemoveSegmentDisplayProperties, METH_VARARGS,
   "RemoveSegmentDisplayProperties(self, segmentID:str) -> None\nC++: void RemoveSegmentDisplayProperties(std::string segmentID)\n\nRemove segment display properties\n"},
  {"ClearSegmentDisplayProperties", PyvtkMRMLSegmentationDisplayNode_ClearSegmentDisplayProperties, METH_VARARGS,
   "ClearSegmentDisplayProperties(self) -> None\nC++: void ClearSegmentDisplayProperties()\n\nClear segment display properties\n"},
  {"CalculateAutoOpacitiesForSegments", PyvtkMRMLSegmentationDisplayNode_CalculateAutoOpacitiesForSegments, METH_VARARGS,
   "CalculateAutoOpacitiesForSegments(self) -> bool\nC++: bool CalculateAutoOpacitiesForSegments()\n\nDetermine and set automatic opacities for segments using\ntopological hierarchies. Stores value in opacity component of \\sa\nSegmentDisplayProperties.\n\\return Success flag\n"},
  {"GenerateSegmentColor", PyvtkMRMLSegmentationDisplayNode_GenerateSegmentColor, METH_VARARGS,
   "GenerateSegmentColor(self, color:[float, float, float],\n    colorNumber:int=0) -> None\nC++: void GenerateSegmentColor(double color[3], int colorNumber=0)\nGenerateSegmentColor(self, r:float, g:float, b:float) -> None\nC++: void GenerateSegmentColor(double &r, double &g, double &b)\n\nGenerate new color for an added segment. Uses \\sa\nNumberOfGeneratedColors to get the color for the new segment from\ndefault label color table\n\\param color Output argument for the generated color\n\\param colorNumber Index of the color in generic anatomy color\n    table that is returned.\n                   Default value is 0, meaning that \\sa\nNumberOfGeneratedColors is used.\n                   A value of -1 means that a random color is\ngenerated.\n"},
  {"SetSegmentColorGeneratorSourceColorNodeID", PyvtkMRMLSegmentationDisplayNode_SetSegmentColorGeneratorSourceColorNodeID, METH_VARARGS,
   "SetSegmentColorGeneratorSourceColorNodeID(self, colorNodeID:str)\n    -> None\nC++: void SetSegmentColorGeneratorSourceColorNodeID(\n    const char *colorNodeID)\n\nGet/Set color table node ID that is used for generating default\ncolors for new segments. If not specified then\n\"vtkMRMLColorTableNodeFileGenericAnatomyColors.txt\" is used.\n"},
  {"GetSegmentColorGeneratorSourceColorNodeID", PyvtkMRMLSegmentationDisplayNode_GetSegmentColorGeneratorSourceColorNodeID, METH_VARARGS,
   "GetSegmentColorGeneratorSourceColorNodeID(self) -> str\nC++: const char *GetSegmentColorGeneratorSourceColorNodeID()\n\nGet/Set color table node ID that is used for generating default\ncolors for new segments. If not specified then\n\"vtkMRMLColorTableNodeFileGenericAnatomyColors.txt\" is used.\n"},
  {"GetDisplayRepresentationName3D", PyvtkMRMLSegmentationDisplayNode_GetDisplayRepresentationName3D, METH_VARARGS,
   "GetDisplayRepresentationName3D(self) -> str\nC++: std::string GetDisplayRepresentationName3D()\n\nDecide which poly data representation to use for 3D display. If\npreferred representation exists \\sa\nPreferredDisplayRepresentationName3D, then return that. Otherwise\nif source representation is a poly data then return source\nrepresentation type. Otherwise return first poly data\nrepresentation if any. Otherwise return empty string meaning\nthere is no poly data representation to display.\n"},
  {"GetDisplayRepresentationName2D", PyvtkMRMLSegmentationDisplayNode_GetDisplayRepresentationName2D, METH_VARARGS,
   "GetDisplayRepresentationName2D(self) -> str\nC++: std::string GetDisplayRepresentationName2D()\n\nDecide which representation to use for 2D display. If preferred\nrepresentation exists \\sa PreferredDisplayRepresentationName2D,\nthen return that. Otherwise return source representation.\n"},
  {"GetSegmentColor", PyvtkMRMLSegmentationDisplayNode_GetSegmentColor, METH_VARARGS,
   "GetSegmentColor(self, segmentID:str) -> vtkVector3d\nC++: vtkVector3d GetSegmentColor(std::string segmentID)\nGetSegmentColor(self, segmentID:str, color:[float, ...]) -> bool\nC++: bool GetSegmentColor(std::string segmentID, double *color)\nGetSegmentColor(self, segmentID:str, r:float, g:float, b:float)\n    -> bool\nC++: bool GetSegmentColor(std::string segmentID, double &r,\n    double &g, double &b)\n\nGet segment color by segment ID. Convenience function for python\ncompatibility.\n\\return Segment color not overridden, otherwise the override\n    color\n"},
  {"GetSegmentOverrideColor", PyvtkMRMLSegmentationDisplayNode_GetSegmentOverrideColor, METH_VARARGS,
   "GetSegmentOverrideColor(self, segmentID:str) -> vtkVector3d\nC++: vtkVector3d GetSegmentOverrideColor(std::string segmentID)\n\nGet segment override color by segment ID. Convenience function\nfor python compatibility.\n\\return Override color if segment found and color overridden,\n    otherwise the invalid override color (-1,-1,-1)\n"},
  {"SetSegmentOverrideColor", PyvtkMRMLSegmentationDisplayNode_SetSegmentOverrideColor, METH_VARARGS,
   "SetSegmentOverrideColor(self, segmentID:str, r:float, g:float,\n    b:float) -> None\nC++: void SetSegmentOverrideColor(std::string segmentID, double r,\n     double g, double b)\nSetSegmentOverrideColor(self, segmentID:str,\n    overrideColor:vtkVector3d) -> None\nC++: void SetSegmentOverrideColor(std::string segmentID,\n    vtkVector3d overrideColor)\n\nSet segment override color by segment ID Override color is used\nfor specifying custom color for a segment in selected views. By\ndefault, segment color is invalid (-1,-1,-1), which means that\nthe color stored in vtkSegment object will be used. If a valid\noverride color is specified then in the views corresponding to\nthis display node, segment will be colored using the override\ncolor.\n"},
  {"UnsetSegmentOverrideColor", PyvtkMRMLSegmentationDisplayNode_UnsetSegmentOverrideColor, METH_VARARGS,
   "UnsetSegmentOverrideColor(self, segmentID:str) -> None\nC++: void UnsetSegmentOverrideColor(std::string segmentID)\n\nUnset segment override color (default segment color will be used\nfor display instead).\n"},
  {"GetSegmentVisibility", PyvtkMRMLSegmentationDisplayNode_GetSegmentVisibility, METH_VARARGS,
   "GetSegmentVisibility(self, segmentID:str) -> bool\nC++: bool GetSegmentVisibility(std::string segmentID)\n\nGet overall segment visibility by segment ID. Convenience\nfunction for python compatibility.\n\\return Segment visibility if segment found, otherwise false\n"},
  {"SetSegmentVisibility", PyvtkMRMLSegmentationDisplayNode_SetSegmentVisibility, METH_VARARGS,
   "SetSegmentVisibility(self, segmentID:str, visible:bool) -> None\nC++: void SetSegmentVisibility(std::string segmentID,\n    bool visible)\n\nSet overall segment visibility by segment ID. Convenience\nfunction for python compatibility.\n"},
  {"SetAllSegmentsVisibility", PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsVisibility, METH_VARARGS,
   "SetAllSegmentsVisibility(self, visible:bool) -> None\nC++: void SetAllSegmentsVisibility(bool visible)\n\nSet overall segment visibility by segment ID. Convenience\nfunction for python compatibility.\n"},
  {"GetSegmentVisibility3D", PyvtkMRMLSegmentationDisplayNode_GetSegmentVisibility3D, METH_VARARGS,
   "GetSegmentVisibility3D(self, segmentID:str) -> bool\nC++: bool GetSegmentVisibility3D(std::string segmentID)\n\nGet segment 3D visibility by segment ID. Convenience function for\npython compatibility.\n\\return Segment 3D visibility if segment found, otherwise false\n"},
  {"SetSegmentVisibility3D", PyvtkMRMLSegmentationDisplayNode_SetSegmentVisibility3D, METH_VARARGS,
   "SetSegmentVisibility3D(self, segmentID:str, visible:bool) -> None\nC++: void SetSegmentVisibility3D(std::string segmentID,\n    bool visible)\n\nSet segment 3D visibility by segment ID. Convenience function for\npython compatibility.\n"},
  {"SetAllSegmentsVisibility3D", PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsVisibility3D, METH_VARARGS,
   "SetAllSegmentsVisibility3D(self, visible:bool,\n    changeVisibleSegmentsOnly:bool=False) -> None\nC++: void SetAllSegmentsVisibility3D(bool visible,\n    bool changeVisibleSegmentsOnly=false)\n\nSet segment 3D visibility by segment ID. Convenience function for\npython compatibility.\n"},
  {"GetSegmentVisibility2DFill", PyvtkMRMLSegmentationDisplayNode_GetSegmentVisibility2DFill, METH_VARARGS,
   "GetSegmentVisibility2DFill(self, segmentID:str) -> bool\nC++: bool GetSegmentVisibility2DFill(std::string segmentID)\n\nGet segment 2D fill visibility by segment ID. Convenience\nfunction for python compatibility.\n\\return Segment 2D fill visibility if segment found, otherwise\n    false\n"},
  {"SetSegmentVisibility2DFill", PyvtkMRMLSegmentationDisplayNode_SetSegmentVisibility2DFill, METH_VARARGS,
   "SetSegmentVisibility2DFill(self, segmentID:str, visible:bool)\n    -> None\nC++: void SetSegmentVisibility2DFill(std::string segmentID,\n    bool visible)\n\nSet segment 2D fill visibility by segment ID. Convenience\nfunction for python compatibility.\n"},
  {"SetAllSegmentsVisibility2DFill", PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsVisibility2DFill, METH_VARARGS,
   "SetAllSegmentsVisibility2DFill(self, visible:bool,\n    changeVisibleSegmentsOnly:bool=False) -> None\nC++: void SetAllSegmentsVisibility2DFill(bool visible,\n    bool changeVisibleSegmentsOnly=false)\n\nSet segment 2D fill visibility by segment ID. Convenience\nfunction for python compatibility.\n"},
  {"GetSegmentVisibility2DOutline", PyvtkMRMLSegmentationDisplayNode_GetSegmentVisibility2DOutline, METH_VARARGS,
   "GetSegmentVisibility2DOutline(self, segmentID:str) -> bool\nC++: bool GetSegmentVisibility2DOutline(std::string segmentID)\n\nGet segment 2D outline visibility by segment ID. Convenience\nfunction for python compatibility.\n\\return Segment 2D outline visibility if segment found, otherwise\nfalse\n"},
  {"SetSegmentVisibility2DOutline", PyvtkMRMLSegmentationDisplayNode_SetSegmentVisibility2DOutline, METH_VARARGS,
   "SetSegmentVisibility2DOutline(self, segmentID:str, visible:bool)\n    -> None\nC++: void SetSegmentVisibility2DOutline(std::string segmentID,\n    bool visible)\n\nSet segment 2D outline visibility by segment ID. Convenience\nfunction for python compatibility.\n"},
  {"SetAllSegmentsVisibility2DOutline", PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsVisibility2DOutline, METH_VARARGS,
   "SetAllSegmentsVisibility2DOutline(self, visible:bool,\n    changeVisibleSegmentsOnly:bool=False) -> None\nC++: void SetAllSegmentsVisibility2DOutline(bool visible,\n    bool changeVisibleSegmentsOnly=false)\n\nSet segment 2D outline visibility by segment ID. Convenience\nfunction for python compatibility.\n"},
  {"GetSegmentOpacity3D", PyvtkMRMLSegmentationDisplayNode_GetSegmentOpacity3D, METH_VARARGS,
   "GetSegmentOpacity3D(self, segmentID:str) -> float\nC++: double GetSegmentOpacity3D(std::string segmentID)\n\nGet segment 3D opacity by segment ID. Convenience function for\npython compatibility.\n\\return Segment 3D opacity if segment found, otherwise false\n"},
  {"SetSegmentOpacity3D", PyvtkMRMLSegmentationDisplayNode_SetSegmentOpacity3D, METH_VARARGS,
   "SetSegmentOpacity3D(self, segmentID:str, opacity:float) -> None\nC++: void SetSegmentOpacity3D(std::string segmentID,\n    double opacity)\n\nSet segment 3D opacity by segment ID. Convenience function for\npython compatibility.\n"},
  {"SetAllSegmentsOpacity3D", PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsOpacity3D, METH_VARARGS,
   "SetAllSegmentsOpacity3D(self, opacity:float,\n    changeVisibleSegmentsOnly:bool=False) -> None\nC++: void SetAllSegmentsOpacity3D(double opacity,\n    bool changeVisibleSegmentsOnly=false)\n\nSet segment 3D opacity by segment ID. Convenience function for\npython compatibility.\n"},
  {"GetSegmentOpacity2DFill", PyvtkMRMLSegmentationDisplayNode_GetSegmentOpacity2DFill, METH_VARARGS,
   "GetSegmentOpacity2DFill(self, segmentID:str) -> float\nC++: double GetSegmentOpacity2DFill(std::string segmentID)\n\nGet segment 2D fill opacity by segment ID. Convenience function\nfor python compatibility.\n\\return Segment 2D fill opacity if segment found, otherwise false\n"},
  {"SetSegmentOpacity2DFill", PyvtkMRMLSegmentationDisplayNode_SetSegmentOpacity2DFill, METH_VARARGS,
   "SetSegmentOpacity2DFill(self, segmentID:str, opacity:float)\n    -> None\nC++: void SetSegmentOpacity2DFill(std::string segmentID,\n    double opacity)\n\nSet segment 2D fill opacity by segment ID. Convenience function\nfor python compatibility.\n"},
  {"SetAllSegmentsOpacity2DFill", PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsOpacity2DFill, METH_VARARGS,
   "SetAllSegmentsOpacity2DFill(self, opacity:float,\n    changeVisibleSegmentsOnly:bool=False) -> None\nC++: void SetAllSegmentsOpacity2DFill(double opacity,\n    bool changeVisibleSegmentsOnly=false)\n\nSet segment 2D fill opacity by segment ID. Convenience function\nfor python compatibility.\n"},
  {"GetSegmentOpacity2DOutline", PyvtkMRMLSegmentationDisplayNode_GetSegmentOpacity2DOutline, METH_VARARGS,
   "GetSegmentOpacity2DOutline(self, segmentID:str) -> float\nC++: double GetSegmentOpacity2DOutline(std::string segmentID)\n\nGet segment 2D outline opacity by segment ID. Convenience\nfunction for python compatibility.\n\\return Segment 2D outline opacity if segment found, otherwise\n    false\n"},
  {"SetSegmentOpacity2DOutline", PyvtkMRMLSegmentationDisplayNode_SetSegmentOpacity2DOutline, METH_VARARGS,
   "SetSegmentOpacity2DOutline(self, segmentID:str, opacity:float)\n    -> None\nC++: void SetSegmentOpacity2DOutline(std::string segmentID,\n    double opacity)\n\nSet segment 2D outline opacity by segment ID. Convenience\nfunction for python compatibility.\n"},
  {"SetAllSegmentsOpacity2DOutline", PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsOpacity2DOutline, METH_VARARGS,
   "SetAllSegmentsOpacity2DOutline(self, opacity:float,\n    changeVisibleSegmentsOnly:bool=False) -> None\nC++: void SetAllSegmentsOpacity2DOutline(double opacity,\n    bool changeVisibleSegmentsOnly=false)\n\nSet segment 2D outline opacity by segment ID. Convenience\nfunction for python compatibility.\n"},
  {"SetSegmentOpacity", PyvtkMRMLSegmentationDisplayNode_SetSegmentOpacity, METH_VARARGS,
   "SetSegmentOpacity(self, segmentID:str, opacity:float) -> None\nC++: void SetSegmentOpacity(std::string segmentID, double opacity)\n\nSet all three types of segment opacity by segment ID\n"},
  {"SetAllSegmentsOpacity", PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsOpacity, METH_VARARGS,
   "SetAllSegmentsOpacity(self, opacity:float,\n    changeVisibleSegmentsOnly:bool=False) -> None\nC++: void SetAllSegmentsOpacity(double opacity,\n    bool changeVisibleSegmentsOnly=false)\n\nSet all three types of segment opacity by segment ID\n"},
  {"GetSegmentPickable", PyvtkMRMLSegmentationDisplayNode_GetSegmentPickable, METH_VARARGS,
   "GetSegmentPickable(self, segmentID:str) -> bool\nC++: bool GetSegmentPickable(std::string segmentID)\n\nGet segment pickability by segment ID. Convenience function for\npython compatibility.\n\\return Segment 2D pickability if segment found, otherwise false\n"},
  {"SetSegmentPickable", PyvtkMRMLSegmentationDisplayNode_SetSegmentPickable, METH_VARARGS,
   "SetSegmentPickable(self, segmentID:str, pickable:bool) -> None\nC++: void SetSegmentPickable(std::string segmentID, bool pickable)\n\nSet segment 2D pickability by segment ID. Convenience function\nfor python compatibility.\n"},
  {"SetAllSegmentsPickable", PyvtkMRMLSegmentationDisplayNode_SetAllSegmentsPickable, METH_VARARGS,
   "SetAllSegmentsPickable(self, pickable:bool,\n    changeVisibleSegmentsOnly:bool=False) -> None\nC++: void SetAllSegmentsPickable(bool pickable,\n    bool changeVisibleSegmentsOnly=false)\n\nSet segment 2D pickability by segment ID. Convenience function\nfor python compatibility.\n"},
  {"GetVisibleSegmentIDs", PyvtkMRMLSegmentationDisplayNode_GetVisibleSegmentIDs, METH_VARARGS,
   "GetVisibleSegmentIDs(self, segmentIDs:vtkStringArray) -> None\nC++: void GetVisibleSegmentIDs(vtkStringArray *segmentIDs)\nGetVisibleSegmentIDs(self, segmentIDs:[str, ...]) -> None\nC++: void GetVisibleSegmentIDs(\n    std::vector<std::string> &segmentIDs)\nGetVisibleSegmentIDs(self) -> (str, ...)\nC++: std::vector<std::string> GetVisibleSegmentIDs()\n\nGet all visible segment IDs.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSegmentationDisplayNode_Doc =
  "vtkMRMLSegmentationDisplayNode - MRML node for representing\nsegmentation display attributes.\n\n"
  "Superclass: vtkMRMLDisplayNode\n\n"
  "vtkMRMLSegmentationDisplayNode nodes describe how volume is\n"
  "displayed.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSegmentationDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSegmentationDisplayNode", // tp_name
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
  PyvtkMRMLSegmentationDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSegmentationDisplayNode_StaticNew()
{
  return vtkMRMLSegmentationDisplayNode::New();
}

PyObject *PyvtkMRMLSegmentationDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSegmentationDisplayNode_Type, PyvtkMRMLSegmentationDisplayNode_Methods,
    "vtkMRMLSegmentationDisplayNode",
 &PyvtkMRMLSegmentationDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLDisplayNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLSegmentationDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSegmentationDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSegmentationDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

