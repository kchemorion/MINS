// python wrapper for vtkDataIOManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataIOManager.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataIOManager(PyObject *dict); }
extern "C" { PyObject *PyvtkDataIOManager_ClassNew(); }


static PyObject *
PyvtkDataIOManager_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataIOManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataIOManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataIOManager *tempr = vtkDataIOManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataIOManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataIOManager::NewInstance());

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
PyvtkDataIOManager_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataIOManager::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataIOManager::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_GetDataTransferCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTransferCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetDataTransferCollection() :
      op->vtkDataIOManager::GetDataTransferCollection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_SetDataTransferCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTransferCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->SetDataTransferCollection(temp0);
    }
    else
    {
      op->vtkDataIOManager::SetDataTransferCollection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_GetCacheManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCacheManager *tempr = (ap.IsBound() ?
      op->GetCacheManager() :
      op->vtkDataIOManager::GetCacheManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_SetCacheManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  vtkCacheManager *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCacheManager"))
  {
    if (ap.IsBound())
    {
      op->SetCacheManager(temp0);
    }
    else
    {
      op->vtkDataIOManager::SetCacheManager(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_GetEnableAsynchronousIO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableAsynchronousIO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableAsynchronousIO() :
      op->vtkDataIOManager::GetEnableAsynchronousIO());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_GetInUpdateCallbackFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInUpdateCallbackFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInUpdateCallbackFlag() :
      op->vtkDataIOManager::GetInUpdateCallbackFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_SetInUpdateCallbackFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInUpdateCallbackFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInUpdateCallbackFlag(temp0);
    }
    else
    {
      op->vtkDataIOManager::SetInUpdateCallbackFlag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_GetFileFormatHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileFormatHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataFileFormatHelper *tempr = (ap.IsBound() ?
      op->GetFileFormatHelper() :
      op->vtkDataIOManager::GetFileFormatHelper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_SetFileFormatHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileFormatHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  vtkDataFileFormatHelper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataFileFormatHelper"))
  {
    if (ap.IsBound())
    {
      op->SetFileFormatHelper(temp0);
    }
    else
    {
      op->vtkDataIOManager::SetFileFormatHelper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_SetEnableAsynchronousIO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableAsynchronousIO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableAsynchronousIO(temp0);
    }
    else
    {
      op->vtkDataIOManager::SetEnableAsynchronousIO(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_AddNewDataTransfer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNewDataTransfer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataTransfer *tempr = (ap.IsBound() ?
      op->AddNewDataTransfer() :
      op->vtkDataIOManager::AddNewDataTransfer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataIOManager_AddNewDataTransfer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNewDataTransfer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    vtkDataTransfer *tempr = (ap.IsBound() ?
      op->AddNewDataTransfer(temp0) :
      op->vtkDataIOManager::AddNewDataTransfer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataIOManager_AddNewDataTransfer_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNewDataTransfer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  vtkDataTransfer *temp0 = nullptr;
  vtkMRMLNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataTransfer") &&
      ap.GetVTKObject(temp1, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->AddNewDataTransfer(temp0, temp1);
    }
    else
    {
      op->vtkDataIOManager::AddNewDataTransfer(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataIOManager_AddNewDataTransfer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataIOManager_AddNewDataTransfer_s1(self, args);
    case 1:
      return PyvtkDataIOManager_AddNewDataTransfer_s2(self, args);
    case 2:
      return PyvtkDataIOManager_AddNewDataTransfer_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddNewDataTransfer");
  return nullptr;
}


static PyObject *
PyvtkDataIOManager_AllTransfersClearedFromCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllTransfersClearedFromCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllTransfersClearedFromCache();
    }
    else
    {
      op->vtkDataIOManager::AllTransfersClearedFromCache();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_AddDataTransfer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataTransfer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  vtkDataTransfer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataTransfer"))
  {
    if (ap.IsBound())
    {
      op->AddDataTransfer(temp0);
    }
    else
    {
      op->vtkDataIOManager::AddDataTransfer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_RemoveDataTransfer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataTransfer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  vtkDataTransfer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataTransfer"))
  {
    if (ap.IsBound())
    {
      op->RemoveDataTransfer(temp0);
    }
    else
    {
      op->vtkDataIOManager::RemoveDataTransfer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataIOManager_RemoveDataTransfer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataTransfer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveDataTransfer(temp0);
    }
    else
    {
      op->vtkDataIOManager::RemoveDataTransfer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataIOManager_RemoveDataTransfer_Methods[] = {
  {"RemoveDataTransfer", PyvtkDataIOManager_RemoveDataTransfer_s1, METH_VARARGS,
   "@V *vtkDataTransfer"},
  {"RemoveDataTransfer", PyvtkDataIOManager_RemoveDataTransfer_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataIOManager_RemoveDataTransfer(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataIOManager_RemoveDataTransfer_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveDataTransfer");
  return nullptr;
}


static PyObject *
PyvtkDataIOManager_GetNumberOfDataTransfers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataTransfers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDataTransfers() :
      op->vtkDataIOManager::GetNumberOfDataTransfers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_GetDataTransfer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTransfer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataTransfer *tempr = (ap.IsBound() ?
      op->GetDataTransfer(temp0) :
      op->vtkDataIOManager::GetDataTransfer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_ClearDataTransfers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearDataTransfers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearDataTransfers();
    }
    else
    {
      op->vtkDataIOManager::ClearDataTransfers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_GetUniqueTransferID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniqueTransferID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUniqueTransferID() :
      op->vtkDataIOManager::GetUniqueTransferID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_QueueRead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QueueRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->QueueRead(temp0);
    }
    else
    {
      op->vtkDataIOManager::QueueRead(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_QueueWrite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QueueWrite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->QueueWrite(temp0);
    }
    else
    {
      op->vtkDataIOManager::QueueWrite(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_SetTransferStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  vtkDataTransfer *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataTransfer") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTransferStatus(temp0, temp1);
    }
    else
    {
      op->vtkDataIOManager::SetTransferStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_GetTransferStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  vtkDataTransfer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataTransfer"))
  {
    int tempr = (ap.IsBound() ?
      op->GetTransferStatus(temp0) :
      op->vtkDataIOManager::GetTransferStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_GetTransferStatusString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferStatusString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

  vtkDataTransfer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataTransfer"))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTransferStatusString(temp0) :
      op->vtkDataIOManager::GetTransferStatusString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataIOManager_ProcessTransferUpdates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessTransferUpdates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataIOManager *op = static_cast<vtkDataIOManager *>(vp);

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
      op->ProcessTransferUpdates(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataIOManager::ProcessTransferUpdates(temp0, temp1, temp2);
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
PyvtkDataIOManager_TransferUpdateCallback(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TransferUpdateCallback");

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    vtkDataIOManager::TransferUpdateCallback(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}

static PyMethodDef PyvtkDataIOManager_Methods[] = {
  {"IsTypeOf", PyvtkDataIOManager_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataIOManager_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataIOManager_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataIOManager\nC++: static vtkDataIOManager *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataIOManager_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataIOManager\nC++: vtkDataIOManager *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataIOManager_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataIOManager_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataTransferCollection", PyvtkDataIOManager_GetDataTransferCollection, METH_VARARGS,
   "GetDataTransferCollection(self) -> vtkCollection\nC++: virtual vtkCollection *GetDataTransferCollection()\n\n"},
  {"SetDataTransferCollection", PyvtkDataIOManager_SetDataTransferCollection, METH_VARARGS,
   "SetDataTransferCollection(self, dataTransfer:vtkCollection)\n    -> None\nC++: void SetDataTransferCollection(vtkCollection *dataTransfer)\n\n"},
  {"GetCacheManager", PyvtkDataIOManager_GetCacheManager, METH_VARARGS,
   "GetCacheManager(self) -> vtkCacheManager\nC++: virtual vtkCacheManager *GetCacheManager()\n\n"},
  {"SetCacheManager", PyvtkDataIOManager_SetCacheManager, METH_VARARGS,
   "SetCacheManager(self, cacheManager:vtkCacheManager) -> None\nC++: virtual void SetCacheManager(vtkCacheManager *cacheManager)\n\n"},
  {"GetEnableAsynchronousIO", PyvtkDataIOManager_GetEnableAsynchronousIO, METH_VARARGS,
   "GetEnableAsynchronousIO(self) -> int\nC++: virtual int GetEnableAsynchronousIO()\n\n"},
  {"GetInUpdateCallbackFlag", PyvtkDataIOManager_GetInUpdateCallbackFlag, METH_VARARGS,
   "GetInUpdateCallbackFlag(self) -> int\nC++: virtual int GetInUpdateCallbackFlag()\n\n"},
  {"SetInUpdateCallbackFlag", PyvtkDataIOManager_SetInUpdateCallbackFlag, METH_VARARGS,
   "SetInUpdateCallbackFlag(self, _arg:int) -> None\nC++: virtual void SetInUpdateCallbackFlag(int _arg)\n\n"},
  {"GetFileFormatHelper", PyvtkDataIOManager_GetFileFormatHelper, METH_VARARGS,
   "GetFileFormatHelper(self) -> vtkDataFileFormatHelper\nC++: vtkDataFileFormatHelper *GetFileFormatHelper()\n\nGet/Set the DataFileFormatHelper object\n"},
  {"SetFileFormatHelper", PyvtkDataIOManager_SetFileFormatHelper, METH_VARARGS,
   "SetFileFormatHelper(self, helper:vtkDataFileFormatHelper) -> None\nC++: virtual void SetFileFormatHelper(\n    vtkDataFileFormatHelper *helper)\n\n"},
  {"SetEnableAsynchronousIO", PyvtkDataIOManager_SetEnableAsynchronousIO, METH_VARARGS,
   "SetEnableAsynchronousIO(self, __a:int) -> None\nC++: void SetEnableAsynchronousIO(int)\n\n"},
  {"AddNewDataTransfer", PyvtkDataIOManager_AddNewDataTransfer, METH_VARARGS,
   "AddNewDataTransfer(self) -> vtkDataTransfer\nC++: vtkDataTransfer *AddNewDataTransfer()\nAddNewDataTransfer(self, node:vtkMRMLNode) -> vtkDataTransfer\nC++: vtkDataTransfer *AddNewDataTransfer(vtkMRMLNode *node)\nAddNewDataTransfer(self, transfer:vtkDataTransfer,\n    node:vtkMRMLNode) -> None\nC++: void AddNewDataTransfer(vtkDataTransfer *transfer,\n    vtkMRMLNode *node)\n\nCreates and adds a new data transfer object to the collection\n"},
  {"AllTransfersClearedFromCache", PyvtkDataIOManager_AllTransfersClearedFromCache, METH_VARARGS,
   "AllTransfersClearedFromCache(self) -> None\nC++: void AllTransfersClearedFromCache()\n\n"},
  {"AddDataTransfer", PyvtkDataIOManager_AddDataTransfer, METH_VARARGS,
   "AddDataTransfer(self, transfer:vtkDataTransfer) -> None\nC++: void AddDataTransfer(vtkDataTransfer *transfer)\n\nAdds a new data transfer object to the collection\n"},
  {"RemoveDataTransfer", PyvtkDataIOManager_RemoveDataTransfer, METH_VARARGS,
   "RemoveDataTransfer(self, transfer:vtkDataTransfer) -> None\nC++: void RemoveDataTransfer(vtkDataTransfer *transfer)\nRemoveDataTransfer(self, transferID:int) -> None\nC++: void RemoveDataTransfer(int transferID)\n\nRemoves a data transfer object from the collection\n"},
  {"GetNumberOfDataTransfers", PyvtkDataIOManager_GetNumberOfDataTransfers, METH_VARARGS,
   "GetNumberOfDataTransfers(self) -> int\nC++: int GetNumberOfDataTransfers()\n\n"},
  {"GetDataTransfer", PyvtkDataIOManager_GetDataTransfer, METH_VARARGS,
   "GetDataTransfer(self, transferID:int) -> vtkDataTransfer\nC++: vtkDataTransfer *GetDataTransfer(int transferID)\n\nReturns an individual data transfer by id\n"},
  {"ClearDataTransfers", PyvtkDataIOManager_ClearDataTransfers, METH_VARARGS,
   "ClearDataTransfers(self) -> None\nC++: void ClearDataTransfers()\n\nClears all data transfers from the collection; called after the\ncache is cleared.\n"},
  {"GetUniqueTransferID", PyvtkDataIOManager_GetUniqueTransferID, METH_VARARGS,
   "GetUniqueTransferID(self) -> int\nC++: int GetUniqueTransferID()\n\nGets a unique id to assign to a new data transfer.\n"},
  {"QueueRead", PyvtkDataIOManager_QueueRead, METH_VARARGS,
   "QueueRead(self, node:vtkMRMLNode) -> None\nC++: void QueueRead(vtkMRMLNode *node)\n\nInvokes a RemoteReadEvent on the node so that logic can take care\nof scheduling and applying it\n"},
  {"QueueWrite", PyvtkDataIOManager_QueueWrite, METH_VARARGS,
   "QueueWrite(self, node:vtkMRMLNode) -> None\nC++: void QueueWrite(vtkMRMLNode *node)\n\nInvokes a RemoteWriteEvent on the node so that logic can take\ncare of scheduling and applying it\n"},
  {"SetTransferStatus", PyvtkDataIOManager_SetTransferStatus, METH_VARARGS,
   "SetTransferStatus(self, transfer:vtkDataTransfer, status:int)\n    -> None\nC++: void SetTransferStatus(vtkDataTransfer *transfer, int status)\n\nSet the status of a data transfer (Idle, Scheduled, Cancelled\nRunning, Completed).  The \"modify\" parameter indicates whether\nthe object can be modified by the call.\n"},
  {"GetTransferStatus", PyvtkDataIOManager_GetTransferStatus, METH_VARARGS,
   "GetTransferStatus(self, transfer:vtkDataTransfer) -> int\nC++: int GetTransferStatus(vtkDataTransfer *transfer)\n\n"},
  {"GetTransferStatusString", PyvtkDataIOManager_GetTransferStatusString, METH_VARARGS,
   "GetTransferStatusString(self, transfer:vtkDataTransfer) -> str\nC++: const char *GetTransferStatusString(\n    vtkDataTransfer *transfer)\n\n"},
  {"ProcessTransferUpdates", PyvtkDataIOManager_ProcessTransferUpdates, METH_VARARGS,
   "ProcessTransferUpdates(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: virtual void ProcessTransferUpdates(vtkObject *caller,\n    unsigned long event, void *callData)\n\n"},
  {"TransferUpdateCallback", PyvtkDataIOManager_TransferUpdateCallback, METH_VARARGS,
   "TransferUpdateCallback(__caller:vtkObject, eid:int,\n    __clientData:Pointer, callData:Pointer) -> None\nC++: static void TransferUpdateCallback(vtkObject *__caller,\n    unsigned long eid, void *__clientData, void *callData)\n\nfunction that gets called when a data transfer has been updated.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataIOManager_Doc =
  "vtkDataIOManager - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataIOManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkDataIOManager", // tp_name
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
  PyvtkDataIOManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataIOManager_StaticNew()
{
  return vtkDataIOManager::New();
}

PyObject *PyvtkDataIOManager_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataIOManager_Type, PyvtkDataIOManager_Methods,
    "vtkDataIOManager",
 &PyvtkDataIOManager_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "RemoteReadEvent", vtkDataIOManager::RemoteReadEvent },
        { "RemoteWriteEvent", vtkDataIOManager::RemoteWriteEvent },
        { "LocalReadEvent", vtkDataIOManager::LocalReadEvent },
        { "LocalWriteEvent", vtkDataIOManager::LocalWriteEvent },
        { "NewTransferEvent", vtkDataIOManager::NewTransferEvent },
        { "TransferUpdateEvent", vtkDataIOManager::TransferUpdateEvent },
        { "SettingsUpdateEvent", vtkDataIOManager::SettingsUpdateEvent },
        { "DisplayManagerWindowEvent", vtkDataIOManager::DisplayManagerWindowEvent },
        { "RefreshDisplayEvent", vtkDataIOManager::RefreshDisplayEvent },
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

void PyVTKAddFile_vtkDataIOManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataIOManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataIOManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

