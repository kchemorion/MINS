// python wrapper for vtkMRMLVolumeRenderingDisplayableManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLVolumeRenderingDisplayableManager.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLVolumeRenderingDisplayableManager(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLVolumeRenderingDisplayableManager_ClassNew(); }


static PyObject *
PyvtkMRMLVolumeRenderingDisplayableManager_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLVolumeRenderingDisplayableManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayableManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayableManager *op = static_cast<vtkMRMLVolumeRenderingDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLVolumeRenderingDisplayableManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayableManager_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLVolumeRenderingDisplayableManager *tempr = vtkMRMLVolumeRenderingDisplayableManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayableManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayableManager *op = static_cast<vtkMRMLVolumeRenderingDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumeRenderingDisplayableManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLVolumeRenderingDisplayableManager::NewInstance());

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
PyvtkMRMLVolumeRenderingDisplayableManager_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLVolumeRenderingDisplayableManager::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayableManager_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayableManager *op = static_cast<vtkMRMLVolumeRenderingDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLVolumeRenderingDisplayableManager::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayableManager_OnMRMLSceneStartClose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMRMLSceneStartClose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayableManager *op = static_cast<vtkMRMLVolumeRenderingDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMRMLSceneStartClose();
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayableManager::OnMRMLSceneStartClose();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayableManager_OnMRMLSceneEndClose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMRMLSceneEndClose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayableManager *op = static_cast<vtkMRMLVolumeRenderingDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMRMLSceneEndClose();
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayableManager::OnMRMLSceneEndClose();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayableManager_OnMRMLSceneEndImport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMRMLSceneEndImport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayableManager *op = static_cast<vtkMRMLVolumeRenderingDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMRMLSceneEndImport();
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayableManager::OnMRMLSceneEndImport();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayableManager_OnMRMLSceneEndRestore(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMRMLSceneEndRestore");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayableManager *op = static_cast<vtkMRMLVolumeRenderingDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMRMLSceneEndRestore();
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayableManager::OnMRMLSceneEndRestore();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayableManager_OnMRMLSceneEndBatchProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMRMLSceneEndBatchProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayableManager *op = static_cast<vtkMRMLVolumeRenderingDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMRMLSceneEndBatchProcess();
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayableManager::OnMRMLSceneEndBatchProcess();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayableManager_OnMRMLSceneNodeAdded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMRMLSceneNodeAdded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayableManager *op = static_cast<vtkMRMLVolumeRenderingDisplayableManager *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->OnMRMLSceneNodeAdded(temp0);
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayableManager::OnMRMLSceneNodeAdded(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayableManager_OnMRMLSceneNodeRemoved(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMRMLSceneNodeRemoved");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayableManager *op = static_cast<vtkMRMLVolumeRenderingDisplayableManager *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->OnMRMLSceneNodeRemoved(temp0);
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayableManager::OnMRMLSceneNodeRemoved(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayableManager_UnobserveMRMLScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnobserveMRMLScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayableManager *op = static_cast<vtkMRMLVolumeRenderingDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnobserveMRMLScene();
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayableManager::UnobserveMRMLScene();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayableManager_UpdateFromMRML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateFromMRML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayableManager *op = static_cast<vtkMRMLVolumeRenderingDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateFromMRML();
    }
    else
    {
      op->vtkMRMLVolumeRenderingDisplayableManager::UpdateFromMRML();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayableManager_GetVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayableManager *op = static_cast<vtkMRMLVolumeRenderingDisplayableManager *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode"))
  {
    vtkVolumeMapper *tempr = (ap.IsBound() ?
      op->GetVolumeMapper(temp0) :
      op->vtkMRMLVolumeRenderingDisplayableManager::GetVolumeMapper(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayableManager_GetVolumeActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayableManager *op = static_cast<vtkMRMLVolumeRenderingDisplayableManager *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode"))
  {
    vtkVolume *tempr = (ap.IsBound() ?
      op->GetVolumeActor(temp0) :
      op->vtkMRMLVolumeRenderingDisplayableManager::GetVolumeActor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeRenderingDisplayableManager_Pick3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayableManager *op = static_cast<vtkMRMLVolumeRenderingDisplayableManager *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Pick3D(temp0) :
      op->vtkMRMLVolumeRenderingDisplayableManager::Pick3D(temp0));

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
PyvtkMRMLVolumeRenderingDisplayableManager_GetPickedNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeRenderingDisplayableManager *op = static_cast<vtkMRMLVolumeRenderingDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPickedNodeID() :
      op->vtkMRMLVolumeRenderingDisplayableManager::GetPickedNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLVolumeRenderingDisplayableManager_Methods[] = {
  {"IsTypeOf", PyvtkMRMLVolumeRenderingDisplayableManager_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLVolumeRenderingDisplayableManager_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLVolumeRenderingDisplayableManager_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLVolumeRenderingDisplayableManager\nC++: static vtkMRMLVolumeRenderingDisplayableManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLVolumeRenderingDisplayableManager_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLVolumeRenderingDisplayableManager\nC++: vtkMRMLVolumeRenderingDisplayableManager *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLVolumeRenderingDisplayableManager_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLVolumeRenderingDisplayableManager_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"OnMRMLSceneStartClose", PyvtkMRMLVolumeRenderingDisplayableManager_OnMRMLSceneStartClose, METH_VARARGS,
   "OnMRMLSceneStartClose(self) -> None\nC++: void OnMRMLSceneStartClose() override;\n\nIf vtkMRMLScene::StartCloseEvent has been set to be observed in\n SetMRMLSceneInternal, it is called when the scene fires the\nevent\n\\sa ProcessMRMLSceneEvents, SetMRMLSceneInternal\n\\sa OnMRMLSceneEndClose\n"},
  {"OnMRMLSceneEndClose", PyvtkMRMLVolumeRenderingDisplayableManager_OnMRMLSceneEndClose, METH_VARARGS,
   "OnMRMLSceneEndClose(self) -> None\nC++: void OnMRMLSceneEndClose() override;\n\nIf vtkMRMLScene::EndCloseEvent has been set to be observed in\n SetMRMLSceneInternal, it is called when the scene fires the\nevent\n\\sa ProcessMRMLSceneEvents, SetMRMLSceneInternal\n\\sa OnMRMLSceneStartClose\n"},
  {"OnMRMLSceneEndImport", PyvtkMRMLVolumeRenderingDisplayableManager_OnMRMLSceneEndImport, METH_VARARGS,
   "OnMRMLSceneEndImport(self) -> None\nC++: void OnMRMLSceneEndImport() override;\n\nIf vtkMRMLScene::EndImportEvent has been set to be observed in\n SetMRMLSceneInternal, it is called when the scene fires the\nevent\n\\sa ProcessMRMLSceneEvents, SetMRMLSceneInternal\n\\sa OnMRMLSceneStartImport, OnMRMLSceneNew\n"},
  {"OnMRMLSceneEndRestore", PyvtkMRMLVolumeRenderingDisplayableManager_OnMRMLSceneEndRestore, METH_VARARGS,
   "OnMRMLSceneEndRestore(self) -> None\nC++: void OnMRMLSceneEndRestore() override;\n\nIf vtkMRMLScene::EndRestoreEvent has been set to be observed in\n SetMRMLSceneInternal, it is called when the scene fires the\nevent\n\\sa ProcessMRMLSceneEvents, SetMRMLSceneInternal\n\\sa OnMRMLSceneStartRestore\n"},
  {"OnMRMLSceneEndBatchProcess", PyvtkMRMLVolumeRenderingDisplayableManager_OnMRMLSceneEndBatchProcess, METH_VARARGS,
   "OnMRMLSceneEndBatchProcess(self) -> None\nC++: void OnMRMLSceneEndBatchProcess() override;\n\nIf vtkMRMLScene::EndBatchProcessEvent has been set to be observed\nin\n SetMRMLSceneInternal, it is called when the scene fires the\nevent Internally calls UpdateFromMRMLScene. Can be reimplemented\nto change the default behavior.\n\\sa ProcessMRMLSceneEvents, SetMRMLSceneInternal\n\\sa OnMRMLSceneStartBatchProcess\n"},
  {"OnMRMLSceneNodeAdded", PyvtkMRMLVolumeRenderingDisplayableManager_OnMRMLSceneNodeAdded, METH_VARARGS,
   "OnMRMLSceneNodeAdded(self, node:vtkMRMLNode) -> None\nC++: void OnMRMLSceneNodeAdded(vtkMRMLNode *node) override;\n\nIf vtkMRMLScene::NodeAddedEvent has been set to be observed in\n SetMRMLSceneInternal, it is called when the scene fires the\nevent\n\\sa ProcessMRMLSceneEvents, SetMRMLSceneInternal\n\\sa OnMRMLSceneNodeRemoved, vtkMRMLScene::NodeAboutToBeAdded\n"},
  {"OnMRMLSceneNodeRemoved", PyvtkMRMLVolumeRenderingDisplayableManager_OnMRMLSceneNodeRemoved, METH_VARARGS,
   "OnMRMLSceneNodeRemoved(self, node:vtkMRMLNode) -> None\nC++: void OnMRMLSceneNodeRemoved(vtkMRMLNode *node) override;\n\nIf vtkMRMLScene::NodeRemovedEvent has been set to be observed in\n SetMRMLSceneInternal, it is called when the scene fires the\nevent\n\\sa ProcessMRMLSceneEvents, SetMRMLSceneInternal\n\\sa OnMRMLSceneNodeAdded, vtkMRMLScene::NodeAboutToBeRemoved\n"},
  {"UnobserveMRMLScene", PyvtkMRMLVolumeRenderingDisplayableManager_UnobserveMRMLScene, METH_VARARGS,
   "UnobserveMRMLScene(self) -> None\nC++: void UnobserveMRMLScene() override;\n\nCalled anytime a scene is not set to the logic anymore (e.g. a\nnew or no scene is set) Reimplement the method to delete all the\nscene specific information such as a node IDs, pointers...\n\\sa SetMRMLSceneInternal, ObserveMRMLScene, UpdateFromMRMLScene\n"},
  {"UpdateFromMRML", PyvtkMRMLVolumeRenderingDisplayableManager_UpdateFromMRML, METH_VARARGS,
   "UpdateFromMRML(self) -> None\nC++: void UpdateFromMRML() override;\n\nUpdate actors based on volumes in the scene\n"},
  {"GetVolumeMapper", PyvtkMRMLVolumeRenderingDisplayableManager_GetVolumeMapper, METH_VARARGS,
   "GetVolumeMapper(self, volumeNode:vtkMRMLVolumeNode)\n    -> vtkVolumeMapper\nC++: vtkVolumeMapper *GetVolumeMapper(\n    vtkMRMLVolumeNode *volumeNode)\n\nUtility functions mainly used for testing\n"},
  {"GetVolumeActor", PyvtkMRMLVolumeRenderingDisplayableManager_GetVolumeActor, METH_VARARGS,
   "GetVolumeActor(self, volumeNode:vtkMRMLVolumeNode) -> vtkVolume\nC++: vtkVolume *GetVolumeActor(vtkMRMLVolumeNode *volumeNode)\n\n"},
  {"Pick3D", PyvtkMRMLVolumeRenderingDisplayableManager_Pick3D, METH_VARARGS,
   "Pick3D(self, ras:[float, float, float]) -> int\nC++: int Pick3D(double ras[3]) override;\n\nFind display node managed by the displayable manager at a\nspecified world RAS position.\n\\return Non-zero in case a node is found at the position, 0\n    otherwise\n"},
  {"GetPickedNodeID", PyvtkMRMLVolumeRenderingDisplayableManager_GetPickedNodeID, METH_VARARGS,
   "GetPickedNodeID(self) -> str\nC++: const char *GetPickedNodeID() override;\n\nGet the MRML ID of the picked node, returns empty string if no\npick\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLVolumeRenderingDisplayableManager_Doc =
  "vtkMRMLVolumeRenderingDisplayableManager - no description provided.\n\n"
  "Superclass: vtkMRMLAbstractThreeDViewDisplayableManager\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLVolumeRenderingDisplayableManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerPython.vtkMRMLVolumeRenderingDisplayableManager", // tp_name
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
  PyvtkMRMLVolumeRenderingDisplayableManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLVolumeRenderingDisplayableManager_StaticNew()
{
  return vtkMRMLVolumeRenderingDisplayableManager::New();
}

PyObject *PyvtkMRMLVolumeRenderingDisplayableManager_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLVolumeRenderingDisplayableManager_Type, PyvtkMRMLVolumeRenderingDisplayableManager_Methods,
    "vtkMRMLVolumeRenderingDisplayableManager",
 &PyvtkMRMLVolumeRenderingDisplayableManager_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLAbstractThreeDViewDisplayableManager");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLVolumeRenderingDisplayableManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLVolumeRenderingDisplayableManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLVolumeRenderingDisplayableManager", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyLong_FromLong(100);
  if (o)
  {
    PyDict_SetItemString(dict, "VTKIS_VOLUME_PROPS", o);
    Py_DECREF(o);
  }
}

