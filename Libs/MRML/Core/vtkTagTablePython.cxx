// python wrapper for vtkTagTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTagTable.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTagTable(PyObject *dict); }
extern "C" { PyObject *PyvtkTagTable_ClassNew(); }


static PyObject *
PyvtkTagTable_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTagTable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTagTable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTagTable *tempr = vtkTagTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTagTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTagTable::NewInstance());

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
PyvtkTagTable_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTagTable::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTagTable::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkTagTable::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetName(temp0);
    }
    else
    {
      op->vtkTagTable::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_GetRestoreSelectionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestoreSelectionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRestoreSelectionState() :
      op->vtkTagTable::GetRestoreSelectionState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_SetRestoreSelectionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRestoreSelectionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRestoreSelectionState(temp0);
    }
    else
    {
      op->vtkTagTable::SetRestoreSelectionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkTagTable::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_AddOrUpdateTag_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOrUpdateTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddOrUpdateTag(temp0, temp1);
    }
    else
    {
      op->vtkTagTable::AddOrUpdateTag(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTagTable_AddOrUpdateTag_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOrUpdateTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddOrUpdateTag(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTagTable::AddOrUpdateTag(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTagTable_AddOrUpdateTag(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTagTable_AddOrUpdateTag_s1(self, args);
    case 3:
      return PyvtkTagTable_AddOrUpdateTag_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddOrUpdateTag");
  return nullptr;
}


static PyObject *
PyvtkTagTable_AddUniqueTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUniqueTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddUniqueTag(temp0, temp1);
    }
    else
    {
      op->vtkTagTable::AddUniqueTag(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_UpdateTag_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateTag(temp0, temp1) :
      op->vtkTagTable::UpdateTag(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTagTable_UpdateTag_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateTag(temp0, temp1, temp2) :
      op->vtkTagTable::UpdateTag(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTagTable_UpdateTag(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTagTable_UpdateTag_s1(self, args);
    case 3:
      return PyvtkTagTable_UpdateTag_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateTag");
  return nullptr;
}


static PyObject *
PyvtkTagTable_GetTagAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTagAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTagAttribute(temp0) :
      op->vtkTagTable::GetTagAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_GetTagValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTagValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTagValue(temp0) :
      op->vtkTagTable::GetTagValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTagTable_GetTagValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTagValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTagValue(temp0) :
      op->vtkTagTable::GetTagValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTagTable_GetTagValue_Methods[] = {
  {"GetTagValue", PyvtkTagTable_GetTagValue_s1, METH_VARARGS,
   "@i"},
  {"GetTagValue", PyvtkTagTable_GetTagValue_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTagTable_GetTagValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTagTable_GetTagValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTagValue");
  return nullptr;
}


static PyObject *
PyvtkTagTable_CheckTableForTag_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckTableForTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->CheckTableForTag(temp0, temp1) :
      op->vtkTagTable::CheckTableForTag(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTagTable_CheckTableForTag_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckTableForTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CheckTableForTag(temp0) :
      op->vtkTagTable::CheckTableForTag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTagTable_CheckTableForTag(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTagTable_CheckTableForTag_s1(self, args);
    case 1:
      return PyvtkTagTable_CheckTableForTag_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CheckTableForTag");
  return nullptr;
}


static PyObject *
PyvtkTagTable_SelectTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectTag(temp0);
    }
    else
    {
      op->vtkTagTable::SelectTag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_DeselectTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeselectTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeselectTag(temp0);
    }
    else
    {
      op->vtkTagTable::DeselectTag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_IsTagSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTagSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsTagSelected(temp0) :
      op->vtkTagTable::IsTagSelected(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_DeleteTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteTag(temp0);
    }
    else
    {
      op->vtkTagTable::DeleteTag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_ClearTagTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearTagTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearTagTable();
    }
    else
    {
      op->vtkTagTable::ClearTagTable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_GetNumberOfTags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTags() :
      op->vtkTagTable::GetNumberOfTags());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTagTable_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTagTable *op = static_cast<vtkTagTable *>(vp);

  vtkTagTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTagTable"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkTagTable::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTagTable_Methods[] = {
  {"IsTypeOf", PyvtkTagTable_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTagTable_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTagTable_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTagTable\nC++: static vtkTagTable *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTagTable_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTagTable\nC++: vtkTagTable *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTagTable_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTagTable_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetName", PyvtkTagTable_GetName, METH_VARARGS,
   "GetName(self) -> str\nC++: virtual char *GetName()\n\nGet the vtkTable that contains user-defined attribute/value\npairs.\n"},
  {"SetName", PyvtkTagTable_SetName, METH_VARARGS,
   "SetName(self, _arg:str) -> None\nC++: virtual void SetName(const char *_arg)\n\n"},
  {"GetRestoreSelectionState", PyvtkTagTable_GetRestoreSelectionState, METH_VARARGS,
   "GetRestoreSelectionState(self) -> int\nC++: virtual int GetRestoreSelectionState()\n\n"},
  {"SetRestoreSelectionState", PyvtkTagTable_SetRestoreSelectionState, METH_VARARGS,
   "SetRestoreSelectionState(self, _arg:int) -> None\nC++: virtual void SetRestoreSelectionState(int _arg)\n\n"},
  {"Initialize", PyvtkTagTable_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: virtual void Initialize()\n\nMethod that sets up default and required tags for a service. Each\nderived class should fill out this method.\n"},
  {"AddOrUpdateTag", PyvtkTagTable_AddOrUpdateTag, METH_VARARGS,
   "AddOrUpdateTag(self, attribute:str, value:str) -> None\nC++: virtual void AddOrUpdateTag(const char *attribute,\n    const char *value)\nAddOrUpdateTag(self, attribute:str, value:str, selected:int)\n    -> None\nC++: virtual void AddOrUpdateTag(const char *attribute,\n    const char *value, int selected)\n\nAdd a tag column to the TagTable\n"},
  {"AddUniqueTag", PyvtkTagTable_AddUniqueTag, METH_VARARGS,
   "AddUniqueTag(self, attribute:str, value:str) -> None\nC++: virtual void AddUniqueTag(const char *attribute,\n    const char *value)\n\nAdd a tag column to the TagTable\n"},
  {"UpdateTag", PyvtkTagTable_UpdateTag, METH_VARARGS,
   "UpdateTag(self, attribute:str, value:str) -> int\nC++: virtual int UpdateTag(const char *attribute,\n    const char *value)\nUpdateTag(self, attribute:str, value:str, selected:int) -> int\nC++: virtual int UpdateTag(const char *attribute,\n    const char *value, int selected)\n\nReplace a tag column in the TagTable\n"},
  {"GetTagAttribute", PyvtkTagTable_GetTagAttribute, METH_VARARGS,
   "GetTagAttribute(self, index:int) -> str\nC++: virtual const char *GetTagAttribute(int index)\n\nGet the attribute at a particular index in the TagTable.\n"},
  {"GetTagValue", PyvtkTagTable_GetTagValue, METH_VARARGS,
   "GetTagValue(self, index:int) -> str\nC++: virtual const char *GetTagValue(int index)\nGetTagValue(self, attribute:str) -> str\nC++: virtual const char *GetTagValue(const char *attribute)\n\nGet the value of a tag in the TagTable\n"},
  {"CheckTableForTag", PyvtkTagTable_CheckTableForTag, METH_VARARGS,
   "CheckTableForTag(self, attribute:str, value:str) -> int\nC++: virtual int CheckTableForTag(const char *attribute,\n    const char *value)\nCheckTableForTag(self, attribute:str) -> int\nC++: virtual int CheckTableForTag(const char *attribute)\n\nChecks TagTable to see if a attribute already exists. Returns\nindex of attribute if found, or -1 if it's not found.\n"},
  {"SelectTag", PyvtkTagTable_SelectTag, METH_VARARGS,
   "SelectTag(self, attribute:str) -> None\nC++: virtual void SelectTag(const char *attribute)\n\n"},
  {"DeselectTag", PyvtkTagTable_DeselectTag, METH_VARARGS,
   "DeselectTag(self, attribute:str) -> None\nC++: virtual void DeselectTag(const char *attribute)\n\n"},
  {"IsTagSelected", PyvtkTagTable_IsTagSelected, METH_VARARGS,
   "IsTagSelected(self, attribute:str) -> int\nC++: virtual int IsTagSelected(const char *attribute)\n\n"},
  {"DeleteTag", PyvtkTagTable_DeleteTag, METH_VARARGS,
   "DeleteTag(self, attribute:str) -> None\nC++: virtual void DeleteTag(const char *attribute)\n\nDeletes a column with the name matching \"attribute\" in the\nTagTable\n"},
  {"ClearTagTable", PyvtkTagTable_ClearTagTable, METH_VARARGS,
   "ClearTagTable(self) -> None\nC++: virtual void ClearTagTable()\n\nClears all tags out of table.\n"},
  {"GetNumberOfTags", PyvtkTagTable_GetNumberOfTags, METH_VARARGS,
   "GetNumberOfTags(self) -> int\nC++: virtual int GetNumberOfTags()\n\nConvenience method that returns the number of tags in TagTable.\n"},
  {"Copy", PyvtkTagTable_Copy, METH_VARARGS,
   "Copy(self, t:vtkTagTable) -> None\nC++: virtual void Copy(vtkTagTable *t)\n\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTagTable_Doc =
  "vtkTagTable - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTagTable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkTagTable", // tp_name
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
  PyvtkTagTable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTagTable_StaticNew()
{
  return vtkTagTable::New();
}

PyObject *PyvtkTagTable_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTagTable_Type, PyvtkTagTable_Methods,
    "vtkTagTable",
 &PyvtkTagTable_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTagTable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTagTable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTagTable", o) != 0)
  {
    Py_DECREF(o);
  }

}

