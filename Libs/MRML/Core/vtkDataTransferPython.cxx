// python wrapper for vtkDataTransfer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataTransfer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataTransfer(PyObject *dict); }
extern "C" { PyObject *PyvtkDataTransfer_ClassNew(); }


static PyObject *
PyvtkDataTransfer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataTransfer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataTransfer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataTransfer *tempr = vtkDataTransfer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataTransfer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataTransfer::NewInstance());

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
PyvtkDataTransfer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataTransfer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataTransfer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_GetSourceURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSourceURI() :
      op->vtkDataTransfer::GetSourceURI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_SetSourceURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSourceURI(temp0);
    }
    else
    {
      op->vtkDataTransfer::SetSourceURI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_GetDestinationURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDestinationURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDestinationURI() :
      op->vtkDataTransfer::GetDestinationURI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_SetDestinationURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDestinationURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDestinationURI(temp0);
    }
    else
    {
      op->vtkDataTransfer::SetDestinationURI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_GetHandler(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandler");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkURIHandler *tempr = (ap.IsBound() ?
      op->GetHandler() :
      op->vtkDataTransfer::GetHandler());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_SetHandler(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandler");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  vtkURIHandler *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkURIHandler"))
  {
    if (ap.IsBound())
    {
      op->SetHandler(temp0);
    }
    else
    {
      op->vtkDataTransfer::SetHandler(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_GetTransferType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTransferType() :
      op->vtkDataTransfer::GetTransferType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_SetTransferType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransferType(temp0);
    }
    else
    {
      op->vtkDataTransfer::SetTransferType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_GetTransferID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTransferID() :
      op->vtkDataTransfer::GetTransferID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_SetTransferID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransferID(temp0);
    }
    else
    {
      op->vtkDataTransfer::SetTransferID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_GetSizeOnDisk(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeOnDisk");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSizeOnDisk() :
      op->vtkDataTransfer::GetSizeOnDisk());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_SetSizeOnDisk(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeOnDisk");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSizeOnDisk(temp0);
    }
    else
    {
      op->vtkDataTransfer::SetSizeOnDisk(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_GetTransferNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTransferNodeID() :
      op->vtkDataTransfer::GetTransferNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_SetTransferNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransferNodeID(temp0);
    }
    else
    {
      op->vtkDataTransfer::SetTransferNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_GetProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProgress() :
      op->vtkDataTransfer::GetProgress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_SetProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProgress(temp0);
    }
    else
    {
      op->vtkDataTransfer::SetProgress(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_GetTransferStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTransferStatus() :
      op->vtkDataTransfer::GetTransferStatus());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_SetTransferStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransferStatus(temp0);
    }
    else
    {
      op->vtkDataTransfer::SetTransferStatus(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_GetCancelRequested(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCancelRequested");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCancelRequested() :
      op->vtkDataTransfer::GetCancelRequested());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_SetCancelRequested(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCancelRequested");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCancelRequested(temp0);
    }
    else
    {
      op->vtkDataTransfer::SetCancelRequested(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_GetTransferCached(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferCached");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTransferCached() :
      op->vtkDataTransfer::GetTransferCached());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_SetTransferCached(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferCached");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransferCached(temp0);
    }
    else
    {
      op->vtkDataTransfer::SetTransferCached(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_SetTransferStatusNoModify(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferStatusNoModify");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransferStatusNoModify(temp0);
    }
    else
    {
      op->vtkDataTransfer::SetTransferStatusNoModify(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_GetTransferStatusString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferStatusString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTransferStatusString() :
      op->vtkDataTransfer::GetTransferStatusString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransfer_GetTransferTypeString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferTypeString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransfer *op = static_cast<vtkDataTransfer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTransferTypeString() :
      op->vtkDataTransfer::GetTransferTypeString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataTransfer_Methods[] = {
  {"IsTypeOf", PyvtkDataTransfer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataTransfer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataTransfer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataTransfer\nC++: static vtkDataTransfer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataTransfer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataTransfer\nC++: vtkDataTransfer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataTransfer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataTransfer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetSourceURI", PyvtkDataTransfer_GetSourceURI, METH_VARARGS,
   "GetSourceURI(self) -> str\nC++: virtual char *GetSourceURI()\n\n"},
  {"SetSourceURI", PyvtkDataTransfer_SetSourceURI, METH_VARARGS,
   "SetSourceURI(self, _arg:str) -> None\nC++: virtual void SetSourceURI(const char *_arg)\n\n"},
  {"GetDestinationURI", PyvtkDataTransfer_GetDestinationURI, METH_VARARGS,
   "GetDestinationURI(self) -> str\nC++: virtual char *GetDestinationURI()\n\n"},
  {"SetDestinationURI", PyvtkDataTransfer_SetDestinationURI, METH_VARARGS,
   "SetDestinationURI(self, _arg:str) -> None\nC++: virtual void SetDestinationURI(const char *_arg)\n\n"},
  {"GetHandler", PyvtkDataTransfer_GetHandler, METH_VARARGS,
   "GetHandler(self) -> vtkURIHandler\nC++: virtual vtkURIHandler *GetHandler()\n\n"},
  {"SetHandler", PyvtkDataTransfer_SetHandler, METH_VARARGS,
   "SetHandler(self, uriHandler:vtkURIHandler) -> None\nC++: virtual void SetHandler(vtkURIHandler *uriHandler)\n\n"},
  {"GetTransferType", PyvtkDataTransfer_GetTransferType, METH_VARARGS,
   "GetTransferType(self) -> int\nC++: virtual int GetTransferType()\n\n"},
  {"SetTransferType", PyvtkDataTransfer_SetTransferType, METH_VARARGS,
   "SetTransferType(self, _arg:int) -> None\nC++: virtual void SetTransferType(int _arg)\n\n"},
  {"GetTransferID", PyvtkDataTransfer_GetTransferID, METH_VARARGS,
   "GetTransferID(self) -> int\nC++: virtual int GetTransferID()\n\n"},
  {"SetTransferID", PyvtkDataTransfer_SetTransferID, METH_VARARGS,
   "SetTransferID(self, _arg:int) -> None\nC++: virtual void SetTransferID(int _arg)\n\n"},
  {"GetSizeOnDisk", PyvtkDataTransfer_GetSizeOnDisk, METH_VARARGS,
   "GetSizeOnDisk(self) -> int\nC++: virtual int GetSizeOnDisk()\n\n"},
  {"SetSizeOnDisk", PyvtkDataTransfer_SetSizeOnDisk, METH_VARARGS,
   "SetSizeOnDisk(self, _arg:int) -> None\nC++: virtual void SetSizeOnDisk(int _arg)\n\n"},
  {"GetTransferNodeID", PyvtkDataTransfer_GetTransferNodeID, METH_VARARGS,
   "GetTransferNodeID(self) -> str\nC++: virtual char *GetTransferNodeID()\n\n"},
  {"SetTransferNodeID", PyvtkDataTransfer_SetTransferNodeID, METH_VARARGS,
   "SetTransferNodeID(self, _arg:str) -> None\nC++: virtual void SetTransferNodeID(const char *_arg)\n\n"},
  {"GetProgress", PyvtkDataTransfer_GetProgress, METH_VARARGS,
   "GetProgress(self) -> int\nC++: virtual int GetProgress()\n\n"},
  {"SetProgress", PyvtkDataTransfer_SetProgress, METH_VARARGS,
   "SetProgress(self, _arg:int) -> None\nC++: virtual void SetProgress(int _arg)\n\n"},
  {"GetTransferStatus", PyvtkDataTransfer_GetTransferStatus, METH_VARARGS,
   "GetTransferStatus(self) -> int\nC++: virtual int GetTransferStatus()\n\n"},
  {"SetTransferStatus", PyvtkDataTransfer_SetTransferStatus, METH_VARARGS,
   "SetTransferStatus(self, _arg:int) -> None\nC++: virtual void SetTransferStatus(int _arg)\n\n"},
  {"GetCancelRequested", PyvtkDataTransfer_GetCancelRequested, METH_VARARGS,
   "GetCancelRequested(self) -> int\nC++: virtual int GetCancelRequested()\n\n"},
  {"SetCancelRequested", PyvtkDataTransfer_SetCancelRequested, METH_VARARGS,
   "SetCancelRequested(self, _arg:int) -> None\nC++: virtual void SetCancelRequested(int _arg)\n\n"},
  {"GetTransferCached", PyvtkDataTransfer_GetTransferCached, METH_VARARGS,
   "GetTransferCached(self) -> int\nC++: virtual int GetTransferCached()\n\n"},
  {"SetTransferCached", PyvtkDataTransfer_SetTransferCached, METH_VARARGS,
   "SetTransferCached(self, _arg:int) -> None\nC++: virtual void SetTransferCached(int _arg)\n\n"},
  {"SetTransferStatusNoModify", PyvtkDataTransfer_SetTransferStatusNoModify, METH_VARARGS,
   "SetTransferStatusNoModify(self, val:int) -> None\nC++: void SetTransferStatusNoModify(int val)\n\n"},
  {"GetTransferStatusString", PyvtkDataTransfer_GetTransferStatusString, METH_VARARGS,
   "GetTransferStatusString(self) -> str\nC++: const char *GetTransferStatusString()\n\n"},
  {"GetTransferTypeString", PyvtkDataTransfer_GetTransferTypeString, METH_VARARGS,
   "GetTransferTypeString(self) -> str\nC++: const char *GetTransferTypeString()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataTransfer_Doc =
  "vtkDataTransfer - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataTransfer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkDataTransfer", // tp_name
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
  PyvtkDataTransfer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataTransfer_StaticNew()
{
  return vtkDataTransfer::New();
}

PyObject *PyvtkDataTransfer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataTransfer_Type, PyvtkDataTransfer_Methods,
    "vtkDataTransfer",
 &PyvtkDataTransfer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 15; c++)
  {
    static const struct { const char *name; int value; }
      constants[15] = {
        { "Idle", vtkDataTransfer::Idle },
        { "Pending", vtkDataTransfer::Pending },
        { "Running", vtkDataTransfer::Running },
        { "Completed", vtkDataTransfer::Completed },
        { "CompletedWithErrors", vtkDataTransfer::CompletedWithErrors },
        { "CancelPending", vtkDataTransfer::CancelPending },
        { "Cancelled", vtkDataTransfer::Cancelled },
        { "Ready", vtkDataTransfer::Ready },
        { "Deleted", vtkDataTransfer::Deleted },
        { "TimedOut", vtkDataTransfer::TimedOut },
        { "RemoteDownload", vtkDataTransfer::RemoteDownload },
        { "RemoteUpload", vtkDataTransfer::RemoteUpload },
        { "LocalLoad", vtkDataTransfer::LocalLoad },
        { "LocalSave", vtkDataTransfer::LocalSave },
        { "Unspecified", vtkDataTransfer::Unspecified },
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

void PyVTKAddFile_vtkDataTransfer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataTransfer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataTransfer", o) != 0)
  {
    Py_DECREF(o);
  }

}

