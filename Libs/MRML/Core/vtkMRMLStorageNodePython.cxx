// python wrapper for vtkMRMLStorageNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTimeStamp.h"
#include "vtkMRMLStorageNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLStorageNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLStorageNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLNode_ClassNew
extern "C" { PyObject *PyvtkMRMLNode_ClassNew(); }
#define DECLARED_PyvtkMRMLNode_ClassNew
#endif

static PyObject *
PyvtkMRMLStorageNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLStorageNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLStorageNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLStorageNode *tempr = vtkMRMLStorageNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLStorageNode::NewInstance());

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
PyvtkMRMLStorageNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLStorageNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLStorageNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = op->CreateNodeInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetStorableNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorableNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorableNode *tempr = (ap.IsBound() ?
      op->GetStorableNode() :
      op->vtkMRMLStorageNode::GetStorableNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_ReadData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->ReadData(temp0, temp1) :
      op->vtkMRMLStorageNode::ReadData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_WriteData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    int tempr = (ap.IsBound() ?
      op->WriteData(temp0) :
      op->vtkMRMLStorageNode::WriteData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

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
      op->vtkMRMLStorageNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetNodeTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

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
      op->vtkMRMLStorageNode::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMRMLStorageNode::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetSupportedFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportedFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = true;
  bool temp2 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetSupportedFileExtension(temp0, temp1, temp2) :
      op->vtkMRMLStorageNode::GetSupportedFileExtension(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetNthFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthFileName(temp0) :
      op->vtkMRMLStorageNode::GetNthFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_UseCompressionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCompressionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCompressionOn();
    }
    else
    {
      op->vtkMRMLStorageNode::UseCompressionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_UseCompressionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCompressionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCompressionOff();
    }
    else
    {
      op->vtkMRMLStorageNode::UseCompressionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetUseCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseCompression() :
      op->vtkMRMLStorageNode::GetUseCompression());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetUseCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCompression(temp0);
    }
    else
    {
      op->vtkMRMLStorageNode::SetUseCompression(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetURI(temp0);
    }
    else
    {
      op->vtkMRMLStorageNode::SetURI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetURI() :
      op->vtkMRMLStorageNode::GetURI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetURIHandler(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetURIHandler");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkURIHandler *tempr = (ap.IsBound() ?
      op->GetURIHandler() :
      op->vtkMRMLStorageNode::GetURIHandler());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetURIHandler(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetURIHandler");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  vtkURIHandler *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkURIHandler"))
  {
    if (ap.IsBound())
    {
      op->SetURIHandler(temp0);
    }
    else
    {
      op->vtkMRMLStorageNode::SetURIHandler(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

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
      op->vtkMRMLStorageNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLStorageNode_GetReadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadState() :
      op->vtkMRMLStorageNode::GetReadState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetReadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadState(temp0);
    }
    else
    {
      op->vtkMRMLStorageNode::SetReadState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetReadStatePending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadStatePending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetReadStatePending();
    }
    else
    {
      op->vtkMRMLStorageNode::SetReadStatePending();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetReadStateIdle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadStateIdle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetReadStateIdle();
    }
    else
    {
      op->vtkMRMLStorageNode::SetReadStateIdle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetReadStateScheduled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadStateScheduled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetReadStateScheduled();
    }
    else
    {
      op->vtkMRMLStorageNode::SetReadStateScheduled();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetReadStateTransferring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadStateTransferring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetReadStateTransferring();
    }
    else
    {
      op->vtkMRMLStorageNode::SetReadStateTransferring();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetReadStateTransferDone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadStateTransferDone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetReadStateTransferDone();
    }
    else
    {
      op->vtkMRMLStorageNode::SetReadStateTransferDone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetReadStateCancelled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadStateCancelled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetReadStateCancelled();
    }
    else
    {
      op->vtkMRMLStorageNode::SetReadStateCancelled();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetReadStateSkippedNoData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadStateSkippedNoData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetReadStateSkippedNoData();
    }
    else
    {
      op->vtkMRMLStorageNode::SetReadStateSkippedNoData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetStateAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStateAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetStateAsString(temp0) :
      op->vtkMRMLStorageNode::GetStateAsString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetReadStateAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadStateAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetReadStateAsString() :
      op->vtkMRMLStorageNode::GetReadStateAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetWriteState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteState() :
      op->vtkMRMLStorageNode::GetWriteState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetWriteState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteState(temp0);
    }
    else
    {
      op->vtkMRMLStorageNode::SetWriteState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetWriteStatePending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteStatePending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWriteStatePending();
    }
    else
    {
      op->vtkMRMLStorageNode::SetWriteStatePending();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetWriteStateIdle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteStateIdle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWriteStateIdle();
    }
    else
    {
      op->vtkMRMLStorageNode::SetWriteStateIdle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetWriteStateScheduled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteStateScheduled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWriteStateScheduled();
    }
    else
    {
      op->vtkMRMLStorageNode::SetWriteStateScheduled();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetWriteStateTransferring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteStateTransferring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWriteStateTransferring();
    }
    else
    {
      op->vtkMRMLStorageNode::SetWriteStateTransferring();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetWriteStateTransferDone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteStateTransferDone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWriteStateTransferDone();
    }
    else
    {
      op->vtkMRMLStorageNode::SetWriteStateTransferDone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetWriteStateCancelled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteStateCancelled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWriteStateCancelled();
    }
    else
    {
      op->vtkMRMLStorageNode::SetWriteStateCancelled();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetWriteStateSkippedNoData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteStateSkippedNoData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWriteStateSkippedNoData();
    }
    else
    {
      op->vtkMRMLStorageNode::SetWriteStateSkippedNoData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetWriteStateAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteStateAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetWriteStateAsString() :
      op->vtkMRMLStorageNode::GetWriteStateAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetFullNameFromFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullNameFromFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFullNameFromFileName() :
      op->vtkMRMLStorageNode::GetFullNameFromFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetFullNameFromNthFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullNameFromNthFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFullNameFromNthFileName(temp0) :
      op->vtkMRMLStorageNode::GetFullNameFromNthFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SupportedFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportedFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SupportedFileType(temp0) :
      op->vtkMRMLStorageNode::SupportedFileType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetSupportedReadFileTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportedReadFileTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetSupportedReadFileTypes() :
      op->vtkMRMLStorageNode::GetSupportedReadFileTypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetSupportedWriteFileTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportedWriteFileTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetSupportedWriteFileTypes() :
      op->vtkMRMLStorageNode::GetSupportedWriteFileTypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetFileExtensionsFromFileTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensionsFromFileTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  vtkStringArray *temp0 = nullptr;
  vtkStringArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkStringArray") &&
      ap.GetVTKObject(temp1, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->GetFileExtensionsFromFileTypes(temp0, temp1);
    }
    else
    {
      op->vtkMRMLStorageNode::GetFileExtensionsFromFileTypes(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetWriteFileFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteFileFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteFileFormat(temp0);
    }
    else
    {
      op->vtkMRMLStorageNode::SetWriteFileFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetWriteFileFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteFileFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetWriteFileFormat() :
      op->vtkMRMLStorageNode::GetWriteFileFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_AddFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->AddFileName(temp0) :
      op->vtkMRMLStorageNode::AddFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_ResetFileNameList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFileNameList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetFileNameList();
    }
    else
    {
      op->vtkMRMLStorageNode::ResetFileNameList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetNumberOfFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFileNames() :
      op->vtkMRMLStorageNode::GetNumberOfFileNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_FileNameIsInList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FileNameIsInList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->FileNameIsInList(temp0) :
      op->vtkMRMLStorageNode::FileNameIsInList(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_AddURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->AddURI(temp0) :
      op->vtkMRMLStorageNode::AddURI(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetNthURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthURI(temp0) :
      op->vtkMRMLStorageNode::GetNthURI(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_ResetURIList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetURIList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetURIList();
    }
    else
    {
      op->vtkMRMLStorageNode::ResetURIList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetNumberOfURIs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfURIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfURIs() :
      op->vtkMRMLStorageNode::GetNumberOfURIs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetDataDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataDirectory(temp0);
    }
    else
    {
      op->vtkMRMLStorageNode::SetDataDirectory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetURIPrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetURIPrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetURIPrefix(temp0);
    }
    else
    {
      op->vtkMRMLStorageNode::SetURIPrefix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetDefaultWriteFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultWriteFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultWriteFileExtension() :
      op->vtkMRMLStorageNode::GetDefaultWriteFileExtension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetDefaultWriteFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultWriteFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultWriteFileExtension(temp0);
    }
    else
    {
      op->vtkMRMLStorageNode::SetDefaultWriteFileExtension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_ResetNthFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetNthFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ResetNthFileName(temp0, temp1);
    }
    else
    {
      op->vtkMRMLStorageNode::ResetNthFileName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_ResetNthURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetNthURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ResetNthURI(temp0, temp1);
    }
    else
    {
      op->vtkMRMLStorageNode::ResetNthURI(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_IsFilePathRelative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFilePathRelative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsFilePathRelative(temp0) :
      op->vtkMRMLStorageNode::IsFilePathRelative(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetAbsoluteFilePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteFilePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAbsoluteFilePath(temp0) :
      op->vtkMRMLStorageNode::GetAbsoluteFilePath(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetTempFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTempFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTempFileName(temp0);
    }
    else
    {
      op->vtkMRMLStorageNode::SetTempFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetTempFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTempFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTempFileName() :
      op->vtkMRMLStorageNode::GetTempFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_InvalidateFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvalidateFile();
    }
    else
    {
      op->vtkMRMLStorageNode::InvalidateFile();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetStoredTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStoredTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTimeStamp tempr = (ap.IsBound() ?
      op->GetStoredTime() :
      op->vtkMRMLStorageNode::GetStoredTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_CanReadInReferenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadInReferenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = op->CanReadInReferenceNode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_CanWriteFromReferenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanWriteFromReferenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanWriteFromReferenceNode(temp0) :
      op->vtkMRMLStorageNode::CanWriteFromReferenceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_ConfigureForDataExchange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConfigureForDataExchange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConfigureForDataExchange();
    }
    else
    {
      op->vtkMRMLStorageNode::ConfigureForDataExchange();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetLowercaseExtensionFromFileName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLowercaseExtensionFromFileName");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkMRMLStorageNode::GetLowercaseExtensionFromFileName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetFileNameWithoutExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameWithoutExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFileNameWithoutExtension(temp0) :
      op->vtkMRMLStorageNode::GetFileNameWithoutExtension(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_SetCompressionParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompressionParameter(temp0);
    }
    else
    {
      op->vtkMRMLStorageNode::SetCompressionParameter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetCompressionParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCompressionParameter() :
      op->vtkMRMLStorageNode::GetCompressionParameter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetCompressionPresetDisplayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionPresetDisplayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetCompressionPresetDisplayNames() :
      op->vtkMRMLStorageNode::GetCompressionPresetDisplayNames());

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


static PyObject *
PyvtkMRMLStorageNode_GetCompressionParameterFromDisplayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionParameterFromDisplayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCompressionParameterFromDisplayName(temp0) :
      op->vtkMRMLStorageNode::GetCompressionParameterFromDisplayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetDisplayNameFromCompressionParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayNameFromCompressionParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDisplayNameFromCompressionParameter(temp0) :
      op->vtkMRMLStorageNode::GetDisplayNameFromCompressionParameter(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetNumberOfCompressionPresets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCompressionPresets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCompressionPresets() :
      op->vtkMRMLStorageNode::GetNumberOfCompressionPresets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetCoordinateSystemTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCoordinateSystemTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLStorageNode::GetCoordinateSystemTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetCoordinateSystemTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCoordinateSystemTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLStorageNode::GetCoordinateSystemTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStorageNode_GetUserMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStorageNode *op = static_cast<vtkMRMLStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMessageCollection *tempr = (ap.IsBound() ?
      op->GetUserMessages() :
      op->vtkMRMLStorageNode::GetUserMessages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLStorageNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLStorageNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLStorageNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLStorageNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLStorageNode\nC++: static vtkMRMLStorageNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLStorageNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLStorageNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLStorageNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLStorageNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override = 0;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"GetStorableNode", PyvtkMRMLStorageNode_GetStorableNode, METH_VARARGS,
   "GetStorableNode(self) -> vtkMRMLStorableNode\nC++: virtual vtkMRMLStorableNode *GetStorableNode()\n\nReturns the first storable node that is associated to this\nstorage node\n\\sa vtkMRMLStorableNode\n"},
  {"ReadData", PyvtkMRMLStorageNode_ReadData, METH_VARARGS,
   "ReadData(self, refNode:vtkMRMLNode, temporaryFile:bool=False)\n    -> int\nC++: virtual int ReadData(vtkMRMLNode *refNode,\n    bool temporaryFile=false)\n\nRead data from FileName and set it in the referenced node. If\ntemporaryFile is true, it informs the reader that the file to\nread is from a temporary directory. It means that the node should\nprobably be saved by the user before leaving the application as\nthe file might already be deleted or be deleted soon after.\nReturn 1 on success, 0 on failure.\\todo make temporaryFile a\nproperty (similar to what FileName)\n\\sa SetFileName(), ReadDataInternal(), GetStoredTime()\n"},
  {"WriteData", PyvtkMRMLStorageNode_WriteData, METH_VARARGS,
   "WriteData(self, refNode:vtkMRMLNode) -> int\nC++: virtual int WriteData(vtkMRMLNode *refNode)\n\nWrite data from a  referenced node Return 1 on success, 0 on\nfailure. NOTE: Subclasses should implement WriteDataInternal(),\nnot this method.\n\\sa WriteDataInternal()\n"},
  {"Copy", PyvtkMRMLStorageNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLStorageNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override = 0;\n\nGet node XML tag name (like Storage, Model)\n"},
  {"SetFileName", PyvtkMRMLStorageNode_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nA file name or the archetype file name for a series used for read\nor write\n\\sa ReadData(), WriteData()\n"},
  {"GetFileName", PyvtkMRMLStorageNode_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"GetSupportedFileExtension", PyvtkMRMLStorageNode_GetSupportedFileExtension, METH_VARARGS,
   "GetSupportedFileExtension(self, fileName:str=...,\n    includeReadable:bool=True, includeWriteable:bool=True) -> str\nC++: virtual std::string GetSupportedFileExtension(\n    const char *fileName=nullptr, bool includeReadable=true,\n    bool includeWriteable=true)\n\nReturn complete file extension for the specified filename.\nLongest matched extension will be returned (.seg.nrrd will be\nreturned if both .nrrd and .seg.nrrd are matched), including dot.\nIf filename is not specified then the current FileName will be\nused If there is no match then empty is returned.\n"},
  {"GetNthFileName", PyvtkMRMLStorageNode_GetNthFileName, METH_VARARGS,
   "GetNthFileName(self, n:int) -> str\nC++: const char *GetNthFileName(int n)\n\nreturn the nth file name, null if doesn't exist\n"},
  {"UseCompressionOn", PyvtkMRMLStorageNode_UseCompressionOn, METH_VARARGS,
   "UseCompressionOn(self) -> None\nC++: virtual void UseCompressionOn()\n\nUse compression on write\n"},
  {"UseCompressionOff", PyvtkMRMLStorageNode_UseCompressionOff, METH_VARARGS,
   "UseCompressionOff(self) -> None\nC++: virtual void UseCompressionOff()\n\n"},
  {"GetUseCompression", PyvtkMRMLStorageNode_GetUseCompression, METH_VARARGS,
   "GetUseCompression(self) -> int\nC++: virtual int GetUseCompression()\n\n"},
  {"SetUseCompression", PyvtkMRMLStorageNode_SetUseCompression, METH_VARARGS,
   "SetUseCompression(self, _arg:int) -> None\nC++: virtual void SetUseCompression(int _arg)\n\n"},
  {"SetURI", PyvtkMRMLStorageNode_SetURI, METH_VARARGS,
   "SetURI(self, _arg:str) -> None\nC++: virtual void SetURI(const char *_arg)\n\nLocation of the remote copy of this file.\n"},
  {"GetURI", PyvtkMRMLStorageNode_GetURI, METH_VARARGS,
   "GetURI(self) -> str\nC++: virtual char *GetURI()\n\n"},
  {"GetURIHandler", PyvtkMRMLStorageNode_GetURIHandler, METH_VARARGS,
   "GetURIHandler(self) -> vtkURIHandler\nC++: virtual vtkURIHandler *GetURIHandler()\n\n"},
  {"SetURIHandler", PyvtkMRMLStorageNode_SetURIHandler, METH_VARARGS,
   "SetURIHandler(self, uriHandler:vtkURIHandler) -> None\nC++: virtual void SetURIHandler(vtkURIHandler *uriHandler)\n\n"},
  {"ProcessMRMLEvents", PyvtkMRMLStorageNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nPropagate Progress Event generated in ReadData\n"},
  {"GetReadState", PyvtkMRMLStorageNode_GetReadState, METH_VARARGS,
   "GetReadState(self) -> int\nC++: virtual int GetReadState()\n\nGet/Set the state of reading\n"},
  {"SetReadState", PyvtkMRMLStorageNode_SetReadState, METH_VARARGS,
   "SetReadState(self, _arg:int) -> None\nC++: virtual void SetReadState(int _arg)\n\n"},
  {"SetReadStatePending", PyvtkMRMLStorageNode_SetReadStatePending, METH_VARARGS,
   "SetReadStatePending(self) -> None\nC++: void SetReadStatePending()\n\n"},
  {"SetReadStateIdle", PyvtkMRMLStorageNode_SetReadStateIdle, METH_VARARGS,
   "SetReadStateIdle(self) -> None\nC++: void SetReadStateIdle()\n\n"},
  {"SetReadStateScheduled", PyvtkMRMLStorageNode_SetReadStateScheduled, METH_VARARGS,
   "SetReadStateScheduled(self) -> None\nC++: void SetReadStateScheduled()\n\n"},
  {"SetReadStateTransferring", PyvtkMRMLStorageNode_SetReadStateTransferring, METH_VARARGS,
   "SetReadStateTransferring(self) -> None\nC++: void SetReadStateTransferring()\n\n"},
  {"SetReadStateTransferDone", PyvtkMRMLStorageNode_SetReadStateTransferDone, METH_VARARGS,
   "SetReadStateTransferDone(self) -> None\nC++: void SetReadStateTransferDone()\n\n"},
  {"SetReadStateCancelled", PyvtkMRMLStorageNode_SetReadStateCancelled, METH_VARARGS,
   "SetReadStateCancelled(self) -> None\nC++: void SetReadStateCancelled()\n\n"},
  {"SetReadStateSkippedNoData", PyvtkMRMLStorageNode_SetReadStateSkippedNoData, METH_VARARGS,
   "SetReadStateSkippedNoData(self) -> None\nC++: void SetReadStateSkippedNoData()\n\n"},
  {"GetStateAsString", PyvtkMRMLStorageNode_GetStateAsString, METH_VARARGS,
   "GetStateAsString(self, state:int) -> str\nC++: const char *GetStateAsString(int state)\n\n"},
  {"GetReadStateAsString", PyvtkMRMLStorageNode_GetReadStateAsString, METH_VARARGS,
   "GetReadStateAsString(self) -> str\nC++: const char *GetReadStateAsString()\n\n"},
  {"GetWriteState", PyvtkMRMLStorageNode_GetWriteState, METH_VARARGS,
   "GetWriteState(self) -> int\nC++: virtual int GetWriteState()\n\nGet/Set the state of writing\n"},
  {"SetWriteState", PyvtkMRMLStorageNode_SetWriteState, METH_VARARGS,
   "SetWriteState(self, _arg:int) -> None\nC++: virtual void SetWriteState(int _arg)\n\n"},
  {"SetWriteStatePending", PyvtkMRMLStorageNode_SetWriteStatePending, METH_VARARGS,
   "SetWriteStatePending(self) -> None\nC++: void SetWriteStatePending()\n\n"},
  {"SetWriteStateIdle", PyvtkMRMLStorageNode_SetWriteStateIdle, METH_VARARGS,
   "SetWriteStateIdle(self) -> None\nC++: void SetWriteStateIdle()\n\n"},
  {"SetWriteStateScheduled", PyvtkMRMLStorageNode_SetWriteStateScheduled, METH_VARARGS,
   "SetWriteStateScheduled(self) -> None\nC++: void SetWriteStateScheduled()\n\n"},
  {"SetWriteStateTransferring", PyvtkMRMLStorageNode_SetWriteStateTransferring, METH_VARARGS,
   "SetWriteStateTransferring(self) -> None\nC++: void SetWriteStateTransferring()\n\n"},
  {"SetWriteStateTransferDone", PyvtkMRMLStorageNode_SetWriteStateTransferDone, METH_VARARGS,
   "SetWriteStateTransferDone(self) -> None\nC++: void SetWriteStateTransferDone()\n\n"},
  {"SetWriteStateCancelled", PyvtkMRMLStorageNode_SetWriteStateCancelled, METH_VARARGS,
   "SetWriteStateCancelled(self) -> None\nC++: void SetWriteStateCancelled()\n\n"},
  {"SetWriteStateSkippedNoData", PyvtkMRMLStorageNode_SetWriteStateSkippedNoData, METH_VARARGS,
   "SetWriteStateSkippedNoData(self) -> None\nC++: void SetWriteStateSkippedNoData()\n\n"},
  {"GetWriteStateAsString", PyvtkMRMLStorageNode_GetWriteStateAsString, METH_VARARGS,
   "GetWriteStateAsString(self) -> str\nC++: const char *GetWriteStateAsString()\n\n"},
  {"GetFullNameFromFileName", PyvtkMRMLStorageNode_GetFullNameFromFileName, METH_VARARGS,
   "GetFullNameFromFileName(self) -> str\nC++: std::string GetFullNameFromFileName()\n\nGet the file's absolute path from the file name and the mrml\nscene root dir. GetFullNameFromFileName calls\nGetFullNameFromNthFileName with -1.\n"},
  {"GetFullNameFromNthFileName", PyvtkMRMLStorageNode_GetFullNameFromNthFileName, METH_VARARGS,
   "GetFullNameFromNthFileName(self, n:int) -> str\nC++: std::string GetFullNameFromNthFileName(int n)\n\n"},
  {"SupportedFileType", PyvtkMRMLStorageNode_SupportedFileType, METH_VARARGS,
   "SupportedFileType(self, fileName:str) -> int\nC++: virtual int SupportedFileType(const char *fileName)\n\nCheck to see if this storage node can handle the file type in the\ninput string. If input string is null, check URI, then check\nFileName. Returns nonzero if supported, 0 otherwise. The higher\nthe value, the higher the confidence that this reader is the most\nsuitable for reading the file. Typically, the confidence is the\nlength of the file matched file extension (including the dot).\nSo, for example for .nrrd file extension the returned value is 5,\nfor .seg.nrrd the returned value is 9. If a reader looks into the\nfile content then it may return with much higher confidence\nvalues. Subclasses should implement this method.\n"},
  {"GetSupportedReadFileTypes", PyvtkMRMLStorageNode_GetSupportedReadFileTypes, METH_VARARGS,
   "GetSupportedReadFileTypes(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetSupportedReadFileTypes()\n\nGet all the supported read file types Subclasses should overwrite\nInitializeSupportedReadFileTypes().\n"},
  {"GetSupportedWriteFileTypes", PyvtkMRMLStorageNode_GetSupportedWriteFileTypes, METH_VARARGS,
   "GetSupportedWriteFileTypes(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetSupportedWriteFileTypes()\n\nGet all the supported write file types Subclasses should\noverwrite InitializeSupportedWriteFileTypes().\n"},
  {"GetFileExtensionsFromFileTypes", PyvtkMRMLStorageNode_GetFileExtensionsFromFileTypes, METH_VARARGS,
   "GetFileExtensionsFromFileTypes(self,\n    inputFileTypes:vtkStringArray,\n    outputFileExtensions:vtkStringArray) -> None\nC++: virtual void GetFileExtensionsFromFileTypes(\n    vtkStringArray *inputFileTypes,\n    vtkStringArray *outputFileExtensions)\n\nGet all file extensions from file types list returned by\nGetSupportedReadFileTypes() or GetSupportedWriteFileTypes().\nAlways includes a dot. If extension is not specified for a type\nor .* is specified then .* will be returned.\n"},
  {"SetWriteFileFormat", PyvtkMRMLStorageNode_SetWriteFileFormat, METH_VARARGS,
   "SetWriteFileFormat(self, _arg:str) -> None\nC++: virtual void SetWriteFileFormat(const char *_arg)\n\nAllow to set specific file format that this node will write\noutput.\n"},
  {"GetWriteFileFormat", PyvtkMRMLStorageNode_GetWriteFileFormat, METH_VARARGS,
   "GetWriteFileFormat(self) -> str\nC++: virtual char *GetWriteFileFormat()\n\n"},
  {"AddFileName", PyvtkMRMLStorageNode_AddFileName, METH_VARARGS,
   "AddFileName(self, fileName:str) -> int\nC++: unsigned int AddFileName(const char *fileName)\n\nAdd in another file name to the list of file names\n"},
  {"ResetFileNameList", PyvtkMRMLStorageNode_ResetFileNameList, METH_VARARGS,
   "ResetFileNameList(self) -> None\nC++: void ResetFileNameList()\n\nClear the array of file names\n"},
  {"GetNumberOfFileNames", PyvtkMRMLStorageNode_GetNumberOfFileNames, METH_VARARGS,
   "GetNumberOfFileNames(self) -> int\nC++: int GetNumberOfFileNames()\n\nSee how many file names were generated during ExecuteInformation\n"},
  {"FileNameIsInList", PyvtkMRMLStorageNode_FileNameIsInList, METH_VARARGS,
   "FileNameIsInList(self, fileName:str) -> int\nC++: int FileNameIsInList(const char *fileName)\n\nis filename in the filename list already? returns 1 if yes, 0 if\nno\n"},
  {"AddURI", PyvtkMRMLStorageNode_AddURI, METH_VARARGS,
   "AddURI(self, uri:str) -> int\nC++: unsigned int AddURI(const char *uri)\n\nAdd in another URI to the list of URI's\n"},
  {"GetNthURI", PyvtkMRMLStorageNode_GetNthURI, METH_VARARGS,
   "GetNthURI(self, n:int) -> str\nC++: const char *GetNthURI(int n)\n\nGet the nth URI from the list of URI's\n"},
  {"ResetURIList", PyvtkMRMLStorageNode_ResetURIList, METH_VARARGS,
   "ResetURIList(self) -> None\nC++: void ResetURIList()\n\nClear the array of URIs\n"},
  {"GetNumberOfURIs", PyvtkMRMLStorageNode_GetNumberOfURIs, METH_VARARGS,
   "GetNumberOfURIs(self) -> int\nC++: int GetNumberOfURIs()\n\nReturn how many URI names this storage node holds in it's list\n"},
  {"SetDataDirectory", PyvtkMRMLStorageNode_SetDataDirectory, METH_VARARGS,
   "SetDataDirectory(self, dataDirName:str) -> None\nC++: void SetDataDirectory(const char *dataDirName)\n\nSet a new data directory for all files\n"},
  {"SetURIPrefix", PyvtkMRMLStorageNode_SetURIPrefix, METH_VARARGS,
   "SetURIPrefix(self, uriPrefix:str) -> None\nC++: void SetURIPrefix(const char *uriPrefix)\n\nSet a new URI base for all URI's\n"},
  {"GetDefaultWriteFileExtension", PyvtkMRMLStorageNode_GetDefaultWriteFileExtension, METH_VARARGS,
   "GetDefaultWriteFileExtension(self) -> str\nC++: virtual const char *GetDefaultWriteFileExtension()\n\nReturn default file extension for writing.\n"},
  {"SetDefaultWriteFileExtension", PyvtkMRMLStorageNode_SetDefaultWriteFileExtension, METH_VARARGS,
   "SetDefaultWriteFileExtension(self, ext:str) -> None\nC++: virtual void SetDefaultWriteFileExtension(const char *ext)\n\nSet default file extension for writing. It is just a hint, the\nstorage node may choose a different extension if the provided\nextension is not suitable.\n"},
  {"ResetNthFileName", PyvtkMRMLStorageNode_ResetNthFileName, METH_VARARGS,
   "ResetNthFileName(self, n:int, fileName:str) -> None\nC++: void ResetNthFileName(int n, const char *fileName)\n\nSet the nth file in FileNameList, checks that it is already\ndefined\n"},
  {"ResetNthURI", PyvtkMRMLStorageNode_ResetNthURI, METH_VARARGS,
   "ResetNthURI(self, n:int, uri:str) -> None\nC++: void ResetNthURI(int n, const char *uri)\n\nSet the nth URI in URIList, checks that it is already defined\n"},
  {"IsFilePathRelative", PyvtkMRMLStorageNode_IsFilePathRelative, METH_VARARGS,
   "IsFilePathRelative(self, filepath:str) -> int\nC++: int IsFilePathRelative(const char *filepath)\n\nChecks is file path is a relative path by calling appropriate\nmethod on the scene depending on whether the scene pointer is\nvalid. returns 0 if it's not relative or the input is null, 1 if\nit is relative\n"},
  {"GetAbsoluteFilePath", PyvtkMRMLStorageNode_GetAbsoluteFilePath, METH_VARARGS,
   "GetAbsoluteFilePath(self, inputPath:str) -> str\nC++: const char *GetAbsoluteFilePath(const char *inputPath)\n\nCalculates and the absolute path to the input file if the input\npath is relative and the scene is defined with a root directory.\nSets and then return TempFileName. Returns null if the input path\nis null or the path is relative and the scene is not defined.\nReturns inputPath if it's absolute.\n"},
  {"SetTempFileName", PyvtkMRMLStorageNode_SetTempFileName, METH_VARARGS,
   "SetTempFileName(self, _arg:str) -> None\nC++: virtual void SetTempFileName(const char *_arg)\n\nA temporary file name used to calculate absolute paths\n"},
  {"GetTempFileName", PyvtkMRMLStorageNode_GetTempFileName, METH_VARARGS,
   "GetTempFileName(self) -> str\nC++: virtual char *GetTempFileName()\n\n"},
  {"InvalidateFile", PyvtkMRMLStorageNode_InvalidateFile, METH_VARARGS,
   "InvalidateFile(self) -> None\nC++: void InvalidateFile()\n\nInform that the file that has been last read or write has been\ndeleted. Use with care, typically called by the cache manager.\n"},
  {"GetStoredTime", PyvtkMRMLStorageNode_GetStoredTime, METH_VARARGS,
   "GetStoredTime(self) -> vtkTimeStamp\nC++: vtkTimeStamp GetStoredTime()\n\nReturn the last time stamp when a reference node has been read in\nor written from.\n"},
  {"CanReadInReferenceNode", PyvtkMRMLStorageNode_CanReadInReferenceNode, METH_VARARGS,
   "CanReadInReferenceNode(self, refNode:vtkMRMLNode) -> bool\nC++: virtual bool CanReadInReferenceNode(vtkMRMLNode *refNode)\n\nReturn true if the node can be read in. Used by ReadData to know\nif the file can be read into the reference node. Subclasses must\nreimplement the method. Typically it's a check on the node type\n(e.g. the model storage node can only read in model nodes)\n\\sa CanWriteFromReferenceNode, ReadData\n"},
  {"CanWriteFromReferenceNode", PyvtkMRMLStorageNode_CanWriteFromReferenceNode, METH_VARARGS,
   "CanWriteFromReferenceNode(self, refNode:vtkMRMLNode) -> bool\nC++: virtual bool CanWriteFromReferenceNode(vtkMRMLNode *refNode)\n\nReturn true if the node can be written from. Used by WriteData to\nknow if the file can be written from the reference node. By\ndefault it returns the same than CanReadInReferenceNode.\nSubclasses can reimplement the method.\n\\sa CanReadInReferenceNode, WriteData\n"},
  {"ConfigureForDataExchange", PyvtkMRMLStorageNode_ConfigureForDataExchange, METH_VARARGS,
   "ConfigureForDataExchange(self) -> None\nC++: virtual void ConfigureForDataExchange()\n\nConfigure the storage node for data exchange. This is an\nopportunity to optimize the storage node's settings, for instance\nto turn off compression.\n"},
  {"GetLowercaseExtensionFromFileName", PyvtkMRMLStorageNode_GetLowercaseExtensionFromFileName, METH_VARARGS,
   "GetLowercaseExtensionFromFileName(filename:str) -> str\nC++: static std::string GetLowercaseExtensionFromFileName(\n    const std::string &filename)\n\nHelper function for getting extension from a full filename. It\nalways returns lowercase extension.\n"},
  {"GetFileNameWithoutExtension", PyvtkMRMLStorageNode_GetFileNameWithoutExtension, METH_VARARGS,
   "GetFileNameWithoutExtension(self, fileName:str=...) -> str\nC++: std::string GetFileNameWithoutExtension(\n    const char *fileName=nullptr)\n\nRemove supported extension from filename. If filename is not\nspecified then the current FileName will be used.\n"},
  {"SetCompressionParameter", PyvtkMRMLStorageNode_SetCompressionParameter, METH_VARARGS,
   "SetCompressionParameter(self, _arg:str) -> None\nC++: virtual void SetCompressionParameter(std::string _arg)\n\nCompression parameter that is used to save the node\n"},
  {"GetCompressionParameter", PyvtkMRMLStorageNode_GetCompressionParameter, METH_VARARGS,
   "GetCompressionParameter(self) -> str\nC++: virtual std::string GetCompressionParameter()\n\n"},
  {"GetCompressionPresetDisplayNames", PyvtkMRMLStorageNode_GetCompressionPresetDisplayNames, METH_VARARGS,
   "GetCompressionPresetDisplayNames(self) -> (str, ...)\nC++: virtual std::vector<std::string> GetCompressionPresetDisplayNames(\n    )\n\nReturns a list of displayable names of the supported compression\npresets\n"},
  {"GetCompressionParameterFromDisplayName", PyvtkMRMLStorageNode_GetCompressionParameterFromDisplayName, METH_VARARGS,
   "GetCompressionParameterFromDisplayName(self, name:str) -> str\nC++: virtual std::string GetCompressionParameterFromDisplayName(\n    const std::string &name)\n\nReturns a string representing the specified preset\n"},
  {"GetDisplayNameFromCompressionParameter", PyvtkMRMLStorageNode_GetDisplayNameFromCompressionParameter, METH_VARARGS,
   "GetDisplayNameFromCompressionParameter(self, preset:str) -> str\nC++: virtual std::string GetDisplayNameFromCompressionParameter(\n    const std::string &preset)\n\nReturns the name of the specified preset\n"},
  {"GetNumberOfCompressionPresets", PyvtkMRMLStorageNode_GetNumberOfCompressionPresets, METH_VARARGS,
   "GetNumberOfCompressionPresets(self) -> int\nC++: virtual int GetNumberOfCompressionPresets()\n\nGet the number of compression presets\n"},
  {"GetCoordinateSystemTypeAsString", PyvtkMRMLStorageNode_GetCoordinateSystemTypeAsString, METH_VARARGS,
   "GetCoordinateSystemTypeAsString(id:int) -> str\nC++: static const char *GetCoordinateSystemTypeAsString(int id)\n\nConvert between coordinate system ID and name\n"},
  {"GetCoordinateSystemTypeFromString", PyvtkMRMLStorageNode_GetCoordinateSystemTypeFromString, METH_VARARGS,
   "GetCoordinateSystemTypeFromString(name:str) -> int\nC++: static int GetCoordinateSystemTypeFromString(\n    const char *name)\n\n"},
  {"GetUserMessages", PyvtkMRMLStorageNode_GetUserMessages, METH_VARARGS,
   "GetUserMessages(self) -> vtkMRMLMessageCollection\nC++: vtkMRMLMessageCollection *GetUserMessages()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLStorageNode_Doc =
  "vtkMRMLStorageNode - A superclass for other storage nodes.\n\n"
  "Superclass: vtkMRMLNode\n\n"
  "A superclass for other storage nodes like volume and model.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLStorageNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLStorageNode", // tp_name
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
  PyvtkMRMLStorageNode_Doc, // tp_doc
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

PyObject *PyvtkMRMLStorageNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLStorageNode_Type, PyvtkMRMLStorageNode_Methods,
    "vtkMRMLStorageNode",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 12; c++)
  {
    static const struct { const char *name; int value; }
      constants[12] = {
        { "Idle", vtkMRMLStorageNode::Idle },
        { "Pending", vtkMRMLStorageNode::Pending },
        { "Scheduled", vtkMRMLStorageNode::Scheduled },
        { "Transferring", vtkMRMLStorageNode::Transferring },
        { "TransferDone", vtkMRMLStorageNode::TransferDone },
        { "Cancelled", vtkMRMLStorageNode::Cancelled },
        { "SkippedNoData", vtkMRMLStorageNode::SkippedNoData },
        { "CoordinateSystemRAS", vtkMRMLStorageNode::CoordinateSystemRAS },
        { "RAS", vtkMRMLStorageNode::RAS },
        { "CoordinateSystemLPS", vtkMRMLStorageNode::CoordinateSystemLPS },
        { "LPS", vtkMRMLStorageNode::LPS },
        { "CoordinateSystemType_Last", vtkMRMLStorageNode::CoordinateSystemType_Last },
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

void PyVTKAddFile_vtkMRMLStorageNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLStorageNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLStorageNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

