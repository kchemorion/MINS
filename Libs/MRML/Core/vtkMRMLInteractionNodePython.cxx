// python wrapper for vtkMRMLInteractionNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLInteractionNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLInteractionNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLInteractionNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLNode_ClassNew
extern "C" { PyObject *PyvtkMRMLNode_ClassNew(); }
#define DECLARED_PyvtkMRMLNode_ClassNew
#endif

static PyObject *
PyvtkMRMLInteractionNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLInteractionNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLInteractionNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLInteractionNode *tempr = vtkMRMLInteractionNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLInteractionNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLInteractionNode::NewInstance());

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
PyvtkMRMLInteractionNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLInteractionNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLInteractionNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLInteractionNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

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
      op->vtkMRMLInteractionNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLInteractionNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_GetCurrentInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentInteractionMode() :
      op->vtkMRMLInteractionNode::GetCurrentInteractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_SetCurrentInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentInteractionMode(temp0);
    }
    else
    {
      op->vtkMRMLInteractionNode::SetCurrentInteractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_GetLastInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastInteractionMode() :
      op->vtkMRMLInteractionNode::GetLastInteractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_SetLastInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastInteractionMode(temp0);
    }
    else
    {
      op->vtkMRMLInteractionNode::SetLastInteractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_GetPlaceModePersistence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceModePersistence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaceModePersistence() :
      op->vtkMRMLInteractionNode::GetPlaceModePersistence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_GetTransformModePersistence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformModePersistence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTransformModePersistence() :
      op->vtkMRMLInteractionNode::GetTransformModePersistence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_SetPlaceModePersistence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaceModePersistence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlaceModePersistence(temp0);
    }
    else
    {
      op->vtkMRMLInteractionNode::SetPlaceModePersistence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_SetTransformModePersistence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformModePersistence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransformModePersistence(temp0);
    }
    else
    {
      op->vtkMRMLInteractionNode::SetTransformModePersistence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_NormalizeAllMouseModes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeAllMouseModes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeAllMouseModes();
    }
    else
    {
      op->vtkMRMLInteractionNode::NormalizeAllMouseModes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_GetInteractionModeAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInteractionModeAsString(temp0) :
      op->vtkMRMLInteractionNode::GetInteractionModeAsString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLInteractionNode_GetInteractionModeAsString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInteractionModeAsString() :
      op->vtkMRMLInteractionNode::GetInteractionModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLInteractionNode_GetInteractionModeAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLInteractionNode_GetInteractionModeAsString_s1(self, args);
    case 0:
      return PyvtkMRMLInteractionNode_GetInteractionModeAsString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInteractionModeAsString");
  return nullptr;
}


