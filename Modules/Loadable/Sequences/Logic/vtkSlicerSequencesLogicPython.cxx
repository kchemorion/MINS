// python wrapper for vtkSlicerSequencesLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerSequencesLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerSequencesLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerSequencesLogic_ClassNew(); }


static PyObject *
PyvtkSlicerSequencesLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerSequencesLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSequencesLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSequencesLogic *op = static_cast<vtkSlicerSequencesLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerSequencesLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSequencesLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerSequencesLogic *tempr = vtkSlicerSequencesLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSequencesLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSequencesLogic *op = static_cast<vtkSlicerSequencesLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerSequencesLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerSequencesLogic::NewInstance());

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
PyvtkSlicerSequencesLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerSequencesLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSequencesLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSequencesLogic *op = static_cast<vtkSlicerSequencesLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerSequencesLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSequencesLogic_AddSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSequencesLogic *op = static_cast<vtkSlicerSequencesLogic *>(vp);

  const char *temp0 = nullptr;
  vtkMRMLMessageCollection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkMRMLMessageCollection")))
  {
    vtkMRMLSequenceNode *tempr = (ap.IsBound() ?
      op->AddSequence(temp0, temp1) :
      op->vtkSlicerSequencesLogic::AddSequence(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSequencesLogic_UpdateAllProxyNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAllProxyNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSequencesLogic *op = static_cast<vtkSlicerSequencesLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateAllProxyNodes();
    }
    else
    {
      op->vtkSlicerSequencesLogic::UpdateAllProxyNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSequencesLogic_UpdateProxyNodesFromSequences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateProxyNodesFromSequences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSequencesLogic *op = static_cast<vtkSlicerSequencesLogic *>(vp);

  vtkMRMLSequenceBrowserNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceBrowserNode"))
  {
    if (ap.IsBound())
    {
      op->UpdateProxyNodesFromSequences(temp0);
    }
    else
    {
      op->vtkSlicerSequencesLogic::UpdateProxyNodesFromSequences(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSequencesLogic_UpdateSequencesFromProxyNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSequencesFromProxyNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSequencesLogic *op = static_cast<vtkSlicerSequencesLogic *>(vp);

  vtkMRMLSequenceBrowserNode *temp0 = nullptr;
  vtkMRMLNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceBrowserNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->UpdateSequencesFromProxyNodes(temp0, temp1);
    }
    else
    {
      op->vtkSlicerSequencesLogic::UpdateSequencesFromProxyNodes(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSequencesLogic_UpdateVirtualOutputNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateVirtualOutputNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSequencesLogic *op = static_cast<vtkSlicerSequencesLogic *>(vp);

  vtkMRMLSequenceBrowserNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceBrowserNode"))
  {
    if (ap.IsBound())
    {
      op->UpdateVirtualOutputNodes(temp0);
    }
    else
    {
      op->vtkSlicerSequencesLogic::UpdateVirtualOutputNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSequencesLogic_AddSynchronizedNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSynchronizedNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSequencesLogic *op = static_cast<vtkSlicerSequencesLogic *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  vtkMRMLNode *temp1 = nullptr;
  vtkMRMLNode *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLNode") &&
      ap.GetVTKObject(temp2, "vtkMRMLNode"))
  {
    vtkMRMLSequenceNode *tempr = (ap.IsBound() ?
      op->AddSynchronizedNode(temp0, temp1, temp2) :
      op->vtkSlicerSequencesLogic::AddSynchronizedNode(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSequencesLogic_GetCompatibleNodesFromScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompatibleNodesFromScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSequencesLogic *op = static_cast<vtkSlicerSequencesLogic *>(vp);

  vtkCollection *temp0 = nullptr;
  vtkMRMLSequenceNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCollection") &&
      ap.GetVTKObject(temp1, "vtkMRMLSequenceNode"))
  {
    if (ap.IsBound())
    {
      op->GetCompatibleNodesFromScene(temp0, temp1);
    }
    else
    {
      op->vtkSlicerSequencesLogic::GetCompatibleNodesFromScene(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSequencesLogic_IsNodeCompatibleForBrowsing(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsNodeCompatibleForBrowsing");

  vtkMRMLSequenceNode *temp0 = nullptr;
  vtkMRMLSequenceNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLSequenceNode"))
  {
    bool tempr = vtkSlicerSequencesLogic::IsNodeCompatibleForBrowsing(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSequencesLogic_GetBrowserNodesForSequenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrowserNodesForSequenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSequencesLogic *op = static_cast<vtkSlicerSequencesLogic *>(vp);

  vtkMRMLSequenceNode *temp0 = nullptr;
  vtkCollection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceNode") &&
      ap.GetVTKObject(temp1, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->GetBrowserNodesForSequenceNode(temp0, temp1);
    }
    else
    {
      op->vtkSlicerSequencesLogic::GetBrowserNodesForSequenceNode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSequencesLogic_GetFirstBrowserNodeForSequenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstBrowserNodeForSequenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSequencesLogic *op = static_cast<vtkSlicerSequencesLogic *>(vp);

  vtkMRMLSequenceNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSequenceNode"))
  {
    vtkMRMLSequenceBrowserNode *tempr = (ap.IsBound() ?
      op->GetFirstBrowserNodeForSequenceNode(temp0) :
      op->vtkSlicerSequencesLogic::GetFirstBrowserNodeForSequenceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSequencesLogic_GetBrowserNodesForProxyNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrowserNodesForProxyNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSequencesLogic *op = static_cast<vtkSlicerSequencesLogic *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  vtkCollection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      ap.GetVTKObject(temp1, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->GetBrowserNodesForProxyNode(temp0, temp1);
    }
    else
    {
      op->vtkSlicerSequencesLogic::GetBrowserNodesForProxyNode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSequencesLogic_GetFirstBrowserNodeForProxyNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstBrowserNodeForProxyNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSequencesLogic *op = static_cast<vtkSlicerSequencesLogic *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    vtkMRMLSequenceBrowserNode *tempr = (ap.IsBound() ?
      op->GetFirstBrowserNodeForProxyNode(temp0) :
      op->vtkSlicerSequencesLogic::GetFirstBrowserNodeForProxyNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerSequencesLogic_Methods[] = {
  {"IsTypeOf", PyvtkSlicerSequencesLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerSequencesLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerSequencesLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerSequencesLogic\nC++: static vtkSlicerSequencesLogic *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerSequencesLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerSequencesLogic\nC++: vtkSlicerSequencesLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerSequencesLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerSequencesLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddSequence", PyvtkSlicerSequencesLogic_AddSequence, METH_VARARGS,
   "AddSequence(self, filename:str,\n    userMessages:vtkMRMLMessageCollection=...)\n    -> vtkMRMLSequenceNode\nC++: vtkMRMLSequenceNode *AddSequence(const char *filename,\n    vtkMRMLMessageCollection *userMessages=nullptr)\n\nAdd into the scene a new mrml sequence node and read its data\nfrom a specified file. A storage node is also added into the\nscene. User-displayable warning or error messages can be received\nif userMessages object is specified.\n"},
  {"UpdateAllProxyNodes", PyvtkSlicerSequencesLogic_UpdateAllProxyNodes, METH_VARARGS,
   "UpdateAllProxyNodes(self) -> None\nC++: void UpdateAllProxyNodes()\n\nRefreshes the output of all the active browser nodes. Called\nregularly by a timer.\n"},
  {"UpdateProxyNodesFromSequences", PyvtkSlicerSequencesLogic_UpdateProxyNodesFromSequences, METH_VARARGS,
   "UpdateProxyNodesFromSequences(self,\n    browserNode:vtkMRMLSequenceBrowserNode) -> None\nC++: void UpdateProxyNodesFromSequences(\n    vtkMRMLSequenceBrowserNode *browserNode)\n\nUpdates the contents of all the proxy nodes (all the nodes copied\nfrom the master and synchronized sequences to the scene)\n"},
  {"UpdateSequencesFromProxyNodes", PyvtkSlicerSequencesLogic_UpdateSequencesFromProxyNodes, METH_VARARGS,
   "UpdateSequencesFromProxyNodes(self,\n    browserNode:vtkMRMLSequenceBrowserNode, proxyNode:vtkMRMLNode)\n     -> None\nC++: void UpdateSequencesFromProxyNodes(\n    vtkMRMLSequenceBrowserNode *browserNode,\n    vtkMRMLNode *proxyNode)\n\nUpdates the sequence from a changed proxy node (if saving of\nstate changes is allowed)\n"},
  {"UpdateVirtualOutputNodes", PyvtkSlicerSequencesLogic_UpdateVirtualOutputNodes, METH_VARARGS,
   "UpdateVirtualOutputNodes(self,\n    browserNode:vtkMRMLSequenceBrowserNode) -> None\nC++: void UpdateVirtualOutputNodes(\n    vtkMRMLSequenceBrowserNode *browserNode)\n\nDeprecated method!\n"},
  {"AddSynchronizedNode", PyvtkSlicerSequencesLogic_AddSynchronizedNode, METH_VARARGS,
   "AddSynchronizedNode(self, sequenceNode:vtkMRMLNode,\n    proxyNode:vtkMRMLNode, browserNode:vtkMRMLNode)\n    -> vtkMRMLSequenceNode\nC++: vtkMRMLSequenceNode *AddSynchronizedNode(\n    vtkMRMLNode *sequenceNode, vtkMRMLNode *proxyNode,\n    vtkMRMLNode *browserNode)\n\nAdd a synchronized sequence node and virtual output node pair to\nthe browser node for playback/recording\n\\param sequenceNode Sequence node to add. If nullptr, then a new\n    node is created.\n\\param proxyNode Proxy node to use to represent selected item in\n    the scene. May be nullptr.\nReturns the added/created sequence node, nullptr on error.\n"},
  {"GetCompatibleNodesFromScene", PyvtkSlicerSequencesLogic_GetCompatibleNodesFromScene, METH_VARARGS,
   "GetCompatibleNodesFromScene(self, compatibleNodes:vtkCollection,\n    sequenceNode:vtkMRMLSequenceNode) -> None\nC++: void GetCompatibleNodesFromScene(\n    vtkCollection *compatibleNodes,\n    vtkMRMLSequenceNode *sequenceNode)\n\n"},
  {"IsNodeCompatibleForBrowsing", PyvtkSlicerSequencesLogic_IsNodeCompatibleForBrowsing, METH_VARARGS,
   "IsNodeCompatibleForBrowsing(masterNode:vtkMRMLSequenceNode,\n    testedNode:vtkMRMLSequenceNode) -> bool\nC++: static bool IsNodeCompatibleForBrowsing(\n    vtkMRMLSequenceNode *masterNode,\n    vtkMRMLSequenceNode *testedNode)\n\n"},
  {"GetBrowserNodesForSequenceNode", PyvtkSlicerSequencesLogic_GetBrowserNodesForSequenceNode, METH_VARARGS,
   "GetBrowserNodesForSequenceNode(self,\n    sequenceNode:vtkMRMLSequenceNode,\n    foundBrowserNodes:vtkCollection) -> None\nC++: void GetBrowserNodesForSequenceNode(\n    vtkMRMLSequenceNode *sequenceNode,\n    vtkCollection *foundBrowserNodes)\n\nGet collection of browser nodes that use a specific sequence\nnode.\n"},
  {"GetFirstBrowserNodeForSequenceNode", PyvtkSlicerSequencesLogic_GetFirstBrowserNodeForSequenceNode, METH_VARARGS,
   "GetFirstBrowserNodeForSequenceNode(self,\n    sequenceNode:vtkMRMLSequenceNode)\n    -> vtkMRMLSequenceBrowserNode\nC++: vtkMRMLSequenceBrowserNode *GetFirstBrowserNodeForSequenceNode(\n    vtkMRMLSequenceNode *sequenceNode)\n\nGet first browser node that use a specific sequence node. This is\na convenience method for cases when it is known that a sequence\nis only used in one browser node. In general case, use\nGetBrowserNodesForSequenceNode instead.\n"},
  {"GetBrowserNodesForProxyNode", PyvtkSlicerSequencesLogic_GetBrowserNodesForProxyNode, METH_VARARGS,
   "GetBrowserNodesForProxyNode(self, proxyNode:vtkMRMLNode,\n    foundBrowserNodes:vtkCollection) -> None\nC++: void GetBrowserNodesForProxyNode(vtkMRMLNode *proxyNode,\n    vtkCollection *foundBrowserNodes)\n\nGet collection of browser nodes that use a specific proxy node.\n"},
  {"GetFirstBrowserNodeForProxyNode", PyvtkSlicerSequencesLogic_GetFirstBrowserNodeForProxyNode, METH_VARARGS,
   "GetFirstBrowserNodeForProxyNode(self, proxyNode:vtkMRMLNode)\n    -> vtkMRMLSequenceBrowserNode\nC++: vtkMRMLSequenceBrowserNode *GetFirstBrowserNodeForProxyNode(\n    vtkMRMLNode *proxyNode)\n\nGet first browser node that use a specific proxy node. This is a\nconvenience method for cases when it is known that a proxy node\nis only used in one browser node. In general case, use\nGetBrowserNodesForProxyNode instead.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerSequencesLogic_Doc =
  "vtkSlicerSequencesLogic - slicer logic class for volumes manipulation\n\n"
  "Superclass: vtkSlicerModuleLogic\n\n"
  "This class manages the logic associated with reading, saving, and\n"
  "changing propertied of the volumes\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerSequencesLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerSequencesModuleLogicPython.vtkSlicerSequencesLogic", // tp_name
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
  PyvtkSlicerSequencesLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerSequencesLogic_StaticNew()
{
  return vtkSlicerSequencesLogic::New();
}

PyObject *PyvtkSlicerSequencesLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerSequencesLogic_Type, PyvtkSlicerSequencesLogic_Methods,
    "vtkSlicerSequencesLogic",
 &PyvtkSlicerSequencesLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSlicerModuleLogic");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerSequencesLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerSequencesLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerSequencesLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

