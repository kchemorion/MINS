// python wrapper for vtkMRMLDisplayableManagerGroup
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLDisplayableManagerGroup.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLDisplayableManagerGroup(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLDisplayableManagerGroup_ClassNew(); }


static PyObject *
PyvtkMRMLDisplayableManagerGroup_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLDisplayableManagerGroup::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerGroup *op = static_cast<vtkMRMLDisplayableManagerGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLDisplayableManagerGroup::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLDisplayableManagerGroup *tempr = vtkMRMLDisplayableManagerGroup::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerGroup *op = static_cast<vtkMRMLDisplayableManagerGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDisplayableManagerGroup *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLDisplayableManagerGroup::NewInstance());

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
PyvtkMRMLDisplayableManagerGroup_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLDisplayableManagerGroup::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerGroup *op = static_cast<vtkMRMLDisplayableManagerGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLDisplayableManagerGroup::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerGroup *op = static_cast<vtkMRMLDisplayableManagerGroup *>(vp);

  vtkMRMLDisplayableManagerFactory *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableManagerFactory") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1);
    }
    else
    {
      op->vtkMRMLDisplayableManagerGroup::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_SetAndObserveDisplayableManagerFactory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveDisplayableManagerFactory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerGroup *op = static_cast<vtkMRMLDisplayableManagerGroup *>(vp);

  vtkMRMLDisplayableManagerFactory *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableManagerFactory"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveDisplayableManagerFactory(temp0);
    }
    else
    {
      op->vtkMRMLDisplayableManagerGroup::SetAndObserveDisplayableManagerFactory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_AddDisplayableManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDisplayableManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerGroup *op = static_cast<vtkMRMLDisplayableManagerGroup *>(vp);

  vtkMRMLAbstractDisplayableManager *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLAbstractDisplayableManager"))
  {
    if (ap.IsBound())
    {
      op->AddDisplayableManager(temp0);
    }
    else
    {
      op->vtkMRMLDisplayableManagerGroup::AddDisplayableManager(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_GetDisplayableManagerCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayableManagerCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerGroup *op = static_cast<vtkMRMLDisplayableManagerGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisplayableManagerCount() :
      op->vtkMRMLDisplayableManagerGroup::GetDisplayableManagerCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_GetNthDisplayableManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthDisplayableManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerGroup *op = static_cast<vtkMRMLDisplayableManagerGroup *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLAbstractDisplayableManager *tempr = (ap.IsBound() ?
      op->GetNthDisplayableManager(temp0) :
      op->vtkMRMLDisplayableManagerGroup::GetNthDisplayableManager(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_GetDisplayableManagerByClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayableManagerByClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerGroup *op = static_cast<vtkMRMLDisplayableManagerGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLAbstractDisplayableManager *tempr = (ap.IsBound() ?
      op->GetDisplayableManagerByClassName(temp0) :
      op->vtkMRMLDisplayableManagerGroup::GetDisplayableManagerByClassName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerGroup *op = static_cast<vtkMRMLDisplayableManagerGroup *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkMRMLDisplayableManagerGroup::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerGroup *op = static_cast<vtkMRMLDisplayableManagerGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkMRMLDisplayableManagerGroup::GetInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_RequestRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerGroup *op = static_cast<vtkMRMLDisplayableManagerGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RequestRender();
    }
    else
    {
      op->vtkMRMLDisplayableManagerGroup::RequestRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerGroup *op = static_cast<vtkMRMLDisplayableManagerGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkMRMLDisplayableManagerGroup::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_GetMRMLDisplayableNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMRMLDisplayableNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerGroup *op = static_cast<vtkMRMLDisplayableManagerGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetMRMLDisplayableNode() :
      op->vtkMRMLDisplayableManagerGroup::GetMRMLDisplayableNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_SetMRMLDisplayableNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMRMLDisplayableNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerGroup *op = static_cast<vtkMRMLDisplayableManagerGroup *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->SetMRMLDisplayableNode(temp0);
    }
    else
    {
      op->vtkMRMLDisplayableManagerGroup::SetMRMLDisplayableNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_IsADisplayableManager(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsADisplayableManager");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkMRMLDisplayableManagerGroup::IsADisplayableManager(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_InstantiateDisplayableManager(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "InstantiateDisplayableManager");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLAbstractDisplayableManager *tempr = vtkMRMLDisplayableManagerGroup::InstantiateDisplayableManager(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_SetLightBoxRendererManagerProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightBoxRendererManagerProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerGroup *op = static_cast<vtkMRMLDisplayableManagerGroup *>(vp);

  vtkMRMLLightBoxRendererManagerProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLLightBoxRendererManagerProxy"))
  {
    if (ap.IsBound())
    {
      op->SetLightBoxRendererManagerProxy(temp0);
    }
    else
    {
      op->vtkMRMLDisplayableManagerGroup::SetLightBoxRendererManagerProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableManagerGroup_GetLightBoxRendererManagerProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightBoxRendererManagerProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableManagerGroup *op = static_cast<vtkMRMLDisplayableManagerGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLLightBoxRendererManagerProxy *tempr = (ap.IsBound() ?
      op->GetLightBoxRendererManagerProxy() :
      op->vtkMRMLDisplayableManagerGroup::GetLightBoxRendererManagerProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLDisplayableManagerGroup_Methods[] = {
  {"IsTypeOf", PyvtkMRMLDisplayableManagerGroup_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLDisplayableManagerGroup_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLDisplayableManagerGroup_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLDisplayableManagerGroup\nC++: static vtkMRMLDisplayableManagerGroup *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLDisplayableManagerGroup_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLDisplayableManagerGroup\nC++: vtkMRMLDisplayableManagerGroup *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLDisplayableManagerGroup_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLDisplayableManagerGroup_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkMRMLDisplayableManagerGroup_Initialize, METH_VARARGS,
   "Initialize(self, factory:vtkMRMLDisplayableManagerFactory,\n    renderer:vtkRenderer) -> None\nC++: void Initialize(vtkMRMLDisplayableManagerFactory *factory,\n    vtkRenderer *renderer)\n\nConvenient method equivalent to call\nSetAndObserveDisplayableManagerFactory, SetRenderer, then\ninstantiate and add all displayable managers registered within\nthe factory.\n\\sa SetAndObserveDisplayableManagerFactory SetRenderer\n\\sa AddDisplayableManager InstantiateDisplayableManager\n"},
  {"SetAndObserveDisplayableManagerFactory", PyvtkMRMLDisplayableManagerGroup_SetAndObserveDisplayableManagerFactory, METH_VARARGS,
   "SetAndObserveDisplayableManagerFactory(self,\n    factory:vtkMRMLDisplayableManagerFactory) -> None\nC++: void SetAndObserveDisplayableManagerFactory(\n    vtkMRMLDisplayableManagerFactory *factory)\n\nSet and observe DisplayableManager factory\n"},
  {"AddDisplayableManager", PyvtkMRMLDisplayableManagerGroup_AddDisplayableManager, METH_VARARGS,
   "AddDisplayableManager(self,\n    displayableManager:vtkMRMLAbstractDisplayableManager) -> None\nC++: void AddDisplayableManager(\n    vtkMRMLAbstractDisplayableManager *displayableManager)\n\nAdd a DisplayableManager and initialize it if required\n"},
  {"GetDisplayableManagerCount", PyvtkMRMLDisplayableManagerGroup_GetDisplayableManagerCount, METH_VARARGS,
   "GetDisplayableManagerCount(self) -> int\nC++: int GetDisplayableManagerCount()\n\nReturn the number of DisplayableManager already added to the\ngroup\n"},
  {"GetNthDisplayableManager", PyvtkMRMLDisplayableManagerGroup_GetNthDisplayableManager, METH_VARARGS,
   "GetNthDisplayableManager(self, n:int)\n    -> vtkMRMLAbstractDisplayableManager\nC++: vtkMRMLAbstractDisplayableManager *GetNthDisplayableManager(\n    int n)\n\n"},
  {"GetDisplayableManagerByClassName", PyvtkMRMLDisplayableManagerGroup_GetDisplayableManagerByClassName, METH_VARARGS,
   "GetDisplayableManagerByClassName(self, className:str)\n    -> vtkMRMLAbstractDisplayableManager\nC++: vtkMRMLAbstractDisplayableManager *GetDisplayableManagerByClassName(\n    const char *className)\n\nReturn a DisplayableManager given its class name\n"},
  {"SetRenderer", PyvtkMRMLDisplayableManagerGroup_SetRenderer, METH_VARARGS,
   "SetRenderer(self, newRenderer:vtkRenderer) -> None\nC++: void SetRenderer(vtkRenderer *newRenderer)\n\nSet Renderer and Interactor No-op if already initialized.\n\\sa IsInitialized\n"},
  {"GetInteractor", PyvtkMRMLDisplayableManagerGroup_GetInteractor, METH_VARARGS,
   "GetInteractor(self) -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *GetInteractor()\n\nConvenient method to get the WindowInteractor associated with the\nRenderer\n"},
  {"RequestRender", PyvtkMRMLDisplayableManagerGroup_RequestRender, METH_VARARGS,
   "RequestRender(self) -> None\nC++: void RequestRender()\n\nInvoke vtkCommand::UpdateEvent An observer can then listen for\nthat event and \"compress\" the different Render requests to\nefficiently call RenderWindow->Render()\n\\sa vtkMRMLAbstractDisplayableManager::RequestRender()\n"},
  {"GetRenderer", PyvtkMRMLDisplayableManagerGroup_GetRenderer, METH_VARARGS,
   "GetRenderer(self) -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nGet Renderer\n"},
  {"GetMRMLDisplayableNode", PyvtkMRMLDisplayableManagerGroup_GetMRMLDisplayableNode, METH_VARARGS,
   "GetMRMLDisplayableNode(self) -> vtkMRMLNode\nC++: vtkMRMLNode *GetMRMLDisplayableNode()\n\nSet / Get MRML Displayable Node\n"},
  {"SetMRMLDisplayableNode", PyvtkMRMLDisplayableManagerGroup_SetMRMLDisplayableNode, METH_VARARGS,
   "SetMRMLDisplayableNode(self, newMRMLDisplayableNode:vtkMRMLNode)\n    -> None\nC++: void SetMRMLDisplayableNode(\n    vtkMRMLNode *newMRMLDisplayableNode)\n\n"},
  {"IsADisplayableManager", PyvtkMRMLDisplayableManagerGroup_IsADisplayableManager, METH_VARARGS,
   "IsADisplayableManager(displayableManagerName:str) -> bool\nC++: static bool IsADisplayableManager(\n    const char *displayableManagerName)\n\nReturns true if the displayableManagerName corresponds to a valid\ndisplayable manager, false otherwise. To be valid, ad\ndisplayableManagerName must be the name of a VTK class that\nderives from vtkMRMLAbstractDisplayableManager or be a valid\npython script file name.\n"},
  {"InstantiateDisplayableManager", PyvtkMRMLDisplayableManagerGroup_InstantiateDisplayableManager, METH_VARARGS,
   "InstantiateDisplayableManager(displayableManagerName:str)\n    -> vtkMRMLAbstractDisplayableManager\nC++: static vtkMRMLAbstractDisplayableManager *InstantiateDisplayableManager(\n    const char *displayableManagerName)\n\nReturns a new instance of a displayable manager defined by its\nname: VTK class name or python file name. You are responsible of\nthe returned pointer.\n"},
  {"SetLightBoxRendererManagerProxy", PyvtkMRMLDisplayableManagerGroup_SetLightBoxRendererManagerProxy, METH_VARARGS,
   "SetLightBoxRendererManagerProxy(self,\n    __a:vtkMRMLLightBoxRendererManagerProxy) -> None\nC++: virtual void SetLightBoxRendererManagerProxy(\n    vtkMRMLLightBoxRendererManagerProxy *)\n\nSet the LightBoxRendererManagerProxy on the\nDisplayableManagerGroup. This caches the proxy and broadcasts the\nproxy to all DisplayableManagers in the group. This proxy\nprovides a method GetRenderer(int) that returns the renderer for\nthe Nth lightbox pane. The DisplayableManagers use this method to\nmap coordinates to the proper lightbox pane, e.g. in placing\ncrosshairs or markups in the proper renderer.\n"},
  {"GetLightBoxRendererManagerProxy", PyvtkMRMLDisplayableManagerGroup_GetLightBoxRendererManagerProxy, METH_VARARGS,
   "GetLightBoxRendererManagerProxy(self)\n    -> vtkMRMLLightBoxRendererManagerProxy\nC++: virtual vtkMRMLLightBoxRendererManagerProxy *GetLightBoxRendererManagerProxy(\n    )\n\nGet the LightBoxRendererManagerProxy if one has been provided.\n\\sa SetLightBoxRendererManagerProxy(vtkMRMLLightBoxRendererManager\n    Proxy *)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLDisplayableManagerGroup_Doc =
  "vtkMRMLDisplayableManagerGroup - DisplayableManagerGroup is a\ncollection of DisplayableManager.\n\n"
  "Superclass: vtkObject\n\n"
  "It also provides method allowing to either call RenderRequest or\n"
  "SetAndObserveMRMLDisplayableNode on all member of the group. When the\n"
  "displayable managers in the group request the view to be refreshed,\n"
  "the group fires a vtkCommand::UpdateEvent event. This event can be\n"
  "observed and trigger a Render on the render window.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLDisplayableManagerGroup_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLDisplayableManagerGroup", // tp_name
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
  PyvtkMRMLDisplayableManagerGroup_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLDisplayableManagerGroup_StaticNew()
{
  return vtkMRMLDisplayableManagerGroup::New();
}

PyObject *PyvtkMRMLDisplayableManagerGroup_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLDisplayableManagerGroup_Type, PyvtkMRMLDisplayableManagerGroup_Methods,
    "vtkMRMLDisplayableManagerGroup",
 &PyvtkMRMLDisplayableManagerGroup_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLDisplayableManagerGroup(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLDisplayableManagerGroup_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLDisplayableManagerGroup", o) != 0)
  {
    Py_DECREF(o);
  }

}

