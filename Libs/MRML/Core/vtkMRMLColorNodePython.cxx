// python wrapper for vtkMRMLColorNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLColorNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLColorNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLColorNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLStorableNode_ClassNew
extern "C" { PyObject *PyvtkMRMLStorableNode_ClassNew(); }
#define DECLARED_PyvtkMRMLStorableNode_ClassNew
#endif

static PyObject *
PyvtkMRMLColorNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLColorNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLColorNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLColorNode *tempr = vtkMRMLColorNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLColorNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLColorNode::NewInstance());

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
PyvtkMRMLColorNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLColorNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLColorNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLColorNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

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
      op->vtkMRMLColorNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLColorNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->Reset(temp0);
    }
    else
    {
      op->vtkMRMLColorNode::Reset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

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
      op->vtkMRMLColorNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_SetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetType(temp0);
    }
    else
    {
      op->vtkMRMLColorNode::SetType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetType() :
      op->vtkMRMLColorNode::GetType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_SetTypeToUser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToUser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToUser();
    }
    else
    {
      op->vtkMRMLColorNode::SetTypeToUser();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_SetTypeToFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToFile();
    }
    else
    {
      op->vtkMRMLColorNode::SetTypeToFile();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

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
      op->vtkMRMLColorNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLColorNode_GetFirstType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFirstType() :
      op->vtkMRMLColorNode::GetFirstType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_GetLastType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastType() :
      op->vtkMRMLColorNode::GetLastType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_GetTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTypeAsString() :
      op->vtkMRMLColorNode::GetTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_GetColorName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColorName(temp0) :
      op->vtkMRMLColorNode::GetColorName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_GetColorIndexByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorIndexByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorIndexByName(temp0) :
      op->vtkMRMLColorNode::GetColorIndexByName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_GetColorNameAsFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorNameAsFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  int temp0;
  const char *temp1 = "_";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetColorNameAsFileName(temp0, temp1) :
      op->vtkMRMLColorNode::GetColorNameAsFileName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_GetColorNameWithoutSpaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorNameWithoutSpaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetColorNameWithoutSpaces(temp0, temp1) :
      op->vtkMRMLColorNode::GetColorNameWithoutSpaces(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_SetColorName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetColorName(temp0, temp1) :
      op->vtkMRMLColorNode::SetColorName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_SetColorNameWithSpaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorNameWithSpaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->SetColorNameWithSpaces(temp0, temp1, temp2) :
      op->vtkMRMLColorNode::SetColorNameWithSpaces(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_GetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColors() :
      op->vtkMRMLColorNode::GetNumberOfColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  int temp0;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetColor(temp0, temp1) :
      op->vtkMRMLColorNode::GetColor(temp0, temp1));

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
PyvtkMRMLColorNode_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkMRMLColorNode::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMRMLColorNode::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkMRMLColorNode::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_GetScalarsToColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsToColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetScalarsToColors() :
      op->vtkMRMLColorNode::GetScalarsToColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_GetNoName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetNoName() :
      op->vtkMRMLColorNode::GetNoName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_SetNoName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNoName(temp0);
    }
    else
    {
      op->vtkMRMLColorNode::SetNoName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_GetNamesInitialised(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNamesInitialised");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNamesInitialised() :
      op->vtkMRMLColorNode::GetNamesInitialised());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_SetNamesInitialised(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNamesInitialised");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNamesInitialised(temp0);
    }
    else
    {
      op->vtkMRMLColorNode::SetNamesInitialised(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_NamesInitialisedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NamesInitialisedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NamesInitialisedOn();
    }
    else
    {
      op->vtkMRMLColorNode::NamesInitialisedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_NamesInitialisedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NamesInitialisedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NamesInitialisedOff();
    }
    else
    {
      op->vtkMRMLColorNode::NamesInitialisedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_SetNamesFromColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNamesFromColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNamesFromColors();
    }
    else
    {
      op->vtkMRMLColorNode::SetNamesFromColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_GetModifiedSinceRead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModifiedSinceRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetModifiedSinceRead() :
      op->vtkMRMLColorNode::GetModifiedSinceRead());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorNode_CreateLookupTableCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateLookupTableCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorNode *op = static_cast<vtkMRMLColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->CreateLookupTableCopy() :
      op->vtkMRMLColorNode::CreateLookupTableCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLColorNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLColorNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLColorNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLColorNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLColorNode\nC++: static vtkMRMLColorNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLColorNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLColorNode\nC++: vtkMRMLColorNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLColorNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLColorNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLColorNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"Copy", PyvtkMRMLColorNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLColorNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"Reset", PyvtkMRMLColorNode_Reset, METH_VARARGS,
   "Reset(self, defaultNode:vtkMRMLNode) -> None\nC++: void Reset(vtkMRMLNode *defaultNode) override;\n\nReset node attributes to the initial state as defined in the\nconstructor. NOTE:   it preserves values several dynamic\nattributes that may be set by an application: type, name\n"},
  {"UpdateScene", PyvtkMRMLColorNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\n\n"},
  {"SetType", PyvtkMRMLColorNode_SetType, METH_VARARGS,
   "SetType(self, type:int) -> None\nC++: virtual void SetType(int type)\n\nSet Type to type, then build colors and set names\n"},
  {"GetType", PyvtkMRMLColorNode_GetType, METH_VARARGS,
   "GetType(self) -> int\nC++: virtual int GetType()\n\nGet for Type\n"},
  {"SetTypeToUser", PyvtkMRMLColorNode_SetTypeToUser, METH_VARARGS,
   "SetTypeToUser(self) -> None\nC++: void SetTypeToUser()\n\nSet the type to User or File, ones that don't require building\ndata structures, just setting flags\n"},
  {"SetTypeToFile", PyvtkMRMLColorNode_SetTypeToFile, METH_VARARGS,
   "SetTypeToFile(self) -> None\nC++: void SetTypeToFile()\n\n"},
  {"ProcessMRMLEvents", PyvtkMRMLColorNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nalternative method to propagate events generated in Storage nodes\n"},
  {"GetFirstType", PyvtkMRMLColorNode_GetFirstType, METH_VARARGS,
   "GetFirstType(self) -> int\nC++: virtual int GetFirstType()\n\nReturn the lowest and highest integers, for use in looping.\nOverride in subclasses when more enums are added.\n"},
  {"GetLastType", PyvtkMRMLColorNode_GetLastType, METH_VARARGS,
   "GetLastType(self) -> int\nC++: virtual int GetLastType()\n\n"},
  {"GetTypeAsString", PyvtkMRMLColorNode_GetTypeAsString, METH_VARARGS,
   "GetTypeAsString(self) -> str\nC++: virtual const char *GetTypeAsString()\n\nreturn a text string describing the color look up table type\n"},
  {"GetColorName", PyvtkMRMLColorNode_GetColorName, METH_VARARGS,
   "GetColorName(self, ind:int) -> str\nC++: const char *GetColorName(int ind)\n\nGet name of a color from its index (index is 0-based)\n\\sa GetColorIndexByName()\n"},
  {"GetColorIndexByName", PyvtkMRMLColorNode_GetColorIndexByName, METH_VARARGS,
   "GetColorIndexByName(self, name:str) -> int\nC++: int GetColorIndexByName(const char *name)\n\nReturn the index associated with this color name, which can then\nbe used to get the color. Returns -1 on failure.\n\\sa GetColorName()\n"},
  {"GetColorNameAsFileName", PyvtkMRMLColorNode_GetColorNameAsFileName, METH_VARARGS,
   "GetColorNameAsFileName(self, colorIndex:int, subst:str=\"_\")\n    -> str\nC++: std::string GetColorNameAsFileName(int colorIndex,\n    const char *subst=\"_\")\n\nGet the 0'th based \\a colorIndex'th name of this color, replacing\nall file name sensitive color name characters with safer\ncharacter(s). Only alphanumeric characters (A-Z,a-z,0-9) and\n'-','_','.','(',')','$', '!','~','#',','%','^','{','}' are supported;\n'/', '&', '?', '<' ... are replaced with '_' (or any other\nsubstitution string) While ' '(space) and accents are technically\nvalid file name characters, they are replaced as an extra\nprecaution. The color name is truncated to not be longer than 255\ncharacters.subst can be made of invalid characters and be longer\nthan 1 char\n\\sa GetColorNameWithoutSpaces\n"},
  {"GetColorNameWithoutSpaces", PyvtkMRMLColorNode_GetColorNameWithoutSpaces, METH_VARARGS,
   "GetColorNameWithoutSpaces(self, ind:int, subst:str) -> str\nC++: std::string GetColorNameWithoutSpaces(int ind,\n    const char *subst)\n\n\\deprecated GetColorNameWithoutSpaces Get the 0th based nth name\nof this color, replacing the spaces with subst\n\\sa GetColorNameAsFileName\n"},
  {"SetColorName", PyvtkMRMLColorNode_SetColorName, METH_VARARGS,
   "SetColorName(self, ind:int, name:str) -> int\nC++: int SetColorName(int ind, const char *name)\n\nSet the 0th based nth name of this color. Returns 1 on success, 0\non failure.\n"},
  {"SetColorNameWithSpaces", PyvtkMRMLColorNode_SetColorNameWithSpaces, METH_VARARGS,
   "SetColorNameWithSpaces(self, ind:int, name:str, subst:str) -> int\nC++: int SetColorNameWithSpaces(int ind, const char *name,\n    const char *subst)\n\nSet the 0th based nth name of this color, replacing the subst\ncharacter with spaces. Returns 1 on success, 0 on failure\n"},
  {"GetNumberOfColors", PyvtkMRMLColorNode_GetNumberOfColors, METH_VARARGS,
   "GetNumberOfColors(self) -> int\nC++: virtual int GetNumberOfColors()\n\nGet the number of colors in the table\n"},
  {"GetColor", PyvtkMRMLColorNode_GetColor, METH_VARARGS,
   "GetColor(self, ind:int, color:[float, float, float, float])\n    -> bool\nC++: virtual bool GetColor(int ind, double color[4])\n\nRetrieve the color associated to the index Must be reimplemented\nin the derived classes Return 1 if the color exists, 0 otherwise\n"},
  {"SetFileName", PyvtkMRMLColorNode_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nName of the file name from which to read color information\n"},
  {"GetFileName", PyvtkMRMLColorNode_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"GetLookupTable", PyvtkMRMLColorNode_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkLookupTable\nC++: virtual vtkLookupTable *GetLookupTable()\n\nMost color nodes will implement a look up table, so provide a top\nlevel get method\n"},
  {"GetScalarsToColors", PyvtkMRMLColorNode_GetScalarsToColors, METH_VARARGS,
   "GetScalarsToColors(self) -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetScalarsToColors()\n\nUtility function that either returns a vtkLookupTable or a\nvtkColorTransferFunction whichever makes more sense. Returns\nvtkMRMLColorNode::GetLookupTable() by default. You should the\nmethod if you want it to return something else in subclasses\n"},
  {"GetNoName", PyvtkMRMLColorNode_GetNoName, METH_VARARGS,
   "GetNoName(self) -> str\nC++: virtual char *GetNoName()\n\nget/set the string used for an unnamed color \"(none)\" by default.\n\\sa SetColorName\n"},
  {"SetNoName", PyvtkMRMLColorNode_SetNoName, METH_VARARGS,
   "SetNoName(self, _arg:str) -> None\nC++: virtual void SetNoName(const char *_arg)\n\n"},
  {"GetNamesInitialised", PyvtkMRMLColorNode_GetNamesInitialised, METH_VARARGS,
   "GetNamesInitialised(self) -> int\nC++: virtual int GetNamesInitialised()\n\nGet/Set for the flag on names array having been initialized\n"},
  {"SetNamesInitialised", PyvtkMRMLColorNode_SetNamesInitialised, METH_VARARGS,
   "SetNamesInitialised(self, _arg:int) -> None\nC++: virtual void SetNamesInitialised(int _arg)\n\n"},
  {"NamesInitialisedOn", PyvtkMRMLColorNode_NamesInitialisedOn, METH_VARARGS,
   "NamesInitialisedOn(self) -> None\nC++: virtual void NamesInitialisedOn()\n\n"},
  {"NamesInitialisedOff", PyvtkMRMLColorNode_NamesInitialisedOff, METH_VARARGS,
   "NamesInitialisedOff(self) -> None\nC++: virtual void NamesInitialisedOff()\n\n"},
  {"SetNamesFromColors", PyvtkMRMLColorNode_SetNamesFromColors, METH_VARARGS,
   "SetNamesFromColors(self) -> None\nC++: void SetNamesFromColors()\n\nSet values in the names vector from the colors in the node\n"},
  {"GetModifiedSinceRead", PyvtkMRMLColorNode_GetModifiedSinceRead, METH_VARARGS,
   "GetModifiedSinceRead(self) -> bool\nC++: bool GetModifiedSinceRead() override;\n\n\\sa vtkMRMLStorableNode::GetModifiedSinceRead()\n"},
  {"CreateLookupTableCopy", PyvtkMRMLColorNode_CreateLookupTableCopy, METH_VARARGS,
   "CreateLookupTableCopy(self) -> vtkLookupTable\nC++: virtual vtkLookupTable *CreateLookupTableCopy()\n\nHelper function for copying lookup tables It handles special\ntypes of lookup tables and fixes error in vtkLookupTable copy.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLColorNode_Doc =
  "vtkMRMLColorNode - Abstract MRML node to represent color information.\n\n"
  "Superclass: vtkMRMLStorableNode\n\n"
  "Color nodes describe color look up tables. The tables may be\n"
  "pre-generated by Slicer (the label map colors, some default ramps, a\n"
  "random one) or created by a user. More than one model or label volume\n"
  "or editor can access the prebuilt nodes. This is used as a superclass\n"
  "for table based, procedural based, and implicit function based color\n"
  "nodes. All the color names are initialized to NoName (\"(none)\") when\n"
  "the table is created, using the max index of the colors expected to\n"
  "fill the table to set the size of the names array. If the node is\n"
  "being read in from a file, not all of the colors might be present\n"
  "from 0-max, so the color name should remain (none) at those indices.\n"
  "But if the color node is being built up from colors without names,\n"
  "there is a method to init the names from the color RGBA values so\n"
  "that something would be there rather than the default NoName which is\n"
  "used to determine that it's a unnamed and probably uninitialized\n"
  "color.\n\n"
  "Subclasses must reimplement GetColor() and GetNumberOfColors().\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLColorNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLColorNode", // tp_name
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
  PyvtkMRMLColorNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLColorNode_StaticNew()
{
  return vtkMRMLColorNode::New();
}

PyObject *PyvtkMRMLColorNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLColorNode_Type, PyvtkMRMLColorNode_Methods,
    "vtkMRMLColorNode",
 &PyvtkMRMLColorNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLStorableNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "TypeModifiedEvent", vtkMRMLColorNode::TypeModifiedEvent },
        { "User", vtkMRMLColorNode::User },
        { "File", vtkMRMLColorNode::File },
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

void PyVTKAddFile_vtkMRMLColorNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLColorNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLColorNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

