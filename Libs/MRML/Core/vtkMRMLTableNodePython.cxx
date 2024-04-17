// python wrapper for vtkMRMLTableNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLTableNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLTableNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLTableNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLStorableNode_ClassNew
extern "C" { PyObject *PyvtkMRMLStorableNode_ClassNew(); }
#define DECLARED_PyvtkMRMLStorableNode_ClassNew
#endif

static PyObject *
PyvtkMRMLTableNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLTableNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLTableNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLTableNode *tempr = vtkMRMLTableNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLTableNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLTableNode::NewInstance());

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
PyvtkMRMLTableNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLTableNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLTableNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLTableNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

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
      op->vtkMRMLTableNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLTableNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLTableNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

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
      op->vtkMRMLTableNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLTableNode_SetAndObserveTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveTable(temp0);
    }
    else
    {
      op->vtkMRMLTableNode::SetAndObserveTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetTable() :
      op->vtkMRMLTableNode::GetTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_SetAndObserveSchema(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveSchema");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveSchema(temp0);
    }
    else
    {
      op->vtkMRMLTableNode::SetAndObserveSchema(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetSchema(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSchema");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetSchema() :
      op->vtkMRMLTableNode::GetSchema());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLocked() :
      op->vtkMRMLTableNode::GetLocked());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_SetLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  bool temp0 = false;
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
      op->vtkMRMLTableNode::SetLocked(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetUseFirstColumnAsRowHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseFirstColumnAsRowHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseFirstColumnAsRowHeader() :
      op->vtkMRMLTableNode::GetUseFirstColumnAsRowHeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_SetUseFirstColumnAsRowHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseFirstColumnAsRowHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseFirstColumnAsRowHeader(temp0);
    }
    else
    {
      op->vtkMRMLTableNode::SetUseFirstColumnAsRowHeader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetUseColumnTitleAsColumnHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseColumnTitleAsColumnHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseColumnTitleAsColumnHeader() :
      op->vtkMRMLTableNode::GetUseColumnTitleAsColumnHeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_SetUseColumnTitleAsColumnHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseColumnTitleAsColumnHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseColumnTitleAsColumnHeader(temp0);
    }
    else
    {
      op->vtkMRMLTableNode::SetUseColumnTitleAsColumnHeader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetUseColumnNameAsColumnHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseColumnNameAsColumnHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseColumnNameAsColumnHeader() :
      op->vtkMRMLTableNode::GetUseColumnNameAsColumnHeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_SetUseColumnNameAsColumnHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseColumnNameAsColumnHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseColumnNameAsColumnHeader(temp0);
    }
    else
    {
      op->vtkMRMLTableNode::SetUseColumnNameAsColumnHeader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLTableNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_AddColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkAbstractArray")))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->AddColumn(temp0) :
      op->vtkMRMLTableNode::AddColumn(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_RenameColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenameColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->RenameColumn(temp0, temp1) :
      op->vtkMRMLTableNode::RenameColumn(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_RemoveColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveColumn(temp0) :
      op->vtkMRMLTableNode::RemoveColumn(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_RemoveAllColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveAllColumns() :
      op->vtkMRMLTableNode::RemoveAllColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_AddEmptyRow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEmptyRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->AddEmptyRow() :
      op->vtkMRMLTableNode::AddEmptyRow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_RemoveRow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveRow(temp0) :
      op->vtkMRMLTableNode::RemoveRow(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetCellText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCellText(temp0, temp1) :
      op->vtkMRMLTableNode::GetCellText(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_SetCellText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  int temp0;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->SetCellText(temp0, temp1, temp2) :
      op->vtkMRMLTableNode::SetCellText(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetColumnIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColumnIndex(temp0) :
      op->vtkMRMLTableNode::GetColumnIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLTableNode_GetColumnIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    int tempr = (ap.IsBound() ?
      op->GetColumnIndex(temp0) :
      op->vtkMRMLTableNode::GetColumnIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLTableNode_GetColumnIndex_Methods[] = {
  {"GetColumnIndex", PyvtkMRMLTableNode_GetColumnIndex_s1, METH_VARARGS,
   "@s"},
  {"GetColumnIndex", PyvtkMRMLTableNode_GetColumnIndex_s2, METH_VARARGS,
   "@V *vtkAbstractArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLTableNode_GetColumnIndex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLTableNode_GetColumnIndex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetColumnIndex");
  return nullptr;
}


static PyObject *
PyvtkMRMLTableNode_GetColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetColumnName(temp0) :
      op->vtkMRMLTableNode::GetColumnName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetNumberOfRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRows() :
      op->vtkMRMLTableNode::GetNumberOfRows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetNumberOfColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColumns() :
      op->vtkMRMLTableNode::GetNumberOfColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_SetColumnNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetColumnNullValue(temp0, temp1);
    }
    else
    {
      op->vtkMRMLTableNode::SetColumnNullValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetColumnNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetColumnNullValue(temp0) :
      op->vtkMRMLTableNode::GetColumnNullValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_SetColumnLongName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnLongName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetColumnLongName(temp0, temp1);
    }
    else
    {
      op->vtkMRMLTableNode::SetColumnLongName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetColumnLongName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnLongName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetColumnLongName(temp0) :
      op->vtkMRMLTableNode::GetColumnLongName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_SetColumnTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetColumnTitle(temp0, temp1);
    }
    else
    {
      op->vtkMRMLTableNode::SetColumnTitle(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetColumnTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetColumnTitle(temp0) :
      op->vtkMRMLTableNode::GetColumnTitle(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_SetColumnDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetColumnDescription(temp0, temp1);
    }
    else
    {
      op->vtkMRMLTableNode::SetColumnDescription(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetColumnDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetColumnDescription(temp0) :
      op->vtkMRMLTableNode::GetColumnDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_SetColumnUnitLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnUnitLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetColumnUnitLabel(temp0, temp1);
    }
    else
    {
      op->vtkMRMLTableNode::SetColumnUnitLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetColumnUnitLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnUnitLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetColumnUnitLabel(temp0) :
      op->vtkMRMLTableNode::GetColumnUnitLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetColumnProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetColumnProperty(temp0, temp1) :
      op->vtkMRMLTableNode::GetColumnProperty(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLTableNode_GetColumnProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  int temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetColumnProperty(temp0, temp1) :
      op->vtkMRMLTableNode::GetColumnProperty(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLTableNode_GetColumnProperty_Methods[] = {
  {"GetColumnProperty", PyvtkMRMLTableNode_GetColumnProperty_s1, METH_VARARGS,
   "@ss"},
  {"GetColumnProperty", PyvtkMRMLTableNode_GetColumnProperty_s2, METH_VARARGS,
   "@is"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLTableNode_GetColumnProperty(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLTableNode_GetColumnProperty_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetColumnProperty");
  return nullptr;
}


static PyObject *
PyvtkMRMLTableNode_GetAllColumnPropertyNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllColumnPropertyNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->GetAllColumnPropertyNames(temp0);
    }
    else
    {
      op->vtkMRMLTableNode::GetAllColumnPropertyNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_SetColumnProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  std::string temp1;
  std::string temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetColumnProperty(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLTableNode::SetColumnProperty(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLTableNode_SetColumnProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  int temp0;
  std::string temp1;
  std::string temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetColumnProperty(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLTableNode::SetColumnProperty(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLTableNode_SetColumnProperty_Methods[] = {
  {"SetColumnProperty", PyvtkMRMLTableNode_SetColumnProperty_s1, METH_VARARGS,
   "@sss"},
  {"SetColumnProperty", PyvtkMRMLTableNode_SetColumnProperty_s2, METH_VARARGS,
   "@iss"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLTableNode_SetColumnProperty(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLTableNode_SetColumnProperty_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColumnProperty");
  return nullptr;
}


static PyObject *
PyvtkMRMLTableNode_RemoveColumnProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveColumnProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveColumnProperty(temp0);
    }
    else
    {
      op->vtkMRMLTableNode::RemoveColumnProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_CopyAllColumnProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllColumnProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CopyAllColumnProperties(temp0, temp1);
    }
    else
    {
      op->vtkMRMLTableNode::CopyAllColumnProperties(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_RemoveAllColumnProperties_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllColumnProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllColumnProperties(temp0);
    }
    else
    {
      op->vtkMRMLTableNode::RemoveAllColumnProperties(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLTableNode_RemoveAllColumnProperties_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllColumnProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllColumnProperties(temp0);
    }
    else
    {
      op->vtkMRMLTableNode::RemoveAllColumnProperties(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLTableNode_RemoveAllColumnProperties_Methods[] = {
  {"RemoveAllColumnProperties", PyvtkMRMLTableNode_RemoveAllColumnProperties_s1, METH_VARARGS,
   "@s"},
  {"RemoveAllColumnProperties", PyvtkMRMLTableNode_RemoveAllColumnProperties_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLTableNode_RemoveAllColumnProperties(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLTableNode_RemoveAllColumnProperties_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveAllColumnProperties");
  return nullptr;
}


static PyObject *
PyvtkMRMLTableNode_GetColumnValueTypeFromSchema(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnValueTypeFromSchema");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColumnValueTypeFromSchema(temp0) :
      op->vtkMRMLTableNode::GetColumnValueTypeFromSchema(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_InsertNextBlankRowWithNullValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextBlankRowWithNullValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextBlankRowWithNullValues(temp0) :
      op->vtkMRMLTableNode::InsertNextBlankRowWithNullValues(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetColumnType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColumnType(temp0) :
      op->vtkMRMLTableNode::GetColumnType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_SetColumnType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetColumnType(temp0, temp1) :
      op->vtkMRMLTableNode::SetColumnType(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_SetDefaultColumnType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultColumnType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  std::string temp1 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->SetDefaultColumnType(temp0, temp1) :
      op->vtkMRMLTableNode::SetDefaultColumnType(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetDefaultColumnName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDefaultColumnName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkMRMLTableNode::GetDefaultColumnName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetValueTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetValueTypeFromString");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLTableNode::GetValueTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetValueTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetValueTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkMRMLTableNode::GetValueTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_SetComponentNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  std::vector<std::string> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = (ap.IsBound() ?
      op->SetComponentNames(temp0, temp1) :
      op->vtkMRMLTableNode::SetComponentNames(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableNode_GetComponentNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetComponentNames(temp0) :
      op->vtkMRMLTableNode::GetComponentNames(temp0));

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
PyvtkMRMLTableNode_GetComponentNamesFromSchema(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentNamesFromSchema");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableNode *op = static_cast<vtkMRMLTableNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetComponentNamesFromSchema(temp0) :
      op->vtkMRMLTableNode::GetComponentNamesFromSchema(temp0));

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
PyvtkMRMLTableNode_GetComponentNamesFromArray(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetComponentNamesFromArray");

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    std::vector<std::string> tempr = vtkMRMLTableNode::GetComponentNamesFromArray(temp0);

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
PyvtkMRMLTableNode_GetComponentNamesFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetComponentNamesFromString");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::vector<std::string> tempr = vtkMRMLTableNode::GetComponentNamesFromString(temp0);

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
PyvtkMRMLTableNode_GetComponentNamesAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetComponentNamesAsString");

  std::vector<std::string> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    std::string tempr = vtkMRMLTableNode::GetComponentNamesAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLTableNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLTableNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLTableNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLTableNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLTableNode\nC++: static vtkMRMLTableNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLTableNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLTableNode\nC++: vtkMRMLTableNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLTableNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLTableNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLTableNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nStandard methods for MRML nodes\n"},
  {"CopyContent", PyvtkMRMLTableNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLTableNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLTableNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"ProcessMRMLEvents", PyvtkMRMLTableNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nMethod to propagate events generated in mrml\n"},
  {"SetAndObserveTable", PyvtkMRMLTableNode_SetAndObserveTable, METH_VARARGS,
   "SetAndObserveTable(self, table:vtkTable) -> None\nC++: virtual void SetAndObserveTable(vtkTable *table)\n\nGet and Set Macros\n"},
  {"GetTable", PyvtkMRMLTableNode_GetTable, METH_VARARGS,
   "GetTable(self) -> vtkTable\nC++: virtual vtkTable *GetTable()\n\n"},
  {"SetAndObserveSchema", PyvtkMRMLTableNode_SetAndObserveSchema, METH_VARARGS,
   "SetAndObserveSchema(self, schema:vtkTable) -> None\nC++: virtual void SetAndObserveSchema(vtkTable *schema)\n\nSet schema table\n\nEach row of the schema table contains description of a data table\ncolumn. Columns of the schema table:\n- columnName: name of the data table column that properties are\n  defined for  (required) This name is used by modules to look up\ncolumns in a table, therefore it must not be translated. Column\n  name <default> is reserved for defining default properties for\n  new columns.\n- type: data type of the column. Supported types: string, double,\nfloat, int, unsigned int, bit, short, unsigned short, long,\n  unsigned long, char, signed char, unsigned char, long long,\n  unsigned long long, idtype. Default: string.\n- nullValue: value to be used when a value is not specified (new\n  table row is added, blank string is entered, etc)\n- title: human-readable name of the column (translatable) The\n  property name was formerly called \"longName\".\n- description: detailed description of the column (translatable)\n- unitLabel: unit label displayed along with the title\n  (translatable)\n- unitCodeMeaning: standard unit definition. Example:\n  Standardized Uptake Value body weight. Should not be\n  translated, as in the future translation of standard terms will\nbe implemented based on code value and scheme.\n- unitCodeValue: standard unit definition. Example: {SUVbw}g/ml.\n- unitCodingSchemeDesignator: standard unit definition. Example:\n  UCUM.\n"},
  {"GetSchema", PyvtkMRMLTableNode_GetSchema, METH_VARARGS,
   "GetSchema(self) -> vtkTable\nC++: virtual vtkTable *GetSchema()\n\n"},
  {"GetLocked", PyvtkMRMLTableNode_GetLocked, METH_VARARGS,
   "GetLocked(self) -> bool\nC++: virtual bool GetLocked()\n\nTable contents cannot be edited through the user interface\n"},
  {"SetLocked", PyvtkMRMLTableNode_SetLocked, METH_VARARGS,
   "SetLocked(self, _arg:bool) -> None\nC++: virtual void SetLocked(bool _arg)\n\n"},
  {"GetUseFirstColumnAsRowHeader", PyvtkMRMLTableNode_GetUseFirstColumnAsRowHeader, METH_VARARGS,
   "GetUseFirstColumnAsRowHeader(self) -> bool\nC++: virtual bool GetUseFirstColumnAsRowHeader()\n\nFirst column should be treated as row label\n"},
  {"SetUseFirstColumnAsRowHeader", PyvtkMRMLTableNode_SetUseFirstColumnAsRowHeader, METH_VARARGS,
   "SetUseFirstColumnAsRowHeader(self, _arg:bool) -> None\nC++: virtual void SetUseFirstColumnAsRowHeader(bool _arg)\n\n"},
  {"GetUseColumnTitleAsColumnHeader", PyvtkMRMLTableNode_GetUseColumnTitleAsColumnHeader, METH_VARARGS,
   "GetUseColumnTitleAsColumnHeader(self) -> bool\nC++: virtual bool GetUseColumnTitleAsColumnHeader()\n\nColumn title should be displayed as column label\n"},
  {"SetUseColumnTitleAsColumnHeader", PyvtkMRMLTableNode_SetUseColumnTitleAsColumnHeader, METH_VARARGS,
   "SetUseColumnTitleAsColumnHeader(self, _arg:bool) -> None\nC++: virtual void SetUseColumnTitleAsColumnHeader(bool _arg)\n\n"},
  {"GetUseColumnNameAsColumnHeader", PyvtkMRMLTableNode_GetUseColumnNameAsColumnHeader, METH_VARARGS,
   "GetUseColumnNameAsColumnHeader(self) -> bool\nC++: bool GetUseColumnNameAsColumnHeader()\n\nDeprecated. Use\nGetUseColumnTitleAsColumnHeader/SetUseColumnTitleAsColumnHeader\ninstead.\n"},
  {"SetUseColumnNameAsColumnHeader", PyvtkMRMLTableNode_SetUseColumnNameAsColumnHeader, METH_VARARGS,
   "SetUseColumnNameAsColumnHeader(self, useColumnTitle:bool) -> None\nC++: void SetUseColumnNameAsColumnHeader(bool useColumnTitle)\n\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLTableNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {"AddColumn", PyvtkMRMLTableNode_AddColumn, METH_VARARGS,
   "AddColumn(self, column:vtkAbstractArray=...) -> vtkAbstractArray\nC++: vtkAbstractArray *AddColumn(vtkAbstractArray *column=nullptr)\n\nAdd an array to the table as a new column. If no column is\nprovided then an empty column is added. If a column is provided\nthen the number of rows in the table and tuples in the provided\narray will be matched by either adding empty rows to the table or\nempty elements to the array. If a column is provided that does\nnot have a name then a name will be generated automatically that\nis unique among all table column names.\n"},
  {"RenameColumn", PyvtkMRMLTableNode_RenameColumn, METH_VARARGS,
   "RenameColumn(self, columnIndex:int, newName:str) -> bool\nC++: bool RenameColumn(int columnIndex, const char *newName)\n\nRename an array in the table (including associated properties).\nIf a column by that name already exists then column properties of\nthe existing column will be overwritten with the renamed column's\nproperties. Returns with true on success.\n"},
  {"RemoveColumn", PyvtkMRMLTableNode_RemoveColumn, METH_VARARGS,
   "RemoveColumn(self, columnIndex:int) -> bool\nC++: bool RemoveColumn(int columnIndex)\n\nRemove array from the table (including associated properties).\nReturns with true on success.\n"},
  {"RemoveAllColumns", PyvtkMRMLTableNode_RemoveAllColumns, METH_VARARGS,
   "RemoveAllColumns(self) -> bool\nC++: bool RemoveAllColumns()\n\nRemove all columns from the table (including associated\nproperties). Returns with true on success.\n"},
  {"AddEmptyRow", PyvtkMRMLTableNode_AddEmptyRow, METH_VARARGS,
   "AddEmptyRow(self) -> int\nC++: int AddEmptyRow()\n\nAdd an empty row at the end of the table Returns the index of the\ninserted row or -1 on failure.\n"},
  {"RemoveRow", PyvtkMRMLTableNode_RemoveRow, METH_VARARGS,
   "RemoveRow(self, rowIndex:int) -> bool\nC++: bool RemoveRow(int rowIndex)\n\nRemove row from the table Returns with true on success.\n"},
  {"GetCellText", PyvtkMRMLTableNode_GetCellText, METH_VARARGS,
   "GetCellText(self, rowIndex:int, columnIndex:int) -> str\nC++: std::string GetCellText(int rowIndex, int columnIndex)\n\nConvenience method for getting a single value in the table.\nReturns empty string if failed to get value. Returns the value on\nsuccess.\n"},
  {"SetCellText", PyvtkMRMLTableNode_SetCellText, METH_VARARGS,
   "SetCellText(self, rowIndex:int, columnIndex:int, text:str) -> bool\nC++: bool SetCellText(int rowIndex, int columnIndex,\n    const char *text)\n\nConvenience method for setting a single value in the table.\nReturns true if the setting was successful. This updates the node\nimmediately, therefore it is not efficient when a large number of\nvalues has to be modified. For bulk operations get the vtkTable\nobject using GetTable() method and manipulate that directly.\n"},
  {"GetColumnIndex", PyvtkMRMLTableNode_GetColumnIndex, METH_VARARGS,
   "GetColumnIndex(self, columnName:str) -> int\nC++: int GetColumnIndex(const std::string &columnName)\nGetColumnIndex(self, column:vtkAbstractArray) -> int\nC++: int GetColumnIndex(vtkAbstractArray *column)\n\n"},
  {"GetColumnName", PyvtkMRMLTableNode_GetColumnName, METH_VARARGS,
   "GetColumnName(self, columnIndex:int) -> str\nC++: std::string GetColumnName(int columnIndex)\n\nGet column name from column index. Returns empty string if column\nis not found.\n"},
  {"GetNumberOfRows", PyvtkMRMLTableNode_GetNumberOfRows, METH_VARARGS,
   "GetNumberOfRows(self) -> int\nC++: int GetNumberOfRows()\n\nConvenience method for getting number of rows in the table.\n"},
  {"GetNumberOfColumns", PyvtkMRMLTableNode_GetNumberOfColumns, METH_VARARGS,
   "GetNumberOfColumns(self) -> int\nC++: int GetNumberOfColumns()\n\nConvenience method for getting number of columns in the table.\n"},
  {"SetColumnNullValue", PyvtkMRMLTableNode_SetColumnNullValue, METH_VARARGS,
   "SetColumnNullValue(self, columnName:str, nullValue:str) -> None\nC++: void SetColumnNullValue(const std::string &columnName,\n    const std::string &nullValue)\n\nSet null value for blank rows and missing values.\n"},
  {"GetColumnNullValue", PyvtkMRMLTableNode_GetColumnNullValue, METH_VARARGS,
   "GetColumnNullValue(self, columnName:str) -> str\nC++: std::string GetColumnNullValue(const std::string &columnName)\n\n"},
  {"SetColumnLongName", PyvtkMRMLTableNode_SetColumnLongName, METH_VARARGS,
   "SetColumnLongName(self, columnName:str, description:str) -> None\nC++: void SetColumnLongName(const std::string &columnName,\n    const std::string &description)\n\nSet a full human-readable name of a column. This used to be a\nfield for storing a displayable title that was longer than the\ncolumn name. It is now deprecated. Use ColumnTitle instead for\nstoring displayable name.\n"},
  {"GetColumnLongName", PyvtkMRMLTableNode_GetColumnLongName, METH_VARARGS,
   "GetColumnLongName(self, columnName:str) -> str\nC++: std::string GetColumnLongName(const std::string &columnName)\n\n"},
  {"SetColumnTitle", PyvtkMRMLTableNode_SetColumnTitle, METH_VARARGS,
   "SetColumnTitle(self, columnName:str, description:str) -> None\nC++: void SetColumnTitle(const std::string &columnName,\n    const std::string &description)\n\nSet a title of a column that is displayed on the user interface.\nIt is stored in the application's current language.\n"},
  {"GetColumnTitle", PyvtkMRMLTableNode_GetColumnTitle, METH_VARARGS,
   "GetColumnTitle(self, columnName:str) -> str\nC++: std::string GetColumnTitle(const std::string &columnName)\n\n"},
  {"SetColumnDescription", PyvtkMRMLTableNode_SetColumnDescription, METH_VARARGS,
   "SetColumnDescription(self, columnName:str, description:str)\n    -> None\nC++: void SetColumnDescription(const std::string &columnName,\n    const std::string &description)\n\nSet human-readable description of a column. It is stored in the\napplication's current language.\n"},
  {"GetColumnDescription", PyvtkMRMLTableNode_GetColumnDescription, METH_VARARGS,
   "GetColumnDescription(self, columnName:str) -> str\nC++: std::string GetColumnDescription(\n    const std::string &columnName)\n\n"},
  {"SetColumnUnitLabel", PyvtkMRMLTableNode_SetColumnUnitLabel, METH_VARARGS,
   "SetColumnUnitLabel(self, columnName:str, unitLabel:str) -> None\nC++: void SetColumnUnitLabel(const std::string &columnName,\n    const std::string &unitLabel)\n\nSet displayed measurement unit for the data stored in the\nselected column. It is stored in the application's current\nlanguage. For computations and unit conversions, it is\nrecommended to store unit as coded entry in custom column\nproperties.\n"},
  {"GetColumnUnitLabel", PyvtkMRMLTableNode_GetColumnUnitLabel, METH_VARARGS,
   "GetColumnUnitLabel(self, columnName:str) -> str\nC++: std::string GetColumnUnitLabel(const std::string &columnName)\n\n"},
  {"GetColumnProperty", PyvtkMRMLTableNode_GetColumnProperty, METH_VARARGS,
   "GetColumnProperty(self, columnName:str, propertyName:str) -> str\nC++: std::string GetColumnProperty(const std::string &columnName,\n    const std::string &propertyName)\nGetColumnProperty(self, columnIndex:int, propertyName:str) -> str\nC++: std::string GetColumnProperty(int columnIndex,\n    const std::string &propertyName)\n\nGet a column property. Property name \"columnName\" is reserved for\ninternal use.\n\\sa SetAndObserveSchema, GetColumnValueTypeFromSchema\n"},
  {"GetAllColumnPropertyNames", PyvtkMRMLTableNode_GetAllColumnPropertyNames, METH_VARARGS,
   "GetAllColumnPropertyNames(self, propertyNames:vtkStringArray)\n    -> None\nC++: void GetAllColumnPropertyNames(vtkStringArray *propertyNames)\n\nGet list of all column property names.\n\\sa SetAndObserveSchema\n"},
  {"SetColumnProperty", PyvtkMRMLTableNode_SetColumnProperty, METH_VARARGS,
   "SetColumnProperty(self, columnName:str, propertyName:str,\n    propertyValue:str) -> None\nC++: void SetColumnProperty(const std::string &columnName,\n    const std::string &propertyName,\n    const std::string &propertyValue)\nSetColumnProperty(self, columnIndex:int, propertyName:str,\n    propertyValue:str) -> None\nC++: void SetColumnProperty(int columnIndex,\n    const std::string &propertyName,\n    const std::string &propertyValue)\n\nSet a column property value. Property name \"columnName\" is\nreserved for internal use. Property name \"type\" converts existing\nvalues in the column.\n\\sa SetAndObserveSchema\n"},
  {"RemoveColumnProperty", PyvtkMRMLTableNode_RemoveColumnProperty, METH_VARARGS,
   "RemoveColumnProperty(self, propertyName:str) -> None\nC++: void RemoveColumnProperty(const std::string &propertyName)\n\nSet a column property value. Property names reserved for internal\nuse: columnName, type.\n\\sa SetAndObserveSchema()\n"},
  {"CopyAllColumnProperties", PyvtkMRMLTableNode_CopyAllColumnProperties, METH_VARARGS,
   "CopyAllColumnProperties(self, sourceColumnName:str,\n    targetColumnName:str) -> None\nC++: void CopyAllColumnProperties(\n    const std::string &sourceColumnName,\n    const std::string &targetColumnName)\n\nCopy all properties from one column to another.\n"},
  {"RemoveAllColumnProperties", PyvtkMRMLTableNode_RemoveAllColumnProperties, METH_VARARGS,
   "RemoveAllColumnProperties(self, columnName:str) -> None\nC++: void RemoveAllColumnProperties(const std::string &columnName)\nRemoveAllColumnProperties(self, columnIndex:int) -> None\nC++: void RemoveAllColumnProperties(int columnIndex)\n\nRemove all properties defined for the specified column. To remove\nall properties for all columns, use SetAndObserveScheme(nullptr).\n"},
  {"GetColumnValueTypeFromSchema", PyvtkMRMLTableNode_GetColumnValueTypeFromSchema, METH_VARARGS,
   "GetColumnValueTypeFromSchema(self, columnName:str) -> int\nC++: int GetColumnValueTypeFromSchema(\n    const std::string &columnName)\n\nGet column type stored in the schema as VTK type ID. It should\nonly be used during reading/writing of the node, because once the\ntable column is created, the actual column type is the type of\nthe associated VTK data array.\n"},
  {"InsertNextBlankRowWithNullValues", PyvtkMRMLTableNode_InsertNextBlankRowWithNullValues, METH_VARARGS,
   "InsertNextBlankRowWithNullValues(self, table:vtkTable) -> int\nC++: vtkIdType InsertNextBlankRowWithNullValues(vtkTable *table)\n\nInsert next blank row into the table, using null values defined\nin the schema.\n\\return row index of the inserted row\n"},
  {"GetColumnType", PyvtkMRMLTableNode_GetColumnType, METH_VARARGS,
   "GetColumnType(self, columnName:str) -> int\nC++: int GetColumnType(const std::string &columnName)\n\nGet data type of a column.\n\\return column type ID\n"},
  {"SetColumnType", PyvtkMRMLTableNode_SetColumnType, METH_VARARGS,
   "SetColumnType(self, columnName:str, typeId:int) -> bool\nC++: bool SetColumnType(const std::string &columnName, int typeId)\n\nChange data type of a column. If values are stored in the column\nthen values will be converted, therefore data loss may occur.\n\\param type: new column value type ID\n\\return True on success.\n"},
  {"SetDefaultColumnType", PyvtkMRMLTableNode_SetDefaultColumnType, METH_VARARGS,
   "SetDefaultColumnType(self, type:str, nullValue:str=...) -> bool\nC++: bool SetDefaultColumnType(const std::string &type,\n    const std::string &nullValue=\"\")\n\nSet default type and null value for new columns. This is a\nconvenience method to set column type with a simple call. To get\nor set other default properties, call SetColumnProperty() or\nGetColumnProperty() using the column name returned by\nGetDefaultColumnName().\n\\param type: type of values stored in new columns by default\n    (string, double, ...)\n\\param nullValue: this value is used when a new row is added to\n    the column\n\\return True on success.\n\\sa SetAndObserveSchema\n"},
  {"GetDefaultColumnName", PyvtkMRMLTableNode_GetDefaultColumnName, METH_VARARGS,
   "GetDefaultColumnName() -> str\nC++: static const char *GetDefaultColumnName()\n\nName of the column that stores default properties that are used\nwhen a new column is created.\n"},
  {"GetValueTypeFromString", PyvtkMRMLTableNode_GetValueTypeFromString, METH_VARARGS,
   "GetValueTypeFromString(valueTypeStr:str) -> int\nC++: static int GetValueTypeFromString(std::string valueTypeStr)\n\nGet value type id from string (inverse of\nvtkImageScalarTypeNameMacro)\n"},
  {"GetValueTypeAsString", PyvtkMRMLTableNode_GetValueTypeAsString, METH_VARARGS,
   "GetValueTypeAsString(valueType:int) -> str\nC++: static std::string GetValueTypeAsString(int valueType)\n\nGet value type id from string (uses vtkImageScalarTypeNameMacro)\n"},
  {"SetComponentNames", PyvtkMRMLTableNode_SetComponentNames, METH_VARARGS,
   "SetComponentNames(self, columnName:str, componentNames:(str, ...))\n     -> bool\nC++: bool SetComponentNames(const std::string &columnName,\n    const std::vector<std::string> &componentNames)\n\nSet the component names for the specified column\n"},
  {"GetComponentNames", PyvtkMRMLTableNode_GetComponentNames, METH_VARARGS,
   "GetComponentNames(self, columnName:str) -> (str, ...)\nC++: std::vector<std::string> GetComponentNames(\n    const std::string &columnName)\n\nGet the vector of component names from the\n"},
  {"GetComponentNamesFromSchema", PyvtkMRMLTableNode_GetComponentNamesFromSchema, METH_VARARGS,
   "GetComponentNamesFromSchema(self, columnName:str) -> (str, ...)\nC++: std::vector<std::string> GetComponentNamesFromSchema(\n    const std::string &columnName)\n\nGet component names stored in the schema. It should only be used\nduring reading/writing of the node, because once the table column\nis created, the actual column names are stored in the data array.\n"},
  {"GetComponentNamesFromArray", PyvtkMRMLTableNode_GetComponentNamesFromArray, METH_VARARGS,
   "GetComponentNamesFromArray(array:vtkAbstractArray) -> (str, ...)\nC++: static std::vector<std::string> GetComponentNamesFromArray(\n    vtkAbstractArray *array)\n\nGet component names from a vtkAbstractArray as a vector of string\n"},
  {"GetComponentNamesFromString", PyvtkMRMLTableNode_GetComponentNamesFromString, METH_VARARGS,
   "GetComponentNamesFromString(componentNameString:str) -> (str, ...)\nC++: static const std::vector<std::string> GetComponentNamesFromString(\n    const std::string &componentNameString)\n\nConvert the vector of component names from a string of component\nnames separated with the '|' character\n"},
  {"GetComponentNamesAsString", PyvtkMRMLTableNode_GetComponentNamesAsString, METH_VARARGS,
   "GetComponentNamesAsString(componentNames:(str, ...)) -> str\nC++: static std::string GetComponentNamesAsString(\n    const std::vector<std::string> &componentNames)\n\nConvert the component names as a string of component names\nseparated with the '|' character\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLTableNode_Doc =
  "vtkMRMLTableNode - MRML node to represent a table object\n\n"
  "Superclass: vtkMRMLStorableNode\n\n"
  "This class can store a spreadsheet. Data is stored as a vtkTable\n"
  "object. A few convenience methods are provided for manipulating rows,\n"
  "columns, and cells. For performance-critical use cases it is\n"
  "recommended to manipulate the vtkTable object directly. If the\n"
  "vtkTable object content is modified then Modified() method has to be\n"
  "called on the vtkTable object when modifications are completed.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLTableNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLTableNode", // tp_name
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
  PyvtkMRMLTableNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLTableNode_StaticNew()
{
  return vtkMRMLTableNode::New();
}

PyObject *PyvtkMRMLTableNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLTableNode_Type, PyvtkMRMLTableNode_Methods,
    "vtkMRMLTableNode",
 &PyvtkMRMLTableNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLStorableNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLTableNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLTableNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLTableNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