static PyObject *
PyvtkMRMLInteractionNode_GetInteractionModeByString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionModeByString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionModeByString(temp0) :
      op->vtkMRMLInteractionNode::GetInteractionModeByString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_SwitchToPersistentPlaceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwitchToPersistentPlaceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwitchToPersistentPlaceMode();
    }
    else
    {
      op->vtkMRMLInteractionNode::SwitchToPersistentPlaceMode();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_SwitchToSinglePlaceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwitchToSinglePlaceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwitchToSinglePlaceMode();
    }
    else
    {
      op->vtkMRMLInteractionNode::SwitchToSinglePlaceMode();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_SwitchToViewTransformMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwitchToViewTransformMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwitchToViewTransformMode();
    }
    else
    {
      op->vtkMRMLInteractionNode::SwitchToViewTransformMode();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_GetEnableFiberEdit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableFiberEdit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableFiberEdit() :
      op->vtkMRMLInteractionNode::GetEnableFiberEdit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_SetEnableFiberEdit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableFiberEdit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableFiberEdit(temp0);
    }
    else
    {
      op->vtkMRMLInteractionNode::SetEnableFiberEdit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_EditNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EditNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->EditNode(temp0);
    }
    else
    {
      op->vtkMRMLInteractionNode::EditNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLInteractionNode_ShowViewContextMenu(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowViewContextMenu");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLInteractionNode *op = static_cast<vtkMRMLInteractionNode *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    if (ap.IsBound())
    {
      op->ShowViewContextMenu(temp0);
    }
    else
    {
      op->vtkMRMLInteractionNode::ShowViewContextMenu(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLInteractionNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLInteractionNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLInteractionNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLInteractionNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLInteractionNode\nC++: static vtkMRMLInteractionNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLInteractionNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLInteractionNode\nC++: vtkMRMLInteractionNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLInteractionNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLInteractionNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLInteractionNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"Copy", PyvtkMRMLInteractionNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLInteractionNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetCurrentInteractionMode", PyvtkMRMLInteractionNode_GetCurrentInteractionMode, METH_VARARGS,
   "GetCurrentInteractionMode(self) -> int\nC++: virtual int GetCurrentInteractionMode()\n\nGet/Set Current and Last mouse mode.\n"},
  {"SetCurrentInteractionMode", PyvtkMRMLInteractionNode_SetCurrentInteractionMode, METH_VARARGS,
   "SetCurrentInteractionMode(self, mode:int) -> None\nC++: void SetCurrentInteractionMode(int mode)\n\n"},
  {"GetLastInteractionMode", PyvtkMRMLInteractionNode_GetLastInteractionMode, METH_VARARGS,
   "GetLastInteractionMode(self) -> int\nC++: virtual int GetLastInteractionMode()\n\n"},
  {"SetLastInteractionMode", PyvtkMRMLInteractionNode_SetLastInteractionMode, METH_VARARGS,
   "SetLastInteractionMode(self, mode:int) -> None\nC++: void SetLastInteractionMode(int mode)\n\n"},
  {"GetPlaceModePersistence", PyvtkMRMLInteractionNode_GetPlaceModePersistence, METH_VARARGS,
   "GetPlaceModePersistence(self) -> int\nC++: virtual int GetPlaceModePersistence()\n\n"},
  {"GetTransformModePersistence", PyvtkMRMLInteractionNode_GetTransformModePersistence, METH_VARARGS,
   "GetTransformModePersistence(self) -> int\nC++: virtual int GetTransformModePersistence()\n\n"},
  {"SetPlaceModePersistence", PyvtkMRMLInteractionNode_SetPlaceModePersistence, METH_VARARGS,
   "SetPlaceModePersistence(self, val:int) -> None\nC++: virtual void SetPlaceModePersistence(int val)\n\nConvenience methods for setting modes without triggering events\non the node. These methods assist in distinguishing between\npersistent and transient mouse modes. TransformMode is persistent\nby default.\n"},
  {"SetTransformModePersistence", PyvtkMRMLInteractionNode_SetTransformModePersistence, METH_VARARGS,
   "SetTransformModePersistence(self, val:int) -> None\nC++: virtual void SetTransformModePersistence(int val)\n\n"},
  {"NormalizeAllMouseModes", PyvtkMRMLInteractionNode_NormalizeAllMouseModes, METH_VARARGS,
   "NormalizeAllMouseModes(self) -> None\nC++: virtual void NormalizeAllMouseModes()\n\n"},
  {"GetInteractionModeAsString", PyvtkMRMLInteractionNode_GetInteractionModeAsString, METH_VARARGS,
   "GetInteractionModeAsString(self, mode:int) -> str\nC++: const char *GetInteractionModeAsString(int mode)\nGetInteractionModeAsString(self) -> str\nC++: const char *GetInteractionModeAsString()\n\nReturn a text string describing the mode\n"},
  {"GetInteractionModeByString", PyvtkMRMLInteractionNode_GetInteractionModeByString, METH_VARARGS,
   "GetInteractionModeByString(self, modeString:str) -> int\nC++: int GetInteractionModeByString(const char *modeString)\n\nReturn the mode given a text string.\n"},
  {"SwitchToPersistentPlaceMode", PyvtkMRMLInteractionNode_SwitchToPersistentPlaceMode, METH_VARARGS,
   "SwitchToPersistentPlaceMode(self) -> None\nC++: void SwitchToPersistentPlaceMode()\n\nConvenience methods for the mouse mode tool bar to call\n"},
  {"SwitchToSinglePlaceMode", PyvtkMRMLInteractionNode_SwitchToSinglePlaceMode, METH_VARARGS,
   "SwitchToSinglePlaceMode(self) -> None\nC++: void SwitchToSinglePlaceMode()\n\n"},
  {"SwitchToViewTransformMode", PyvtkMRMLInteractionNode_SwitchToViewTransformMode, METH_VARARGS,
   "SwitchToViewTransformMode(self) -> None\nC++: void SwitchToViewTransformMode()\n\n"},
  {"GetEnableFiberEdit", PyvtkMRMLInteractionNode_GetEnableFiberEdit, METH_VARARGS,
   "GetEnableFiberEdit(self) -> int\nC++: virtual int GetEnableFiberEdit()\n\nEnable/Disable Editing of Fibers\n"},
  {"SetEnableFiberEdit", PyvtkMRMLInteractionNode_SetEnableFiberEdit, METH_VARARGS,
   "SetEnableFiberEdit(self, _arg:int) -> None\nC++: virtual void SetEnableFiberEdit(int _arg)\n\n"},
  {"EditNode", PyvtkMRMLInteractionNode_EditNode, METH_VARARGS,
   "EditNode(self, node:vtkMRMLNode) -> None\nC++: void EditNode(vtkMRMLNode *node)\n\nRequest the application to display user interface that allows\nediting of the node.\n"},
  {"ShowViewContextMenu", PyvtkMRMLInteractionNode_ShowViewContextMenu, METH_VARARGS,
   "ShowViewContextMenu(self, eventData:vtkMRMLInteractionEventData)\n    -> None\nC++: void ShowViewContextMenu(\n    vtkMRMLInteractionEventData *eventData)\n\nRequest the application to display view menu.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLInteractionNode_Doc =
  "vtkMRMLInteractionNode - no description provided.\n\n"
  "Superclass: vtkMRMLNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLInteractionNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLInteractionNode", // tp_name
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
  PyvtkMRMLInteractionNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLInteractionNode_StaticNew()
{
  return vtkMRMLInteractionNode::New();
}

PyObject *PyvtkMRMLInteractionNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLInteractionNode_Type, PyvtkMRMLInteractionNode_Methods,
    "vtkMRMLInteractionNode",
 &PyvtkMRMLInteractionNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 10; c++)
  {
    static const struct { const char *name; int value; }
      constants[10] = {
        { "Place", vtkMRMLInteractionNode::Place },
        { "ViewTransform", vtkMRMLInteractionNode::ViewTransform },
        { "Select", vtkMRMLInteractionNode::Select },
        { "AdjustWindowLevel", vtkMRMLInteractionNode::AdjustWindowLevel },
        { "User", vtkMRMLInteractionNode::User },
        { "InteractionModeChangedEvent", vtkMRMLInteractionNode::InteractionModeChangedEvent },
        { "InteractionModePersistenceChangedEvent", vtkMRMLInteractionNode::InteractionModePersistenceChangedEvent },
        { "EndPlacementEvent", vtkMRMLInteractionNode::EndPlacementEvent },
        { "EditNodeEvent", vtkMRMLInteractionNode::EditNodeEvent },
        { "ShowViewContextMenuEvent", vtkMRMLInteractionNode::ShowViewContextMenuEvent },
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

void PyVTKAddFile_vtkMRMLInteractionNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLInteractionNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLInteractionNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

