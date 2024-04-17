// python wrapper for vtkCacheManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCacheManager.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCacheManager(PyObject *dict); }
extern "C" { PyObject *PyvtkCacheManager_ClassNew(); }


static PyObject *
PyvtkCacheManager_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCacheManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCacheManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCacheManager *tempr = vtkCacheManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCacheManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCacheManager::NewInstance());

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
PyvtkCacheManager_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCacheManager::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCacheManager::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_GetInsufficientFreeBufferNotificationFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsufficientFreeBufferNotificationFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsufficientFreeBufferNotificationFlag() :
      op->vtkCacheManager::GetInsufficientFreeBufferNotificationFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_SetInsufficientFreeBufferNotificationFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsufficientFreeBufferNotificationFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsufficientFreeBufferNotificationFlag(temp0);
    }
    else
    {
      op->vtkCacheManager::SetInsufficientFreeBufferNotificationFlag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_SetRemoteCacheDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoteCacheDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoteCacheDirectory(temp0);
    }
    else
    {
      op->vtkCacheManager::SetRemoteCacheDirectory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_GetRemoteCacheDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteCacheDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRemoteCacheDirectory() :
      op->vtkCacheManager::GetRemoteCacheDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_UpdateCacheInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCacheInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateCacheInformation();
    }
    else
    {
      op->vtkCacheManager::UpdateCacheInformation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_DeleteFromCachedFileList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteFromCachedFileList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteFromCachedFileList(temp0);
    }
    else
    {
      op->vtkCacheManager::DeleteFromCachedFileList(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_DeleteFromCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteFromCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteFromCache(temp0);
    }
    else
    {
      op->vtkCacheManager::DeleteFromCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_ClearCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->ClearCache() :
      op->vtkCacheManager::ClearCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_ClearCacheCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCacheCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->ClearCacheCheck() :
      op->vtkCacheManager::ClearCacheCheck());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_MarkNodesBeforeDeletingDataFromCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkNodesBeforeDeletingDataFromCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->MarkNodesBeforeDeletingDataFromCache(temp0);
    }
    else
    {
      op->vtkCacheManager::MarkNodesBeforeDeletingDataFromCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_IsRemoteReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRemoteReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsRemoteReference(temp0) :
      op->vtkCacheManager::IsRemoteReference(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_IsLocalReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLocalReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsLocalReference(temp0) :
      op->vtkCacheManager::IsLocalReference(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_LocalFileExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LocalFileExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->LocalFileExists(temp0) :
      op->vtkCacheManager::LocalFileExists(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_FindCachedFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCachedFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->FindCachedFile(temp0, temp1) :
      op->vtkCacheManager::FindCachedFile(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_CachedFileExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CachedFileExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CachedFileExists(temp0) :
      op->vtkCacheManager::CachedFileExists(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_GetFilenameFromURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilenameFromURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFilenameFromURI(temp0) :
      op->vtkCacheManager::GetFilenameFromURI(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_AddCachePathToFilename(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCachePathToFilename");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->AddCachePathToFilename(temp0) :
      op->vtkCacheManager::AddCachePathToFilename(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_EncodeURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EncodeURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->EncodeURI(temp0) :
      op->vtkCacheManager::EncodeURI(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_CacheSizeCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheSizeCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheSizeCheck();
    }
    else
    {
      op->vtkCacheManager::CacheSizeCheck();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_FreeCacheBufferCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeCacheBufferCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeCacheBufferCheck();
    }
    else
    {
      op->vtkCacheManager::FreeCacheBufferCheck();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_ComputeCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  const char *temp0 = nullptr;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    float tempr = (ap.IsBound() ?
      op->ComputeCacheSize(temp0, temp1) :
      op->vtkCacheManager::ComputeCacheSize(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_GetCurrentCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetCurrentCacheSize() :
      op->vtkCacheManager::GetCurrentCacheSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_GetFreeCacheSpaceRemaining(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFreeCacheSpaceRemaining");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetFreeCacheSpaceRemaining() :
      op->vtkCacheManager::GetFreeCacheSpaceRemaining());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_GetCachedFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCachedFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetCachedFiles() :
      op->vtkCacheManager::GetCachedFiles());

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
PyvtkCacheManager_GetRemoteCacheLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteCacheLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRemoteCacheLimit() :
      op->vtkCacheManager::GetRemoteCacheLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_SetRemoteCacheLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoteCacheLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoteCacheLimit(temp0);
    }
    else
    {
      op->vtkCacheManager::SetRemoteCacheLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_SetCurrentCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentCacheSize(temp0);
    }
    else
    {
      op->vtkCacheManager::SetCurrentCacheSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_GetRemoteCacheFreeBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteCacheFreeBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRemoteCacheFreeBufferSize() :
      op->vtkCacheManager::GetRemoteCacheFreeBufferSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_SetRemoteCacheFreeBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoteCacheFreeBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoteCacheFreeBufferSize(temp0);
    }
    else
    {
      op->vtkCacheManager::SetRemoteCacheFreeBufferSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_GetEnableForceRedownload(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableForceRedownload");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableForceRedownload() :
      op->vtkCacheManager::GetEnableForceRedownload());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_SetEnableForceRedownload(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableForceRedownload");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableForceRedownload(temp0);
    }
    else
    {
      op->vtkCacheManager::SetEnableForceRedownload(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_SetMRMLScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMRMLScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->SetMRMLScene(temp0);
    }
    else
    {
      op->vtkCacheManager::SetMRMLScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_MapFileToURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapFileToURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->MapFileToURI(temp0, temp1);
    }
    else
    {
      op->vtkCacheManager::MapFileToURI(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_MarkNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->MarkNode(temp0);
    }
    else
    {
      op->vtkCacheManager::MarkNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheManager_GetFileFromURIMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileFromURIMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheManager *op = static_cast<vtkCacheManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileFromURIMap(temp0) :
      op->vtkCacheManager::GetFileFromURIMap(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCacheManager_Methods[] = {
  {"IsTypeOf", PyvtkCacheManager_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCacheManager_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCacheManager_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCacheManager\nC++: static vtkCacheManager *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCacheManager_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCacheManager\nC++: vtkCacheManager *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCacheManager_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCacheManager_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInsufficientFreeBufferNotificationFlag", PyvtkCacheManager_GetInsufficientFreeBufferNotificationFlag, METH_VARARGS,
   "GetInsufficientFreeBufferNotificationFlag(self) -> int\nC++: virtual int GetInsufficientFreeBufferNotificationFlag()\n\n"},
  {"SetInsufficientFreeBufferNotificationFlag", PyvtkCacheManager_SetInsufficientFreeBufferNotificationFlag, METH_VARARGS,
   "SetInsufficientFreeBufferNotificationFlag(self, _arg:int) -> None\nC++: virtual void SetInsufficientFreeBufferNotificationFlag(\n    int _arg)\n\n"},
  {"SetRemoteCacheDirectory", PyvtkCacheManager_SetRemoteCacheDirectory, METH_VARARGS,
   "SetRemoteCacheDirectory(self, dir:str) -> None\nC++: virtual void SetRemoteCacheDirectory(const char *dir)\n\nSets the name of the directory to use for local file caching Does\nsome checking to make sure this is a valid directory on the local\nsystem. Makes sure there's NO \"/\" at the end of the string, or\nkwsys/SystemTools will not see as a valid dir.\n"},
  {"GetRemoteCacheDirectory", PyvtkCacheManager_GetRemoteCacheDirectory, METH_VARARGS,
   "GetRemoteCacheDirectory(self) -> str\nC++: const char *GetRemoteCacheDirectory()\n\nReturns the name of the directory to use for local file caching\n"},
  {"UpdateCacheInformation", PyvtkCacheManager_UpdateCacheInformation, METH_VARARGS,
   "UpdateCacheInformation(self) -> None\nC++: void UpdateCacheInformation()\n\nCalled when a file is loaded or removed from the cache.\n"},
  {"DeleteFromCachedFileList", PyvtkCacheManager_DeleteFromCachedFileList, METH_VARARGS,
   "DeleteFromCachedFileList(self, target:str) -> None\nC++: void DeleteFromCachedFileList(const char *target)\n\nRemoves a target from the list of locally cached files and\ndirectories\n"},
  {"DeleteFromCache", PyvtkCacheManager_DeleteFromCache, METH_VARARGS,
   "DeleteFromCache(self, target:str) -> None\nC++: void DeleteFromCache(const char *target)\n\nRemove a target directory or file from the cache.\n"},
  {"ClearCache", PyvtkCacheManager_ClearCache, METH_VARARGS,
   "ClearCache(self) -> int\nC++: int ClearCache()\n\nRemoves all files from the cachedir and removes all filenames\nfrom CachedFileList\n"},
  {"ClearCacheCheck", PyvtkCacheManager_ClearCacheCheck, METH_VARARGS,
   "ClearCacheCheck(self) -> int\nC++: int ClearCacheCheck()\n\nThis method is called after ClearCache(), to see if that method\nactually cleaned the cache. If not, an event (CacheDirtyEvent) is\ninvoked.\n"},
  {"MarkNodesBeforeDeletingDataFromCache", PyvtkCacheManager_MarkNodesBeforeDeletingDataFromCache, METH_VARARGS,
   "MarkNodesBeforeDeletingDataFromCache(self, __a:str) -> None\nC++: void MarkNodesBeforeDeletingDataFromCache(const char *)\n\nBefore a file or directory is deleted, Marks any nodes that hold\nthe URI as a reference as modified since read.\n"},
  {"IsRemoteReference", PyvtkCacheManager_IsRemoteReference, METH_VARARGS,
   "IsRemoteReference(self, uri:str) -> int\nC++: virtual int IsRemoteReference(const char *uri)\n\nChecks to see if a URI appears to point to remote location and\nreturns true if so. Looks for a '://' and if present, checks to\nsee if the prefix is 'file'. If not 'file' but the thing:///\npattern exists, then returns true.\n"},
  {"IsLocalReference", PyvtkCacheManager_IsLocalReference, METH_VARARGS,
   "IsLocalReference(self, uri:str) -> int\nC++: virtual int IsLocalReference(const char *uri)\n\nLooks for a 'file://' in the URI and if present, returns true.\n"},
  {"LocalFileExists", PyvtkCacheManager_LocalFileExists, METH_VARARGS,
   "LocalFileExists(self, uri:str) -> int\nC++: virtual int LocalFileExists(const char *uri)\n\nChecks to see if a URI is a file on disk and returns true if so.\nStrips off a file:/// prefix if present, and expects an absolute\npath.\n"},
  {"FindCachedFile", PyvtkCacheManager_FindCachedFile, METH_VARARGS,
   "FindCachedFile(self, target:str, dirname:str) -> str\nC++: const char *FindCachedFile(const char *target,\n    const char *dirname)\n\nTakes a filename and a dirname (usually called with the\nRemoteCachedDirectory) and returns the full path of the filename\nif it exists under the dirname.\n"},
  {"CachedFileExists", PyvtkCacheManager_CachedFileExists, METH_VARARGS,
   "CachedFileExists(self, filename:str) -> int\nC++: virtual int CachedFileExists(const char *filename)\n\nChecks to see if the The URI provided exists on disk. If not, it\nappends the Remote Cache Directory path and checks again, in case\nno path was provided. If neither exists, returns 0. If one\nexists, returns 1.\n"},
  {"GetFilenameFromURI", PyvtkCacheManager_GetFilenameFromURI, METH_VARARGS,
   "GetFilenameFromURI(self, uri:str) -> str\nC++: const char *GetFilenameFromURI(const char *uri)\n\nExtracts the filename from the URI and prepends the Remote Cache\nDirectory path to it. Returns the full path. NOTE: this method\nlooks at a filename's extension and if appended version numbers\nhave been added, it attempts to strip them out of the extension\nand add them to the filenamebase. So filename.nrrd_010 would\nbecome filename.nrrd. This will cause problems for any file type\nwith an '_' in its extension.\n"},
  {"AddCachePathToFilename", PyvtkCacheManager_AddCachePathToFilename, METH_VARARGS,
   "AddCachePathToFilename(self, filename:str) -> str\nC++: const char *AddCachePathToFilename(const char *filename)\n\n"},
  {"EncodeURI", PyvtkCacheManager_EncodeURI, METH_VARARGS,
   "EncodeURI(self, uri:str) -> str\nC++: const char *EncodeURI(const char *uri)\n\n"},
  {"CacheSizeCheck", PyvtkCacheManager_CacheSizeCheck, METH_VARARGS,
   "CacheSizeCheck(self) -> None\nC++: void CacheSizeCheck()\n\n"},
  {"FreeCacheBufferCheck", PyvtkCacheManager_FreeCacheBufferCheck, METH_VARARGS,
   "FreeCacheBufferCheck(self) -> None\nC++: void FreeCacheBufferCheck()\n\n"},
  {"ComputeCacheSize", PyvtkCacheManager_ComputeCacheSize, METH_VARARGS,
   "ComputeCacheSize(self, dirname:str, size:int) -> float\nC++: float ComputeCacheSize(const char *dirname,\n    unsigned long size)\n\n"},
  {"GetCurrentCacheSize", PyvtkCacheManager_GetCurrentCacheSize, METH_VARARGS,
   "GetCurrentCacheSize(self) -> float\nC++: float GetCurrentCacheSize()\n\n"},
  {"GetFreeCacheSpaceRemaining", PyvtkCacheManager_GetFreeCacheSpaceRemaining, METH_VARARGS,
   "GetFreeCacheSpaceRemaining(self) -> float\nC++: float GetFreeCacheSpaceRemaining()\n\n"},
  {"GetCachedFiles", PyvtkCacheManager_GetCachedFiles, METH_VARARGS,
   "GetCachedFiles(self) -> (str, ...)\nC++: std::vector<std::string> GetCachedFiles()\n\n"},
  {"GetRemoteCacheLimit", PyvtkCacheManager_GetRemoteCacheLimit, METH_VARARGS,
   "GetRemoteCacheLimit(self) -> int\nC++: virtual int GetRemoteCacheLimit()\n\n\n"},
  {"SetRemoteCacheLimit", PyvtkCacheManager_SetRemoteCacheLimit, METH_VARARGS,
   "SetRemoteCacheLimit(self, _arg:int) -> None\nC++: virtual void SetRemoteCacheLimit(int _arg)\n\n"},
  {"SetCurrentCacheSize", PyvtkCacheManager_SetCurrentCacheSize, METH_VARARGS,
   "SetCurrentCacheSize(self, _arg:float) -> None\nC++: virtual void SetCurrentCacheSize(float _arg)\n\n"},
  {"GetRemoteCacheFreeBufferSize", PyvtkCacheManager_GetRemoteCacheFreeBufferSize, METH_VARARGS,
   "GetRemoteCacheFreeBufferSize(self) -> int\nC++: virtual int GetRemoteCacheFreeBufferSize()\n\n"},
  {"SetRemoteCacheFreeBufferSize", PyvtkCacheManager_SetRemoteCacheFreeBufferSize, METH_VARARGS,
   "SetRemoteCacheFreeBufferSize(self, _arg:int) -> None\nC++: virtual void SetRemoteCacheFreeBufferSize(int _arg)\n\n"},
  {"GetEnableForceRedownload", PyvtkCacheManager_GetEnableForceRedownload, METH_VARARGS,
   "GetEnableForceRedownload(self) -> int\nC++: virtual int GetEnableForceRedownload()\n\n"},
  {"SetEnableForceRedownload", PyvtkCacheManager_SetEnableForceRedownload, METH_VARARGS,
   "SetEnableForceRedownload(self, _arg:int) -> None\nC++: virtual void SetEnableForceRedownload(int _arg)\n\n"},
  {"SetMRMLScene", PyvtkCacheManager_SetMRMLScene, METH_VARARGS,
   "SetMRMLScene(self, scene:vtkMRMLScene) -> None\nC++: void SetMRMLScene(vtkMRMLScene *scene)\n\n"},
  {"MapFileToURI", PyvtkCacheManager_MapFileToURI, METH_VARARGS,
   "MapFileToURI(self, uri:str, fname:str) -> None\nC++: void MapFileToURI(const char *uri, const char *fname)\n\n"},
  {"MarkNode", PyvtkCacheManager_MarkNode, METH_VARARGS,
   "MarkNode(self, __a:str) -> None\nC++: void MarkNode(std::string)\n\n"},
  {"GetFileFromURIMap", PyvtkCacheManager_GetFileFromURIMap, METH_VARARGS,
   "GetFileFromURIMap(self, uri:str) -> str\nC++: const char *GetFileFromURIMap(const char *uri)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCacheManager_Doc =
  "vtkCacheManager - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCacheManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkCacheManager", // tp_name
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
  PyvtkCacheManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCacheManager_StaticNew()
{
  return vtkCacheManager::New();
}

PyObject *PyvtkCacheManager_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCacheManager_Type, PyvtkCacheManager_Methods,
    "vtkCacheManager",
 &PyvtkCacheManager_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 8; c++)
  {
    static const struct { const char *name; int value; }
      constants[8] = {
        { "NoCachedFile", vtkCacheManager::NoCachedFile },
        { "OldCachedFile", vtkCacheManager::OldCachedFile },
        { "CachedFile", vtkCacheManager::CachedFile },
        { "InsufficientFreeBufferEvent", vtkCacheManager::InsufficientFreeBufferEvent },
        { "CacheLimitExceededEvent", vtkCacheManager::CacheLimitExceededEvent },
        { "CacheDeleteEvent", vtkCacheManager::CacheDeleteEvent },
        { "CacheDirtyEvent", vtkCacheManager::CacheDirtyEvent },
        { "CacheClearEvent", vtkCacheManager::CacheClearEvent },
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

void PyVTKAddFile_vtkCacheManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCacheManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCacheManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

