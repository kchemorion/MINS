// python wrapper for vtkMRMLAbstractDisplayableManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLAbstractDisplayableManager.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLAbstractDisplayableManager(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLAbstractDisplayableManager_ClassNew(); }


static PyObject *
PyvtkMRMLAbstractDisplayableManager_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAbstractDisplayableManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLAbstractDisplayableManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLAbstractDisplayableManager *tempr = vtkMRMLAbstractDisplayableManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAbstractDisplayableManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLAbstractDisplayableManager::NewInstance());

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
PyvtkMRMLAbstractDisplayableManager_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLAbstractDisplayableManager::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLAbstractDisplayableManager::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_IsCreated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCreated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsCreated() :
      op->vtkMRMLAbstractDisplayableManager::IsCreated());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_SetLightBoxRendererManagerProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightBoxRendererManagerProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

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
      op->vtkMRMLAbstractDisplayableManager::SetLightBoxRendererManagerProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_GetLightBoxRendererManagerProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightBoxRendererManagerProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLLightBoxRendererManagerProxy *tempr = (ap.IsBound() ?
      op->GetLightBoxRendererManagerProxy() :
      op->vtkMRMLAbstractDisplayableManager::GetLightBoxRendererManagerProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_GetRenderer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkMRMLAbstractDisplayableManager::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAbstractDisplayableManager_GetRenderer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer(temp0) :
      op->vtkMRMLAbstractDisplayableManager::GetRenderer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAbstractDisplayableManager_GetRenderer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLAbstractDisplayableManager_GetRenderer_s1(self, args);
    case 1:
      return PyvtkMRMLAbstractDisplayableManager_GetRenderer_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRenderer");
  return nullptr;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkMRMLAbstractDisplayableManager::GetInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_GetInteractionNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLInteractionNode *tempr = (ap.IsBound() ?
      op->GetInteractionNode() :
      op->vtkMRMLAbstractDisplayableManager::GetInteractionNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_GetSelectionNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSelectionNode *tempr = (ap.IsBound() ?
      op->GetSelectionNode() :
      op->vtkMRMLAbstractDisplayableManager::GetSelectionNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_GetDataProbeInfoStringForPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataProbeInfoStringForPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    std::string tempr = (ap.IsBound() ?
      op->GetDataProbeInfoStringForPosition(temp0) :
      op->vtkMRMLAbstractDisplayableManager::GetDataProbeInfoStringForPosition(temp0));

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
PyvtkMRMLAbstractDisplayableManager_CanProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->CanProcessInteractionEvent(temp0, temp1) :
      op->vtkMRMLAbstractDisplayableManager::CanProcessInteractionEvent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_ProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessInteractionEvent(temp0) :
      op->vtkMRMLAbstractDisplayableManager::ProcessInteractionEvent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_SetHasFocus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasFocus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  bool temp0 = false;
  vtkMRMLInteractionEventData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLInteractionEventData"))
  {
    if (ap.IsBound())
    {
      op->SetHasFocus(temp0, temp1);
    }
    else
    {
      op->vtkMRMLAbstractDisplayableManager::SetHasFocus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_GetGrabFocus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrabFocus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGrabFocus() :
      op->vtkMRMLAbstractDisplayableManager::GetGrabFocus());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_GetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInteractive() :
      op->vtkMRMLAbstractDisplayableManager::GetInteractive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_GetMouseCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMouseCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMouseCursor() :
      op->vtkMRMLAbstractDisplayableManager::GetMouseCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractDisplayableManager_SetMouseCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMouseCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractDisplayableManager *op = static_cast<vtkMRMLAbstractDisplayableManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMouseCursor(temp0);
    }
    else
    {
      op->vtkMRMLAbstractDisplayableManager::SetMouseCursor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLAbstractDisplayableManager_Methods[] = {
  {"IsTypeOf", PyvtkMRMLAbstractDisplayableManager_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLAbstractDisplayableManager_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLAbstractDisplayableManager_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLAbstractDisplayableManager\nC++: static vtkMRMLAbstractDisplayableManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLAbstractDisplayableManager_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLAbstractDisplayableManager\nC++: vtkMRMLAbstractDisplayableManager *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLAbstractDisplayableManager_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLAbstractDisplayableManager_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsCreated", PyvtkMRMLAbstractDisplayableManager_IsCreated, METH_VARARGS,
   "IsCreated(self) -> bool\nC++: bool IsCreated()\n\nReturn True if Create() method has been invoked\n\\sa CreateIfPossible() Create()\n"},
  {"SetLightBoxRendererManagerProxy", PyvtkMRMLAbstractDisplayableManager_SetLightBoxRendererManagerProxy, METH_VARARGS,
   "SetLightBoxRendererManagerProxy(self,\n    __a:vtkMRMLLightBoxRendererManagerProxy) -> None\nC++: virtual void SetLightBoxRendererManagerProxy(\n    vtkMRMLLightBoxRendererManagerProxy *)\n\nSet the LightBoxRendererManager proxy. This proxy provides a\nmethod GetRenderer(int) that returns the renderer for the Nth\nlightbox pane. The DisplayableManagers use this method to map\ncoordinates to the proper lightbox pane, e.g. in placing\ncrosshairs or markups in the proper renderer.\n"},
  {"GetLightBoxRendererManagerProxy", PyvtkMRMLAbstractDisplayableManager_GetLightBoxRendererManagerProxy, METH_VARARGS,
   "GetLightBoxRendererManagerProxy(self)\n    -> vtkMRMLLightBoxRendererManagerProxy\nC++: virtual vtkMRMLLightBoxRendererManagerProxy *GetLightBoxRendererManagerProxy(\n    )\n\nGet the LightBoxRendererManagerProxy if one has been provided\n\\sa SetLightBoxRendererManagerProxy(vtkMRMLLightBoxRendererManager\n    Proxy *)\n"},
  {"GetRenderer", PyvtkMRMLAbstractDisplayableManager_GetRenderer, METH_VARARGS,
   "GetRenderer(self) -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\nGetRenderer(self, idx:int) -> vtkRenderer\nC++: vtkRenderer *GetRenderer(int idx)\n\nGet the default renderer for this displayable manager.\n"},
  {"GetInteractor", PyvtkMRMLAbstractDisplayableManager_GetInteractor, METH_VARARGS,
   "GetInteractor(self) -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *GetInteractor()\n\nConvenient method to get the WindowInteractor associated with the\nRenderer\n"},
  {"GetInteractionNode", PyvtkMRMLAbstractDisplayableManager_GetInteractionNode, METH_VARARGS,
   "GetInteractionNode(self) -> vtkMRMLInteractionNode\nC++: vtkMRMLInteractionNode *GetInteractionNode()\n\nConvenient method to get the current InteractionNode\n"},
  {"GetSelectionNode", PyvtkMRMLAbstractDisplayableManager_GetSelectionNode, METH_VARARGS,
   "GetSelectionNode(self) -> vtkMRMLSelectionNode\nC++: vtkMRMLSelectionNode *GetSelectionNode()\n\nConvenient method to get the current SelectionNode\n"},
  {"GetDataProbeInfoStringForPosition", PyvtkMRMLAbstractDisplayableManager_GetDataProbeInfoStringForPosition, METH_VARARGS,
   "GetDataProbeInfoStringForPosition(self, xyz:[float, float, float])\n     -> str\nC++: virtual std::string GetDataProbeInfoStringForPosition(\n    double xyz[3])\n\nAssemble and return info string to display in Data probe for a\ngiven viewer XYZ position.\n\\return Invalid string by default, meaning no information to\n    display.\n"},
  {"CanProcessInteractionEvent", PyvtkMRMLAbstractDisplayableManager_CanProcessInteractionEvent, METH_VARARGS,
   "CanProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData, distance2:float)\n    -> bool\nC++: virtual bool CanProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData, double &distance2)\n\nReturn true if the displayable manager can process the event.\nDistance2 is the squared distance in display coordinates from the\nclosest interaction position. The displayable manager with the\nclosest distance will get the chance to process the interaction\nevent.\n"},
  {"ProcessInteractionEvent", PyvtkMRMLAbstractDisplayableManager_ProcessInteractionEvent, METH_VARARGS,
   "ProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData) -> bool\nC++: virtual bool ProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData)\n\nProcess an interaction event. Returns true if the event should be\naborted (not processed any further by other event observers).\n"},
  {"SetHasFocus", PyvtkMRMLAbstractDisplayableManager_SetHasFocus, METH_VARARGS,
   "SetHasFocus(self, hasFocus:bool,\n    eventData:vtkMRMLInteractionEventData) -> None\nC++: virtual void SetHasFocus(bool hasFocus,\n    vtkMRMLInteractionEventData *eventData)\n\nSet if the widget gets/loses focus (interaction events are\nprocessed by this displayable manager).\n"},
  {"GetGrabFocus", PyvtkMRMLAbstractDisplayableManager_GetGrabFocus, METH_VARARGS,
   "GetGrabFocus(self) -> bool\nC++: virtual bool GetGrabFocus()\n\nDisplayable manager can indicate that it would like to get all\nevents (even when mouse pointer is outside the window).\n"},
  {"GetInteractive", PyvtkMRMLAbstractDisplayableManager_GetInteractive, METH_VARARGS,
   "GetInteractive(self) -> bool\nC++: virtual bool GetInteractive()\n\nDisplayable manager can indicate that the window is in\ninteractive mode (faster updates).\n"},
  {"GetMouseCursor", PyvtkMRMLAbstractDisplayableManager_GetMouseCursor, METH_VARARGS,
   "GetMouseCursor(self) -> int\nC++: virtual int GetMouseCursor()\n\nDisplayable manager returns ID of the mouse cursor shape that\nshould be displayed\n"},
  {"SetMouseCursor", PyvtkMRMLAbstractDisplayableManager_SetMouseCursor, METH_VARARGS,
   "SetMouseCursor(self, cursor:int) -> None\nC++: void SetMouseCursor(int cursor)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLAbstractDisplayableManager_Doc =
  "vtkMRMLAbstractDisplayableManager - Superclass for displayable\nmanager classes.\n\n"
  "Superclass: vtkMRMLAbstractLogic\n\n"
  "A displayable manager is responsible for representing MRML display\n"
  "nodes into a renderer (e.g. 2D view renderer). Displayable managers\n"
  "are the interface between MRML display nodes and\n"
  "vtkRenderer/vtkActors. They are responsible for creating and\n"
  "synchronizing vtkActor, vtkMapper and vtkProperties with MRML display\n"
  "nodes.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAbstractDisplayableManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLAbstractDisplayableManager", // tp_name
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
  PyvtkMRMLAbstractDisplayableManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLAbstractDisplayableManager_StaticNew()
{
  return vtkMRMLAbstractDisplayableManager::New();
}

PyObject *PyvtkMRMLAbstractDisplayableManager_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLAbstractDisplayableManager_Type, PyvtkMRMLAbstractDisplayableManager_Methods,
    "vtkMRMLAbstractDisplayableManager",
 &PyvtkMRMLAbstractDisplayableManager_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLAbstractLogic");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLAbstractDisplayableManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLAbstractDisplayableManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLAbstractDisplayableManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

