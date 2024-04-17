// python wrapper for vtkMRMLAnnotationNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkMRMLAnnotationNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLAnnotationNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLAnnotationNode_ClassNew(); }


static PyObject *
PyvtkMRMLAnnotationNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAnnotationNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLAnnotationNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLAnnotationNode *tempr = vtkMRMLAnnotationNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAnnotationNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLAnnotationNode::NewInstance());

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
PyvtkMRMLAnnotationNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLAnnotationNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLAnnotationNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_GetIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIcon() :
      op->vtkMRMLAnnotationNode::GetIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLAnnotationNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLAnnotationNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

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
      op->vtkMRMLAnnotationNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLAnnotationNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

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
      op->vtkMRMLAnnotationNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

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
      op->vtkMRMLAnnotationNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLAnnotationNode_GetDefaultStorageNodeClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultStorageNodeClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDefaultStorageNodeClassName(temp0) :
      op->vtkMRMLAnnotationNode::GetDefaultStorageNodeClassName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLAnnotationNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_CanApplyNonLinearTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanApplyNonLinearTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanApplyNonLinearTransforms() :
      op->vtkMRMLAnnotationNode::CanApplyNonLinearTransforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_AddText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->AddText(temp0, temp1, temp2) :
      op->vtkMRMLAnnotationNode::AddText(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_SetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetText(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLAnnotationNode::SetText(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_GetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetText(temp0) :
      op->vtkMRMLAnnotationNode::GetText(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_DeleteText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->DeleteText(temp0) :
      op->vtkMRMLAnnotationNode::DeleteText(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_GetNumberOfTexts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTexts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTexts() :
      op->vtkMRMLAnnotationNode::GetNumberOfTexts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_GetAttributeTypesEnumAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeTypesEnumAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeTypesEnumAsString(temp0) :
      op->vtkMRMLAnnotationNode::GetAttributeTypesEnumAsString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_GetAnnotationAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetAnnotationAttributes(temp0) :
      op->vtkMRMLAnnotationNode::GetAnnotationAttributes(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_GetAnnotationAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  long long temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnnotationAttribute(temp0, temp1) :
      op->vtkMRMLAnnotationNode::GetAnnotationAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_SetAnnotationAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  long long temp0;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAnnotationAttribute(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLAnnotationNode::SetAnnotationAttribute(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_DeleteAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->DeleteAttribute(temp0, temp1) :
      op->vtkMRMLAnnotationNode::DeleteAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_ResetAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetAnnotations();
    }
    else
    {
      op->vtkMRMLAnnotationNode::ResetAnnotations();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_CreateAnnotationTextDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateAnnotationTextDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateAnnotationTextDisplayNode();
    }
    else
    {
      op->vtkMRMLAnnotationNode::CreateAnnotationTextDisplayNode();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_GetAnnotationTextDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationTextDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAnnotationTextDisplayNode *tempr = (ap.IsBound() ?
      op->GetAnnotationTextDisplayNode() :
      op->vtkMRMLAnnotationNode::GetAnnotationTextDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_SetTextScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextScale(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationNode::SetTextScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_GetTextScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextScale() :
      op->vtkMRMLAnnotationNode::GetTextScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_GetReferenceNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetReferenceNodeID() :
      op->vtkMRMLAnnotationNode::GetReferenceNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_SetReferenceNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceNodeID(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationNode::SetReferenceNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_GetLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLocked() :
      op->vtkMRMLAnnotationNode::GetLocked());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_SetLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLocked(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationNode::SetLocked(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationNode_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationNode *op = static_cast<vtkMRMLAnnotationNode *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationNode::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLAnnotationNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLAnnotationNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLAnnotationNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLAnnotationNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLAnnotationNode\nC++: static vtkMRMLAnnotationNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLAnnotationNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLAnnotationNode\nC++: vtkMRMLAnnotationNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLAnnotationNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLAnnotationNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetIcon", PyvtkMRMLAnnotationNode_GetIcon, METH_VARARGS,
   "GetIcon(self) -> str\nC++: virtual const char *GetIcon()\n\n"},
  {"CreateNodeInstance", PyvtkMRMLAnnotationNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"GetNodeTagName", PyvtkMRMLAnnotationNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"CopyContent", PyvtkMRMLAnnotationNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLAnnotationNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"UpdateScene", PyvtkMRMLAnnotationNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data\n"},
  {"ProcessMRMLEvents", PyvtkMRMLAnnotationNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"GetDefaultStorageNodeClassName", PyvtkMRMLAnnotationNode_GetDefaultStorageNodeClassName, METH_VARARGS,
   "GetDefaultStorageNodeClassName(self, filename:str) -> str\nC++: std::string GetDefaultStorageNodeClassName(\n    const char *filename) override;\n\nDetermines the most appropriate storage node class for the\nprovided file name and node content. If the method is not\noverwritten by subclass then it uses CreateDefaultStorageNode to\ndetermine storage node class name.\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLAnnotationNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {"CanApplyNonLinearTransforms", PyvtkMRMLAnnotationNode_CanApplyNonLinearTransforms, METH_VARARGS,
   "CanApplyNonLinearTransforms(self) -> bool\nC++: bool CanApplyNonLinearTransforms() override;\n\nReturns false since in general cannot apply non linear transforms\n\\sa ApplyTransformMatrix, ApplyTransform\n"},
  {"AddText", PyvtkMRMLAnnotationNode_AddText, METH_VARARGS,
   "AddText(self, newText:str, selectedFlag:int, visibleFlag:int)\n    -> int\nC++: int AddText(const char *newText, int selectedFlag,\n    int visibleFlag)\n\n"},
  {"SetText", PyvtkMRMLAnnotationNode_SetText, METH_VARARGS,
   "SetText(self, id:int, newText:str, selectedFlag:int,\n    visibleFlag:int) -> None\nC++: void SetText(int id, const char *newText, int selectedFlag,\n    int visibleFlag)\n\n"},
  {"GetText", PyvtkMRMLAnnotationNode_GetText, METH_VARARGS,
   "GetText(self, id:int) -> str\nC++: vtkStdString GetText(int id)\n\n"},
  {"DeleteText", PyvtkMRMLAnnotationNode_DeleteText, METH_VARARGS,
   "DeleteText(self, id:int) -> int\nC++: int DeleteText(int id)\n\n"},
  {"GetNumberOfTexts", PyvtkMRMLAnnotationNode_GetNumberOfTexts, METH_VARARGS,
   "GetNumberOfTexts(self) -> int\nC++: int GetNumberOfTexts()\n\n"},
  {"GetAttributeTypesEnumAsString", PyvtkMRMLAnnotationNode_GetAttributeTypesEnumAsString, METH_VARARGS,
   "GetAttributeTypesEnumAsString(self, val:int) -> str\nC++: virtual const char *GetAttributeTypesEnumAsString(int val)\n\n"},
  {"GetAnnotationAttributes", PyvtkMRMLAnnotationNode_GetAnnotationAttributes, METH_VARARGS,
   "GetAnnotationAttributes(self, att:int) -> vtkDataArray\nC++: vtkDataArray *GetAnnotationAttributes(int att)\n\n"},
  {"GetAnnotationAttribute", PyvtkMRMLAnnotationNode_GetAnnotationAttribute, METH_VARARGS,
   "GetAnnotationAttribute(self, id:int, att:int) -> int\nC++: int GetAnnotationAttribute(vtkIdType id, int att)\n\n"},
  {"SetAnnotationAttribute", PyvtkMRMLAnnotationNode_SetAnnotationAttribute, METH_VARARGS,
   "SetAnnotationAttribute(self, id:int, att:int, value:float) -> None\nC++: void SetAnnotationAttribute(vtkIdType id, int att,\n    double value)\n\n"},
  {"DeleteAttribute", PyvtkMRMLAnnotationNode_DeleteAttribute, METH_VARARGS,
   "DeleteAttribute(self, idAttEntry:int, idAttType:int) -> int\nC++: int DeleteAttribute(vtkIdType idAttEntry,\n    vtkIdType idAttType)\n\n"},
  {"ResetAnnotations", PyvtkMRMLAnnotationNode_ResetAnnotations, METH_VARARGS,
   "ResetAnnotations(self) -> None\nC++: virtual void ResetAnnotations()\n\nInitializes all variables associated with annotations\n"},
  {"CreateAnnotationTextDisplayNode", PyvtkMRMLAnnotationNode_CreateAnnotationTextDisplayNode, METH_VARARGS,
   "CreateAnnotationTextDisplayNode(self) -> None\nC++: void CreateAnnotationTextDisplayNode()\n\nadd display node if not already present\n"},
  {"GetAnnotationTextDisplayNode", PyvtkMRMLAnnotationNode_GetAnnotationTextDisplayNode, METH_VARARGS,
   "GetAnnotationTextDisplayNode(self)\n    -> vtkMRMLAnnotationTextDisplayNode\nC++: vtkMRMLAnnotationTextDisplayNode *GetAnnotationTextDisplayNode(\n    )\n\n"},
  {"SetTextScale", PyvtkMRMLAnnotationNode_SetTextScale, METH_VARARGS,
   "SetTextScale(self, textScale:float) -> None\nC++: void SetTextScale(double textScale)\n\nSet the text scale of the associated text.\n"},
  {"GetTextScale", PyvtkMRMLAnnotationNode_GetTextScale, METH_VARARGS,
   "GetTextScale(self) -> float\nC++: double GetTextScale()\n\nGet the text scale of the associated text.\n"},
  {"GetReferenceNodeID", PyvtkMRMLAnnotationNode_GetReferenceNodeID, METH_VARARGS,
   "GetReferenceNodeID(self) -> str\nC++: virtual char *GetReferenceNodeID()\n\nReference of this annotation - can be an image, model, scene , \n...\n"},
  {"SetReferenceNodeID", PyvtkMRMLAnnotationNode_SetReferenceNodeID, METH_VARARGS,
   "SetReferenceNodeID(self, _arg:str) -> None\nC++: virtual void SetReferenceNodeID(const char *_arg)\n\nReference of this annotation - can be an image, model, scene , \n...\n"},
  {"GetLocked", PyvtkMRMLAnnotationNode_GetLocked, METH_VARARGS,
   "GetLocked(self) -> int\nC++: virtual int GetLocked()\n\nIf set to 1 then parameters should not be changed. Fires\nvtkMRMLAnnotationNode::LockModifiedEvent if changed except if\nGetDisableModifiedEvent() is true.\n"},
  {"SetLocked", PyvtkMRMLAnnotationNode_SetLocked, METH_VARARGS,
   "SetLocked(self, init:int) -> None\nC++: void SetLocked(int init)\n\n"},
  {"Initialize", PyvtkMRMLAnnotationNode_Initialize, METH_VARARGS,
   "Initialize(self, mrmlScene:vtkMRMLScene) -> None\nC++: virtual void Initialize(vtkMRMLScene *mrmlScene)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLAnnotationNode_Doc =
  "vtkMRMLAnnotationNode - MRML node to represent a fiber bundle from\ntractography in DTI data.\n\n"
  "Superclass: vtkMRMLModelNode\n\n"
  "Annotation nodes contains control points, internally represented as\n"
  "vtkPolyData. An Annotation node contains many control points  and\n"
  "forms the smallest logical unit of tractography that MRML will\n"
  "manage/read/write. Each control point has accompanying data.\n"
  "Visualization parameters for these nodes are controlled by the\n"
  "vtkMRMLAnnotationTextDisplayNode class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAnnotationNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerAnnotationsModuleMRMLPython.vtkMRMLAnnotationNode", // tp_name
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
  PyvtkMRMLAnnotationNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLAnnotationNode_StaticNew()
{
  return vtkMRMLAnnotationNode::New();
}

PyObject *PyvtkMRMLAnnotationNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLAnnotationNode_Type, PyvtkMRMLAnnotationNode_Methods,
    "vtkMRMLAnnotationNode",
 &PyvtkMRMLAnnotationNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLModelNode");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "TEXT_SELECTED", vtkMRMLAnnotationNode::TEXT_SELECTED },
        { "TEXT_VISIBLE", vtkMRMLAnnotationNode::TEXT_VISIBLE },
        { "NUM_TEXT_ATTRIBUTE_TYPES", vtkMRMLAnnotationNode::NUM_TEXT_ATTRIBUTE_TYPES },
        { "LockModifiedEvent", vtkMRMLAnnotationNode::LockModifiedEvent },
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

void PyVTKAddFile_vtkMRMLAnnotationNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLAnnotationNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLAnnotationNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

