// python wrapper for vtkMRMLSceneViewNode
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
#include "vtkMRMLSceneViewNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSceneViewNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSceneViewNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLStorableNode_ClassNew
extern "C" { PyObject *PyvtkMRMLStorableNode_ClassNew(); }
#define DECLARED_PyvtkMRMLStorableNode_ClassNew
#endif

static PyObject *
PyvtkMRMLSceneViewNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSceneViewNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSceneViewNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSceneViewNode *tempr = vtkMRMLSceneViewNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSceneViewNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSceneViewNode::NewInstance());

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
PyvtkMRMLSceneViewNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSceneViewNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSceneViewNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLSceneViewNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_SetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->SetScene(temp0);
    }
    else
    {
      op->vtkMRMLSceneViewNode::SetScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

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
      op->vtkMRMLSceneViewNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLSceneViewNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

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
      op->vtkMRMLSceneViewNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_UpdateStoredScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateStoredScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateStoredScene();
    }
    else
    {
      op->vtkMRMLSceneViewNode::UpdateStoredScene();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_ProcessChildNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessChildNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->ProcessChildNode(temp0);
    }
    else
    {
      op->vtkMRMLSceneViewNode::ProcessChildNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_GetStoredScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStoredScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLScene *tempr = (ap.IsBound() ?
      op->GetStoredScene() :
      op->vtkMRMLSceneViewNode::GetStoredScene());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_StoreScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StoreScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StoreScene();
    }
    else
    {
      op->vtkMRMLSceneViewNode::StoreScene();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_AddMissingNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMissingNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddMissingNodes();
    }
    else
    {
      op->vtkMRMLSceneViewNode::AddMissingNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_RestoreScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  bool temp0 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->RestoreScene(temp0) :
      op->vtkMRMLSceneViewNode::RestoreScene(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_SetAbsentStorageFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsentStorageFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAbsentStorageFileNames();
    }
    else
    {
      op->vtkMRMLSceneViewNode::SetAbsentStorageFileNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_SetSceneViewDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSceneViewDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSceneViewDescription(temp0);
    }
    else
    {
      op->vtkMRMLSceneViewNode::SetSceneViewDescription(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_GetSceneViewDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSceneViewDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetSceneViewDescription() :
      op->vtkMRMLSceneViewNode::GetSceneViewDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_SetScreenShot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenShot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetScreenShot(temp0);
    }
    else
    {
      op->vtkMRMLSceneViewNode::SetScreenShot(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_GetScreenShot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenShot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetScreenShot() :
      op->vtkMRMLSceneViewNode::GetScreenShot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_SetScreenShotType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenShotType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScreenShotType(temp0);
    }
    else
    {
      op->vtkMRMLSceneViewNode::SetScreenShotType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_GetScreenShotType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenShotType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScreenShotType() :
      op->vtkMRMLSceneViewNode::GetScreenShotType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLSceneViewNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_GetNodesByClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodesByClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetNodesByClass(temp0) :
      op->vtkMRMLSceneViewNode::GetNodesByClass(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_IncludeNodeInSceneView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeNodeInSceneView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->IncludeNodeInSceneView(temp0) :
      op->vtkMRMLSceneViewNode::IncludeNodeInSceneView(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSceneViewNode_SetSceneViewRootDir(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSceneViewRootDir");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSceneViewNode *op = static_cast<vtkMRMLSceneViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSceneViewRootDir(temp0);
    }
    else
    {
      op->vtkMRMLSceneViewNode::SetSceneViewRootDir(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSceneViewNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSceneViewNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSceneViewNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSceneViewNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLSceneViewNode\nC++: static vtkMRMLSceneViewNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSceneViewNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSceneViewNode\nC++: vtkMRMLSceneViewNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSceneViewNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSceneViewNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLSceneViewNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"SetScene", PyvtkMRMLSceneViewNode_SetScene, METH_VARARGS,
   "SetScene(self, scene:vtkMRMLScene) -> None\nC++: void SetScene(vtkMRMLScene *scene) override;\n\nThis method is for internal use only.\nUse AddNode method of vtkMRMLScene to add a node to the scene.\n\nInternally calls SetSceneReferences()\n\\sa SetSceneReferences()\n"},
  {"Copy", PyvtkMRMLSceneViewNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLSceneViewNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"UpdateScene", PyvtkMRMLSceneViewNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nUpdates scene nodes\n"},
  {"UpdateStoredScene", PyvtkMRMLSceneViewNode_UpdateStoredScene, METH_VARARGS,
   "UpdateStoredScene(self) -> None\nC++: virtual void UpdateStoredScene()\n\nUpdates internal nodes\n"},
  {"ProcessChildNode", PyvtkMRMLSceneViewNode_ProcessChildNode, METH_VARARGS,
   "ProcessChildNode(self, node:vtkMRMLNode) -> None\nC++: void ProcessChildNode(vtkMRMLNode *node) override;\n\nSet dependencies between this node and a child node when parsing\nXML file\n"},
  {"GetStoredScene", PyvtkMRMLSceneViewNode_GetStoredScene, METH_VARARGS,
   "GetStoredScene(self) -> vtkMRMLScene\nC++: vtkMRMLScene *GetStoredScene()\n\n\\sa StoreScene() RestoreScene()\n"},
  {"StoreScene", PyvtkMRMLSceneViewNode_StoreScene, METH_VARARGS,
   "StoreScene(self) -> None\nC++: void StoreScene()\n\nStore content of the scene\n\\sa GetStoredScene() RestoreScene()\n"},
  {"AddMissingNodes", PyvtkMRMLSceneViewNode_AddMissingNodes, METH_VARARGS,
   "AddMissingNodes(self) -> None\nC++: void AddMissingNodes()\n\nAdd missing nodes from the Slicer scene to the stored scene\n\\sa RestoreScene()\n"},
  {"RestoreScene", PyvtkMRMLSceneViewNode_RestoreScene, METH_VARARGS,
   "RestoreScene(self, removeNodes:bool=True) -> bool\nC++: bool RestoreScene(bool removeNodes=true)\n\nRestore content of the scene from the node. If removeNodes is\ntrue (default), remove nodes from the main Slicer scene that do\nno appear in the scene view. If it is false, and nodes are found\nthat will be deleted, don't remove them, then the method returns\nwith false. This can be used for asking confirmation from the\nuser to delete nodes (if the user decides that nodes can be\nremoved then this method is called again with removeNodes=true).\n\\sa GetStoredScene() StoreScene() AddMissingNodes()\n"},
  {"SetAbsentStorageFileNames", PyvtkMRMLSceneViewNode_SetAbsentStorageFileNames, METH_VARARGS,
   "SetAbsentStorageFileNames(self) -> None\nC++: void SetAbsentStorageFileNames()\n\n"},
  {"SetSceneViewDescription", PyvtkMRMLSceneViewNode_SetSceneViewDescription, METH_VARARGS,
   "SetSceneViewDescription(self, newDescription:str) -> None\nC++: void SetSceneViewDescription(\n    const vtkStdString &newDescription)\n\nA description of this sceneView\n"},
  {"GetSceneViewDescription", PyvtkMRMLSceneViewNode_GetSceneViewDescription, METH_VARARGS,
   "GetSceneViewDescription(self) -> str\nC++: virtual vtkStdString GetSceneViewDescription()\n\n"},
  {"SetScreenShot", PyvtkMRMLSceneViewNode_SetScreenShot, METH_VARARGS,
   "SetScreenShot(self, newScreenShot:vtkImageData) -> None\nC++: virtual void SetScreenShot(vtkImageData *newScreenShot)\n\nThe attached screenshot of this sceneView\n"},
  {"GetScreenShot", PyvtkMRMLSceneViewNode_GetScreenShot, METH_VARARGS,
   "GetScreenShot(self) -> vtkImageData\nC++: virtual vtkImageData *GetScreenShot()\n\n"},
  {"SetScreenShotType", PyvtkMRMLSceneViewNode_SetScreenShotType, METH_VARARGS,
   "SetScreenShotType(self, type:int) -> None\nC++: virtual void SetScreenShotType(int type)\n\nThe screenshot type of this sceneView 0: 3D View 1: Red Slice\nView 2: Yellow Slice View 3: Green Slice View 4: Full layout\n"},
  {"GetScreenShotType", PyvtkMRMLSceneViewNode_GetScreenShotType, METH_VARARGS,
   "GetScreenShotType(self) -> int\nC++: virtual int GetScreenShotType()\n\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLSceneViewNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {"GetNodesByClass", PyvtkMRMLSceneViewNode_GetNodesByClass, METH_VARARGS,
   "GetNodesByClass(self, className:str) -> vtkCollection\nC++: vtkCollection *GetNodesByClass(const char *className)\n\nGet a collection of nodes of a specified class (for python\naccess) You are responsible for deleting the returned collection.\nReturns nullptr on failure.\n\\sa vtkMRMLScene::GetNodesByClass\n"},
  {"IncludeNodeInSceneView", PyvtkMRMLSceneViewNode_IncludeNodeInSceneView, METH_VARARGS,
   "IncludeNodeInSceneView(self, node:vtkMRMLNode) -> bool\nC++: bool IncludeNodeInSceneView(vtkMRMLNode *node)\n\ncheck if a node should be included in the save/restore cycle.\nReturns false if it's a scene view node, scene view storage node,\nscene view hierarchy node, snapshot clip node, true otherwise\n"},
  {"SetSceneViewRootDir", PyvtkMRMLSceneViewNode_SetSceneViewRootDir, METH_VARARGS,
   "SetSceneViewRootDir(self, name:str) -> None\nC++: void SetSceneViewRootDir(const char *name)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSceneViewNode_Doc =
  "vtkMRMLSceneViewNode - no description provided.\n\n"
  "Superclass: vtkMRMLStorableNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSceneViewNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSceneViewNode", // tp_name
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
  PyvtkMRMLSceneViewNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSceneViewNode_StaticNew()
{
  return vtkMRMLSceneViewNode::New();
}

PyObject *PyvtkMRMLSceneViewNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSceneViewNode_Type, PyvtkMRMLSceneViewNode_Methods,
    "vtkMRMLSceneViewNode",
 &PyvtkMRMLSceneViewNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLStorableNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLSceneViewNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSceneViewNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSceneViewNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

