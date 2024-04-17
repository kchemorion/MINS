// python wrapper for vtkMRMLGlyphableVolumeSliceDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLGlyphableVolumeSliceDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLGlyphableVolumeSliceDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLGlyphableVolumeSliceDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLModelDisplayNode_ClassNew
extern "C" { PyObject *PyvtkMRMLModelDisplayNode_ClassNew(); }
#define DECLARED_PyvtkMRMLModelDisplayNode_ClassNew
#endif

static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLGlyphableVolumeSliceDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLGlyphableVolumeSliceDisplayNode *tempr = vtkMRMLGlyphableVolumeSliceDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLGlyphableVolumeSliceDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::NewInstance());

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
PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLGlyphableVolumeSliceDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

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
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_UpdateReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateReferences();
    }
    else
    {
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::UpdateReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_UpdateReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

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
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::UpdateReferenceID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

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
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

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
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetOutputMeshConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputMeshConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetOutputMeshConnection() :
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::GetOutputMeshConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetOutputMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetOutputMesh() :
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::GetOutputMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetSliceOutputPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOutputPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSliceOutputPolyData() :
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::GetSliceOutputPolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_UpdateAssignedAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAssignedAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateAssignedAttribute();
    }
    else
    {
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::UpdateAssignedAttribute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_SetSliceImagePort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceImagePort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

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
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::SetSliceImagePort(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetSliceImagePort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceImagePort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetSliceImagePort() :
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::GetSliceImagePort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetSliceOutputPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetSliceOutputPort() :
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::GetSliceOutputPort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_SetSlicePositionMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlicePositionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

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
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::SetSlicePositionMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_SetSliceGlyphRotationMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceGlyphRotationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

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
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::SetSliceGlyphRotationMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::GetColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorMode(temp0);
    }
    else
    {
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::SetColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_SetColorModeToSolid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToSolid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToSolid();
    }
    else
    {
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::SetColorModeToSolid();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_SetColorModeToScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToScalar();
    }
    else
    {
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::SetColorModeToScalar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_SetColorModeToFunctionOfScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToFunctionOfScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToFunctionOfScalar();
    }
    else
    {
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::SetColorModeToFunctionOfScalar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeSliceDisplayNode_SetColorModeToUseCellScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToUseCellScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeSliceDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeSliceDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToUseCellScalars();
    }
    else
    {
      op->vtkMRMLGlyphableVolumeSliceDisplayNode::SetColorModeToUseCellScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLGlyphableVolumeSliceDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLGlyphableVolumeSliceDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLGlyphableVolumeSliceDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLGlyphableVolumeSliceDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLGlyphableVolumeSliceDisplayNode\nC++: static vtkMRMLGlyphableVolumeSliceDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLGlyphableVolumeSliceDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLGlyphableVolumeSliceDisplayNode\nC++: vtkMRMLGlyphableVolumeSliceDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLGlyphableVolumeSliceDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"Copy", PyvtkMRMLGlyphableVolumeSliceDisplayNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, UnstructuredGrid)\n"},
  {"UpdateReferences", PyvtkMRMLGlyphableVolumeSliceDisplayNode_UpdateReferences, METH_VARARGS,
   "UpdateReferences(self) -> None\nC++: void UpdateReferences() override;\n\nUpdates this node if it depends on other nodes when the node is\ndeleted in the scene\n"},
  {"UpdateReferenceID", PyvtkMRMLGlyphableVolumeSliceDisplayNode_UpdateReferenceID, METH_VARARGS,
   "UpdateReferenceID(self, oldID:str, newID:str) -> None\nC++: void UpdateReferenceID(const char *oldID, const char *newID)\n    override;\n\nUpdate the stored reference to another node in the scene.\n"},
  {"UpdateScene", PyvtkMRMLGlyphableVolumeSliceDisplayNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data\n"},
  {"ProcessMRMLEvents", PyvtkMRMLGlyphableVolumeSliceDisplayNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"GetOutputMeshConnection", PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetOutputMeshConnection, METH_VARARGS,
   "GetOutputMeshConnection(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetOutputMeshConnection() override;\n\nReturn the output of the glyph producer for the input image data.\nThe output is connected as the input of the slice transform. It\nmust be reimplemented in subclasses.\n\\sa GetOutputPolyData(), GetSliceOutputPort()\n"},
  {"GetOutputMesh", PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetOutputMesh, METH_VARARGS,
   "GetOutputMesh(self) -> vtkPolyData\nC++: vtkPolyData *GetOutputMesh() override;\n\nReturn the glyph polydata for the input slice image. This is the\npolydata to use in a 3D view. Reimplemented to by-pass the check\non the input polydata.\n\\sa GetSliceOutputPolyData(), GetOutputPolyDataConnection()\n"},
  {"GetSliceOutputPolyData", PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetSliceOutputPolyData, METH_VARARGS,
   "GetSliceOutputPolyData(self) -> vtkPolyData\nC++: virtual vtkPolyData *GetSliceOutputPolyData()\n\nReturn the glyph polyData transformed to slice XY. This is the\npolydata to use in a 2D slice.\n\\sa GetOutputPolyData(), GetSliceOutputPort()\n"},
  {"UpdateAssignedAttribute", PyvtkMRMLGlyphableVolumeSliceDisplayNode_UpdateAssignedAttribute, METH_VARARGS,
   "UpdateAssignedAttribute(self) -> None\nC++: void UpdateAssignedAttribute() override;\n\nUpdate the pipeline based on this node attributes\n"},
  {"SetSliceImagePort", PyvtkMRMLGlyphableVolumeSliceDisplayNode_SetSliceImagePort, METH_VARARGS,
   "SetSliceImagePort(self, imagePort:vtkAlgorithmOutput) -> None\nC++: virtual void SetSliceImagePort(vtkAlgorithmOutput *imagePort)\n\nSet imageData of a volume slice. This is used as the input of the\ndisplay pipeline instead of SetInputPolyData().\n\\sa GetOutputPolyData(), SetInputPolyData()\n"},
  {"GetSliceImagePort", PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetSliceImagePort, METH_VARARGS,
   "GetSliceImagePort(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetSliceImagePort()\n\n"},
  {"GetSliceOutputPort", PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetSliceOutputPort, METH_VARARGS,
   "GetSliceOutputPort(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetSliceOutputPort()\n\nReturn the glyph output transformed to slice XY. Return the\noutput of the glyph producer for the entire volume.\n\\sa GetSliceOutputPolyData(), GetOutputPolyDataConnection()\n"},
  {"SetSlicePositionMatrix", PyvtkMRMLGlyphableVolumeSliceDisplayNode_SetSlicePositionMatrix, METH_VARARGS,
   "SetSlicePositionMatrix(self, matrix:vtkMatrix4x4) -> None\nC++: virtual void SetSlicePositionMatrix(vtkMatrix4x4 *matrix)\n\nSet slice to RAS transformation\n"},
  {"SetSliceGlyphRotationMatrix", PyvtkMRMLGlyphableVolumeSliceDisplayNode_SetSliceGlyphRotationMatrix, METH_VARARGS,
   "SetSliceGlyphRotationMatrix(self, matrix:vtkMatrix4x4) -> None\nC++: virtual void SetSliceGlyphRotationMatrix(\n    vtkMatrix4x4 *matrix)\n\nSet slice to IJK transformation\n"},
  {"GetColorMode", PyvtkMRMLGlyphableVolumeSliceDisplayNode_GetColorMode, METH_VARARGS,
   "GetColorMode(self) -> int\nC++: virtual int GetColorMode()\n\nDisplay Information: ColorMode for ALL nodes Description: Color\nmode for glyphs. The color modes are mutually exclusive.\n"},
  {"SetColorMode", PyvtkMRMLGlyphableVolumeSliceDisplayNode_SetColorMode, METH_VARARGS,
   "SetColorMode(self, _arg:int) -> None\nC++: virtual void SetColorMode(int _arg)\n\n"},
  {"SetColorModeToSolid", PyvtkMRMLGlyphableVolumeSliceDisplayNode_SetColorModeToSolid, METH_VARARGS,
   "SetColorModeToSolid(self) -> None\nC++: void SetColorModeToSolid()\n\nColor by solid color (for example the whole fiber bundle red.\nblue, etc.)\n"},
  {"SetColorModeToScalar", PyvtkMRMLGlyphableVolumeSliceDisplayNode_SetColorModeToScalar, METH_VARARGS,
   "SetColorModeToScalar(self) -> None\nC++: void SetColorModeToScalar()\n\nColor according to the tensors using various scalar invariants.\n"},
  {"SetColorModeToFunctionOfScalar", PyvtkMRMLGlyphableVolumeSliceDisplayNode_SetColorModeToFunctionOfScalar, METH_VARARGS,
   "SetColorModeToFunctionOfScalar(self) -> None\nC++: void SetColorModeToFunctionOfScalar()\n\nColor according to the tensors using a function of scalar\ninvariants along the tract. This enables coloring by average FA,\nfor example.\n"},
  {"SetColorModeToUseCellScalars", PyvtkMRMLGlyphableVolumeSliceDisplayNode_SetColorModeToUseCellScalars, METH_VARARGS,
   "SetColorModeToUseCellScalars(self) -> None\nC++: void SetColorModeToUseCellScalars()\n\nUse to color by the active cell scalars.  This is intended to\nsupport external processing of fibers, for example to label each\nwith the distance of that fiber from an fMRI activation.  Then by\nmaking that information the active cell scalar field, this will\nallow coloring by that information. TO DO: make sure this\ninformation can be saved with the tract, save name of active\nscalar field if needed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLGlyphableVolumeSliceDisplayNode_Doc =
  "vtkMRMLGlyphableVolumeSliceDisplayNode - MRML node to represent\ndisplay properties for tractography.\n\n"
  "Superclass: vtkMRMLModelDisplayNode\n\n"
  "vtkMRMLGlyphableVolumeSliceDisplayNode nodes store display properties\n"
  "of trajectories from tractography in diffusion MRI data, including\n"
  "color type (by bundle, by fiber, or by scalar invariants), display\n"
  "on/off for tensor glyphs and display of trajectory as a line or tube.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLGlyphableVolumeSliceDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLGlyphableVolumeSliceDisplayNode", // tp_name
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
  PyvtkMRMLGlyphableVolumeSliceDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLGlyphableVolumeSliceDisplayNode_StaticNew()
{
  return vtkMRMLGlyphableVolumeSliceDisplayNode::New();
}

PyObject *PyvtkMRMLGlyphableVolumeSliceDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLGlyphableVolumeSliceDisplayNode_Type, PyvtkMRMLGlyphableVolumeSliceDisplayNode_Methods,
    "vtkMRMLGlyphableVolumeSliceDisplayNode",
 &PyvtkMRMLGlyphableVolumeSliceDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLModelDisplayNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "colorModeSolid", vtkMRMLGlyphableVolumeSliceDisplayNode::colorModeSolid },
        { "colorModeScalar", vtkMRMLGlyphableVolumeSliceDisplayNode::colorModeScalar },
        { "colorModeFunctionOfScalar", vtkMRMLGlyphableVolumeSliceDisplayNode::colorModeFunctionOfScalar },
        { "colorModeUseCellScalars", vtkMRMLGlyphableVolumeSliceDisplayNode::colorModeUseCellScalars },
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

void PyVTKAddFile_vtkMRMLGlyphableVolumeSliceDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLGlyphableVolumeSliceDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLGlyphableVolumeSliceDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

