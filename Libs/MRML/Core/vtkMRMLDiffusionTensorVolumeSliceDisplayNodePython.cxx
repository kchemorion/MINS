// python wrapper for vtkMRMLDiffusionTensorVolumeSliceDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLDiffusionTensorVolumeSliceDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLDiffusionTensorVolumeSliceDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLGlyphableVolumeSliceDisplayNode_ClassNew
extern "C" { PyObject *PyvtkMRMLGlyphableVolumeSliceDisplayNode_ClassNew(); }
#define DECLARED_PyvtkMRMLGlyphableVolumeSliceDisplayNode_ClassNew
#endif

static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLDiffusionTensorVolumeSliceDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLDiffusionTensorVolumeSliceDisplayNode *tempr = vtkMRMLDiffusionTensorVolumeSliceDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDiffusionTensorVolumeSliceDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::NewInstance());

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
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLDiffusionTensorVolumeSliceDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

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
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_UpdateReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateReferences();
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::UpdateReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

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
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_UpdateReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

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
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::UpdateReferenceID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

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
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_GetOutputMeshConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputMeshConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetOutputMeshConnection() :
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::GetOutputMeshConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_UpdateAssignedAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAssignedAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateAssignedAttribute();
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::UpdateAssignedAttribute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SetSliceImagePort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceImagePort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSliceImagePort(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::SetSliceImagePort(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SetSlicePositionMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlicePositionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetSlicePositionMatrix(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::SetSlicePositionMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SetSliceGlyphRotationMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceGlyphRotationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetSliceGlyphRotationMatrix(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::SetSliceGlyphRotationMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SetColorModeToSolid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToSolid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToSolid();
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::SetColorModeToSolid();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SetColorModeToScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToScalar();
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::SetColorModeToScalar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SetColorModeToFunctionOfScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToFunctionOfScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToFunctionOfScalar();
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::SetColorModeToFunctionOfScalar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SetColorModeToUseCellScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToUseCellScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToUseCellScalars();
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::SetColorModeToUseCellScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_GetDiffusionTensorDisplayPropertiesNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionTensorDisplayPropertiesNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDiffusionTensorDisplayPropertiesNode *tempr = (ap.IsBound() ?
      op->GetDiffusionTensorDisplayPropertiesNode() :
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::GetDiffusionTensorDisplayPropertiesNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SetAndObserveDiffusionTensorDisplayPropertiesNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveDiffusionTensorDisplayPropertiesNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveDiffusionTensorDisplayPropertiesNodeID(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::SetAndObserveDiffusionTensorDisplayPropertiesNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_GetDiffusionTensorDisplayPropertiesNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionTensorDisplayPropertiesNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeSliceDisplayNode *op = static_cast<vtkMRMLDiffusionTensorVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDiffusionTensorDisplayPropertiesNodeID() :
      op->vtkMRMLDiffusionTensorVolumeSliceDisplayNode::GetDiffusionTensorDisplayPropertiesNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_GetNumberOfScalarInvariants(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfScalarInvariants");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMRMLDiffusionTensorVolumeSliceDisplayNode::GetNumberOfScalarInvariants();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_GetNthScalarInvariant(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNthScalarInvariant");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLDiffusionTensorVolumeSliceDisplayNode::GetNthScalarInvariant(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLDiffusionTensorVolumeSliceDisplayNode\nC++: static vtkMRMLDiffusionTensorVolumeSliceDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLDiffusionTensorVolumeSliceDisplayNode\nC++: vtkMRMLDiffusionTensorVolumeSliceDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"Copy", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, UnstructuredGrid)\n"},
  {"UpdateReferences", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_UpdateReferences, METH_VARARGS,
   "UpdateReferences(self) -> None\nC++: void UpdateReferences() override;\n\nUpdates this node if it depends on other nodes when the node is\ndeleted in the scene\n"},
  {"UpdateScene", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data\n"},
  {"UpdateReferenceID", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_UpdateReferenceID, METH_VARARGS,
   "UpdateReferenceID(self, oldID:str, newID:str) -> None\nC++: void UpdateReferenceID(const char *oldID, const char *newID)\n    override;\n\nUpdate the stored reference to another node in the scene\n"},
  {"ProcessMRMLEvents", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"GetOutputMeshConnection", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_GetOutputMeshConnection, METH_VARARGS,
   "GetOutputMeshConnection(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetOutputMeshConnection() override;\n\nReturn the glyph producer output for the input image data.\n\\sa GetOutputPolyData()\n"},
  {"UpdateAssignedAttribute", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_UpdateAssignedAttribute, METH_VARARGS,
   "UpdateAssignedAttribute(self) -> None\nC++: void UpdateAssignedAttribute() override;\n\nUpdate the pipeline based on this node attributes\n"},
  {"SetSliceImagePort", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SetSliceImagePort, METH_VARARGS,
   "SetSliceImagePort(self, imagePort:vtkAlgorithmOutput) -> None\nC++: void SetSliceImagePort(vtkAlgorithmOutput *imagePort)\n    override;\n\nSet ImageData for a volume slice\n"},
  {"SetSlicePositionMatrix", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SetSlicePositionMatrix, METH_VARARGS,
   "SetSlicePositionMatrix(self, matrix:vtkMatrix4x4) -> None\nC++: void SetSlicePositionMatrix(vtkMatrix4x4 *matrix) override;\n\nSet slice to RAS transformation\n"},
  {"SetSliceGlyphRotationMatrix", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SetSliceGlyphRotationMatrix, METH_VARARGS,
   "SetSliceGlyphRotationMatrix(self, matrix:vtkMatrix4x4) -> None\nC++: void SetSliceGlyphRotationMatrix(vtkMatrix4x4 *matrix)\n    override;\n\nSet slice to IJK transformation\n"},
  {"SetColorModeToSolid", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SetColorModeToSolid, METH_VARARGS,
   "SetColorModeToSolid(self) -> None\nC++: void SetColorModeToSolid()\n\nDisplay Information: ColorMode for ALL nodes\n\nColor by solid color (for example the whole fiber bundle red.\nblue, etc.)\n"},
  {"SetColorModeToScalar", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SetColorModeToScalar, METH_VARARGS,
   "SetColorModeToScalar(self) -> None\nC++: void SetColorModeToScalar()\n\nColor according to the tensors using various scalar invariants.\n"},
  {"SetColorModeToFunctionOfScalar", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SetColorModeToFunctionOfScalar, METH_VARARGS,
   "SetColorModeToFunctionOfScalar(self) -> None\nC++: void SetColorModeToFunctionOfScalar()\n\nColor according to the tensors using a function of scalar\ninvariants along the tract. This enables coloring by average FA,\nfor example.\n"},
  {"SetColorModeToUseCellScalars", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SetColorModeToUseCellScalars, METH_VARARGS,
   "SetColorModeToUseCellScalars(self) -> None\nC++: void SetColorModeToUseCellScalars()\n\nUse to color by the active cell scalars.  This is intended to\nsupport external processing of fibers, for example to label each\nwith the distance of that fiber from an fMRI activation.  Then by\nmaking that information the active cell scalar field, this will\nallow coloring by that information. TO DO: make sure this\ninformation can be saved with the tract, save name of active\nscalar field if needed.\n"},
  {"GetDiffusionTensorDisplayPropertiesNode", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_GetDiffusionTensorDisplayPropertiesNode, METH_VARARGS,
   "GetDiffusionTensorDisplayPropertiesNode(self)\n    -> vtkMRMLDiffusionTensorDisplayPropertiesNode\nC++: vtkMRMLDiffusionTensorDisplayPropertiesNode *GetDiffusionTensorDisplayPropertiesNode(\n    )\n\nDisplay Information: ColorMode for glyphs MRML nodes that are\nobserved Node reference to ALL DT nodes\n\nGet diffusion tensor display MRML object for fiber glyph.\n"},
  {"SetAndObserveDiffusionTensorDisplayPropertiesNodeID", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_SetAndObserveDiffusionTensorDisplayPropertiesNodeID, METH_VARARGS,
   "SetAndObserveDiffusionTensorDisplayPropertiesNodeID(self, ID:str)\n    -> None\nC++: void SetAndObserveDiffusionTensorDisplayPropertiesNodeID(\n    const char *ID)\n\nSet diffusion tensor display MRML object for fiber glyph.\n"},
  {"GetDiffusionTensorDisplayPropertiesNodeID", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_GetDiffusionTensorDisplayPropertiesNodeID, METH_VARARGS,
   "GetDiffusionTensorDisplayPropertiesNodeID(self) -> str\nC++: virtual char *GetDiffusionTensorDisplayPropertiesNodeID()\n\nGet ID of diffusion tensor display MRML object for fiber glyph.\n"},
  {"GetNumberOfScalarInvariants", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_GetNumberOfScalarInvariants, METH_VARARGS,
   "GetNumberOfScalarInvariants() -> int\nC++: static int GetNumberOfScalarInvariants()\n\nGet the number of selected scalar invariants to color a Slice\n"},
  {"GetNthScalarInvariant", PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_GetNthScalarInvariant, METH_VARARGS,
   "GetNthScalarInvariant(i:int) -> int\nC++: static int GetNthScalarInvariant(int i)\n\nGet the nth scalar invariant to color a Slice\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_Doc =
  "vtkMRMLDiffusionTensorVolumeSliceDisplayNode - MRML node to represent\ndisplay properties for tractography.\n\n"
  "Superclass: vtkMRMLGlyphableVolumeSliceDisplayNode\n\n"
  "vtkMRMLDiffusionTensorVolumeSliceDisplayNode nodes store display\n"
  "properties of trajectories from tractography in diffusion MRI data,\n"
  "including color type (by bundle, by fiber, or by scalar invariants),\n"
  "display on/off for tensor glyphs and display of trajectory as a line\n"
  "or tube.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLDiffusionTensorVolumeSliceDisplayNode", // tp_name
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
  PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_StaticNew()
{
  return vtkMRMLDiffusionTensorVolumeSliceDisplayNode::New();
}

PyObject *PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_Type, PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_Methods,
    "vtkMRMLDiffusionTensorVolumeSliceDisplayNode",
 &PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLGlyphableVolumeSliceDisplayNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "colorModeSolid", vtkMRMLDiffusionTensorVolumeSliceDisplayNode::colorModeSolid },
        { "colorModeScalar", vtkMRMLDiffusionTensorVolumeSliceDisplayNode::colorModeScalar },
        { "colorModeFunctionOfScalar", vtkMRMLDiffusionTensorVolumeSliceDisplayNode::colorModeFunctionOfScalar },
        { "colorModeUseCellScalars", vtkMRMLDiffusionTensorVolumeSliceDisplayNode::colorModeUseCellScalars },
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

void PyVTKAddFile_vtkMRMLDiffusionTensorVolumeSliceDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLDiffusionTensorVolumeSliceDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLDiffusionTensorVolumeSliceDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

