// python wrapper for vtkURIHandler
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkURIHandler.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkURIHandler(PyObject *dict); }
extern "C" { PyObject *PyvtkURIHandler_ClassNew(); }


static PyObject *
PyvtkURIHandler_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkURIHandler::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURIHandler_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkURIHandler::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURIHandler_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkURIHandler *tempr = vtkURIHandler::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURIHandler_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkURIHandler *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkURIHandler::NewInstance());

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
PyvtkURIHandler_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkURIHandler::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURIHandler_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkURIHandler::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURIHandler_GetHostName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHostName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetHostName() :
      op->vtkURIHandler::GetHostName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURIHandler_SetHostName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHostName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHostName(temp0);
    }
    else
    {
      op->vtkURIHandler::SetHostName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkURIHandler_StageFileRead_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StageFileRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->StageFileRead(temp0, temp1);
    }
    else
    {
      op->vtkURIHandler::StageFileRead(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkURIHandler_StageFileRead_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StageFileRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  const char *temp3 = nullptr;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->StageFileRead(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkURIHandler::StageFileRead(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkURIHandler_StageFileRead(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkURIHandler_StageFileRead_s1(self, args);
    case 5:
      return PyvtkURIHandler_StageFileRead_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "StageFileRead");
  return nullptr;
}


static PyObject *
PyvtkURIHandler_StageFileWrite_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StageFileWrite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->StageFileWrite(temp0, temp1);
    }
    else
    {
      op->vtkURIHandler::StageFileWrite(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkURIHandler_StageFileWrite_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StageFileWrite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  const char *temp3 = nullptr;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->StageFileWrite(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkURIHandler::StageFileWrite(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkURIHandler_StageFileWrite(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkURIHandler_StageFileWrite_s1(self, args);
    case 5:
      return PyvtkURIHandler_StageFileWrite_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "StageFileWrite");
  return nullptr;
}


static PyObject *
PyvtkURIHandler_CanHandleURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanHandleURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanHandleURI(temp0) :
      op->vtkURIHandler::CanHandleURI(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURIHandler_BufferedWrite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BufferedWrite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  size_t temp1;
  size_t temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    size_t tempr = (ap.IsBound() ?
      op->BufferedWrite(temp0, temp1, temp2) :
      op->vtkURIHandler::BufferedWrite(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURIHandler_GetRequiresPermission(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequiresPermission");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRequiresPermission() :
      op->vtkURIHandler::GetRequiresPermission());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURIHandler_SetRequiresPermission(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequiresPermission");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRequiresPermission(temp0);
    }
    else
    {
      op->vtkURIHandler::SetRequiresPermission(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkURIHandler_GetPermissionPrompter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPermissionPrompter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPermissionPrompter *tempr = (ap.IsBound() ?
      op->GetPermissionPrompter() :
      op->vtkURIHandler::GetPermissionPrompter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURIHandler_SetPermissionPrompter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPermissionPrompter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  vtkPermissionPrompter *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPermissionPrompter"))
  {
    if (ap.IsBound())
    {
      op->SetPermissionPrompter(temp0);
    }
    else
    {
      op->vtkURIHandler::SetPermissionPrompter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkURIHandler_GetPrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPrefix() :
      op->vtkURIHandler::GetPrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURIHandler_SetPrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrefix(temp0);
    }
    else
    {
      op->vtkURIHandler::SetPrefix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkURIHandler_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkURIHandler::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkURIHandler_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkURIHandler *op = static_cast<vtkURIHandler *>(vp);

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
      op->vtkURIHandler::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkURIHandler_Methods[] = {
  {"IsTypeOf", PyvtkURIHandler_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkURIHandler_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkURIHandler_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkURIHandler\nC++: static vtkURIHandler *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkURIHandler_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkURIHandler\nC++: vtkURIHandler *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkURIHandler_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkURIHandler_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetHostName", PyvtkURIHandler_GetHostName, METH_VARARGS,
   "GetHostName(self) -> str\nC++: virtual char *GetHostName()\n\n"},
  {"SetHostName", PyvtkURIHandler_SetHostName, METH_VARARGS,
   "SetHostName(self, _arg:str) -> None\nC++: virtual void SetHostName(const char *_arg)\n\n"},
  {"StageFileRead", PyvtkURIHandler_StageFileRead, METH_VARARGS,
   "StageFileRead(self, source:str, destination:str) -> None\nC++: virtual void StageFileRead(const char *source,\n    const char *destination)\nStageFileRead(self, source:str, destination:str, username:str,\n    password:str, hostname:str) -> None\nC++: virtual void StageFileRead(const char *source,\n    const char *destination, const char *username,\n    const char *password, const char *hostname)\n\nvirtual methods to be defined in subclasses. (Maybe these should\nbe defined to handle default file operations)\n"},
  {"StageFileWrite", PyvtkURIHandler_StageFileWrite, METH_VARARGS,
   "StageFileWrite(self, source:str, destination:str) -> None\nC++: virtual void StageFileWrite(const char *source,\n    const char *destination)\nStageFileWrite(self, source:str, username:str, password:str,\n    hostname:str, sessionID:str) -> None\nC++: virtual void StageFileWrite(const char *source,\n    const char *username, const char *password,\n    const char *hostname, const char *sessionID)\n\n"},
  {"CanHandleURI", PyvtkURIHandler_CanHandleURI, METH_VARARGS,
   "CanHandleURI(self, uri:str) -> int\nC++: virtual int CanHandleURI(const char *uri)\n\nneed something that goes the other way too...\n\nDetermine whether protocol is appropriate for this handler. NOTE:\nSubclasses should implement this method\n"},
  {"BufferedWrite", PyvtkURIHandler_BufferedWrite, METH_VARARGS,
   "BufferedWrite(self, buffer:str, size:int, nitems:int) -> int\nC++: size_t BufferedWrite(char *buffer, size_t size,\n    size_t nitems)\n\nThis function writes the downloaded data in a buffered manner\n"},
  {"GetRequiresPermission", PyvtkURIHandler_GetRequiresPermission, METH_VARARGS,
   "GetRequiresPermission(self) -> int\nC++: virtual int GetRequiresPermission()\n\n"},
  {"SetRequiresPermission", PyvtkURIHandler_SetRequiresPermission, METH_VARARGS,
   "SetRequiresPermission(self, _arg:int) -> None\nC++: virtual void SetRequiresPermission(int _arg)\n\n"},
  {"GetPermissionPrompter", PyvtkURIHandler_GetPermissionPrompter, METH_VARARGS,
   "GetPermissionPrompter(self) -> vtkPermissionPrompter\nC++: virtual vtkPermissionPrompter *GetPermissionPrompter()\n\n"},
  {"SetPermissionPrompter", PyvtkURIHandler_SetPermissionPrompter, METH_VARARGS,
   "SetPermissionPrompter(self, prompter:vtkPermissionPrompter)\n    -> None\nC++: virtual void SetPermissionPrompter(\n    vtkPermissionPrompter *prompter)\n\n"},
  {"GetPrefix", PyvtkURIHandler_GetPrefix, METH_VARARGS,
   "GetPrefix(self) -> str\nC++: virtual char *GetPrefix()\n\n"},
  {"SetPrefix", PyvtkURIHandler_SetPrefix, METH_VARARGS,
   "SetPrefix(self, _arg:str) -> None\nC++: virtual void SetPrefix(const char *_arg)\n\n"},
  {"GetName", PyvtkURIHandler_GetName, METH_VARARGS,
   "GetName(self) -> str\nC++: virtual char *GetName()\n\n"},
  {"SetName", PyvtkURIHandler_SetName, METH_VARARGS,
   "SetName(self, _arg:str) -> None\nC++: virtual void SetName(const char *_arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkURIHandler_Doc =
  "vtkURIHandler - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkURIHandler_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkURIHandler", // tp_name
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
  PyvtkURIHandler_Doc, // tp_doc
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

static vtkObjectBase *PyvtkURIHandler_StaticNew()
{
  return vtkURIHandler::New();
}

PyObject *PyvtkURIHandler_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkURIHandler_Type, PyvtkURIHandler_Methods,
    "vtkURIHandler",
 &PyvtkURIHandler_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkURIHandler(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkURIHandler_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkURIHandler", o) != 0)
  {
    Py_DECREF(o);
  }

}

