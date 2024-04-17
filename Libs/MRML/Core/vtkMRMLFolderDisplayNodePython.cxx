// python wrapper for vtkMRMLFolderDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLFolderDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLFolderDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLFolderDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLDisplayNode_ClassNew
extern "C" { PyObject *PyvtkMRMLDisplayNode_ClassNew(); }
#define DECLARED_PyvtkMRMLDisplayNode_ClassNew
#endif

static PyObject *
PyvtkMRMLFolderDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLFolderDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLFolderDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLFolderDisplayNode *op = static_cast<vtkMRMLFolderDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLFolderDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLFolderDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLFolderDisplayNode *tempr = vtkMRMLFolderDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLFolderDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLFolderDisplayNode *op = static_cast<vtkMRMLFolderDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLFolderDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLFolderDisplayNode::NewInstance());

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
PyvtkMRMLFolderDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLFolderDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLFolderDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLFolderDisplayNode *op = static_cast<vtkMRMLFolderDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLFolderDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLFolderDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLFolderDisplayNode *op = static_cast<vtkMRMLFolderDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLFolderDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLFolderDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLFolderDisplayNode *op = static_cast<vtkMRMLFolderDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLFolderDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLFolderDisplayNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLFolderDisplayNode *op = static_cast<vtkMRMLFolderDisplayNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->CopyContent(temp0, temp1);
    }
    else
    {
      op->vtkMRMLFolderDisplayNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLFolderDisplayNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLFolderDisplayNode *op = static_cast<vtkMRMLFolderDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLFolderDisplayNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLFolderDisplayNode_SetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLFolderDisplayNode *op = static_cast<vtkMRMLFolderDisplayNode *>(vp);

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
      op->vtkMRMLFolderDisplayNode::SetScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLFolderDisplayNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLFolderDisplayNode *op = static_cast<vtkMRMLFolderDisplayNode *>(vp);

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
      op->ProcessMRMLEvents(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLFolderDisplayNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLFolderDisplayNode_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLFolderDisplayNode *op = static_cast<vtkMRMLFolderDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkMRMLFolderDisplayNode::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLFolderDisplayNode_SetApplyDisplayPropertiesOnBranch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetApplyDisplayPropertiesOnBranch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLFolderDisplayNode *op = static_cast<vtkMRMLFolderDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetApplyDisplayPropertiesOnBranch(temp0);
    }
    else
    {
      op->vtkMRMLFolderDisplayNode::SetApplyDisplayPropertiesOnBranch(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLFolderDisplayNode_GetApplyDisplayPropertiesOnBranch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetApplyDisplayPropertiesOnBranch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLFolderDisplayNode *op = static_cast<vtkMRMLFolderDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetApplyDisplayPropertiesOnBranch() :
      op->vtkMRMLFolderDisplayNode::GetApplyDisplayPropertiesOnBranch());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLFolderDisplayNode_ChildDisplayNodesModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ChildDisplayNodesModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLFolderDisplayNode *op = static_cast<vtkMRMLFolderDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ChildDisplayNodesModified();
    }
    else
    {
      op->vtkMRMLFolderDisplayNode::ChildDisplayNodesModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLFolderDisplayNode_GetOverridingHierarchyDisplayNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetOverridingHierarchyDisplayNode");

  vtkMRMLDisplayableNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableNode"))
  {
    vtkMRMLDisplayNode *tempr = vtkMRMLFolderDisplayNode::GetOverridingHierarchyDisplayNode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLFolderDisplayNode_GetHierarchyVisibility(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetHierarchyVisibility");

  vtkMRMLDisplayableNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableNode"))
  {
    bool tempr = vtkMRMLFolderDisplayNode::GetHierarchyVisibility(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLFolderDisplayNode_GetHierarchyOpacity(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetHierarchyOpacity");

  vtkMRMLDisplayableNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableNode"))
  {
    double tempr = vtkMRMLFolderDisplayNode::GetHierarchyOpacity(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLFolderDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLFolderDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLFolderDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLFolderDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLFolderDisplayNode\nC++: static vtkMRMLFolderDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLFolderDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLFolderDisplayNode\nC++: vtkMRMLFolderDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLFolderDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLFolderDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLFolderDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"GetNodeTagName", PyvtkMRMLFolderDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"CopyContent", PyvtkMRMLFolderDisplayNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLFolderDisplayNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"SetScene", PyvtkMRMLFolderDisplayNode_SetScene, METH_VARARGS,
   "SetScene(self, scene:vtkMRMLScene) -> None\nC++: void SetScene(vtkMRMLScene *scene) override;\n\nMake sure display node and transform node are present and valid\n"},
  {"ProcessMRMLEvents", PyvtkMRMLFolderDisplayNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nProcess events from the MRML scene\n"},
  {"Modified", PyvtkMRMLFolderDisplayNode_Modified, METH_VARARGS,
   "Modified(self) -> None\nC++: void Modified() override;\n\nOverridden to be able to call modified on branch if necessary\n"},
  {"SetApplyDisplayPropertiesOnBranch", PyvtkMRMLFolderDisplayNode_SetApplyDisplayPropertiesOnBranch, METH_VARARGS,
   "SetApplyDisplayPropertiesOnBranch(self, on:bool) -> None\nC++: void SetApplyDisplayPropertiesOnBranch(bool on)\n\nSet/Get whether to apply display properties on the whole branch\n\\sa ApplyDisplayPropertiesOnBranch\n"},
  {"GetApplyDisplayPropertiesOnBranch", PyvtkMRMLFolderDisplayNode_GetApplyDisplayPropertiesOnBranch, METH_VARARGS,
   "GetApplyDisplayPropertiesOnBranch(self) -> bool\nC++: virtual bool GetApplyDisplayPropertiesOnBranch()\n\n"},
  {"ChildDisplayNodesModified", PyvtkMRMLFolderDisplayNode_ChildDisplayNodesModified, METH_VARARGS,
   "ChildDisplayNodesModified(self) -> None\nC++: void ChildDisplayNodesModified()\n\nCall modified event on display nodes in branch that allow\noverriding\n\\sa FolderDisplayOverrideAllowed\n"},
  {"GetOverridingHierarchyDisplayNode", PyvtkMRMLFolderDisplayNode_GetOverridingHierarchyDisplayNode, METH_VARARGS,
   "GetOverridingHierarchyDisplayNode(node:vtkMRMLDisplayableNode)\n    -> vtkMRMLDisplayNode\nC++: static vtkMRMLDisplayNode *GetOverridingHierarchyDisplayNode(\n    vtkMRMLDisplayableNode *node)\n\nGet display node from hierarchy that overrides the display\nproperties of a given displayable node. Note: Subject hierarchy\nfolders have display nodes associated to be able to\n  override display properties of a branch on the request of the\nuser\n"},
  {"GetHierarchyVisibility", PyvtkMRMLFolderDisplayNode_GetHierarchyVisibility, METH_VARARGS,
   "GetHierarchyVisibility(node:vtkMRMLDisplayableNode) -> bool\nC++: static bool GetHierarchyVisibility(\n    vtkMRMLDisplayableNode *node)\n\nGet visibility determined by the hierarchy. Visibility is\ninfluenced by the hierarchy regardless the fact whether there is\noverride or not. Visibility defined by hierarchy is off if any of\nthe ancestors is explicitly hidden.\n"},
  {"GetHierarchyOpacity", PyvtkMRMLFolderDisplayNode_GetHierarchyOpacity, METH_VARARGS,
   "GetHierarchyOpacity(node:vtkMRMLDisplayableNode) -> float\nC++: static double GetHierarchyOpacity(\n    vtkMRMLDisplayableNode *node)\n\nGet opacity determined by the hierarchy. Opacity is influenced by\nthe hierarchy regardless the fact whether there is override\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLFolderDisplayNode_Doc =
  "vtkMRMLFolderDisplayNode - MRML node to represent a display property\nfor child nodes of a\n       subject hierarchy folder.\n\n"
  "Superclass: vtkMRMLDisplayNode\n\n"
  "vtkMRMLFolderDisplayNode nodes stores display property of a generic\n"
  "displayable node, so that it can override display properties of its\n"
  "children when the user turns on that option.\n\n"
  "The class has no additional features compared to its base class, but\n"
  "since the base display node class is abstract, we need one that we\n"
  "can instantiate.\n\n"
  "Displayable managers must take into account parent folder display\n"
  "nodes as follows:\n\n"
  "If the \\sa ApplyDisplayPropertiesOnBranch flag is off, then the\n"
  "displayable node's own Visibility and Opacity properties must be\n"
  "combined with the corresponding values stored in the folder\n"
  "displayable (opacity = folderOpacity * ownOpacity; visibility =\n"
  "folderVisibility && ownVisibility).\n\n"
  "If the \\sa ApplyDisplayPropertiesOnBranch flag is on, then\n"
  "displayable node's own display node properties must be combined or\n"
  "replaced by the folder display nodes properties. Properties to\n"
  "combine: Visibility, Visibility3D, Visibility2D, Opacity. Properties\n"
  "to replace: all other properties stored in folder display node\n"
  "(Color, EdgeColor, SelectedColor, Ambient, Specular, etc.).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLFolderDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLFolderDisplayNode", // tp_name
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
  PyvtkMRMLFolderDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLFolderDisplayNode_StaticNew()
{
  return vtkMRMLFolderDisplayNode::New();
}

PyObject *PyvtkMRMLFolderDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLFolderDisplayNode_Type, PyvtkMRMLFolderDisplayNode_Methods,
    "vtkMRMLFolderDisplayNode",
 &PyvtkMRMLFolderDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLDisplayNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLFolderDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLFolderDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLFolderDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

